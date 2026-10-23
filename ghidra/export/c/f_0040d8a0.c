// FUNCTION: PORT1111 0x0040d8a0
// name: FUN_0040d8a0
// sig: undefined4 FUN_0040d8a0(undefined4 param_1, int param_2, void * param_3)


undefined4 __cdecl FUN_0040d8a0(undefined4 param_1,int param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iStack_4;
  
  if (param_3 == (void *)0x0) {
    return 0;
  }
  piVar1 = (int *)FUN_00426ec0((int)param_3);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x88))();
    if ((iVar2 == param_2) && ((*(byte *)(piVar1 + 0xf) & 0x10) != 0)) {
      iStack_4 = 1;
      piVar1 = &DAT_004bd8a4;
LAB_0040d8f0:
      iVar2 = 0;
      if (*piVar1 < 1) {
LAB_0040d93c:
        return *(undefined4 *)(&DAT_004bd89c + iStack_4 * 0x290);
      }
      piVar5 = piVar1 + 1;
      do {
        iVar3 = FUN_004267d0(param_3,piVar5);
        if (iVar3 != 0) {
          piVar4 = (int *)FUN_00426ec0(iVar3);
          if (piVar4 == (int *)0x0) goto LAB_0040d952;
          iVar3 = (**(code **)(*piVar4 + 0x88))();
          if ((iVar3 != param_2) || ((*(byte *)(piVar4 + 0xf) & 0x10) == 0)) goto LAB_0040d952;
        }
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 2;
        if (*piVar1 <= iVar2) goto LAB_0040d93c;
      } while( true );
    }
  }
  return 0;
LAB_0040d952:
  iStack_4 = iStack_4 + 1;
  piVar1 = piVar1 + 0xa4;
  if (0x4be2e3 < (int)piVar1) {
    return 0;
  }
  goto LAB_0040d8f0;
}

