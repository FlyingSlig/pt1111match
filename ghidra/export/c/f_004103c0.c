// FUNCTION: PORT1111 0x004103c0
// name: FUN_004103c0
// sig: undefined4 FUN_004103c0(int * param_1, int * param_2, int param_3, int param_4)


undefined4 __cdecl FUN_004103c0(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_4 + 0x204);
  do {
    if (iVar2 < 1) {
      return 0;
    }
    if (param_3 == 0) {
      param_3 = 1;
    }
    iVar2 = *(int *)(param_4 + 0x204);
    iVar5 = DAT_004d5998 * param_3;
    iVar1 = iVar5 / (iVar2 * iVar2);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 0x101) {
      iVar2 = FUN_0043a0e0(iVar1);
      iVar2 = iVar2 / 2;
      if (iVar2 < *(int *)(param_4 + 0x210)) {
        iVar2 = FUN_0043a0a0(*(int *)(param_4 + 0x210));
        iVar1 = FUN_0043a0c0(*(int *)(param_4 + 0x210));
        iVar2 = iVar1 * iVar2 >> 7;
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = (iVar5 / iVar2) * -0x100;
        uVar3 = 0;
        uVar4 = 0x40000000;
        do {
          if ((iVar2 < (int)uVar4) ||
             (iVar1 = (iVar2 - uVar4) - uVar3, (int)(iVar2 - uVar4) < (int)uVar3)) {
            uVar3 = uVar3 >> 1;
          }
          else {
            uVar3 = uVar3 >> 1 | uVar4;
            iVar2 = iVar1;
          }
          uVar4 = uVar4 >> 2;
        } while (uVar4 != 0);
        iVar2 = (uVar3 & 0xffffff) << 4;
        if (iVar2 < *(int *)(param_4 + 0x208) * 0x100) {
          return 0;
        }
        *param_2 = iVar2;
        *param_1 = *(int *)(param_4 + 0x210);
        return 1;
      }
      if (iVar2 <= *(int *)(param_4 + 0x20c)) {
        *param_2 = *(int *)(param_4 + 0x204) << 8;
        *param_1 = iVar2;
        return 1;
      }
      *(int *)(param_4 + 0x204) = *(int *)(param_4 + 0x204) + 10;
    }
    else {
      *(int *)(param_4 + 0x204) = iVar2 + 10;
    }
    iVar2 = *(int *)(param_4 + 0x204);
  } while( true );
}

