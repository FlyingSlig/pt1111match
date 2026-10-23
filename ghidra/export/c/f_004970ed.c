// FUNCTION: PORT1111 0x004970ed
// name: _JumpToContinuation
// sig: void _JumpToContinuation(void * param_1, EHRegistrationNode * param_2)


/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Library: Visual Studio 2003 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00497116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}

