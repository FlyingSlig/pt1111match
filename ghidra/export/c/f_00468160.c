// FUNCTION: PORT1111 0x00468160
// name: FUN_00468160
// sig: undefined4 FUN_00468160(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_00468160(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uchar *puVar2;
  int iVar3;
  void *pvVar4;
  
  bVar1 = FUN_00466ab0(param_1,"");
  if (CONCAT31(extraout_var,bVar1) != 0) {
    pvVar4 = *(void **)((int)this + 100);
    puVar2 = (uchar *)FUN_00465e00(param_1);
    iVar3 = FUN_004771d0(*(void **)((int)this + 0xf8),puVar2,pvVar4);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

