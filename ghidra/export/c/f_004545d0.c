// FUNCTION: PORT1111 0x004545d0
// name: FUN_004545d0
// sig: undefined FUN_004545d0(void * this, int * param_1)


void __thiscall FUN_004545d0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int local_8 [2];
  
  if ((*(int *)((int)this + 0x120) != *param_1) || (*(int *)((int)this + 0x124) != param_1[1])) {
    if (*(int *)((int)this + 0x11c) == 0) {
      if (*(int *)(DAT_004e2afc + 4) == 1) {
        FUN_00415760(DAT_004e240c,param_1);
      }
    }
    else {
      puVar1 = (undefined4 *)
               FUN_00403d10(local_8,*(int *)((int)this + 0x120),*(int *)((int)this + 0x124));
      FUN_00454140(*(void **)((int)this + 0x118),*(int *)((int)this + 0x128),
                   *(uint *)((int)this + 300),*puVar1,puVar1[1],*(int **)((int)this + 0x11c),'\x02')
      ;
    }
  }
  *(int *)((int)this + 0x120) = *param_1;
  *(int *)((int)this + 0x124) = param_1[1];
  return;
}

