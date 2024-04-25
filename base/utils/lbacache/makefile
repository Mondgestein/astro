
!include "../../../config.mak"


all: lbacache.com


lbacache.com: lbacache.asm
              nasm -DBIGGERBINS -DSANE_A20=1 -DMUTEFDWRERR=1 -o $@ $<
              copy $@ ..\..\..\binaries
