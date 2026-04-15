@echo off
setlocal enabledelayedexpansion

REM ============================================
REM  Realistic build script
REM ============================================

:: Configuration
set "PROJECT=MyApp"
set "BUILD_DIR=build"
set /a EXIT_CODE=0

:: Check prerequisites
if not defined JAVA_HOME (
  echo ERROR: JAVA_HOME is not set
  exit /b 1
)

if not exist "%BUILD_DIR%" (
  mkdir "%BUILD_DIR%"
) else (
  echo Cleaning %BUILD_DIR%
  del /q /s "%BUILD_DIR%\*" > nul 2>&1
)

:: Build steps
echo Building %PROJECT%...
call mvn clean package -q 2>&1 || (
  echo Build failed
  set /a EXIT_CODE=1
  goto :cleanup
)

:: Run tests
for /f "tokens=*" %%f in ('dir /b /s "target\*.jar"') do (
  echo Testing %%f...
  java -jar "%%f" --test > nul 2>&1
  if errorlevel 1 (
    echo FAIL: %%f
    set /a EXIT_CODE=1
  ) else (
    echo PASS: %%f
  )
)

:: Deploy
if %EXIT_CODE% EQU 0 (
  echo Deploying...
  copy /y "target\%PROJECT%.jar" "%BUILD_DIR%\" > nul
  echo Deploy complete
) else (
  echo Skipping deploy due to failures
)

:cleanup
echo Exit code: !EXIT_CODE!
endlocal
exit /b %EXIT_CODE%
