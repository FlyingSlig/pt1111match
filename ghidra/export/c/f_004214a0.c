// FUNCTION: PORT1111 0x004214a0
// name: FUN_004214a0
// sig: undefined FUN_004214a0(void * param_1)


void __fastcall FUN_004214a0(void *param_1)

{
  void *pvVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_0046c280(*(void **)(*(int *)((int)param_1 + 4) + 4),0xff00ff,(int *)0x0);
  (**(code **)(**(int **)(*(int *)((int)param_1 + 4) + 4) + 0x40))(0);
  uVar3 = 0;
  pvVar1 = DAT_004e2404;
  if (*(int *)((int)DAT_004e2404 + 0x110) != 0) {
    do {
      uVar4 = 0;
      if (*(int *)((int)pvVar1 + 0x10c) != 0) {
        do {
          pvVar1 = (void *)FUN_00429ac0(pvVar1,uVar4,uVar3);
          if (pvVar1 != (void *)0x0) {
            FUN_00421240(param_1,pvVar1);
          }
          uVar4 = uVar4 + *(int *)((int)param_1 + 100);
          pvVar1 = DAT_004e2404;
        } while (uVar4 < *(uint *)((int)DAT_004e2404 + 0x10c));
      }
      uVar3 = uVar3 + *(int *)((int)param_1 + 100);
    } while (uVar3 < *(uint *)((int)pvVar1 + 0x110));
  }
  bVar2 = (byte)*(undefined4 *)((int)param_1 + 0x48);
  FUN_004786d0(*(void **)((int)param_1 + 0x14),
               ((*(int *)((int)param_1 + 0x68) - (DAT_004e2c30 >> (bVar2 & 0x1f))) +
               *(int *)((int)param_1 + 0x4c)) - DAT_004e2c30,
               ((*(int *)((int)param_1 + 0x6c) - (DAT_004e2c34 >> (bVar2 & 0x1f))) +
               *(int *)((int)param_1 + 0x54)) - DAT_004e2c34);
  return;
}

