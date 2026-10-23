// FUNCTION: PORT1111 0x0045f100
// name: FUN_0045f100
// sig: undefined FUN_0045f100(void * this, int param_1)


void __thiscall FUN_0045f100(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 0xc) = param_1;
  iVar1 = FUN_0045f290(*(void **)((int)this + 0x10),*(int *)((int)this + 8),param_1);
  *(int *)((int)this + 0x14) = iVar1;
  *(undefined4 *)((int)this + 0x18) = **(undefined4 **)(iVar1 + 4);
  return;
}

