// FUNCTION: PORT1111 0x00409ad0
// name: FUN_00409ad0
// sig: undefined4 FUN_00409ad0(int * param_1)


undefined4 __fastcall FUN_00409ad0(int *param_1)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b5b8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00407d20(param_1);
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if (param_1[0x4c] != 0) {
    iVar1 = FUN_00414c30(DAT_004e240c);
    iVar1 = *(int *)(iVar1 + 0x124);
    if ((iVar1 != 0) && (piVar4 = *(int **)param_1[0x4b], piVar4 != (int *)param_1[0x4b])) {
      do {
        this = (void *)FUN_00414c30(DAT_004e240c);
        iVar3 = 2;
        if (*(int *)((int)this + 0x124) == 2) {
          FUN_00405d00(this,0);
          iVar3 = (*(int *)((int)this + 0x128) != 0) + 3;
        }
        FUN_0045f050(*(void **)(*(int *)((int)this + 0x60) + 0x18),iVar3);
        FUN_0045f100(*(void **)(*(int *)((int)this + 0x60) + 0x18),iVar3);
        (**(code **)(**(int **)((int)this + 0x60) + 0x40))(0,0);
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)param_1[0x4b]);
    }
    if (iVar1 != 2) {
      puVar2 = operator_new(0x34);
      uStack_4 = 0;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_00430e10(puVar2);
      }
      puVar2[1] = param_1[4];
      uStack_4 = 0xffffffff;
      FUN_00412ec0(puVar2,15000);
    }
  }
  ExceptionList = local_c;
  return 1;
}

