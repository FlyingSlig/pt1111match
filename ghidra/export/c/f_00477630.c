// FUNCTION: PORT1111 0x00477630
// name: FUN_00477630
// sig: undefined4 * FUN_00477630(void * this, uchar * param_1, undefined4 param_2)


undefined4 * __thiscall FUN_00477630(void *this,uchar *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba14b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x78);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0047f360(puVar1);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_0047ed50(puVar1,param_1,param_2);
  if (iVar2 == 0) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  if (puVar1[0xf] == 0) {
    iVar2 = *(int *)((int)this + 0x30) + 1;
    *(int *)((int)this + 0x30) = iVar2;
    puVar1[0xd] = iVar2;
    FUN_004770c0(this,(int)puVar1);
  }
  puVar1[0xf] = puVar1[0xf] + 1;
  ExceptionList = local_c;
  return puVar1;
}

