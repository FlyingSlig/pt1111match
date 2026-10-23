// FUNCTION: PORT1111 0x004359a0
// name: FUN_004359a0
// sig: undefined4 FUN_004359a0(uint param_1)


undefined4 FUN_004359a0(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_c;
  undefined2 local_8 [2];
  undefined2 local_4 [2];
  
  uVar2 = FUN_004390f0(param_1,(int *)&param_1,&local_c,(int *)local_4,(undefined4 *)local_8);
  if ((char)uVar2 != '\0') {
    iVar3 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar2 = FUN_00475080(iVar3);
      if (uVar2 != 0) {
        piVar1 = (int *)(uVar2 + 0x14);
        iVar3 = *(int *)(*piVar1 + 4);
        if ((iVar3 != 0) && (uVar2 = 0, *(int *)(*piVar1 + 8) - iVar3 >> 2 != 0)) {
          iVar3 = FUN_00475080(*(int *)(DAT_004e2b14 + 0xf8));
          uVar2 = 0;
          if (iVar3 != 0) {
            *(undefined2 *)(iVar3 + 0x40) = local_4[0];
            *(undefined2 *)(iVar3 + 0x42) = local_8[0];
            return CONCAT31((int3)((uint)iVar3 >> 8),1);
          }
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}

