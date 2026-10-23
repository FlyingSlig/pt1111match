// FUNCTION: PORT1111 0x004695c0
// name: FUN_004695c0
// sig: undefined4 * FUN_004695c0(void * this, undefined4 * param_1, ushort * param_2, ushort * param_3)


undefined4 * __thiscall FUN_004695c0(void *this,undefined4 *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00469350(this,param_1,'\x01',*(undefined4 **)((int)this + 4),(undefined4 *)param_3);
    return param_1;
  }
  puVar3 = *(ushort **)((int)this + 4);
  if (param_2 == *(ushort **)puVar3) {
    if (*param_3 < param_2[6]) {
      FUN_00469350(this,param_1,'\x01',(undefined4 *)param_2,(undefined4 *)param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar3) {
    if (*(ushort *)(*(undefined4 **)(puVar3 + 4) + 3) < *param_3) {
      FUN_00469350(this,param_1,'\0',*(undefined4 **)(puVar3 + 4),(undefined4 *)param_3);
      return param_1;
    }
  }
  else {
    uVar1 = *param_3;
    uVar2 = param_2[6];
    if (uVar1 < uVar2) {
      param_3 = param_2;
      FUN_00413050((int *)&param_3);
      if (param_3[6] < uVar1) {
        if (*(char *)(*(int *)(param_3 + 4) + 0x15) != '\0') {
          FUN_00469350(this,param_1,'\0',(undefined4 *)param_3,(undefined4 *)puVar4);
          return param_1;
        }
        FUN_00469350(this,param_1,'\x01',(undefined4 *)param_2,(undefined4 *)puVar4);
        return param_1;
      }
      uVar2 = param_2[6];
    }
    if (uVar2 < uVar1) {
      param_3 = param_2;
      FUN_00413730((int *)&param_3);
      if ((param_3 == *(ushort **)((int)this + 4)) || (uVar1 < param_3[6])) {
        if (*(char *)(*(int *)(param_2 + 4) + 0x15) != '\0') {
          FUN_00469350(this,param_1,'\0',(undefined4 *)param_2,(undefined4 *)puVar4);
          return param_1;
        }
        FUN_00469350(this,param_1,'\x01',(undefined4 *)param_3,(undefined4 *)puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_00469500(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}

