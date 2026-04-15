---
name: pr-comment
description: handling GitHub PR comments with proper replies
argument-hint: comment link (e.g. https://github.com/wharflab/tally/pull/134#discussion_r2815672223)
---

# PR Comment Handler

You are handling a GitHub PR review comment. Follow this procedure exactly:

## Step 1: Parse the URL

The user will provide a URL in this format:

```text
https://github.com/<owner>/<repo>/pull/<PR_NUMBER>#discussion_r<COMMENT_ID>
```

Extract:

- `owner` and `repo` from the URL
- `PR_NUMBER` - digits between `/pull/` and `#`
- `COMMENT_ID` - digits after `discussion_r`

## Step 2: Fetch Comment Details

Use this command to fetch the comment:

```bash
gh api repos/<owner>/<repo>/pulls/comments/<COMMENT_ID> \
  --jq '
"id:         \(.id)
pr_number:   \(.pull_request_url | split("/") | last)
author:      \(.user.login)
created_at:  \(.created_at)
file:        \(.path)
line:        \(.start_line // .line)
--- BEGIN_BODY ---
\(.body)
--- END_BODY ---"'
```

Display this information to the user.

## Step 3: Apply ALL Suggestions

**CRITICAL RULES:**

- Verify each finding against the current code and only fix it if confirmed by code.
- Ideally, start with adding a regression test if comment is about a potential bug
- If user is giving you a link to "nitpicks" comment that means it is MANDATORY to fix in this PR
- NO TODOs, NO placeholders, NO deferred fixes, NO linting disabling comments
- Read the relevant files and make the changes requested
- If the comment references multiple issues, fix all of them
- If unclear, make your best judgment and proceed

## Step 4: Commit and Push

After applying all changes:

1. Stage the changed files
2. Create a commit with this format:

   ```text
   fix: address PR review comment

   <brief description of what was changed>

   Addresses: https://github.com/<owner>/<repo>/pull/<PR_NUMBER>#discussion_r<COMMENT_ID>
   ```

3. Push to the current branch
4. Capture the short commit SHA (7 chars)

## Step 5: Reply to Comment

Reply DIRECTLY to the specific comment (not a new review, not a top-level comment):

```bash
gh api repos/<owner>/<repo>/pulls/<PR_NUMBER>/comments/<COMMENT_ID>/replies \
  -X POST -f body='✅ Addressed in <short-sha>. Thanks @<author>!' --jq '"💬 Replied to comment \(.in_reply_to_id)"'
```

Replace:

- `<short-sha>` with the 7-character commit hash
- `<author>` with the comment author’s username, dropping `[bot]` suffix if any

IMPORTANT: the above API WORKS! If you are getting 404 or similar error - verify that you've
built the URL correctly, don't fallback to post a generic comment on PR!

## Output Format

Show the user:

1. ✅ Comment details fetched
2. ✅ Changes applied to: [list of files]
3. ✅ Committed as: [short-sha]
4. ✅ Replied to comment: [comment URL]

## Error Handling

If any step fails:

- Report the exact error
- Show what was completed
- Ask user how to proceed
