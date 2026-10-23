// FUNCTION: PORT1111 0x00483960
// name: FUN_00483960
// sig: undefined FUN_00483960(void * this, uchar * param_1, undefined4 param_2, undefined4 param_3, uchar * param_4, uchar * param_5, uchar * param_6, int param_7)


void __thiscall
FUN_00483960(void *this,uchar *param_1,undefined4 param_2,undefined4 param_3,uchar *param_4,
            uchar *param_5,uchar *param_6,int param_7)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba70b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x28);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_004821e0(this_00,this,param_1,param_4,param_5,param_3,param_2,param_6);
  }
  local_4 = 0xffffffff;
  FUN_00483820(this,(int)puVar1,param_7);
  ExceptionList = local_c;
  return;
}

