@echo off

echo hello > output.txt
echo more >> output.txt
dir > nul
dir 2>nul
sort 0<input.txt

dir | find "test"
type file.txt | sort | more

echo output > file.txt 2>&1
cmd 2>&1
cmd >nul 2>&1
dir /s 2>errors.log >listing.txt
