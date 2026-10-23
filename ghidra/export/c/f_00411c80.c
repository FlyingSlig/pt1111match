// FUNCTION: PORT1111 0x00411c80
// name: FUN_00411c80
// sig: undefined4 FUN_00411c80(void * this, undefined4 param_1, undefined4 param_2)


undefined4 __thiscall FUN_00411c80(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
  if (iVar1 != 0) {
    puVar2 = FUN_00476aa0(*(void **)(DAT_004e2b14 + 0xf8),iVar1);
    *(undefined4 **)((int)this + 0xc) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 4) = param_2;
      return 1;
    }
  }
  return 0;
}

