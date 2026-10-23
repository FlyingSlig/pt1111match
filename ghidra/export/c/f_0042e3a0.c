// FUNCTION: PORT1111 0x0042e3a0
// name: FUN_0042e3a0
// sig: undefined FUN_0042e3a0(int param_1)


void __fastcall FUN_0042e3a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  while (iVar4 != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    puVar2 = *(undefined4 **)(piVar1[1] + 8);
    piVar3 = (int *)piVar1[1];
    if (piVar3 != piVar1) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
      _free(piVar3);
    }
    if (puVar2[1] != 0) {
      FUN_00478a10(puVar2[1]);
      FUN_004788b0(puVar2[1]);
      FUN_00420ee0(*(int *)(DAT_004e2b14 + 0xf8));
      iVar4 = (int)*(short *)(puVar2[1] + 0x34);
      pvVar5 = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
      FUN_00477b30(pvVar5,iVar4);
      puVar2[1] = 0;
    }
    (**(code **)*puVar2)(1);
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar4 == 0) {
      return;
    }
    piVar1 = *(int **)(param_1 + 0xc);
    puVar2 = *(undefined4 **)(piVar1[1] + 8);
    piVar3 = (int *)piVar1[1];
    if (piVar3 != piVar1) break;
    if (puVar2[1] != 0) {
      FUN_00478a10(puVar2[1]);
      FUN_004788b0(puVar2[1]);
      FUN_00420ee0(*(int *)(DAT_004e2b14 + 0xf8));
      iVar4 = (int)*(short *)(puVar2[1] + 0x34);
      pvVar5 = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
      FUN_00477b30(pvVar5,iVar4);
      puVar2[1] = 0;
    }
    (**(code **)*puVar2)(1);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  *(int *)piVar3[1] = *piVar3;
  *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
  _free(piVar3);
}

