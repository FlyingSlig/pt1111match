// FUNCTION: PORT1111 0x004426d0
// name: FUN_004426d0
// sig: undefined FUN_004426d0(void * this, int param_1, int param_2, int param_3, int param_4)


void __thiscall FUN_004426d0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x2a8) != 9) && (*(int *)(param_1 + 0x2a8) == 6)) {
    iVar1 = 0;
    if (*(int *)(param_3 + 0x34) == 1) {
      iVar1 = 0x32;
    }
    else if (*(int *)(param_3 + 0x34) == 2) {
      iVar1 = -0x32;
    }
    if (*(int *)(param_1 + 0x14) == 0x55) {
      iVar1 = 0;
    }
    if (param_4 != 0) {
      iVar1 = -iVar1;
    }
    FUN_00444020(*(void **)((int)this + 4),(int)*(short *)(param_2 + 0x4e),
                 (int)*(short *)(param_2 + 0x4c),iVar1,1);
    switch(*(undefined4 *)(param_1 + 0x14)) {
    case 0x2d:
    case 0x4a:
      iVar1 = 0x14;
      break;
    case 0x2e:
    case 0x4b:
      iVar1 = 0xb4;
      break;
    case 0x2f:
    case 0x4f:
      iVar1 = 100;
      break;
    default:
      iVar1 = -100;
      break;
    case 0x35:
    case 0x36:
    case 0x50:
    case 0x51:
      iVar1 = 10;
    }
    if (param_4 != 0) {
      iVar1 = -iVar1;
    }
    FUN_00444020(*(void **)(param_3 + 0x2c),(int)*(short *)(param_2 + 0x4e),
                 (int)*(short *)(param_2 + 0x4c),iVar1,10);
    FUN_00442660(*(int *)(param_3 + 0x34),(int *)0x445);
  }
  return;
}

