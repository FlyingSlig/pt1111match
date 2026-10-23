// FUNCTION: PORT1111 0x0045fae0
// name: FUN_0045fae0
// sig: undefined FUN_0045fae0(void * param_1)


void __fastcall FUN_0045fae0(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_8;
  void *local_4;
  
  iVar2 = *(int *)((int)param_1 + 8);
  local_8 = (void *)0x0;
  if (0 < iVar2) {
    do {
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          local_4 = FUN_0045f710(param_1,local_8,iVar3);
          iVar2 = *(int *)((int)param_1 + 0x38);
          if ((iVar2 == 0) ||
             ((uint)(*(int *)((int)param_1 + 0x40) - iVar2 >> 2) <=
              (uint)(*(int *)((int)param_1 + 0x3c) - iVar2 >> 2))) {
            FUN_0045f4c0((void *)((int)param_1 + 0x34),*(undefined4 **)((int)param_1 + 0x3c),1,
                         &local_4);
          }
          else {
            puVar1 = *(undefined4 **)((int)param_1 + 0x3c);
            *puVar1 = local_4;
            *(undefined4 **)((int)param_1 + 0x3c) = puVar1 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)((int)param_1 + 8));
      }
      iVar2 = *(int *)((int)param_1 + 8);
      local_8 = (void *)((int)local_8 + 1);
    } while ((int)local_8 < iVar2);
  }
  return;
}

