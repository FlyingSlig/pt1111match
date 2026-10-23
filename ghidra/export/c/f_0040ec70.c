// FUNCTION: PORT1111 0x0040ec70
// name: FUN_0040ec70
// sig: undefined4 FUN_0040ec70(undefined4 * param_1)


undefined4 __fastcall FUN_0040ec70(undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 *puVar3;
  
  bVar1 = FUN_00404900(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_004750e0(*(void **)(DAT_004e2b14 + 0xf8),0x19,2);
    if (iVar2 != 0) {
      puVar3 = FUN_00479800(iVar2);
      param_1[0x17] = puVar3;
      FUN_00477ae0((void *)param_1[1],puVar3,1);
      *(uint *)(param_1[0x17] + 0x28) = *(uint *)(param_1[0x17] + 0x28) | 4;
      *(uint *)(param_1[0x17] + 0x28) = *(uint *)(param_1[0x17] + 0x28) | 0x10;
      FUN_00478250((void *)param_1[0x17],0x14);
      FUN_004787e0(param_1[0x17]);
      FUN_004176e0(DAT_004e240c,param_1[0x17]);
      return 1;
    }
  }
  return 0;
}

