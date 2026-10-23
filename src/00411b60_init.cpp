extern int DAT_004bea64;
// FUNCTION: PORT1111 0x00411b60
void *__fastcall FUN_00411b60(void *obj)
{
    int *p = (int *)obj;
    p[0] = (int)&DAT_004bea64;
    p[1] = 0; p[2] = 0; p[3] = 0; p[4] = 0;
    return obj;
}
