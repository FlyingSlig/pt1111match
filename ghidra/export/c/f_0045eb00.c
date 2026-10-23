// FUNCTION: PORT1111 0x0045eb00
// name: FUN_0045eb00
// sig: undefined FUN_0045eb00(int param_1, int param_2, undefined4 param_3, undefined4 param_4, int * param_5)


void __cdecl
FUN_0045eb00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  int unaff_ESI;
  
  piVar4 = (int *)(**(code **)(*param_5 + 0xc0))(0);
  iVar1 = *piVar4;
  piVar4 = (int *)(**(code **)(*param_5 + 0xc0))();
  iVar2 = *piVar4;
  piVar4 = (int *)(**(code **)(*param_5 + 0xc0))(2,1);
  iVar3 = *piVar4;
  piVar4 = (int *)(**(code **)(*param_5 + 0xc0))(3,1);
  FUN_0045e820(iVar1 + param_1,1,1,unaff_EBP,unaff_ESI,iVar3 + param_1,*piVar4 + param_1,
               piVar4[1] + param_2,1,iVar2 + param_1);
  return;
}

