// FUNCTION: PORT1111 0x0044b300
// name: FUN_0044b300
// sig: undefined4 FUN_0044b300(undefined4 * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0044b300(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)*param_1)(param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(_DAT_004c4c10 + 0xc))(&DAT_004c4c10);
    if (-1 < iVar1) {
      piVar2 = (int *)&DAT_004c4c10;
      iVar1 = (*(code *)param_1[5])(&param_1);
      if (-1 < iVar1) {
        (**(code **)(*piVar2 + 8))(piVar2);
        return 0;
      }
      (**(code **)(*piVar2 + 0xc))(piVar2,0);
    }
    (*(code *)param_1[2])(&param_1);
  }
  return 0x80004005;
}

