// FUNCTION: PORT1111 0x00423b10
// name: FUN_00423b10
// sig: undefined FUN_00423b10(void * this, uint param_1, uint param_2)


void __thiscall FUN_00423b10(void *this,uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x200) + 1;
  *(int *)((int)this + 0x200) = iVar1;
  FUN_00422ff0(this,param_1,param_2,iVar1);
  return;
}

