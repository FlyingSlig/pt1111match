// FUNCTION: PORT1111 0x0043e630
// name: FUN_0043e630
// sig: void * FUN_0043e630(void * param_1)


void * __fastcall FUN_0043e630(void *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004748f0();
  *(int *)((int)param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)param_1 + 4) + 4) = *(int *)((int)param_1 + 4);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 4);
  *(int *)(*(int *)((int)param_1 + 4) + 8) = *(int *)((int)param_1 + 4);
  *(undefined4 *)((int)param_1 + 8) = 0;
  local_4 = 0;
  if (PTR_s_UNDER_ATTACK_004db2a0 != (undefined *)0x0) {
    piVar3 = (int *)&DAT_004db298;
    do {
      piVar2 = FUN_0043e580(param_1,piVar3);
      *piVar2 = (int)piVar3;
      if (piVar3[1] != -1) {
        *(int *)((int)param_1 + 0xc) = *(int *)((int)param_1 + 0xc) + 1;
      }
      piVar2 = piVar3 + 6;
      piVar3 = piVar3 + 4;
    } while (*piVar2 != 0);
  }
  ExceptionList = local_c;
  return param_1;
}

