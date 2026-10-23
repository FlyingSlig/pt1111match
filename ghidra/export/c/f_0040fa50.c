// FUNCTION: PORT1111 0x0040fa50
// name: FUN_0040fa50
// sig: undefined FUN_0040fa50(void * this, int param_1)


void __thiscall FUN_0040fa50(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)
            (*(int *)(*(int *)((int)this + 0x14) + 4) + *(short *)((int)this + 0x2e) * 4);
  if (*(char *)((int)this + 0x28) < '\0') {
    (**(code **)(*(int *)((int)this + 0xc) + 0x28))(this,puVar1,(int)this + 0x18,param_1);
  }
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) | 0x10;
  if (param_1 == 0) {
    param_1 = *(int *)((int)this + 0x44);
  }
  (**(code **)*puVar1)
            (*(undefined4 *)(*(int *)(*(int *)((int)this + 0xc) + 0x10) + 0x1c),
             *(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),param_1);
  if ((*(byte *)((int)this + 0x28) & 0x40) != 0) {
    (**(code **)(*(int *)((int)this + 0xc) + 0x24))(this,puVar1,(int)this + 0x18,param_1);
  }
  return;
}

