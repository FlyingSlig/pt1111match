// FUNCTION: PORT1111 0x0042d5a0
// name: FUN_0042d5a0
// sig: undefined FUN_0042d5a0(void * this, int * param_1)


void __thiscall FUN_0042d5a0(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  int local_4;
  
  iVar6 = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  iVar1 = FUN_00429690(DAT_004e2404,param_1,&local_10);
  if (iVar1 != 0) {
    *(uint *)((int)this + 0x10) = local_10;
    *(undefined4 *)((int)this + 0x14) = local_c;
    iVar1 = FUN_00429b00(DAT_004e2404,(uint *)((int)this + 0x10));
    if (*(void **)((int)this + 8) != (void *)0x0) {
      iVar5 = (int)*(short *)(iVar1 + 4);
      iVar1 = (int)*(short *)(iVar1 + 6);
      if (*(char *)(*(int *)((int)this + 0xc) + 100) != '\0') {
        iVar5 = iVar5 + 0x20;
        iVar1 = iVar1 + 0x10;
      }
      FUN_00478700(*(void **)((int)this + 8),iVar5,iVar1);
    }
    iVar1 = *(int *)(*(int *)((int)this + 0xc) + 0x34);
    if (iVar1 < *(int *)(*(int *)((int)this + 0xc) + 0x3c)) {
      do {
        iVar5 = *(int *)(*(int *)((int)this + 0xc) + 0x38);
        if (iVar5 < *(int *)(*(int *)((int)this + 0xc) + 0x40)) {
          do {
            FUN_00478010(*(void **)(*(int *)((int)this + 0x1c) + iVar6 * 4),0);
            FUN_00478010(*(void **)(*(int *)((int)this + 0x20) + iVar6 * 4),0);
            local_8 = *(int *)((int)this + 0x10) + iVar1;
            local_4 = *(int *)((int)this + 0x14) + iVar5;
            iVar2 = FUN_00429b00(DAT_004e2404,&local_8);
            if (iVar2 != 0) {
              this_00 = *(void **)((int)this + 0xc);
              iVar3 = FUN_00418fd0(this_00,iVar1 - *(int *)((int)this_00 + 0x34),
                                   iVar5 - *(int *)((int)this_00 + 0x38));
              if (iVar3 == 0) {
                bVar7 = true;
LAB_0042d709:
                FUN_00478010(*(void **)(*(int *)((int)this + 0x20) + iVar6 * 4),1);
                FUN_00478700(*(void **)(*(int *)((int)this + 0x20) + iVar6 * 4),
                             (int)*(short *)(iVar2 + 4),(int)*(short *)(iVar2 + 6));
              }
              else {
                iVar3 = FUN_00428400(iVar2);
                switch(iVar3) {
                case 0:
                  bVar7 = true;
                  break;
                case 1:
                  iVar3 = FUN_00419170(*(int *)((int)this + 0xc));
                  bVar7 = iVar3 == 0;
                  break;
                case 2:
                  FUN_00419170(*(int *)((int)this + 0xc));
                  bVar7 = *(char *)(*(int *)((int)this + 0xc) + 0x54) != '\0';
                  break;
                default:
                  bVar7 = false;
                }
                if ((DAT_004e2681 == '\0') ||
                   ((char)((int)(*(ushort *)(iVar2 + 0x3c) & DAT_004e2050) >>
                          ((byte)DAT_004e204c & 0x1f)) == '\x01')) {
                  if (bVar7) goto LAB_0042d709;
                }
                else {
                  bVar7 = false;
                }
                FUN_00478010(*(void **)(*(int *)((int)this + 0x1c) + iVar6 * 4),1);
                FUN_00478700(*(void **)(*(int *)((int)this + 0x1c) + iVar6 * 4),
                             (int)*(short *)(iVar2 + 4),(int)*(short *)(iVar2 + 6));
                *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
              }
              if ((*(int *)((int)this + 4) == 0) && (bVar7)) {
                uVar4 = 0;
              }
              else {
                uVar4 = 1;
              }
              *(undefined4 *)((int)this + 4) = uVar4;
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(*(int *)((int)this + 0xc) + 0x40));
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(*(int *)((int)this + 0xc) + 0x3c));
    }
  }
  return;
}

