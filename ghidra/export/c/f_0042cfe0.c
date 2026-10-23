// FUNCTION: PORT1111 0x0042cfe0
// name: FUN_0042cfe0
// sig: undefined FUN_0042cfe0(int param_1)


void __fastcall FUN_0042cfe0(int param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = FUN_00429750(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),&local_10,&local_c);
  switch(iVar1) {
  case 1:
    *(undefined4 *)(param_1 + 0x44) = 1;
    *(undefined4 *)(param_1 + 0x50) = 1;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x44) = 1;
    goto LAB_0042d02e;
  default:
    *(undefined4 *)(param_1 + 0x44) = 0;
LAB_0042d02e:
    *(undefined4 *)(param_1 + 0x50) = 0;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  iVar1 = FUN_00429750(*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14),&local_8,&local_4);
  switch(iVar1) {
  default:
    *(undefined4 *)(param_1 + 0x4c) = 0;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x4c) = 1;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    goto LAB_0042d073;
  case 4:
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    goto LAB_0042d073;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
LAB_0042d073:
  *(int *)(param_1 + 0x38) = local_10 - local_c;
  *(int *)(param_1 + 0x3c) = local_8 - local_4;
  *(int *)(param_1 + 0x18) = local_8 + local_4;
  if (*(int *)(param_1 + 0x48) != 0) {
    *(int *)(param_1 + 0x18) = local_8 + local_4 + 1;
  }
  *(int *)(param_1 + 0x34) = local_10 + local_c;
  if (*(int *)(param_1 + 0x44) != 0) {
    *(int *)(param_1 + 0x34) = local_10 + local_c + -1;
  }
  *(undefined4 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}

