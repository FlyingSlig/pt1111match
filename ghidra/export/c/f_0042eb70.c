// FUNCTION: PORT1111 0x0042eb70
// name: FUN_0042eb70
// sig: undefined FUN_0042eb70(void * this, int * param_1)


void __thiscall FUN_0042eb70(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint local_8;
  undefined4 local_4;
  
  iVar2 = FUN_00429690(DAT_004e2404,param_1,&local_8);
  if (iVar2 != 0) {
    iVar2 = FUN_00429b00(DAT_004e2404,&local_8);
    if ((iVar2 != 0) &&
       ((DAT_004e2681 == '\0' ||
        ((char)((int)(*(ushort *)(iVar2 + 0x3c) & DAT_004e2050) >> ((byte)DAT_004e204c & 0x1f)) ==
         '\x01')))) {
      FUN_0042e670(this);
      FUN_0042ea30((int)this);
      uVar1 = *(undefined4 *)((int)this + 0x24);
      *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x20);
      *(undefined4 *)((int)this + 0x24) = local_4;
      *(undefined4 *)((int)this + 0x2c) = uVar1;
      *(uint *)((int)this + 0x20) = local_8;
      FUN_0042e670(this);
    }
  }
  return;
}

