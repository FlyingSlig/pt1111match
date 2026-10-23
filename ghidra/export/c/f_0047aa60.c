// FUNCTION: PORT1111 0x0047aa60
// name: FUN_0047aa60
// sig: undefined4 FUN_0047aa60(void * this, int param_1)


undefined4 __thiscall FUN_0047aa60(void *this,int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  if ((*(byte *)((int)this + 0x2c) & 2) != 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x14) + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined2)(*(int *)(*(int *)((int)this + 0x14) + 8) - iVar1 >> 2);
  }
  *(undefined2 *)(param_1 + 4) = uVar2;
  FUN_004792f0(*(void **)((int)this + 0x14),&param_1);
  return 1;
}

