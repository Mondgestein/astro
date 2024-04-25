
!include "../../../config.mak"


CFLAGS = $(CFLAGS) -j -wx -ms -oahls -s


all: mem.exe


mem.exe: mem.obj prf.obj kitten.obj
         $(CL) $(LFLAGS) -fe=$@ $<
         copy $@ ..\..\..\binaries
