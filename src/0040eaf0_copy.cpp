extern int DAT_004be64c, DAT_004be670, DAT_004be698, DAT_004be6bc, DAT_004be6e0;
struct C40EAF0 { void *Copy(int src); };
struct BaseE8F0 { void Copy(int src); };
struct C40E990 { void *Copy(int src); };
// FUNCTION: PORT1111 0x0040eaf0
void *C40EAF0::Copy(int src)
{
    ((BaseE8F0*)this)->Copy(src);
    int *d=(int*)this; int *s=(int*)src;
    d[0]=(int)&DAT_004be64c;
    d[0xd]=s[0xd]; d[0xe]=s[0xe]; d[0xf]=s[0xf];
    d[0]=(int)&DAT_004be6bc;
    return this;
}
