// FUNCTION: PORT1111 0x00420500
// name: FUN_00420500
// sig: undefined FUN_00420500(void * this, uint param_1)


void __thiscall FUN_00420500(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b6bc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x15555555 < param_1) {
    ExceptionList = &local_10;
    FUN_0041fc00();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0xc;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 0xc);
    local_8 = 0;
    FUN_0041f420(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1 * 3;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}

