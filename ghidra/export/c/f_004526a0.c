// FUNCTION: PORT1111 0x004526a0
// name: FUN_004526a0
// sig: undefined4 FUN_004526a0(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_004526a0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((*(int *)((int)this + 0x2c) != 0) && (*(short *)(*(int *)((int)this + 0x2c) + 0x1c) == 4)) {
    piVar1 = FUN_0047cf30(*(void **)((int)this + 0x79c),param_1,1);
    if (piVar1 != (int *)0x0) {
      uVar2 = FUN_00465e00(piVar1 + 0x14);
      return uVar2;
    }
  }
  return 0;
}

