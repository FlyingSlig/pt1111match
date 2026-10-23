// FUNCTION: PORT1111 0x004afdc0
// name: FUN_004afdc0
// sig: bool FUN_004afdc0(int * param_1)


bool __cdecl FUN_004afdc0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1;
  bVar1 = true;
  if ((*(byte *)(param_1 + 0x47) & 0x20) == 0) {
    if ((param_1[0x1b] & 0x800U) == 0) goto LAB_004afdec;
  }
  else if ((param_1[0x1b] & 0x300U) != 0x300) goto LAB_004afdec;
  bVar1 = false;
LAB_004afdec:
  FUN_004ac610(param_1,&param_1,4);
  if (!bVar1) {
    return false;
  }
  iVar3 = FUN_004afc90((byte *)&param_1);
  return iVar3 != piVar2[0x44];
}

