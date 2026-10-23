// FUNCTION: PORT1111 0x00479da0
// name: FUN_00479da0
// sig: undefined FUN_00479da0(void * this, ulonglong * param_1, int * param_2, int param_3, int param_4, LONG * param_5)


void __thiscall
FUN_00479da0(void *this,ulonglong *param_1,int *param_2,int param_3,int param_4,LONG *param_5)

{
  int iVar1;
  ulonglong *puVar2;
  bool bVar3;
  char cVar4;
  undefined3 extraout_var;
  LONG *pLVar5;
  tagRECT local_10;
  
  puVar2 = param_1;
  if ((*(int *)((int)this + 0x3c) != 0) &&
     (bVar3 = FUN_0046cea0(this,(int *)param_1,param_3,param_4,param_5,(int *)&param_5,&param_3,
                           &param_1,&param_4,&local_10), CONCAT31(extraout_var,bVar3) != 0)) {
    cVar4 = (**(code **)((int)*puVar2 + 0x10))();
    if (cVar4 == '\x0f') {
      iVar1 = *(int *)((int)this + 0x34);
      if (iVar1 == 1) {
        pLVar5 = (LONG *)(**(code **)(*(int *)this + 4))();
        FUN_00490d30(this,(uint *)param_1,local_10.left,(char *)local_10.top,(int)param_5,
                     param_3 + local_10.top,param_4,(uint)(param_5 != pLVar5));
      }
      else if (iVar1 == 2) {
        FUN_00492890(this,(uint *)param_1,local_10.left,local_10.top,(int)param_5,
                     local_10.top + param_3,param_4);
      }
      else if (iVar1 == 8) {
        FUN_00493fb0(this,(uint *)param_1,local_10.left,local_10.top,(int)param_5,
                     local_10.top + param_3,param_4);
      }
    }
    else if (cVar4 == '\x10') {
      switch(*(undefined4 *)((int)this + 0x34)) {
      case 1:
        pLVar5 = (LONG *)(**(code **)(*(int *)this + 4))();
        FUN_00490130(this,(uint *)param_1,local_10.left,(char *)local_10.top,(int)param_5,
                     param_3 + local_10.top,param_4,(uint)(param_5 != pLVar5));
        break;
      case 2:
        FUN_004923a0(this,(uint *)param_1,local_10.left,local_10.top,(int)param_5,
                     local_10.top + param_3,param_4);
        break;
      case 3:
        FUN_00492110(this,(uint *)param_1,local_10.left,(ushort *)local_10.top,param_5,
                     local_10.top + param_3,param_4);
        break;
      case 5:
        if (DAT_004e2c98 == 0) {
          FUN_00493800(this,(uint *)param_1,local_10.left,local_10.top,(int)param_5,
                       local_10.top + param_3,param_4);
        }
        else if (DAT_004e2c5c == 0) {
          FUN_00492d80(this,param_1,local_10.left,local_10.top,(int)param_5,local_10.top + param_3,
                       param_4);
        }
        else {
          FUN_00493270(this,param_1,local_10.left,local_10.top,(int)param_5,local_10.top + param_3,
                       param_4);
        }
        break;
      case 6:
        pLVar5 = (LONG *)(**(code **)(*(int *)this + 4))();
        FUN_00491930(this,param_1,local_10.left,local_10.top,param_5,param_3 + local_10.top,param_4,
                     (ushort *)(uint)(param_5 != pLVar5));
        break;
      case 7:
        pLVar5 = (LONG *)(**(code **)(*(int *)this + 4))();
        FUN_00491d30(this,param_1,local_10.left,local_10.top,param_5,param_3 + local_10.top,param_4,
                     (uint)(param_5 != pLVar5));
      }
    }
    FUN_0046b070(this,(int *)puVar2,param_2);
  }
  return;
}

