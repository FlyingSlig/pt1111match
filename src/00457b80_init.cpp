extern int DAT_004c46dc;
// FUNCTION: PORT1111 0x00457b80
void *__fastcall FUN_00457b80(void *obj)
{
    int *p = (int *)obj;
    p[0] = (int)&DAT_004c46dc;
    p[2] = 0; p[3] = 0; p[4] = 0; p[5] = 0;
    return obj;
}
