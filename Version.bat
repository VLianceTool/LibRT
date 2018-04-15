@echo off
echo.
echo  -----Clang Version-----
call "bin/clang++" --target=i686-w64-mingw32 -v
echo.

echo  -----MinGW Version-----
call "bin/c++" --version
echo.

echo.
pause