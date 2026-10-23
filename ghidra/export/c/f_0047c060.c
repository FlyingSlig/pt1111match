// FUNCTION: PORT1111 0x0047c060
// name: FUN_0047c060
// sig: undefined4 FUN_0047c060(void * this, uint param_1)


undefined4 __thiscall FUN_0047c060(void *this,uint param_1)

{
  uint uVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  SIZE_T dwBytes;
  
  iVar4 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 0x14) < iVar4 + param_1) {
    uVar1 = *(uint *)((int)this + 0x1c);
    dwBytes = *(uint *)((int)this + 0x14) + ((uint)(param_1 % uVar1 != 0) + param_1 / uVar1) * uVar1
    ;
    if (*(HGLOBAL *)((int)this + 0x20) == (HGLOBAL)0x0) {
      pvVar2 = GlobalAlloc(0x40,dwBytes);
      *(HGLOBAL *)((int)this + 0x20) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) {
        return 0;
      }
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)((int)this + 0x10) = pvVar3;
    }
    else {
      if (*(int *)((int)this + 0x10) != 0) {
        GlobalUnlock(*(HGLOBAL *)((int)this + 0x20));
      }
      pvVar2 = GlobalReAlloc(*(HGLOBAL *)((int)this + 0x20),dwBytes,0x42);
      *(HGLOBAL *)((int)this + 0x20) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) {
        return 0;
      }
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)((int)this + 0x10) = pvVar3;
      if (*(int *)((int)this + 0x18) == 0) {
        return 0;
      }
      pvVar3 = (LPVOID)((int)pvVar3 + iVar4);
    }
    *(LPVOID *)((int)this + 0x18) = pvVar3;
    *(SIZE_T *)((int)this + 0x14) = dwBytes;
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return 1;
}

