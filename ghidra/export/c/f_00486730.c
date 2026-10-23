// FUNCTION: PORT1111 0x00486730
// name: FUN_00486730
// sig: int FUN_00486730(int * param_1, undefined4 * param_2)


int FUN_00486730(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint unaff_ESI;
  
  puVar2 = param_2;
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return -0x7ffbfe10;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  iVar3 = (**(code **)(*param_1 + 0x24))(param_1,&param_1);
  if (-1 < iVar3) {
    if ((unaff_ESI & 2) != 0) {
      do {
        iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1);
        if (iVar3 == -0x7787ff6a) {
          Sleep(10);
        }
        iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1);
      } while (iVar3 != 0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 1;
      }
      return 0;
    }
    iVar3 = 1;
  }
  return iVar3;
}

