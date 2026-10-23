// FUNCTION: PORT1111 0x0046c9e0
// name: FUN_0046c9e0
// sig: undefined4 FUN_0046c9e0(uchar * param_1)


undefined4 __cdecl FUN_0046c9e0(uchar *param_1)

{
  uchar *puVar1;
  int iVar2;
  uint local_4;
  
  puVar1 = __mbsrchr(param_1,0x2e);
  if (puVar1 != (uchar *)0x0) {
    local_4 = local_4 & 0xffffff;
    __mbsnbcpy((uchar *)&local_4,puVar1 + 1,3);
    __mbsupr((uchar *)&local_4);
    iVar2 = __mbscmp((uchar *)&local_4,"BMP");
    if (iVar2 != 0) {
      iVar2 = __mbscmp((uchar *)&local_4,"BMX");
      if (iVar2 != 0) {
        iVar2 = __mbscmp((uchar *)&local_4,(uchar *)&PTR_LAB_004c60c4);
        if ((iVar2 != 0) && (iVar2 = __mbscmp((uchar *)&local_4,"RLA"), iVar2 == 0)) {
          return 2;
        }
      }
    }
  }
  return 1;
}

