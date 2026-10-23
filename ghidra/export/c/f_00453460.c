// FUNCTION: PORT1111 0x00453460
// name: FUN_00453460
// sig: undefined4 FUN_00453460(void * this, int param_1, uint param_2)


undefined4 __thiscall FUN_00453460(void *this,int param_1,uint param_2)

{
  if (*(uint *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x38) < param_2) {
    FUN_00454c50(DAT_004e2414,(uchar *)"Dinheiro insuficiente.",param_1);
    return 0;
  }
  FUN_00422c30(*(void **)(DAT_004e26f0 + param_1 * 4),-param_2);
  *(undefined4 *)((int)this + 0x10) = 1;
  return 1;
}

