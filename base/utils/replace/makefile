
!include "../../../config.mak"


CFLAGS = $(CFLAGS) -ms


all: replace.exe


replace.exe: replace.obj tcc2wat.obj
             $(CL) $(LFLAGS) -fe=$@ $<
             copy $@ ..\..\..\binaries
