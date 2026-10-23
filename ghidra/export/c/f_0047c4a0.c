// FUNCTION: PORT1111 0x0047c4a0
// name: FUN_0047c4a0
// sig: undefined FUN_0047c4a0(int param_1)


void __fastcall FUN_0047c4a0(int param_1)

{
  int iVar1;
  undefined4 *this;
  uchar *puVar2;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004ba3e3;
  local_c = ExceptionList;
  if (((*(byte *)(param_1 + 0x20) & 4) != 0) && (*(int *)(DAT_004e2b14 + 0x48) != 0)) {
    ExceptionList = &local_c;
    iVar1 = thunk_FUN_00466240((undefined4 *)(param_1 + 0x80),"");
    if ((iVar1 == 0) && (DAT_004e2b24 == 0)) {
      FUN_00466fd0((void *)(param_1 + 0x84),&local_14,(undefined4 *)(param_1 + 0x80));
      local_4 = 0;
      local_10 = operator_new(0x70);
      local_4._0_1_ = 1;
      if (local_10 == (undefined4 *)0x0) {
        this = (undefined4 *)0x0;
      }
      else {
        this = FUN_004889d0(local_10);
      }
      *(undefined4 **)(param_1 + 0x7c) = this;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00488aa0(this,DAT_004e2b2c);
      puVar2 = (uchar *)FUN_00465e00(&local_14);
      iVar1 = FUN_00488a30(*(void **)(param_1 + 0x7c),puVar2);
      if (iVar1 == 0) {
        if (*(undefined4 **)(param_1 + 0x7c) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x7c))(1);
        }
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      local_4 = 0xffffffff;
      FUN_00465e40(&local_14);
    }
  }
  ExceptionList = local_c;
  return;
}

