// FUNCTION: PORT1111 0x00437ff0
// name: FUN_00437ff0
// sig: undefined FUN_00437ff0(int param_1)


void __fastcall FUN_00437ff0(int param_1)

{
  char cVar1;
  int *_Memory;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *local_20;
  int local_1c;
  undefined1 local_18 [4];
  int *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7bf9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_1c = param_1;
  _Memory = (int *)FUN_0043d220();
  local_10 = 0;
  piVar4 = (int *)**(int **)(param_1 + 8);
  local_4 = 0;
  local_14 = _Memory;
  if (piVar4 != *(int **)(param_1 + 8)) {
    do {
      iVar2 = FUN_004662f0((void *)(piVar4[2] + 8),(uchar *)"worldobj");
      if (iVar2 == 0) {
        iVar2 = FUN_004662f0((void *)(piVar4[2] + 8),(uchar *)"BuildingConnected");
        if (iVar2 != 0) {
          local_20 = operator_new(0x3a0);
          local_4 = CONCAT31(local_4._1_3_,2);
          if (local_20 == (undefined4 *)0x0) goto LAB_0043807d;
          puVar3 = FUN_00403b40(local_20);
          goto LAB_0043807f;
        }
        iVar2 = FUN_004662f0((void *)(piVar4[2] + 8),(uchar *)"StateTable");
        if (iVar2 != 0) {
          local_20 = operator_new(0x44);
          local_4._0_1_ = 3;
          if (local_20 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = FUN_0045f6a0(local_20);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00417760(puVar3);
          local_20 = (undefined4 *)&stack0xffffffcc;
          FUN_00466b20(&stack0xffffffcc,(undefined4 *)(piVar4[2] + 4));
          FUN_00438fc0((int)puVar3);
          (**(code **)*puVar3)();
        }
      }
      else {
        local_20 = operator_new(0x2b0);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (local_20 == (undefined4 *)0x0) {
LAB_0043807d:
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_0041a3a0(local_20);
        }
LAB_0043807f:
        local_20 = (undefined4 *)&stack0xffffffcc;
        local_4 = local_4 & 0xffffff00;
        FUN_00466b20(&stack0xffffffcc,(undefined4 *)(piVar4[2] + 4));
        FUN_00438fc0((int)puVar3);
        local_20 = operator_new(8);
        *local_20 = puVar3;
        local_20[1] = *(undefined4 *)(piVar4[2] + 0xc);
        iVar2 = FUN_00413870(_Memory,_Memory[1],&local_20);
        FUN_004371f0(local_18,1);
        _Memory[1] = iVar2;
        **(int **)(iVar2 + 4) = iVar2;
        _Memory = local_14;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(local_1c + 8));
  }
  if ((int *)*_Memory == _Memory) {
    piVar4 = (int *)*_Memory;
    *_Memory = (int)_Memory;
    _Memory[1] = (int)_Memory;
    if (piVar4 == _Memory) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free(piVar4);
  }
  piVar4 = (int *)((int *)*_Memory)[2];
  cVar1 = (*(code *)**(undefined4 **)*piVar4)();
  if (cVar1 == '\0') {
    piVar4 = (int *)*_Memory;
    *_Memory = (int)_Memory;
    _Memory[1] = (int)_Memory;
    if (piVar4 == _Memory) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free(piVar4);
  }
  FUN_00417740(*piVar4);
                    /* WARNING: Subroutine does not return */
  _free(piVar4);
}

