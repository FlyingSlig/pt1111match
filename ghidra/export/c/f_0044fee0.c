// FUNCTION: PORT1111 0x0044fee0
// name: FUN_0044fee0
// sig: int FUN_0044fee0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3, int param_4, int param_5)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
FUN_0044fee0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *_Memory;
  void *pvVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 extraout_ECX;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_18;
  uint local_14;
  byte abStack_10 [12];
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = DAT_004ddb0c;
  if ((param_1 == (undefined4 *)0x0) || (param_1[0xe] == 0)) {
    return -0x66;
  }
  if (param_1[0x27] != 0) {
    FUN_0044fbf0((int)param_1);
  }
  iVar3 = FUN_0044f770(&local_18,(int *)&param_1,&local_14);
  if (iVar3 == 0) {
    _Memory = _malloc(0x90);
    if (_Memory == (undefined4 *)0x0) {
      return -0x68;
    }
    pvVar4 = _malloc(0x4000);
    _Memory[0x12] = local_14;
    *_Memory = pvVar4;
    _Memory[0x11] = param_1;
    _Memory[0x13] = 0;
    _Memory[0x23] = param_4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    _Memory[0x10] = 0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = puVar2[0x15];
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 6;
      uVar5 = puVar2[0x14] & 6;
      if (uVar5 == 2) {
        *param_3 = 9;
      }
      else if (uVar5 == 4) {
        *param_3 = 2;
      }
      else if (uVar5 == 6) {
        *param_3 = 1;
      }
    }
    uVar1 = puVar2[0x17];
    _Memory[0x14] = 0;
    _Memory[0x15] = uVar1;
    _Memory[0x21] = puVar2[0x15];
    _Memory[0x20] = puVar2[8];
    puVar7 = puVar2;
    puVar8 = _Memory + 0x18;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    _Memory[0x22] = puVar2[0xb];
    _Memory[6] = 0;
    if ((puVar2[0x15] == 8) && (param_4 == 0)) {
      _Memory[9] = 0;
      _Memory[10] = 0;
      _Memory[0xb] = 0;
      _Memory[1] = 0;
      _Memory[2] = 0;
      iVar3 = FUN_0045fd70((int)(_Memory + 1),-0xf,"1.1.4",0x38);
      if (iVar3 != 0) {
        return iVar3;
      }
      _Memory[0x10] = 1;
    }
    _Memory[0x16] = puVar2[0x18];
    _Memory[0x17] = puVar2[0x19];
    _Memory[0xf] = puVar2[0x26] + 0x1e + local_18;
    _Memory[2] = 0;
    puVar2[0x27] = _Memory;
    if (param_5 != 0) {
      puVar6 = FUN_0045fb80();
      puVar2[0x2c] = puVar6;
      FUN_0044ee00(extraout_ECX,puVar2 + 0x29);
      iVar3 = (*(code *)puVar2[4])
                        (puVar2[7],puVar2[8],
                         *(int *)(puVar2[0x27] + 0x88) + *(int *)(puVar2[0x27] + 0x3c),0);
      if (iVar3 != 0) {
        return -0x68;
      }
      uVar5 = (*(code *)puVar2[1])(puVar2[7],puVar2[8],abStack_10,0xc);
      if (uVar5 < 0xc) {
        return -0x68;
      }
      iVar3 = 0;
      do {
        uVar5 = puVar2[0x2b] & 0xfffd | 2;
        abStack_10[iVar3] = abStack_10[iVar3] ^ (byte)((uVar5 ^ 1) * uVar5 >> 8);
        FUN_0044edb0();
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0xc);
      *(int *)(puVar2[0x27] + 0x3c) = *(int *)(puVar2[0x27] + 0x3c) + 0xc;
      puVar2[0x28] = 1;
    }
    return 0;
  }
  return -0x67;
}

