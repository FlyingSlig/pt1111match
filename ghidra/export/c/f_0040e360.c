// FUNCTION: PORT1111 0x0040e360
// name: FUN_0040e360
// sig: int FUN_0040e360(void * this, int param_1)


int __thiscall FUN_0040e360(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0047fd20(*(int *)((int)this + 0x18));
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
  case 2:
  case 7:
    break;
  default:
    iVar1 = FUN_00407600(this,param_1);
    break;
  case 0xc:
    switch(iVar1) {
    case 1:
      return 2;
    case 2:
      return (*(int *)(*(int *)((int)this + 0x34) + 0x128) != 0) + 3;
    case 3:
      return 3;
    case 4:
      return 4;
    }
  }
  return iVar1;
}

