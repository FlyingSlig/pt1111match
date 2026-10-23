// FUNCTION: PORT1111 0x004867b0
// name: FUN_004867b0
// sig: int FUN_004867b0(void * this, int param_1)


int __thiscall FUN_004867b0(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_4;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  uVar2 = 0;
  local_4 = this;
  if (*(int *)((int)this + 0x18) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0xc) + uVar2 * 8) != 0) {
        local_4 = (void *)0x0;
        piVar1 = *(int **)(*(int *)((int)this + 0xc) + uVar2 * 8);
        (**(code **)(*piVar1 + 0x24))(piVar1,&local_4);
        if (((uint)local_4 & 1) == 0) break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x18));
  }
  if (uVar2 == *(uint *)((int)this + 0x18)) {
    if (param_1 != 0) {
      (**(code **)(*(int *)this + 0xc))(**(undefined4 **)((int)this + 0xc));
    }
    return *(int *)((int)this + 0xc);
  }
  return *(int *)((int)this + 0xc) + uVar2 * 8;
}

