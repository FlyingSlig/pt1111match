// FUNCTION: PORT1111 0x0044edb0
// name: FUN_0044edb0
// sig: undefined FUN_0044edb0(void)


void FUN_0044edb0(void)

{
  uint in_EAX;
  uint uVar1;
  uint *unaff_ESI;
  int unaff_EDI;
  
  uVar1 = *(uint *)(unaff_EDI + ((*unaff_ESI ^ in_EAX) & 0xff) * 4) ^ *unaff_ESI >> 8;
  *unaff_ESI = uVar1;
  uVar1 = ((uVar1 & 0xff) + unaff_ESI[1]) * 0x8088405 + 1;
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = unaff_ESI[2] >> 8 ^
                 *(uint *)(unaff_EDI + ((uVar1 >> 0x18 ^ unaff_ESI[2]) & 0xff) * 4);
  return;
}

