// FUNCTION: PORT1111 0x004816f0
// name: FUN_004816f0
// sig: undefined FUN_004816f0(void * this, undefined4 param_1, POINT * param_2)


void __thiscall FUN_004816f0(void *this,undefined4 param_1,POINT *param_2)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  HWND hWnd;
  int iVar4;
  int iVar5;
  
  BVar2 = PtInRect((RECT *)((int)this + 0x48),*param_2);
  if (BVar2 != 0) {
    uVar3 = (**(code **)(*(int *)this + 8))(param_2);
    iVar1 = *(int *)((int)this + 0x2c);
    switch(uVar3) {
    case 0:
      FUN_00481540(this,0);
      break;
    case 1:
      FUN_00481600(this,0);
      break;
    case 2:
      FUN_00481540(this,1);
      break;
    case 3:
      FUN_00481600(this,1);
      break;
    case 4:
      iVar4 = (*(code *)**(undefined4 **)this)(param_2);
      FUN_00481480(this,iVar4);
      if (*(int **)((int)this + 0x68) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x68) + 0x28))();
      }
      break;
    case 5:
      *(undefined4 *)((int)this + 0x3c) = 1;
      hWnd = (HWND)FUN_0047c5a0(*(int *)((int)this + 0x10));
      SetCapture(hWnd);
      iVar4 = param_2->x - *(int *)((int)this + 0x58);
      iVar5 = param_2->y - *(int *)((int)this + 0x5c);
      *(int *)((int)this + 0x70) = iVar5;
      *(int *)((int)this + 0x6c) = iVar4;
      param_2->x = param_2->x - iVar4;
      param_2->y = param_2->y - iVar5;
      iVar4 = (*(code *)**(undefined4 **)this)(param_2);
      FUN_00481480(this,iVar4);
    }
    if (iVar1 != *(int *)((int)this + 0x2c)) {
      *(undefined4 *)((int)this + 0x80) = 1;
    }
  }
  return;
}

