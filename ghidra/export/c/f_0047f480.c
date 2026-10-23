// FUNCTION: PORT1111 0x0047f480
// name: FUN_0047f480
// sig: undefined FUN_0047f480(void * this, void * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047f480(void *this,void *param_1)

{
  undefined4 *this_00;
  void *this_01;
  undefined4 *puVar1;
  int iVar2;
  undefined2 local_20 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_4 [2];
  undefined1 local_2 [2];
  
  this_01 = param_1;
  *(undefined4 *)((int)this + 0x3c) = 1;
  this_00 = (undefined4 *)((int)this + 0x30);
  if ((char)((uint)DAT_004e2c54 >> 8) == -0x60) {
    FUN_0048a150(param_1,this_00);
    if (DAT_004e2c54 < 0xa019) {
      puVar1 = FUN_00465ee0(this_00);
      FUN_00466a50(this_00,puVar1);
    }
    FUN_0048a110(this_01,(int)this + 0x34);
    if (DAT_004e2c54 < 0xa015) {
      FUN_0048a0f0(this_01,&param_1);
      *(uint *)((int)this + 0x24) = (uint)param_1 & 0xff;
      FUN_0048a0f0(this_01,&param_1);
      *(uint *)((int)this + 0x28) = (uint)param_1 & 0xff;
    }
    else {
      FUN_0048a110(this_01,(int)this + 0x24);
      FUN_0048a110(this_01,(int)this + 0x28);
    }
    *(undefined4 *)((int)this + 0x3c) = 1;
    if (0xa010 < DAT_004e2c54) {
      FUN_0048a110(this_01,local_20);
      *(undefined2 *)((int)this + 0x40) = local_20[0];
      FUN_0048a110(this_01,local_20);
      *(undefined2 *)((int)this + 0x42) = local_20[0];
    }
    if (0xa011 < DAT_004e2c54) {
      if (DAT_004e2c54 < 0xa015) {
        FUN_0048a130(this_01,&param_1);
        *(uint *)((int)this + 0x2c) = (uint)param_1 & 0xffff;
      }
      else {
        FUN_0048a110(this_01,(int)this + 0x2c);
      }
    }
    if (0xa012 < DAT_004e2c54) {
      FUN_0048a110(this_01,&DAT_004e2c68);
    }
    if (0xa013 < DAT_004e2c54) {
      iVar2 = 0;
      if (*(int *)((int)this + 0x48) == 0) {
        param_1 = (void *)0x0;
      }
      else {
        param_1 = (void *)((*(int *)((int)this + 0x4c) - *(int *)((int)this + 0x48)) / 0xc);
      }
      FUN_0048a110(this_01,&param_1);
      if (0 < (int)param_1) {
        local_c = 0;
        do {
          FUN_0048a110(this_01,&local_1c);
          local_14 = local_1c;
          FUN_0048a110(this_01,&local_1c);
          local_10 = local_1c;
          FUN_0041a730((void *)((int)this + 0x44),&local_14);
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)param_1);
      }
    }
    if (0xa015 < DAT_004e2c54) {
      FUN_0048a110(this_01,&param_1);
      iVar2 = 0;
      if (*(void **)((int)this + 0x58) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 0x58));
      }
      *(undefined4 *)((int)this + 0x58) = 0;
      *(undefined4 *)((int)this + 0x5c) = 0;
      *(undefined4 *)((int)this + 0x60) = 0;
      FUN_0047f170((void *)((int)this + 0x54),(uint)param_1);
      if (0 < (int)param_1) {
        do {
          FUN_0048a170(this_01,&local_14);
          FUN_0048a130(this_01,local_4);
          FUN_0048a130(this_01,local_2);
          FUN_0047f2d0((void *)((int)this + 0x54),&local_14);
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)param_1);
      }
      FUN_0048a170(this_01,(int)this + 0x68);
    }
    if (0xa017 < DAT_004e2c54) {
      FUN_0048a110(this_01,&local_18);
      if (0xa018 < DAT_004e2c54) {
        _DAT_004e2c64 = local_18;
        return;
      }
    }
  }
  else {
    FUN_0048a150(param_1,this_00);
    puVar1 = FUN_00465ee0(this_00);
    FUN_00466a50(this_00,puVar1);
    FUN_0048a110(this_01,(int)this + 0x34);
    FUN_0048a110(this_01,(int)this + 0x24);
    FUN_0048a110(this_01,(int)this + 0x28);
    FUN_0048a130(this_01,(int)this + 0x40);
    FUN_0048a130(this_01,(int)this + 0x42);
    FUN_0048a110(this_01,(int)this + 0x2c);
    FUN_0048a110(this_01,&DAT_004e2c68);
    FUN_0048a110(this_01,&param_1);
    iVar2 = 0;
    if (0 < (int)param_1) {
      do {
        local_c = 0;
        FUN_0048a110(this_01,&local_14);
        FUN_0048a110(this_01,&local_10);
        FUN_0041a730((void *)((int)this + 0x44),&local_14);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1);
    }
    FUN_0048a110(this_01,&param_1);
    iVar2 = 0;
    if (*(void **)((int)this + 0x58) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x58));
    }
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined4 *)((int)this + 0x5c) = 0;
    *(undefined4 *)((int)this + 0x60) = 0;
    FUN_0047f170((void *)((int)this + 0x54),(uint)param_1);
    if (0 < (int)param_1) {
      do {
        FUN_0048a170(this_01,&local_14);
        FUN_0048a130(this_01,local_4);
        FUN_0048a130(this_01,local_2);
        FUN_0047f2d0((void *)((int)this + 0x54),&local_14);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1);
    }
    FUN_0048a170(this_01,(int)this + 0x68);
    FUN_0048a110(this_01,&DAT_004e2c64);
  }
  return;
}

