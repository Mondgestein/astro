
!include "../../../config.mak"


all: setver.sys


setver.sys: setver.asm
            nasm -o $@ $<
            copy $@ ..\..\..\binaries
