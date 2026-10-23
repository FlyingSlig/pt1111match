// FUNCTION: PORT1111 0x0045a670
// name: FUN_0045a670
// sig: undefined FUN_0045a670(void * this, uint param_1, undefined4 param_2, int param_3)


void __thiscall FUN_0045a670(void *this,uint param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9336;
  pvStack_c = ExceptionList;
  if (param_3 == -1) {
    ExceptionList = &pvStack_c;
    puVar1 = operator_new(0x10);
    pvVar4 = (void *)0x0;
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      pvVar4 = (void *)FUN_00459560(puVar1);
    }
    local_4 = 0xffffffff;
    puVar1 = operator_new(0xc);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_004598b0(pvVar4,0);
    }
    else {
      puVar1[2] = *(undefined4 *)(*(int *)((int)this + 0xd0) + 0x14);
      *puVar1 = &PTR_FUN_004c46f4;
      puVar1[1] = 1000;
      FUN_004598b0(pvVar4,puVar1);
    }
  }
  else {
    ExceptionList = &pvStack_c;
    iVar5 = param_3;
    iVar2 = FUN_00457ca0(*(void **)(*(int *)((int)this + 0xd0) + 0x10),param_1);
    pvVar4 = (void *)FUN_00484bd0(iVar2);
    pvVar4 = (void *)FUN_004576e0(pvVar4,iVar5);
  }
  this_00 = operator_new(0x894);
  local_4 = 1;
  if (this_00 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00459bd0(this_00,*(int *)((int)this + 0x24),param_1,param_3,pvVar4,param_2);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0xb8))();
  ExceptionList = pvStack_c;
  return;
}

