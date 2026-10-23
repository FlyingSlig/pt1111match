// FUNCTION: PORT1111 0x0044bb50
// name: FUN_0044bb50
// sig: undefined4 * FUN_0044bb50(void * this, undefined4 param_1, undefined4 param_2, int * param_3)


undefined4 * __thiscall FUN_0044bb50(void *this,undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  piVar1 = (int *)((int)this + 0x10);
  *(undefined ***)this = &PTR_FUN_004c44b8;
  *(int **)((int)this + 4) = param_3;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  param_1 = 0;
  iVar2 = (**(code **)(*param_3 + 0x6c))(param_3,&param_1);
  if (-1 < iVar2) {
    (**(code **)(**(int **)((int)this + 0xc) + 0xc0))(*(int **)((int)this + 0xc),unaff_ESI,1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  return this;
}

