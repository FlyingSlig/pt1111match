// FUNCTION: PORT1111 0x0047e100
// name: FUN_0047e100
// sig: undefined4 FUN_0047e100(void * this, int * param_1, int param_2)


undefined4 __thiscall FUN_0047e100(void *this,int *param_1,int param_2)

{
  int iVar1;
  uchar *puVar2;
  undefined4 uVar3;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_00465cf0(&local_10);
  iVar1 = *(int *)((int)this + 8) + 1;
  *(int *)((int)this + 8) = iVar1;
  local_4 = 0;
  FUN_00466970(&local_10,(byte *)"ID_%d");
  *(short *)(param_1 + 0xb) = (short)iVar1;
  puVar2 = (uchar *)FUN_00465e00(&local_10);
  FUN_00466a40(param_1 + 9,puVar2);
  uVar3 = FUN_0047df20(this,param_1,param_2);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return uVar3;
}

