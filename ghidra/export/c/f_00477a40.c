// FUNCTION: PORT1111 0x00477a40
// name: FUN_00477a40
// sig: undefined4 FUN_00477a40(void * this, uchar * param_1)


undefined4 __thiscall FUN_00477a40(void *this,uchar *param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba16b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    iVar2 = FUN_004748f0();
    *(int *)((int)pvVar1 + 4) = iVar2;
    *(undefined1 *)(iVar2 + 0x15) = 1;
    *(int *)(*(int *)((int)pvVar1 + 4) + 4) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)*(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)pvVar1 + 4);
    *(int *)(*(int *)((int)pvVar1 + 4) + 8) = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)((int)pvVar1 + 8) = 0;
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 0xc) = pvVar1;
  FUN_00466a40((void *)((int)this + 8),param_1);
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  ExceptionList = local_c;
  return 1;
}

