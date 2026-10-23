// FUNCTION: PORT1111 0x00409d00
// name: FUN_00409d00
// sig: undefined FUN_00409d00(int param_1)


void __fastcall FUN_00409d00(int param_1)

{
  bool bVar1;
  void *this;
  void *this_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *_Memory;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b5bb6;
  local_c = ExceptionList;
  _Memory = (int *)**(int **)(param_1 + 300);
  bVar1 = false;
  ExceptionList = &local_c;
  if (_Memory != *(int **)(param_1 + 300)) {
    do {
      this = (void *)FUN_00414c30(DAT_004e240c);
      if (this == (void *)0x0) {
        piVar5 = (int *)*_Memory;
        if (_Memory != *(int **)(param_1 + 300)) {
          *(int **)_Memory[1] = piVar5;
          *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
      else {
        this_00 = operator_new(0x18);
        local_4 = 0;
        if (this_00 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0045c3e0(this_00,0xc,0,0);
        }
        local_4 = 0xffffffff;
        (**(code **)(**(int **)(*(int *)((int)this + 0x60) + 0x1c) + 0xc))(uVar2);
        iVar4 = *(int *)((int)this + 0x124) + 1;
        *(int *)((int)this + 0x124) = iVar4;
        if (iVar4 == 2) {
          FUN_00405d00(this,0);
        }
        else {
          bVar1 = true;
        }
        piVar5 = (int *)*_Memory;
      }
      _Memory = piVar5;
    } while (piVar5 != *(int **)(param_1 + 300));
    if (bVar1) {
      puVar3 = operator_new(0x34);
      local_4 = 1;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_00430e10(puVar3);
      }
      puVar3[1] = *(undefined4 *)(param_1 + 0x10);
      local_4 = 0xffffffff;
      FUN_00412ec0(puVar3,15000);
      ExceptionList = local_c;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  ExceptionList = local_c;
  return;
}

