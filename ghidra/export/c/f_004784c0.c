// FUNCTION: PORT1111 0x004784c0
// name: FUN_004784c0
// sig: undefined4 FUN_004784c0(void * this, int param_1, int param_2, int param_3)


undefined4 __thiscall FUN_004784c0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1;
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (iVar3 = (*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) / 0x14, iVar3 == 0)) {
    param_3 = 0;
    if (param_2 == 0) {
      param_2 = FUN_0047e6f0(param_1);
    }
    param_1 = 0;
    iVar3 = FUN_0047e230(iVar1);
    if (0 < iVar3) {
      do {
        iVar4 = 0;
        iVar3 = FUN_0047e210(iVar1);
        if (0 < iVar3) {
          do {
            param_3 = param_3 + 1;
            if ((param_2 < param_3) && (param_2 != 0)) {
              return 1;
            }
            puVar2 = FUN_0047a9a0(this,*(undefined4 *)(iVar1 + 0x34));
            if (puVar2 == (undefined4 *)0x0) {
              return 0;
            }
            *(char *)(puVar2[3] + 0x10) = (char)iVar4;
            *(undefined1 *)(puVar2[3] + 0x11) = (undefined1)param_1;
            iVar4 = iVar4 + 1;
            iVar3 = FUN_0047e210(iVar1);
          } while (iVar4 < iVar3);
        }
        param_1 = param_1 + 1;
        iVar3 = FUN_0047e230(iVar1);
        if (iVar3 <= param_1) {
          return 1;
        }
      } while( true );
    }
  }
  else if (0 < iVar3) {
    iVar4 = 0;
    param_1 = iVar3;
    do {
      param_1 = param_1 + -1;
      if ((param_2 != 0) && (param_2 <= iVar4)) {
        return 1;
      }
      puVar2 = FUN_0047a9a0(this,*(undefined4 *)(iVar1 + 0x34));
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      if (param_3 == 0) {
        iVar6 = *(int *)(*(int *)((int)this + 0xc) + 0x10);
        iVar5 = iVar4;
      }
      else {
        iVar6 = *(int *)(*(int *)((int)this + 0xc) + 0x10);
        iVar5 = param_1;
      }
      FUN_0047bf50(puVar2,(char)iVar5,iVar6);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return 1;
}

