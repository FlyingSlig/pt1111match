// FUNCTION: PORT1111 0x0047cae0
// name: FUN_0047cae0
// sig: undefined FUN_0047cae0(void * this, int param_1)


void __thiscall FUN_0047cae0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != 0) &&
     (piVar2 = (int *)**(int **)((int)this + 0x8c), piVar2 != *(int **)((int)this + 0x8c))) {
    do {
      iVar1 = piVar2[2];
      if ((*(int *)(iVar1 + 0x54) != 0) &&
         (((*(int *)(iVar1 + 0x28) == 1 && (*(int *)(iVar1 + 0x54) == param_1)) &&
          (*(int *)(iVar1 + 0xcc) == 2)))) {
        FUN_00471e90(iVar1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x8c));
  }
  return;
}

