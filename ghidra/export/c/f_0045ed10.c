// FUNCTION: PORT1111 0x0045ed10
// name: FUN_0045ed10
// sig: undefined FUN_0045ed10(int * param_1)


void __cdecl FUN_0045ed10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  
  iVar1 = param_1[0x14];
  if (*(int *)(iVar1 + 0x2a0) == 0xb) {
    if (*(void **)(iVar1 + 0x1c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar1 + 0x1c));
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  iVar1 = *(int *)(param_1[0x14] + 0x1c);
  if ((iVar1 == 0) || (*(int *)(param_1[0x14] + 0x20) - iVar1 >> 3 == 0)) {
    piVar4 = (int *)(**(code **)(*param_1 + 0xc0))(0,1);
    iVar1 = *piVar4;
    iVar2 = piVar4[1];
    piVar4 = (int *)(**(code **)(*param_1 + 0xc0))();
    iVar3 = *piVar4;
    (**(code **)(*param_1 + 0xc0))(2,1);
    piVar4 = (int *)(**(code **)(*param_1 + 0xc0))(3,1);
    iVar6 = piVar4[1];
    iVar5 = *piVar4 + 5;
    FUN_0045ebc0(iVar1,iVar2 + -5,iVar5,iVar6,(void *)(param_1[0x14] + 0x18),5);
    FUN_0045ebc0(iVar5,iVar6,1,unaff_ESI,(void *)(param_1[0x14] + 0x18),5);
    FUN_0045ebc0(1,unaff_ESI,iVar3 + -5,1,(void *)(param_1[0x14] + 0x18),5);
    FUN_0045ebc0(iVar3 + -5,1,iVar1,iVar2 + -5,(void *)(param_1[0x14] + 0x18),5);
  }
  return;
}

