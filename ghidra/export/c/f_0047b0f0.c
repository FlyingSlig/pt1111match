// FUNCTION: PORT1111 0x0047b0f0
// name: FUN_0047b0f0
// sig: undefined FUN_0047b0f0(void * this, uint param_1)


void __thiscall FUN_0047b0f0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004ba360;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x1fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_0040fb30();
    param_1 = extraout_EDX;
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 3;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 8);
    local_8 = 0;
    FUN_0041f460(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1 * 2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}

