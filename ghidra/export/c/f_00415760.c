// FUNCTION: PORT1111 0x00415760
// name: FUN_00415760
// sig: undefined FUN_00415760(void * this, int * param_1)


void __thiscall FUN_00415760(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_8 [2];
  
  FUN_00403d10(local_8,*param_1,param_1[1]);
  iVar1 = FUN_00415340(this,local_8,0);
  if (iVar1 == 0) {
    (**(code **)(*DAT_004e2afc + 4))();
    puVar2 = (undefined4 *)(DAT_004e240c + 0x40);
    if (*(int *)(DAT_004e240c + 0x40) != 0) {
      *(undefined4 *)(*(int *)(*(int *)(DAT_004e240c + 0x40) + 0x60) + 0x30) = 0;
    }
    *puVar2 = 0;
    return;
  }
  iVar1 = *(int *)((int)this + 0x54);
  if (iVar1 != 0) {
    switch(*(undefined4 *)((int)this + 0x50)) {
    case 1:
      (**(code **)(*DAT_004e2afc + 4))();
      if ((*(int *)((int)this + 0x40) == 0) || (*(int *)((int)this + 0x48) != 0)) {
        FUN_004134a0((int)this);
        return;
      }
      break;
    case 2:
    case 4:
    case 5:
    case 6:
      FUN_004134c0(this,iVar1,1);
      FUN_00401090(DAT_004e2afc);
      return;
    case 3:
      FUN_004134c0(this,iVar1,1);
      FUN_00401070(DAT_004e2afc);
      return;
    case 7:
      FUN_004134c0(this,iVar1,1);
      FUN_00401080(DAT_004e2afc);
      return;
    default:
      (**(code **)(*DAT_004e2afc + 4))();
      iVar1 = *(int *)((int)this + 0x40);
      if (iVar1 != 0) {
        if (*(int *)((int)this + 0x48) == 0) {
          return;
        }
        if (iVar1 != 0) {
          *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x30) = 0;
        }
      }
      *(undefined4 *)((int)this + 0x40) = 0;
    }
  }
  return;
}

