// FUNCTION: PORT1111 0x00481c90
// name: FUN_00481c90
// sig: undefined4 FUN_00481c90(void * this, void * param_1, uint param_2)


undefined4 __thiscall FUN_00481c90(void *this,void *param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 unaff_ESI;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba65b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(void **)((int)this + 4) = param_1;
  piVar1 = (int *)FUN_0047cf90(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  puVar3 = &local_1c;
  (**(code **)(*piVar1 + 0x30))();
  puVar2 = operator_new(0x100);
  puStack_8 = (undefined1 *)0x0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_004701f0(puVar2);
  }
  *(int **)((int)this + 8) = piVar1;
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar1 + 4))(*(undefined4 *)((int)this + 4),unaff_ESI,local_1c,uStack_18,uStack_14);
  FUN_0047e100(*(void **)((int)this + 4),*(int **)((int)this + 8),1);
  *(undefined4 *)(*(int *)((int)this + 8) + 0xa8) = 0;
  *(undefined4 *)(*(int *)((int)this + 8) + 0x98) = 0x800;
  FUN_0048a340((undefined4 *)(*(int *)((int)this + 8) + 0xac),"Arial",10);
  *(undefined1 *)(*(int *)((int)this + 8) + 0xc6) = 3;
  ExceptionList = puVar3;
  return 1;
}

