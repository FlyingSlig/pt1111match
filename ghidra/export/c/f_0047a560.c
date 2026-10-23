// FUNCTION: PORT1111 0x0047a560
// name: FUN_0047a560
// sig: undefined FUN_0047a560(void * this, void * param_1)


void __thiscall FUN_0047a560(void *this,void *param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_4;
  
  this_00 = param_1;
  local_4 = this;
  FUN_0048a1b0(param_1,(int)this + 4);
  FUN_0048a1b0(this_00,(int)this + 8);
  FUN_0048a1b0(this_00,(int)this + 0x10);
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  FUN_0048a1f0(this_00,&param_1);
  iVar1 = *(int *)(*(int *)((int)this + 0x14) + 4);
  if (iVar1 == 0) {
    local_4 = (void *)0x0;
  }
  else {
    local_4 = (void *)(*(int *)(*(int *)((int)this + 0x14) + 8) - iVar1 >> 2);
  }
  FUN_0048a1b0(this_00,&local_4);
  puVar2 = *(undefined4 **)(*(int *)((int)this + 0x14) + 4);
  if (puVar2 != *(undefined4 **)(*(int *)((int)this + 0x14) + 8)) {
    do {
      FUN_0047bcd0((void *)*puVar2,this_00);
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(*(int *)((int)this + 0x14) + 8));
  }
  FUN_0048a1b0(this_00,(int)this + 0x28);
  return;
}

