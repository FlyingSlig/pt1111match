// FUNCTION: PORT1111 0x004211c0
// name: FUN_004211c0
// sig: undefined FUN_004211c0(void * this, int * param_1, int * param_2)


void __thiscall FUN_004211c0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  iVar1 = *(int *)((int)this + 0x68);
  iVar2 = *param_2;
  iVar3 = *(int *)((int)this + 0x4c);
  bVar4 = (byte)*(undefined4 *)((int)this + 0x48);
  param_1[1] = (*(int *)((int)this + 0x6c) - param_2[1]) + *(int *)((int)this + 0x54) <<
               (bVar4 & 0x1f);
  *param_1 = (iVar1 + iVar3) - iVar2 << (bVar4 & 0x1f);
  return;
}

