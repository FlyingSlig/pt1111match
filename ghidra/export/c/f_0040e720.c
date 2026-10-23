// FUNCTION: PORT1111 0x0040e720
// name: FUN_0040e720
// sig: undefined4 FUN_0040e720(undefined4 * param_1)


undefined4 __fastcall FUN_0040e720(undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  
  bVar1 = FUN_00404900(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar3 = 0;
    iVar2 = FUN_0045f070(param_1[6]);
    if (0 < iVar2) {
      do {
        iVar2 = FUN_0045f080((void *)param_1[6],iVar3);
        if (iVar2 != 0) {
          FUN_0045f080((void *)param_1[6],iVar3);
          iVar2 = FUN_00475080(param_1[1]);
          *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 0x400;
        }
        iVar3 = iVar3 + 1;
        iVar2 = FUN_0045f070(param_1[6]);
      } while (iVar3 < iVar2);
    }
    return 1;
  }
  return 0;
}

