// FUNCTION: PORT1111 0x00498201
// name: FUN_00498201
// sig: int * FUN_00498201(int * param_1, uint * param_2)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int * __cdecl FUN_00498201(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *local_24;
  int *local_20;
  
  if (param_1 == (int *)0x0) {
    piVar1 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    if (DAT_004e3568 == 3) {
      do {
        local_20 = (int *)0x0;
        if (param_2 < (uint *)0xffffffe1) {
          __lock(4);
          local_24 = (uint *)___sbh_find_block((int)param_1);
          if (local_24 != (uint *)0x0) {
            if (param_2 <= DAT_004e3554) {
              iVar2 = ___sbh_resize_block(local_24,(int)param_1,(int)param_2);
              if (iVar2 == 0) {
                local_20 = ___sbh_alloc_block(param_2);
                if (local_20 != (int *)0x0) {
                  puVar3 = (uint *)(param_1[-1] - 1U);
                  if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                    puVar3 = param_2;
                  }
                  _memcpy(local_20,param_1,(size_t)puVar3);
                  local_24 = (uint *)___sbh_find_block((int)param_1);
                  ___sbh_free_block(local_24,(int)param_1);
                }
              }
              else {
                local_20 = param_1;
              }
            }
            if (local_20 == (int *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_20 = HeapAlloc(DAT_004e3564,0,(SIZE_T)param_2);
              if (local_20 != (int *)0x0) {
                puVar3 = (uint *)(param_1[-1] - 1U);
                if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                  puVar3 = param_2;
                }
                _memcpy(local_20,param_1,(size_t)puVar3);
                ___sbh_free_block(local_24,(int)param_1);
              }
            }
          }
          FUN_00498369();
          if (local_24 == (uint *)0x0) {
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x1;
            }
            param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
            local_20 = HeapReAlloc(DAT_004e3564,0,param_1,(SIZE_T)param_2);
          }
        }
        if (local_20 != (int *)0x0) {
          return local_20;
        }
        if (DAT_004e2ebc == 0) {
          return (int *)0x0;
        }
        iVar2 = __callnewh((size_t)param_2);
      } while (iVar2 != 0);
    }
    else {
      do {
        piVar1 = (int *)0x0;
        if (param_2 < (uint *)0xffffffe1) {
          if (param_2 == (uint *)0x0) {
            param_2 = (uint *)0x1;
          }
          piVar1 = HeapReAlloc(DAT_004e3564,0,param_1,(SIZE_T)param_2);
        }
        if (piVar1 != (int *)0x0) {
          return piVar1;
        }
        if (DAT_004e2ebc == 0) {
          return (int *)0x0;
        }
        iVar2 = __callnewh((size_t)param_2);
      } while (iVar2 != 0);
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

