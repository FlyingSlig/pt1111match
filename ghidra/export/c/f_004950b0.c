// FUNCTION: PORT1111 0x004950b0
// name: FUN_004950b0
// sig: undefined FUN_004950b0(void * this, int param_1)


void __thiscall FUN_004950b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *this_00;
  undefined4 *puVar3;
  
  iVar2 = *(int *)((int)this + 0x14);
  if (*(int *)((int)this + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  }
  if ((iVar2 < iVar1) && (-1 < iVar2)) {
    this_00 = *(void **)(*(int *)((int)this + 8) + iVar2 * 4);
    if ((this_00 != (void *)0x0) && (iVar2 = FUN_00494b40(this_00,param_1), iVar2 != 0))
    goto LAB_00495128;
  }
  else {
    this_00 = (void *)0x0;
  }
  puVar3 = *(undefined4 **)((int)this + 8);
  iVar2 = 0;
  if (puVar3 != *(undefined4 **)((int)this + 0xc)) {
    do {
      iVar1 = FUN_00494b40((void *)*puVar3,param_1);
      if (iVar1 != 0) {
        this_00 = (void *)*puVar3;
        *(int *)((int)this + 0x14) = iVar2;
        break;
      }
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (puVar3 != *(undefined4 **)((int)this + 0xc));
  }
LAB_00495128:
  if (this_00 != (void *)0x0) {
    FUN_00494bb0(this_00,param_1);
  }
  return;
}

