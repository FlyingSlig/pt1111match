// FUNCTION: PORT1111 0x004afd10
// name: FUN_004afd10
// sig: undefined4 FUN_004afd10(int * param_1, uint param_2)


undefined4 __cdecl FUN_004afd10(int *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  uVar1 = param_1[0x2c];
  for (; uVar1 < param_2; param_2 = param_2 - uVar1) {
    FUN_004afce0(param_1,(byte *)param_1[0x2b],param_1[0x2c]);
  }
  if (param_2 != 0) {
    FUN_004afce0(param_1,(byte *)param_1[0x2b],param_2);
  }
  bVar2 = FUN_004afdc0(param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x47) & 0x20) == 0) || ((param_1[0x1b] & 0x200U) != 0)) &&
     (((*(byte *)(param_1 + 0x47) & 0x20) != 0 || ((param_1[0x1b] & 0x400U) == 0)))) {
    FUN_004ac760(param_1,(undefined4 *)s_CRC_error_004dfa4c);
    return 1;
  }
  FUN_004ac820((int)param_1,(undefined4 *)s_CRC_error_004dfa4c);
  return 1;
}

