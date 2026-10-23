// FUNCTION: PORT1111 0x0048f420
// name: FUN_0048f420
// sig: uint FUN_0048f420(uint param_1, int param_2)


uint __cdecl FUN_0048f420(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 + 100;
  param_2 = (int)((param_1 & 0xff) * iVar2) / 100;
  if (0xfe < param_2) {
    param_2 = 0xff;
  }
  iVar1 = (int)((param_1 >> 8 & 0xff) * iVar2) / 100;
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  iVar2 = (int)((param_1 >> 0x10 & 0xff) * iVar2) / 100;
  if (0xfe < iVar2) {
    iVar2 = 0xff;
  }
  return (uint)CONCAT21(CONCAT11((char)iVar2,(char)iVar1),(undefined1)param_2);
}

