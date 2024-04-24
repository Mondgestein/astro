# Macros for building, deleting ########################################

CC=wcl -mt -bcl=com -s

RM=del


# Targets ##############################################################

all: attrib.com

attrib.com: attrib.c stpcpy.c types.h *.inc
	$(CC) attrib.c stpcpy.c


# Clean up #############################################################

clean:
	-$(RM) *.dsk
	-$(RM) *.swp
	-$(RM) *.bak
	-$(RM) *.obj
	-$(RM) *.com
	-$(RM) *.exe
