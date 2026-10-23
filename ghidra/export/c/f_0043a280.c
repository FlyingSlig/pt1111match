// FUNCTION: PORT1111 0x0043a280
// name: FUN_0043a280
// sig: undefined FUN_0043a280(uint param_1, uint param_2)


void __cdecl FUN_0043a280(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2;
  uVar1 = param_1;
  iVar3 = FUN_004296f0(DAT_004e2404,400 - param_1,300 - param_2,&param_1,&param_2);
  if (iVar3 != 0) {
    DAT_004e2c30 = uVar1;
    DAT_004e2c34 = uVar2;
    DAT_004e2400 = -0x40 - uVar1;
    DAT_004e23fc = -0x20 - uVar2;
    DAT_004e23f8 = (DAT_004e26d0 - uVar1) + 0x40;
    DAT_004e23f4 = (DAT_004e26d4 - uVar2) + 0x20;
  }
  return;
}

