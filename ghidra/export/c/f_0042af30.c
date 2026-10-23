// FUNCTION: PORT1111 0x0042af30
// name: FUN_0042af30
// sig: undefined4 FUN_0042af30(void * this, int * param_1)


undefined4 __thiscall FUN_0042af30(void *this,int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 local_4;
  
  local_4 = this;
  FUN_00412fa0((int)DAT_004e240c);
  pcVar3 = (char *)&local_4;
  local_4 = (void *)0x70614d;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_0042f440(param_1,&local_4,pcVar3 + -((int)&local_4 + 1));
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  (**(code **)(*param_1 + 4))(0);
  FUN_0042a450(param_1);
  FUN_0042f670(param_1);
  FUN_0042f670(param_1);
  (**(code **)(*param_1 + 4))(0);
  uVar2 = DAT_004e2c34;
  if (1 < param_1[1]) {
    iVar5 = *(int *)(DAT_004e26f0 + DAT_004e26fc * 4);
    *(undefined4 *)(iVar5 + 0x210) = DAT_004e2c30;
    *(undefined4 *)(iVar5 + 0x214) = uVar2;
  }
  FUN_00423c20(&DAT_004e26e8,param_1);
  (**(code **)(*param_1 + 4))(1);
  uVar8 = 0;
  if (*(int *)((int)this + 0x10c) != 0) {
    uVar4 = *(uint *)((int)this + 0x110);
    do {
      uVar6 = 0;
      if (uVar4 != 0) {
        do {
          FUN_00426e50((void *)((*(int *)((int)this + 0x10c) * uVar6 + uVar8) * 0x6c +
                               *(int *)((int)this + 0x118)),param_1);
          uVar4 = *(uint *)((int)this + 0x110);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)((int)this + 0x10c));
  }
  piVar7 = (int *)**(int **)((int)this + 0x18);
  if (piVar7 != *(int **)((int)this + 0x18)) {
    do {
      (**(code **)(*(int *)piVar7[2] + 0x30))();
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x18));
  }
  FUN_0042f670(param_1);
  (**(code **)(*param_1 + 4))(0);
  piVar7 = (int *)**(int **)((int)this + 0x18);
  if (piVar7 != *(int **)((int)this + 0x18)) {
    do {
      iVar5 = (**(code **)(*(int *)piVar7[2] + 0x30))();
      if (iVar5 != 0) {
        FUN_0041b610(param_1);
        (**(code **)(*param_1 + 4))(1);
        FUN_0042f4c0((int)param_1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x18));
  }
  FUN_004158c0(DAT_004e240c,param_1);
  if (param_1[1] == 3) {
    FUN_0040af40(DAT_004e2418,param_1);
  }
  (**(code **)(*param_1 + 4))(1);
  FUN_00412fd0((int)DAT_004e240c);
  return 1;
}

