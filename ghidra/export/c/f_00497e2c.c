// FUNCTION: PORT1111 0x00497e2c
// name: __onexit_lk
// sig: undefined __onexit_lk(void)


/* Library Function - Single Match
    __onexit_lk
   
   Library: Visual Studio 2003 Release */

void __onexit_lk(void)

{
  size_t sVar1;
  int *piVar2;
  size_t sVar3;
  int unaff_EDI;
  
  sVar1 = __msize(DAT_004e458c);
  if (sVar1 < (uint)((int)DAT_004e4588 + (4 - (int)DAT_004e458c))) {
    sVar3 = 0x800;
    if (sVar1 < 0x800) {
      sVar3 = sVar1;
    }
    piVar2 = FUN_00498201(DAT_004e458c,(uint *)(sVar3 + sVar1));
    if (piVar2 == (int *)0x0) {
      piVar2 = FUN_00498201(DAT_004e458c,(uint *)(sVar1 + 0x10));
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    DAT_004e4588 = piVar2 + ((int)DAT_004e4588 - (int)DAT_004e458c >> 2);
    DAT_004e458c = piVar2;
  }
  *DAT_004e4588 = unaff_EDI;
  DAT_004e4588 = DAT_004e4588 + 1;
  return;
}

