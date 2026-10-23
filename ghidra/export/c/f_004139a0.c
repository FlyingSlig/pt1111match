// FUNCTION: PORT1111 0x004139a0
// name: FUN_004139a0
// sig: undefined FUN_004139a0(void * this, int param_1)


void __thiscall FUN_004139a0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)((int)this + 0x14);
  if (piVar2 != *(int **)((int)this + 0x14)) {
    while (piVar1 = (int *)piVar2[2], piVar1[4] != param_1) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)*(int *)((int)this + 0x14)) {
        return;
      }
    }
    piVar2 = *(int **)((int)this + 0x40);
    if (piVar1 == piVar2) {
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(piVar2[0x18] + 0x30) = 0;
      }
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    (**(code **)(*piVar1 + 0x50))();
    (**(code **)(*piVar1 + 0x80))();
    (**(code **)*piVar1)(1);
  }
  return;
}

