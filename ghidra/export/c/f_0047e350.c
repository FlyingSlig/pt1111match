// FUNCTION: PORT1111 0x0047e350
// name: FUN_0047e350
// sig: bool FUN_0047e350(void * this, undefined4 param_1, int param_2)


bool __thiscall FUN_0047e350(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
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
  puVar1 = FUN_0046abb0(param_2,*(undefined4 *)((int)this + 0x14));
  *(undefined4 **)((int)this + 4) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_1;
  }
  return *(int *)((int)this + 4) != 0;
}

