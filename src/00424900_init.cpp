extern int DAT_004bf7ec, DAT_004bf7f8, DAT_004bf804;
// FUNCTION: PORT1111 0x00424900
void *__fastcall FUN_00424900(void *obj)
{
    int *p=(int*)obj;
    p[1]=1; p[2]=0; p[6]=0; p[5]=0; p[3]=0; p[4]=0;
    p[0]=(int)&DAT_004bf804; p[7]=0;
    return obj;
}
