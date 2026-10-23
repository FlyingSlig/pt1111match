// FUNCTION: PORT1111 0x0043a480
// name: FUN_0043a480
// sig: int FUN_0043a480(void * this, byte param_1, int param_2, int param_3)


int __thiscall FUN_0043a480(void *this,byte param_1,int param_2,int param_3)

{
  if ((((param_1 & 1) != 0) && ((param_1 & 8) != 0)) || ((param_1 & 0x10) != 0)) {
    FUN_0043a320(param_2 - *(int *)((int)this + 4),param_3 - *(int *)((int)this + 8));
    FUN_00413300();
  }
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 8) = param_3;
  return (int)this;
}

