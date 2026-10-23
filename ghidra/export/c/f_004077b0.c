// FUNCTION: PORT1111 0x004077b0
// name: FUN_004077b0
// sig: undefined FUN_004077b0(void * this, int param_1)


void __thiscall FUN_004077b0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x4c);
  if (iVar2 != param_1) {
    if (iVar2 < param_1) {
      do {
        FUN_004076c0((int)this);
      } while (*(int *)((int)this + 0x4c) < param_1);
      return;
    }
    do {
      *(int *)((int)this + 0x4c) = iVar2 + -1;
      FUN_0040a430(*(int *)(*(int *)((int)this + 0x50) + (iVar2 + -1) * 4));
      puVar1 = *(undefined4 **)(*(int *)((int)this + 0x50) + *(int *)((int)this + 0x4c) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
        *(undefined4 *)(*(int *)((int)this + 0x50) + *(int *)((int)this + 0x4c) * 4) = 0;
      }
      iVar2 = *(int *)((int)this + 0x4c);
    } while (param_1 < iVar2);
  }
  return;
}

