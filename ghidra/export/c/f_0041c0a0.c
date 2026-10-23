// FUNCTION: PORT1111 0x0041c0a0
// name: FUN_0041c0a0
// sig: undefined FUN_0041c0a0(int param_1)


void __fastcall FUN_0041c0a0(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *this;
  int iVar6;
  int iVar7;
  uint local_10;
  int local_c;
  
  iVar3 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x70) = 1;
  if (((iVar3 != 0) && (iVar7 = *(int *)(param_1 + 0x50), iVar7 != 0)) &&
     (iVar4 = *(int *)(iVar7 + 0x120), iVar4 != 0)) {
    sVar1 = *(short *)(iVar3 + 0x4e);
    iVar5 = *(int *)(iVar7 + 0x114);
    sVar2 = *(short *)(iVar3 + 0x4c);
    iVar3 = *(int *)(iVar7 + 0x118);
    iVar6 = 0;
    if (0 < *(int *)(iVar7 + 0x11c)) {
      do {
        iVar7 = 0;
        if (0 < *(int *)(*(int *)(param_1 + 0x50) + 0x11c)) {
          do {
            if (*(int *)(iVar4 + (*(int *)(*(int *)(param_1 + 0x50) + 0x11c) * iVar7 + iVar6) * 4)
                != 0) {
              local_c = (sVar2 - iVar3) + iVar7;
              local_10 = (sVar1 - iVar5) + iVar6;
              this = (void *)FUN_00429b00(DAT_004e2404,&local_10);
              if (this != (void *)0x0) {
                FUN_00428460(this,param_1 + 0x14);
                FUN_0041f0c0((void *)(param_1 + 0x14),(int)this);
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(*(int *)(param_1 + 0x50) + 0x11c));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(*(int *)(param_1 + 0x50) + 0x11c));
    }
    (**(code **)(*(int *)(param_1 + 0x14) + 4))();
  }
  return;
}

