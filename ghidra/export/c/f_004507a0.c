// FUNCTION: PORT1111 0x004507a0
// name: FUN_004507a0
// sig: undefined4 * FUN_004507a0(undefined4 param_1, int param_2, undefined4 param_3, undefined4 * param_4)


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * __cdecl
FUN_004507a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  void *_Memory;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code **ppcVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uStack_40cc;
  void *pvStack_40c8;
  int iStack_40c4;
  uint uStack_40c0;
  undefined4 *puStack_40bc;
  code *local_40b8 [4];
  code *pcStack_40a8;
  code *pcStack_40a4;
  undefined4 local_409c;
  int iStack_4098;
  undefined4 uStack_4094;
  undefined4 uStack_4090;
  undefined4 uStack_408c;
  undefined4 uStack_4050;
  uint uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  iVar5 = 0;
  local_4 = DAT_004ddb0c;
  if (param_4 == (undefined4 *)0x0) {
    FUN_0044ed70(local_40b8);
  }
  else {
    ppcVar6 = local_40b8;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppcVar6 = (code *)*param_4;
      param_4 = param_4 + 1;
      ppcVar6 = ppcVar6 + 1;
    }
  }
  iStack_4098 = (*local_40b8[0])(local_409c,param_1,(param_2 == 0) * '\x04' + '\a');
  if (iStack_4098 != 0) {
    uStack_10 = (*local_40b8[3])(local_409c,iStack_4098);
    uStack_408c = 0;
    uStack_4050 = 0;
    uStack_8 = 0;
    uStack_c = 0;
    uStack_4090 = 0;
    uStack_4094 = 0;
    puStack_40bc = _malloc(0x40b4);
    if (puStack_40bc != (undefined4 *)0x0) {
      if (param_2 == 2) {
        uVar1 = FUN_0044f020(iStack_4098);
        if (uVar1 == 0) {
          iVar5 = -1;
        }
        iVar2 = (*pcStack_40a8)(local_409c,iStack_4098,uVar1,0);
        if (iVar2 != 0) {
          iVar5 = -1;
        }
        iVar2 = FUN_0044ee70(&iStack_40c4);
        if (iVar2 != 0) {
          iVar5 = -1;
        }
        iVar2 = FUN_00450710(&iStack_40c4);
        if (iVar2 != 0) {
          iVar5 = -1;
        }
        iVar2 = FUN_00450710((int *)&pvStack_40c8);
        if (iVar2 != 0) {
          iVar5 = -1;
        }
        iVar2 = FUN_00450710((int *)&uStack_40cc);
        if (iVar2 != 0) {
          iVar5 = -1;
        }
        iVar2 = FUN_00450710((int *)&uStack_40c0);
        if (iVar2 != 0) {
          iVar5 = -1;
        }
        if (((uStack_40c0 != uStack_40cc) || (pvStack_40c8 != (void *)0x0)) || (iStack_40c4 != 0)) {
          iVar5 = -0x67;
        }
        iVar2 = FUN_0044ee70((int *)&uStack_40cc);
        if (iVar2 != 0) {
          iVar5 = -1;
        }
        iVar2 = FUN_0044ee70(&iStack_40c4);
        if (iVar2 != 0) {
          iVar5 = -1;
        }
        iVar2 = FUN_00450710((int *)&pvStack_40c8);
        uVar7 = uStack_40cc;
        if (iVar2 != 0) {
          iVar5 = -1;
        }
        if ((uVar1 < iStack_40c4 + uStack_40cc) || (iVar5 != 0)) {
          (*pcStack_40a4)(local_409c,iStack_4098);
          return (undefined4 *)0x0;
        }
        uStack_40cc = (uVar1 - iStack_40c4) - uStack_40cc;
        uStack_c = uStack_40cc;
        pvStack_40c8 = _malloc(0xff0);
        iVar4 = iStack_40c4 + uStack_40cc;
        iVar2 = (*pcStack_40a8)(local_409c,iStack_4098,iVar4,0);
        iVar5 = 0;
        _Memory = pvStack_40c8;
        if (iVar2 != 0) {
          iVar5 = -1;
        }
        while ((pvStack_40c8 = _Memory, uVar7 != 0 && (iVar5 == 0))) {
          uVar1 = 0xff0;
          if (uVar7 < 0xff0) {
            uVar1 = uVar7;
          }
          uVar3 = (*local_40b8[1])(local_409c,iStack_4098,_Memory,uVar1);
          if (uVar3 == uVar1) {
            iVar5 = FUN_004505d0(&uStack_4094,(int)_Memory,uVar1);
          }
          else {
            iVar5 = -1;
          }
          uVar7 = uVar7 - uVar1;
          _Memory = pvStack_40c8;
        }
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        uStack_10 = uStack_40cc;
        iVar2 = (*pcStack_40a8)(local_409c,iStack_4098,iVar4,0);
        if ((iVar2 != 0) || (iVar5 != 0)) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_40bc);
        }
      }
      ppcVar6 = local_40b8;
      puVar8 = puStack_40bc;
      for (iVar5 = 0x102d; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *ppcVar6;
        ppcVar6 = ppcVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      return puStack_40bc;
    }
    (*pcStack_40a4)(local_409c,iStack_4098);
  }
  return (undefined4 *)0x0;
}

