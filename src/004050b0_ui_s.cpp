// pt1111match — game window/widget state module (partial).
//
// Functions 0x4050b0..0x405130 are __thiscall members over an object whose
// interesting fields live at +0x60, +0x84 and +0x8c. Encoded here as a
// struct with those offsets so the member-function calling convention
// (this in ECX, args on stack, callee-pops `ret N`) matches the original.
//
// NOTE: a decomp marker must be the LAST comment line before the function
// signature — any comment in between is parsed as a nameref function name.

#include <windows.h>

struct CWndState {
    char gap_00[0x60];
    int  field_60;              // +0x60
    char gap_64[0x84 - 0x64];
    int  field_84;             // +0x84
    char gap_88[0x8c - 0x88];
    int  field_8c;             // +0x8c

    void SetField60(int value);
    int  Matches(int a, int b);
};

// FUNCTION: PORT1111 0x004050b0
void CWndState::SetField60(int value)
{
    field_60 = value;
}

