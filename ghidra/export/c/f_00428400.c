// FUNCTION: PORT1111 0x00428400
// name: FUN_00428400
// sig: int FUN_00428400(int param_1)


int __fastcall FUN_00428400(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = FUN_00422380((void *)*DAT_004e26f0,*(int *)(param_1 + 0x50));
  if (iVar2 == 0) {
    puVar1 = *(uint **)(param_1 + 0x14);
    if (puVar1 != (uint *)0x0) {
      uVar3 = 0;
      if (*puVar1 != 0) {
        do {
          if (*(char *)(*(int *)(*(int *)(puVar1[2] + uVar3 * 4) + 0x50) + 0x54) == '\0') {
            iVar4 = 2;
          }
          else if (iVar4 == 0) {
            iVar4 = 1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *puVar1);
      }
    }
    return iVar4;
  }
  return 3;
}

