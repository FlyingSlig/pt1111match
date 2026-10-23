// FUNCTION: PORT1111 0x004b86cf
// name: Unwind@004b86cf
// sig: undefined Unwind@004b86cf(void)


void Unwind_004b86cf(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00465e40((undefined4 *)(unaff_EBP + 4));
    return;
  }
  return;
}

