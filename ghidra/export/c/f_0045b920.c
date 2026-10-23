// FUNCTION: PORT1111 0x0045b920
// name: FUN_0045b920
// sig: undefined4 FUN_0045b920(void * param_1)


undefined4 __fastcall FUN_0045b920(void *param_1)

{
  int *this;
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  size_t _NumOfElements;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  size_t sStack_1f8;
  undefined4 local_1f4 [2];
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  void *local_1a4;
  int aiStack_1a0 [101];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b94e4;
  local_c = ExceptionList;
  _NumOfElements = 0;
  local_1ec = 0x29;
  local_1e8 = 0x2a;
  local_1e4 = 0x2b;
  local_1e0 = 0x2c;
  local_1dc = 0x2d;
  local_1d8 = 0x2e;
  local_1d4 = 0x2f;
  local_1d0 = 0x30;
  local_1cc = 0x31;
  local_1c8 = 0xb;
  local_1c4 = 0xc;
  local_1c0 = 0xd;
  local_1bc = 0xe;
  local_1b8 = 0xf;
  local_1b4 = 0x10;
  local_1b0 = 0x11;
  local_1ac = 0x12;
  local_1a8 = 0x13;
  local_1a4 = (void *)0x14;
  ExceptionList = &local_c;
  iVar2 = FUN_00481aa0((void *)((int)param_1 + 0x4c),*(void **)((int)param_1 + 0x24),0,0x75,0x76,
                       0x3fd,0xe1,1);
  if ((((iVar2 != 0) &&
       (iVar2 = FUN_00483b70((void *)((int)param_1 + 0xd8),1,*(undefined4 *)((int)param_1 + 0x24),3,
                             (int)&local_1ec,0x6f,0x70,0xffff,0,1,0x3fa,0xe4,2,0x810), iVar2 != 0))
      && (iVar2 = FUN_00483b70((void *)((int)param_1 + 0x394),1,*(undefined4 *)((int)param_1 + 0x24)
                               ,3,(int)&local_1e0,0x71,0x72,0xffff,0,1,0x3fb,0xe7,2,0x810),
         iVar2 != 0)) &&
     (iVar2 = FUN_00483b70((void *)((int)param_1 + 0x650),1,*(undefined4 *)((int)param_1 + 0x24),3,
                           (int)&local_1d4,0x73,0x74,0xffff,0,1,0x3fc,0xe8,2,0x810), iVar2 != 0)) {
    this = (int *)((int)param_1 + 0x90c);
    iVar2 = FUN_00483b70(this,1,*(undefined4 *)((int)param_1 + 0x24),10,(int)&local_1c8,0xd7,0xd8,
                         0xffff,0,1,0x3fe,0xe2,0,0x810);
    uVar4 = 0;
    if (iVar2 != 0) {
      *(undefined4 *)((int)param_1 + 0xbb0) = 0;
      FUN_00481030(*(void **)((int)param_1 + 0xbb4),1);
      *(uint *)((int)param_1 + 0xbac) = *(uint *)((int)param_1 + 0xbac) | 1;
      *(undefined4 *)((int)param_1 + 0x37c) = 0;
      FUN_00481030(*(void **)((int)param_1 + 0x380),1);
      *(undefined4 *)((int)param_1 + 0x638) = 0;
      FUN_00481030(*(void **)((int)param_1 + 0x63c),1);
      *(undefined4 *)((int)param_1 + 0x8f4) = 0;
      FUN_00481030(*(void **)((int)param_1 + 0x8f8),1);
      local_1f4[0] = 0;
      (**(code **)(*this + 0xc))(*(undefined4 *)((int)DAT_004e2b14 + 0x60));
      *(undefined4 *)((int)param_1 + 0xbc4) = 1;
      puVar3 = FUN_00412e80();
      iVar8 = **(int **)(puVar3 + 4);
      puVar3 = FUN_00412e80();
      iVar2 = *(int *)(puVar3 + 4);
      while (iVar8 != iVar2) {
        iVar2 = *(int *)(iVar8 + 0x10);
        if (((*(int *)(iVar2 + 0x10) != 0) &&
            (*(int *)(iVar2 + 0x26c) == **(int **)((int)param_1 + 0xd0))) &&
           (uVar4 = FUN_00419450(iVar2), (char)uVar4 != '\0')) {
          aiStack_1a0[_NumOfElements] = iVar2;
          _NumOfElements = _NumOfElements + 1;
        }
        FUN_00413730((int *)&stack0xfffffe00);
        puVar3 = FUN_00412e80();
        sStack_1f8 = _NumOfElements;
        iVar2 = *(int *)(puVar3 + 4);
      }
      _qsort(aiStack_1a0,_NumOfElements,4,(_PtFuncCompare *)&LAB_00458d50);
      iVar2 = 0;
      if (0 < (int)_NumOfElements) {
        do {
          puVar5 = FUN_00468080(DAT_004e2b14,local_1f4,"BtIcons.bmp");
          iVar8 = aiStack_1a0[iVar2];
          iVar1 = *this;
          uVar14 = 1;
          uVar13 = 0;
          uVar12 = 0;
          puStack_8 = (undefined1 *)0x0;
          uVar6 = FUN_00465e00(puVar5);
          uVar4 = *(undefined4 *)(iVar8 + 0x14);
          iVar11 = (uint)(ushort)(*(short *)(iVar8 + 0x10) - 1) << 0x10;
          uVar7 = FUN_00465e00((undefined4 *)(iVar8 + 8));
          (**(code **)(iVar1 + 0x18))(uVar7,uVar4,iVar11,uVar6,uVar12,uVar13,uVar14);
          puStack_8 = (undefined1 *)0xffffffff;
          FUN_00465e40(local_1f4);
          local_1a4 = operator_new(0x18);
          puStack_8 = (undefined1 *)0x1;
          if (local_1a4 == (void *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = FUN_00458070(local_1a4,*(undefined4 *)(aiStack_1a0[iVar2] + 0x14));
          }
          puStack_8 = (undefined1 *)0xffffffff;
          FUN_004573b0(*(void **)((int)param_1 + 0xd0),*(undefined4 *)(aiStack_1a0[iVar2] + 0x14),
                       iVar8);
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)sStack_1f8);
      }
      FUN_00457410(*(int **)((int)param_1 + 0xd0));
      FUN_00482e60(this,0);
      if ((DAT_004e240c != 0) && (iVar2 = FUN_00453b70(*(int *)(DAT_004e240c + 0x21c)), iVar2 != 0))
      {
        FUN_004828b0(this,*(int *)(*(int *)(iVar2 + 0x50) + 0x14));
      }
      iVar2 = (**(code **)(*this + 0x2c))();
      FUN_00456670(*(void **)((int)param_1 + 0xd0),iVar2);
      uVar9 = FUN_0047d020(*(void **)((int)param_1 + 0x24),0);
      *(undefined4 *)(*(int *)(*(int *)(uVar9 + 0x44) + 4) + 0xc) = 2;
      FUN_00465cf0(&sStack_1f8);
      uStack_4 = 2;
      FUN_00466970(&sStack_1f8,(byte *)"%s%d.aia");
      pcVar10 = (char *)FUN_00465e00(&sStack_1f8);
      FUN_0045b030(param_1,pcVar10);
      uStack_4 = 0xffffffff;
      FUN_00465e40(&sStack_1f8);
      uVar4 = 1;
    }
    ExceptionList = local_c;
    return uVar4;
  }
  ExceptionList = local_c;
  return 0;
}

