// FUNCTION: PORT1111 0x00453ee0
// name: FUN_00453ee0
// sig: bool FUN_00453ee0(int param_1, uint param_2, int param_3, int param_4, uint param_5)


bool __cdecl FUN_00453ee0(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  
  if (((param_3 != 0) && (*(short *)(param_3 + 0x2e) != -1)) &&
     (pvVar1 = *(void **)(*(int *)(*(int *)(param_3 + 0x14) + 4) + *(short *)(param_3 + 0x2e) * 4),
     pvVar1 != (void *)0x0)) {
    if (pvVar1 != (void *)0x0) {
      iVar3 = FUN_00475080(*(int *)(DAT_004e2b14 + 0xf8));
      if (iVar3 != 0) {
        bVar2 = FUN_00453d60(param_1,param_2,iVar3,pvVar1,param_4,param_5);
        return bVar2;
      }
    }
    return false;
  }
  return false;
}

