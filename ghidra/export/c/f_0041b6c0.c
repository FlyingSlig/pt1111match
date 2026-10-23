// FUNCTION: PORT1111 0x0041b6c0
// name: FUN_0041b6c0
// sig: undefined4 FUN_0041b6c0(int * param_1)


undefined4 __fastcall FUN_0041b6c0(int *param_1)

{
  short sVar1;
  int iVar2;
  void *this;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = FUN_0042aab0(param_1[10]);
  param_1[0xf] = iVar2;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x28) == 0) {
      iVar2 = FUN_004750b0(*(int *)(DAT_004e2b14 + 0xf8));
      FUN_00475080(iVar2);
    }
    iVar2 = FUN_00475080(*(int *)(DAT_004e2b14 + 0xf8));
    param_1[0xe] = iVar2;
    if (iVar2 != 0) {
      FUN_004296c0(param_1[0xb],param_1[0xc],(int *)&local_10,&local_c);
      iVar2 = FUN_00429b00(DAT_004e2404,&local_10);
      param_1[0x10] = iVar2;
      local_10 = local_10 - *(int *)(param_1[0xf] + 0x4c);
      local_c = local_c - *(int *)(param_1[0xf] + 0x50);
      this = (void *)FUN_00429b00(DAT_004e2404,&local_10);
      if (this != (void *)0x0) {
        local_8 = *(int *)(param_1[0xf] + 0x54) + -1;
        local_4 = local_8;
        iVar2 = FUN_004267d0(this,&local_8);
        if (iVar2 != 0) {
          sVar1 = *(short *)(param_1[0xe] + 0x42);
          param_1[0xb] = param_1[0xb] - (int)*(short *)(param_1[0xe] + 0x40);
          param_1[0xc] = param_1[0xc] - (int)sVar1;
          if ((void *)param_1[0x10] == (void *)0x0) {
            return 0;
          }
          FUN_00428170((void *)param_1[0x10],param_1);
          FUN_0042bda0((int)DAT_004e2404);
          (**(code **)(*param_1 + 0x20))();
          (**(code **)(*param_1 + 4))();
          return 1;
        }
      }
      param_1[0x10] = 0;
    }
  }
  return 0;
}

