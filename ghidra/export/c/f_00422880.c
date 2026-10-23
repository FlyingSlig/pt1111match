// FUNCTION: PORT1111 0x00422880
// name: FUN_00422880
// sig: undefined FUN_00422880(void * this, int param_1, int param_2, int param_3)


void __thiscall FUN_00422880(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x28))
              (*(undefined4 *)((int)this + 4),param_2 - *(int *)((int)this + 0x10),
               param_3 - *(int *)((int)this + 0x1c),0);
    FUN_0047e870(*(int *)((int)this + 4));
    FUN_0047e810(*(int *)((int)this + 4));
    iVar2 = *(int *)((int)this + 0x10);
    iVar1 = *(int *)((int)this + 0x1c);
  }
  else {
    if (param_1 == 1) {
      (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x28))
                (*(undefined4 *)((int)this + 8),param_2 - *(int *)((int)this + 0x14),
                 param_3 - *(int *)((int)this + 0x20),0);
      FUN_0047e870(*(int *)((int)this + 8));
      FUN_0047e810(*(int *)((int)this + 8));
      OffsetRect((LPRECT)&stack0xffffffe0,param_2 - *(int *)((int)this + 0x14),
                 param_3 - *(int *)((int)this + 0x20));
      FUN_0040ff50();
      return;
    }
    if (param_1 != 2) {
      return;
    }
    (**(code **)(**(int **)(DAT_004e2b14 + 0x5c) + 0x28))
              (*(undefined4 *)((int)this + 0xc),param_2 - *(int *)((int)this + 0x18),
               param_3 - *(int *)((int)this + 0x24),0);
    FUN_0047e870(*(int *)((int)this + 0xc));
    FUN_0047e810(*(int *)((int)this + 0xc));
    iVar2 = *(int *)((int)this + 0x18);
    iVar1 = *(int *)((int)this + 0x24);
  }
  OffsetRect((LPRECT)&stack0xffffffe0,param_2 - iVar2,param_3 - iVar1);
  FUN_0040ff50();
  return;
}

