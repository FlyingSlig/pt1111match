// FUNCTION: PORT1111 0x00405770
// name: FUN_00405770
// sig: undefined FUN_00405770(void * this, int param_1)


void __thiscall FUN_00405770(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b598b;
  local_c = ExceptionList;
  if ((*(int *)(*(int *)((int)this + 0x50) + 0x2a8) != 9) && (*(int *)((int)this + 0x7c) == 0)) {
    ExceptionList = &local_c;
    iVar1 = (**(code **)(*(int *)this + 0x88))();
    if (*(int *)(iVar1 + 0x34) == DAT_004e26fc) {
      FUN_004218a0((void *)(DAT_004e2404 + 0x94),*(int *)((int)this + 4),*(int *)((int)this + 8));
    }
    if (param_1 != 0) {
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + param_1;
      FUN_00445030(*(void **)((int)this + 0xb0),0x449);
      if (*(int *)((int)this + 0x54) < 1) {
        *(undefined4 *)((int)this + 0x54) = 0;
        (**(code **)(*(int *)this + 0xa0))(0);
        *(undefined4 *)((int)this + 0x7c) = 1;
        FUN_0043c180(DAT_004e2408,this,(int)*(short *)(*(int *)((int)this + 0x40) + 0x4e),
                     (int)*(short *)(*(int *)((int)this + 0x40) + 0x4c));
        iVar1 = (**(code **)(*(int *)this + 0x20))();
        if (iVar1 != 0) {
          (**(code **)(*(int *)this + 0x20))();
          this_00 = (void *)FUN_0040af10(DAT_004e2418);
          if (this_00 != (void *)0x0) {
            FUN_0040a970(this_00,*(int *)((int)this + 0x10));
          }
        }
        FUN_00453a00(*(void **)(DAT_004e240c + 0x21c),this);
        puVar2 = operator_new(0x34);
        uStack_4 = 0;
        if (puVar2 == (undefined4 *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = FUN_004317a0(puVar2);
        }
        piVar3[1] = *(int *)((int)this + 0x10);
        uStack_4 = 0xffffffff;
        FUN_00412e90(piVar3);
      }
      FUN_00453550(*(void **)(*(int *)((int)this + 0x60) + 0xc),*(int *)((int)this + 0x54));
      iVar1 = (**(code **)(*(int *)this + 0x9c))();
      if (iVar1 != 0) {
        FUN_00454e30(DAT_004e2410,0);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

