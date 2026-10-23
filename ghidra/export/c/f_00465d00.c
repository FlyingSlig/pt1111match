// FUNCTION: PORT1111 0x00465d00
// name: FUN_00465d00
// sig: int FUN_00465d00(undefined4 * param_1)


int __fastcall FUN_00465d00(undefined4 *param_1)

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
  return (int)pcVar3 - (int)pcVar1;
}

