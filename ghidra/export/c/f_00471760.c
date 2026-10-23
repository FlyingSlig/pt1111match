// FUNCTION: PORT1111 0x00471760
// name: FUN_00471760
// sig: undefined FUN_00471760(void * this, int param_1, int param_2, int param_3)


void __thiscall FUN_00471760(void *this,int param_1,int param_2,int param_3)

{
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int unaff_retaddr;
  LONG LStack_30;
  LONG LStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  (**(code **)(*(int *)this + 0x30))(&local_20);
  iStack_c = param_2;
  iStack_10 = param_1;
  iStack_8 = param_3;
  iStack_14 = unaff_retaddr;
  CRect::NormalizeRect((CRect *)&iStack_14);
  *(int *)((int)this + 0xc) = iStack_c;
  *(int *)((int)this + 0x10) = iStack_8;
  *(int *)((int)this + 4) = iStack_14;
  *(int *)((int)this + 8) = iStack_10;
  if (*(void **)((int)this + 0x40) != (void *)0x0) {
    FUN_004786d0(*(void **)((int)this + 0x40),iStack_14,iStack_10);
  }
  SetRect((LPRECT)&stack0x00000000,*(int *)((int)this + 4),*(int *)((int)this + 8),
          *(int *)((int)this + 0xc),*(int *)((int)this + 0x10));
  if (*(int **)((int)this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xc4) + 0x30))(&stack0xffffffcc);
    FUN_004716a0(iStack_28,iStack_24,local_20,iStack_1c,iStack_4,unaff_retaddr,param_1,param_2,
                 (LPRECT)&stack0xffffffc8);
    (**(code **)(**(int **)((int)this + 0xc4) + 0x3c))(unaff_EDI,unaff_ESI,LStack_30,LStack_2c);
  }
  if (*(int **)((int)this + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb0) + 0x30))(&stack0xffffffcc);
    FUN_004716a0(iStack_28,iStack_24,local_20,iStack_1c,iStack_4,unaff_retaddr,param_1,param_2,
                 (LPRECT)&stack0xffffffc8);
    (**(code **)(**(int **)((int)this + 0xb0) + 0x3c))(unaff_EDI,unaff_ESI,LStack_30,LStack_2c);
  }
  if (*(int **)((int)this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb4) + 0x30))(&stack0xffffffcc);
    FUN_004716a0(iStack_28,iStack_24,local_20,iStack_1c,iStack_4,unaff_retaddr,param_1,param_2,
                 (LPRECT)&stack0xffffffc8);
    (**(code **)(**(int **)((int)this + 0xb4) + 0x3c))(unaff_EDI,unaff_ESI,LStack_30,LStack_2c);
  }
  if (*(int **)((int)this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xb8) + 0x30))(&stack0xffffffcc);
    FUN_004716a0(iStack_28,iStack_24,local_20,iStack_1c,iStack_4,unaff_retaddr,param_1,param_2,
                 (LPRECT)&stack0xffffffc8);
    (**(code **)(**(int **)((int)this + 0xb8) + 0x3c))(unaff_EDI,unaff_ESI,LStack_30,LStack_2c);
  }
  if (*(int **)((int)this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xbc) + 0x30))(&stack0xffffffcc);
    FUN_004716a0(iStack_28,iStack_24,local_20,iStack_1c,iStack_4,unaff_retaddr,param_1,param_2,
                 (LPRECT)&stack0xffffffc8);
    (**(code **)(**(int **)((int)this + 0xbc) + 0x3c))(unaff_EDI,unaff_ESI,LStack_30,LStack_2c);
  }
  if (*(int **)((int)this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xc0) + 0x30))(&stack0xffffffcc);
    FUN_004716a0(iStack_28,iStack_24,local_20,iStack_1c,iStack_4,unaff_retaddr,param_1,param_2,
                 (LPRECT)&stack0xffffffc8);
    (**(code **)(**(int **)((int)this + 0xc0) + 0x3c))(unaff_EDI,unaff_ESI,LStack_30,LStack_2c);
  }
  return;
}

