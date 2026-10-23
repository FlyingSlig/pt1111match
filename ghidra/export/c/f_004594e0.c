// FUNCTION: PORT1111 0x004594e0
// name: FUN_004594e0
// sig: undefined4 FUN_004594e0(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_004594e0(void *this,undefined4 *param_1)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  pbVar2 = (byte *)FUN_00465e00(param_1);
  piVar3 = (int *)FUN_0043dcb0(&DAT_004e27cc,pbVar2);
  if (piVar3 != (int *)0x0) {
    iVar1 = *(int *)((int)this + 8);
    uVar5 = 0;
    while( true ) {
      if (*(int *)(iVar1 + 0x290) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(iVar1 + 0x294) - *(int *)(iVar1 + 0x290) >> 2;
      }
      if (uVar4 < uVar5) break;
      if (*(int *)(*(int *)(iVar1 + 0x290) + uVar5 * 4) == *piVar3) {
        *(int *)((int)this + 4) = *piVar3;
        return 1;
      }
      uVar5 = uVar5 + 1;
    }
  }
  return 0;
}

