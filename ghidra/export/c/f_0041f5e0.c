// FUNCTION: PORT1111 0x0041f5e0
// name: FUN_0041f5e0
// sig: undefined FUN_0041f5e0(void * param_1)


void __fastcall FUN_0041f5e0(void *param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  if (*(short *)((int)param_1 + 0x2e) != -1) {
    iVar1 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x14) + 4) +
                    *(short *)((int)param_1 + 0x2e) * 4);
    FUN_004781f0(param_1,iVar1,&local_14,&local_18);
    SetRect(&local_10,(int)*(short *)(iVar1 + 6),(int)*(short *)(iVar1 + 8),
            (int)*(short *)(*(int *)(iVar1 + 0xc) + 8) + (int)*(short *)(iVar1 + 6),
            (int)*(short *)(*(int *)(iVar1 + 0xc) + 10) + (int)*(short *)(iVar1 + 8));
    SetRect((LPRECT)((int)param_1 + 0x18),local_14,local_18,
            (local_10.right - local_10.left) + local_14,(local_10.bottom - local_10.top) + local_18)
    ;
    *(byte *)((int)param_1 + 0x2c) = *(byte *)((int)param_1 + 0x2c) | 0x80;
  }
  return;
}

