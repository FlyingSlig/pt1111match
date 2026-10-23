// FUNCTION: PORT1111 0x0040fe60
// name: FUN_0040fe60
// sig: undefined FUN_0040fe60(void * this, void * param_1, int param_2, int * param_3, int param_4)


void __thiscall FUN_0040fe60(void *this,void *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = FUN_00424310((int)param_1);
  if (0 < local_18) {
    do {
      uVar3 = FUN_00424310((int)param_1);
      local_10 = FUN_00424310((int)param_1);
      iVar1 = *(int *)((int)this + 0x40);
      local_c = uVar3;
      if ((iVar1 == 0) ||
         ((uint)(*(int *)((int)this + 0x48) - iVar1 >> 3) <=
          (uint)(*(int *)((int)this + 0x44) - iVar1 >> 3))) {
        FUN_0040fba0((void *)((int)this + 0x3c),*(undefined4 **)((int)this + 0x44),1,&local_10);
      }
      else {
        puVar2 = *(undefined4 **)((int)this + 0x44);
        FUN_0041f4d0(puVar2,1,&local_10);
        *(undefined4 **)((int)this + 0x44) = puVar2 + 2;
      }
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  uVar3 = FUN_00424310((int)param_1);
  *(undefined4 *)((int)this + 0x50) = uVar3;
  FUN_00404360(this,param_1,param_2,param_3,param_4);
  return;
}

