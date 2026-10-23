// FUNCTION: PORT1111 0x004b87d6
// name: Unwind@004b87d6
// sig: undefined Unwind@004b87d6(void)


void Unwind_004b87d6(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    FUN_00465e40((undefined4 *)(unaff_EBP + 0xc));
    return;
  }
  return;
}

