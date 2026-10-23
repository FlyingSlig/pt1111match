// FUNCTION: PORT1111 0x004549a0
// name: FUN_004549a0
// sig: undefined FUN_004549a0(int param_1)


void __fastcall FUN_004549a0(int param_1)

{
  uchar *puVar1;
  int *piVar2;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00465cf0(&local_10);
  piVar2 = (int *)**(int **)(param_1 + 0x10);
  local_4 = 0;
  if (piVar2 != *(int **)(param_1 + 0x10)) {
    do {
      FUN_00466a30(&local_10,piVar2 + 2);
      thunk_FUN_00466040(&local_10,"\n");
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x10));
  }
  puVar1 = (uchar *)FUN_00465e00(&local_10);
  FUN_004737d0(*(void **)(param_1 + 4),puVar1);
  local_4 = 0xffffffff;
  FUN_00465e40(&local_10);
  ExceptionList = local_c;
  return;
}

