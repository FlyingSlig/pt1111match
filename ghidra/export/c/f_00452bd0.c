// FUNCTION: PORT1111 0x00452bd0
// name: FUN_00452bd0
// sig: undefined FUN_00452bd0(void * param_1, int param_2, void * param_3)


void __cdecl FUN_00452bd0(void *param_1,int param_2,void *param_3)

{
  void *this;
  void *this_00;
  int iVar1;
  void *pvVar2;
  uint local_4;
  
  pvVar2 = param_3;
  iVar1 = param_2;
  this_00 = param_1;
  if ((((*(int *)((int)param_1 + 0x44) != 0) &&
       (*(int *)(*(int *)((int)param_1 + 0x44) + 0x34) == *(int *)(param_2 + 0x34))) &&
      (*(int *)((int)param_1 + 0x40) != 0)) &&
     ((this = (void *)**(undefined4 **)(*(int *)(*(int *)((int)param_1 + 0x40) + 0x14) + 4),
      this != (void *)0x0 && (FUN_004520b0(this,&local_4,(uint *)&param_1), param_1 == pvVar2)))) {
    return;
  }
  FUN_004723f0(this_00,iVar1,0,(char)pvVar2,1);
  return;
}

