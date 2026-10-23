// FUNCTION: PORT1111 0x00481480
// name: FUN_00481480
// sig: undefined FUN_00481480(void * this, int param_1)


void __thiscall FUN_00481480(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_00481050(this,param_1);
  if (*(int *)((int)this + 0x2c) != iVar2) {
    (**(code **)(*(int *)this + 0xc))(iVar2);
    if (*(int *)((int)this + 0x2c) != iVar2) {
      *(undefined4 *)((int)this + 0x80) = 1;
    }
    piVar1 = *(int **)((int)this + 4);
    *(int *)((int)this + 0x2c) = iVar2;
    if (iVar2 == *(int *)((int)this + 0x7c)) {
      if ((piVar1 != (int *)0x0) && (piVar1[0x28] != 0)) {
        FUN_00472ef0(piVar1);
      }
    }
    else if ((piVar1 != (int *)0x0) && (piVar1[0x28] == 0)) {
      FUN_00471e00(piVar1,1);
    }
    piVar1 = *(int **)((int)this + 8);
    if (*(int *)((int)this + 0x2c) < *(int *)((int)this + 0x78)) {
      if ((piVar1 != (int *)0x0) && (piVar1[0x28] == 0)) {
        FUN_00471e00(piVar1,1);
        return;
      }
    }
    else if ((piVar1 != (int *)0x0) && (piVar1[0x28] != 0)) {
      FUN_00472ef0(piVar1);
      return;
    }
  }
  return;
}

