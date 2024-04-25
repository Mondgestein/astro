
!include "../../../turbo.mak"


CFLAGS = $(CFLAGS) -w -k-


all: more.exe


more.exe: more.c kitten.c tcdummy.c talloc.c prf.c lfnapi.c l2s95.c find95.c
          $(CC) $(CFLAGS) -e$@ $<
          copy $@ ..\..\..\binaries
