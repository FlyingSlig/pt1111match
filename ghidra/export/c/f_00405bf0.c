// FUNCTION: PORT1111 0x00405bf0
// name: FUN_00405bf0
// sig: undefined FUN_00405bf0(void * param_1)


void __fastcall FUN_00405bf0(void *param_1)

{
  if (*(void **)((int)param_1 + 0x5c) != (void *)0x0) {
    FUN_00426b20(*(void **)((int)param_1 + 0x5c),0);
  }
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *(undefined4 *)((int)param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x8c) = 0xffffffff;
  FUN_00412740(param_1,0xffffffff,0xffffffff);
  return;
}

