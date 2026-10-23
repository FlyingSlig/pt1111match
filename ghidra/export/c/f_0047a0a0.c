// FUNCTION: PORT1111 0x0047a0a0
// name: FUN_0047a0a0
// sig: undefined4 FUN_0047a0a0(void * this, uint * param_1, int param_2, int param_3, int param_4)


undefined4 __thiscall FUN_0047a0a0(void *this,uint *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  short *psVar5;
  
  if ((((-1 < param_2) && (-1 < param_3)) &&
      (iVar2 = (**(code **)(*(int *)this + 4))(), param_2 < iVar2)) &&
     ((iVar2 = (**(code **)(*(int *)this + 8))(), param_3 < iVar2 &&
      (*(int *)((int)this + 0x34) == 5)))) {
    psVar5 = (short *)(param_3 * 0xe + *(int *)((int)this + 0x3c));
    if (*psVar5 == 0) {
      *param_1 = 0;
      return 1;
    }
    pcVar3 = *(char **)(psVar5 + 5);
    cVar1 = *pcVar3;
    iVar2 = 0;
    while (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        iVar4 = iVar2 + (uint)(byte)pcVar3[1] * 4;
        if (param_2 < iVar4) {
          *param_1 = 0;
          return 1;
        }
        pcVar3 = pcVar3 + 2;
      }
      else if (cVar1 == '\x02') {
        iVar4 = iVar2 + (uint)(byte)pcVar3[1] * 4;
        if (param_2 < iVar4) {
          if (param_4 != 0) {
            *param_1 = 0xff;
            return 1;
          }
          *param_1 = (uint)*(ushort *)(pcVar3 + (param_2 - iVar2) * 2 + 2);
          return 1;
        }
        pcVar3 = pcVar3 + (uint)(byte)pcVar3[1] * 8 + 2;
      }
      else {
        iVar4 = iVar2;
        if (cVar1 == '\b') {
          iVar4 = iVar2 + 4;
          if (param_2 < iVar4) {
            if (param_4 == 0) {
              *param_1 = (uint)*(ushort *)(pcVar3 + (param_2 - iVar2) * 2 + 1);
            }
            else {
              switch(param_2 - iVar2) {
              case 0:
                *param_1 = (*(uint *)(pcVar3 + 9) & 0xf) << 4;
                return 1;
              case 1:
                *param_1 = *(uint *)(pcVar3 + 9) & 0xf0;
                return 1;
              case 2:
                *param_1 = *(uint *)(pcVar3 + 9) >> 4 & 0xf0;
                return 1;
              case 3:
                *param_1 = *(uint *)(pcVar3 + 9) >> 8 & 0xf0;
                return 1;
              }
            }
            return 1;
          }
          pcVar3 = pcVar3 + 0xd;
        }
      }
      iVar2 = iVar4;
      cVar1 = *pcVar3;
    }
  }
  return 0;
}

