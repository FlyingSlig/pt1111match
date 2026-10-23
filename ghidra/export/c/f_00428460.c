// FUNCTION: PORT1111 0x00428460
// name: FUN_00428460
// sig: undefined FUN_00428460(void * this, undefined4 param_1)


void __thiscall FUN_00428460(void *this,undefined4 param_1)

{
  int *this_00;
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x1c) == 0) {
    puVar1 = FUN_00428080(0x4e2084);
    *(undefined4 **)((int)this + 0x1c) = puVar1;
  }
  this_00 = *(int **)((int)this + 0x1c);
  if ((this_00[2] == 0) && (iVar2 = FUN_00426bf0(this_00,5), iVar2 == 0)) {
    return;
  }
  if ((this_00[1] == *this_00) && (iVar2 = FUN_00426bf0(this_00,this_00[1] * 2), iVar2 == 0)) {
    return;
  }
  *(undefined4 *)(this_00[2] + *this_00 * 4) = param_1;
  *this_00 = *this_00 + 1;
  return;
}

