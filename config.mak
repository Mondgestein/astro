
CC = *wcc
CL = *wcl

CFLAGS = -zq -0
LFLAGS = -zq


.c.obj:
        $(CC) $(CFLAGS) -fo=$*.obj $*.c

