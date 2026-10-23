// FUNCTION: PORT1111 0x0042cc90
// name: FUN_0042cc90
// sig: undefined FUN_0042cc90(int param_1)


void __fastcall FUN_0042cc90(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *this;
  
  iVar3 = FUN_00429b00(DAT_004e2404,(uint *)(param_1 + 0x10));
  iVar4 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
  iVar4 = FUN_00475080(iVar4);
  puVar5 = FUN_00479800(iVar4);
  iVar4 = 1;
  *(undefined4 **)(param_1 + 8) = puVar5;
  this = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
  FUN_00477ae0(this,puVar5,iVar4);
  pbVar1 = (byte *)(*(int *)(param_1 + 8) + 0x2c);
  *pbVar1 = *pbVar1 | 0x80;
  puVar2 = (uint *)(*(int *)(param_1 + 8) + 0x28);
  *puVar2 = *puVar2 | 4;
  iVar4 = (int)*(short *)(iVar3 + 4);
  iVar3 = (int)*(short *)(iVar3 + 6);
  if (*(char *)(*(int *)(param_1 + 0xc) + 100) != '\0') {
    iVar4 = iVar4 + 0x20;
    iVar3 = iVar3 + 0x10;
  }
  FUN_004207f0(*(int *)(DAT_004e2b14 + 0xf8));
  FUN_004787e0(*(int *)(param_1 + 8));
  FUN_00478700(*(void **)(param_1 + 8),iVar4,iVar3);
  FUN_00478380(*(void **)(param_1 + 8),1);
  FUN_00478920(*(void **)(param_1 + 8));
  FUN_004789b0(*(void **)(param_1 + 8),(int *)0x1);
  return;
}

