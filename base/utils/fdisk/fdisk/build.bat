@echo off
rem   GO.BAT
rem   This batch file will compile Free FDISK if Borland TC++ 3.0
rem   is installed (and properly configured) and Apack is in the PATH.

rem make clobber
c:\tcpp\bin\make all
rem c:\binnt\upx fdisk.exe
@echo on

