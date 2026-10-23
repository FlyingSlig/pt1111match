// FUNCTION: PORT1111 0x00451010
// name: FUN_00451010
// sig: undefined4 FUN_00451010(void * param_1, char * param_2)


undefined4 __cdecl FUN_00451010(void *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  void *_Memory;
  char *pcVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int local_8;
  
  _Memory = param_1;
  pvVar6 = (void *)0x0;
  iVar7 = 0;
  if (param_1 == (void *)0x0) {
    return 0xffffff9a;
  }
  if (*(int *)((int)param_1 + 0x2c) == 1) {
    iVar7 = FUN_00450d40((int)param_1,0,0);
  }
  if (param_2 == (char *)0x0) {
    local_8 = 0;
  }
  else {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_8 = (int)pcVar3 - (int)(param_2 + 1);
  }
  iVar4 = (**(code **)((int)_Memory + 0xc))
                    (*(undefined4 *)((int)_Memory + 0x1c),*(undefined4 *)((int)_Memory + 0x20));
  if (iVar7 == 0) {
    for (puVar2 = *(undefined4 **)((int)_Memory + 0x24); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      if (((iVar7 == 0) && (puVar2[2] != 0)) &&
         (iVar5 = (**(code **)((int)_Memory + 8))
                            (*(undefined4 *)((int)_Memory + 0x1c),
                             *(undefined4 *)((int)_Memory + 0x20),puVar2 + 4,puVar2[2]),
         iVar5 != puVar2[2])) {
        iVar7 = -1;
      }
      pvVar6 = (void *)((int)pvVar6 + puVar2[2]);
    }
  }
  if (*(void **)((int)_Memory + 0x24) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)_Memory + 0x24));
  }
  if (iVar7 == 0) {
    param_1 = (void *)0x6054b50;
    iVar7 = (**(code **)((int)_Memory + 8))
                      (*(undefined4 *)((int)_Memory + 0x1c),*(undefined4 *)((int)_Memory + 0x20),
                       &param_1,4);
    if (iVar7 == 4) {
      param_1 = (void *)((uint)param_1 & 0xffff0000);
      iVar7 = (**(code **)((int)_Memory + 8))
                        (*(undefined4 *)((int)_Memory + 0x1c),*(undefined4 *)((int)_Memory + 0x20),
                         &param_1,2);
      if (iVar7 == 2) {
        param_1 = (void *)((uint)param_1 & 0xffff0000);
        iVar7 = (**(code **)((int)_Memory + 8))
                          (*(undefined4 *)((int)_Memory + 0x1c),*(undefined4 *)((int)_Memory + 0x20)
                           ,&param_1,2);
        if (iVar7 == 2) {
          param_1._0_2_ = (undefined2)*(undefined4 *)((int)_Memory + 0x40b0);
          iVar7 = (**(code **)((int)_Memory + 8))
                            (*(undefined4 *)((int)_Memory + 0x1c),
                             *(undefined4 *)((int)_Memory + 0x20),&param_1,2);
          if (iVar7 == 2) {
            param_1._0_2_ = (undefined2)*(undefined4 *)((int)_Memory + 0x40b0);
            iVar7 = (**(code **)((int)_Memory + 8))
                              (*(undefined4 *)((int)_Memory + 0x1c),
                               *(undefined4 *)((int)_Memory + 0x20),&param_1,2);
            if ((iVar7 == 2) &&
               (param_1 = pvVar6,
               iVar7 = (**(code **)((int)_Memory + 8))
                                 (*(undefined4 *)((int)_Memory + 0x1c),
                                  *(undefined4 *)((int)_Memory + 0x20),&param_1,4), iVar7 == 4)) {
              param_1 = (void *)(iVar4 - *(int *)((int)_Memory + 0x40ac));
              iVar7 = (**(code **)((int)_Memory + 8))
                                (*(undefined4 *)((int)_Memory + 0x1c),
                                 *(undefined4 *)((int)_Memory + 0x20),&param_1,4);
              if (iVar7 == 4) {
                param_1._0_2_ = (undefined2)local_8;
                iVar7 = (**(code **)((int)_Memory + 8))
                                  (*(undefined4 *)((int)_Memory + 0x1c),
                                   *(undefined4 *)((int)_Memory + 0x20),&param_1,2);
                if ((iVar7 == 2) && (local_8 != 0)) {
                  (**(code **)((int)_Memory + 8))
                            (*(undefined4 *)((int)_Memory + 0x1c),
                             *(undefined4 *)((int)_Memory + 0x20),param_2,local_8);
                }
              }
            }
          }
        }
      }
    }
  }
  (**(code **)((int)_Memory + 0x14))
            (*(undefined4 *)((int)_Memory + 0x1c),*(undefined4 *)((int)_Memory + 0x20));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

