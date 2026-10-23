// FUNCTION: PORT1111 0x004b93bb
// name: Unwind@004b93bb
// sig: undefined Unwind@004b93bb(void)


void Unwind_004b93bb(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    FUN_00465e40((undefined4 *)(unaff_EBP + -0x14));
    return;
  }
  return;
}

