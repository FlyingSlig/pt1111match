// FUNCTION: PORT1111 0x00451a30
// name: FUN_00451a30
// sig: uint FUN_00451a30(void * this, int * param_1)


uint __thiscall FUN_00451a30(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int local_50 [7];
  uint local_34;
  
  iVar1 = FUN_0044f510(*(undefined4 *)this,local_50,0,0,0,0,0,0);
  if (local_34 == 0) {
    *param_1 = 0;
    return 0;
  }
  if (iVar1 == 0) {
    puVar2 = _malloc(local_34 + 1);
    *param_1 = (int)puVar2;
    for (uVar3 = local_34 + 1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (uVar3 = local_34 + 1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    if (*param_1 != 0) {
      uVar3 = FUN_0044f970(*(int *)this,*param_1,local_34);
      if (uVar3 == local_34) {
        return local_34;
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)*param_1);
    }
  }
  return 0xffffffff;
}

