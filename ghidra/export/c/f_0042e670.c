// FUNCTION: PORT1111 0x0042e670
// name: FUN_0042e670
// sig: undefined FUN_0042e670(void * param_1)


void __fastcall FUN_0042e670(void *param_1)

{
  int *piVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *_Memory;
  undefined4 *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b7356;
  local_14 = ExceptionList;
  if (*(int *)((int)param_1 + 0x28) == -1) {
    if (*(int *)((int)param_1 + 0x1c) == 0) {
      ExceptionList = &local_14;
      puVar3 = operator_new(0x1c);
      local_c = 0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        local_2c = puVar3;
        puVar4 = operator_new(8);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = *(undefined4 *)((int)param_1 + 0x20);
          puVar4[1] = *(undefined4 *)((int)param_1 + 0x24);
        }
        *puVar3 = &PTR_FUN_004bf9e4;
        puVar3[1] = 0;
        puVar3[2] = puVar4;
        puVar3[5] = 0xffffffff;
        puVar3[6] = 0;
      }
      local_c = 0xffffffff;
      iVar6 = *(int *)((int)param_1 + 0x18);
      local_2c = puVar3;
      iVar5 = FUN_00413870(iVar6,*(undefined4 *)(iVar6 + 4),&local_2c);
      FUN_0042e5b0((void *)((int)param_1 + 0x14),1);
      *(int *)(iVar6 + 4) = iVar5;
      **(int **)(iVar5 + 4) = iVar5;
      puVar3 = local_2c;
    }
    else {
      puVar3 = *(undefined4 **)(**(int **)((int)param_1 + 0x18) + 8);
      ExceptionList = &local_14;
    }
    iVar6 = FUN_00429b00(DAT_004e2404,(uint *)((int)param_1 + 0x20));
    if (iVar6 == 0) {
      ExceptionList = local_14;
      return;
    }
    puVar3[3] = (int)*(short *)(iVar6 + 4);
    puVar3[4] = (int)*(short *)(iVar6 + 6);
    *(uint *)puVar3[2] = *(uint *)((int)param_1 + 0x20);
    *(undefined4 *)(puVar3[2] + 4) = *(undefined4 *)((int)param_1 + 0x24);
  }
  else {
    local_28 = *(uint *)((int)param_1 + 0x28);
    local_1c = *(int *)((int)param_1 + 0x24) - *(int *)((int)param_1 + 0x2c);
    local_20 = *(int *)((int)param_1 + 0x20) - local_28;
    local_24 = *(uint *)((int)param_1 + 0x2c);
    if (local_20 < 1) {
      if (local_20 < 0) {
        local_20 = -1;
      }
    }
    else {
      local_20 = 1;
    }
    if (local_1c < 1) {
      if (local_1c < 0) {
        local_1c = -1;
      }
    }
    else {
      local_1c = 1;
    }
    _Memory = (int *)**(int **)((int)param_1 + 0x18);
    ExceptionList = &local_14;
    ppvVar2 = &local_14;
    if (_Memory != *(int **)((int)param_1 + 0x18)) {
      do {
        ExceptionList = ppvVar2;
        iVar6 = _Memory[2];
        iVar5 = FUN_00429b00(DAT_004e2404,&local_28);
        iVar7 = FUN_00428400(iVar5);
        if ((iVar7 == 0) &&
           ((DAT_004e2681 == '\0' ||
            ((char)((int)(*(ushort *)(iVar5 + 0x3c) & DAT_004e2050) >> ((byte)DAT_004e204c & 0x1f))
             == '\x01')))) {
          *(int *)(iVar6 + 0xc) = (int)*(short *)(iVar5 + 4);
          *(int *)(iVar6 + 0x10) = (int)*(short *)(iVar5 + 6);
          **(uint **)(iVar6 + 8) = local_28;
          *(uint *)(*(int *)(iVar6 + 8) + 4) = local_24;
          _Memory = (int *)*_Memory;
        }
        if ((local_28 == *(uint *)((int)param_1 + 0x20)) &&
           (local_24 == *(uint *)((int)param_1 + 0x24))) {
          if (_Memory != *(int **)((int)param_1 + 0x18)) {
            do {
              puVar3 = (undefined4 *)_Memory[2];
              if (puVar3[1] != 0) {
                FUN_0042dff0((int)puVar3);
              }
              (**(code **)*puVar3)(1);
              piVar1 = (int *)*_Memory;
              if (_Memory != *(int **)((int)param_1 + 0x18)) {
                *(int **)_Memory[1] = piVar1;
                *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
                _free(_Memory);
              }
              _Memory = piVar1;
            } while (piVar1 != *(int **)((int)param_1 + 0x18));
          }
          goto LAB_0042ea05;
        }
        if (local_28 == *(uint *)((int)param_1 + 0x20)) {
          local_20 = 0;
        }
        if (local_24 == *(uint *)((int)param_1 + 0x24)) {
          local_1c = 0;
        }
        local_28 = local_28 + local_20;
        local_24 = local_24 + local_1c;
        ppvVar2 = ExceptionList;
      } while (_Memory != *(int **)((int)param_1 + 0x18));
    }
    while( true ) {
      iVar6 = FUN_00429b00(DAT_004e2404,&local_28);
      if (((iVar6 != 0) && (iVar5 = FUN_00428400(iVar6), iVar5 == 0)) &&
         ((DAT_004e2681 == '\0' ||
          ((char)((int)(*(ushort *)(iVar6 + 0x3c) & DAT_004e2050) >> ((byte)DAT_004e204c & 0x1f)) ==
           '\x01')))) {
        puVar3 = operator_new(0x1c);
        local_c = 1;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          local_2c = puVar3;
          puVar8 = operator_new(8);
          if (puVar8 == (uint *)0x0) {
            puVar8 = (uint *)0x0;
          }
          else {
            *puVar8 = local_28;
            puVar8[1] = local_24;
          }
          *puVar3 = &PTR_FUN_004bf9e4;
          puVar3[1] = 0;
          puVar3[2] = puVar8;
          puVar3[5] = 0xffffffff;
          puVar3[6] = 0;
        }
        puVar3[3] = (int)*(short *)(iVar6 + 4);
        puVar3[4] = (int)*(short *)(iVar6 + 6);
        iVar6 = *(int *)((int)param_1 + 0x18);
        local_c = 0xffffffff;
        local_2c = puVar3;
        iVar5 = FUN_00413870(iVar6,*(undefined4 *)(iVar6 + 4),&local_2c);
        FUN_0042e5b0((void *)((int)param_1 + 0x14),1);
        *(int *)(iVar6 + 4) = iVar5;
        **(int **)(iVar5 + 4) = iVar5;
      }
      if ((local_28 == *(uint *)((int)param_1 + 0x20)) &&
         (local_24 == *(uint *)((int)param_1 + 0x24))) break;
      if (local_28 == *(uint *)((int)param_1 + 0x20)) {
        local_20 = 0;
      }
      if (local_24 == *(uint *)((int)param_1 + 0x24)) {
        local_1c = 0;
      }
      local_28 = local_28 + local_20;
      local_24 = local_24 + local_1c;
    }
  }
LAB_0042ea05:
  FUN_0042e2d0(param_1);
  FUN_0042e220(param_1);
  ExceptionList = local_14;
  return;
}

