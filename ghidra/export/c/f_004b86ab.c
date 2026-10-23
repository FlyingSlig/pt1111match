// FUNCTION: PORT1111 0x004b86ab
// name: Unwind@004b86ab
// sig: undefined Unwind@004b86ab(void)


void Unwind_004b86ab(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00465e40((undefined4 *)(unaff_EBP + 8));
    return;
  }
  return;
}

