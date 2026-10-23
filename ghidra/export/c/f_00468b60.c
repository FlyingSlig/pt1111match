// FUNCTION: PORT1111 0x00468b60
// name: FUN_00468b60
// sig: undefined4 FUN_00468b60(void * this, undefined4 * param_1)


undefined4 __thiscall FUN_00468b60(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  bool bVar1;
  undefined3 extraout_var;
  uchar *puVar2;
  int iVar3;
  void *pvVar4;
  
  (**(code **)(**(int **)((int)this + 0xf8) + 0x20))();
  this_00 = (undefined4 *)((int)this + 0x38);
  FUN_00466a50(this_00,param_1);
  bVar1 = FUN_00466ab0(this_00,"");
  if (CONCAT31(extraout_var,bVar1) != 0) {
    pvVar4 = *(void **)((int)this + 100);
    puVar2 = (uchar *)FUN_00465e00(this_00);
    iVar3 = FUN_004771d0(*(void **)((int)this + 0xf8),puVar2,pvVar4);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

