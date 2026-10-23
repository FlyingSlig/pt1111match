// FUNCTION: PORT1111 0x00409c70
// name: FUN_00409c70
// sig: undefined FUN_00409c70(void * this, int * param_1, int * param_2)


void __thiscall FUN_00409c70(void *this,int *param_1,int *param_2)

{
  if (param_2 != *(int **)((int)this + 4)) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  *param_1 = *param_2;
  return;
}

