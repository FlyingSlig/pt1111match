// FUNCTION: PORT1111 0x0046f280
// name: FUN_0046f280
// sig: undefined FUN_0046f280(int * param_1)


void __fastcall FUN_0046f280(int *param_1)

{
  POINT *unaff_retaddr;
  RECT RStack_14;
  
  RStack_14.left = (LONG)&RStack_14.top;
  (**(code **)(*param_1 + 0x30))();
  PtInRect(&RStack_14,*unaff_retaddr);
  return;
}

