// FUNCTION: PORT1111 0x00434760
// name: FUN_00434760
// sig: undefined FUN_00434760(void * this, int * param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_00434760(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char local_68 [100];
  undefined4 local_4;
  
  local_4 = DAT_004ddb0c;
  if (((DAT_004e21b8 != 0) && (param_1[3] != 5)) && (param_1[3] != 0xf)) {
    (**(code **)*param_1)(1);
    return;
  }
  if ((*(int *)(DAT_004e240c + 0x60) == 2) && (param_1[3] != 9)) {
    FUN_00433980(param_1,local_68);
    FUN_00445740(*(void **)(DAT_004e240c + 100),local_68,100);
    return;
  }
  FUN_004346f0(this,param_1);
  switch(param_1[3]) {
  case 9:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x17:
  case 0x1b:
  case 0x1e:
  case 0x1f:
    goto switchD_004347fa_caseD_9;
  }
  iVar1 = FUN_00414c30(DAT_004e240c);
  uVar3 = 0;
  if (param_1[3] == 0) {
    if (param_1[0x35] != 0) {
      return;
    }
  }
  else if (param_1[3] == 0xd) {
    iVar2 = param_1[5];
joined_r0x0043487d:
    if ((iVar2 == 0x35) || (iVar2 == 0x50)) {
      uVar3 = 1;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x14))();
    if ((iVar2 != 0) && (param_1[0xd] == 1)) {
      iVar2 = FUN_00414c30(DAT_004e240c);
      if (iVar2 == 0) {
        return;
      }
      if (iVar1 == 0) {
        return;
      }
      if ((param_1[0xc] == 0) || (*(int *)(iVar1 + 0xe4) != 0)) {
        iVar2 = *(int *)(*(int *)(iVar2 + 0x50) + 0x14);
        goto joined_r0x0043487d;
      }
    }
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xe4) = uVar3;
  }
switchD_004347fa_caseD_9:
  return;
}

