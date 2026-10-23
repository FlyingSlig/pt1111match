// FUNCTION: PORT1111 0x00477f20
// name: FUN_00477f20
// sig: undefined4 * FUN_00477f20(int param_1)


undefined4 * __fastcall FUN_00477f20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba16b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x30);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_004c65e8;
    FUN_00465cf0(puVar1 + 2);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 1;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[7] = 0;
    this = puVar1;
  }
  local_4 = 0xffffffff;
  this[6] = 0;
  iVar2 = FUN_00477b80(this,param_1);
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return this;
  }
  (**(code **)*this)(1);
  ExceptionList = puVar1;
  return (undefined4 *)0x0;
}

