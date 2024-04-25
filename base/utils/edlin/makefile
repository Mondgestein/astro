
!include "../../../config.mak"


CFLAGS = $(CFLAGS) -fi=nl_types.h #-dUSE_CATGETS


all: edlin.exe


edlin.exe: edlin.obj edlib.obj dynstr.obj defines.obj
           $(CL) $(LFLAGS) -fe=$@ $<
           copy $@ ..\..\..\binaries
