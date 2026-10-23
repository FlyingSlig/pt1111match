// FUNCTION: PORT1111 0x00412a60
// name: FUN_00412a60
// sig: undefined FUN_00412a60(void * param_1)


void __fastcall FUN_00412a60(void *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  void *this;
  int iVar5;
  int iVar6;
  uint local_10;
  int local_c;
  
  if (((*(int *)((int)param_1 + 0x2c) != 0) && (iVar5 = *(int *)((int)param_1 + 0x3c), iVar5 != 0))
     && (*(int *)(iVar5 + 0x120) != 0)) {
    sVar1 = *(short *)(*(int *)((int)param_1 + 0x2c) + 0x4e);
    sVar2 = *(short *)(*(int *)((int)param_1 + 0x2c) + 0x4c);
    iVar3 = *(int *)(iVar5 + 0x114);
    iVar4 = *(int *)(iVar5 + 0x118);
    iVar5 = *(int *)(iVar5 + 0x11c);
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            if (*(int *)(*(int *)(*(int *)((int)param_1 + 0x3c) + 0x120) +
                        (*(int *)(*(int *)((int)param_1 + 0x3c) + 0x11c) * iVar5 + iVar6) * 4) != 0)
            {
              local_10 = (sVar1 - iVar3) + iVar6;
              local_c = (sVar2 - iVar4) + iVar5;
              this = (void *)FUN_00429b00(DAT_004e2404,&local_10);
              if (this != (void *)0x0) {
                FUN_00428460(this,-(uint)(param_1 != (void *)0x14) & (uint)param_1);
                FUN_0041f0c0(param_1,(int)this);
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(*(int *)((int)param_1 + 0x3c) + 0x11c));
        }
        iVar5 = *(int *)(*(int *)((int)param_1 + 0x3c) + 0x11c);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
  }
  return;
}

