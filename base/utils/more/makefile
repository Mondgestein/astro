
!include "../../../config.mak"


LFLAGS = $(LFLAGS) -bcl=com


all: more.com


more.com: more.obj
          $(CL) $(LFLAGS) -fe=$@ $<
          upx --best --8086 $@
          copy $@ ..\..\..\binaries
