// FUNCTION: PORT1111 0x00437cd0
// name: FUN_00437cd0
// sig: undefined FUN_00437cd0(void * this, uchar * param_1, uchar * param_2)


void __thiscall FUN_00437cd0(void *this,uchar *param_1,uchar *param_2)

{
  int *_Memory;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7b9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  local_10 = operator_new(0x10);
  puVar3 = (undefined4 *)0x0;
  local_4 = 0;
  if (local_10 != (undefined4 *)0x0) {
    puVar3 = FUN_00436640(local_10);
  }
  local_4 = 0xffffffff;
  local_10 = puVar3;
  FUN_00466a40(puVar3 + 1,param_2);
  FUN_00466a40(puVar3 + 2,param_1);
  puVar3[3] = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x14) + 4) + 8);
  _Memory = (int *)(*(int **)((int)this + 0x14))[1];
  if (_Memory != *(int **)((int)this + 0x14)) {
    *(int *)_Memory[1] = *_Memory;
    *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  iVar1 = *(int *)((int)this + 8);
  iVar2 = FUN_00413870(iVar1,*(undefined4 *)(iVar1 + 4),&local_10);
  FUN_004371f0((void *)((int)this + 4),1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  ExceptionList = local_c;
  return;
}

