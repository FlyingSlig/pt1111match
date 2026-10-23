// FUNCTION: PORT1111 0x004879e0
// name: FUN_004879e0
// sig: undefined4 FUN_004879e0(void * this, uint param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, uint param_6, undefined4 param_7, uint param_8)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FUN_004879e0(void *this,uint param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7,uint param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *_Memory;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  void *this_00;
  int iVar6;
  uint uVar7;
  undefined4 local_3c;
  void *local_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_004ba936;
  local_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  local_3c = 0;
  if (*(int *)this == 0) {
    uVar2 = 0x800401f0;
  }
  else if (((param_2 == 0) || (param_1 == 0)) || (param_8 == 0)) {
    uVar2 = 0x80070057;
  }
  else {
    ExceptionList = &local_c;
    local_38 = this;
    _Memory = operator_new(param_8 * 8);
    puVar3 = _Memory;
    for (iVar6 = (param_8 & 0x1fffffff) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    if (_Memory != (undefined4 *)0x0) {
      puVar3 = operator_new(0xb0);
      local_4 = (undefined4 *)0x0;
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_00485840(puVar3);
      }
      local_4 = (undefined4 *)0xffffffff;
      (**(code **)(*piVar4 + 0xc))(param_2,1);
      iVar6 = piVar4[3];
      if (iVar6 != 0) {
        uStack_30 = 0;
        local_38 = (void *)(param_1 | 0x8000);
        iStack_28 = param_2;
        uStack_24 = param_3;
        uStack_20 = param_4;
        local_3c = 0x24;
        uStack_1c = param_5;
        iStack_2c = piVar4[2];
        iStack_34 = iVar6;
        iVar5 = (**(code **)(**(int **)this + 0xc))(*(int **)this,&local_3c,_Memory,0);
        if ((iVar5 == 0x878000a) || (-1 < iVar5)) {
          uVar7 = 1;
          puVar1 = _Memory;
          if (1 < param_6) {
            do {
              iVar5 = (**(code **)(*(int *)*puVar3 + 0x14))((int *)*puVar3,*_Memory,puVar1 + 2);
              if (iVar5 < 0) goto LAB_00487abf;
              uVar7 = uVar7 + 1;
              puVar1 = puVar1 + 2;
            } while (uVar7 < param_6);
          }
          this_00 = operator_new(0x74);
          local_c = (void *)0x1;
          if (this_00 == (void *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = FUN_00487570(this_00,(int)_Memory,iVar6,param_6,piVar4);
          }
          *local_4 = puVar3;
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
LAB_00487abf:
      (**(code **)*piVar4)(1);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    uVar2 = 0x8007000e;
  }
  ExceptionList = local_c;
  return uVar2;
}

