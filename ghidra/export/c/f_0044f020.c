// FUNCTION: PORT1111 0x0044f020
// name: FUN_0044f020
// sig: undefined4 FUN_0044f020(undefined4 param_1)


undefined4 __cdecl FUN_0044f020(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *_Memory;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBX;
  uint local_10;
  uint uStack_c;
  
  local_10 = 0xffff;
  iVar2 = (**(code **)(unaff_EBX + 0x10))(*(undefined4 *)(unaff_EBX + 0x1c),param_1,0,2);
  if (iVar2 != 0) {
    return 0;
  }
  uVar3 = (**(code **)(unaff_EBX + 0xc))(*(undefined4 *)(unaff_EBX + 0x1c),param_1);
  if (uVar3 < 0xffff) {
    local_10 = uVar3;
  }
  _Memory = _malloc(0x404);
  if (_Memory == (void *)0x0) {
    return 0;
  }
  uStack_c = 4;
  if (4 < local_10) {
    do {
      uVar4 = uStack_c + 0x400;
      uStack_c = local_10;
      if (uVar4 <= local_10) {
        uStack_c = uVar4;
      }
      iVar2 = uVar3 - uStack_c;
      uVar4 = 0x404;
      if (uVar3 - iVar2 < 0x405) {
        uVar4 = uVar3 - iVar2;
      }
      iVar5 = (**(code **)(unaff_EBX + 0x10))(*(undefined4 *)(unaff_EBX + 0x1c),param_1,iVar2,0);
      if ((iVar5 != 0) ||
         (uVar6 = (**(code **)(unaff_EBX + 4))
                            (*(undefined4 *)(unaff_EBX + 0x1c),param_1,_Memory,uVar4),
         uVar6 != uVar4)) break;
      iVar5 = uVar4 - 3;
      do {
        iVar1 = iVar5;
        if (iVar1 < 1) goto LAB_0044f13d;
        iVar5 = iVar1 + -1;
      } while ((((*(char *)(iVar1 + -1 + (int)_Memory) != 'P') ||
                (*(char *)(iVar1 + (int)_Memory) != 'K')) ||
               (*(char *)(iVar1 + 1 + (int)_Memory) != '\x05')) ||
              (*(char *)(iVar1 + 2 + (int)_Memory) != '\x06'));
      if (iVar5 + iVar2 != 0) break;
LAB_0044f13d:
    } while (uStack_c < local_10);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

