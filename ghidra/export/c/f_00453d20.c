// FUNCTION: PORT1111 0x00453d20
// name: FUN_00453d20
// sig: void * FUN_00453d20(void * param_1)


void * __fastcall FUN_00453d20(void *param_1)

{
  _eh_vector_constructor_iterator_(param_1,0x1c,10,FUN_00453cf0,FUN_00409650);
  *(undefined4 *)((int)param_1 + 0x11c) = 0;
  *(undefined4 *)((int)param_1 + 0x120) = 0;
  *(undefined4 *)((int)param_1 + 0x124) = 0;
  *(void **)((int)param_1 + 0x118) = param_1;
  return param_1;
}

