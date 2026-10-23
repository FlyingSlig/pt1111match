// FUNCTION: PORT1111 0x00444350
// name: FUN_00444350
// sig: undefined4 FUN_00444350(void * this, void * param_1)


undefined4 __thiscall FUN_00444350(void *this,void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    iVar1 = FUN_00443fa0(this,param_1);
    *(int *)((int)this + 8) = iVar1;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return *(undefined4 *)((int)this + 8);
}

