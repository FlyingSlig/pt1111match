// FUNCTION: PORT1111 0x004307f0
// name: FUN_004307f0
// sig: undefined FUN_004307f0(undefined4 param_1, uint * param_2, uint * param_3)


void __cdecl FUN_004307f0(undefined4 param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  
  *param_2 = 1;
  *param_3 = 1;
  piVar1 = (int *)FUN_00414c30(DAT_004e240c);
  if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0xf) & 8) != 0)) {
    iVar2 = FUN_00407cc0((int)piVar1);
    iVar3 = FUN_00407ce0((int)piVar1);
    *param_2 = iVar2 * 0x20 + iVar3 * -0x20;
    *param_3 = (iVar3 + iVar2) * 0x10;
    *param_2 = *param_2 + 0x20;
    *param_3 = *param_3 + 0x10;
  }
  uVar6 = *param_3;
  uVar5 = *param_2;
  pvVar4 = (void *)(**(code **)(*piVar1 + 0x88))();
  iVar2 = FUN_004223c0(pvVar4,uVar5,uVar6);
  if (iVar2 != 0) {
    pvVar4 = (void *)(**(code **)(*piVar1 + 0x88))();
    FUN_0045e520(*param_3,*param_2,(int *)param_2,(int *)param_3,*param_2,*param_3,pvVar4);
  }
  FUN_004296f0(DAT_004e2404,*param_2,*param_3,param_2,param_3);
  return;
}

