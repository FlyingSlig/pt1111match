// pt1111match — entity property getters (partial): 0x407140, 0x407cc0, 0x407ce0.
// The object holds pointers at +0x40 and +0x50 to two sub-structures.

#include <windows.h>

struct CEntityBase {
    char  gap_00[0x40];
    char *field_40;              // +0x40
    char  gap_44[0x50 - 0x44];
    char *field_50;              // +0x50

    int GetField6C();
    int GetX();
    int GetY();
};

// FUNCTION: PORT1111 0x00407ce0
int CEntityBase::GetY()
{
    return *(short *)(field_40 + 0x4c) + *(int *)(field_50 + 0x134);
}
