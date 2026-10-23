// FUNCTION: PORT1111 0x004861c0
// name: FUN_004861c0
// sig: undefined4 FUN_004861c0(void * this, uchar * param_1)


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall FUN_004861c0(void *this,uchar *param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  void *pvVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uStack_34;
  char acStack_30 [32];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004ba7fb;
  pvStack_c = ExceptionList;
  uVar9 = 0;
  local_10 = DAT_004ddb0c;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)((int)this + 4))(1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(void **)((int)this + 8) == (void *)0x0) {
    puVar4 = operator_new(0x10);
    uStack_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_004884d0(puVar4);
    }
    uStack_4 = 0xffffffff;
    *(undefined4 **)((int)this + 4) = puVar4;
    bVar3 = FUN_004884f0(puVar4,param_1,0x80000000,1);
    uVar6 = 0;
    if (CONCAT31(extraout_var,bVar3) != 0) {
      puVar1 = (uint *)((int)this + 0xc);
      (**(code **)(**(int **)((int)this + 4) + 8))(puVar1,4);
      pvVar5 = operator_new(*puVar1 * 0x22);
      *(void **)((int)this + 8) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        (**(code **)(**(int **)((int)this + 4) + 8))((char *)((int)this + 0x10),1);
        param_1 = (uchar *)0x0;
        if (*puVar1 != 0) {
          do {
            (**(code **)(**(int **)((int)this + 4) + 8))
                      (&uStack_34,(int)*(char *)((int)this + 0x10));
            *(undefined4 *)(uVar9 * 0x22 + *(int *)((int)this + 8)) = uStack_34;
            pcVar7 = acStack_30;
            pcVar8 = (char *)(*(int *)((int)this + 8) + 4 + uVar9 * 0x22);
            do {
              cVar2 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              *pcVar8 = cVar2;
              pcVar8 = pcVar8 + 1;
            } while (cVar2 != '\0');
            param_1 = param_1 + 1;
            uVar9 = (uint)param_1 & 0xffff;
          } while (uVar9 < *puVar1);
        }
        uVar6 = 1;
      }
    }
    ExceptionList = pvStack_c;
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 8));
}

