// FUNCTION: PORT1111 0x00452a50
// name: FUN_00452a50
// sig: undefined4 FUN_00452a50(int param_1, int param_2)


undefined4 __cdecl FUN_00452a50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  switch(*(undefined4 *)(*(int *)(iVar1 + 0x16c) + param_2 * 4)) {
  case 1:
    return *(undefined4 *)(iVar1 + 0xa0);
  case 2:
    return *(undefined4 *)(iVar1 + 0xa4);
  case 3:
    return *(undefined4 *)(iVar1 + 0xb0);
  default:
    return 0xffffffff;
  case 5:
    return *(undefined4 *)(param_1 + 0xdc);
  case 6:
    return *(undefined4 *)(param_1 + 0xd8);
  case 7:
    uVar2 = FUN_00412730(param_1);
    return uVar2;
  case 9:
    return *(undefined4 *)(param_1 + 0x120);
  }
}

