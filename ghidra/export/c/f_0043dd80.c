// FUNCTION: PORT1111 0x0043dd80
// name: FUN_0043dd80
// sig: undefined FUN_0043dd80(void * this, undefined4 param_1, int * param_2)


void __thiscall FUN_0043dd80(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7ed8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &pvStack_c;
    FUN_004016b0(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_004017e0(local_34,local_50);
    local_34[0] = &PTR_FUN_004c6e2c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_004cc2d8);
  }
  ExceptionList = &pvStack_c;
  FUN_00413730((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x15) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x15) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x15) == '\0') {
          piVar6[1] = (int)piVar4;
        }
        *piVar4 = (int)piVar6;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar5 = (int *)_Memory[1];
        if ((int *)*piVar5 == _Memory) {
          *piVar5 = (int)param_2;
        }
        else {
          piVar5[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[5];
      *(char *)(param_2 + 5) = (char)_Memory[5];
      *(char *)(_Memory + 5) = (char)iVar1;
      goto LAB_0043def1;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar6[1] = (int)piVar4;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
  }
  else if ((int *)*piVar4 == _Memory) {
    *piVar4 = (int)piVar6;
  }
  else {
    piVar4[2] = (int)piVar6;
  }
  piVar5 = *(int **)((int)this + 4);
  if ((int *)*piVar5 == _Memory) {
    piVar2 = piVar4;
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      piVar2 = (int *)FUN_00413030(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_00429bb0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0043def1:
  if ((char)_Memory[5] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[5] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_00484d60(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_00495a40(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_00484d60(this,(int)piVar5);
              break;
            }
LAB_0043dfb4:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_00495a40(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_0043dfb4;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_00484d60(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_00495a40(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

