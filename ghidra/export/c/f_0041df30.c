// FUNCTION: PORT1111 0x0041df30
// name: FUN_0041df30
// sig: void * FUN_0041df30(void * this, void * param_1, int param_2)


void * __thiscall FUN_0041df30(void *this,void *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uchar *extraout_ECX;
  uchar *puVar3;
  int *piVar4;
  
  if (*(int *)((int)this + 100) != 0) {
    if (param_2 == 0) {
      piVar1 = *(int **)((int)this + 0x60);
      piVar4 = (int *)piVar1[1];
      puVar3 = this;
    }
    else {
      FUN_0041dd70((int)this + 0x5c);
      piVar1 = *(int **)((int)this + 0x60);
      puVar3 = extraout_ECX;
      piVar4 = piVar1;
    }
    if (piVar4 != (int *)*piVar1) {
      do {
        piVar1 = (int *)piVar4[1];
        FUN_00466b20(&stack0xffffffe8,piVar1 + 2);
        iVar2 = FUN_0041d450(this,puVar3);
        if (iVar2 < 1) break;
        puVar3 = (uchar *)(iVar2 + -1);
        if ((*(uint *)((int)this + 0x68) & 1 << ((byte)puVar3 & 0x1f)) != 0) {
          FUN_00466b20(param_1,piVar1 + 2);
          return param_1;
        }
        piVar4 = piVar1;
        if ((param_2 != 0) && (piVar4 = (int *)*piVar1, piVar1 != *(int **)((int)this + 0x60))) {
          *(int **)piVar1[1] = piVar4;
          *(int *)(*piVar1 + 4) = piVar1[1];
          FUN_00465e40(piVar1 + 2);
                    /* WARNING: Subroutine does not return */
          _free(piVar1);
        }
      } while (*(int *)((int)this + 100) != 0);
    }
  }
  FUN_00466af0(param_1,"",0xffffffff);
  return param_1;
}

