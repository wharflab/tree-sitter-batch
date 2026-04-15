@echo off

for %%i in (*.txt) do echo %%i

for /l %%i in (1,1,10) do echo %%i

for /f "tokens=1,2 delims=," %%a in (data.csv) do echo %%a %%b

for /d %%d in (*) do echo Dir: %%d

for /r %%f in (*.log) do echo Log: %%f

for %%x in (a b c) do (
  echo Item: %%x
)
