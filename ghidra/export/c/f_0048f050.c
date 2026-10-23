// FUNCTION: PORT1111 0x0048f050
// name: FUN_0048f050
// sig: undefined FUN_0048f050(void * param_1)


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0048f050(void *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  int *local_2014;
  int local_2010;
  int *local_200c;
  float local_2000 [256];
  int local_1c00 [13];
  int local_1bcc [1778];
  undefined4 uStack_4;
  
  uStack_4 = 0x48f05a;
  FUN_0048e020(param_1,*(int *)((int)param_1 + 8),*(int *)((int)param_1 + 0xc),
               *(int *)((int)param_1 + 0x10),*(int *)((int)param_1 + 0x14),
               *(int *)((int)param_1 + 4));
  FUN_0048e170(*(int *)((int)param_1 + 8),*(int *)((int)param_1 + 0xc),*(int *)((int)param_1 + 0x10)
               ,*(int *)((int)param_1 + 0x14),*(int *)((int)param_1 + 4));
  iVar4 = 0;
  local_200c = local_1c00;
  local_2014 = local_1bcc;
  local_1c00[4] = 0;
  local_1c00[2] = 0;
  local_1c00[0] = 0;
  local_1c00[5] = 0x20;
  local_1c00[3] = 0x20;
  local_1c00[1] = 0x20;
  local_2010 = 1;
  do {
    local_200c = local_200c + 7;
    uVar2 = FUN_0048ee10(param_1,local_1c00 + iVar4 * 7,local_200c);
    if ((char)uVar2 == '\0') {
      local_2010 = local_2010 + -1;
      local_2014 = local_2014 + -7;
      local_200c = local_200c + -7;
      local_2000[iVar4] = 0.0;
    }
    else {
      if (local_1c00[iVar4 * 7 + 6] < 2) {
        fVar5 = (float10)_DAT_004c44d0;
      }
      else {
        fVar5 = (float10)FUN_0048eb40(param_1,local_1c00 + iVar4 * 7);
      }
      local_2000[iVar4] = (float)fVar5;
      if (*local_2014 < 2) {
        local_2000[local_2010] = _DAT_004c44d0;
      }
      else {
        fVar5 = (float10)FUN_0048eb40(param_1,local_200c);
        local_2000[local_2010] = (float)fVar5;
      }
    }
    iVar4 = 0;
    iVar3 = 1;
    fVar1 = local_2000[0];
    if (3 < local_2010) {
      do {
        if (fVar1 < local_2000[iVar3]) {
          fVar1 = local_2000[iVar3];
          iVar4 = iVar3;
        }
        if (fVar1 < local_2000[iVar3 + 1]) {
          iVar4 = iVar3 + 1;
          fVar1 = local_2000[iVar3 + 1];
        }
        if (fVar1 < local_2000[iVar3 + 2]) {
          iVar4 = iVar3 + 2;
          fVar1 = local_2000[iVar3 + 2];
        }
        if (fVar1 < local_2000[iVar3 + 3]) {
          iVar4 = iVar3 + 3;
          fVar1 = local_2000[iVar3 + 3];
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 <= local_2010 + -3);
    }
    for (; iVar3 <= local_2010; iVar3 = iVar3 + 1) {
      if (fVar1 < local_2000[iVar3]) {
        fVar1 = local_2000[iVar3];
        iVar4 = iVar3;
      }
    }
    local_2010 = local_2010 + 1;
  } while ((fVar1 < (float)_DAT_004c44c8 == (fVar1 == (float)_DAT_004c44c8)) &&
          (local_2014 = local_2014 + 7, local_2010 < 0x100));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

