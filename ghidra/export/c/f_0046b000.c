// FUNCTION: PORT1111 0x0046b000
// name: FUN_0046b000
// sig: undefined4 FUN_0046b000(int * param_1, undefined4 * param_2, undefined4 param_3, int * param_4)


undefined4 __cdecl FUN_0046b000(int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x14))();
    iVar2 = -iVar2;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x14))();
  }
  *param_4 = iVar2;
  uVar3 = (**(code **)(*param_1 + 0x2c))(iVar1,*param_2,param_2[1]);
  *unaff_retaddr = uVar3;
  return 1;
}

