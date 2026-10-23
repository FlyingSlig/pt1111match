// FUNCTION: PORT1111 0x004a6df0
// name: FUN_004a6df0
// sig: undefined FUN_004a6df0(int param_1, int param_2, uint param_3, int param_4)


void __cdecl FUN_004a6df0(int param_1,int param_2,uint param_3,int param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x4000) != 0) {
      if (param_4 == -1) {
        iVar3 = 0;
        if (0 < *(int *)(param_2 + 0x30)) {
          do {
            FUN_004a6df0(param_1,param_2,0x4000,iVar3);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_2 + 0x30));
        }
        FUN_004a4750(param_1,*(void **)(param_2 + 0x38));
        *(undefined4 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x30) = 0;
      }
      else if (*(int *)(param_2 + 0x38) != 0) {
        pvVar1 = *(void **)(*(int *)(param_2 + 0x38) + 4 + param_4 * 0x10);
        if (pvVar1 != (void *)0x0) {
          FUN_004a4750(param_1,pvVar1);
          *(undefined4 *)(*(int *)(param_2 + 0x38) + 4 + param_4 * 0x10) = 0;
        }
      }
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x2000) != 0) {
      FUN_004a4750(param_1,*(void **)(param_2 + 0x4c));
      *(undefined4 *)(param_2 + 0x4c) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffef;
    }
    uVar2 = *(uint *)(param_2 + 0xb8) & param_3;
    if ((uVar2 & 0x100) != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffbfff;
    }
    if ((uVar2 & 0x80) != 0) {
      FUN_004a4750(param_1,*(void **)(param_2 + 0xa0));
      FUN_004a4750(param_1,*(void **)(param_2 + 0xac));
      *(undefined4 *)(param_2 + 0xa0) = 0;
      *(undefined4 *)(param_2 + 0xac) = 0;
      if (*(int *)(param_2 + 0xb0) != 0) {
        iVar3 = 0;
        if (*(char *)(param_2 + 0xb5) != '\0') {
          do {
            FUN_004a4750(param_1,*(void **)(*(int *)(param_2 + 0xb0) + iVar3 * 4));
            *(undefined4 *)(*(int *)(param_2 + 0xb0) + iVar3 * 4) = 0;
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(uint)*(byte *)(param_2 + 0xb5));
        }
        FUN_004a4750(param_1,*(void **)(param_2 + 0xb0));
        *(undefined4 *)(param_2 + 0xb0) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffbff;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x10) != 0) {
      FUN_004a4750(param_1,*(void **)(param_2 + 0xc4));
      FUN_004a4750(param_1,*(void **)(param_2 + 200));
      *(undefined4 *)(param_2 + 0xc4) = 0;
      *(undefined4 *)(param_2 + 200) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffefff;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x20) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xd8) != 0) {
          iVar3 = 0;
          if (0 < *(int *)(param_2 + 0xd8)) {
            do {
              FUN_004a6df0(param_1,param_2,0x20,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0xd8));
          }
          FUN_004a4750(param_1,*(void **)(param_2 + 0xd4));
          *(undefined4 *)(param_2 + 0xd4) = 0;
          *(undefined4 *)(param_2 + 0xd8) = 0;
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffdfff;
      }
      else if (*(int *)(param_2 + 0xd4) != 0) {
        iVar3 = param_4 * 0x10;
        FUN_004a4750(param_1,*(void **)(*(int *)(param_2 + 0xd4) + iVar3));
        FUN_004a4750(param_1,*(void **)(*(int *)(param_2 + 0xd4) + 8 + iVar3));
        *(undefined4 *)(*(int *)(param_2 + 0xd4) + iVar3) = 0;
        *(undefined4 *)(*(int *)(param_2 + 0xd4) + 8 + iVar3) = 0;
      }
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x200) != 0) {
      if (param_4 == -1) {
        if (*(int *)(param_2 + 0xc0) != 0) {
          iVar3 = 0;
          if (0 < *(int *)(param_2 + 0xc0)) {
            do {
              FUN_004a6df0(param_1,param_2,0x200,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_2 + 0xc0));
          }
          FUN_004a4750(param_1,*(void **)(param_2 + 0xbc));
          *(undefined4 *)(param_2 + 0xbc) = 0;
          *(undefined4 *)(param_2 + 0xc0) = 0;
        }
      }
      else if (*(int *)(param_2 + 0xbc) != 0) {
        FUN_004a4750(param_1,*(void **)(*(int *)(param_2 + 0xbc) + 8 + param_4 * 0x14));
        *(undefined4 *)(*(int *)(param_2 + 0xbc) + 8 + param_4 * 0x14) = 0;
      }
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 8) != 0) {
      FUN_004a4750(param_1,*(void **)(param_2 + 0x7c));
      *(undefined4 *)(param_2 + 0x7c) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffffbf;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x1000) != 0) {
      FUN_004a6ce0(param_1,*(void **)(param_2 + 0x10));
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffff7;
      *(undefined2 *)(param_2 + 0x14) = 0;
    }
    if ((*(uint *)(param_2 + 0xb8) & param_3 & 0x40) != 0) {
      if (*(int *)(param_2 + 0xf8) != 0) {
        iVar3 = 0;
        if (0 < *(int *)(param_2 + 4)) {
          do {
            FUN_004a4750(param_1,*(void **)(*(int *)(param_2 + 0xf8) + iVar3 * 4));
            *(undefined4 *)(*(int *)(param_2 + 0xf8) + iVar3 * 4) = 0;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_2 + 4));
        }
        FUN_004a4750(param_1,*(void **)(param_2 + 0xf8));
        *(undefined4 *)(param_2 + 0xf8) = 0;
      }
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffff7fff;
    }
    if (param_4 != -1) {
      param_3 = param_3 & 0xffffbddf;
    }
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) & ~param_3;
  }
  return;
}

