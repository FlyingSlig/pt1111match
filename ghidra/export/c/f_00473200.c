// FUNCTION: PORT1111 0x00473200
// name: FUN_00473200
// sig: undefined4 FUN_00473200(int * param_1)


undefined4 __fastcall FUN_00473200(int *param_1)

{
  HGDIOBJ pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iStack_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b9e96;
  local_c = ExceptionList;
  if (param_1[0x10] == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 0x30))(&local_1c);
  iVar2 = thunk_FUN_00466240(param_1 + 0x25,"");
  if (iVar2 != 0) {
    FUN_0046eca0(param_1);
    FUN_00470480(param_1);
    ExceptionList = pvStack_10;
    return 1;
  }
  if (param_1[0x2a] == 0) {
    if (param_1[0x11] == 0) {
      puVar4 = operator_new(0x78);
      puStack_8 = (undefined1 *)0x1;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_0047f360(puVar4);
      }
      param_1[0x11] = (int)puVar4;
      puVar4[5] = 1;
      puStack_8 = (undefined1 *)0xffffffff;
      iVar2 = FUN_0047eda0((void *)param_1[0x11],(uchar *)0x0,(char)DAT_004dd964,
                           iStack_18 - iStack_20,iStack_14 - local_1c,DAT_004dd960);
      if (iVar2 == 0) {
        if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)param_1[0x11])(1);
        }
        param_1[0x11] = 0;
        ExceptionList = pvStack_10;
        return 0;
      }
      iVar2 = param_1[0x11];
      pvVar3 = (void *)FUN_0047c5d0(param_1[0x12]);
      FUN_00477600(pvVar3,iVar2);
      FUN_0047a9a0((void *)param_1[0x10],*(undefined4 *)(param_1[0x11] + 0x34));
    }
    FUN_0046c280(*(void **)(param_1[0x11] + 4),0xc800,(int *)0x0);
    (**(code **)(**(int **)(param_1[0x11] + 4) + 0x3c))(0xc800);
    pvVar1 = (HGDIOBJ)(*(int **)(param_1[0x11] + 4))[8];
    if (pvVar1 == (HGDIOBJ)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1[0x11] + 4) + 0x84))();
      if (iVar2 != 0) {
        FUN_004705f0(param_1);
        (**(code **)(**(int **)(param_1[0x11] + 4) + 0x88))(iVar2);
      }
    }
    else {
      FUN_004728e0(param_1,pvVar1);
    }
  }
  else {
    if (param_1[0x28] == 0) {
      (**(code **)(*param_1 + 0x1c))();
      pvVar3 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x0;
      if (pvVar3 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_0048f920(pvVar3,(int)param_1,0);
      }
      puStack_8 = (undefined1 *)0xffffffff;
      param_1[0x28] = (int)puVar4;
      FUN_0047aa60((void *)param_1[0x10],(int)puVar4);
    }
    *(byte *)(param_1[0x10] + 0x2c) = *(byte *)(param_1[0x10] + 0x2c) | 0x80;
  }
  FUN_004786d0((void *)param_1[0x10],iStack_20,local_1c);
  iVar2 = thunk_FUN_00466240(param_1 + 0x25,"");
  if (iVar2 == 0) {
    if (param_1[0x16] != 0) {
      uVar5 = (**(code **)(*param_1 + 0x18))();
      ExceptionList = pvStack_10;
      return uVar5;
    }
  }
  else {
    (**(code **)(*param_1 + 0x1c))();
  }
  ExceptionList = pvStack_10;
  return 1;
}

