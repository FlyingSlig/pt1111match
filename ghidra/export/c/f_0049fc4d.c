// FUNCTION: PORT1111 0x0049fc4d
// name: FUN_0049fc4d
// sig: int * FUN_0049fc4d(void)


int * FUN_0049fc4d(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}

