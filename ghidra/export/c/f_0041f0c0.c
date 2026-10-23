// FUNCTION: PORT1111 0x0041f0c0
// name: FUN_0041f0c0
// sig: undefined FUN_0041f0c0(void * this, int param_1)


void __thiscall FUN_0041f0c0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = param_1;
  iVar1 = *(int *)((int)this + 0x18);
  if ((iVar1 == 0) ||
     ((uint)(*(int *)((int)this + 0x20) - iVar1 >> 2) <=
      (uint)(*(int *)((int)this + 0x1c) - iVar1 >> 2))) {
    FUN_0041eeb0((void *)((int)this + 0x14),*(undefined4 **)((int)this + 0x1c),1,&param_1);
  }
  else {
    piVar2 = *(int **)((int)this + 0x1c);
    *piVar2 = param_1;
    *(int **)((int)this + 0x1c) = piVar2 + 1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  cVar4 = (char)((int)(*(ushort *)(iVar3 + 0x3c) & DAT_004e2050) >> ((byte)DAT_004e204c & 0x1f));
  if (cVar4 == '\x01') {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  else {
    if (cVar4 == '\x02') {
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      return;
    }
    if (cVar4 == '\x03') {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return;
    }
  }
  return;
}

