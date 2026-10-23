// FUNCTION: PORT1111 0x0041a290
// name: FUN_0041a290
// sig: undefined FUN_0041a290(void * this, uint param_1)


void __thiscall FUN_0041a290(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
  }
  if (param_1 <= uVar1) {
    if ((iVar2 != 0) && (param_1 < (uint)(((int)*(undefined4 **)((int)this + 8) - iVar2) / 0x1c))) {
      FUN_004197e0(this,&param_1,(undefined4 *)(param_1 * 0x1c + iVar2),
                   *(undefined4 **)((int)this + 8));
    }
    return;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
  }
  FUN_00419dc0(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008);
  return;
}

