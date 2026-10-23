// FUNCTION: PORT1111 0x0045acd0
// name: FUN_0045acd0
// sig: undefined FUN_0045acd0(int param_1)


void __fastcall FUN_0045acd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0xd8);
  iVar3 = 0;
  do {
    (**(code **)(*piVar2 + 0x38))();
    if (*(void **)(param_1 + 0x24) == (void *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)FUN_0047d0a0(*(void **)(param_1 + 0x24),iVar3 + 0x47);
    }
    if ((void *)piVar1[0x31] != (void *)0x0) {
      FUN_004737d0((void *)piVar1[0x31],"");
    }
    FUN_00472ef0(piVar1);
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0xaf;
  } while (iVar3 < 3);
  return;
}

