// FUNCTION: PORT1111 0x00485590
// name: FUN_00485590
// sig: undefined4 * FUN_00485590(void * this, undefined4 * param_1, uint * param_2, uint * param_3)


undefined4 * __thiscall FUN_00485590(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_004852e0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_004852e0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_004852e0(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_00413050((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_004852e0(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_004852e0(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_00413730((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_004852e0(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_004852e0(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_004854d0(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}

