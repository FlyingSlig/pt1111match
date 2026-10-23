// FUNCTION: PORT1111 0x00496950
// name: FUN_00496950
// sig: undefined4 FUN_00496950(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)


undefined4 __thiscall
FUN_00496950(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuStack_f4;
  undefined4 *puStack_f0;
  undefined4 uStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  int iStack_cc;
  undefined *apuStack_c8 [3];
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 *puStack_b4;
  undefined *puStack_b0;
  undefined4 uStack_ac;
  
  uStack_ac = 0x496966;
  (**(code **)(*(int *)this + 4))();
  uStack_ac = 0;
  puStack_b0 = &DAT_004c4bf0;
  puVar1 = (undefined4 *)((int)this + 8);
  uStack_b8 = 0;
  iStack_bc = 0x496978;
  puStack_b4 = puVar1;
  iVar3 = DirectDrawCreateEx();
  if (-1 < iVar3) {
    apuStack_c8[1] = (undefined *)*puVar1;
    iStack_bc = (int)this + 4;
    apuStack_c8[2] = &DAT_004c4c00;
    apuStack_c8[0] = (undefined *)0x496990;
    iVar3 = (*(code *)**(undefined4 **)apuStack_c8[1])();
    if (-1 < iVar3) {
      piStack_d0 = (int *)*puVar1;
      apuStack_c8[0] = (undefined *)0x11;
      iStack_cc = param_1;
      uStack_d4 = 0x4969a6;
      iVar3 = (**(code **)(*piStack_d0 + 0x50))();
      if (-1 < iVar3) {
        piStack_e8 = (int *)*puVar1;
        uStack_d4 = 0;
        uStack_d8 = 0;
        uStack_dc = param_4;
        uStack_e0 = param_3;
        uStack_e4 = param_2;
        uStack_ec = 0x4969c6;
        iVar3 = (**(code **)(*piStack_e8 + 0x54))();
        if (-1 < iVar3) {
          piVar2 = (int *)*puVar1;
          ppuVar4 = apuStack_c8;
          for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
            *ppuVar4 = (undefined *)0x0;
            ppuVar4 = ppuVar4 + 1;
          }
          uStack_ec = 0;
          puVar1 = (undefined4 *)((int)this + 0x10);
          ppuStack_f4 = apuStack_c8;
          apuStack_c8[0] = (undefined *)0x7c;
          apuStack_c8[1] = (undefined *)0x21;
          puStack_b4 = (undefined4 *)0x1;
          puStack_f0 = puVar1;
          iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
          if (-1 < iVar3) {
            iVar3 = (*(code *)**(undefined4 **)*puVar1)
                              ((undefined4 *)*puVar1,&DAT_004c4be0,(int)this + 0xc);
            if (-1 < iVar3) {
              puStack_f0 = (undefined4 *)0x0;
              uStack_ec = 0;
              piStack_e8 = (int *)0x0;
              ppuStack_f4 = (undefined **)0x4;
              iVar3 = (**(code **)(*(int *)*puVar1 + 0x30))
                                ((int *)*puVar1,&ppuStack_f4,(undefined4 *)((int)this + 0x14));
              if (-1 < iVar3) {
                piVar2 = *(int **)((int)this + 0x14);
                (**(code **)(*piVar2 + 4))(piVar2);
                *(int *)((int)this + 0x1c) = param_1;
                *(undefined4 *)((int)this + 0x30) = 0;
                FUN_004968e0((int)this);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 0x80004005;
}

