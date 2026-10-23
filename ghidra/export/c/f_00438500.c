// FUNCTION: PORT1111 0x00438500
// name: FUN_00438500
// sig: undefined FUN_00438500(void * param_1)


void __fastcall FUN_00438500(void *param_1)

{
  int iVar1;
  int *_Memory;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7b9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x10);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_004bff3c;
    FUN_00465cf0(puVar2 + 1);
  }
  puVar2[2] = 5;
  iVar1 = *(int *)(*(int *)(*(int *)((int)param_1 + 8) + 4) + 8);
  puVar2[3] = iVar1;
  local_4 = 0xffffffff;
  FUN_00466a50(puVar2 + 1,(undefined4 *)(iVar1 + 8));
  _Memory = (int *)(*(int **)((int)param_1 + 8))[1];
  if (_Memory != *(int **)((int)param_1 + 8)) {
    *(int *)_Memory[1] = *_Memory;
    *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_00437db0(param_1);
  ExceptionList = local_c;
  return;
}

