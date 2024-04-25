
!include "../../../config.mak"


CFLAGS = $(CFLAGS) -wx -ms -fpc -zp1


all: format.exe


format.exe: createfs.obj floppy.obj hdisk.obj main.obj savefs.obj bcread.obj prf.obj userint.obj driveio.obj getopt.obj init.obj recordbc.obj uformat.obj
            $(CL) $(LFLAGS) -fe=$@ $<
            copy $@ ..\..\..\binaries
