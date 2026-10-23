// FUNCTION: PORT1111 0x00483930
// name: FUN_00483930
// sig: undefined FUN_00483930(void * param_1)


void __fastcall FUN_00483930(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00483760(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

