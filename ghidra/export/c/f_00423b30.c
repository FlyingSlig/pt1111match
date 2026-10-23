// FUNCTION: PORT1111 0x00423b30
// name: FUN_00423b30
// sig: undefined FUN_00423b30(void * this, uint param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00423b30(void *this,uint param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  undefined2 unaff_DI;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((int)this + 100);
  iVar3 = *(int *)((int)this + 0x200) + 1;
  *(int *)((int)this + 0x200) = iVar3;
  fVar2 = (float)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar2 = fVar2 + _DAT_004bf78c;
  }
  FUN_004980e0((double)((float)(int)param_1 / fVar2),unaff_DI);
  uVar4 = FUN_00497d88();
  FUN_00422ff0(this,param_1 % uVar1,(uint)uVar4,iVar3);
  return;
}

