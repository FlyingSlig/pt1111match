// FUNCTION: PORT1111 0x0044c2d0
// name: FUN_0044c2d0
// sig: undefined FUN_0044c2d0(void * param_1)


void __fastcall FUN_0044c2d0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0xdc) == 0) {
    return;
  }
  iVar2 = *(int *)((int)param_1 + 0x6c) + -100;
  iVar1 = *(int *)((int)param_1 + 0x68) + -100;
  *(int *)((int)param_1 + 0x6c) = iVar2;
  *(int *)((int)param_1 + 0x68) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)((int)param_1 + 0x68) = 0;
  }
  else if (1000 < iVar1) {
    *(undefined4 *)((int)param_1 + 0x68) = 1000;
  }
  if (iVar2 < 0) {
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    FUN_0044c240(param_1);
    FUN_0044bfb0();
    return;
  }
  if (1000 < iVar2) {
    *(undefined4 *)((int)param_1 + 0x6c) = 1000;
  }
  FUN_0044c240(param_1);
  FUN_0044bfb0();
  return;
}

