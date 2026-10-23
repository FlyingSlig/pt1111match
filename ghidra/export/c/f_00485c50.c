// FUNCTION: PORT1111 0x00485c50
// name: FUN_00485c50
// sig: undefined4 FUN_00485c50(MMRESULT param_1)


undefined4 __fastcall FUN_00485c50(MMRESULT param_1)

{
  LPMMCKINFO pmmcki;
  LPMMCKINFO pmmcki_00;
  uint fuClose;
  MMRESULT MVar1;
  HMMIO pHVar2;
  MMRESULT local_4;
  
  pHVar2 = *(HMMIO *)(param_1 + 0x20);
  local_4 = param_1;
  if (*(int *)(param_1 + 0x94) == 1) {
    fuClose = -(uint)(*(int *)(param_1 + 0xa4) != 0) & 0x10;
LAB_00485d3d:
    mmioClose(pHVar2,fuClose);
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 0;
  }
  ((LPCMMIOINFO)(param_1 + 0x4c))->dwFlags = *(uint *)(param_1 + 0x4c) | 0x10000000;
  if (pHVar2 == (HMMIO)0x0) {
    return 0x800401f0;
  }
  MVar1 = mmioSetInfo(pHVar2,(LPCMMIOINFO)(param_1 + 0x4c),0);
  if (MVar1 == 0) {
    pmmcki = (LPMMCKINFO)(param_1 + 0x24);
    MVar1 = mmioAscend(*(HMMIO *)(param_1 + 0x20),pmmcki,0);
    if (MVar1 == 0) {
      pmmcki_00 = (LPMMCKINFO)(param_1 + 0x38);
      MVar1 = mmioAscend(*(HMMIO *)(param_1 + 0x20),pmmcki_00,0);
      if (MVar1 == 0) {
        mmioSeek(*(HMMIO *)(param_1 + 0x20),0,0);
        MVar1 = mmioDescend(*(HMMIO *)(param_1 + 0x20),pmmcki_00,(MMCKINFO *)0x0,0);
        if (MVar1 == 0) {
          pHVar2 = *(HMMIO *)(param_1 + 0x20);
          pmmcki->ckid = 0x74636166;
          MVar1 = mmioDescend(pHVar2,pmmcki,pmmcki_00,0x10);
          if (MVar1 == 0) {
            local_4 = MVar1;
            mmioWrite(*(HMMIO *)(param_1 + 0x20),(char *)&local_4,4);
            mmioAscend(*(HMMIO *)(param_1 + 0x20),pmmcki,0);
          }
          MVar1 = mmioAscend(*(HMMIO *)(param_1 + 0x20),pmmcki_00,0);
          if (MVar1 == 0) {
            pHVar2 = *(HMMIO *)(param_1 + 0x20);
            fuClose = 0;
            goto LAB_00485d3d;
          }
        }
      }
    }
  }
  return 0x80004005;
}

