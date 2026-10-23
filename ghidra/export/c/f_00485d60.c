// FUNCTION: PORT1111 0x00485d60
// name: FUN_00485d60
// sig: uint FUN_00485d60(void * this, short * param_1)


uint __thiscall FUN_00485d60(void *this,short *param_1)

{
  LPMMCKINFO pmmcki;
  HMMIO hmmio;
  MMRESULT MVar1;
  LONG LVar2;
  char local_18 [4];
  _MMCKINFO local_14;
  
  local_18[0] = -1;
  local_18[1] = -1;
  local_18[2] = -1;
  local_18[3] = -1;
  *(undefined4 *)((int)this + 0x40) = 0x45564157;
  *(undefined4 *)((int)this + 0x3c) = 0;
  MVar1 = mmioCreateChunk(*(HMMIO *)((int)this + 0x20),(LPMMCKINFO)((int)this + 0x38),0x20);
  if (MVar1 != 0) {
    return 0x80004005;
  }
  hmmio = *(HMMIO *)((int)this + 0x20);
  pmmcki = (LPMMCKINFO)((int)this + 0x24);
  pmmcki->ckid = 0x20746d66;
  *(undefined4 *)((int)this + 0x28) = 0x10;
  MVar1 = mmioCreateChunk(hmmio,pmmcki,0);
  if (MVar1 == 0) {
    if (*param_1 == 1) {
      LVar2 = mmioWrite(*(HMMIO *)((int)this + 0x20),(char *)param_1,0x10);
      if (LVar2 != 0x10) {
        return 0x80004005;
      }
    }
    else {
      LVar2 = mmioWrite(*(HMMIO *)((int)this + 0x20),(char *)param_1,(ushort)param_1[8] + 0x12);
      if (LVar2 != (ushort)param_1[8] + 0x12) {
        return 0x80004005;
      }
    }
    local_14.cksize = mmioAscend(*(HMMIO *)((int)this + 0x20),pmmcki,0);
    if (local_14.cksize == 0) {
      local_14.ckid = 0x74636166;
      MVar1 = mmioCreateChunk(*(HMMIO *)((int)this + 0x20),&local_14,0);
      if ((MVar1 == 0) && (LVar2 = mmioWrite(*(HMMIO *)((int)this + 0x20),local_18,4), LVar2 == 4))
      {
        MVar1 = mmioAscend(*(HMMIO *)((int)this + 0x20),&local_14,0);
        return -(uint)(MVar1 != 0) & 0x80004005;
      }
    }
    return 0x80004005;
  }
  return 0x80004005;
}

