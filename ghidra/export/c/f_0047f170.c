// FUNCTION: PORT1111 0x0047f170
// name: FUN_0047f170
// sig: undefined FUN_0047f170(void * this, uint param_1)


void __thiscall FUN_0047f170(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004ba560;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0xccccccc < param_1) {
    ExceptionList = &local_10;
    FUN_0047ee30();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x14;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 0x14);
    local_8 = 0;
    FUN_0047ea80(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1 * 5;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}

