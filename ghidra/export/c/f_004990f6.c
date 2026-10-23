// FUNCTION: PORT1111 0x004990f6
// name: FUN_004990f6
// sig: undefined FUN_004990f6(DWORD param_1)


void FUN_004990f6(DWORD param_1)

{
  _ptiddata p_Var1;
  
  if (PTR_FUN_004ddb20 != (undefined *)0x0) {
    (*(code *)PTR_FUN_004ddb20)();
  }
  p_Var1 = __getptd();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  FUN_0049b55a(p_Var1);
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}

