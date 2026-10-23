// FUNCTION: PORT1111 0x00459006
// name: FUN_00459006
// sig: undefined4 FUN_00459006(undefined4 param_1, undefined4 param_2, char * param_3, undefined4 param_4, undefined4 param_5, void * param_6, undefined4 param_7, int param_8, undefined4 param_9, void * param_10)


undefined4
FUN_00459006(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,void *param_6,undefined4 param_7,int param_8,undefined4 param_9,
            void *param_10)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  void *unaff_EBP;
  
  puVar2 = FUN_00466af0(&param_5,(uchar *)"soure1234",0xffffffff);
  param_8 = CONCAT31(param_8._1_3_,3);
  pvVar3 = (void *)FUN_00465cf0(&param_4);
  pvVar1 = param_10;
  param_8 = CONCAT31(param_8._1_3_,4);
  puVar4 = FUN_00466970(pvVar3,(byte *)"%s%d.pia");
  iVar5 = FUN_004519d0(&param_1,puVar4,puVar2);
  param_8 = CONCAT31(param_8._1_3_,3);
  FUN_00465e40(&param_4);
  param_8 = CONCAT31(param_8._1_3_,1);
  FUN_00465e40(&param_5);
  if (iVar5 == 0) {
    param_8 = param_8 & 0xffffff00;
    FUN_00465e40(&param_2);
    param_8 = -1;
    FUN_00451ae0(&param_1);
    ExceptionList = param_6;
    return 0;
  }
  uVar6 = FUN_00451a30(&param_1,(int *)&param_3);
  if (-1 < (int)uVar6) {
    FUN_004585b0(unaff_EBP,param_3,pvVar1,uVar6);
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  param_8 = param_8 & 0xffffff00;
  FUN_00465e40(&param_2);
  param_8 = -1;
  FUN_00451ae0(&param_1);
  ExceptionList = param_6;
  return 0;
}

