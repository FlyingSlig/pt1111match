// FUNCTION: PORT1111 0x00472690
// name: FUN_00472690
// sig: undefined FUN_00472690(void * this, uchar * param_1, int param_2)


void __thiscall FUN_00472690(void *this,uchar *param_1,int param_2)

{
  undefined4 *this_00;
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  LPCSTR pCVar3;
  int iVar4;
  uchar *puVar5;
  int iVar6;
  undefined4 local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9e30;
  pvStack_c = ExceptionList;
  this_00 = (undefined4 *)((int)this + 0xa4);
  ExceptionList = &pvStack_c;
  FUN_00466b20(&local_14,this_00);
  puVar5 = param_1;
  local_10 = *(int *)((int)this + 0xb4);
  local_4 = 0;
  FUN_00466a40(this_00,param_1);
  FUN_00465e70(this_00,'\\');
  FUN_00465e70(this_00,'/');
  iVar6 = param_2;
  if (*(code **)((int)this + 0x98) != (code *)0x0) {
    (**(code **)((int)this + 0x98))(this,puVar5,param_2,this_00);
  }
  if (((*(int *)((int)this + 0x40) != 0) &&
      (bVar1 = FUN_00466ab0(this_00,""), CONCAT31(extraout_var,bVar1) != 0)) &&
     ((iVar6 == 2 || (iVar6 == 1)))) {
    *(undefined4 *)((int)this + 0xb4) = 0;
    iVar6 = 0;
    do {
      puVar2 = FUN_00466fd0((void *)((int)this + 0x94),&param_1,this_00);
      local_4._0_1_ = 1;
      pCVar3 = (LPCSTR)FUN_00465e00(puVar2);
      iVar4 = FUN_00488bd0(pCVar3);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00465e40(&param_1);
      if (iVar4 == 0) break;
      Sleep(100);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    iVar6 = 0;
    puVar5 = (uchar *)FUN_00465e00(this_00);
    iVar6 = FUN_00472560(this,puVar5,iVar6);
    if (iVar6 != 0) goto LAB_004727c0;
  }
  iVar6 = local_10;
  puVar5 = (uchar *)FUN_00465e00(&local_14);
  FUN_00472560(this,puVar5,iVar6);
LAB_004727c0:
  local_4 = 0xffffffff;
  FUN_00465e40(&local_14);
  ExceptionList = pvStack_c;
  return;
}

