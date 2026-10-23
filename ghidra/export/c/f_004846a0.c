// FUNCTION: PORT1111 0x004846a0
// name: FUN_004846a0
// sig: undefined4 FUN_004846a0(void * this, int * param_1, uint param_2)


undefined4 __thiscall FUN_004846a0(void *this,int *param_1,uint param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  HWND hWnd;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  UINT Msg;
  WPARAM wParam;
  int *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004ba7c0;
  local_10 = ExceptionList;
  uVar9 = param_2 & 0xffff;
  piVar7 = (int *)((int)this + 0x14);
  local_14 = &stack0xffffffd4;
  ExceptionList = &local_10;
  *piVar7 = 0;
  piVar10 = (int *)(int)(short)(param_2 >> 0x10);
  DAT_004e2b24 = 0;
  local_18 = (undefined4 *)0x0;
  iVar5 = *(int *)(*(int *)((int)this + 0x18) + 0x1c);
  bVar1 = false;
  if (iVar5 == 0) {
    piVar4 = (int *)0xffffffff;
  }
  else {
    piVar4 = (int *)(uint)*(ushort *)(iVar5 + 0x1c);
  }
  param_2 = uVar9;
  local_1c = piVar10;
  puVar2 = &stack0xffffffd4;
  if (piVar10 == piVar4) {
    puVar2 = &stack0xffffffd4;
    if (param_1 != *(int **)((int)this + 8)) {
      puVar2 = &stack0xffffffd4;
      if (param_1 == *(int **)((int)this + 4)) goto LAB_0048472d;
      iVar5 = (**(code **)(*(int *)this + 0x10))(param_1,uVar9);
      puVar2 = local_14;
      if (iVar5 == 0) {
        ExceptionList = local_10;
        return 0;
      }
    }
    local_14 = puVar2;
    puVar2 = local_14;
    if (param_1 == *(int **)((int)this + 4)) {
LAB_0048472d:
      local_14 = puVar2;
      DAT_004e2b24 = 1;
      piVar7 = *(int **)(*(int *)((int)this + 0xc) + 4);
      piVar4 = (int *)*piVar7;
      piVar10 = *(int **)((int)this + 0x18);
      local_1c = piVar10;
      if (piVar4 != piVar7) {
        do {
          if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)piVar4[2])(1);
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)*(int *)(*(int *)((int)this + 0xc) + 4));
      }
      FUN_00419480(*(int *)((int)this + 0xc));
      (**(code **)(*(int *)this + 0x1c))(0);
      *(uint *)((int)this + 0x10) =
           (uint)*(ushort *)(*(int *)(*(int *)((int)this + 0x18) + 0x24) + 0x1c);
      if (piVar10[9] != 0) {
        *(undefined4 *)(piVar10[9] + 0x38) = 0;
      }
      (**(code **)(*piVar10 + 0x30))();
      (**(code **)(*(int *)this + 0xc))();
      local_8 = 0;
      if ((*(int **)((int)this + 0x18) != (int *)0x0) &&
         (iVar5 = FUN_00480380(*(int **)((int)this + 0x18)), iVar5 != 0)) {
        (**(code **)(**(int **)((int)this + 0x18) + 100))();
        uVar6 = FUN_00484819();
        return uVar6;
      }
      (**(code **)*piVar10)(1);
      local_1c = (int *)0x0;
      (**(code **)(**(int **)((int)this + 0x18) + 0x30))();
      if (*(undefined4 **)((int)this + 0x18) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)this + 0x18))(1);
      }
      *(undefined4 *)((int)this + 0x18) = 0;
      FUN_004840d0(this);
      ExceptionList = local_10;
      return 1;
    }
    if (param_1 == *(int **)((int)this + 8)) {
      piVar10 = (int *)((int)this + 0x10);
      FUN_00484330(this,piVar10,&local_1c,&param_2,piVar7);
      FUN_00484330(this,piVar10,&local_1c,&param_2,&local_18);
      piVar4 = local_1c;
      DAT_004e2b24 = 1;
      bVar1 = true;
      if (*piVar10 == -1) {
        if (local_18 != (undefined4 *)0x0) {
          (**(code **)*local_18)(1);
        }
        if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar7)(1);
        }
        *piVar7 = 0;
        iVar5 = *(int *)(*(int *)((int)this + 0x18) + 0x1c);
        if (iVar5 == 0) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = *(ushort *)(iVar5 + 0x1c);
        }
        wParam = *(WPARAM *)((int)this + 4);
        uVar9 = (uint)uVar3 << 0x10 | 1;
        Msg = 0x87cc;
        hWnd = (HWND)(**(code **)(*(int *)this + 0x44))();
        PostMessageA(hWnd,Msg,wParam,uVar9);
        ExceptionList = local_10;
        return 1;
      }
      local_1c = (int *)0xfffffffe;
      piVar10 = (int *)0xfffffffe;
      param_1 = piVar4;
      puVar2 = local_14;
    }
  }
  local_14 = puVar2;
  iVar5 = *(int *)(*(int *)((int)this + 0x18) + 0x1c);
  if (iVar5 == 0) {
    piVar7 = (int *)0xffffffff;
  }
  else {
    piVar7 = (int *)(uint)*(ushort *)(iVar5 + 0x1c);
  }
  if (piVar10 != piVar7) {
    (**(code **)(*(int *)this + 8))(&param_1,&param_2,&local_18);
    iVar5 = (**(code **)(*(int *)this + 0x2c))(param_1,piVar10);
    if (iVar5 != 0) {
      if (local_18 != (undefined4 *)0x0) {
        (**(code **)*local_18)(1);
      }
      ExceptionList = local_10;
      return 1;
    }
  }
  piVar7 = *(int **)((int)this + 0x18);
  puVar8 = local_18;
  if (!bVar1) {
    puVar8 = (undefined4 *)(**(code **)(*piVar7 + 4))();
  }
  FUN_00484570(this,*(undefined4 **)((int)this + 0x10),param_1,param_2,puVar8);
  iVar5 = *(int *)(*(int *)((int)this + 0x18) + 0x1c);
  local_8 = 2;
  if (iVar5 == 0) {
    piVar10 = (int *)0xffffffff;
  }
  else {
    piVar10 = (int *)(uint)*(ushort *)(iVar5 + 0x1c);
  }
  if (local_1c == piVar10) {
    iVar5 = (**(code **)(*(int *)this + 0x14))();
    if (iVar5 != 0) {
LAB_004849e4:
      local_8 = 0xffffffff;
      if (piVar7[9] != 0) {
        *(undefined4 *)(piVar7[9] + 0x38) = 0;
      }
      (**(code **)(*piVar7 + 0x30))();
      if ((*(int **)((int)this + 0x18) != (int *)0x0) &&
         (iVar5 = FUN_00480380(*(int **)((int)this + 0x18)), iVar5 != 0)) {
        (**(code **)(**(int **)((int)this + 0x18) + 100))();
        *(uint *)((int)this + 0x10) =
             (uint)*(ushort *)(*(int *)(*(int *)((int)this + 0x18) + 0x24) + 0x1c);
        (**(code **)*piVar7)(1);
        (**(code **)(**(int **)((int)this + 0x18) + 0x68))();
        ExceptionList = local_10;
        return 1;
      }
      (**(code **)*piVar7)(1);
      (**(code **)(**(int **)((int)this + 0x18) + 0x30))();
      if (*(undefined4 **)((int)this + 0x18) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)this + 0x18))(1);
      }
      *(undefined4 *)((int)this + 0x18) = 0;
      FUN_004840d0(this);
      ExceptionList = local_10;
      return 1;
    }
  }
  else {
    iVar5 = (**(code **)(*(int *)this + 0x18))(param_1,param_2);
    if (iVar5 != 0) goto LAB_004849e4;
    *(int **)((int)this + 0x18) = piVar7;
  }
  ExceptionList = local_10;
  return 0;
}

