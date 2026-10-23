// FUNCTION: PORT1111 0x00450c30
// name: FUN_00450c30
// sig: uint FUN_00450c30(int param_1, byte * param_2, uint param_3)


uint __cdecl FUN_00450c30(int param_1,byte *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    piVar1 = (int *)(param_1 + 0x30);
    *piVar1 = (int)param_2;
    *(uint *)(param_1 + 0x34) = param_3;
    uVar2 = FUN_0045fb90(*(uint *)(param_1 + 0x408c),param_2,param_3);
    *(uint *)(param_1 + 0x408c) = uVar2;
    while( true ) {
      if (*(int *)(param_1 + 0x34) == 0) {
        return uVar5;
      }
      if (*(int *)(param_1 + 0x40) == 0) {
        iVar3 = FUN_00450b40();
        if (iVar3 == -1) {
          uVar5 = 0xffffffff;
        }
        *(undefined4 *)(param_1 + 0x40) = 0x4000;
        *(int *)(param_1 + 0x3c) = param_1 + 0x88;
      }
      if (uVar5 != 0) break;
      if ((*(int *)(param_1 + 0x80) == 8) && (*(int *)(param_1 + 0x84) == 0)) {
        iVar3 = *(int *)(param_1 + 0x44);
        uVar5 = FUN_00460550(piVar1,0);
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + (*(int *)(param_1 + 0x44) - iVar3);
        if (uVar5 != 0) {
          return uVar5;
        }
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x40);
        if (*(uint *)(param_1 + 0x34) < *(uint *)(param_1 + 0x40)) {
          uVar2 = *(uint *)(param_1 + 0x34);
        }
        uVar4 = 0;
        if (uVar2 != 0) {
          do {
            *(undefined1 *)(uVar4 + *(int *)(param_1 + 0x3c)) = *(undefined1 *)(uVar4 + *piVar1);
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar2);
        }
        *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - uVar2;
        *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - uVar2;
        *piVar1 = *piVar1 + uVar2;
        *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + uVar2;
        *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar2;
        *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar2;
        *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar2;
      }
    }
    return uVar5;
  }
  return 0xffffff9a;
}

