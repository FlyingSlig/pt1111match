// FUNCTION: PORT1111 0x00477ce0
// name: FUN_00477ce0
// sig: undefined FUN_00477ce0(undefined4 * param_1)


void __fastcall FUN_00477ce0(undefined4 *param_1)

{
  int iVar1;
  void *this;
  int local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004ba18b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_004c65e8;
  iVar1 = param_1[3];
  local_4 = 0;
  local_10 = param_1;
  if (iVar1 != 0) {
    local_14 = **(int **)(iVar1 + 4);
    if (local_14 != *(int *)(iVar1 + 4)) {
      do {
        if (*(undefined4 **)(local_14 + 0x10) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(local_14 + 0x10))(1);
        }
        FUN_00413730(&local_14);
      } while (local_14 != *(int *)(param_1[3] + 4));
    }
    this = (void *)param_1[3];
    if (this != (void *)0x0) {
      FUN_00416b50(this,&local_14,(int *)**(int **)((int)this + 4),*(int **)((int)this + 4));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
  }
  local_4 = 0xffffffff;
  FUN_00465e40(param_1 + 2);
  ExceptionList = pvStack_c;
  return;
}

