// FUNCTION: PORT1111 0x004800d0
// name: FUN_004800d0
// sig: undefined4 FUN_004800d0(int * param_1)


undefined4 __fastcall FUN_004800d0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE local_1c;
  int local_18;
  undefined **local_14;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba628;
  pvStack_c = ExceptionList;
  local_1c = (HANDLE)param_1[4];
  local_18 = param_1[5];
  ExceptionList = &pvStack_c;
  DVar3 = WaitForMultipleObjects(2,&local_1c,0,param_1[0x18]);
  if (DVar3 != 0xffffffff) {
    piVar1 = param_1 + 7;
    local_14 = &PTR_FUN_004c376c;
    local_10 = piVar1;
    do {
      (**(code **)(*piVar1 + 4))();
      uStack_4 = 0;
      if (DVar3 == 0) {
        if ((void *)param_1[0x19] != (void *)0x0) {
          FUN_00495e00((void *)param_1[0x19],param_1);
        }
        uStack_4 = 0xffffffff;
        (**(code **)(*piVar1 + 8))();
        ExceptionList = pvStack_c;
        return 0;
      }
      (**(code **)(param_1[0xe] + 4))();
      puVar2 = (undefined4 *)param_1[0x15];
      (**(code **)(param_1[0xe] + 8))();
      if (DVar3 != 0x102) {
        ResetEvent((HANDLE)param_1[6]);
      }
      (**(code **)*puVar2)();
      if (DVar3 != 0x102) {
        if ((void *)param_1[0x19] != (void *)0x0) {
          FUN_00495e00((void *)param_1[0x19],param_1);
        }
        SetEvent((HANDLE)param_1[6]);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*piVar1 + 8))();
      DVar3 = WaitForMultipleObjects(2,&local_1c,0,param_1[0x18]);
    } while (DVar3 != 0xffffffff);
  }
  if ((void *)param_1[0x19] != (void *)0x0) {
    FUN_00495e00((void *)param_1[0x19],param_1);
  }
  ExceptionList = pvStack_c;
  return 0xffffffff;
}

