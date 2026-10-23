// FUNCTION: PORT1111 0x0049fc56
// name: FUN_0049fc56
// sig: ulong * FUN_0049fc56(void)


ulong * FUN_0049fc56(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}

