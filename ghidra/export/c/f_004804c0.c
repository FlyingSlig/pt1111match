// FUNCTION: PORT1111 0x004804c0
// name: FUN_004804c0
// sig: bool FUN_004804c0(void * this, uint param_1, uint param_2, uint param_3, undefined4 * param_4)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FUN_004804c0(void *this,uint param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  HWND pHVar3;
  HDC hdc;
  int *piVar4;
  tagPAINTSTRUCT *ptVar5;
  tagRECT *lpRect;
  uint local_5c;
  uint local_58;
  tagRECT tStack_54;
  tagPAINTSTRUCT local_44;
  undefined4 local_4;
  
  piVar4 = *(int **)((int)this + 0x10);
  local_4 = DAT_004ddb0c;
  if (piVar4 != (int *)0x0) {
    if (param_1 == 0x87c6) {
      if (piVar4[9] == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = (uint)*(ushort *)(piVar4[9] + 0x1c);
      }
      if (uVar1 == param_2) {
        *(undefined4 *)((int)this + 0x10) = 0;
        (**(code **)(*piVar4 + 0x30))();
        (**(code **)(*(int *)this + 0x20))(piVar4,param_2,param_3);
        (**(code **)*piVar4)(1);
        return true;
      }
    }
    if ((piVar4 != (int *)0x0) && (param_1 != 0xf)) {
      if (param_1 == 0x87ca) {
        FUN_0047cc10(*(void **)((int)this + 0x24),param_3,param_2);
      }
      iVar2 = (**(code **)(**(int **)((int)this + 0x10) + 0xa0))(param_1,param_2,param_3,param_4);
      return iVar2 != 0;
    }
  }
  if (param_1 < 0x102) {
    if (param_1 != 0x101) {
      switch(param_1) {
      case 2:
        if (*(int *)((int)this + 0x24) != 0) {
          *(undefined4 *)(*(int *)((int)this + 0x24) + 0x38) = 0;
          (**(code **)(*(int *)this + 0x30))();
        }
        break;
      case 3:
      case 5:
        if ((*(int *)((int)this + 0x24) != 0) &&
           (iVar2 = FUN_0047c5f0(*(int *)((int)this + 0x24)), iVar2 != 0)) {
          piVar4 = (int *)FUN_0047c5f0(*(int *)((int)this + 0x24));
          (**(code **)(*piVar4 + 0x68))();
          return false;
        }
        break;
      case 7:
        (**(code **)(*(int *)this + 0x88))();
        return false;
      case 0xf:
        ptVar5 = &local_44;
        pHVar3 = (HWND)(**(code **)(*(int *)this + 0x4c))();
        hdc = BeginPaint(pHVar3,ptVar5);
        CopyRect(&tStack_54,&local_44.rcPaint);
        (**(code **)*DAT_004e2b20)();
        if (*(void **)((int)this + 0x24) == (void *)0x0) {
          lpRect = &tStack_54;
          pHVar3 = (HWND)(**(code **)(*(int *)this + 0x4c))();
          GetWindowRect(pHVar3,lpRect);
          PatBlt(hdc,0,0,tStack_54.right - tStack_54.left,tStack_54.bottom - tStack_54.top,0x42);
        }
        else {
          FUN_0047d790(*(void **)((int)this + 0x24),hdc,0);
        }
        (**(code **)(*DAT_004e2b20 + 4))();
        ptVar5 = &local_44;
        pHVar3 = (HWND)(**(code **)(*(int *)this + 0x4c))();
        EndPaint(pHVar3,ptVar5);
        if (*(int **)((int)this + 0x10) == (int *)0x0) {
          return true;
        }
        (**(code **)(**(int **)((int)this + 0x10) + 0xa0))(param_1,param_2,param_3,param_4);
        return true;
      case 0x14:
        *param_4 = 1;
        return true;
      case 0x20:
        DAT_004e2b20[1] = 0;
        return false;
      case 0x100:
        if ((*(void **)((int)this + 0x24) != (void *)0x0) && (*(int *)((int)this + 8) == 0)) {
          FUN_0047c350(*(void **)((int)this + 0x24),param_2,param_3);
          return true;
        }
      }
      return false;
    }
    if (*(int *)((int)this + 0x24) == 0) {
      return false;
    }
    if (*(int *)((int)this + 8) != 0) {
      return false;
    }
    (**(code **)(*(int *)this + 0x84))(param_2,param_3);
    return true;
  }
  if (0x203 < param_1) {
    if (param_1 == 0x204) {
      if (*(int *)((int)this + 0x24) == 0) {
        return true;
      }
      if (*(int *)((int)this + 8) != 0) {
        return true;
      }
      local_5c = param_3 & 0xffff;
      local_58 = param_3 >> 0x10;
      (**(code **)(*(int *)this + 0x8c))(param_2,&local_5c);
      return true;
    }
    if (param_1 != 0x205) {
      if (param_1 == 0x87ca) {
        FUN_0047cc10(*(void **)((int)this + 0x24),param_3,param_2);
        return true;
      }
      return false;
    }
    if (*(int *)((int)this + 0x24) == 0) {
      return true;
    }
    if (*(int *)((int)this + 8) != 0) {
      return true;
    }
    local_5c = param_3 & 0xffff;
    local_58 = param_3 >> 0x10;
    (**(code **)(*(int *)this + 0x90))(param_2,&local_5c);
    return true;
  }
  if (param_1 == 0x203) {
    if (*(void **)((int)this + 0x24) == (void *)0x0) {
      return true;
    }
    if (*(int *)((int)this + 8) != 0) {
      return true;
    }
    local_5c = param_3 & 0xffff;
    local_58 = param_3 >> 0x10;
    FUN_0047d200(*(void **)((int)this + 0x24),param_2,&local_5c,1);
    return true;
  }
  if (0x201 < param_1) {
    if (param_1 != 0x202) {
      return false;
    }
    if (*(void **)((int)this + 0x24) == (void *)0x0) {
      return true;
    }
    if (*(int *)((int)this + 8) != 0) {
      return true;
    }
    local_5c = param_3 & 0xffff;
    local_58 = param_3 >> 0x10;
    FUN_0047d2f0(*(void **)((int)this + 0x24),param_2,&local_5c);
    return true;
  }
  if (param_1 == 0x201) {
    if (*(void **)((int)this + 0x24) == (void *)0x0) {
      return true;
    }
    if (*(int *)((int)this + 8) != 0) {
      return true;
    }
    local_5c = param_3 & 0xffff;
    local_58 = param_3 >> 0x10;
    FUN_0047d200(*(void **)((int)this + 0x24),param_2,&local_5c,0);
    return true;
  }
  if (param_1 == 0x102) {
    if (*(int *)((int)this + 0x24) == 0) {
      return false;
    }
    if (*(int *)((int)this + 8) != 0) {
      return false;
    }
    (**(code **)(*(int *)this + 0x80))(param_2,param_3);
    return true;
  }
  if (param_1 != 0x200) {
    return false;
  }
  if (*(void **)((int)this + 0x24) == (void *)0x0) {
    return true;
  }
  if (*(int *)((int)this + 8) != 0) {
    return true;
  }
  local_5c = param_3 & 0xffff;
  local_58 = param_3 >> 0x10;
  FUN_0047d1d0(*(void **)((int)this + 0x24),param_2,&local_5c);
  return true;
}

