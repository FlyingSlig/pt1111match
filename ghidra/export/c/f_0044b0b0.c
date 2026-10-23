// FUNCTION: PORT1111 0x0044b0b0
// name: FUN_0044b0b0
// sig: undefined FUN_0044b0b0(void * this, int param_1)


void __thiscall FUN_0044b0b0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  do {
    (**(code **)(**(int **)((int)this + 0x110) + 0x28))(*(int **)((int)this + 0x110),10,&param_1);
  } while (iVar1 != param_1);
  return;
}

