// FUNCTION: PORT1111 0x00454c50
// name: FUN_00454c50
// sig: undefined FUN_00454c50(void * this, uchar * param_1, int param_2)


void __thiscall FUN_00454c50(void *this,uchar *param_1,int param_2)

{
  int iVar1;
  int *_Memory;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8d48;
  local_c = ExceptionList;
  if (param_2 == *(int *)(*(int *)(DAT_004e26f0 + DAT_004e26fc * 4) + 0x34)) {
    ExceptionList = &local_c;
    FUN_00466af0(&param_2,param_1,0xffffffff);
    iVar1 = *(int *)((int)this + 0x10);
    local_4 = 0;
    puVar2 = FUN_0041d3c0(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
    FUN_0041e280((void *)((int)this + 0xc),1);
    *(undefined4 **)(iVar1 + 4) = puVar2;
    *(undefined4 **)puVar2[1] = puVar2;
    local_4 = 0xffffffff;
    FUN_00465e40(&param_2);
    _Memory = (int *)**(undefined4 **)((int)this + 0x10);
    if (_Memory != *(int **)((int)this + 0x10)) {
      *(int *)_Memory[1] = *_Memory;
      *(int *)(*_Memory + 4) = _Memory[1];
      FUN_00465e40(_Memory + 2);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    FUN_004549a0((int)this);
  }
  ExceptionList = local_c;
  return;
}

