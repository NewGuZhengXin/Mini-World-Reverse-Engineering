// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: tinyobj::MaterialFileReader

//======================================================================
// tinyobj::MaterialFileReader::~MaterialFileReader()
// address: 0x002B5D78   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN7tinyobj18MaterialFileReaderD1Ev'
void __fastcall tinyobj::MaterialFileReader::~MaterialFileReader(tinyobj::MaterialFileReader *this)
{
  *(_DWORD *)this = &off_45E570;
  sub_3BDF80((char *)this + 4);
  *(_DWORD *)this = &off_45E548;
}


//======================================================================
// tinyobj::MaterialFileReader::~MaterialFileReader()
// address: 0x002B5DBC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall tinyobj::MaterialFileReader::~MaterialFileReader(tinyobj::MaterialFileReader *this)
{
  tinyobj::MaterialFileReader::~MaterialFileReader(this);
  operator delete(this);
}


//======================================================================
// tinyobj::MaterialFileReader::operator()(std::string const&,std::vector<tinyobj::material_t,std::allocator<tinyobj::material_t>> &,std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>> &)
// address: 0x002B7A64   size: 0x88 (136 bytes)
//======================================================================
int __fastcall tinyobj::MaterialFileReader::operator()(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  _DWORD *v6; // r0
  char *v10; // [sp+10h] [bp-104h] BYREF
  _BYTE v11[4]; // [sp+14h] [bp-100h] BYREF
  _DWORD v12[63]; // [sp+18h] [bp-FCh] BYREF

  v10 = &byte_55FB88;
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 4) - 12) != 0 )
  {
    sub_3BEB1C(v11, a2 + 4);
    v6 = (_DWORD *)sub_3BE774(v11, a3);
    v12[0] = *v6;
    *v6 = &byte_55FB88;
    sub_3BD870(&v10, v12);
    sub_3BDF80(v12);
    sub_3BDF80(v11);
  }
  else
  {
    sub_3BEBBC(&v10);
  }
  sub_3BA21C(v12, v10, 8);
  tinyobj::LoadMtl(a1, a5, a4, (int)v12);
  sub_3B98A8(v12);
  sub_3BDF80(&v10);
  return a1;
}

