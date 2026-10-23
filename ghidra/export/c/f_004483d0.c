// FUNCTION: PORT1111 0x004483d0
// name: FUN_004483d0
// sig: undefined FUN_004483d0(int param_1)


void __fastcall FUN_004483d0(int param_1)

{
  if (DAT_004e240c != (undefined4 *)0x0) {
    FUN_00412fa0((int)DAT_004e240c);
  }
  if (DAT_004e2800 != 0) {
    FUN_0044c400(DAT_004e2800);
  }
  DAT_004e0af0 = 1;
  if (DAT_004e240c != (undefined4 *)0x0) {
    (**(code **)*DAT_004e240c)(1);
    DAT_004e240c = (undefined4 *)0x0;
  }
  if (DAT_004e2404 != (undefined4 *)0x0) {
    (**(code **)*DAT_004e2404)(1);
    DAT_004e2404 = (undefined4 *)0x0;
  }
  if (DAT_004e241c != (undefined4 *)0x0) {
    (**(code **)*DAT_004e241c)(1);
    DAT_004e241c = (undefined4 *)0x0;
  }
  if (DAT_004e2418 != (undefined4 *)0x0) {
    (**(code **)*DAT_004e2418)(1);
    DAT_004e2418 = (undefined4 *)0x0;
  }
  if (DAT_004e2410 != (undefined4 *)0x0) {
    (**(code **)*DAT_004e2410)(1);
    DAT_004e2410 = (undefined4 *)0x0;
  }
  if (DAT_004e2414 != (undefined4 *)0x0) {
    (**(code **)*DAT_004e2414)(1);
    DAT_004e2414 = (undefined4 *)0x0;
  }
  if (DAT_004e2420 != (undefined4 *)0x0) {
    (**(code **)*DAT_004e2420)(1);
    DAT_004e2420 = (undefined4 *)0x0;
  }
  FUN_00423b90(0x4e26e8);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

