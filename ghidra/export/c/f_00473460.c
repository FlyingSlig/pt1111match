// FUNCTION: PORT1111 0x00473460
// name: FUN_00473460
// sig: undefined FUN_00473460(void * this, int param_1, int param_2, int param_3, int param_4)


void __thiscall FUN_00473460(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  HGDIOBJ pvVar2;
  int iVar3;
  int iVar4;
  int unaff_retaddr;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  local_4 = param_4;
  CRect::NormalizeRect((CRect *)&local_10);
  *(int *)((int)this + 0xc) = local_8;
  *(int *)((int)this + 0x10) = local_4;
  *(int *)((int)this + 4) = local_10;
  *(int *)((int)this + 8) = local_c;
  if (*(void **)((int)this + 0x40) != (void *)0x0) {
    FUN_004786d0(*(void **)((int)this + 0x40),local_10,local_c);
  }
  if (*(int *)((int)this + 0x40) != 0) {
    (**(code **)(*(int *)this + 0x30))(&param_1);
    iVar3 = *(int *)((int)this + 0xa0);
    if (iVar3 != 0) {
      *(short *)(*(int *)(iVar3 + 0xc) + 8) = (short)param_2 - (short)unaff_retaddr;
      *(short *)(*(int *)(iVar3 + 0xc) + 10) = (short)param_3 - (short)param_1;
    }
    if ((*(int *)((int)this + 0x44) != 0) &&
       ((iVar4 = param_2 - unaff_retaddr, iVar3 = FUN_0047e810(*(int *)((int)this + 0x44)),
        iVar3 != iVar4 ||
        (iVar4 = param_3 - param_1, iVar3 = FUN_0047e870(*(int *)((int)this + 0x44)), iVar3 != iVar4
        )))) {
      FUN_0047e990(*(void **)((int)this + 0x44),(char)DAT_004dd964,param_2 - unaff_retaddr,
                   param_3 - param_1);
      FUN_00478740(*(void **)((int)this + 0x40));
      FUN_0046c280(*(void **)(*(int *)((int)this + 0x44) + 4),0xc800,(int *)0x0);
      (**(code **)(**(int **)(*(int *)((int)this + 0x44) + 4) + 0x3c))(0xc800);
      piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
      pvVar2 = (HGDIOBJ)piVar1[8];
      if (pvVar2 != (HGDIOBJ)0x0) {
        FUN_004728e0(this,pvVar2);
        return;
      }
      iVar3 = (**(code **)(*piVar1 + 0x84))();
      if (iVar3 != 0) {
        FUN_004705f0(this);
        (**(code **)(**(int **)(*(int *)((int)this + 0x44) + 4) + 0x88))(iVar3);
      }
    }
  }
  return;
}

