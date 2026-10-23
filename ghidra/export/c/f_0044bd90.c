// FUNCTION: PORT1111 0x0044bd90
// name: FUN_0044bd90
// sig: int FUN_0044bd90(void * this, undefined4 param_1, LPCSTR param_2)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FUN_0044bd90(void *this,undefined4 param_1,LPCSTR param_2)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_220 [2];
  WCHAR local_218 [252];
  void *pvStack_20;
  undefined4 uStack_18;
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_004b89de;
  pvStack_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  local_220[0] = 0;
  ExceptionList = &pvStack_c;
  FUN_0044bf60(local_218,param_2,0x104);
  piVar5 = *(int **)((int)this + 4);
  piVar6 = (int *)&DAT_004c4bb0;
  iVar2 = (**(code **)(*piVar5 + 0x38))(piVar5,&DAT_004c4bb0,&DAT_004c4b50,local_218,local_220);
  if (-1 < iVar2) {
    this_00 = operator_new(0x18);
    uStack_18 = 0;
    if (this_00 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_0044bb50(this_00,*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 4),
                            piVar6);
    }
    piVar1 = local_10;
    uStack_18 = 0xffffffff;
    *local_10 = (int)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      iVar2 = -0x7ff8fff2;
    }
    else if ((iStack_4 == 0) ||
            (iVar2 = (**(code **)(*piVar6 + 0x4c))
                               (piVar6,&DAT_004c4b80,0xffffffff,0,0,0,piVar5,piVar6,this_00),
            -1 < iVar2)) {
      if (puStack_8 != (undefined1 *)0x0) {
        iVar2 = *piVar1;
        piVar5 = *(int **)(iVar2 + 4);
        if (piVar5 == (int *)0x0) {
          ExceptionList = pvStack_20;
          return -0x7ffbfe10;
        }
        if (*(int *)(iVar2 + 0x10) == 0) {
          iVar4 = (**(code **)(*piVar5 + 0x74))(piVar5,*(undefined4 *)(iVar2 + 0xc));
        }
        else {
          iVar4 = (**(code **)(*piVar5 + 0x74))(piVar5,*(int *)(iVar2 + 0x10));
        }
        if (iVar4 < 0) {
          ExceptionList = pvStack_20;
          return iVar4;
        }
        *(undefined4 *)(iVar2 + 0x14) = 1;
      }
      iVar2 = 0;
    }
  }
  ExceptionList = pvStack_20;
  return iVar2;
}

