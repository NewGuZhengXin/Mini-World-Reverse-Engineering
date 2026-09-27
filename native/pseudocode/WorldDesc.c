// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldDesc

//======================================================================
// WorldDesc::~WorldDesc()
// address: 0x0028E6D0   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN9WorldDescD1Ev'
void __fastcall WorldDesc::~WorldDesc(WorldDesc *this)
{
  sub_3BDF80((char *)this + 96);
  sub_3BDF80((char *)this + 88);
  sub_3BDF80((char *)this + 60);
  sub_3BDF80((char *)this + 20);
  sub_3BDF80((char *)this + 8);
}


//======================================================================
// WorldDesc::WorldDesc(WorldDesc const&)
// address: 0x0028E71A   size: 0xBA (186 bytes)
//======================================================================
// Alternative name is '_ZN9WorldDescC1ERKS_'
void __fastcall WorldDesc::WorldDesc(WorldDesc *this, const WorldDesc *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  sub_3BEB1C((char *)this + 8, (char *)a2 + 8);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  sub_3BEB1C((char *)this + 20, (char *)a2 + 20);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  sub_3BEB1C((char *)this + 60, (char *)a2 + 60);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  sub_3BEB1C((char *)this + 88, (char *)a2 + 88);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  sub_3BEB1C((char *)this + 96, (char *)a2 + 96);
  *((_BYTE *)this + 100) = *((_BYTE *)a2 + 100);
  j_memcpy((char *)this + 104, (char *)a2 + 104, 0x50u);
}

