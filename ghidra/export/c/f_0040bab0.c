// FUNCTION: PORT1111 0x0040bab0
// name: FUN_0040bab0
// sig: undefined4 FUN_0040bab0(void * this, undefined4 param_1)


undefined4 __thiscall FUN_0040bab0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  int *piVar4;
  int iVar5;
  int *unaff_ESI;
  ulonglong uVar6;
  
  FUN_0040ba20(this,param_1);
  piVar4 = (int *)**(int **)((int)this + 0x1c);
  *(int **)((int)this + 0x40) = piVar4;
  if (piVar4 != *(int **)((int)this + 0x1c)) {
    do {
      piVar4 = (int *)FUN_00414c30(DAT_004e240c);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x30))(*(undefined4 *)(*(int *)((int)this + 0x24) + 0x30));
        (**(code **)(*piVar4 + 0x3c))(2);
        iVar5 = *piVar4;
        iVar1 = *(int *)((int)this + 8);
        iVar2 = *(int *)((int)this + 0x28);
        uVar6 = FUN_00497d88();
        (**(code **)(iVar5 + 0x34))(iVar2 + iVar1 + (int)uVar6);
        (**(code **)(*unaff_ESI + 0x38))(*(undefined4 *)((int)this + 0xc));
      }
      iVar5 = *(int *)((int)this + 0x44) + 1;
      dVar3 = (double)*(int *)((int)this + 0x10) + *(double *)((int)this + 0x38);
      *(int *)((int)this + 0x44) = iVar5;
      *(double *)((int)this + 0x38) = dVar3;
      if ((*(int *)((int)this + 0xc) == 0) && (iVar5 == *(int *)((int)this + 0x48))) {
        *(double *)((int)this + 0x38) = dVar3 + (double)*(int *)((int)this + 0x10);
      }
      iVar5 = **(int **)((int)this + 0x40);
      *(int *)((int)this + 0x40) = iVar5;
    } while (iVar5 != *(int *)((int)this + 0x1c));
  }
  return *(undefined4 *)((int)this + 0x28);
}

