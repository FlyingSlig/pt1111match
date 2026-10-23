// FUNCTION: PORT1111 0x00467850
// name: FUN_00467850
// sig: undefined4 FUN_00467850(void * this, undefined4 param_1, undefined4 param_2, int param_3, uint param_4)


undefined4 __thiscall
FUN_00467850(void *this,undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_88 [18];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  (**(code **)(*(int *)this + 0x5c))();
  puVar2 = auStack_88;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  auStack_88[0] = 0x7c;
  auStack_88[1] = 7;
  if (*(int *)((int)this + 0xac) == 0) {
    uStack_20 = param_4 | 0x40;
  }
  else {
    uStack_20 = param_4 | 0x840;
  }
  auStack_88[3] = param_1;
  auStack_88[2] = param_2;
  if (param_3 == 0) goto LAB_004679c4;
  auStack_88[1] = 0x1007;
  uStack_40 = 0x20;
  switch(param_3) {
  case 0x14:
    uStack_30 = 0xff0000;
    uStack_2c = 0xff00;
    uStack_28 = 0xff;
    uStack_3c = 0x40;
    uStack_34 = 0x18;
    break;
  case 0x15:
    uStack_24 = 0xff000000;
    uStack_30 = 0xff0000;
    uStack_2c = 0xff00;
    uStack_28 = 0xff;
    uStack_34 = 0x20;
    goto LAB_004679b9;
  default:
    goto switchD_004678e6_caseD_16;
  case 0x17:
    uStack_30 = 0xf800;
    uStack_2c = 0x7e0;
    uStack_28 = 0x1f;
    uStack_3c = 0x40;
    uStack_34 = 0x10;
    break;
  case 0x18:
    uStack_30 = 0x7c00;
    uStack_2c = 0x3e0;
    uStack_28 = 0x1f;
    uStack_3c = 0x40;
    uStack_34 = 0x10;
    break;
  case 0x1a:
    uStack_30 = 0xf00;
    uStack_2c = 0xf0;
    uStack_28 = 0xf;
    uStack_24 = 0xf000;
    uStack_34 = 0x10;
LAB_004679b9:
    uStack_3c = 0x41;
    break;
  case 0x1c:
  case 0x29:
    uStack_3c = 0x20;
  }
  *(int *)((int)this + 0x10) = param_3;
LAB_004679c4:
  iVar1 = (**(code **)(*DAT_004e2c1c + 0x18))(DAT_004e2c1c,auStack_88,(int)this + 0x2c,0);
  *(int *)((int)this + 0x28) = iVar1;
  if (-1 < iVar1) {
    FUN_004671b0((int)this);
    return 1;
  }
switchD_004678e6_caseD_16:
  return 0;
}

