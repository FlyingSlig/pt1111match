// FUNCTION: PORT1111 0x0046fff0
// name: FUN_0046fff0
// sig: undefined FUN_0046fff0(void * this, int param_1, int param_2, int param_3, int param_4)


void __thiscall FUN_0046fff0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  RECT *pRVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b9d78;
  local_c = ExceptionList;
  local_2c = param_1;
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  ExceptionList = &local_c;
  CRect::NormalizeRect((CRect *)&local_2c);
  *(int *)((int)this + 0xc) = local_24;
  *(int *)((int)this + 0x10) = local_20;
  *(int *)((int)this + 4) = local_2c;
  *(int *)((int)this + 8) = local_28;
  if (*(void **)((int)this + 0x40) != (void *)0x0) {
    FUN_004786d0(*(void **)((int)this + 0x40),local_2c,local_28);
  }
  if (*(int *)((int)this + 0x40) != 0) {
    (**(code **)(*(int *)this + 0x30))(&param_1);
    if ((*(int *)((int)this + 0x44) != 0) &&
       ((iVar5 = param_3 - param_1, iVar1 = FUN_0047e810(*(int *)((int)this + 0x44)), iVar1 != iVar5
        || (iVar5 = param_4 - param_2, iVar1 = FUN_0047e870(*(int *)((int)this + 0x44)),
           iVar1 != iVar5)))) {
      if (*(int *)((int)this + 0xac) == 1) {
        puVar2 = FUN_00466fd0((void *)((int)this + 0x94),&uStack_30,(undefined4 *)((int)this + 0xa4)
                             );
        uVar6 = *(undefined4 *)((int)this + 0xb4);
        uStack_4 = 0;
        puVar3 = (uchar *)FUN_00465e00(puVar2);
        FUN_0047e9b0(*(void **)((int)this + 0x44),puVar3,uVar6);
        uStack_4 = 0xffffffff;
        FUN_00465e40(&uStack_30);
        FUN_0047e8e0(*(void **)((int)this + 0x44),param_3 - param_1,param_4 - param_2);
      }
      else if (*(int *)((int)this + 0xac) == 2) {
        pRVar4 = (RECT *)FUN_0046f2b0(this);
        FUN_004783d0(*(void **)((int)this + 0x40),pRVar4);
      }
      FUN_00478740(*(void **)((int)this + 0x40));
    }
  }
  ExceptionList = local_c;
  return;
}

