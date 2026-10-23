// FUNCTION: PORT1111 0x0043a170
// name: FUN_0043a170
// sig: undefined8 FUN_0043a170(undefined4 param_1, undefined4 param_2, int param_3, int param_4, int param_5, int param_6)


undefined8 __fastcall
FUN_0043a170(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = param_3 - param_5;
  iVar5 = param_4 - param_6;
  if ((((0x640000 < iVar3) || (0x640000 < iVar5)) || (iVar3 < -0x640000)) || (iVar5 < -0x640000)) {
    return CONCAT44(param_2,0x640000);
  }
  lVar1 = (longlong)iVar3 * (longlong)iVar3 + 0x8000;
  lVar2 = (longlong)iVar5 * (longlong)iVar5 + 0x8000;
  uVar4 = 0;
  uVar6 = 0x40000000;
  iVar3 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
          ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  do {
    while (((int)uVar6 <= iVar3 &&
           (iVar5 = (iVar3 - uVar6) - uVar4, (int)uVar4 <= (int)(iVar3 - uVar6)))) {
      uVar4 = uVar4 >> 1 | uVar6;
      uVar6 = uVar6 >> 2;
      iVar3 = iVar5;
      if (uVar6 == 0) goto code_r0x0043a220;
    }
    uVar4 = uVar4 >> 1;
    uVar6 = uVar6 >> 2;
  } while (uVar6 != 0);
code_r0x0043a220:
  return CONCAT44(param_2,uVar4 << 8);
}

