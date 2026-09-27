// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MapGenBase

//======================================================================
// MapGenBase::generate(ChunkProvider *,World *,int,int,ChunkGenData &)
// address: 0x002678D4   size: 0x110 (272 bytes)
//======================================================================
int __fastcall MapGenBase::generate(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  unsigned int v9; // r2
  __int64 v10; // r2
  unsigned int v11; // r6
  int v12; // r7
  int result; // r0
  int v14; // r6
  unsigned int v15; // r2
  unsigned int v16; // r3
  __int64 v17; // r2
  int v18; // [sp+10h] [bp-44h]
  __int64 v19; // [sp+10h] [bp-44h]
  int v20; // [sp+18h] [bp-3Ch]
  unsigned __int64 v21; // [sp+20h] [bp-34h]
  __int64 v22; // [sp+28h] [bp-2Ch]
  unsigned __int64 v23; // [sp+30h] [bp-24h]

  v7 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 16) = a3;
  v9 = *(_DWORD *)(a3 + 48);
  v20 = v7;
  HIDWORD(v10) = v9 >> 20;
  LODWORD(v10) = (v9 << 12) ^ *(_DWORD *)(a3 + 44);
  ChunkRandGen::setSeed64(a1 + 8, v10);
  ChunkRandGen::_dorand48((unsigned __int16 *)(a1 + 8));
  v11 = *(unsigned __int16 *)(a1 + 12);
  v18 = (*(unsigned __int16 *)(a1 + 10) << 16) | *(unsigned __int16 *)(a1 + 8);
  ChunkRandGen::_dorand48((unsigned __int16 *)(a1 + 8));
  v12 = a4 - v20;
  v23 = __PAIR64__(v11, v18);
  v21 = (a4 - v20) * __PAIR64__(v11, v18);
  LODWORD(v22) = (*(unsigned __int16 *)(a1 + 10) << 16) | *(unsigned __int16 *)(a1 + 8);
  HIDWORD(v22) = *(unsigned __int16 *)(a1 + 12);
  while ( 1 )
  {
    result = a4;
    if ( v12 > a4 + v20 )
      break;
    v14 = a5 - v20;
    v19 = (a5 - v20) * v22;
    while ( v14 <= a5 + v20 )
    {
      v15 = *(_DWORD *)(a3 + 48);
      v16 = v15 >> 20;
      LODWORD(v17) = (v15 << 12) ^ *(_DWORD *)(a3 + 44) ^ v21 ^ v19;
      HIDWORD(v17) = v16 ^ HIDWORD(v21) ^ HIDWORD(v19);
      ChunkRandGen::setSeed64(a1 + 8, v17);
      (*(void (__fastcall **)(int, int, int, int, int, int, int))(*(_DWORD *)a1 + 8))(a1, a3, v12, v14++, a4, a5, a6);
      v19 += v22;
    }
    ++v12;
    v21 += v23;
  }
  return result;
}


//======================================================================
// MapGenBase::~MapGenBase()
// address: 0x002BD1C0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN10MapGenBaseD1Ev'
void __fastcall MapGenBase::~MapGenBase(MapGenBase *this)
{
  *(_DWORD *)this = &off_45EA48;
}


//======================================================================
// MapGenBase::~MapGenBase()
// address: 0x002BD1D4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall MapGenBase::~MapGenBase(MapGenBase *this)
{
  *(_DWORD *)this = &off_45EA48;
  operator delete(this);
}

