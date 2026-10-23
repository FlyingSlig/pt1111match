// FUNCTION: PORT1111 0x00446b32
// name: FUN_00446b32
// sig: undefined4 FUN_00446b32(void * this, int * param_1)


undefined4 __thiscall FUN_00446b32(void *this,int *param_1)

{
  undefined4 *puVar1;
  LPCSTR lpString2;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint xLeft;
  uint yTop;
  int *unaff_EBX;
  int *piVar5;
  bool in_ZF;
  void *in_stack_0000001c;
  int iVar6;
  undefined2 uVar7;
  
  uVar7 = SUB42(unaff_EBX,0);
  if (in_ZF) {
    FUN_0047c660(*(void **)((int)this + 0x24),0x2711,
                 *(undefined2 *)((int)*(void **)((int)this + 0x24) + 0x1c),uVar7);
    ExceptionList = in_stack_0000001c;
    return 1;
  }
  param_1 = operator_new(0x120);
  if (param_1 == unaff_EBX) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0044b780(param_1);
  }
  *(undefined4 **)((int)this + 0x38) = puVar1;
  puVar1 = FUN_004680b0(DAT_004e2b14,&param_1,"soure.mpg");
  lpString2 = (LPCSTR)FUN_00465e00(puVar1);
  lstrcpyA((LPSTR)(*(int *)((int)this + 0x38) + 0xc),lpString2);
  FUN_00465e40(&param_1);
  iVar2 = (**(code **)**(undefined4 **)((int)this + 0x38))();
  piVar5 = *(int **)((int)this + 0x38);
  if (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)((int)DAT_004e2b14 + 0x5c) + 0x830);
    iVar6 = *(int *)(iVar2 + 4);
    iVar4 = *piVar5;
    uVar3 = (**(code **)(*(int *)this + 0x4c))(iVar6,*(undefined4 *)(iVar2 + 0xc));
    iVar2 = (**(code **)(iVar4 + 4))(uVar3);
    if (iVar2 < 0) {
      (**(code **)(**(int **)((int)this + 0x38) + 8))();
      piVar5 = *(int **)((int)this + 0x38);
      if (piVar5 == unaff_EBX) {
        FUN_0047c660(*(void **)((int)this + 0x24),0x2711,
                     *(undefined2 *)((int)*(void **)((int)this + 0x24) + 0x1c),uVar7);
        ExceptionList = in_stack_0000001c;
        return 1;
      }
      FUN_0044b7c0(piVar5);
                    /* WARNING: Subroutine does not return */
      _free(piVar5);
    }
    iVar2 = *(int *)((int)this + 0x3c);
    (**(code **)(**(int **)((int)this + 0x38) + 0x18))();
    iVar4 = FUN_0044b120(*(void **)((int)this + 0x38));
    if (iVar4 != 0) {
      (**(code **)(**(int **)((int)this + 0x38) + 0xc))
                (&stack0xfffffff8,&stack0xfffffffc,&param_1,&stack0x00000000);
      yTop = (uint)(*(int *)((int)DAT_004e2b14 + 0x20) - iVar6) >> 1;
      xLeft = (uint)(*(int *)((int)DAT_004e2b14 + 0x1c) - iVar2) >> 1;
      SetRect((LPRECT)((int)this + 0x28),xLeft,yTop,iVar2 + xLeft,iVar6 + yTop);
      FUN_0044b1a0(*(void **)((int)this + 0x38),(undefined4 *)&stack0xfffffff8);
      (**(code **)(**(int **)((int)DAT_004e2b14 + 0x5c) + 0x4c))();
      DAT_004dd968 = unaff_EBX;
      ExceptionList = in_stack_0000001c;
      return 1;
    }
    (**(code **)(**(int **)((int)this + 0x38) + 0x18))();
    (**(code **)(**(int **)((int)this + 0x38) + 8))();
    piVar5 = *(int **)((int)this + 0x38);
  }
  if (piVar5 == unaff_EBX) {
    FUN_0047c660(*(void **)((int)this + 0x24),0x2711,
                 *(undefined2 *)((int)*(void **)((int)this + 0x24) + 0x1c),uVar7);
    ExceptionList = in_stack_0000001c;
    return 1;
  }
  FUN_0044b7c0(piVar5);
                    /* WARNING: Subroutine does not return */
  _free(piVar5);
}

