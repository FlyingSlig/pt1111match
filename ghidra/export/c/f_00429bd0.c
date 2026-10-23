// FUNCTION: PORT1111 0x00429bd0
// name: FUN_00429bd0
// sig: undefined4 FUN_00429bd0(void * this, uint param_1, uint param_2)


undefined4 __thiscall FUN_00429bd0(void *this,uint param_1,uint param_2)

{
  int iVar1;
  
  if ((((-1 < (int)param_1) && (param_1 < *(uint *)((int)this + 0x10c))) && (-1 < (int)param_2)) &&
     (param_2 < *(uint *)((int)this + 0x110))) {
    iVar1 = FUN_00426730((*(uint *)((int)this + 0x10c) * param_2 + param_1) * 0x6c +
                         *(int *)((int)this + 0x118));
    return *(undefined4 *)(iVar1 + 0x28);
  }
  return 0xffffffff;
}

