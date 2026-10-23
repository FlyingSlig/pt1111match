// FUNCTION: PORT1111 0x00427240
// name: FUN_00427240
// sig: undefined FUN_00427240(void * this, int * param_1)


void __thiscall FUN_00427240(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 0x38);
  iVar2 = *(short *)((int)this + 6) + DAT_004e2c34;
  iVar3 = *(short *)((int)this + 4) + DAT_004e2c30;
  piVar1 = (int *)(**(code **)(*param_1 + 0x74))();
  FUN_004291a0(&DAT_004e20c8,piVar1,iVar3,iVar2,uVar4);
  if (*(int *)((int)this + 0x24) != 0) {
    (**(code **)(*param_1 + 0x34))
              (DAT_004e2048,*(short *)((int)this + 4) + DAT_004e2c30,
               *(short *)((int)this + 6) + DAT_004e2c34,0);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  return;
}

