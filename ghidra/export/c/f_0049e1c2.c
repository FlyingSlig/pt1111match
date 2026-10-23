// FUNCTION: PORT1111 0x0049e1c2
// name: __RTC_Initialize
// sig: undefined __RTC_Initialize(void)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2003 Release */

void __RTC_Initialize(void)

{
  undefined4 *local_20;
  
  for (local_20 = &DAT_004cc170; local_20 < &DAT_004cc170; local_20 = local_20 + 1) {
    if ((code *)*local_20 != (code *)0x0) {
      (*(code *)*local_20)();
    }
  }
  return;
}

