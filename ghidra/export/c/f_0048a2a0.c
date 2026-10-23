// FUNCTION: PORT1111 0x0048a2a0
// name: FUN_0048a2a0
// sig: undefined FUN_0048a2a0(void)


void FUN_0048a2a0(void)

{
  undefined4 *in_EAX;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_004e2ca8 != 0) {
    do {
      if ((HGDIOBJ)*in_EAX != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)*in_EAX);
        *in_EAX = 0;
      }
      iVar1 = iVar1 + 1;
      in_EAX = in_EAX + 0x10;
    } while (iVar1 < (int)(uint)DAT_004e2ca8);
  }
  return;
}

