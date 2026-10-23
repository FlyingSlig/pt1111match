// FUNCTION: PORT1111 0x004b33ac
// name: _longjmp
// sig: void _longjmp(int * _Buf, int _Value)


/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    _longjmp
   
   Library: Visual Studio 2003 Release */

void __cdecl _longjmp(int *_Buf,int _Value)

{
  PVOID pvVar1;
  int iVar2;
  
  pvVar1 = (PVOID)_Buf[6];
  if (pvVar1 != ExceptionList) {
    __global_unwind2(pvVar1);
  }
  if (pvVar1 != (PVOID)0x0) {
    iVar2 = __rt_probe_read4_4();
    if ((iVar2 == 0) || (_Buf[8] != 0x56433230)) {
      __local_unwind2((int)pvVar1,_Buf[7]);
    }
    else if ((code *)_Buf[9] != (code *)0x0) {
      (*(code *)_Buf[9])(_Buf);
    }
  }
  FUN_0049759e();
                    /* WARNING: Could not recover jumptable at 0x004b3421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_Buf[5])();
  return;
}

