// FUNCTION: PORT1111 0x00421200
// name: FUN_00421200
// sig: undefined FUN_00421200(void * this, int * param_1, int * param_2)


void __thiscall FUN_00421200(void *this,int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (byte)*(undefined4 *)((int)this + 0x48);
  iVar2 = DAT_004e2c30 -
          ((*(int *)((int)this + 0x68) + *(int *)((int)this + 0x4c)) - *param_2 << (bVar1 & 0x1f));
  param_1[1] = DAT_004e2c34 -
               ((*(int *)((int)this + 0x6c) - param_2[1]) + *(int *)((int)this + 0x54) <<
               (bVar1 & 0x1f));
  *param_1 = iVar2;
  return;
}

