// FUNCTION: PORT1111 0x0040a160
// name: FUN_0040a160
// sig: undefined4 FUN_0040a160(void * param_1)


undefined4 __fastcall FUN_0040a160(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b5c0b;
  local_14 = ExceptionList;
  if ((*(int *)((int)param_1 + 0x120) == 0) && (*(int *)((int)param_1 + 0x124) == 0)) {
    ExceptionList = &local_14;
    local_24 = FUN_00443e10(*(void **)(DAT_004e2420 + 8),
                            (int)*(short *)(*(int *)((int)param_1 + 0x40) + 0x4e),
                            (int)*(short *)(*(int *)((int)param_1 + 0x40) + 0x4c));
    if (700 < local_24) {
      local_24 = 700;
    }
    iVar1 = FUN_004147d0(0x55);
    if (iVar1 != 0) {
      puVar4 = *(undefined4 **)(iVar1 + 0x14);
      local_28 = -4;
      do {
        iVar1 = -4;
        do {
          local_20 = local_28;
          local_1c = iVar1;
          iVar2 = FUN_004267d0(*(void **)((int)param_1 + 0x40),&local_20);
          if ((iVar2 != 0) && (*(int *)((int)param_1 + 0x70) != 0)) {
            iVar3 = _rand();
            FUN_0040a060(param_1,(int)*(short *)(iVar2 + 0x4e),(int)*(short *)(iVar2 + 0x4c),puVar4,
                         *(int *)(*(int *)((int)param_1 + 0x70) + 0x34),
                         (uint)(local_24 < iVar3 % 700));
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 5);
        local_28 = local_28 + 1;
      } while (local_28 < 6);
      *(undefined4 *)((int)param_1 + 0x120) = 1;
      puVar4 = operator_new(0x34);
      local_c = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_00430e10(puVar4);
      }
      puVar4[1] = *(undefined4 *)((int)param_1 + 0x10);
      local_c = 0xffffffff;
      FUN_00412ec0(puVar4,15000);
      FUN_00455220(DAT_004e2410);
      ExceptionList = local_14;
      return 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}

