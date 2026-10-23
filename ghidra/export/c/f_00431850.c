// FUNCTION: PORT1111 0x00431850
// name: FUN_00431850
// sig: undefined4 FUN_00431850(void)


undefined4 FUN_00431850(void)

{
  int *piVar1;
  void *this;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b75cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00414c30(DAT_004e240c);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  if ((void *)piVar1[0x17] != (void *)0x0) {
    FUN_00426b20((void *)piVar1[0x17],0);
  }
  piVar1[0x17] = 0;
  (**(code **)(**(int **)(piVar1[0x18] + 0x1c) + 0x10))(piVar1,1);
  this = operator_new(0x18);
  local_c = (void *)0x0;
  if (this == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0045c3e0(this,7,0,0);
  }
  local_c = (void *)0xffffffff;
  (**(code **)(**(int **)(piVar1[0x18] + 0x1c) + 0xc))(uVar2);
  (**(code **)(*piVar1 + 200))();
  ExceptionList = this;
  return 1;
}

