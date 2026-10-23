// FUNCTION: PORT1111 0x00497a75
// name: report_failure
// sig: undefined report_failure(void)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* Library Function - Single Match
    _report_failure
   
   Library: Visual Studio 2003 Release */

void __cdecl report_failure(void)

{
  ___security_error_handler(1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(3);
}

