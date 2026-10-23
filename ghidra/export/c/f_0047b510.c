// FUNCTION: PORT1111 0x0047b510
// name: FUN_0047b510
// sig: undefined FUN_0047b510(void * this, int * param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, uint param_6)


void __thiscall
FUN_0047b510(void *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            uint param_6)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (0 < (int)param_6) {
    iVar2 = (**(code **)(*param_1 + 8))();
    iVar3 = (**(code **)(*param_1 + 4))();
    SetRect(this,0,0,iVar3 + -1,iVar2 + -1);
    if (((*(int *)((int)this + 4) <= param_5) && (param_5 <= *(int *)((int)this + 0xc))) &&
       (iVar2 = *(int *)((int)this + 8), param_4 <= iVar2)) {
      iVar3 = *(int *)this;
      iVar4 = param_4;
      if (param_4 < iVar3) {
        param_6 = param_6 + (param_4 - iVar3);
        iVar4 = iVar3;
      }
      if (iVar2 < (int)(iVar4 + -1 + param_6)) {
        param_6 = (iVar2 - iVar4) + 1;
      }
      if ((0 < (int)param_6) &&
         (puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x2c))(param_2,iVar4,param_5),
         0 < (int)param_6)) {
        uVar1 = (undefined2)param_4;
        for (uVar6 = param_6 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar5 = CONCAT22(uVar1,uVar1);
          puVar5 = puVar5 + 1;
        }
        for (uVar6 = (uint)((param_6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined2 *)puVar5 = uVar1;
          puVar5 = (undefined4 *)((int)puVar5 + 2);
        }
      }
    }
  }
  return;
}

