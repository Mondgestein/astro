
!include "../../../config.mak"


all: nlsfunc.exe


nlsfunc.exe: nlsfunc.asm
             nasm -dNEW_NASM -fbin -o $@ $<
             copy $@ ..\..\..\binaries
