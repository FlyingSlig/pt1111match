// FUNCTION: PORT1111 0x00426780
// name: FUN_00426780
// sig: undefined FUN_00426780(void * this, uint * param_1)


void __thiscall FUN_00426780(void *this,uint *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (uint *)0x0) || (*(int *)((int)this + 0x10) != 0)) {
    piVar1 = FUN_00498201(*(int **)((int)this + 0x10),param_1);
    *(int **)((int)this + 0x10) = piVar1;
    iVar2 = 0;
    if (0 < (int)param_1) {
      do {
        *(undefined1 *)(iVar2 + *(int *)((int)this + 0x10)) = 0xff;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1);
    }
  }
  *(char *)((int)this + 0x2c) = (char)param_1;
  return;
}

