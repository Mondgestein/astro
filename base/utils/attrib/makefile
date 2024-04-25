
!include "../../../config.mak"


CFLAGS = $(CFLAGS) -ms -s


all: attrib.com


attrib.com: attrib.obj stpcpy.obj
            $(CL) $(LFLAGS) -bcl=com -fe=$@ $<
            copy $@ ..\..\..\binaries
