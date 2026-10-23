// FUNCTION: PORT1111 0x0047aaa0
// name: FUN_0047aaa0
// sig: undefined4 FUN_0047aaa0(void * this, void * param_1)


undefined4 __thiscall FUN_0047aaa0(void *this,void *param_1)

{
  undefined4 *puVar1;
  void *this_00;
  void *pvVar2;
  undefined4 *this_01;
  int iVar3;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba336;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048a110(param_1,(int)this + 4);
  FUN_0048a110(this_00,(int)this + 8);
  FUN_0048a110(this_00,(int)this + 0x10);
  FUN_0048a0f0(this_00,&param_1);
  FUN_0048a110(this_00,&local_18);
  pvVar2 = operator_new(0x10);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 0x14) = pvVar2;
  FUN_004790c0(pvVar2,local_18);
  local_14 = 0;
  if (0 < (int)local_18) {
    do {
      local_10 = operator_new(0x10);
      local_4 = 1;
      if (local_10 == (undefined4 *)0x0) {
        this_01 = (undefined4 *)0x0;
      }
      else {
        this_01 = FUN_0047bc60(local_10,0);
      }
      local_4 = 0xffffffff;
      local_10 = this_01;
      iVar3 = FUN_0047bcd0(this_01,this_00);
      if (iVar3 == 0) {
        if (this_01 != (undefined4 *)0x0) {
          FUN_0047bab0(this_01);
                    /* WARNING: Subroutine does not return */
          _free(this_01);
        }
        ExceptionList = local_c;
        return 0;
      }
      pvVar2 = *(void **)((int)this + 0x14);
      iVar3 = *(int *)((int)pvVar2 + 4);
      if ((iVar3 == 0) ||
         ((uint)(*(int *)((int)pvVar2 + 0xc) - iVar3 >> 2) <=
          (uint)(*(int *)((int)pvVar2 + 8) - iVar3 >> 2))) {
        FUN_00478ee0(pvVar2,*(undefined4 **)((int)pvVar2 + 8),1,&local_10);
      }
      else {
        puVar1 = *(undefined4 **)((int)pvVar2 + 8);
        *puVar1 = this_01;
        *(undefined4 **)((int)pvVar2 + 8) = puVar1 + 1;
      }
      local_14 = local_14 + 1;
    } while (local_14 < (int)local_18);
  }
  FUN_0048a110(this_00,(int)this + 0x28);
  ExceptionList = local_c;
  return 1;
}

