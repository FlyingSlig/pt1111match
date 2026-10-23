// FUNCTION: PORT1111 0x00441a80
// name: FUN_00441a80
// sig: int FUN_00441a80(int param_1, undefined4 param_2)


int FUN_00441a80(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 2000;
  switch(param_2) {
  case 0x3ee:
    return (100 < *(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x38)) + 0x7d4;
  case 0x3ef:
  case 0x3f1:
  case 0x3f6:
  case 0x3f9:
  case 0x3fa:
  case 0x408:
  case 0x409:
  case 0x40a:
  case 0x40b:
  case 0x40c:
  case 0x40d:
  case 0x40e:
  case 0x40f:
  case 0x410:
  case 0x411:
  case 0x412:
  case 0x413:
  case 0x414:
  case 0x415:
  case 0x416:
  case 0x417:
    goto switchD_00441a9a_caseD_3ef;
  case 0x3f0:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0xf4) + *(int *)(iVar2 + 0x74);
    if (iVar3 < 1) {
      return 0x7d4;
    }
    iVar3 = (*(int *)(iVar2 + 0x1b4) + *(int *)(iVar2 + 0x16c)) / iVar3;
    if (iVar3 < 6) {
      return 0x7d4;
    }
    return (iVar3 < 0xf) + 0x7d5;
  case 0x3f2:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0xf8) + *(int *)(iVar2 + 0x78);
    if (iVar3 < 1) {
      return 0x7d5;
    }
    iVar3 = (*(int *)(iVar2 + 0xf4) + *(int *)(iVar2 + 0x74)) / iVar3;
    bVar1 = iVar3 == 2;
    if (iVar3 < 2) {
      return 0x7d4;
    }
    goto LAB_00441bae;
  case 0x3f3:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0xfc) + *(int *)(iVar2 + 0x7c);
    if (iVar3 < 1) {
      return 0x7d5;
    }
    iVar3 = (*(int *)(iVar2 + 0xf4) + *(int *)(iVar2 + 0x74)) / iVar3;
    bVar1 = iVar3 == 3;
    if (iVar3 < 3) {
      return 0x7d4;
    }
LAB_00441bae:
    if (!bVar1) {
      return 0x7d5;
    }
    return 0x7d6;
  case 0x3f4:
    return 0x7d2 - (uint)(*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x208) != 0);
  case 0x3f5:
    iVar2 = *(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x1a4);
    if (iVar2 == 0) {
      return 0x7d3;
    }
    if (iVar2 < 10) {
      return 0x7d4;
    }
    return (iVar2 < 0x28) + 0x7d5;
  case 0x3f7:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar2 = FUN_00441790(*(int *)(iVar2 + 0x1b4) + *(int *)(iVar2 + 0x16c),
                         *(int *)(iVar2 + 0x128) + *(int *)(iVar2 + 0xa8),5);
    return iVar2;
  case 0x3f8:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    return (*(int *)(iVar2 + 0x4c) + *(int *)(iVar2 + 0x44) < *(int *)(iVar2 + 0x48)) + 0x7d1;
  case 0x3fb:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x130);
    iVar4 = *(int *)(iVar2 + 0xb0);
    iVar5 = 5;
    break;
  case 0x3fc:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x13c);
    iVar4 = *(int *)(iVar2 + 0xbc);
    iVar5 = 5;
    break;
  case 0x3fd:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x148);
    iVar4 = *(int *)(iVar2 + 200);
    iVar5 = 5;
    break;
  case 0x3fe:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x140);
    iVar4 = *(int *)(iVar2 + 0xc0);
    iVar5 = 5;
    break;
  case 0x3ff:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x138);
    iVar4 = *(int *)(iVar2 + 0xb8);
    iVar5 = 5;
    break;
  case 0x400:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x134);
    iVar4 = *(int *)(iVar2 + 0xb4);
    iVar5 = 3;
    break;
  case 0x401:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x14c);
    iVar4 = *(int *)(iVar2 + 0xcc);
    iVar5 = 3;
    break;
  case 0x402:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x150);
    iVar4 = *(int *)(iVar2 + 0xd0);
    iVar5 = 3;
    break;
  case 0x403:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x144);
    iVar4 = *(int *)(iVar2 + 0xc4);
    iVar5 = 3;
    break;
  case 0x404:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x164);
    iVar4 = *(int *)(iVar2 + 0xe4);
    iVar5 = 5;
    break;
  case 0x405:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x160);
    iVar4 = *(int *)(iVar2 + 0xe0);
    iVar5 = 5;
    break;
  case 0x406:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 0x15c);
    iVar4 = *(int *)(iVar2 + 0xdc);
    iVar5 = 10;
    break;
  case 0x407:
    iVar2 = *(int *)(DAT_004e26f0 + param_1 * 4);
    iVar3 = *(int *)(iVar2 + 300);
    iVar4 = *(int *)(iVar2 + 0xac);
    iVar5 = 0xf;
    break;
  case 0x418:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x70) < 1) + 0x7d1;
  case 0x419:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x74) < 1) + 0x7d1;
  case 0x41a:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x78) < 1) + 0x7d1;
  case 0x41b:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x7c) < 1) + 0x7d1;
  case 0x41c:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x80) < 1) + 0x7d1;
  case 0x41d:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x84) < 1) + 0x7d1;
  case 0x41e:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x88) < 1) + 0x7d1;
  case 0x41f:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x8c) < 1) + 0x7d1;
  case 0x420:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x90) < 1) + 0x7d1;
  case 0x421:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x94) < 1) + 0x7d1;
  case 0x422:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x98) < 1) + 0x7d1;
  case 0x423:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x9c) < 1) + 0x7d1;
  case 0x424:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x16c) < 1) + 0x7d1;
  case 0x425:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xa0) < 1) + 0x7d1;
  case 0x426:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xa4) < 1) + 0x7d1;
  case 0x427:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xa8) < 1) + 0x7d1;
  case 0x428:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xac) < 1) + 0x7d1;
  case 0x429:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x170) < 1) + 0x7d1;
  case 0x42a:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x174) < 1) + 0x7d1;
  case 0x42b:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x178) < 1) + 0x7d1;
  case 0x42c:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x17c) < 1) + 0x7d1;
  case 0x42d:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x180) < 1) + 0x7d1;
  case 0x42e:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x184) < 1) + 0x7d1;
  case 0x42f:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x188) < 1) + 0x7d1;
  case 0x430:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x18c) < 1) + 0x7d1;
  case 0x431:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 400) < 1) + 0x7d1;
  case 0x432:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x194) < 1) + 0x7d1;
  case 0x433:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x198) < 1) + 0x7d1;
  case 0x434:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x19c) < 1) + 0x7d1;
  case 0x435:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xb0) < 1) + 0x7d1;
  case 0x436:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xb4) < 1) + 0x7d1;
  case 0x437:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xb8) < 1) + 0x7d1;
  case 0x438:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xbc) < 1) + 0x7d1;
  case 0x439:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xc0) < 1) + 0x7d1;
  case 0x43a:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xc4) < 1) + 0x7d1;
  case 0x43b:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 200) < 1) + 0x7d1;
  case 0x43c:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xcc) < 1) + 0x7d1;
  case 0x43d:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xd0) < 1) + 0x7d1;
  case 0x43e:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xd4) < 1) + 0x7d1;
  case 0x43f:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xd8) < 1) + 0x7d1;
  case 0x440:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xdc) < 1) + 0x7d1;
  case 0x441:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xe0) < 1) + 0x7d1;
  case 0x442:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xe4) < 1) + 0x7d1;
  case 0x443:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x204) < 1) + 0x7d1;
  case 0x444:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0xe8) < 1) + 0x7d1;
  case 0x445:
    bVar1 = FUN_004225d0(*(int *)(DAT_004e26f0 + param_1 * 4));
    return 0x7d2 - (uint)(CONCAT31(extraout_var,bVar1) != 0);
  case 0x446:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x11c) < 1) + 0x7d1;
  case 0x447:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x1f0) < 1) + 0x7d1;
  case 0x448:
    return (*(int *)(*(int *)(DAT_004e26f0 + param_1 * 4) + 0x1b0) < 1) + 0x7d1;
  default:
    return 2000;
  }
  iVar2 = FUN_00441790(*(int *)(iVar2 + 0x1e8) + *(int *)(iVar2 + 0x1a0),iVar3 + iVar4,iVar5);
switchD_00441a9a_caseD_3ef:
  return iVar2;
}

