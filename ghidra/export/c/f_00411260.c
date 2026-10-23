// FUNCTION: PORT1111 0x00411260
// name: FUN_00411260
// sig: undefined4 FUN_00411260(void * this, undefined4 param_1, undefined4 param_2)


undefined4 __thiscall FUN_00411260(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this_00;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b60d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x30);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00477720(puVar1);
  }
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00477a40(puVar1,"");
    FUN_00476a10(*(void **)(DAT_004e2b14 + 0xf8),(int)puVar1,-1);
    puVar1[8] = &LAB_00411e10;
    puVar1[9] = &LAB_00411e60;
    puVar1[10] = &LAB_00411e40;
    puVar1[0xb] = &LAB_00411e80;
    puVar1[7] = this;
    puVar2 = operator_new(100);
    local_4 = 1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0040d150(puVar2);
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)this + 0x18) = puVar2;
    iVar3 = FUN_00478070((int)puVar2);
    if (iVar3 == 0) {
      if (*(undefined4 **)((int)this + 0x18) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)this + 0x18))(1);
      }
      ExceptionList = local_c;
      return 0;
    }
    iVar3 = FUN_00477ae0(puVar1,*(void **)((int)this + 0x18),1);
    *(int *)((int)this + 0x1c) = iVar3;
    this_00 = operator_new(0x2c);
    local_4 = 2;
    if (this_00 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00410b50(this_00,this);
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)this + 0x40) = puVar2;
    iVar3 = FUN_0047aa60(*(void **)((int)this + 0x18),(int)puVar2);
    if (iVar3 != 0) {
      FUN_00478250(*(void **)((int)this + 0x18),300);
      FUN_00411d00(this,*(int *)((int)this + 0x18),1,1,0,0);
      uVar4 = FUN_00411b80(this,(int)puVar1,param_2,0);
      ExceptionList = local_c;
      return uVar4;
    }
    puVar1 = *(undefined4 **)((int)this + 0x40);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0047bab0(puVar1);
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
  }
  ExceptionList = local_c;
  return 0;
}

