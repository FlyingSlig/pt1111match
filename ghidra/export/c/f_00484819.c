// FUNCTION: PORT1111 0x00484819
// name: FUN_00484819
// sig: undefined4 FUN_00484819(void)


undefined4 FUN_00484819(void)

{
  undefined4 *unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_EBX != unaff_EDI) {
    (**(code **)*unaff_EBX)(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}

