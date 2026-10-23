// FUNCTION: PORT1111 0x0043e600
// name: FUN_0043e600
// sig: undefined FUN_0043e600(void * param_1)


void __fastcall FUN_0043e600(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0043e0e0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

