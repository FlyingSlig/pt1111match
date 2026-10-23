// FUNCTION: PORT1111 0x0044ee00
// name: FUN_0044ee00
// sig: undefined FUN_0044ee00(undefined4 param_1, uint * param_2)


void __fastcall FUN_0044ee00(undefined4 param_1,uint *param_2)

{
  byte bVar1;
  byte *in_EAX;
  uint uVar2;
  int unaff_EDI;
  
  *param_2 = 0x12345678;
  param_2[1] = 0x23456789;
  param_2[2] = 0x34567890;
  bVar1 = *in_EAX;
  while (bVar1 != 0) {
    uVar2 = *(uint *)(unaff_EDI + (((uint)bVar1 ^ *param_2) & 0xff) * 4) ^ *param_2 >> 8;
    *param_2 = uVar2;
    uVar2 = ((uVar2 & 0xff) + param_2[1]) * 0x8088405 + 1;
    param_2[1] = uVar2;
    in_EAX = in_EAX + 1;
    param_2[2] = param_2[2] >> 8 ^ *(uint *)(unaff_EDI + ((uVar2 >> 0x18 ^ param_2[2]) & 0xff) * 4);
    bVar1 = *in_EAX;
  }
  return;
}

