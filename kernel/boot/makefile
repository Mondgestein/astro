#
# makefile for DOS-C boot
#


!include "../mkfiles/generic.mak"

production:     fat12com.bin fat16com.bin fat32chs.bin fat32lba.bin oemfat12.bin oemfat16.bin

fat12com.bin:    boot.asm magic.mac
		$(NASM) -dISFAT12 $(NASMBOOTFLAGS) boot.asm -lfat12com.lst -ofat12com.bin

fat16com.bin:    boot.asm magic.mac
		$(NASM) -dISFAT16 $(NASMBOOTFLAGS) boot.asm -lfat16com.lst -ofat16com.bin

fat32chs.bin:    boot32.asm magic.mac
		$(NASM) $(NASMBOOTFLAGS) boot32.asm -lfat32chs.lst -ofat32chs.bin

fat32lba.bin:    boot32lb.asm magic.mac
		$(NASM) $(NASMBOOTFLAGS) boot32lb.asm -lfat32lba.lst -ofat32lba.bin

oemfat12.bin:   oemboot.asm magic.mac
		$(NASM) -dISFAT12 $(NASMBOOTFLAGS) oemboot.asm -loemfat12.lst -ooemfat12.bin

oemfat16.bin:   oemboot.asm magic.mac
		$(NASM) -dISFAT16 $(NASMBOOTFLAGS) oemboot.asm -loemfat16.lst -ooemfat16.bin

clobber:        clean
		-$(RM) *.bin status.me

clean:
		-$(RM) *.lst *.map *.bak *.obj

