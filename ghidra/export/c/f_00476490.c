// FUNCTION: PORT1111 0x00476490
// name: FUN_00476490
// sig: undefined FUN_00476490(void * param_1)


void __fastcall FUN_00476490(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004758e0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

