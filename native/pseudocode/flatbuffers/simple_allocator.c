// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: flatbuffers::simple_allocator

//======================================================================
// flatbuffers::simple_allocator::~simple_allocator()
// address: 0x002988B4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN11flatbuffers16simple_allocatorD1Ev'
void __fastcall flatbuffers::simple_allocator::~simple_allocator(flatbuffers::simple_allocator *this)
{
  *(_DWORD *)this = &off_45C230;
}


//======================================================================
// flatbuffers::simple_allocator::~simple_allocator()
// address: 0x002988F8   size: 0x16 (22 bytes)
//======================================================================
void __fastcall flatbuffers::simple_allocator::~simple_allocator(flatbuffers::simple_allocator *this)
{
  *(_DWORD *)this = &off_45C230;
  operator delete(this);
}


//======================================================================
// flatbuffers::simple_allocator::allocate(unsigned int)const
// address: 0x0029894C   size: 0xA (10 bytes)
//======================================================================
int __fastcall flatbuffers::simple_allocator::allocate(flatbuffers::simple_allocator *this, unsigned int a2)
{
  return operator new[](a2);
}


//======================================================================
// flatbuffers::simple_allocator::deallocate(unsigned char *)const
// address: 0x00298956   size: 0xE (14 bytes)
//======================================================================
void __fastcall flatbuffers::simple_allocator::deallocate(flatbuffers::simple_allocator *this, unsigned __int8 *a2)
{
  if ( a2 != nullptr )
    operator delete[](a2);
}

