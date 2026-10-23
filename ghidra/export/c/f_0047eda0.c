// FUNCTION: PORT1111 0x0047eda0
// name: FUN_0047eda0
// sig: undefined FUN_0047eda0(void * this, uchar * param_1, undefined1 param_2, undefined4 param_3, undefined4 param_4, int param_5)


void __thiscall
FUN_0047eda0(void *this,uchar *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  
  FUN_0047ece0((int)this);
  this_00 = (undefined4 *)((int)this + 0x30);
  FUN_00466a40(this_00,param_1);
  puVar1 = FUN_00465ee0(this_00);
  FUN_00466a50(this_00,puVar1);
  FUN_0047e3d0(this,param_2,param_3,param_4,param_5);
  return;
}

