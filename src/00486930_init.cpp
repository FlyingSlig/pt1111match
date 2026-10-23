extern int DAT_004c6b3c;
// FUNCTION: PORT1111 0x00486930
void *__fastcall FUN_00486930(void *obj)
{
    int *p = (int *)obj;
    p[0] = (int)&DAT_004c6b3c;
    p[2] = 0; p[4] = 0; p[6] = 0; p[7] = 0;
    return obj;
}
