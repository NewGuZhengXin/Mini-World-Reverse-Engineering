// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenerator

//======================================================================
// WorldGenerator::~WorldGenerator()
// address: 0x00266EE4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN14WorldGeneratorD1Ev'
void __fastcall WorldGenerator::~WorldGenerator(WorldGenerator *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenerator::setScale(float,float,float)
// address: 0x00266EF4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall WorldGenerator::setScale(WorldGenerator *this, float a2, float a3, float a4)
{
  ;
}


//======================================================================
// WorldGenerator::~WorldGenerator()
// address: 0x00266F08   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenerator::~WorldGenerator(WorldGenerator *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenerator::setBlockAndMetadata(World *,int,int,int,int,int)
// address: 0x0029CEB0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall WorldGenerator::setBlockAndMetadata(
        WorldGenerator *this,
        World *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // r4
  int v8; // r4
  _DWORD v10[3]; // [sp+Ch] [bp-Ch] BYREF

  v10[0] = a3;
  v7 = *((unsigned __int8 *)this + 4);
  v10[1] = a4;
  v10[2] = a5;
  if ( v7 != 0 )
    v8 = 3;
  else
    v8 = 2;
  return World::setBlockAll(a2, (const WCoord *)v10, a6, a7, v8);
}


//======================================================================
// WorldGenerator::setBlock(World *,int,int,int,int)
// address: 0x002A8888   size: 0x30 (48 bytes)
//======================================================================
int __fastcall WorldGenerator::setBlock(WorldGenerator *this, World *a2, int a3, int a4, int a5, int a6)
{
  _DWORD v7[4]; // [sp+Ch] [bp-10h] BYREF

  v7[1] = a4;
  v7[0] = a3;
  v7[2] = a5;
  if ( *((_BYTE *)this + 4) != 0 )
    return World::setBlockAll(a2, (const WCoord *)v7, a6, 0, 3);
  else
    return World::setBlockAll(a2, (const WCoord *)v7, a6, *((unsigned __int8 *)this + 4), 2);
}


//======================================================================
// WorldGenerator::setBlock(World *,WCoord const&,int)
// address: 0x002AFB46   size: 0x22 (34 bytes)
//======================================================================
__int64 __fastcall WorldGenerator::setBlock(WorldGenerator *this, World *a2, const WCoord *a3, int a4)
{
  __int64 v5; // [sp+0h] [bp-8h]

  HIDWORD(v5) = a2;
  if ( *((_BYTE *)this + 4) != 0 )
    World::setBlockAll(a2, a3, a4, 0, 3);
  else
    World::setBlockAll(a2, a3, a4, *((unsigned __int8 *)this + 4), 2);
  return v5;
}

