// FUNCTION: PORT1111 0x00474cc0
// name: FUN_00474cc0
// sig: undefined FUN_00474cc0(int param_1)


void __fastcall FUN_00474cc0(int param_1)

{
  int *piVar1;
  void *this;
  DWORD DVar2;
  int local_4;
  
  if (DAT_004e2c58 == 0) {
    local_4 = param_1;
    DVar2 = GetTickCount();
    piVar1 = *(int **)(*(int *)(param_1 + 0x28) + 4);
    local_4 = *piVar1;
    if ((int *)local_4 != piVar1) {
      do {
        this = *(void **)(local_4 + 0xc);
        FUN_0040ca50(&local_4);
        if ((*(byte *)((int)this + 0x2c) & 1) != 0) {
          FUN_00478c30(this,DVar2);
        }
      } while (local_4 != *(int *)(*(int *)(param_1 + 0x28) + 4));
    }
  }
  return;
}

