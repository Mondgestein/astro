
!include "../../../config.mak"


CFLAGS = $(CFLAGS) -oas -s -wx -we


all: choice.exe


choice.exe: choice.obj prf.obj talloc.obj tcdummy.obj kitten.obj
            $(CL) $(LFLAGS) -fe=$@ $<
            copy $@ ..\..\..\binaries
