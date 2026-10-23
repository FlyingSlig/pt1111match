// FUNCTION: PORT1111 0x00438a80
// name: FUN_00438a80
// sig: undefined4 * FUN_00438a80(void * this, undefined4 * param_1, int * param_2, int * param_3)


undefined4 * __thiscall FUN_00438a80(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00438350(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    bVar3 = FUN_00436d40(param_3,(int)(param_2 + 3));
    if (bVar3) {
      FUN_00438350(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    bVar3 = FUN_00436d40((void *)(piVar1[2] + 0xc),(int)param_3);
    if (bVar3) {
      FUN_00438350(this,param_1,'\0',*(undefined4 **)(*(int *)((int)this + 4) + 8),piVar2);
      return param_1;
    }
  }
  else {
    bVar3 = FUN_00436d40(param_3,(int)(param_2 + 3));
    if (bVar3) {
      param_3 = param_2;
      FUN_00474650((int *)&param_3);
      piVar1 = param_3;
      bVar3 = FUN_00436d40(param_3 + 3,(int)piVar2);
      if (bVar3) {
        if (*(char *)(piVar1[2] + 0x2d) != '\0') {
          FUN_00438350(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00438350(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    bVar3 = FUN_00436d40(param_2 + 3,(int)piVar2);
    if (bVar3) {
      param_3 = param_2;
      FUN_004746b0((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        bVar3 = FUN_00436d40(piVar2,(int)(param_3 + 3));
        if (!bVar3) goto LAB_00438c08;
      }
      if (*(char *)(param_2[2] + 0x2d) != '\0') {
        FUN_00438350(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00438350(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00438c08:
  puVar4 = (undefined4 *)FUN_00438840(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}

