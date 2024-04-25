
!include "../../../turbo.mak"


CFLAGS = $(CFLAGS) -lt -mt -w -a- -f-


all: diskcomp.com


diskcomp.com: diskcomp.c misc.c md5.c drive.c
              $(CC) $(CFLAGS) -e$@ $<
              copy $@ ..\..\..\binaries
