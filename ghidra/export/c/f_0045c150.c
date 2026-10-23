// FUNCTION: PORT1111 0x0045c150
// name: FUN_0045c150
// sig: undefined4 FUN_0045c150(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_0045c150(void *this,undefined4 *param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  
  pbVar1 = (byte *)FUN_00465e00(param_1);
  puVar2 = (undefined4 *)FUN_0043dcb0(&DAT_004e27cc,pbVar1);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  *(undefined4 *)((int)this + 4) = *puVar2;
  return 1;
}

