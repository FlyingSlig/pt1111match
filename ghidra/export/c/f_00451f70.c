// FUNCTION: PORT1111 0x00451f70
// name: FUN_00451f70
// sig: bool FUN_00451f70(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, uchar * param_7)


bool __thiscall
FUN_00451f70(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            uchar *param_7)

{
  int iVar1;
  
  iVar1 = FUN_00453620(this,param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_0047e4d0((void *)((int)this + 0x30),param_7,*(undefined4 *)(DAT_004e2b14 + 0x60),0);
  return iVar1 != 0;
}

