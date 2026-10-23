// FUNCTION: PORT1111 0x00478780
// name: FUN_00478780
// sig: undefined FUN_00478780(void * this, int * param_1, uint * param_2)


void __thiscall FUN_00478780(void *this,int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  puVar3 = FUN_00478610(this,param_2);
  if (puVar3 != *(undefined4 **)((int)this + 4)) {
    uVar1 = *(uint *)(puVar3[3] + 0x10);
    uVar2 = *(uint *)(*param_2 + 0x10);
    bVar4 = uVar2 < uVar1;
    if (uVar2 == uVar1) {
      bVar4 = *param_2 < (uint)puVar3[3];
    }
    if (!bVar4) {
      *param_1 = (int)puVar3;
      return;
    }
  }
  *param_1 = (int)*(undefined4 **)((int)this + 4);
  return;
}

