
!include "../../../config.mak"


CFLAGS = $(CFLAGS) -oas -bt=DOS -D__MSDOS__ -zp1 -s -wx -we


all: label.exe


label.exe: label.obj kitten.obj prf.obj
           $(CL) $(LFLAGS) -fe=$@ $<
           copy $@ ..\..\..\binaries
