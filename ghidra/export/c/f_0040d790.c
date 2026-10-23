// FUNCTION: PORT1111 0x0040d790
// name: FUN_0040d790
// sig: undefined FUN_0040d790(void * param_1)


void __fastcall FUN_0040d790(void *param_1)

{
  short sVar1;
  short sVar2;
  void *this;
  int iVar3;
  int iVar4;
  uint local_10;
  int local_c;
  
  if ((((*(int *)((int)param_1 + 0x2c) != 0) && (*(int *)((int)param_1 + 0x3c) != 0)) &&
      (*(int *)((int)param_1 + 0x128) != 0)) &&
     (*(int *)((int)param_1 + 0x128) * 0x290 != -0x4bd65c)) {
    sVar1 = *(short *)(*(int *)((int)param_1 + 0x2c) + 0x4e);
    sVar2 = *(short *)(*(int *)((int)param_1 + 0x2c) + 0x4c);
    iVar3 = 0;
    do {
      iVar4 = 0;
      do {
        if (*(int *)(&DAT_004bd65c +
                    (*(int *)((int)param_1 + 0x128) * 0xa4 + iVar3 + iVar4 * 0xc) * 4) != 0) {
          local_10 = sVar1 + -7 + iVar3;
          local_c = sVar2 + -7 + iVar4;
          this = (void *)FUN_00429b00(DAT_004e2404,&local_10);
          if (this != (void *)0x0) {
            FUN_00428460(this,-(uint)(param_1 != (void *)0x14) & (uint)param_1);
            FUN_0041f0c0(param_1,(int)this);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xc);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
  }
  return;
}

