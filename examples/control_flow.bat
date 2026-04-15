@echo off

if exist "file.txt" echo Found
if not exist "file.txt" echo Missing
if defined MY_VAR echo Defined
if errorlevel 1 echo Failed
if "%VAR%"=="value" echo Match
if %COUNT% GEQ 10 echo Big

if exist "a.txt" (
  echo file-a found
) else (
  echo file-a missing
)

if not exist "a.txt" (
  if exist "b.txt" (
    echo only-b
  ) else (
    echo neither
  )
) else (
  echo has-a
)

:start
echo Looping
goto :eof

goto start
goto :start

call :subroutine arg1 arg2
call other.bat arg1 arg2

exit
exit /b 0
exit /b %ERRORLEVEL%

:subroutine
echo In subroutine
exit /b 0
