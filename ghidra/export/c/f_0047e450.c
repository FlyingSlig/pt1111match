// FUNCTION: PORT1111 0x0047e450
// name: FUN_0047e450
// sig: undefined4 FUN_0047e450(void * this, int param_1)


undefined4 __thiscall FUN_0047e450(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)((int)this + 0xc) != 0) && (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  if ((*(int *)((int)this + 0x10) != 0) && (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)this + 8))(1);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return 1;
}

