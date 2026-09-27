// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BuddyWorldDesc

//======================================================================
// BuddyWorldDesc::~BuddyWorldDesc()
// address: 0x0028E698   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN14BuddyWorldDescD1Ev'
void __fastcall BuddyWorldDesc::~BuddyWorldDesc(BuddyWorldDesc *this)
{
  sub_3BDF80((char *)this + 28);
  sub_3BDF80((char *)this + 8);
  sub_3BDF80((char *)this + 4);
}


//======================================================================
// BuddyWorldDesc::BuddyWorldDesc(BuddyWorldDesc const&)
// address: 0x0028E9E8   size: 0x4C (76 bytes)
//======================================================================
// Alternative name is '_ZN14BuddyWorldDescC1ERKS_'
void __fastcall BuddyWorldDesc::BuddyWorldDesc(BuddyWorldDesc *this, const BuddyWorldDesc *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  sub_3BEB1C((char *)this + 4, (char *)a2 + 4);
  sub_3BEB1C((char *)this + 8, (char *)a2 + 8);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_WORD *)this + 10) = *((_WORD *)a2 + 10);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  sub_3BEB1C((char *)this + 28, (char *)a2 + 28);
  *((_BYTE *)this + 32) = *((_BYTE *)a2 + 32);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
}


//======================================================================
// BuddyWorldDesc::operator=(BuddyWorldDesc const&)
// address: 0x002968C8   size: 0x46 (70 bytes)
//======================================================================
int __fastcall BuddyWorldDesc::operator=(int a1, int a2)
{
  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_3BEBBC(a1 + 4);
  sub_3BEBBC(a1 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_WORD *)(a1 + 20) = *(_WORD *)(a2 + 20);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  sub_3BEBBC(a1 + 28);
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  return a1;
}

