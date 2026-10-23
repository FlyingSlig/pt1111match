// FUNCTION: PORT1111 0x00485a30
// name: FUN_00485a30
// sig: undefined4 FUN_00485a30(int param_1)


undefined4 __fastcall FUN_00485a30(int param_1)

{
  HMMIO hmmio;
  LONG LVar1;
  MMRESULT MVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x98);
    return 0;
  }
  hmmio = *(HMMIO *)(param_1 + 0x20);
  if (hmmio != (HMMIO)0x0) {
    if (*(int *)(param_1 + 0x94) == 1) {
      LVar1 = mmioSeek(hmmio,*(int *)(param_1 + 0x44) + 4,0);
      if (LVar1 != -1) {
        ((LPMMCKINFO)(param_1 + 0x24))->ckid = 0x61746164;
        MVar2 = mmioDescend(*(HMMIO *)(param_1 + 0x20),(LPMMCKINFO)(param_1 + 0x24),
                            (MMCKINFO *)(param_1 + 0x38),0x10);
        if (MVar2 == 0) {
          return 0;
        }
        return 0x80004005;
      }
    }
    else {
      ((LPMMCKINFO)(param_1 + 0x24))->ckid = 0x61746164;
      *(undefined4 *)(param_1 + 0x28) = 0;
      MVar2 = mmioCreateChunk(hmmio,(LPMMCKINFO)(param_1 + 0x24),0);
      if ((MVar2 == 0) &&
         (MVar2 = mmioGetInfo(*(HMMIO *)(param_1 + 0x20),(LPMMIOINFO)(param_1 + 0x4c),0), MVar2 == 0
         )) {
        return 0;
      }
    }
    return 0x80004005;
  }
  return 0x800401f0;
}

