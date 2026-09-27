// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: UIFont

//======================================================================
// UIFont::UIFont(UIFont const&)
// address: 0x001A1E60   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN6UIFontC1ERKS_'
int __fastcall UIFont::UIFont(int a1, int a2)
{
  sub_3BEB1C(a1, a2);
  sub_3BEB1C(a1 + 4, a2 + 4);
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  return a1;
}


//======================================================================
// UIFont::operator=(UIFont const&)
// address: 0x001A1E8E   size: 0x2E (46 bytes)
//======================================================================
int __fastcall UIFont::operator=(int a1, int a2)
{
  sub_3BEBBC(a1);
  sub_3BEBBC(a1 + 4);
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  return a1;
}

