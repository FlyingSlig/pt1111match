// FUNCTION: PORT1111 0x00487740
// name: FUN_00487740
// sig: undefined4 FUN_00487740(void * this, uint param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5, uint param_6, undefined4 param_7, undefined4 param_8, uint param_9)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FUN_00487740(void *this,uint param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            uint param_6,undefined4 param_7,undefined4 param_8,uint param_9)

{
  void *pvVar1;
  undefined4 *_Memory;
  int *piVar2;
  void *this_00;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  undefined4 local_40;
  undefined4 *local_3c;
  void *local_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_10;
  void *local_c;
  undefined4 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_004ba911;
  local_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  local_40 = 0;
  if (*(int *)this == 0) {
    return 0x800401f0;
  }
  if (((param_2 == 0) || (param_1 == 0)) || (param_9 == 0)) {
    return 0x80070057;
  }
  ExceptionList = &local_c;
  local_38 = this;
  _Memory = operator_new(param_9 * 8);
  puVar3 = _Memory;
  for (iVar4 = (param_9 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  if (_Memory == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return 0x8007000e;
  }
  if (param_3 == 1) {
    local_3c = operator_new(0xb0);
    local_4 = 0;
    if (local_3c == (undefined4 *)0x0) {
LAB_0048784d:
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00485840(local_3c);
    }
LAB_0048784f:
    local_4 = 0xffffffff;
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 3) goto LAB_00487887;
      local_3c = operator_new(0x48);
      local_4 = 1;
      if (local_3c == (undefined4 *)0x0) goto LAB_0048784d;
      piVar2 = FUN_00495eb0(local_3c);
      goto LAB_0048784f;
    }
    puVar3 = operator_new(0x30);
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_00486980(puVar3);
    }
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(param_2,0,1);
    pvVar1 = (void *)piVar2[3];
    if (pvVar1 != (void *)0x0) {
      uStack_34 = 0;
      local_3c = (undefined4 *)(param_1 | 0x8000);
      iStack_2c = param_2;
      uStack_24 = param_4;
      uStack_20 = param_5;
      local_40 = 0x24;
      iStack_28 = param_3;
      iStack_30 = piVar2[2];
      local_38 = pvVar1;
      iVar4 = (**(code **)(*(int *)*unaff_ESI + 0xc))((int *)*unaff_ESI,&local_40,_Memory,0);
      if ((iVar4 == 0x878000a) || (-1 < iVar4)) {
        local_4 = 1;
        puVar3 = _Memory;
        if (1 < param_6) {
          do {
            iVar4 = (**(code **)(*(int *)*unaff_ESI + 0x14))((int *)*unaff_ESI,*_Memory,puVar3 + 2);
            if (iVar4 < 0) goto LAB_0048787f;
            local_4 = local_4 + 1;
            puVar3 = puVar3 + 2;
          } while (local_4 < param_6);
        }
        this_00 = operator_new(0x74);
        local_10 = 2;
        if (this_00 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_00487570(this_00,(int)_Memory,pvVar1,param_6,piVar2);
        }
        *puStack_8 = puVar3;
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
LAB_0048787f:
    (**(code **)*piVar2)(1);
  }
LAB_00487887:
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

