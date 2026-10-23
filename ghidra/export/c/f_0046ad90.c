// FUNCTION: PORT1111 0x0046ad90
// name: FUN_0046ad90
// sig: undefined4 FUN_0046ad90(void * this, undefined4 param_1)


undefined4 __thiscall FUN_0046ad90(void *this,undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar3 = (**(code **)(*(int *)this + 0x30))();
  if (iVar3 == 0) {
    return 0;
  }
  cVar2 = (**(code **)(*(int *)this + 0xc))();
  if (cVar2 == '\x10') {
    switch(param_1) {
    case 0:
      iVar1 = *(int *)this;
      iVar4 = (**(code **)(iVar1 + 8))();
      puVar5 = (ushort *)(**(code **)(iVar1 + 0x2c))(iVar3,0,iVar4 + -1);
      uVar6 = (uint)*puVar5;
      break;
    case 1:
      iVar1 = *(int *)this;
      iVar4 = (**(code **)(iVar1 + 8))();
      iVar4 = (**(code **)(*(int *)this + 4))(iVar4 + -1);
      puVar5 = (ushort *)(**(code **)(iVar1 + 0x2c))(iVar3,iVar4 + -1);
      uVar6 = (uint)*puVar5;
      break;
    case 2:
      puVar5 = (ushort *)(**(code **)(*(int *)this + 0x2c))(iVar3,0,0);
      uVar6 = (uint)*puVar5;
      break;
    case 3:
      iVar1 = *(int *)this;
      iVar4 = (**(code **)(iVar1 + 4))(0);
      puVar5 = (ushort *)(**(code **)(iVar1 + 0x2c))(iVar3,iVar4 + -1);
      *(uint *)((int)this + 0x1c) = (uint)*puVar5;
      (**(code **)(*(int *)this + 0x34))();
      return 1;
    case 4:
      iVar1 = *(int *)this;
      iVar4 = (**(code **)(iVar1 + 8))();
      iVar4 = (**(code **)(*(int *)this + 4))(iVar4 >> 1);
      puVar5 = (ushort *)(**(code **)(iVar1 + 0x2c))(iVar3,iVar4 >> 1);
      uVar6 = (uint)*puVar5;
      break;
    case 5:
      puVar5 = (ushort *)(**(code **)(*(int *)this + 0x2c))(iVar3,1,1);
      uVar6 = (uint)*puVar5;
      break;
    case 0xffffffff:
switchD_0046adc2_caseD_ffffffff:
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
      (**(code **)(*(int *)this + 0x34))();
      return 1;
    default:
      goto switchD_0046adc2_default;
    }
    goto LAB_0046af39;
  }
  cVar2 = (**(code **)(*(int *)this + 0xc))();
  if (cVar2 != '\b') goto switchD_0046adc2_default;
  switch(param_1) {
  case 0:
    iVar1 = *(int *)this;
    iVar4 = (**(code **)(iVar1 + 8))();
    pbVar7 = (byte *)(**(code **)(iVar1 + 0x2c))(iVar3,0,iVar4 + -1);
    break;
  case 1:
    iVar1 = *(int *)this;
    iVar4 = (**(code **)(iVar1 + 8))();
    iVar4 = (**(code **)(*(int *)this + 4))(iVar4 + -1);
    pbVar7 = (byte *)(**(code **)(iVar1 + 0x2c))(iVar3,iVar4 + -1);
    break;
  case 2:
    uVar9 = 0;
    uVar8 = 0;
    goto LAB_0046af2e;
  case 3:
    iVar1 = *(int *)this;
    iVar4 = (**(code **)(iVar1 + 4))(0);
    pbVar7 = (byte *)(**(code **)(iVar1 + 0x2c))(iVar3,iVar4 + -1);
    *(uint *)((int)this + 0x1c) = (uint)*pbVar7;
    (**(code **)(*(int *)this + 0x34))();
    return 1;
  case 4:
    iVar1 = *(int *)this;
    iVar4 = (**(code **)(iVar1 + 8))();
    iVar4 = (**(code **)(*(int *)this + 4))(iVar4 >> 1);
    pbVar7 = (byte *)(**(code **)(iVar1 + 0x2c))(iVar3,iVar4 >> 1);
    break;
  case 5:
    uVar9 = 1;
    uVar8 = 1;
LAB_0046af2e:
    pbVar7 = (byte *)(**(code **)(*(int *)this + 0x2c))(iVar3,uVar8,uVar9);
    break;
  case 0xffffffff:
    goto switchD_0046adc2_caseD_ffffffff;
  default:
    goto switchD_0046adc2_default;
  }
  uVar6 = (uint)*pbVar7;
LAB_0046af39:
  *(uint *)((int)this + 0x1c) = uVar6;
switchD_0046adc2_default:
  (**(code **)(*(int *)this + 0x34))();
  return 1;
}

