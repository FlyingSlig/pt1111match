// FUNCTION: PORT1111 0x00417710
// name: FUN_00417710
// sig: undefined FUN_00417710(void * param_1)


void __fastcall FUN_00417710(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00416c10(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

