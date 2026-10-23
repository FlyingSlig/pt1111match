// FUNCTION: PORT1111 0x00471200
// name: FUN_00471200
// sig: int * FUN_00471200(undefined4 param_1)


int * __fastcall FUN_00471200(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  void *unaff_ESI;
  int *piVar3;
  void *unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9f4b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0xd4);
  piVar3 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar3 = FUN_00470f80(piVar1);
  }
  local_4 = 0xffffffff;
  iVar2 = (**(code **)(*piVar3 + 8))(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_0047e100(unaff_retaddr,piVar3,1);
    if (iVar2 != 0) {
      ExceptionList = piVar1;
      return piVar3;
    }
  }
  (**(code **)(*piVar3 + 0x54))();
  (**(code **)*piVar3)(1);
  ExceptionList = unaff_ESI;
  return (int *)0x0;
}

