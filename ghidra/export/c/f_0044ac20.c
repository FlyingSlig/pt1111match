// FUNCTION: PORT1111 0x0044ac20
// name: FUN_0044ac20
// sig: undefined4 FUN_0044ac20(void * this, void * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0044ac20(void *this,void *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int local_10;
  int iStack_c;
  int iStack_8;
  
  *(undefined4 *)((int)this + 0xc0) = 0;
  uVar1 = FUN_0047d020(param_1,0);
  *(undefined4 *)(*(int *)(*(int *)(uVar1 + 0x44) + 4) + 0xc) = 2;
  FUN_0044a320();
  FUN_0044a590();
  piVar2 = (int *)FUN_0047d060(param_1,0x67);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x30))(&local_10);
    DAT_004e27f4 = *(undefined4 *)(piVar2[0xf] + 4);
    *(uint *)(piVar2[0x10] + 0x28) = *(uint *)(piVar2[0x10] + 0x28) | 0x80;
    *(undefined1 **)(piVar2[0xf] + 0x28) = &LAB_0044ac00;
    *(void **)(piVar2[0xf] + 0x1c) = this;
    iVar3 = FUN_00453620(this,unaff_EBX,local_10,iStack_c,iStack_8,100,_DAT_004dc29c);
    if (iVar3 != 0) {
      *(undefined4 *)((int)this + 0x2c) = 0;
      uVar1 = FUN_0046c8b0(0xf7,0x61,0x21);
      *(short *)((int)this + 0x28) = (short)uVar1;
      *(undefined2 *)((int)this + 0x2a) = 0;
      piVar2 = (int *)FUN_0047d060(param_1,0x6a);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x30))(&stack0xffffffec);
        DAT_004e27f8 = *(undefined4 *)(piVar2[0xf] + 4);
        *(uint *)(piVar2[0x10] + 0x28) = *(uint *)(piVar2[0x10] + 0x28) | 0x80;
        *(undefined1 **)(piVar2[0xf] + 0x28) = &LAB_0044ac00;
        *(void **)(piVar2[0xf] + 0x1c) = this;
        iVar3 = FUN_00453620((void *)((int)this + 0x30),unaff_EBP,unaff_EBX,local_10,iStack_c,100,
                             DAT_004dc2a0);
        if (iVar3 != 0) {
          *(undefined4 *)((int)this + 0x5c) = 0;
          uVar1 = FUN_0046c8b0(0xf7,0x61,0x21);
          *(short *)((int)this + 0x58) = (short)uVar1;
          *(undefined2 *)((int)this + 0x5a) = 0;
          piVar2 = (int *)FUN_0047d060(param_1,0x6e);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x30))(&stack0xffffffe8);
            DAT_004e27fc = *(undefined4 *)(piVar2[0xf] + 4);
            *(uint *)(piVar2[0x10] + 0x28) = *(uint *)(piVar2[0x10] + 0x28) | 0x80;
            *(undefined1 **)(piVar2[0xf] + 0x28) = &LAB_0044ac00;
            *(void **)(piVar2[0xf] + 0x1c) = this;
            iVar3 = FUN_00453620((void *)((int)this + 0x60),unaff_ESI,unaff_EBP,unaff_EBX,local_10,3
                                 ,DAT_004db290);
            if (iVar3 != 0) {
              *(undefined4 *)((int)this + 0x8c) = 0;
              uVar1 = FUN_0046c8b0(0xf7,0x61,0x21);
              *(short *)((int)this + 0x88) = (short)uVar1;
              *(undefined2 *)((int)this + 0x8a) = 0;
              if ((*(short *)((int)param_1 + 0x1c) == 0x15) &&
                 (piVar2 = (int *)FUN_0047d060(param_1,0xde), piVar2 != (int *)0x0)) {
                (**(code **)(*piVar2 + 0x30))(&stack0xffffffe4);
                *(uint *)(piVar2[0x10] + 0x28) = *(uint *)(piVar2[0x10] + 0x28) | 0x80;
                *(undefined1 **)(piVar2[0xf] + 0x28) = &LAB_0044ac00;
                *(void **)(piVar2[0xf] + 0x1c) = this;
                iVar3 = FUN_00453620((void *)((int)this + 0x90),unaff_EDI,unaff_ESI,unaff_EBP,
                                     unaff_EBX,3,DAT_004db294);
                if (iVar3 == 0) {
                  return 0;
                }
                *(undefined4 *)((int)this + 0xbc) = 0;
                uVar1 = FUN_0046c8b0(0xf7,0x61,0x21);
                *(short *)((int)this + 0xb8) = (short)uVar1;
                *(undefined2 *)((int)this + 0xba) = 0;
                *(undefined4 *)((int)this + 0xc0) = 1;
                piVar2 = (int *)FUN_0047d0a0(param_1,0xdd);
                (**(code **)(*piVar2 + 0x44))(0x100);
                piVar2 = (int *)FUN_0047d0a0(param_1,0xdc);
                (**(code **)(*piVar2 + 0x44))(0x100);
              }
              piVar2 = (int *)FUN_0047d0a0(param_1,0x66);
              (**(code **)(*piVar2 + 0x44))(0x100);
              piVar2 = (int *)FUN_0047d0a0(param_1,0x65);
              (**(code **)(*piVar2 + 0x44))(0x100);
              piVar2 = (int *)FUN_0047d0a0(param_1,0x69);
              (**(code **)(*piVar2 + 0x44))(0x100);
              piVar2 = (int *)FUN_0047d0a0(param_1,0x68);
              (**(code **)(*piVar2 + 0x44))(0x100);
              piVar2 = (int *)FUN_0047d0a0(param_1,0x6d);
              (**(code **)(*piVar2 + 0x44))(0x100);
              piVar2 = (int *)FUN_0047d0a0(param_1,0x6c);
              (**(code **)(*piVar2 + 0x44))(0x100);
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

