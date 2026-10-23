// FUNCTION: PORT1111 0x00425da0
// name: FUN_00425da0
// sig: undefined FUN_00425da0(int param_1)


void __fastcall FUN_00425da0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b6eeb;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) == 0) {
    iVar4 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18);
    ExceptionList = &local_c;
    piVar1 = operator_new(iVar4 * 0x30 + 4);
    local_4 = 0;
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = piVar1 + 1;
      *piVar1 = iVar4;
      _eh_vector_constructor_iterator_
                (piVar2,0x30,iVar4,(_func_void_void_ptr *)&LAB_00424a40,FUN_0047e300);
    }
    iVar4 = 0;
    local_4 = 0xffffffff;
    *(int **)(param_1 + 8) = piVar2;
    if (0 < *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18)) {
      iVar3 = 0;
      do {
        FUN_0047e3d0((void *)(*(int *)(param_1 + 8) + iVar3),(undefined1)DAT_004dd964,0x40,0x20,
                     DAT_004dd960);
        FUN_004291a0(&DAT_004e20c8,*(int **)(iVar3 + 4 + *(int *)(param_1 + 8)),0,0,
                     *(uint *)(*(int *)(param_1 + 0xc) + iVar4 * 4));
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x30;
      } while (iVar4 < *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18));
    }
  }
  ExceptionList = local_c;
  return;
}

