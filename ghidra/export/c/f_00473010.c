// FUNCTION: PORT1111 0x00473010
// name: FUN_00473010
// sig: undefined4 FUN_00473010(int * param_1)


undefined4 __fastcall FUN_00473010(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  int aiStack_1c [3];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b9e6b;
  local_c = ExceptionList;
  if (param_1[0x10] == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  if (param_1[0x25] != 0) {
    ExceptionList = &local_c;
    (**(code **)(*param_1 + 0x1c))();
    FUN_0047a740((void *)param_1[0x10],(uint)*(ushort *)(param_1[0x25] + 4));
    param_1[0x25] = 0;
  }
  this = operator_new(0x34);
  uStack_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0048f8c0(this,(int)param_1,0);
  }
  uStack_4 = 0xffffffff;
  param_1[0x25] = (int)puVar1;
  FUN_0047aa60((void *)param_1[0x10],(int)puVar1);
  (**(code **)(*param_1 + 0x30))(aiStack_1c);
  FUN_004786d0((void *)param_1[0x10],(int)this,aiStack_1c[0]);
  ExceptionList = pvStack_10;
  return 1;
}

