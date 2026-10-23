// FUNCTION: PORT1111 0x0040b990
// name: FUN_0040b990
// sig: undefined4 FUN_0040b990(void * this, undefined4 param_1, int param_2, undefined4 param_3, int param_4, undefined4 param_5)


undefined4 __thiscall
FUN_0040b990(void *this,undefined4 param_1,int param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(int *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x24) = param_5;
  *(int *)((int)this + 0x14) = param_4;
  if (param_2 == 0) {
    *(int *)((int)this + 0x14) = param_4 + -1;
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}

