// FUNCTION: PORT1111 0x00452650
// name: FUN_00452650
// sig: undefined FUN_00452650(void * param_1, undefined4 * param_2)


void __cdecl FUN_00452650(void *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uchar *puVar2;
  
  bVar1 = FUN_00466ad0((void *)((int)param_1 + 0x94),param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    puVar2 = (uchar *)FUN_00465e00(param_2);
    FUN_004737d0(param_1,puVar2);
  }
  return;
}

