// FUNCTION: PORT1111 0x004053b0
// name: FUN_004053b0
// sig: undefined4 FUN_004053b0(void * this, void * param_1)


undefined4 __thiscall FUN_004053b0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b598b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004127c0(this,(int)param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00424310((int)param_1);
    *(undefined4 *)((int)this + 100) = uVar2;
    FUN_004243d0(param_1,(undefined4 *)((int)this + 0x68),(char *)0x6);
    uVar2 = FUN_00424310((int)param_1);
    *(undefined4 *)((int)this + 0x74) = uVar2;
    iVar1 = FUN_00424310((int)param_1);
    *(int *)((int)this + 0x7c) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x60) + 8) = 1;
      puVar3 = operator_new(0x34);
      local_4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_004317a0(puVar3);
      }
      piVar4[1] = *(int *)((int)this + 0x10);
      local_4 = 0xffffffff;
      FUN_00412e90(piVar4);
    }
    uVar2 = FUN_00424310((int)param_1);
    *(undefined4 *)((int)this + 0x80) = uVar2;
    uVar2 = FUN_00424310((int)param_1);
    *(undefined4 *)((int)this + 0xd8) = uVar2;
    if (0x18 < *(int *)((int)param_1 + 8)) {
      iVar1 = FUN_00424310((int)param_1);
      if (iVar1 == 1) {
        FUN_004449c0(*(void **)((int)this + 0xb0),1);
      }
    }
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

