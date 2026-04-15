@echo off

copy file1.txt file2.txt && echo Success
copy file1.txt file2.txt || echo Failed

echo one && echo two && echo three
echo one || echo two || echo three
echo one && echo two || echo three

echo one & echo two & echo three

echo test && (
  echo passed
)

echo test || (
  echo failed
  exit /b 1
)

cmd > out.txt && echo done
cmd > out.txt || echo fail
cmd > out.txt & echo next
call mvn clean package -q || echo Build failed

REM Caret-escaped operators
echo foo ^&& bar
echo foo ^|| bar
echo foo ^&^& bar
