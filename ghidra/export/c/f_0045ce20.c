// FUNCTION: PORT1111 0x0045ce20
// name: FUN_0045ce20
// sig: undefined4 FUN_0045ce20(void * this, uint param_1, uint param_2, int param_3, int param_4)


undefined4 __thiscall FUN_0045ce20(void *this,uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  uVar6 = (int)(param_3 - param_1) >> 0x1f;
  iVar5 = (param_3 - param_1 ^ uVar6) - uVar6;
  uVar6 = (int)(param_4 - param_2) >> 0x1f;
  iVar7 = (param_4 - param_2 ^ uVar6) - uVar6;
  iVar1 = (uint)((int)param_1 <= param_3) * 2 + -1;
  iVar2 = (uint)((int)param_2 <= param_4) * 2 + -1;
  if (iVar5 < iVar7) {
    iVar5 = iVar5 * 2;
    iVar3 = iVar7 * -2;
    iVar8 = iVar5 - iVar7;
    if (-1 < iVar7) {
      do {
        if (*(uint *)((int)this + 0x40) == 0xffffffff) {
          iVar4 = 1;
        }
        else {
          iVar4 = FUN_00422410(*(void **)((int)this + 0x48),*(uint *)((int)this + 0x40),
                               *(uint *)((int)this + 0x44),param_1,param_2);
        }
        *(uint *)((int)this + 0x40) = param_1;
        *(uint *)((int)this + 0x44) = param_2;
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar5;
        if (0 < iVar8) {
          param_1 = param_1 + iVar1;
          iVar4 = iVar5 + iVar3;
        }
        param_2 = param_2 + iVar2;
        iVar8 = iVar8 + iVar4;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      return 1;
    }
  }
  else {
    iVar7 = iVar7 * 2;
    iVar3 = iVar5 * -2;
    iVar8 = iVar7 - iVar5;
    for (; -1 < iVar5; iVar5 = iVar5 + -1) {
      if (*(uint *)((int)this + 0x40) == 0xffffffff) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_00422410(*(void **)((int)this + 0x48),*(uint *)((int)this + 0x40),
                             *(uint *)((int)this + 0x44),param_1,param_2);
      }
      *(uint *)((int)this + 0x40) = param_1;
      *(uint *)((int)this + 0x44) = param_2;
      if (iVar4 == 0) {
        return 0;
      }
      param_1 = param_1 + iVar1;
      iVar4 = iVar7;
      if (0 < iVar8) {
        param_2 = param_2 + iVar2;
        iVar4 = iVar7 + iVar3;
      }
      iVar8 = iVar8 + iVar4;
    }
  }
  return 1;
}

