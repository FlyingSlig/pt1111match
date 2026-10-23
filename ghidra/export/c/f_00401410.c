// FUNCTION: PORT1111 0x00401410
// name: FUN_00401410
// sig: undefined FUN_00401410(void * this, uint param_1)


void __thiscall FUN_00401410(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004b5750;
  pvStack_10 = ExceptionList;
  uVar4 = param_1 | 0xf;
  if (uVar4 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x18);
    uVar3 = uVar1 >> 1;
    param_1 = uVar4;
    if ((uVar4 / 3 < uVar3) && (uVar1 <= -uVar3 - 2)) {
      param_1 = uVar3 + uVar1;
    }
  }
  local_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = operator_new(param_1 + 1);
  FUN_004014ac(extraout_ECX,puVar2);
  return;
}

