// FUNCTION: PORT1111 0x0040a350
// name: FUN_0040a350
// sig: undefined4 FUN_0040a350(void * this, undefined4 param_1, int param_2, int param_3, int param_4)


undefined4 __thiscall
FUN_0040a350(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
  if (iVar2 != 0) {
    puVar3 = FUN_00476aa0(*(void **)(DAT_004e2b14 + 0xf8),iVar2);
    *(undefined4 **)((int)this + 0x1c) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      iVar2 = FUN_00475080((int)puVar3);
      *(int *)((int)this + 0x18) = iVar2;
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 4;
        puVar1 = (uint *)(*(int *)((int)this + 0x18) + 0x28);
        *puVar1 = *puVar1 | 0x10;
        FUN_00478250(*(void **)((int)this + 0x18),0x96);
        FUN_004787e0(*(int *)((int)this + 0x18));
        *(int *)((int)this + 0x14) = param_2;
        *(int *)((int)this + 4) = *(int *)(param_2 + 4) + param_3;
        *(int *)((int)this + 8) = *(int *)(param_2 + 8) + param_4;
        *(undefined4 *)((int)this + 0xc) = DAT_004e2698;
        FUN_00428240(*(void **)(param_2 + 0x40),(int)this);
        FUN_00478700(*(void **)((int)this + 0x18),*(int *)((int)this + 4),*(int *)((int)this + 8));
        FUN_00478920(*(void **)((int)this + 0x18));
        *(int *)((int)this + 0x10) = DAT_004e0adc;
        DAT_004e0adc = DAT_004e0adc + 1;
        FUN_004176c0(DAT_004e240c,(int)this);
        return 1;
      }
    }
  }
  return 0;
}

