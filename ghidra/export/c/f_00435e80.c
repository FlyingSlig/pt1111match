// FUNCTION: PORT1111 0x00435e80
// name: FUN_00435e80
// sig: undefined FUN_00435e80(int param_1)


void __cdecl FUN_00435e80(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (DAT_004e21dc == (int *)0x0) {
    DAT_004e21dc = FUN_00435e20(DAT_004e21e8,0x4000);
  }
  piVar1 = DAT_004e21dc;
  FUN_00435bb0(DAT_004e21dc);
  *piVar1 = param_1;
  piVar1[8] = 1;
  if (param_1 == 0) {
    uVar3 = 0;
    piVar4 = piVar1;
  }
  else {
    iVar2 = FUN_004b3066(param_1);
    iVar2 = __isatty(iVar2);
    uVar3 = (uint)(0 < iVar2);
    piVar4 = DAT_004e21dc;
  }
  piVar1[6] = uVar3;
  DAT_004e31dc = (undefined1 *)piVar4[2];
  DAT_004e21d0 = piVar4[4];
  DAT_004e21e8 = *piVar4;
  DAT_004e21e0 = DAT_004e31dc;
  DAT_004e21c8 = *DAT_004e31dc;
  return;
}

