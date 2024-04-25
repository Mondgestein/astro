
!include "../../../turbo.mak"


CFLAGS = $(CFLAGS) -DUSE_KITTEN -DINLINE -d -k- -a -w -ms


all: move.exe


move.exe: move.c misc.c movedir.c kitten.c
          $(CC) $(CFLAGS) -e$@ $<
          copy $@ ..\..\..\binaries
