// FUNCTION: PORT1111 0x00433cf0
// name: FUN_00433cf0
// sig: undefined FUN_00433cf0(int param_1)


void __fastcall FUN_00433cf0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *_Memory;
  
  (**(code **)(*(int *)(param_1 + 0x18) + 4))();
  iVar4 = *(int *)(param_1 + 0x14);
  while (iVar4 != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar3 = *(uint *)(param_1 + 0x10) >> 2;
      iVar4 = uVar3 * -4;
      if (*(uint *)(param_1 + 0xc) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_1 + 0xc);
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 8) + uVar3 * 4) +
                  (*(uint *)(param_1 + 0x10) + iVar4) * 4) != 0) {
        uVar3 = *(uint *)(param_1 + 0x10) >> 2;
        iVar4 = uVar3 * -4;
        if (*(uint *)(param_1 + 0xc) <= uVar3) {
          uVar3 = uVar3 - *(uint *)(param_1 + 0xc);
        }
        puVar1 = *(undefined4 **)
                  (*(int *)(*(int *)(param_1 + 8) + uVar3 * 4) +
                  (*(uint *)(param_1 + 0x10) + iVar4) * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        uVar3 = *(uint *)(param_1 + 0x10) >> 2;
        iVar4 = uVar3 * -4;
        if (*(uint *)(param_1 + 0xc) <= uVar3) {
          uVar3 = uVar3 - *(uint *)(param_1 + 0xc);
        }
        *(undefined4 *)
         (*(int *)(*(int *)(param_1 + 8) + uVar3 * 4) + (*(uint *)(param_1 + 0x10) + iVar4) * 4) = 0
        ;
      }
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar3 = *(int *)(param_1 + 0x10) + 1;
      *(uint *)(param_1 + 0x10) = uVar3;
      if ((uint)(*(int *)(param_1 + 0xc) << 2) <= uVar3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x14) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    iVar4 = *(int *)(param_1 + 0x14);
  }
  if ((*(int *)(param_1 + 0x34) != 0) &&
     (_Memory = (int *)**(int **)(param_1 + 0x3c), _Memory != *(int **)(param_1 + 0x3c))) {
    do {
      if ((undefined4 *)_Memory[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)_Memory[2])(1);
        _Memory[2] = 0;
      }
      piVar2 = (int *)*_Memory;
      if (_Memory != *(int **)(param_1 + 0x3c)) {
        *(int **)_Memory[1] = piVar2;
        *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x3c));
  }
  FUN_00419480(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00433e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 8))();
  return;
}

