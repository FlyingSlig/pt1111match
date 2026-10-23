// FUNCTION: PORT1111 0x0044fea0
// name: FUN_0044fea0
// sig: undefined4 FUN_0044fea0(void * param_1)


undefined4 __cdecl FUN_0044fea0(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return 0xffffff9a;
  }
  if (*(int *)((int)param_1 + 0x9c) != 0) {
    FUN_0044fbf0((int)param_1);
  }
  (**(code **)((int)param_1 + 0x14))
            (*(undefined4 *)((int)param_1 + 0x1c),*(undefined4 *)((int)param_1 + 0x20));
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}

