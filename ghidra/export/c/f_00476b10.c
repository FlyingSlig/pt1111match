// FUNCTION: PORT1111 0x00476b10
// name: FUN_00476b10
// sig: undefined FUN_00476b10(int * param_1)


void __fastcall FUN_00476b10(int *param_1)

{
  undefined4 *puVar1;
  void *this;
  int *piVar2;
  int iVar3;
  int *local_4;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    this = *(void **)(DAT_004e2b14 + 0xf8);
    piVar2 = puVar1 + 0xf;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      local_4 = param_1;
      if (*(int *)((int)this + 0x20) != 0) {
        piVar2 = *(int **)(*(int *)((int)this + 0x14) + 4);
        local_4 = (int *)*piVar2;
        if (local_4 != piVar2) {
          do {
            iVar3 = FUN_00477810((void *)local_4[4],puVar1[0xd],0);
            if (iVar3 == 0) goto LAB_00476b7a;
            FUN_00413730((int *)&local_4);
          } while (local_4 != *(int **)(*(int *)((int)this + 0x14) + 4));
        }
      }
      FUN_00476880(this,(int)puVar1);
      (**(code **)*puVar1)(1);
    }
LAB_00476b7a:
    *param_1 = 0;
  }
  return;
}

