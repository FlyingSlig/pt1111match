// FUNCTION: PORT1111 0x004186f0
// name: FUN_004186f0
// sig: uint FUN_004186f0(void * this, int param_1)


uint __thiscall FUN_004186f0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  if ((0 < iVar1) && (iVar1 < 0x4d)) {
    (&DAT_004e2814)[iVar1 * 2] = this;
    uVar2 = FUN_00439390(param_1,&DAT_004e2810 + *(int *)((int)this + 0x10) * 2);
    puVar3 = FUN_00466cd0(&DAT_004e2810 + *(int *)((int)this + 0x10) * 2,"\\r\\n","\r\n",1);
    return CONCAT31((int3)((uint)puVar3 >> 8),(char)uVar2);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

