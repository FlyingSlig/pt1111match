// FUNCTION: PORT1111 0x00444b20
// name: FUN_00444b20
// sig: undefined FUN_00444b20(int param_1)


void __fastcall FUN_00444b20(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *local_8;
  undefined1 local_4 [4];
  
  local_8 = (int *)**(int **)(param_1 + 0x10);
  bVar1 = false;
  if (local_8 != *(int **)(param_1 + 0x10)) {
    do {
      piVar2 = local_8;
      iVar3 = FUN_00441900(DAT_004e2420,local_8[3]);
      if (iVar3 == 0) {
        FUN_00413730((int *)&local_8);
      }
      else {
        puVar4 = (undefined4 *)FUN_004164b0((void *)(param_1 + 0xc),local_4,piVar2);
        local_8 = (int *)*puVar4;
        bVar1 = true;
      }
    } while (local_8 != *(int **)(param_1 + 0x10));
    if (bVar1) {
      FUN_004137d0(*(int *)(param_1 + 0x18));
    }
  }
  return;
}

