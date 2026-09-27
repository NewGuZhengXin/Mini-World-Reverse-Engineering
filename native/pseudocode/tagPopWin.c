// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: tagPopWin

//======================================================================
// tagPopWin::tagPopWin(tagPopWin const&)
// address: 0x001A1E38   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN9tagPopWinC1ERKS_'
int __fastcall tagPopWin::tagPopWin(int a1, int a2)
{
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 20);
  sub_3BEB1C(a1 + 24, a2 + 24);
  return a1;
}

