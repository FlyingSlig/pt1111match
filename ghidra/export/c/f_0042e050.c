// FUNCTION: PORT1111 0x0042e050
// name: FUN_0042e050
// sig: undefined FUN_0042e050(void * this, int param_1, int param_2)


void __thiscall FUN_0042e050(void *this,int param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *this_00;
  
  iVar3 = FUN_00406ab0((byte)*(undefined4 *)(param_1 + 0x18));
  if (iVar3 == *(int *)(param_1 + 0x14)) {
    if (param_2 != 0) {
      FUN_00478700(*(void **)(param_1 + 4),*(int *)(param_1 + 0xc) + 0x20,
                   *(int *)(param_1 + 0x10) + 0x10);
      FUN_00420ee0(*(int *)(DAT_004e2b14 + 0xf8));
      FUN_00478380(*(void **)(param_1 + 4),
                   *(int *)(param_1 + 0x10) * 0x10000 + *(int *)(param_1 + 0xc));
      FUN_004207f0(*(int *)(DAT_004e2b14 + 0xf8));
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x14) = iVar3;
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0042dff0(param_1);
    }
    iVar4 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
    if (iVar4 != 0) {
      FUN_00403830(*(void **)((int)this + 0x30),iVar3);
      iVar3 = FUN_00475080(iVar4);
      if ((iVar3 != 0) && (puVar5 = FUN_00479800(iVar3), puVar5 != (undefined4 *)0x0)) {
        iVar3 = 1;
        *(undefined4 **)(param_1 + 4) = puVar5;
        this_00 = (void *)FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
        FUN_00477ae0(this_00,puVar5,iVar3);
        pbVar1 = (byte *)(*(int *)(param_1 + 4) + 0x2c);
        *pbVar1 = *pbVar1 | 0x80;
        puVar2 = (uint *)(*(int *)(param_1 + 4) + 0x28);
        *puVar2 = *puVar2 | 4;
        FUN_004787e0(*(int *)(param_1 + 4));
        FUN_00478700(*(void **)(param_1 + 4),*(int *)(param_1 + 0xc) + 0x20,
                     *(int *)(param_1 + 0x10) + 0x10);
        FUN_00478380(*(void **)(param_1 + 4),
                     *(int *)(param_1 + 0x10) * 0x10000 + *(int *)(param_1 + 0xc));
        FUN_00478920(*(void **)(param_1 + 4));
        FUN_004789b0(*(void **)(param_1 + 4),(int *)0x1);
        FUN_004207f0(*(int *)(DAT_004e2b14 + 0xf8));
      }
    }
  }
  return;
}

