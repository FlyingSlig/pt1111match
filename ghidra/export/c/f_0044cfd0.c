// FUNCTION: PORT1111 0x0044cfd0
// name: FUN_0044cfd0
// sig: undefined FUN_0044cfd0(void * param_1)


void __fastcall FUN_0044cfd0(void *param_1)

{
  int *piVar1;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b8a4e;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  FUN_0044c400((int)param_1);
  FUN_0047fe60((undefined4 *)((int)param_1 + 0x74));
  piVar1 = *(int **)((int)param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x50))(piVar1,0,0,0);
  }
  local_4._0_1_ = 1;
  FUN_0047fff0((undefined4 *)((int)param_1 + 0x74));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0044ba80((int *)((int)param_1 + 0x10));
  local_4 = 0xffffffff;
  FUN_0044cac0(param_1,&local_10,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}

