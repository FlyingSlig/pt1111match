// FUNCTION: PORT1111 0x004531e0
// name: FUN_004531e0
// sig: undefined FUN_004531e0(void * param_1)


void __fastcall FUN_004531e0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x84c) == 0) {
    if (*(int *)((int)param_1 + 0x850) == 0) {
      if (*(int *)((int)param_1 + 0x854) != 0) {
        FUN_00452ad0((int)param_1);
      }
    }
    else {
      FUN_00452c30(param_1,0);
    }
  }
  else {
    FUN_00453150(param_1);
  }
  *(undefined4 *)((int)param_1 + 0x854) = 0;
  *(undefined4 *)((int)param_1 + 0x84c) = 0;
  *(undefined4 *)((int)param_1 + 0x850) = 0;
  return;
}

