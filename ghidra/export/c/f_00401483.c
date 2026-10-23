// FUNCTION: PORT1111 0x00401483
// name: Catch@00401483
// sig: undefined * Catch@00401483(void)


undefined * Catch_00401483(void)

{
  void *pvVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  pvVar1 = operator_new(*(int *)(unaff_EBP + 8) + 1);
  *(void **)(unaff_EBP + 8) = pvVar1;
  return &DAT_004014a3;
}

