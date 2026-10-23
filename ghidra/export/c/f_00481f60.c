// FUNCTION: PORT1111 0x00481f60
// name: FUN_00481f60
// sig: undefined FUN_00481f60(undefined4 * param_1)


void __fastcall FUN_00481f60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c6908;
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_0047d9d0((void *)param_1[1],(int *)param_1[2]);
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[2])(1);
    }
    param_1[2] = 0;
  }
  return;
}

