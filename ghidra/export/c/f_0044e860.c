// FUNCTION: PORT1111 0x0044e860
// name: FUN_0044e860
// sig: int * FUN_0044e860(void * this, void * param_1)


int * __thiscall FUN_0044e860(void *this,void *param_1)

{
  void *this_00;
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  int local_2c;
  void *local_28;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_00474930(this,(int)param_1);
  if (piVar1 != *(int **)((int)this + 4)) {
    if ((uint)piVar1[9] < 0x10) {
      pbVar2 = (byte *)(piVar1 + 4);
    }
    else {
      pbVar2 = (byte *)piVar1[4];
    }
    uVar3 = FUN_004366b0(this_00,0,*(uint *)((int)this_00 + 0x14),pbVar2,piVar1[8]);
    if (-1 < (int)uVar3) goto LAB_0044e903;
  }
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  FUN_004015c0(&local_2c,this_00,0,0xffffffff);
  local_10 = 0;
  local_4 = 0;
  puVar4 = FUN_0044e5d0(this,&param_1,piVar1,&local_2c);
  piVar1 = (int *)*puVar4;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
LAB_0044e903:
  ExceptionList = local_c;
  return piVar1 + 10;
}

