// FUNCTION: PORT1111 0x00409710
// name: FUN_00409710
// sig: undefined4 FUN_00409710(int param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00409710(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *_Memory;
  int iVar9;
  uint uVar10;
  uint uVar11;
  void *local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [4];
  int *local_38;
  int local_34;
  char local_30 [28];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b5b70;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_4c = param_1;
  FUN_00409530(param_1);
  if ((*(int *)(param_1 + 0x120) < 1) || (0x14 < *(int *)(param_1 + 0x120))) {
    ExceptionList = local_14;
    return 0;
  }
  iVar9 = *(int *)(param_1 + 0x50);
  iVar1 = *(int *)(iVar9 + 0x34);
  iVar2 = *(int *)(iVar9 + 0x3c);
  iVar3 = *(int *)(iVar9 + 0x40);
  iVar9 = *(int *)(iVar9 + 0x38);
  local_48 = iVar2;
  FUN_0042f6a0((undefined4 *)local_30);
  local_c = 0;
  FUN_0042f550(local_30,&DAT_004e249c,2,0x400);
  FUN_0042f670(local_30);
  FUN_0042f670(local_30);
  FUN_0042f5a0(local_30,(char *)0x1);
  do {
    iVar7 = iVar1;
    if (iVar3 <= iVar9) {
      FUN_0042f670(local_30);
      FUN_0042f5a0(local_30,(char *)0x1);
      _DAT_004e24a8 = 1;
      local_c = 0xffffffff;
      FUN_0042f6c0((undefined4 *)local_30);
      ExceptionList = local_14;
      return 1;
    }
    for (; iVar7 < iVar2; iVar7 = iVar7 + 1) {
      local_44 = iVar7;
      local_40 = iVar9;
      iVar8 = FUN_004267d0(*(void **)(param_1 + 0x40),&local_44);
      if (iVar8 == 0) {
        local_c = 0xffffffff;
        FUN_0042f6c0((undefined4 *)local_30);
        ExceptionList = local_14;
        return 0;
      }
      puVar4 = *(uint **)(iVar8 + 0x14);
      if (puVar4 != (uint *)0x0) {
        uVar11 = *puVar4;
        uVar5 = puVar4[2];
        local_50 = uVar11;
        _Memory = (int *)FUN_0043d220();
        uVar10 = 0;
        local_34 = 0;
        local_c._0_1_ = 1;
        local_38 = _Memory;
        if (uVar11 != 0) {
          do {
            iVar9 = *(int *)(uVar5 + uVar10 * 4);
            if (((*(byte *)(iVar9 + 0x3c) & 4) != 0) && (iVar9 = FUN_004056a0(iVar9), iVar9 == 0)) {
              local_54 = *(void **)(uVar5 + uVar10 * 4);
              FUN_004129f0(local_54,local_30);
              FUN_0042f5a0(local_30,(char *)0x1);
              iVar9 = FUN_00413870(_Memory,_Memory[1],&local_54);
              FUN_00409670(local_3c,1);
              _Memory[1] = iVar9;
              **(int **)(iVar9 + 4) = iVar9;
              _Memory = local_38;
              uVar11 = local_50;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
          while (local_34 != 0) {
            FUN_00415230(DAT_004e240c,*(int *)(*(int *)(_Memory[1] + 8) + 0x10));
            piVar6 = (int *)_Memory[1];
            if (piVar6 != _Memory) {
              *(int *)piVar6[1] = *piVar6;
              *(int *)(*piVar6 + 4) = piVar6[1];
                    /* WARNING: Subroutine does not return */
              _free(piVar6);
            }
          }
        }
        piVar6 = (int *)*_Memory;
        *_Memory = (int)_Memory;
        local_c = (uint)local_c._1_3_ << 8;
        _Memory[1] = (int)_Memory;
        local_34 = 0;
        if (piVar6 != _Memory) {
                    /* WARNING: Subroutine does not return */
          _free(piVar6);
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
    iVar9 = iVar9 + 1;
  } while( true );
}

