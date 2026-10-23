// FUNCTION: PORT1111 0x004709c0
// name: FUN_004709c0
// sig: int * FUN_004709c0(int param_1)


int * __fastcall FUN_004709c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *unaff_ESI;
  int *piVar4;
  void *unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9f4b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb0);
  piVar4 = (int *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar4 = FUN_00470890(puVar1);
  }
  local_4 = 0xffffffff;
  iVar2 = (**(code **)(*piVar4 + 8))(param_1);
  if (iVar2 == 0) {
    (**(code **)*piVar4)(1);
  }
  puVar3 = FUN_00479800(*(int *)(param_1 + 0x40));
  piVar4[0x10] = (int)puVar3;
  FUN_00477ae0(*(void **)(param_1 + 0x3c),puVar3,1);
  piVar4[0x2b] = (int)*(short *)(piVar4[0x10] + 0x34);
  iVar2 = FUN_0047e100(unaff_retaddr,piVar4,1);
  if (iVar2 != 0) {
    ExceptionList = puVar1;
    return piVar4;
  }
  (**(code **)(*piVar4 + 0x54))();
  (**(code **)*piVar4)(1);
  ExceptionList = unaff_ESI;
  return (int *)0x0;
}

