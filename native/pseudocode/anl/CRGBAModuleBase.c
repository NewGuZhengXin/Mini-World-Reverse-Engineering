// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CRGBAModuleBase

//======================================================================
// anl::CRGBAModuleBase::~CRGBAModuleBase()
// address: 0x00315D98   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN3anl15CRGBAModuleBaseD1Ev'
void __fastcall anl::CRGBAModuleBase::~CRGBAModuleBase(anl::CRGBAModuleBase *this)
{
  *(_DWORD *)this = &off_4634C8;
}


//======================================================================
// anl::CRGBAModuleBase::~CRGBAModuleBase()
// address: 0x00315DB8   size: 0x16 (22 bytes)
//======================================================================
void __fastcall anl::CRGBAModuleBase::~CRGBAModuleBase(anl::CRGBAModuleBase *this)
{
  *(_DWORD *)this = &off_4634C8;
  operator delete(this);
}

