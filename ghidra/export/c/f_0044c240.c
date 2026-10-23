// FUNCTION: PORT1111 0x0044c240
// name: FUN_0044c240
// sig: undefined FUN_0044c240(void * param_1)


void __fastcall FUN_0044c240(void *param_1)

{
  int iVar1;
  int local_8;
  int local_4;
  
  if (*(int *)((int)param_1 + 0x6c) < 0x1f5) {
    *(undefined4 *)((int)param_1 + 0xdc) = 1;
  }
  else {
    iVar1 = *(int *)((int)param_1 + 0xdc);
    *(undefined4 *)((int)param_1 + 0xdc) = 2;
    if (iVar1 == 1) {
      local_8 = 1;
      FUN_00413aa0(param_1,&local_4,&local_8);
      if (local_4 == *(int *)((int)param_1 + 4)) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(local_4 + 0x10);
      }
      FUN_0044bc90(*(void **)(*(int *)(iVar1 + 4) + *(int *)((int)param_1 + 0xc) * 4),0);
      *(undefined4 *)((int)param_1 + 0xc) = 0xffffffff;
      FUN_0044c1c0(param_1);
      return;
    }
  }
  return;
}

