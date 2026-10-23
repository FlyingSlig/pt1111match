// FUNCTION: PORT1111 0x00432100
// name: FUN_00432100
// sig: undefined FUN_00432100(int param_1)


void __fastcall FUN_00432100(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x1fc);
    if (*(int *)(iVar1 + *(int *)(param_1 + 200) * 4) !=
        *(int *)(iVar1 + *(int *)(param_1 + 0xcc) * 4)) {
      *(undefined4 *)(param_1 + 0xbc) = 1;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      return;
    }
    bVar2 = FUN_0045e3f0((void *)(param_1 + 0x34));
    *(uint *)(param_1 + 0xb8) = CONCAT31(extraout_var,bVar2);
  }
  return;
}

