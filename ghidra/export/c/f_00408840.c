// FUNCTION: PORT1111 0x00408840
// name: FUN_00408840
// sig: undefined FUN_00408840(void * this, void * param_1)


void __thiscall FUN_00408840(void *this,void *param_1)

{
  int *piVar1;
  
  FUN_004055a0(this,param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  piVar1 = (int *)**(int **)((int)this + 0x108);
  if (piVar1 != *(int **)((int)this + 0x108)) {
    do {
      FUN_0042f670(param_1);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 0x108));
  }
  FUN_00407140(*(int *)((int)this + 0x60));
  FUN_0042f670(param_1);
  return;
}

