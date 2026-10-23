// FUNCTION: PORT1111 0x004781f0
// name: FUN_004781f0
// sig: undefined FUN_004781f0(void * this, int param_1, int * param_2, int * param_3)


void __thiscall FUN_004781f0(void *this,int param_1,int *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  
  if ((*(byte *)((int)this + 0x28) & 0x20) != 0) {
    iVar2 = (**(code **)(*(int *)((int)this + 0xc) + 0x20))(this,param_1,param_2,param_3);
    if (iVar2 != 0) goto LAB_00478232;
  }
  sVar1 = *(short *)(param_1 + 8);
  *param_2 = (int)*(short *)(param_1 + 6);
  *param_3 = (int)sVar1;
  *param_2 = *param_2 + *(int *)((int)this + 4);
  *param_3 = *param_3 + *(int *)((int)this + 8);
LAB_00478232:
  if ((*(byte *)((int)this + 0x2c) & 0x40) != 0) {
    *param_2 = *param_2 + DAT_004e2c30;
    *param_3 = *param_3 + DAT_004e2c34;
  }
  return;
}

