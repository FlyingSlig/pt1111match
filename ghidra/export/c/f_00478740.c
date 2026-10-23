// FUNCTION: PORT1111 0x00478740
// name: FUN_00478740
// sig: uint FUN_00478740(void * param_1)


uint __fastcall FUN_00478740(void *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  uint uVar4;
  
  FUN_0041f5e0(param_1);
  sVar1 = *(short *)((int)param_1 + 0x2e);
  uVar4 = CONCAT22(extraout_var,sVar1);
  if (sVar1 != -1) {
    iVar2 = *(int *)(*(int *)((int)param_1 + 0x14) + 4);
    iVar3 = *(int *)(iVar2 + sVar1 * 4);
    uVar4 = iVar2 + sVar1 * 4;
    if (iVar3 != 0) {
      uVar4 = FUN_0047bea0(*(undefined2 **)(iVar3 + 0xc));
      return uVar4;
    }
  }
  return uVar4;
}

