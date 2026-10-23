// FUNCTION: PORT1111 0x004789b0
// name: FUN_004789b0
// sig: undefined FUN_004789b0(void * this, int * param_1)


void __thiscall FUN_004789b0(void *this,int *param_1)

{
  int *piVar1;
  byte bVar2;
  
  piVar1 = param_1;
  bVar2 = *(byte *)((int)this + 0x2c);
  if (((bVar2 & 2) != 0) && ((bVar2 & 1) != 0)) {
    bVar2 = ((char)param_1 << 2 ^ bVar2) & 4 ^ bVar2;
    *(byte *)((int)this + 0x2c) = bVar2;
    if ((bVar2 & 4) != 0) {
      *(byte *)((int)this + 0x2c) = bVar2 | 0x80;
    }
    param_1 = (int *)**(int **)((int)this + 0x3c);
    if (param_1 != *(int **)((int)this + 0x3c)) {
      do {
        FUN_004789b0((void *)param_1[3],piVar1);
        FUN_0040ca50((int *)&param_1);
      } while (param_1 != *(int **)((int)this + 0x3c));
    }
  }
  return;
}

