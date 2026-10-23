// FUNCTION: PORT1111 0x004501c0
// name: FUN_004501c0
// sig: int FUN_004501c0(void * this, undefined4 param_1, int param_2, int param_3, uint param_4)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FUN_004501c0(void *this,undefined4 param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *extraout_ECX;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_ESI;
  byte local_14;
  byte local_10 [12];
  undefined4 local_4;
  
  local_4 = DAT_004ddb0c;
  if (param_3 < 0xc) {
    return 0;
  }
  DAT_004e2808 = DAT_004e2808 + 1;
  pvVar5 = this;
  if (DAT_004e2808 == 1) {
    uVar2 = FID_conflict___time32((__time32_t *)0x0);
    FUN_00497dfd(uVar2 ^ 0xbb40e64e);
    pvVar5 = extraout_ECX;
  }
  FUN_0044ee00(pvVar5,unaff_ESI);
  param_3 = 0;
  do {
    iVar3 = _rand();
    uVar2 = unaff_ESI[2];
    uVar6 = *(uint *)((int)this + ((*unaff_ESI ^ iVar3 >> 7 & 0xffU) & 0xff) * 4) ^ *unaff_ESI >> 8;
    *unaff_ESI = uVar6;
    uVar7 = uVar2 & 0xfffd | 2;
    uVar6 = ((uVar6 & 0xff) + unaff_ESI[1]) * 0x8088405 + 1;
    unaff_ESI[1] = uVar6;
    uVar6 = (uVar6 >> 0x18 ^ uVar2) & 0xff;
    unaff_ESI[2] = uVar2 >> 8 ^ *(uint *)((int)this + uVar6 * 4);
    local_10[param_3] = (byte)((uVar7 ^ 1) * uVar7 >> 8) ^ (byte)(iVar3 >> 7);
    param_3 = param_3 + 1;
  } while (param_3 < 10);
  FUN_0044ee00(uVar6,unaff_ESI);
  iVar3 = 0;
  do {
    iVar4 = iVar3;
    uVar2 = unaff_ESI[2];
    uVar7 = uVar2 & 0xfffd | 2;
    uVar6 = *(uint *)((int)this + (((uint)local_10[iVar4] ^ *unaff_ESI) & 0xff) * 4) ^
            *unaff_ESI >> 8;
    *unaff_ESI = uVar6;
    uVar6 = ((uVar6 & 0xff) + unaff_ESI[1]) * 0x8088405 + 1;
    unaff_ESI[1] = uVar6;
    unaff_ESI[2] = uVar2 >> 8 ^ *(uint *)((int)this + ((uVar6 >> 0x18 ^ uVar2) & 0xff) * 4);
    *(byte *)(param_2 + iVar4) = (byte)((uVar7 ^ 1) * uVar7 >> 8) ^ local_10[iVar4];
    uVar2 = unaff_ESI[2];
    uVar7 = uVar2 & 0xfffd | 2;
    uVar6 = *(uint *)((int)this + (((uint)local_10[iVar4 + 1] ^ *unaff_ESI) & 0xff) * 4) ^
            *unaff_ESI >> 8;
    *unaff_ESI = uVar6;
    uVar6 = ((uVar6 & 0xff) + unaff_ESI[1]) * 0x8088405 + 1;
    unaff_ESI[1] = uVar6;
    unaff_ESI[2] = uVar2 >> 8 ^ *(uint *)((int)this + ((uVar6 >> 0x18 ^ uVar2) & 0xff) * 4);
    *(byte *)(param_2 + 1 + iVar4) = (byte)((uVar7 ^ 1) * uVar7 >> 8) ^ local_10[iVar4 + 1];
    uVar2 = unaff_ESI[2];
    uVar7 = uVar2 & 0xfffd | 2;
    uVar6 = *(uint *)((int)this + (((uint)local_10[iVar4 + 2] ^ *unaff_ESI) & 0xff) * 4) ^
            *unaff_ESI >> 8;
    *unaff_ESI = uVar6;
    uVar6 = ((uVar6 & 0xff) + unaff_ESI[1]) * 0x8088405 + 1;
    unaff_ESI[1] = uVar6;
    unaff_ESI[2] = uVar2 >> 8 ^ *(uint *)((int)this + ((uVar6 >> 0x18 ^ uVar2) & 0xff) * 4);
    *(byte *)(param_2 + 2 + iVar4) = (byte)((uVar7 ^ 1) * uVar7 >> 8) ^ local_10[iVar4 + 2];
    uVar2 = unaff_ESI[2];
    uVar7 = uVar2 & 0xfffd | 2;
    uVar6 = *(uint *)((int)this + (((uint)local_10[iVar4 + 3] ^ *unaff_ESI) & 0xff) * 4) ^
            *unaff_ESI >> 8;
    *unaff_ESI = uVar6;
    uVar6 = ((uVar6 & 0xff) + unaff_ESI[1]) * 0x8088405 + 1;
    unaff_ESI[1] = uVar6;
    unaff_ESI[2] = uVar2 >> 8 ^ *(uint *)((int)this + ((uVar6 >> 0x18 ^ uVar2) & 0xff) * 4);
    *(byte *)(param_2 + 3 + iVar4) = (byte)((uVar7 ^ 1) * uVar7 >> 8) ^ local_10[iVar4 + 3];
    uVar2 = unaff_ESI[2];
    uVar7 = uVar2 & 0xfffd | 2;
    uVar6 = *(uint *)((int)this + (((uint)local_10[iVar4 + 4] ^ *unaff_ESI) & 0xff) * 4) ^
            *unaff_ESI >> 8;
    *unaff_ESI = uVar6;
    uVar6 = ((uVar6 & 0xff) + unaff_ESI[1]) * 0x8088405 + 1;
    unaff_ESI[1] = uVar6;
    bVar1 = local_10[iVar4 + 4];
    unaff_ESI[2] = uVar2 >> 8 ^ *(uint *)((int)this + ((uVar6 >> 0x18 ^ uVar2) & 0xff) * 4);
    *(byte *)(iVar4 + 4 + param_2) = (byte)((uVar7 ^ 1) * uVar7 >> 8) ^ bVar1;
    iVar3 = iVar4 + 5;
  } while (iVar3 < 10);
  uVar2 = unaff_ESI[2];
  uVar6 = uVar2 & 0xfffd | 2;
  uVar7 = *(uint *)((int)this + ((param_4 >> 0x10 ^ *unaff_ESI) & 0xff) * 4) ^ *unaff_ESI >> 8;
  *unaff_ESI = uVar7;
  uVar7 = ((uVar7 & 0xff) + unaff_ESI[1]) * 0x8088405 + 1;
  unaff_ESI[1] = uVar7;
  local_14 = (byte)(param_4 >> 0x10);
  unaff_ESI[2] = uVar2 >> 8 ^ *(uint *)((int)this + ((uVar7 >> 0x18 ^ uVar2) & 0xff) * 4);
  *(byte *)(iVar3 + param_2) = (byte)((uVar6 ^ 1) * uVar6 >> 8) ^ local_14;
  uVar2 = unaff_ESI[2];
  uVar6 = uVar2 & 0xfffd | 2;
  uVar7 = *(uint *)((int)this + ((param_4 >> 0x18 ^ *unaff_ESI) & 0xff) * 4) ^ *unaff_ESI >> 8;
  *unaff_ESI = uVar7;
  uVar7 = ((uVar7 & 0xff) + unaff_ESI[1]) * 0x8088405 + 1;
  unaff_ESI[1] = uVar7;
  unaff_ESI[2] = uVar2 >> 8 ^ *(uint *)((int)this + ((uVar7 >> 0x18 ^ uVar2) & 0xff) * 4);
  local_14 = (byte)(param_4 >> 0x18);
  *(byte *)(iVar4 + 6 + param_2) = (byte)((uVar6 ^ 1) * uVar6 >> 8) ^ local_14;
  return iVar4 + 7;
}

