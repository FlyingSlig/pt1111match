// FUNCTION: PORT1111 0x0045e160
// name: FUN_0045e160
// sig: undefined4 FUN_0045e160(void * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0045e160(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  int local_8;
  
  _DAT_004e2a84 = 1;
  if (*(void **)((int)param_1 + 0x54) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x54));
  }
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)((int)param_1 + 0x58) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *(undefined4 *)((int)param_1 + 0x7c) = 0;
  iVar1 = FUN_00429ac0(DAT_004e2404,*(uint *)((int)param_1 + 0x20),*(uint *)((int)param_1 + 0x24));
  iVar2 = FUN_00429ac0(DAT_004e2404,*(uint *)((int)param_1 + 0x28),*(uint *)((int)param_1 + 0x2c));
  if ((*(int *)((int)param_1 + 0x14) == 0) &&
     (iVar1 = FUN_0045ce20(param_1,(int)*(short *)(iVar1 + 0x4e),(int)*(short *)(iVar1 + 0x4c),
                           (int)*(short *)(iVar2 + 0x4e),(int)*(short *)(iVar2 + 0x4c)), iVar1 != 0)
     ) {
    *(undefined4 *)((int)param_1 + 0x7c) = 1;
    _DAT_004e2a84 = 0;
    return 1;
  }
  puVar3 = (undefined1 *)
           FUN_00429ac0(DAT_004e2404,*(uint *)((int)param_1 + 0x20),*(uint *)((int)param_1 + 0x24));
  *(undefined4 *)(puVar3 + 0x54) = 0;
  uVar7 = FUN_0045cfd0();
  *(int *)(puVar3 + 0x58) = (int)uVar7;
  *(int *)(puVar3 + 0x5c) = *(int *)(puVar3 + 0x58) + *(int *)(puVar3 + 0x54);
  *(undefined4 *)(puVar3 + 0x60) = 0;
  *(undefined4 *)(puVar3 + 0x68) = 0;
  FUN_0045e0e0(param_1,puVar3);
  *(undefined4 *)
   (DAT_004e2a88 +
   (*(int *)((int)DAT_004e2404 + 0x10c) * *(int *)((int)param_1 + 0x20) +
   *(int *)((int)param_1 + 0x24)) * 4) = 1;
  while( true ) {
    if ((*(int *)((int)param_1 + 0x54) == 0) ||
       (*(int *)((int)param_1 + 0x58) - *(int *)((int)param_1 + 0x54) >> 2 == 0)) {
      _DAT_004e2a84 = 0;
      return 0;
    }
    iVar1 = FUN_0045da10((int)param_1);
    if (((int)*(short *)(iVar1 + 0x4e) == *(int *)((int)param_1 + 0x28)) &&
       ((int)*(short *)(iVar1 + 0x4c) == *(int *)((int)param_1 + 0x2c))) break;
    FUN_0045db10(param_1,(int)*(short *)(iVar1 + 0x4e),(int)*(short *)(iVar1 + 0x4c));
    piVar6 = (int *)**(int **)((int)param_1 + 100);
    if (piVar6 != *(int **)((int)param_1 + 100)) {
      do {
        iVar4 = (int)*(short *)(piVar6[2] + 0x4e) - (int)*(short *)(iVar1 + 0x4e);
        iVar5 = (int)*(short *)(piVar6[2] + 0x4c) - (int)*(short *)(iVar1 + 0x4c);
        iVar2 = iVar5;
        local_8 = iVar4;
        if (*(int *)(iVar1 + 0x60) != 0) {
          local_8 = (int)*(short *)(iVar1 + 0x4e) - (int)*(short *)(*(int *)(iVar1 + 0x60) + 0x4e);
          iVar2 = (int)*(short *)(iVar1 + 0x4c) - (int)*(short *)(*(int *)(iVar1 + 0x60) + 0x4c);
        }
        if ((iVar4 == local_8) && (iVar5 == iVar2)) {
          iVar2 = 10;
        }
        else {
          iVar2 = 0xb;
        }
        if ((iVar4 != 0) && (iVar5 != 0)) {
          iVar2 = iVar2 + 4;
        }
        iVar4 = piVar6[2];
        iVar2 = *(int *)(iVar1 + 0x54) + iVar2;
        if (((*(int *)(iVar4 + 100) == 0) && (*(int *)(iVar4 + 0x68) == 0)) ||
           (iVar2 < *(int *)(iVar4 + 0x54))) {
          *(int *)(piVar6[2] + 0x60) = iVar1;
          *(int *)(piVar6[2] + 0x54) = iVar2;
          uVar7 = FUN_0045cfd0();
          *(int *)(piVar6[2] + 0x58) = (int)uVar7;
          iVar2 = piVar6[2];
          *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x58) + *(int *)(iVar2 + 0x54);
          if (*(int *)(piVar6[2] + 0x68) != 0) {
            *(undefined4 *)(piVar6[2] + 0x68) = 0;
          }
          puVar3 = (undefined1 *)piVar6[2];
          if (*(int *)(puVar3 + 100) == 0) {
            FUN_0045e0e0(param_1,puVar3);
          }
          else {
            FUN_0045d920(param_1,(int)puVar3);
          }
        }
        piVar6 = (int *)*piVar6;
      } while (piVar6 != (int *)*(int *)((int)param_1 + 100));
    }
    *(undefined4 *)(iVar1 + 0x68) = 1;
  }
  FUN_0045e070(param_1,iVar1);
  _DAT_004e2a84 = 0;
  return 1;
}

