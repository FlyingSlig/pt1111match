// FUNCTION: PORT1111 0x00465f10
// name: FUN_00465f10
// sig: int * FUN_00465f10(void * this, uint param_1, uchar * param_2)


int * __thiscall FUN_00465f10(void *this,uint param_1,uchar *param_2)

{
  char *pcVar1;
  char cVar2;
  uchar uVar3;
  char *pcVar4;
  uint uVar5;
  uchar *puVar6;
  uchar *_Dest;
  uchar *puVar7;
  uint uVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  
  pcVar4 = *(char **)this;
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  uVar5 = (int)pcVar4 - (int)pcVar1;
  if (param_1 <= uVar5) {
    if ((param_2 != (uchar *)0x0) && (*param_2 != '\0')) {
      puVar6 = param_2;
      do {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
      } while (uVar3 != '\0');
      puVar7 = puVar6 + (uVar5 - (int)(param_2 + 1)) + 1;
      _Dest = _malloc((size_t)puVar7);
      puVar10 = _Dest;
      for (uVar8 = (uint)puVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        puVar10[0] = '\0';
        puVar10[1] = '\0';
        puVar10[2] = '\0';
        puVar10[3] = '\0';
        puVar10 = puVar10 + 4;
      }
      for (uVar8 = (uint)puVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = '\0';
        puVar10 = puVar10 + 1;
      }
      __mbsnbcpy(_Dest,*(uchar **)this,param_1);
      puVar7 = param_2;
      do {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (uVar3 != '\0');
      puVar10 = _Dest + -1;
      do {
        puVar11 = puVar10 + 1;
        puVar10 = puVar10 + 1;
      } while (*puVar11 != '\0');
      puVar11 = param_2;
      for (uVar8 = (uint)((int)puVar7 - (int)param_2) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)puVar10 = *(undefined4 *)puVar11;
        puVar11 = puVar11 + 4;
        puVar10 = puVar10 + 4;
      }
      for (uVar8 = (int)puVar7 - (int)param_2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
      }
      if (param_1 < uVar5) {
        puVar10 = (uchar *)(*(int *)this + param_1);
        puVar7 = puVar10;
        do {
          uVar3 = *puVar7;
          puVar7 = puVar7 + 1;
        } while (uVar3 != '\0');
        puVar11 = _Dest + -1;
        do {
          puVar9 = puVar11 + 1;
          puVar11 = puVar11 + 1;
        } while (*puVar9 != '\0');
        puVar9 = puVar10;
        for (uVar8 = (uint)((int)puVar7 - (int)puVar10) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
          puVar9 = puVar9 + 4;
          puVar11 = puVar11 + 4;
        }
        for (uVar8 = (int)puVar7 - (int)puVar10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      _Dest[(int)(puVar6 + (uVar5 - (int)(param_2 + 1)))] = '\0';
      FUN_00465e40(this);
      *(uchar **)this = _Dest;
      return this;
    }
    return this;
  }
  return this;
}

