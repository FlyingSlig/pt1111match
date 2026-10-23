// FUNCTION: PORT1111 0x00473d10
// name: FUN_00473d10
// sig: undefined4 FUN_00473d10(void * this, short param_1, int param_2)


undefined4 __thiscall FUN_00473d10(void *this,short param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  
  if (param_1 == *(short *)((int)this + 0x18)) {
    return 0;
  }
  piVar1 = (int *)**(int **)((int)this + 8);
  if (piVar1 != *(int **)((int)this + 8)) {
    do {
      piVar3 = (int *)piVar1[2];
      if ((short)piVar3[0xb] == param_1) goto LAB_00473d42;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 8));
  }
  piVar3 = (int *)0x0;
LAB_00473d42:
  if (*(int *)((int)this + 0x14) != 0) {
    FUN_00471e90(*(int *)((int)this + 0x14));
  }
  FUN_00471e40(piVar3);
  if (param_2 == 0) {
    if ((piVar3[0xc] & 0x1000U) == 0) {
      puVar2 = &DAT_004e2b30;
    }
    else {
      puVar2 = (undefined *)piVar3[0xe];
    }
    FUN_00488a60((int)puVar2);
  }
  *(int **)((int)this + 0x14) = piVar3;
  *(short *)((int)this + 0x18) = param_1;
  return 1;
}

