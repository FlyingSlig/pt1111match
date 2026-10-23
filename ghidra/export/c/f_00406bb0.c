// FUNCTION: PORT1111 0x00406bb0
// name: FUN_00406bb0
// sig: undefined FUN_00406bb0(void * param_1)


void __fastcall FUN_00406bb0(void *param_1)

{
  FUN_00407810(*(void **)((int)param_1 + 0x60));
  (**(code **)(*(int *)((int)param_1 + 0x14) + 0x24))();
  FUN_00423d50(&DAT_004e26e8,*(int *)(*(int *)((int)param_1 + 0x40) + 0x50));
  FUN_00428930(*(void **)((int)param_1 + 0x40),(int)param_1);
  if (*(int *)((int)param_1 + 0x120) != 5) {
    FUN_004288e0(*(void **)((int)param_1 + 0x40),(int)param_1);
  }
  FUN_00405710(param_1,*(int *)((int)param_1 + 0x40));
  FUN_00423d90(&DAT_004e26e8,*(uint *)(*(int *)((int)param_1 + 0x40) + 0x50));
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  return;
}

