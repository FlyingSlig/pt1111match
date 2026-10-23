// FUNCTION: PORT1111 0x0047bd80
// name: FUN_0047bd80
// sig: undefined FUN_0047bd80(void * this, int * param_1, int param_2, int param_3, int * param_4)


void __thiscall FUN_0047bd80(void *this,int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  tagRECT *ptVar2;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar1 = FUN_00453c80(this,&local_10.left);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0xc);
    iVar1 = FUN_0047e1c0(*(void **)(iVar1 + 0xc),&local_10,(uint)*(byte *)(iVar1 + 0x10),
                         (uint)*(byte *)(iVar1 + 0x11));
    if (iVar1 == 0) {
      iVar1 = *param_1;
      if (param_4 != (int *)0x0) {
        (**(code **)(iVar1 + 0x28))
                  (*(undefined4 *)(*(int *)((int)this + 0xc) + 0xc),*param_4 + param_2,
                   param_4[1] + param_3,param_4);
        return;
      }
      ptVar2 = (tagRECT *)0x0;
      goto LAB_0047be77;
    }
  }
  if (param_4 != (int *)0x0) {
    local_20.left = *param_4;
    local_20.top = param_4[1];
    local_20.right = param_4[2];
    local_20.bottom = param_4[3];
    OffsetRect(&local_20,local_10.left,local_10.top);
    IntersectRect(&local_20,&local_20,&local_10);
    (**(code **)(*param_1 + 0x28))
              (*(undefined4 *)(*(int *)((int)this + 0xc) + 0xc),*param_4 + param_2,
               param_4[1] + param_3,&local_20);
    return;
  }
  iVar1 = *param_1;
  ptVar2 = &local_10;
LAB_0047be77:
  (**(code **)(iVar1 + 0x28))
            (*(undefined4 *)(*(int *)((int)this + 0xc) + 0xc),param_2,param_3,ptVar2);
  return;
}

