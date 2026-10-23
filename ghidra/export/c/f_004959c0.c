// FUNCTION: PORT1111 0x004959c0
// name: FUN_004959c0
// sig: undefined FUN_004959c0(void * this, uint param_1, int param_2)


void __thiscall FUN_004959c0(void *this,uint param_1,int param_2)

{
  undefined4 *this_00;
  int iVar1;
  uint uStack_8;
  int iStack_4;
  
  (**(code **)(*(int *)((int)this + 0x28) + 4))();
  uStack_8 = param_1;
  FUN_00495300((void *)((int)this + 4),&iStack_4,&uStack_8);
  if ((iStack_4 != *(int *)((int)this + 8)) &&
     (this_00 = *(undefined4 **)(iStack_4 + 0x10), this_00 != (undefined4 *)0x0)) {
    iVar1 = FUN_004953e0(this_00,param_2);
    if ((iVar1 != 0) && (this_00[8] == 0)) {
      FUN_00495960((void *)((int)this + 4),&param_1);
      (**(code **)*this_00)(1);
    }
  }
  (**(code **)(*(int *)((int)this + 0x28) + 8))();
  return;
}

