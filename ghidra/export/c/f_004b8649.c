// FUNCTION: PORT1111 0x004b8649
// name: Unwind@004b8649
// sig: undefined Unwind@004b8649(void)


void Unwind_004b8649(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffd;
    FUN_00465e40((undefined4 *)(unaff_EBP + -0x10));
    return;
  }
  return;
}

