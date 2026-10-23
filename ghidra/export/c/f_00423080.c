// FUNCTION: PORT1111 0x00423080
// name: FUN_00423080
// sig: undefined FUN_00423080(void * this, int param_1, int param_2, int param_3)


void __thiscall FUN_00423080(void *this,int param_1,int param_2,int param_3)

{
  HWND pHVar1;
  int iVar2;
  UINT UVar3;
  int iVar4;
  WPARAM WVar5;
  int *piVar6;
  LPARAM LVar7;
  
  iVar2 = 1;
  if (param_2 != 0) {
    iVar2 = -1;
  }
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x48) == 4) {
      *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + iVar2;
      *(undefined4 *)(DAT_004e2410 + 0x89c) = 1;
      iVar4 = *(int *)((int)this + 0x34);
      goto LAB_004230e8;
    }
  }
  else if (*(int *)(param_1 + 0x48) == 4) {
    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + iVar2;
    *(undefined4 *)(DAT_004e2410 + 0x89c) = 1;
    iVar4 = *(int *)((int)this + 0x34);
LAB_004230e8:
    FUN_00442660(iVar4,(int *)0x3f8);
  }
  switch(*(undefined4 *)(param_1 + 0x2a0)) {
  case 1:
    FUN_00422e60(this,1,iVar2,param_3);
    if (param_3 == 0) {
      FUN_00422f10((int)this);
    }
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x418;
    break;
  case 2:
    FUN_00422e60(this,2,iVar2,param_3);
    if (param_3 == 0) {
      FUN_00422f10((int)this);
    }
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3f0);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3f2);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3f3);
    piVar6 = (int *)0x419;
    goto LAB_004235e2;
  case 3:
    FUN_00422e60(this,3,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3f2);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x41a;
    break;
  case 4:
    FUN_00422e60(this,4,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3f3);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x41b;
    break;
  case 5:
    FUN_00422e60(this,5,iVar2,param_3);
    if (param_3 == 0) {
      FUN_00422f10((int)this);
    }
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x41c;
    break;
  case 6:
    FUN_00422e60(this,6,iVar2,param_3);
    piVar6 = (int *)0x41d;
    goto LAB_004235e2;
  case 7:
    FUN_00422e60(this,7,iVar2,param_3);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x41e;
    break;
  case 8:
    FUN_00422e60(this,8,iVar2,param_3);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x41f;
    break;
  case 9:
    FUN_00422e60(this,9,iVar2,param_3);
    piVar6 = (int *)0x420;
    goto LAB_004235e2;
  case 10:
    FUN_00422e60(this,10,iVar2,param_3);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x421;
    break;
  case 0xb:
    FUN_00422e60(this,0xb,iVar2,param_3);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x422;
    break;
  case 0xc:
    FUN_00422e60(this,0xc,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x446);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x423;
    break;
  case 0xd:
    FUN_00422e60(this,0xd,iVar2,param_3);
    piVar6 = (int *)0x425;
    goto LAB_004235e2;
  case 0xe:
    FUN_00422e60(this,0xe,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x426);
    if (param_3 == 0) {
      FUN_00422f10((int)this);
    }
    goto switchD_00423103_default;
  case 0xf:
    FUN_00422e60(this,0xf,iVar2,param_3);
    if (param_3 == 0) {
      FUN_00422570(this,0);
    }
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3f7);
    piVar6 = (int *)0x427;
    goto LAB_004235e2;
  case 0x10:
    FUN_00422e60(this,0x10,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x428;
    break;
  case 0x11:
    FUN_00422e60(this,0x11,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x435;
    break;
  case 0x12:
    FUN_00422e60(this,0x12,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    piVar6 = (int *)0x436;
    goto LAB_004235e2;
  case 0x13:
    FUN_00422e60(this,0x13,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x437;
    break;
  case 0x14:
    FUN_00422e60(this,0x14,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x438;
    break;
  case 0x15:
    FUN_00422e60(this,0x15,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    piVar6 = (int *)0x439;
    goto LAB_004235e2;
  case 0x16:
    FUN_00422e60(this,0x16,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x43a;
    break;
  case 0x17:
    FUN_00422e60(this,0x17,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x43b;
    break;
  case 0x18:
    FUN_00422e60(this,0x18,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    piVar6 = (int *)0x43c;
    goto LAB_004235e2;
  case 0x19:
    FUN_00422e60(this,0x19,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x43d;
    break;
  case 0x1a:
    FUN_00422e60(this,0x1a,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x43e;
    break;
  case 0x1b:
    FUN_00422e60(this,0x1b,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    piVar6 = (int *)0x43f;
    goto LAB_004235e2;
  case 0x1c:
    FUN_00422e60(this,0x1c,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    piVar6 = (int *)0x440;
LAB_004235e2:
    iVar4 = *(int *)((int)this + 0x34);
    break;
  case 0x1d:
    FUN_00422e60(this,0x1d,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x441;
    break;
  case 0x1e:
    FUN_00422e60(this,0x1e,iVar2,param_3);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x407);
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x442;
    break;
  case 0x1f:
    FUN_00422e60(this,0x1f,iVar2,param_3);
    if (param_3 == 0) {
      iVar4 = *(int *)((int)this + 0x34);
      piVar6 = (int *)0x444;
      break;
    }
  default:
    goto switchD_00423103_default;
  }
  FUN_00442660(iVar4,piVar6);
switchD_00423103_default:
  iVar4 = *(int *)(param_1 + 0x2a4);
  if (iVar4 == 2) {
    if (param_3 == 0) {
      *(int *)((int)this + 0x174) = *(int *)((int)this + 0x174) + iVar2;
    }
    else {
      *(int *)((int)this + 0x1bc) = *(int *)((int)this + 0x1bc) + iVar2;
    }
    iVar4 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x42a;
LAB_00423669:
    FUN_00442660(iVar4,piVar6);
  }
  else {
    if (iVar4 == 3) {
      if (param_3 == 0) {
        *(int *)((int)this + 0x170) = *(int *)((int)this + 0x170) + iVar2;
        iVar4 = *(int *)((int)this + 0x34);
        piVar6 = (int *)0x429;
      }
      else {
        *(int *)((int)this + 0x1b8) = *(int *)((int)this + 0x1b8) + iVar2;
        iVar4 = *(int *)((int)this + 0x34);
        piVar6 = (int *)0x429;
      }
      goto LAB_00423669;
    }
    if (iVar4 == 4) {
      if (param_3 == 0) {
        *(int *)((int)this + 0x178) = *(int *)((int)this + 0x178) + iVar2;
        iVar4 = *(int *)((int)this + 0x34);
        piVar6 = (int *)0x42b;
      }
      else {
        *(int *)((int)this + 0x1c0) = *(int *)((int)this + 0x1c0) + iVar2;
        iVar4 = *(int *)((int)this + 0x34);
        piVar6 = (int *)0x42b;
      }
      goto LAB_00423669;
    }
  }
  if (*(int *)(param_1 + 0x2a8) == 1) {
    if (*(char *)(param_1 + 0x2ac) == '\0') {
      if (param_3 == 0) {
        *(int *)((int)this + 0x180) = *(int *)((int)this + 0x180) + iVar2;
      }
      else {
        *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + iVar2;
      }
      FUN_00442660(*(int *)((int)this + 0x34),(int *)0x42d);
      if (*(char *)(param_1 + 0x2ad) == '\0') {
        if (param_3 == 0) {
          *(int *)((int)this + 0x188) = *(int *)((int)this + 0x188) + iVar2;
        }
        else {
          *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + iVar2;
        }
        FUN_00442660(*(int *)((int)this + 0x34),(int *)0x42f);
        if (param_3 == 0) {
          *(int *)((int)this + 400) = *(int *)((int)this + 400) + iVar2;
          iVar4 = *(int *)((int)this + 0x34);
          piVar6 = (int *)0x431;
        }
        else {
          *(int *)((int)this + 0x1d8) = *(int *)((int)this + 0x1d8) + iVar2;
          iVar4 = *(int *)((int)this + 0x34);
          piVar6 = (int *)0x431;
        }
      }
      else {
        if (param_3 == 0) {
          *(int *)((int)this + 0x18c) = *(int *)((int)this + 0x18c) + iVar2;
        }
        else {
          *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + iVar2;
        }
        FUN_00442660(*(int *)((int)this + 0x34),(int *)0x430);
        if (param_3 == 0) {
          *(int *)((int)this + 0x194) = *(int *)((int)this + 0x194) + iVar2;
          iVar4 = *(int *)((int)this + 0x34);
          piVar6 = (int *)0x432;
        }
        else {
          *(int *)((int)this + 0x1dc) = *(int *)((int)this + 0x1dc) + iVar2;
          iVar4 = *(int *)((int)this + 0x34);
          piVar6 = (int *)0x432;
        }
      }
    }
    else {
      if (param_3 == 0) {
        *(int *)((int)this + 0x184) = *(int *)((int)this + 0x184) + iVar2;
      }
      else {
        *(int *)((int)this + 0x1cc) = *(int *)((int)this + 0x1cc) + iVar2;
      }
      FUN_00442660(*(int *)((int)this + 0x34),(int *)0x42e);
      if (*(char *)(param_1 + 0x2ad) == '\0') {
        if (param_3 == 0) {
          *(int *)((int)this + 0x188) = *(int *)((int)this + 0x188) + iVar2;
        }
        else {
          *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + iVar2;
        }
        FUN_00442660(*(int *)((int)this + 0x34),(int *)0x42f);
        if (param_3 == 0) {
          *(int *)((int)this + 0x198) = *(int *)((int)this + 0x198) + iVar2;
          iVar4 = *(int *)((int)this + 0x34);
          piVar6 = (int *)0x433;
        }
        else {
          *(int *)((int)this + 0x1e0) = *(int *)((int)this + 0x1e0) + iVar2;
          iVar4 = *(int *)((int)this + 0x34);
          piVar6 = (int *)0x433;
        }
      }
      else {
        if (param_3 == 0) {
          *(int *)((int)this + 0x18c) = *(int *)((int)this + 0x18c) + iVar2;
        }
        else {
          *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + iVar2;
        }
        FUN_00442660(*(int *)((int)this + 0x34),(int *)0x430);
        if (param_3 == 0) {
          *(int *)((int)this + 0x19c) = *(int *)((int)this + 0x19c) + iVar2;
        }
        else {
          *(int *)((int)this + 0x1e4) = *(int *)((int)this + 0x1e4) + iVar2;
        }
        iVar4 = *(int *)((int)this + 0x34);
        piVar6 = (int *)0x434;
      }
    }
    FUN_00442660(iVar4,piVar6);
  }
  switch(*(undefined4 *)(param_1 + 0x2a8)) {
  case 1:
    if (param_3 == 0) {
      *(int *)((int)this + 0x1a0) = *(int *)((int)this + 0x1a0) + iVar2;
      *(int *)((int)this + 0x1a4) = *(int *)((int)this + 0x1a4) + iVar2;
    }
    else {
      *(int *)((int)this + 0x1e8) = *(int *)((int)this + 0x1e8) + iVar2;
      *(int *)((int)this + 0x1ec) = *(int *)((int)this + 0x1ec) + iVar2;
    }
    FUN_00442660(*(int *)((int)this + 0x34),(int *)&DAT_000003fb);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3fc);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3fd);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3fe);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3ff);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x400);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x401);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x402);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x403);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x404);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x405);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x406);
    if (param_3 != 0) goto switchD_0042383b_caseD_2;
    iVar2 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x3f5;
    break;
  default:
    goto switchD_0042383b_caseD_2;
  case 3:
    if (param_3 == 0) {
      *(int *)((int)this + 0x16c) = *(int *)((int)this + 0x16c) + iVar2;
    }
    else {
      *(int *)((int)this + 0x1b4) = *(int *)((int)this + 0x1b4) + iVar2;
    }
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x424);
    FUN_00442660(*(int *)((int)this + 0x34),(int *)0x3f0);
    iVar2 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x3f7;
    break;
  case 5:
    if (param_3 == 0) {
      *(int *)((int)this + 0x17c) = *(int *)((int)this + 0x17c) + iVar2;
      iVar2 = *(int *)((int)this + 0x34);
      piVar6 = (int *)0x42c;
    }
    else {
      *(int *)((int)this + 0x1c4) = *(int *)((int)this + 0x1c4) + iVar2;
      iVar2 = *(int *)((int)this + 0x34);
      piVar6 = (int *)0x42c;
    }
    break;
  case 6:
    if (param_3 == 0) {
      *(int *)((int)this + 0x1a8) = *(int *)((int)this + 0x1a8) + iVar2;
    }
    else {
      *(int *)((int)this + 0x1f0) = *(int *)((int)this + 0x1f0) + iVar2;
    }
    iVar2 = *(int *)((int)this + 0x34);
    piVar6 = (int *)0x447;
  }
  FUN_00442660(iVar2,piVar6);
switchD_0042383b_caseD_2:
  if (((param_2 != 0) && (param_3 == 0)) && (DAT_004e0b1c == 0)) {
    if (*(int *)(param_1 + 0x2a0) == 1) {
      if (DAT_004e240c != 0) {
        WVar5 = *(WPARAM *)((int)this + 0x50);
        LVar7 = 0;
        UVar3 = 0x800a;
        pHVar1 = (HWND)(**(code **)(*DAT_004e2b10 + 0x3c))();
        PostMessageA(pHVar1,UVar3,WVar5,LVar7);
      }
    }
    else if (((DAT_004e240c != 0) && (*(int *)((int)this + 0x44) == 0)) &&
            (*(int *)((int)this + 0x1a8) == 0)) {
      WVar5 = *(WPARAM *)((int)this + 0x50);
      LVar7 = 1;
      UVar3 = 0x800a;
      pHVar1 = (HWND)(**(code **)(*DAT_004e2b10 + 0x3c))();
      PostMessageA(pHVar1,UVar3,WVar5,LVar7);
      return;
    }
  }
  return;
}

