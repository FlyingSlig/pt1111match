// FUNCTION: PORT1111 0x0047ed50
// name: FUN_0047ed50
// sig: undefined FUN_0047ed50(void * this, uchar * param_1, undefined4 param_2)


void __thiscall FUN_0047ed50(void *this,uchar *param_1,undefined4 param_2)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  uchar *puVar2;
  int iVar3;
  
  FUN_0047ece0((int)this);
  this_00 = (undefined4 *)((int)this + 0x30);
  FUN_00466a40(this_00,param_1);
  puVar1 = FUN_00465ee0(this_00);
  FUN_00466a50(this_00,puVar1);
  iVar3 = 0;
  *(undefined4 *)((int)this + 0x38) = param_2;
  puVar2 = (uchar *)FUN_00465e00(this_00);
  FUN_0047e4d0(this,puVar2,param_2,iVar3);
  return;
}

