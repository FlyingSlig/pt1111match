// FUNCTION: PORT1111 0x0046cf10
// name: FUN_0046cf10
// sig: undefined FUN_0046cf10(void * this, ulonglong * param_1, int * param_2, int param_3, int param_4, LONG * param_5)


void __thiscall
FUN_0046cf10(void *this,ulonglong *param_1,int *param_2,int param_3,int param_4,LONG *param_5)

{
  ulonglong *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int *piVar10;
  int iVar11;
  LONG *pLVar12;
  ulonglong *local_1c;
  int local_18;
  uint *local_14;
  tagRECT local_10;
  
  piVar2 = param_2;
  puVar1 = param_1;
  iVar4 = FUN_0046cdd0(this,(int *)param_1,param_2,param_3,param_4,param_5,(int *)&param_2,&param_3,
                       &local_1c,&param_4,&param_1,(int *)&param_5,&local_14,&local_18,&local_10);
  if (iVar4 == 0) {
    return;
  }
  if (DAT_004e2c98 == 0) {
    if (piVar2 == (int *)0x0) {
      if (*(int *)((int)this + 0xc) == 2) {
        cVar3 = (**(code **)((int)*puVar1 + 0x10))();
        if (cVar3 == '\x10') {
          FUN_0048c730((uint *)local_1c,(int)param_2,param_3,param_4,(uint *)param_1,(int)param_5,
                       *(ushort *)((int)this + 0x18));
        }
        else {
          FUN_0048c8f0((uint *)local_1c,(int)param_2,param_3,param_4,(uint *)param_1,(int)param_5,
                       *(ushort *)((int)this + 0x18));
        }
        goto LAB_0046d411;
      }
      goto LAB_0046d32d;
    }
    cVar3 = (**(code **)((int)*puVar1 + 0x10))();
    if (cVar3 == '\x0f') {
      cVar3 = (**(code **)(*(int *)this + 0x10))();
      if (cVar3 == '\b') {
        if (*(int *)((int)this + 0x14) != 0) {
          FUN_0048bc20((uint *)local_1c,(uint *)param_1,(uint)param_2,param_3,param_4,(int)param_5,
                       local_14,local_18,(int)this);
        }
      }
      else if (cVar3 == '\x0f') {
        FUN_0048c210((uint *)local_1c,(uint *)param_1,(uint)param_2,param_3,param_4,(int)param_5,
                     local_14,local_18);
      }
      goto LAB_0046d411;
    }
    if (cVar3 != '\x10') {
      if (cVar3 == ' ') {
        cVar3 = (**(code **)(*(int *)this + 0x10))();
        if (cVar3 == '\b') {
          if (*(int *)((int)this + 0x14) != 0) {
            FUN_0048d810((uint *)local_1c,(int)param_1,(int)param_2,param_3,param_4,(int)param_5,
                         (int)local_14,local_18,this);
          }
        }
        else if (cVar3 == '\x10') {
          FUN_0048dac0((uint *)local_1c,(uint *)param_1,(int)param_2,param_3,param_4,(int)param_5,
                       local_14,local_18);
        }
      }
      goto LAB_0046d411;
    }
    cVar3 = (**(code **)(*(int *)this + 0x10))();
    if (cVar3 != '\b') {
      if (cVar3 == '\x10') {
        FUN_0048d2f0((uint *)local_1c,(uint *)param_1,(uint)param_2,param_3,param_4,(int)param_5,
                     local_14,local_18);
      }
      goto LAB_0046d411;
    }
  }
  else {
    if (piVar2 == (int *)0x0) {
      if (*(int *)((int)this + 0xc) == 2) {
        FUN_0048cab0(local_1c,(int)param_2,param_3,param_4,(int *)param_1,(int)param_5,
                     *(undefined2 *)((int)this + 0x18));
        goto LAB_0046d411;
      }
LAB_0046d32d:
      uVar6 = *(uint *)((int)this + 0x1c);
      cVar3 = (**(code **)((int)*puVar1 + 0xc))();
      if (uVar6 == 0xffffffff) {
        if (cVar3 == ' ') {
          iVar5 = (**(code **)(*(int *)this + 0x18))();
          puVar9 = param_1;
          piVar10 = param_2;
          iVar4 = param_3;
          iVar11 = param_4;
          pLVar12 = param_5;
          uVar6 = (**(code **)(*(int *)this + 0xc))();
          uVar6 = uVar6 & 0xff;
          uVar7 = (**(code **)((int)*puVar1 + 0xc))();
          FUN_0048b8c0(uVar7 & 0xff,(int *)local_1c,uVar6,(uint *)puVar9,(uint)piVar10,iVar4,iVar11,
                       (int)pLVar12,iVar5);
        }
        else {
          iVar4 = *(int *)((int)this + 0x14);
          puVar9 = param_1;
          piVar10 = param_2;
          iVar11 = param_3;
          iVar5 = param_4;
          pLVar12 = param_5;
          uVar6 = (**(code **)(*(int *)this + 0xc))();
          uVar6 = uVar6 & 0xff;
          uVar7 = (**(code **)((int)*puVar1 + 0xc))();
          FUN_0048b8c0(uVar7 & 0xff,(int *)local_1c,uVar6,(uint *)puVar9,(uint)piVar10,iVar11,iVar5,
                       (int)pLVar12,iVar4);
        }
      }
      else {
        if (cVar3 == ' ') {
          iVar4 = (**(code **)(*(int *)this + 0x18))();
          puVar9 = param_1;
          piVar10 = param_2;
          iVar11 = param_3;
          iVar5 = param_4;
          pLVar12 = param_5;
          uVar7 = (**(code **)(*(int *)this + 0xc))();
          uVar7 = uVar7 & 0xff;
          uVar8 = (**(code **)((int)*puVar1 + 0xc))();
        }
        else {
          iVar4 = *(int *)((int)this + 0x14);
          puVar9 = param_1;
          piVar10 = param_2;
          iVar11 = param_3;
          iVar5 = param_4;
          pLVar12 = param_5;
          uVar7 = (**(code **)(*(int *)this + 0xc))();
          uVar7 = uVar7 & 0xff;
          uVar8 = (**(code **)((int)*puVar1 + 0xc))();
        }
        FUN_0048b340(uVar8 & 0xff,(byte *)local_1c,uVar7,(ushort *)puVar9,(int)piVar10,iVar11,iVar5,
                     (int)pLVar12,uVar6,iVar4);
      }
      goto LAB_0046d411;
    }
    cVar3 = (**(code **)((int)*puVar1 + 0xc))();
    if (cVar3 != '\x10') {
      if (cVar3 == ' ') {
        cVar3 = (**(code **)(*(int *)this + 0x10))();
        if (cVar3 == '\b') {
          if (*(int *)((int)this + 0x14) != 0) {
            FUN_0048d810((uint *)local_1c,(int)param_1,(int)param_2,param_3,param_4,(int)param_5,
                         (int)local_14,local_18,this);
          }
        }
        else if (cVar3 == '\x10') {
          FUN_0048dac0((uint *)local_1c,(uint *)param_1,(int)param_2,param_3,param_4,(int)param_5,
                       local_14,local_18);
        }
      }
      goto LAB_0046d411;
    }
    cVar3 = (**(code **)(*(int *)this + 0x10))();
    if (cVar3 != '\b') {
      if (cVar3 == '\x10') {
        FUN_0048d160(local_1c,param_1,(uint)param_2,param_3,param_4,(int)param_5,(int *)local_14,
                     local_18);
      }
      goto LAB_0046d411;
    }
  }
  if (*(int *)((int)this + 0x14) != 0) {
    FUN_0048cb70((uint *)local_1c,(uint *)param_1,(uint)param_2,param_3,param_4,(int)param_5,
                 local_14,local_18,(int)this);
  }
LAB_0046d411:
  (**(code **)(*(int *)this + 0x34))();
  (**(code **)((int)*puVar1 + 0x34))();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x34))();
  }
  return;
}

