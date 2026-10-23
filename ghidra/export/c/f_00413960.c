// FUNCTION: PORT1111 0x00413960
// name: FUN_00413960
// sig: int FUN_00413960(undefined4 * param_1)


int __cdecl FUN_00413960(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_004e0b04;
  if (DAT_004e0b04 != DAT_004e0b08) {
    do {
      iVar1 = FUN_004663a0((void *)(*piVar2 + 4),param_1);
      if (iVar1 != 0) {
        return *piVar2;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != DAT_004e0b08);
  }
  return 0;
}

