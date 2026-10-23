// FUNCTION: PORT1111 0x00495ee0
// name: FUN_00495ee0
// sig: undefined4 FUN_00495ee0(void * this, uchar * param_1, undefined4 param_2, undefined4 param_3)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_00495ee0(void *this,uchar *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined1 auStack_20 [4];
  undefined4 *local_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004babbb;
  local_c = ExceptionList;
  local_10 = DAT_004ddb0c;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x40) = param_3;
  *(undefined4 *)((int)this + 0x10) = 0;
  if (param_1 == (uchar *)0x0) {
    uVar3 = 0x80070057;
  }
  else {
    local_1c = operator_new(0x10);
    local_4 = 0;
    if (local_1c == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_004884d0(local_1c);
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)this + 0x20) = puVar4;
    bVar2 = FUN_004884f0(puVar4,param_1,0x80000000,1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (iVar5 = (**(code **)(**(int **)((int)this + 0x20) + 8))((int)this + 0x2c,8), iVar5 != 0)) {
      (**(code **)(**(int **)((int)this + 0x20) + 8))(auStack_20,4);
      uVar3 = 4;
      (**(code **)(**(int **)((int)this + 0x20) + 8))();
      (**(code **)(**(int **)((int)this + 0x20) + 8))(&local_4,4);
      pvVar6 = operator_new((int)local_c + 0xc);
      *(void **)((int)this + 0x24) = pvVar6;
      *(void **)((int)pvVar6 + 8) = local_c;
      *(undefined4 *)(*(int *)((int)this + 0x24) + 4) = uStack_14;
      **(undefined4 **)((int)this + 0x24) = uVar3;
      (**(code **)(**(int **)((int)this + 0x20) + 8))(*(int *)((int)this + 0x24) + 0xc,local_c);
      if (**(int **)((int)this + 0x24) == DAT_004ddab8) {
        puVar4 = operator_new(0x12);
        iVar5 = *(int *)((int)this + 0x24);
        *(undefined4 **)((int)this + 8) = puVar4;
        *puVar4 = *(undefined4 *)(iVar5 + 0xc);
        puVar4[1] = *(undefined4 *)(iVar5 + 0x10);
        puVar4[2] = *(undefined4 *)(iVar5 + 0x14);
        puVar4[3] = *(undefined4 *)(iVar5 + 0x18);
        *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(iVar5 + 0x1c);
        iVar5 = (**(code **)(**(int **)((int)this + 0x20) + 8))(&iStack_18,8);
        while (iVar5 != 0) {
          if (iStack_18 == DAT_004ddab4) {
            uVar3 = (**(code **)(**(int **)((int)this + 0x20) + 0x28))();
            *(undefined4 *)((int)this + 0x44) = uVar3;
            *(undefined4 *)((int)this + 0xc) = uStack_14;
            break;
          }
          iVar5 = (**(code **)(**(int **)((int)this + 0x20) + 8))(&iStack_18,8);
        }
        if (*(int *)((int)this + 0x44) != 0) {
          lVar1 = (ulonglong)*(uint *)((int)this + 0xc) * 10000000;
          uVar7 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),
                           (uint)*(ushort *)(*(int *)((int)this + 8) + 0xc) *
                           *(int *)(*(int *)((int)this + 8) + 4),0);
          *(undefined8 *)((int)this + 0x18) = uVar7;
          ExceptionList = local_c;
          return 0;
        }
      }
    }
    if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 8));
    }
    if (*(undefined4 **)((int)this + 0x20) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x20))(1);
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    uVar3 = 0x80004005;
  }
  ExceptionList = local_c;
  return uVar3;
}

