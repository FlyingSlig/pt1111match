// FUNCTION: PORT1111 0x0043c8e0
// name: FUN_0043c8e0
// sig: int FUN_0043c8e0(void * this, int param_1)


int __thiscall FUN_0043c8e0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar1 == 0) {
    return -1;
  }
  uVar2 = _rand();
  piVar4 = (int *)**(int **)((int)this + 8);
  iVar5 = 0;
  if (piVar4 != *(int **)((int)this + 8)) {
    do {
      if (((((int)(uVar2 % uVar1) <= iVar5) && (piVar4[2] != param_1)) &&
          (iVar3 = FUN_00414c30(DAT_004e240c), iVar3 != 0)) &&
         ((*(int *)(iVar3 + 0x7c) == 0 && (iVar3 = FUN_00412b60(iVar3), iVar3 == 0)))) {
        return piVar4[2];
      }
      piVar4 = (int *)*piVar4;
      iVar5 = iVar5 + 1;
    } while (piVar4 != (int *)*(int *)((int)this + 8));
  }
  return -1;
}

