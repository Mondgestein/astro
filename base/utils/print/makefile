
!include "../../../config.mak"


AS = masm


all: print.com


print.com: print.obj
           link $<;
           exe2bin -q print.exe print.com
           copy $@ ..\..\..\binaries

.asm.obj:
          $(AS) $(AFLAGS) $*.asm;

