// FUNCTION: PORT1111 0x00472f60
// name: FUN_00472f60
// sig: undefined4 FUN_00472f60(void * this, int param_1)


undefined4 __thiscall FUN_00472f60(void *this,int param_1)

{
  int iVar1;
  
  if (*(undefined4 **)((int)this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x38))(1);
  }
  if (*(HCURSOR *)((int)this + 0x4c) != (HCURSOR)0x0) {
    DestroyCursor(*(HCURSOR *)((int)this + 0x4c));
  }
  FUN_0046ec00((int)this);
  if ((*(int *)((int)this + 0x40) != 0) && (*(int *)((int)this + 0x94) != 0)) {
    (**(code **)(*(int *)this + 0x1c))();
    FUN_0047a740(*(void **)((int)this + 0x40),(uint)*(ushort *)(*(int *)((int)this + 0x94) + 4));
    *(undefined4 *)((int)this + 0x94) = 0;
  }
  iVar1 = FUN_0046f100(this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00472050(this,*(byte *)(param_1 + 0x98),*(byte *)(param_1 + 0x99),*(byte *)(param_1 + 0x9a));
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  return 1;
}

