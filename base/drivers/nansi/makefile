
!include "../../../config.mak"


AS = masm


all: nansi.sys


nansi.sys: nansi.obj nansi_p.obj nansi_f.obj nansi_i.obj
           link $<;
           exe2bin -q nansi.exe nansi.sys
           copy $@ ..\..\..\binaries

.asm.obj:
          $(AS) $(AFLAGS) $*.asm;

