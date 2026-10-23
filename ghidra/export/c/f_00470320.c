// FUNCTION: PORT1111 0x00470320
// name: FUN_00470320
// sig: undefined4 FUN_00470320(void * this, int param_1)


undefined4 __thiscall FUN_00470320(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(undefined4 **)((int)this + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x38))(1);
  }
  if (*(HCURSOR *)((int)this + 0x4c) != (HCURSOR)0x0) {
    DestroyCursor(*(HCURSOR *)((int)this + 0x4c));
  }
  FUN_0046ec00((int)this);
  iVar1 = FUN_0046f100(this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  puVar2 = (undefined4 *)(param_1 + 0xac);
  puVar3 = (undefined4 *)((int)this + 0xac);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00466a50((void *)((int)this + 0x94),(undefined4 *)(param_1 + 0x94));
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  return 1;
}

