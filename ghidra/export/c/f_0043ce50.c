// FUNCTION: PORT1111 0x0043ce50
// name: FUN_0043ce50
// sig: undefined FUN_0043ce50(void * this, int param_1)


void __thiscall FUN_0043ce50(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7e0b;
  local_c = ExceptionList;
  piVar2 = (int *)**(int **)((int)this + 0x20);
  if (piVar2 != *(int **)((int)this + 0x20)) {
    do {
      if (param_1 == piVar2[2]) {
        if (piVar2 != *(int **)((int)this + 0x20)) {
          ExceptionList = &local_c;
          *(int *)piVar2[1] = *piVar2;
          *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
          _free(piVar2);
        }
        break;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x20));
  }
  if (*(int *)((int)this + 0x24) == 0) {
    ExceptionList = &local_c;
    *(undefined4 *)((int)this + 0x10) = 1;
    puVar1 = operator_new(0x34);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_004305e0(puVar1);
    }
    piVar2[1] = *(int *)((int)this + 0x18);
    local_4 = 0xffffffff;
    FUN_00412e90(piVar2);
  }
  ExceptionList = local_c;
  return;
}

