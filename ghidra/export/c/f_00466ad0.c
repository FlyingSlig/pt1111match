// FUNCTION: PORT1111 0x00466ad0
// name: FUN_00466ad0
// sig: bool FUN_00466ad0(void * this, undefined4 * param_1)


bool __thiscall FUN_00466ad0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00466240(this,(uchar *)*param_1);
  return (bool)('\x01' - (iVar1 != 0));
}

