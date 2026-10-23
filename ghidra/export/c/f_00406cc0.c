// FUNCTION: PORT1111 0x00406cc0
// name: FUN_00406cc0
// sig: undefined FUN_00406cc0(void * param_1)


void __fastcall FUN_00406cc0(void *param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  void *this_00;
  uint local_10;
  int local_c;
  
  iVar1 = *(int *)((int)param_1 + 0x10c) * 0x30 + 0x2b0 + *(int *)((int)param_1 + 0x3c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2c) != 0)) {
    local_10 = (int)*(short *)(*(int *)((int)param_1 + 0x2c) + 0x4e) - *(int *)(iVar1 + 0x20);
    local_c = (int)*(short *)(*(int *)((int)param_1 + 0x2c) + 0x4c) - *(int *)(iVar1 + 0x24);
    this = (void *)FUN_00429b00(DAT_004e2404,&local_10);
    if (this != (void *)0x0) {
      iVar2 = *(int *)(iVar1 + 0x28);
      local_10 = 0;
      if (0 < iVar2) {
        do {
          local_c = 0;
          if (0 < iVar2) {
            do {
              if ((*(int *)(*(int *)(iVar1 + 0x2c) + (iVar2 * local_c + local_10) * 4) != 0) &&
                 (this_00 = (void *)FUN_004267d0(this,(int *)&local_10), this_00 != (void *)0x0)) {
                FUN_00428460(this_00,-(uint)(param_1 != (void *)0x14) & (uint)param_1);
                FUN_0041f0c0(param_1,(int)this_00);
              }
              iVar2 = *(int *)(iVar1 + 0x28);
              local_c = local_c + 1;
            } while (local_c < iVar2);
          }
          iVar2 = *(int *)(iVar1 + 0x28);
          local_10 = local_10 + 1;
        } while ((int)local_10 < iVar2);
      }
    }
  }
  return;
}

