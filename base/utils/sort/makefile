
!include "../../../turbo.mak"


CFLAGS = $(CFLAGS) -w -f- -a- -K -ln -mc -N -k-


all: sort.exe


sort.exe: sort.c lfnapi.c l2s95.c kitten.c
          $(CC) $(CFLAGS) -e$@ $<
          copy $@ ..\..\..\binaries
