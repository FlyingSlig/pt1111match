// FUNCTION: PORT1111 0x0041dbc0
// name: FUN_0041dbc0
// sig: int FUN_0041dbc0(void * param_1)


int __fastcall FUN_0041dbc0(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uchar *extraout_ECX;
  uchar *puVar3;
  
  bVar1 = FUN_00465ec0((undefined4 *)((int)param_1 + 4));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return 0;
  }
  puVar3 = extraout_ECX;
  FUN_00466b20(&stack0xfffffff0,(undefined4 *)((int)param_1 + 4));
  iVar2 = FUN_0041d450(param_1,puVar3);
  return iVar2;
}

