// pt1111match — the game's WinMain lives at 0x4034f0 (matched as
// FUN_004034f0).  Bind the CRT's _WinMain@16 reference to it so we do not
// emit an extra placeholder function (which would otherwise be placed first
// and destroy the original .text layout).
#pragma comment(linker, "/alternatename:_WinMain@16=?FUN_004034f0@@YAHPAUHINSTANCE__@@@Z")
