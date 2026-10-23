// FUNCTION: PORT1111 0x00459720
// name: FUN_00459720
// sig: undefined4 * FUN_00459720(void * this, undefined4 * param_1, int param_2)


undefined4 * __thiscall FUN_00459720(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 *this_01;
  uchar *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b91e9;
  local_c = ExceptionList;
  local_18 = 0;
  if ((*(int *)((int)this + 0xc) == 0) || (*(int *)((int)this + 4) == 0)) {
    ExceptionList = &local_c;
    FUN_00466af0(param_1,(uchar *)"#ERRO",0xffffffff);
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = &local_c;
  FUN_00465cf0(&local_1c);
  local_4 = 1;
  switch(*(undefined4 *)((int)this + 8)) {
  case 0:
    puVar3 = " = ";
    break;
  case 1:
    puVar3 = " > ";
    break;
  case 2:
    puVar3 = " < ";
    break;
  case 3:
    puVar3 = " >= ";
    break;
  case 4:
    puVar3 = " <= ";
    break;
  case 5:
    puVar3 = " <> ";
    break;
  default:
    goto switchD_00459772_default;
  }
  FUN_00466a40(&local_1c,puVar3);
switchD_00459772_default:
  iVar1 = param_2;
  puVar2 = FUN_0045c1c0(*(void **)((int)this + 0xc),&local_10,param_2);
  local_4._0_1_ = 2;
  this_00 = FUN_00459450(&local_14,iVar1);
  local_4._0_1_ = 3;
  this_01 = FUN_00466fd0(this_00,&param_2,&local_1c);
  local_4._0_1_ = 4;
  FUN_00466fd0(this_01,param_1,puVar2);
  local_18 = 1;
  local_4._0_1_ = 3;
  FUN_00465e40(&param_2);
  local_4._0_1_ = 2;
  FUN_00465e40(&local_14);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_10);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_1c);
  ExceptionList = local_c;
  return param_1;
}

