// FUNCTION: PORT1111 0x0040a870
// name: FUN_0040a870
// sig: undefined FUN_0040a870(void * this, undefined4 param_1, undefined4 param_2)


void __thiscall FUN_0040a870(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)((int)this + 0x14);
  if (piVar2 != *(int **)((int)this + 0x14)) {
    do {
      iVar1 = FUN_00414c30(DAT_004e240c);
      if (iVar1 != 0) {
        FUN_00444ee0(*(void **)(iVar1 + 0xb0),param_1,param_2);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x14));
  }
  return;
}

