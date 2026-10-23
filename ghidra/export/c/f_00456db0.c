// FUNCTION: PORT1111 0x00456db0
// name: FUN_00456db0
// sig: undefined4 * FUN_00456db0(void * this, undefined4 * param_1, int * param_2, int * param_3)


undefined4 * __thiscall FUN_00456db0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_8 [2];
  
  piVar5 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_004567c0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_004567c0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_004567c0(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_00413050((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_004567c0(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_004567c0(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_00413730((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_004567c0(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_004567c0(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_00456c30(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}

