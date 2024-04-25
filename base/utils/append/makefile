
!include "../../../config.mak"


all: append.exe


append.exe: append.asm
            nasm -dNEW_NASM -fbin -o $@ $<
            copy $@ ..\..\..\binaries
