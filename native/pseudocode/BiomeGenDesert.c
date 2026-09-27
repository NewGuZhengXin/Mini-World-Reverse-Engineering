// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BiomeGenDesert

//======================================================================
// BiomeGenDesert::~BiomeGenDesert()
// address: 0x002B4CDC   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN14BiomeGenDesertD1Ev'
void __fastcall BiomeGenDesert::~BiomeGenDesert(BiomeGenDesert *this)
{
  int v2; // r0

  *(_DWORD *)this = &off_45E0C8;
  v2 = *((_DWORD *)this + 23);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  BiomeGenBase::~BiomeGenBase(this);
}


//======================================================================
// BiomeGenDesert::~BiomeGenDesert()
// address: 0x002B4D04   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BiomeGenDesert::~BiomeGenDesert(BiomeGenDesert *this)
{
  BiomeGenDesert::~BiomeGenDesert(this);
  operator delete(this);
}


//======================================================================
// BiomeGenDesert::BiomeGenDesert(void)
// address: 0x002B4D34   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN14BiomeGenDesertC1Ev'
void __fastcall BiomeGenDesert::BiomeGenDesert(BiomeGenDesert *this)
{
  int v2; // r0

  BiomeGenBase::BiomeGenBase(this);
  *(_DWORD *)this = &off_45E0C8;
  v2 = operator new(8u);
  *(_BYTE *)(v2 + 4) = 0;
  *(_DWORD *)v2 = &off_45E848;
  *((_DWORD *)this + 23) = v2;
}


//======================================================================
// BiomeGenDesert::decorate(World *,ChunkRandGen *,int,int)
// address: 0x002B4D74   size: 0x6E (110 bytes)
//======================================================================
unsigned int __fastcall BiomeGenDesert::decorate(BiomeGenDesert *this, World *a2, ChunkRandGen *a3, int a4, int a5)
{
  unsigned int v8; // r0
  unsigned int result; // r0
  unsigned int v10; // r1
  int v12[2]; // [sp+14h] [bp-10h] BYREF
  int v13; // [sp+1Ch] [bp-8h]

  BiomeGenBase::decorate(this, a2, a3, a4, a5);
  v8 = ChunkRandGen::get(a3);
  v10 = v8 % 0x3E8;
  result = v8 / 0x3E8;
  if ( v10 == 0 )
  {
    v12[0] = a4 + (ChunkRandGen::get(a3) & 0xF) + 8;
    v13 = a5 + (ChunkRandGen::get(a3) & 0xF) + 8;
    v12[1] = World::getTopHeight(a2, v12[0], v13) + 1;
    return (*(int (__fastcall **)(_DWORD, World *, ChunkRandGen *, int *))(**((_DWORD **)this + 23) + 8))(
             *((_DWORD *)this + 23),
             a2,
             a3,
             v12);
  }
  return result;
}

