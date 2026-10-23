// FUNCTION: PORT1111 0x0049a358
// name: FUN_0049a358
// sig: int FUN_0049a358(short * param_1)


int __cdecl FUN_0049a358(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}

