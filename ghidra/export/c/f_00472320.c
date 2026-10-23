// FUNCTION: PORT1111 0x00472320
// name: FUN_00472320
// sig: undefined FUN_00472320(int * param_1)


void __fastcall FUN_00472320(int *param_1)

{
  RECT *pRVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  (**(code **)(*param_1 + 0x30))(&local_20);
  if (param_1[0x2b] != 2) {
    FUN_004783d0((void *)param_1[0x10],(RECT *)0x0);
  }
  if (param_1[0x2b] == 1) {
    iVar3 = iStack_1c - unaff_ESI;
    iVar2 = FUN_0047e810(param_1[0x11]);
    if ((iVar2 != iVar3) ||
       (iVar3 = iStack_18 - local_20, iVar2 = FUN_0047e870(param_1[0x11]), iVar2 != iVar3)) {
      FUN_0047e8e0((void *)param_1[0x11],iStack_1c - unaff_ESI,iStack_18 - local_20);
    }
  }
  else if (param_1[0x2b] == 2) {
    pRVar1 = (RECT *)FUN_0046f2b0(param_1);
    FUN_004783d0((void *)param_1[0x10],pRVar1);
  }
  FUN_0046ffa0(param_1,(uint)((param_1[0xc] & 0x80000U) == 0x80000));
  FUN_00478740((void *)param_1[0x10]);
  FUN_004786d0((void *)param_1[0x10],unaff_ESI,local_20);
  return;
}

