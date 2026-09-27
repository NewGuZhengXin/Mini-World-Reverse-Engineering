// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockJar

//======================================================================
// BlockJar::getGeomName(void)
// address: 0x00267B7C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockJar::getGeomName(BlockJar *this)
{
  return "jar";
}


//======================================================================
// BlockJar::getProtoBlockGeomID(int *,int *)
// address: 0x00267B88   size: 0xC (12 bytes)
//======================================================================
int __fastcall BlockJar::getProtoBlockGeomID(BlockJar *this, int *a2, int *a3)
{
  *a2 = 0;
  *a3 = 2;
  return 1;
}


//======================================================================
// BlockJar::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x00267B94   size: 0x5C (92 bytes)
//======================================================================
unsigned int __fastcall BlockJar::onBlockPlaced(int a1, int a2, int *a3)
{
  unsigned __int64 v5; // kr00_8
  int v6; // r6
  int v7; // r2
  __int64 v8; // r0
  __int64 v9; // r2
  __int64 v10; // r0
  int v12; // [sp+0h] [bp-Ch] BYREF
  int v13; // [sp+4h] [bp-8h]
  int *v14; // [sp+8h] [bp-4h]

  v12 = a1;
  v13 = a2;
  v14 = a3;
  ChunkRandGen::ChunkRandGen((ChunkRandGen *)&v12);
  v5 = (unsigned __int64)*(unsigned int *)(a2 + 48) << 12;
  v6 = (*(_DWORD *)(a2 + 48) << 12) ^ *(_DWORD *)(a2 + 44);
  v7 = a3[1];
  HIDWORD(v8) = (*a3 >> 31) ^ HIDWORD(v5);
  HIDWORD(v9) = (v7 >> 31) ^ HIDWORD(v5);
  LODWORD(v9) = v7 ^ v6;
  LODWORD(v8) = *a3 ^ v6;
  v10 = v8 * v9;
  LODWORD(v9) = a3[2];
  HIDWORD(v9) = ((int)v9 >> 31) ^ HIDWORD(v5);
  LODWORD(v9) = v9 ^ v6;
  ChunkRandGen::setSeed64((int)&v12, v10 * v9);
  ChunkRandGen::_dorand48((unsigned __int16 *)&v12);
  return (((unsigned __int16)v13 << 16) | (unsigned int)HIWORD(v12)) % 3;
}


//======================================================================
// BlockJar::~BlockJar()
// address: 0x00267BF0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN8BlockJarD1Ev'
void __fastcall BlockJar::~BlockJar(BlockJar *this)
{
  *(_DWORD *)this = &off_45B960;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockJar::~BlockJar()
// address: 0x00267C0C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockJar::~BlockJar(BlockJar *this)
{
  BlockJar::~BlockJar(this);
  operator delete(this);
}


//======================================================================
// BlockJar::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x00267C1E   size: 0x28 (40 bytes)
//======================================================================
int __fastcall BlockJar::getBlockGeomID(int a1, int *a2, _DWORD *a3, int a4, _DWORD *a5)
{
  int v5; // r3

  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 != 0 )
    v5 = (int)*(unsigned __int16 *)(2 * ((16 * a5[2]) | (a5[1] << 8) | *a5) + v5) >> 12;
  *a2 = v5;
  *a3 = 2;
  return 1;
}


//======================================================================
// BlockJar::dropBlockAsItem(World *,WCoord const&,int,BLOCK_MINE_TYPE,float)
// address: 0x00267C46   size: 0x72 (114 bytes)
//======================================================================
void __fastcall BlockJar::dropBlockAsItem(BlockMaterial *a1, World *a2, const WCoord *a3, int a4, int a5, float a6)
{
  unsigned int i; // r5
  void *v10; // [sp+14h] [bp-10h] BYREF
  int v11; // [sp+18h] [bp-Ch]
  int v12; // [sp+1Ch] [bp-8h]

  if ( a5 != 0 && COERCE_FLOAT(GenRandomFloat()) <= a6 )
  {
    v10 = nullptr;
    v11 = 0;
    v12 = 0;
    WorldContainerMgr::generateChestItems(&v10, *((_DWORD *)a1 + 8), 0);
    for ( i = 0; i < (v11 - (int)v10) >> 3; ++i )
      BlockMaterial::doDropItem(a1, a2, a3, *((_DWORD *)v10 + 2 * i), *((_DWORD *)v10 + 2 * i + 1));
    if ( v10 != nullptr )
      operator delete(v10);
  }
}


//======================================================================
// BlockJar::newObject(void)
// address: 0x002C1A30   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockJar::newObject(BlockJar *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45B960;
  return v1;
}

