// FUNCTION: PORT1111 0x00455180
// name: FUN_00455180
// sig: undefined FUN_00455180(int param_1)


void __fastcall FUN_00455180(int param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  byte bVar3;
  ushort uVar4;
  
  uVar4 = 0;
  bVar3 = 0x50;
  puVar2 = (ulonglong *)(param_1 + 4);
  piVar1 = (int *)(**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x70))();
  FUN_004880f0(piVar1,puVar2,bVar3,uVar4);
  FUN_0040ff50();
  FUN_00452860(param_1 + 0x18);
  return;
}

