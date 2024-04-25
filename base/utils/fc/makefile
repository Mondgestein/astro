
!include "../../../turbo.mak"


CFLAGS = $(CFLAGS) -ml


all: fc.exe


fc.exe: fc.c fctools.c kitten.c
        $(CC) $(CFLAGS) -e$@ $<
        copy $@ ..\..\..\binaries
