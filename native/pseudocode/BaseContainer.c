// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BaseContainer

//======================================================================
// BaseContainer::~BaseContainer()
// address: 0x002988C4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN13BaseContainerD1Ev'
void __fastcall BaseContainer::~BaseContainer(BaseContainer *this)
{
  *(_DWORD *)this = &off_45C248;
}


//======================================================================
// BaseContainer::~BaseContainer()
// address: 0x00298914   size: 0x16 (22 bytes)
//======================================================================
void __fastcall BaseContainer::~BaseContainer(BaseContainer *this)
{
  *(_DWORD *)this = &off_45C248;
  operator delete(this);
}

