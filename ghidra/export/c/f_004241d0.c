// FUNCTION: PORT1111 0x004241d0
// name: FUN_004241d0
// sig: undefined4 FUN_004241d0(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_004241d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6deb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00423b90((int)this);
  puVar3 = param_1;
  uVar4 = FUN_00424310((int)param_1);
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      param_1 = operator_new(0x218);
      this_00 = (undefined4 *)0x0;
      local_4 = 0;
      if (param_1 != (undefined4 *)0x0) {
        this_00 = FUN_00421e10(param_1);
      }
      local_4 = 0xffffffff;
      param_1 = this_00;
      FUN_00422ad0(this_00,puVar3);
      this_00[0x14] = (uVar5 != 1) + 1;
      iVar1 = *(int *)((int)this + 8);
      if ((iVar1 == 0) ||
         ((uint)(*(int *)((int)this + 0x10) - iVar1 >> 2) <=
          (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))) {
        FUN_00423fc0((void *)((int)this + 4),*(undefined4 **)((int)this + 0xc),1,&param_1);
      }
      else {
        puVar2 = *(undefined4 **)((int)this + 0xc);
        *puVar2 = this_00;
        *(undefined4 **)((int)this + 0xc) = puVar2 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  ExceptionList = local_c;
  return 0;
}

