// FUNCTION: PORT1111 0x0040a060
// name: FUN_0040a060
// sig: undefined FUN_0040a060(void * this, uint param_1, uint param_2, undefined4 * param_3, int param_4, int param_5)


void __thiscall
FUN_0040a060(void *this,uint param_1,uint param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  param_4 = FUN_0042b210(DAT_004e2404,param_1,param_2,param_3,(char)param_4);
  if (-1 < param_4) {
    iVar2 = *(int *)((int)this + 300);
    iVar1 = FUN_00413870(iVar2,*(undefined4 *)(iVar2 + 4),&param_4);
    FUN_00409f80((void *)((int)this + 0x128),1);
    *(int *)(iVar2 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    iVar2 = FUN_00414c30(DAT_004e240c);
    *(undefined4 *)(iVar2 + 0x120) = *(undefined4 *)((int)this + 0x10);
    *(int *)(iVar2 + 0x128) = param_5;
    if (param_5 != 0) {
      *(undefined4 *)(iVar2 + 0xd8) = 1;
    }
    *(int *)((int)this + 0x124) = *(int *)((int)this + 0x124) + 1;
    FUN_00445030(*(void **)((int)this + 0xb0),0x3f1);
  }
  return;
}

