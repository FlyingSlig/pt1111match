// FUNCTION: PORT1111 0x0044ef80
// name: FUN_0044ef80
// sig: int FUN_0044ef80(undefined4 param_1, char * param_2)


int __fastcall FUN_0044ef80(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *in_EAX;
  char cVar2;
  
  while( true ) {
    cVar2 = *param_2;
    cVar1 = *in_EAX;
    param_2 = param_2 + 1;
    in_EAX = in_EAX + 1;
    if (('`' < cVar2) && (cVar2 < '{')) {
      cVar2 = cVar2 + -0x20;
    }
    if (('`' < cVar1) && (cVar1 < '{')) {
      cVar1 = cVar1 + -0x20;
    }
    if (cVar2 == '\0') {
      return -(uint)(cVar1 != '\0');
    }
    if (cVar1 == '\0') {
      return 1;
    }
    if (cVar2 < cVar1) break;
    if (cVar1 < cVar2) {
      return 1;
    }
  }
  return -1;
}

