// FUNCTION: PORT1111 0x00497ed4
// name: __onexit
// sig: _onexit_t __onexit(_onexit_t _Func)


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2003 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_00498436();
  p_Var1 = (_onexit_t)__onexit_lk();
  FUN_00497f06();
  return p_Var1;
}

