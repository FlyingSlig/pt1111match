// FUNCTION: PORT1111 0x004303b0
// name: FUN_004303b0
// sig: undefined4 FUN_004303b0(int param_1)


undefined4 __fastcall FUN_004303b0(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b744b;
  local_c = ExceptionList;
  local_10 = *(undefined4 *)(param_1 + 0x14);
  local_14 = *(uint *)(param_1 + 4);
  ExceptionList = &local_c;
  iVar1 = FUN_00429b00(DAT_004e2404,&local_14);
  if (iVar1 != 0) {
    iVar2 = FUN_00426ec0(iVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_00426ec0(iVar1);
      if ((*(uint *)(iVar2 + 0x3c) & 0x4000) != 0) {
        iVar1 = FUN_00426ec0(iVar1);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x7c) == 0)) {
          iVar2 = iVar1;
          (**(code **)(**(int **)(*(int *)(iVar1 + 0x60) + 0x1c) + 0x10))(iVar1,1);
          this = operator_new(0x18);
          local_c = (void *)0x0;
          if (this == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_0045c3e0(this,10,0,0);
          }
          local_c = (void *)0xffffffff;
          (**(code **)(**(int **)(*(int *)(iVar1 + 0x60) + 0x1c) + 0xc))(uVar3,iVar2,this);
        }
      }
    }
  }
  ExceptionList = local_c;
  return 1;
}

