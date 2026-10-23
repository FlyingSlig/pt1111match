// FUNCTION: PORT1111 0x00404720
// name: FUN_00404720
// sig: undefined FUN_00404720(void * this, int param_1, int param_2, int * param_3)


void __thiscall FUN_00404720(void *this,int param_1,int param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  
  if (*(int *)((int)this + 0x34) != 0) {
    iVar5 = *(int *)((int)this + 0x10);
    sVar1 = *(short *)(param_1 + 0x30);
    sVar2 = **(short **)(param_2 + 0xc);
    iVar6 = *param_3;
    sVar3 = *(short *)(param_1 + 0x32);
    sVar4 = (*(short **)(param_2 + 0xc))[1];
    iVar7 = param_3[1];
    iVar8 = *(int *)((int)this + 0x14);
    iVar9 = (**(code **)(**(int **)((int)this + 0x34) + 0x9c))();
    if (iVar9 != 0) {
      FUN_0040ff50();
      iVar9 = **(int **)((int)this + 0xc);
      uVar10 = (**(code **)(**(int **)(*(int *)(DAT_004e2b14 + 0xf8) + 0x1c) + 0x70))();
      (**(code **)(iVar9 + 8))
                (((sVar1 + iVar5) - (int)sVar2) + iVar6,((int)sVar3 - (int)sVar4) + iVar7 + iVar8,
                 uVar10);
    }
  }
  return;
}

