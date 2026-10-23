// FUNCTION: PORT1111 0x004b82ab
// name: Unwind@004b82ab
// sig: undefined Unwind@004b82ab(void)


void Unwind_004b82ab(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    FUN_00465e40((undefined4 *)(unaff_EBP + 4));
    return;
  }
  return;
}

