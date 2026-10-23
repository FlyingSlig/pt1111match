// FUNCTION: PORT1111 0x00465ec0
// name: FUN_00465ec0
// sig: bool FUN_00465ec0(undefined4 * param_1)


bool __fastcall FUN_00465ec0(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  pcVar1 = pcVar3 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  return pcVar3 == pcVar1;
}

