// FUNCTION: PORT1111 0x0044efc0
// name: FUN_0044efc0
// sig: int FUN_0044efc0(void * this, byte * param_1, byte * param_2, int param_3)


int __thiscall FUN_0044efc0(void *this,byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_3 == 0) || (param_3 != 1)) {
    iVar2 = FUN_0044ef80(this,(char *)param_1);
    return iVar2;
  }
  while( true ) {
    bVar1 = *param_1;
    bVar3 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar3 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar3) - (uint)(bVar3 != 0);
}

