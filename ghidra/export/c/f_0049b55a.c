// FUNCTION: PORT1111 0x0049b55a
// name: FUN_0049b55a
// sig: undefined FUN_0049b55a(void * param_1)


void __cdecl FUN_0049b55a(void *param_1)

{
  if (DAT_004dddc4 != -1) {
    if (param_1 == (void *)0x0) {
      param_1 = (void *)(*DAT_004e2d44)(DAT_004dddc4);
    }
    FUN_0049b413(param_1);
    (*DAT_004e2d48)(DAT_004dddc4,0);
  }
  return;
}

