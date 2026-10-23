// FUNCTION: PORT1111 0x004764c0
// name: FUN_004764c0
// sig: undefined FUN_004764c0(void * param_1)


void __fastcall FUN_004764c0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004759e0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

