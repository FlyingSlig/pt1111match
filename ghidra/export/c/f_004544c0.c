// FUNCTION: PORT1111 0x004544c0
// name: FUN_004544c0
// sig: undefined FUN_004544c0(void * this, int * param_1, byte param_2, int param_3)


void __thiscall FUN_004544c0(void *this,int *param_1,byte param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_8 [2];
  
  if (param_3 == 0) {
    puVar2 = (undefined4 *)FUN_00403d10(local_8,*param_1,param_1[1]);
    *(undefined4 *)((int)this + 0x128) = *puVar2;
    *(undefined4 *)((int)this + 300) = puVar2[1];
    *(int *)((int)this + 0x120) = *param_1;
    *(int *)((int)this + 0x124) = param_1[1];
    if ((param_2 & 8) == 0) {
      if ((param_2 & 4) == 0) {
        *(undefined4 *)((int)this + 0x11c) = 1;
      }
      else {
        *(undefined4 *)((int)this + 0x11c) = 2;
      }
      *(undefined4 *)(*(int *)((int)this + 0x118) + 0x14) = 1;
      puVar2 = (undefined4 *)
               FUN_00403d10(local_8,*(int *)((int)this + 0x120),*(int *)((int)this + 0x124));
      FUN_00454140(*(void **)((int)this + 0x118),*(int *)((int)this + 0x128),
                   *(uint *)((int)this + 300),*puVar2,puVar2[1],*(int **)((int)this + 0x11c),'\x01')
      ;
    }
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0x118) + 0x14) = 1;
    piVar1 = (int *)FUN_004537d0(*param_1,param_1[1]);
    if (piVar1 != (int *)0x0) {
      FUN_00454010(*(void **)((int)this + 0x118),piVar1);
      return;
    }
  }
  return;
}

