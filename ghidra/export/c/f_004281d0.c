// FUNCTION: PORT1111 0x004281d0
// name: FUN_004281d0
// sig: undefined4 FUN_004281d0(void * this, undefined4 param_1)


undefined4 __thiscall FUN_004281d0(void *this,undefined4 param_1)

{
  int *this_00;
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x14) == 0) {
    puVar1 = FUN_00428080(0x4e2074);
    *(undefined4 **)((int)this + 0x14) = puVar1;
  }
  this_00 = *(int **)((int)this + 0x14);
  if (this_00[2] == 0) {
    iVar2 = FUN_00426bf0(this_00,5);
    if (iVar2 == 0) goto LAB_00428222;
  }
  if (this_00[1] == *this_00) {
    iVar2 = FUN_00426bf0(this_00,this_00[1] * 2);
    if (iVar2 == 0) goto LAB_00428222;
  }
  *(undefined4 *)(this_00[2] + *this_00 * 4) = param_1;
  *this_00 = *this_00 + 1;
LAB_00428222:
  FUN_00421240((void *)(DAT_004e2404 + 0x94),this);
  return 1;
}

