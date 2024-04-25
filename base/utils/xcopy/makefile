
!include "../../../turbo.mak"


CFLAGS = $(CFLAGS) -w -f- -a- -k- -K -ln


all: xcopy.exe


xcopy.exe: xcopy.c kitten.c prf.c
           $(CC) $(CFLAGS) -e$@ $<
           copy $@ ..\..\..\binaries
