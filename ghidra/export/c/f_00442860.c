// FUNCTION: PORT1111 0x00442860
// name: FUN_00442860
// sig: undefined FUN_00442860(void * param_1)


void __fastcall FUN_00442860(void *param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8156;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  local_10 = operator_new(0x18);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00443cb0(local_10,*(undefined4 *)(DAT_004e2404 + 0x10c),
                         *(undefined4 *)(DAT_004e2404 + 0x110));
  }
  local_4 = 0xffffffff;
  *(int *)((int)param_1 + 8) = iVar2;
  FUN_00443cd0(iVar2);
  local_10 = operator_new(0x18);
  local_4 = 1;
  if (local_10 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00443cb0(local_10,*(undefined4 *)(DAT_004e2404 + 0x10c),
                         *(undefined4 *)(DAT_004e2404 + 0x110));
  }
  local_4 = 0xffffffff;
  *(int *)((int)param_1 + 4) = iVar2;
  FUN_00443cd0(iVar2);
  FUN_00441890((int)param_1);
  local_10 = (void *)**(int **)(DAT_004e240c + 8);
  if (local_10 != *(int **)(DAT_004e240c + 8)) {
    do {
      this = *(int **)((int)local_10 + 0x10);
      FUN_004454a0((void *)this[0x2c]);
      iVar2 = this[0x10];
      iVar1 = this[0x14];
      iVar4 = 0;
      iVar3 = (**(code **)(*this + 0x88))();
      FUN_004426d0(param_1,iVar1,iVar2,iVar3,iVar4);
      iVar2 = (**(code **)(*this + 0xac))();
      if (iVar2 == 0) {
        FUN_00405c90(this,0);
      }
      else {
        FUN_00405d00(this,0);
      }
      if (((*(byte *)(this + 0xf) & 8) != 0) && (iVar2 = (**(code **)(*this + 0xd0))(), iVar2 != 0))
      {
        FUN_004084e0(this,0);
      }
      FUN_00413730((int *)&local_10);
    } while (local_10 != *(void **)(DAT_004e240c + 8));
  }
  ExceptionList = local_c;
  return;
}

