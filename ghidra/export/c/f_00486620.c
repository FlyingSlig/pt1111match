// FUNCTION: PORT1111 0x00486620
// name: FUN_00486620
// sig: int FUN_00486620(void * this, short param_1, int param_2, ushort param_3)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __thiscall FUN_00486620(void *this,short param_1,int param_2,ushort param_3)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  short sStack_3a;
  int local_38;
  int local_34;
  ushort local_30;
  ushort uStack_2e;
  undefined2 local_2c;
  int local_28 [10];
  
  piVar1 = *(int **)this;
  local_28[9] = DAT_004ddb0c;
  local_40 = 0;
  if (piVar1 == (int *)0x0) {
    return -0x7ffbfe10;
  }
  local_28[3] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[1] = 1;
  local_2c = 0;
  uStack_48 = 0;
  local_28[0] = 0x24;
  uVar2 = (param_3 >> 3) * param_1;
  _local_30 = CONCAT22(param_3,uVar2);
  local_34 = (uint)uVar2 * param_2;
  puStack_4c = &local_40;
  local_28[2] = 0;
  local_28[4] = 0;
  _local_3c = CONCAT22(param_1,1);
  local_38 = param_2;
  iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(local_28[0] + 0x38))(local_28,&puStack_4c);
    if (-1 < iVar3) {
      if (local_28 != (int *)0x0) {
        (**(code **)(local_28[0] + 8))(local_28);
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}

