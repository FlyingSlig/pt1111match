// FUNCTION: PORT1111 0x00407810
// name: FUN_00407810
// sig: undefined FUN_00407810(void * param_1)


void __fastcall FUN_00407810(void *param_1)

{
  FUN_004077b0(param_1,0);
  if (*(int **)((int)param_1 + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x44) + 0x2c))();
    FUN_00489080();
    if (*(undefined4 **)((int)param_1 + 0x44) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x44))(1);
      *(undefined4 *)((int)param_1 + 0x44) = 0;
    }
  }
  if (*(int **)((int)param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x48) + 0x2c))();
    FUN_00489080();
    if (*(undefined4 **)((int)param_1 + 0x48) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x48))(1);
      *(undefined4 *)((int)param_1 + 0x48) = 0;
    }
  }
  if (*(int *)((int)param_1 + 0x40) != 0) {
    FUN_0041c0a0(*(int *)((int)param_1 + 0x40));
    return;
  }
  return;
}

