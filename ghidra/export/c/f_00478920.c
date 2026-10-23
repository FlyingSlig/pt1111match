// FUNCTION: PORT1111 0x00478920
// name: FUN_00478920
// sig: undefined4 FUN_00478920(void * param_1)


undefined4 __fastcall FUN_00478920(void *param_1)

{
  int iVar1;
  short sVar2;
  DWORD DVar3;
  void *local_4;
  
  if ((*(byte *)((int)param_1 + 0x2c) & 2) == 0) {
    return 0;
  }
  *(byte *)((int)param_1 + 0x2c) = *(byte *)((int)param_1 + 0x2c) & 0xf7 | 0x81;
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + 4);
  if (iVar1 == 0) {
    sVar2 = 0;
  }
  else {
    sVar2 = (short)(*(int *)(*(int *)((int)param_1 + 0x14) + 8) - iVar1 >> 2);
  }
  *(short *)((int)param_1 + 0x54) = sVar2 + -1;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  local_4 = param_1;
  DVar3 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x48) = DVar3;
  *(undefined2 *)((int)param_1 + 0x50) = 0;
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  *(undefined2 *)((int)param_1 + 0x52) = 0xffff;
  FUN_0041f5e0(param_1);
  local_4 = (void *)**(int **)((int)param_1 + 0x3c);
  if (local_4 != *(int **)((int)param_1 + 0x3c)) {
    do {
      FUN_00478920(*(void **)((int)local_4 + 0xc));
      FUN_0040ca50((int *)&local_4);
    } while (local_4 != *(void **)((int)param_1 + 0x3c));
  }
  return 1;
}

