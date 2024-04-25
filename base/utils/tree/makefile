
!include "../../../turbo.mak"


CFLAGS = $(CFLAGS) -mt -lt -w-par -DUSE_CATGETS


all: tree.com


tree.com: tree.c getopt.c catgets.c db.c get_line.c
          $(CC) $(CFLAGS) -e$@ $<
          copy $@ ..\..\..\binaries
