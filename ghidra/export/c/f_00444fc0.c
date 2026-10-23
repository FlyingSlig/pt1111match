// FUNCTION: PORT1111 0x00444fc0
// name: FUN_00444fc0
// sig: undefined FUN_00444fc0(void * param_1)


void __fastcall FUN_00444fc0(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_0043dc50(*(int *)(*(int *)((int)param_1 + 0x18) + 0x50) + 0x270);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = _rand();
    if (iVar2 < 0xccc) {
      iVar2 = 0x7d4;
    }
    else {
      iVar2 = (iVar2 < 0x2664) + 0x7d5;
    }
    iVar2 = FUN_00444c80(param_1,0x40f,iVar2);
    if (iVar2 != 0) {
      FUN_004137d0(*(int *)((int)param_1 + 0x18));
    }
  }
  return;
}

