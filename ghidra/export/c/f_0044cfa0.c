// FUNCTION: PORT1111 0x0044cfa0
// name: FUN_0044cfa0
// sig: undefined FUN_0044cfa0(void * param_1)


void __fastcall FUN_0044cfa0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0044cac0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

