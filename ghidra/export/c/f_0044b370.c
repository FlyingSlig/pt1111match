// FUNCTION: PORT1111 0x0044b370
// name: FUN_0044b370
// sig: uint FUN_0044b370(void * this, undefined4 param_1, int * param_2)


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x0044b3f6 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __thiscall FUN_0044b370(void *this,undefined4 param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EBX;
  int *unaff_retaddr;
  int *piVar4;
  int *piVar5;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined1 **ppuStack_48;
  int iStack_34;
  undefined1 *puStack_30;
  int *piStack_2c;
  int *piStack_28;
  int **ppiStack_24;
  int in_stack_ffffffe4;
  int aiStack_10 [4];
  
  piVar2 = param_2;
  ppiStack_24 = &param_2;
  piStack_28 = param_2;
  piStack_2c = (int *)0x44b387;
  (**(code **)(*param_2 + 0x28))();
  piStack_2c = aiStack_10;
  puStack_30 = &stack0xffffffe4;
  iStack_34 = 1;
  (**(code **)(*unaff_retaddr + 0xc))();
  piVar5 = piStack_2c;
  (**(code **)(*piStack_2c + 0x24))();
  ppuStack_48 = (undefined1 **)0x44b3b6;
  (**(code **)(*unaff_EBX + 8))();
  ppuStack_48 = &puStack_30;
  piStack_50 = (int *)0x44b3c5;
  piStack_4c = unaff_retaddr;
  (**(code **)(*unaff_retaddr + 0x18))();
  piStack_54 = *(int **)((int)this + 4);
  piStack_50 = piVar5;
  (**(code **)(*piStack_54 + 0x24))();
  piVar4 = *(int **)((int)this + 4);
  (**(code **)(*piVar4 + 0x24))(piVar4,piVar5);
  (**(code **)(*unaff_retaddr + 0x28))(unaff_retaddr);
  bVar1 = false;
  do {
    iVar3 = (**(code **)(in_stack_ffffffe4 + 0xc))(&stack0xffffffe4,1,&piStack_54,&piStack_4c);
    if ((iVar3 != 0) || (piStack_4c != (int *)0x1)) break;
    (**(code **)(*piStack_54 + 0x24))(piStack_54,&ppuStack_48);
    if ((piStack_50 == (int *)0x0) && (!bVar1)) {
      iVar3 = (**(code **)(**(int **)((int)this + 4) + 0x2c))
                        (*(int **)((int)this + 4),piVar5,piVar4);
      if (-1 < iVar3) {
        bVar1 = true;
      }
    }
    (**(code **)(*piVar4 + 8))(piVar4);
  } while (!bVar1);
  (**(code **)(in_stack_ffffffe4 + 8))(&stack0xffffffe4);
  (**(code **)(*piStack_54 + 8))(piStack_54);
  (**(code **)(iStack_34 + 8))(&iStack_34);
  (**(code **)(**(int **)((int)this + 4) + 0x10))(*(int **)((int)this + 4),piVar2);
  return bVar1 - 1 & 0x80004005;
}

