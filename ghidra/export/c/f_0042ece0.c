// FUNCTION: PORT1111 0x0042ece0
// name: FUN_0042ece0
// sig: undefined FUN_0042ece0(undefined1 * param_1)


void __fastcall FUN_0042ece0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *_Memory;
  uint uVar4;
  uint uVar5;
  undefined1 *this;
  int *piVar6;
  uint local_158;
  undefined1 local_150 [4];
  int *local_14c;
  int local_148;
  undefined1 local_144 [4];
  int local_140 [2];
  undefined1 local_138 [276];
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7381;
  local_c = ExceptionList;
  if (*(uint *)(param_1 + 8) < 2) {
    return;
  }
  ExceptionList = &local_c;
  _Memory = (int *)FUN_0043d220();
  uVar4 = 0;
  local_148 = 0;
  local_4 = 0;
  local_14c = _Memory;
  _eh_vector_constructor_iterator_(local_144,0xc,0x1a,FUN_0042ab60,FUN_00409650);
  iVar1 = *(int *)(param_1 + 8);
  local_4 = CONCAT31(local_4._1_3_,1);
  local_158 = 0;
  do {
    if (iVar1 == 0) {
      if (1 < uVar4) {
        local_158 = uVar4 - 1;
        this = local_138;
        do {
          FUN_0042ec40(this,this + -0xc);
          this = this + 0xc;
          local_158 = local_158 + -1;
        } while (local_158 != 0);
      }
      piVar6 = (&local_14c)[uVar4 * 3];
      (&local_14c)[uVar4 * 3] = *(int **)(param_1 + 4);
      *(int **)(param_1 + 4) = piVar6;
      uVar3 = *(undefined4 *)(local_144 + uVar4 * 0xc + -4);
      *(undefined4 *)(local_144 + uVar4 * 0xc + -4) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = uVar3;
      local_4 = local_4 & 0xffffff00;
      _eh_vector_destructor_iterator_(local_144,0xc,0x1a,FUN_00409650);
      piVar6 = (int *)*_Memory;
      *_Memory = (int)_Memory;
      _Memory[1] = (int)_Memory;
      if (piVar6 != _Memory) {
                    /* WARNING: Subroutine does not return */
        _free(piVar6);
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    piVar6 = (int *)**(int **)(param_1 + 4);
    iVar1 = *_Memory;
    if (piVar6 != *(int **)(param_1 + 4)) {
      iVar2 = *piVar6;
      uVar4 = local_158;
      if (local_150 == param_1) {
        if (((int *)iVar1 == piVar6) || (iVar1 == iVar2)) goto LAB_0042edba;
      }
      else {
        FUN_00409f80(local_150,1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        _Memory = local_14c;
      }
      *(int *)piVar6[1] = iVar2;
      **(int **)(iVar2 + 4) = iVar1;
      **(int **)(iVar1 + 4) = (int)piVar6;
      uVar3 = *(undefined4 *)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
      *(int *)(iVar2 + 4) = piVar6[1];
      piVar6[1] = uVar3;
    }
LAB_0042edba:
    uVar5 = 0;
    if (uVar4 == 0) {
LAB_0042ee14:
      local_14c = (int *)local_140[uVar5 * 3];
      local_140[uVar5 * 3] = (int)_Memory;
      iVar1 = local_140[uVar5 * 3 + 1];
      local_140[uVar5 * 3 + 1] = local_148;
      local_148 = iVar1;
      if (uVar5 == uVar4) {
        uVar4 = uVar4 + 1;
        local_158 = uVar4;
      }
    }
    else {
      piVar6 = local_140 + 1;
      do {
        if (*piVar6 == 0) break;
        FUN_0042ec40(piVar6 + -2,local_150);
        _Memory = (int *)piVar6[-1];
        piVar6[-1] = (int)local_14c;
        iVar1 = *piVar6;
        *piVar6 = local_148;
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 3;
        local_14c = _Memory;
        local_148 = iVar1;
      } while (uVar5 < uVar4);
      if (uVar5 != 0x19) goto LAB_0042ee14;
      FUN_0042ec40(local_24,local_150);
    }
    iVar1 = *(int *)(param_1 + 8);
    _Memory = local_14c;
  } while( true );
}

