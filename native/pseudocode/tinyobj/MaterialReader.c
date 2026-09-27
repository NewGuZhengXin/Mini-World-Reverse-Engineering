// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: tinyobj::MaterialReader

//======================================================================
// tinyobj::MaterialReader::~MaterialReader()
// address: 0x002B5CF8   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN7tinyobj14MaterialReaderD1Ev'
void __fastcall tinyobj::MaterialReader::~MaterialReader(tinyobj::MaterialReader *this)
{
  *(_DWORD *)this = &off_45E548;
}


//======================================================================
// tinyobj::MaterialReader::~MaterialReader()
// address: 0x002B5DA0   size: 0x16 (22 bytes)
//======================================================================
void __fastcall tinyobj::MaterialReader::~MaterialReader(tinyobj::MaterialReader *this)
{
  *(_DWORD *)this = &off_45E548;
  operator delete(this);
}

