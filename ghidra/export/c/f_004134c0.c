// FUNCTION: PORT1111 0x004134c0
// name: FUN_004134c0
// sig: undefined FUN_004134c0(void * this, int param_1, undefined4 param_2)


void __thiscall FUN_004134c0(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x40);
  if ((iVar1 != param_1) || (*(int *)((int)this + 0x48) != 0)) {
    if (iVar1 != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x30) = 0;
    }
    *(int *)((int)this + 0x40) = param_1;
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(undefined4 *)((int)this + 0x48) = param_2;
  }
  return;
}

