// FUNCTION: PORT1111 0x004224f0
// name: FUN_004224f0
// sig: undefined4 FUN_004224f0(void * this, uint param_1, uint param_2, int param_3, int param_4)


undefined4 __thiscall FUN_004224f0(void *this,uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8;
  uint local_4;
  
  iVar1 = FUN_004296f0(DAT_004e2404,param_1,param_2,&local_4,&local_8);
  if (iVar1 != 0) {
    iVar1 = FUN_004296f0(DAT_004e2404,param_3,param_4,&param_1,&param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_00422410(this,local_4,local_8,param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

