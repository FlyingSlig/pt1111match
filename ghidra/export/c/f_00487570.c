// FUNCTION: PORT1111 0x00487570
// name: FUN_00487570
// sig: undefined4 * FUN_00487570(void * this, int param_1, undefined4 param_2, uint param_3, undefined4 param_4)


undefined4 * __thiscall
FUN_00487570(void *this,int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba8e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_004c6ba8;
  *(undefined ***)((int)this + 0x1c) = &PTR_FUN_004bfcdc;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  local_4 = 0;
  *(undefined ***)((int)this + 0x38) = &PTR_FUN_004bfcdc;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3c));
  *(undefined ***)((int)this + 0x58) = &PTR_FUN_004bfcdc;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x5c));
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  pvVar3 = operator_new(param_3 * 8);
  *(void **)((int)this + 0xc) = pvVar3;
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = *(int *)((int)this + 0xc);
      *(undefined4 *)(iVar1 + uVar4 * 8) = *(undefined4 *)(param_1 + uVar4 * 8);
      *(undefined4 *)(iVar1 + 4 + uVar4 * 8) = *(undefined4 *)(param_1 + 4 + uVar4 * 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(uint *)((int)this + 0x18) = param_3;
  FUN_00486e00(this,(int *)**(undefined4 **)((int)this + 0xc),0);
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      piVar2 = *(int **)(*(int *)((int)this + 0xc) + uVar4 * 8);
      (**(code **)(*piVar2 + 0x34))(piVar2,0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  ExceptionList = local_c;
  return this;
}

