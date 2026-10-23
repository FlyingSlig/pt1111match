// FUNCTION: PORT1111 0x00453950
// name: FUN_00453950
// sig: undefined FUN_00453950(int param_1)


void __fastcall FUN_00453950(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)**(int **)(param_1 + 4);
  if (piVar4 != *(int **)(param_1 + 4)) {
    do {
      piVar2 = (int *)FUN_00414c30(DAT_004e240c);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xa0))(0);
        piVar2[0x1e] = 0;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 4));
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory == *(void **)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = 1;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar3 = FUN_0040af10(DAT_004e2418);
      if (iVar3 != 0) {
        FUN_0040abe0(iVar3);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    FUN_00455c40(DAT_004e2410);
    FUN_004134a0(DAT_004e240c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

