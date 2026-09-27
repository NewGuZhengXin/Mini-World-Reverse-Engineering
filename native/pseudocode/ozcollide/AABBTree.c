// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::AABBTree

//======================================================================
// ozcollide::AABBTree::~AABBTree()
// address: 0x001D7EB4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide8AABBTreeD1Ev'
void __fastcall ozcollide::AABBTree::~AABBTree(ozcollide::AABBTree *this)
{
  *(_DWORD *)this = &off_459730;
}


//======================================================================
// ozcollide::AABBTree::~AABBTree()
// address: 0x001D7EC4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ozcollide::AABBTree::~AABBTree(ozcollide::AABBTree *this)
{
  ozcollide::AABBTree::~AABBTree(this);
  operator delete(this);
}


//======================================================================
// ozcollide::AABBTree::AABBTree(ozcollide::AABBTREE_LEAFTYPE,int)
// address: 0x001D7ED8   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide8AABBTreeC1ENS_17AABBTREE_LEAFTYPEEi'
int __fastcall ozcollide::AABBTree::AABBTree(int result, int a2, int a3)
{
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 32) = a3;
  *(_DWORD *)result = &off_459730;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 1069547520;
  return result;
}


//======================================================================
// ozcollide::AABBTree::destroy(void)
// address: 0x001D7EFC   size: 0xE (14 bytes)
//======================================================================
int __fastcall ozcollide::AABBTree::destroy(int this)
{
  if ( this != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)this + 4))(this);
  return this;
}


//======================================================================
// ozcollide::AABBTree::loadBinary(char const*,ozcollide::AABBTree**)
// address: 0x001D7F0C   size: 0x80 (128 bytes)
//======================================================================
int __fastcall ozcollide::AABBTree::loadBinary(ozcollide::AABBTree *this, char *a2, ozcollide::AABBTree **a3)
{
  int v5; // r5
  int Byte; // r5
  ozcollide::AABBTreeSphere **v7; // r2
  int Binary; // r0
  int v10; // [sp+0h] [bp-24h] BYREF
  _BYTE v11[32]; // [sp+4h] [bp-20h] BYREF

  ozcollide::DataIn::DataIn((ozcollide::DataIn *)v11);
  v5 = 17;
  if ( ozcollide::DataIn::open((ozcollide::DataIn *)v11, (const char *)this) != 0 )
  {
    if ( ozcollide::DataIn::readDword((ozcollide::DataIn *)v11) != 1111638337 )
    {
LABEL_3:
      v5 = 18;
      goto LABEL_12;
    }
    ozcollide::DataIn::readDword((ozcollide::DataIn *)v11);
    Byte = ozcollide::DataIn::readByte((ozcollide::DataIn *)v11);
    ozcollide::DataIn::close((ozcollide::DataIn *)v11);
    if ( Byte != 0 )
    {
      if ( Byte == 1 )
      {
        Binary = ozcollide::AABBTreeSphere::loadBinary(this, (ozcollide::DataIn *)&v10, v7);
      }
      else
      {
        if ( Byte != 2 )
          goto LABEL_3;
        Binary = ozcollide::AABBTreeAABB::loadBinary(this, (ozcollide::DataIn *)&v10, v7);
      }
    }
    else
    {
      Binary = ozcollide::AABBTreePoly::loadBinary(this, (ozcollide::DataIn *)&v10, v7);
    }
    v5 = Binary;
    if ( Binary == 0 )
    {
      v5 = 0;
      *(_DWORD *)a2 = v10;
    }
  }
LABEL_12:
  ozcollide::DataIn::~DataIn((ozcollide::DataIn *)v11);
  return v5;
}

