@echo off
REM Basic batch script demonstrating fundamental constructs
:: Double-colon comment style

set "NAME=World"
set /a COUNT=42
set /p ANSWER=Enter value:
set EMPTY=

echo Hello %NAME%
echo Count is %COUNT%
echo Script path: %~dp0
echo First arg: %1
echo Modifier: %~f1

cls
dir /s /b
pause
