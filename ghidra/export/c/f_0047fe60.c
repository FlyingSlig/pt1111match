// FUNCTION: PORT1111 0x0047fe60
// name: FUN_0047fe60
// sig: undefined FUN_0047fe60(void * param_1)


void __fastcall FUN_0047fe60(void *param_1)

{
  bool bVar1;
  
  if (*(int *)((int)param_1 + 0xc) == 0) {
LAB_0047fe8d:
    bVar1 = *(int *)((int)param_1 + 0x58) == 0;
  }
  else {
    bVar1 = false;
    if (*(int *)((int)param_1 + 0x58) == 0) {
      SetEvent(*(HANDLE *)((int)param_1 + 0x10));
      FUN_0047fd30(param_1,0xffffffff);
      FUN_0047fce0((int)param_1);
      goto LAB_0047fe8d;
    }
  }
  if (bVar1) {
    if (*(HANDLE *)((int)param_1 + 0x10) == (HANDLE)0x0) goto LAB_0047fea5;
    CloseHandle(*(HANDLE *)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x10) = 0;
LAB_0047fea5:
  if (*(HANDLE *)((int)param_1 + 0x14) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x14));
    *(undefined4 *)((int)param_1 + 0x14) = 0;
  }
  if (*(HANDLE *)((int)param_1 + 0x18) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0x18));
    *(undefined4 *)((int)param_1 + 0x18) = 0;
  }
  return;
}

