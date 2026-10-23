// FUNCTION: PORT1111 0x004a5330
// name: FUN_004a5330
// sig: undefined FUN_004a5330(undefined4 * param_1)


void __cdecl FUN_004a5330(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_40 [16];
  
  FUN_004608b0((int)(param_1 + 0x1d));
  FUN_004a4750((int)param_1,(void *)param_1[0x2b]);
  FUN_004a4750((int)param_1,(void *)param_1[0x3b]);
  FUN_004a4750((int)param_1,(void *)param_1[0x3a]);
  FUN_004a4750((int)param_1,(void *)param_1[0x3c]);
  FUN_004a4750((int)param_1,(void *)param_1[0x3d]);
  FUN_004a4750((int)param_1,(void *)param_1[0x3e]);
  FUN_004a4750((int)param_1,(void *)param_1[0x3f]);
  FUN_004a4750((int)param_1,(void *)param_1[0x84]);
  FUN_004a4750((int)param_1,(void *)param_1[0x7f]);
  FUN_004a4750((int)param_1,(void *)param_1[0x80]);
  FUN_004a4750((int)param_1,(void *)param_1[0x81]);
  FUN_004a4750((int)param_1,(void *)param_1[0x82]);
  FUN_004a4750((int)param_1,(void *)param_1[0x83]);
  uVar1 = param_1[0x10];
  uVar2 = param_1[0x12];
  puVar5 = param_1;
  puVar6 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar3 = param_1[0x11];
  puVar5 = param_1;
  for (iVar4 = 0x8e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar1;
  param_1[0x12] = uVar2;
  puVar5 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

