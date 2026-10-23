// FUNCTION: PORT1111 0x00404ee0
// name: FUN_00404ee0
// sig: undefined FUN_00404ee0(int * param_1)


void __fastcall FUN_00404ee0(int *param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b594b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x40);
  puVar4 = (undefined4 *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar4 = FUN_0045c7f0(this,param_1[4]);
  }
  iVar1 = param_1[0x14];
  iVar2 = *(int *)param_1[0x18];
  local_4 = 0xffffffff;
  uVar3 = (**(code **)(*param_1 + 0xb4))();
  (**(code **)(iVar2 + 0x14))
            (param_1,puVar4,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x180),uVar3);
  ExceptionList = unaff_EDI;
  return;
}

