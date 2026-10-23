// FUNCTION: PORT1111 0x0045e3f0
// name: FUN_0045e3f0
// sig: bool FUN_0045e3f0(void * param_1)


bool __fastcall FUN_0045e3f0(void *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(void **)((int)param_1 + 0x54) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x54));
  }
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)((int)param_1 + 0x58) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  FUN_00419480((int)param_1 + 0x60);
  FUN_00419480((int)param_1 + 0x6c);
  FUN_004296f0(DAT_004e2404,*(int *)((int)param_1 + 4),*(int *)((int)param_1 + 8),
               (uint *)((int)param_1 + 0x20),(uint *)((int)param_1 + 0x24));
  FUN_004296f0(DAT_004e2404,*(int *)((int)param_1 + 0xc),*(int *)((int)param_1 + 0x10),
               (uint *)((int)param_1 + 0x28),(uint *)((int)param_1 + 0x2c));
  *(undefined4 *)((int)param_1 + 0x38) = *(undefined4 *)((int)param_1 + 0xc);
  *(undefined4 *)((int)param_1 + 0x3c) = *(undefined4 *)((int)param_1 + 0x10);
  puVar3 = DAT_004e2a88;
  for (uVar1 = *(int *)((int)DAT_004e2404 + 0x110) * *(int *)((int)DAT_004e2404 + 0x10c) &
               0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  iVar2 = FUN_0045e160(param_1);
  return (bool)('\x01' - (iVar2 != 0));
}

