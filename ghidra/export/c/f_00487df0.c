// FUNCTION: PORT1111 0x00487df0
// name: FUN_00487df0
// sig: undefined FUN_00487df0(undefined4 * param_1)


void __fastcall FUN_00487df0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba94b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c6bc4;
  local_4 = 0;
  if (((param_1[0xb] != 0) && (param_1[1] != 0)) &&
     (piVar2 = *(int **)param_1[7], piVar2 != (int *)param_1[7])) {
    do {
      iVar1 = FUN_00468ef0(DAT_004e2b14,*(ushort *)(piVar2 + 2));
      if (iVar1 != 0) {
        FUN_0047da00(*(void **)(param_1[1] + 0x24),iVar1,(int *)param_1[10],1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)param_1[7]);
  }
  iVar1 = param_1[9];
  if ((iVar1 != 0) && (param_1[1] != 0)) {
    if (param_1[0xb] == 0) {
      FUN_0047da00(*(void **)(param_1[1] + 0x24),iVar1,(int *)param_1[10],1);
    }
    else {
      FUN_0047cb40(iVar1);
    }
    param_1[9] = 0;
  }
  FUN_00419480((int)(param_1 + 6));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[7]);
}

