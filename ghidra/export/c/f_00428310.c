// FUNCTION: PORT1111 0x00428310
// name: FUN_00428310
// sig: undefined FUN_00428310(void * this, int * param_1)


void __thiscall FUN_00428310(void *this,int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  uint *puVar4;
  
  (**(code **)(*param_1 + 4))(6);
  iVar2 = FUN_00424310((int)param_1);
  uVar3 = FUN_004242d0((int)param_1);
  if ((char)uVar3 == '\0') {
    FUN_00427480((int)this);
    *(undefined4 *)((int)this + 0x24) = 0;
    if ((*(int *)((int)this + 0xc) != 0) && (*(int *)(*(int *)((int)this + 0xc) + 0x10) != -1)) {
      FUN_00423e90(&DAT_004e26e8,*(int *)((int)this + 0x50));
    }
  }
  else {
    FUN_00427480((int)this);
    *(undefined4 *)((int)this + 0x24) = 1;
    FUN_00423e50(&DAT_004e26e8,*(int *)((int)this + 0x50));
  }
  pvVar1 = DAT_004e2038;
  if (DAT_004e2038 != (void *)0x0) {
    FUN_00413aa0(DAT_004e2038,(undefined4 *)&stack0xfffffff8,(int *)&stack0x00000000);
    if (unaff_EBX == *(int *)((int)pvVar1 + 4)) goto LAB_004283b3;
    iVar2 = *(int *)(unaff_EBX + 0x10);
  }
  FUN_00426c80(this,iVar2);
LAB_004283b3:
  uVar3 = FUN_004242d0((int)param_1);
  puVar4 = (uint *)(int)(char)uVar3;
  FUN_00426780(this,puVar4);
  (**(code **)(*param_1 + 4))((int)puVar4 + 2);
  FUN_004243d0(param_1,*(undefined4 **)((int)this + 0x10),(char *)puVar4);
  if ((1 < param_1[1]) && (0x14 < param_1[2])) {
    uVar3 = FUN_00424390((int)param_1);
    *(short *)((int)this + 0x3c) = (short)uVar3;
  }
  return;
}

