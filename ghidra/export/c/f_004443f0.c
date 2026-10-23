// FUNCTION: PORT1111 0x004443f0
// name: FUN_004443f0
// sig: int FUN_004443f0(void * this, void * param_1)


int __thiscall FUN_004443f0(void *this,void *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *local_3c;
  undefined4 local_38;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [7];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  this_00 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b81c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_34 = this;
  FUN_0043e7a0(local_28);
  local_4 = 0;
  FUN_00465cf0(&local_38);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00466a40(param_1,"SE ");
  puVar2 = (undefined4 *)**(undefined4 **)((int)this + 0x18);
  local_3c = (undefined4 *)**(undefined4 **)((int)this + 0x24);
  param_1 = (void *)0x0;
  piVar3 = (int *)**(int **)((int)this + 0xc);
  if (piVar3 != *(int **)((int)this + 0xc)) {
    do {
      if (param_1 != (void *)0x0) {
        puVar1 = FUN_00466fb0(this_00,&local_30,"E ");
        local_4._0_1_ = 2;
        FUN_00466a50(this_00,puVar1);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00465e40(&local_30);
      }
      param_1 = (void *)((int)param_1 + 1);
      switch(*(undefined1 *)(local_3c + 2)) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
      }
      FUN_0043d6f0(puVar2[2],0);
      FUN_0043dc00(piVar3[2],0);
      puVar1 = FUN_00466970(&local_38,(byte *)"%s %s %s\n");
      puVar1 = FUN_00466fd0(this_00,&local_2c,puVar1);
      local_4._0_1_ = 3;
      FUN_00466a50(this_00,puVar1);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00465e40(&local_2c);
      local_3c = (undefined4 *)*local_3c;
      piVar3 = (int *)*piVar3;
      puVar2 = (undefined4 *)*puVar2;
      this = local_34;
    } while (piVar3 != (int *)*(int *)((int)local_34 + 0xc));
  }
  FUN_0043dc00(*(int *)((int)this + 4),0);
  puVar2 = FUN_00466970(&local_38,&DAT_004c3744);
  puVar2 = FUN_00466fd0(this_00,&local_2c,puVar2);
  local_4._0_1_ = 4;
  FUN_00466a50(this_00,puVar2);
  local_4._0_1_ = 1;
  FUN_00465e40(&local_2c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00465e40(&local_38);
  local_4 = 0xffffffff;
  FUN_0043e6c0(local_28);
  ExceptionList = pvStack_c;
  return (int)param_1;
}

