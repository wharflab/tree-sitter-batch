@echo off

REM Standard variables
echo %PATH%
echo %USERNAME%
echo %ERRORLEVEL%

REM Positional parameters
echo %0 %1 %2 %3

REM Parameter modifiers
echo %~dp0
echo %~f1
echo %~nx0

REM Delayed expansion
setlocal enabledelayedexpansion
set "VAR=initial"
echo !VAR!
endlocal

REM Substring extraction
set "STR=Hello World"
echo %STR:~0,5%
echo %STR:~6%

REM String replacement
set "PATH_VAR=C:\old\path"
echo %PATH_VAR:old=new%

REM Quoted set with spaces
set "EMPTY="

REM FOR variable with tilde modifier
for %%i in (*.txt) do echo %%~i
