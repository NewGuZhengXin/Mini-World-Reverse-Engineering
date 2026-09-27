// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ChunkProviderFlat

//======================================================================
// ChunkProviderFlat::getSpawnMinY(void)
// address: 0x002670A4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ChunkProviderFlat::getSpawnMinY(ChunkProviderFlat *this)
{
  return 6;
}


//======================================================================
// ChunkProviderFlat::populate(int,int)
// address: 0x002670A8   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ChunkProviderFlat::populate(ChunkProviderFlat *this, int a2, int a3)
{
  ;
}


//======================================================================
// ChunkProviderFlat::~ChunkProviderFlat()
// address: 0x002670AC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17ChunkProviderFlatD1Ev'
void __fastcall ChunkProviderFlat::~ChunkProviderFlat(ChunkProviderFlat *this)
{
  *(_DWORD *)this = &off_45B730;
  ChunkProvider::~ChunkProvider(this);
}


//======================================================================
// ChunkProviderFlat::~ChunkProviderFlat()
// address: 0x002670C8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ChunkProviderFlat::~ChunkProviderFlat(ChunkProviderFlat *this)
{
  ChunkProviderFlat::~ChunkProviderFlat(this);
  operator delete(this);
}


//======================================================================
// ChunkProviderFlat::createChunkData(unsigned short *&,unsigned char *&,int,int)
// address: 0x002670DA   size: 0xDC (220 bytes)
//======================================================================
unsigned __int8 *__fastcall ChunkProviderFlat::createChunkData(
        ChunkProviderFlat *this,
        unsigned __int16 **a2,
        unsigned __int8 **a3,
        int a4,
        int a5)
{
  char *v6; // r4
  int i; // r1
  int j; // r3
  int v9; // r5
  unsigned __int8 *result; // r0
  int k; // r2
  int m; // r3

  v6 = (char *)operator new[](0x10000u);
  j_memset(v6, 0, 0x10000u);
  for ( i = 0; i != 16; ++i )
  {
    for ( j = 0; j != 16; ++j )
    {
      *(_WORD *)&v6[2 * (j | (16 * i))] = 1;
      *(_WORD *)&v6[2 * ((16 * i) | 0x100 | j)] = 104;
      *(_WORD *)&v6[2 * ((16 * i) | 0x200 | j)] = 104;
      *(_WORD *)&v6[2 * ((16 * i) | 0x300 | j)] = 104;
      *(_WORD *)&v6[2 * ((16 * i) | 0x400 | j)] = 101;
      *(_WORD *)&v6[2 * ((16 * i) | 0x500 | j)] = 101;
      v9 = 2 * ((16 * i) | 0x600 | j);
      *(_WORD *)&v6[v9] = 100;
    }
  }
  result = (unsigned __int8 *)operator new[](0x100u);
  for ( k = 0; k != 256; k += 16 )
  {
    for ( m = 0; m != 16; ++m )
      result[k + m] = 1;
  }
  *a2 = (unsigned __int16 *)v6;
  *a3 = result;
  return result;
}


//======================================================================
// ChunkProviderFlat::ChunkProviderFlat(World *)
// address: 0x002671C4   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN17ChunkProviderFlatC1EP5World'
void __fastcall ChunkProviderFlat::ChunkProviderFlat(ChunkProviderFlat *this, World *a2)
{
  BiomeManagerSimple *v3; // r5

  ChunkProvider::ChunkProvider(this, a2, 0, 0);
  *(_DWORD *)this = &off_45B730;
  v3 = (BiomeManagerSimple *)operator new(8u);
  BiomeManagerSimple::BiomeManagerSimple(v3, 1);
  *((_DWORD *)this + 6) = v3;
}


//======================================================================
// ChunkProviderFlat::provideChunk(int,int)
// address: 0x00267204   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ChunkProviderFlat::provideChunk(ChunkProviderFlat *this, int a2, int a3)
{
  int result; // r0

  result = ChunkProvider::provideChunk(this, a2, a3);
  *(_BYTE *)(result + 269) = 1;
  return result;
}

