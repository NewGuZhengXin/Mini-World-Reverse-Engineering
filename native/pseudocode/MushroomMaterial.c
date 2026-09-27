// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MushroomMaterial

//======================================================================
// MushroomMaterial::getTickRandomly(void)
// address: 0x002655B4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall MushroomMaterial::getTickRandomly(MushroomMaterial *this)
{
  return 1;
}


//======================================================================
// MushroomMaterial::canBlockStay(World *,WCoord const&)
// address: 0x002655B8   size: 0x58 (88 bytes)
//======================================================================
int __fastcall MushroomMaterial::canBlockStay(MushroomMaterial *this, World *a2, const WCoord *a3)
{
  int v6; // r0
  int v7; // r2
  int v8; // r7
  int BlockID; // r7
  int result; // r0
  int FullBlockLightValue; // r3
  _DWORD v12[4]; // [sp+4h] [bp-10h] BYREF

  v6 = *((_DWORD *)a3 + 1) + dword_51665C;
  v7 = *((_DWORD *)a3 + 2) + dword_516660;
  v8 = *(_DWORD *)a3;
  v12[1] = v6;
  v12[0] = v8 + dword_516658;
  v12[2] = v7;
  BlockID = World::getBlockID(a2, (const WCoord *)v12);
  result = 1;
  if ( BlockID != 233 )
  {
    FullBlockLightValue = World::getFullBlockLightValue(a2, a3);
    result = 0;
    if ( FullBlockLightValue <= 12 )
      return (*(int (__fastcall **)(MushroomMaterial *, int))(*(_DWORD *)this + 188))(this, BlockID);
  }
  return result;
}


//======================================================================
// MushroomMaterial::canThisPlantGrowOnThisBlockID(int)
// address: 0x00265614   size: 0x16 (22 bytes)
//======================================================================
int __fastcall MushroomMaterial::canThisPlantGrowOnThisBlockID(MushroomMaterial *this, int a2)
{
  int Material; // r0

  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a2);
  return (*(int (__fastcall **)(int))(*(_DWORD *)Material + 60))(Material);
}


//======================================================================
// MushroomMaterial::~MushroomMaterial()
// address: 0x00265630   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16MushroomMaterialD1Ev'
void __fastcall MushroomMaterial::~MushroomMaterial(MushroomMaterial *this)
{
  *(_DWORD *)this = &off_45B390;
  ColorHerbMaterial::~ColorHerbMaterial(this);
}


//======================================================================
// MushroomMaterial::~MushroomMaterial()
// address: 0x0026564C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MushroomMaterial::~MushroomMaterial(MushroomMaterial *this)
{
  MushroomMaterial::~MushroomMaterial(this);
  operator delete(this);
}


//======================================================================
// MushroomMaterial::blockTick(World *,WCoord const&)
// address: 0x0026565E   size: 0x16C (364 bytes)
//======================================================================
int __fastcall MushroomMaterial::blockTick(MushroomMaterial *this, World *a2, const WCoord *a3)
{
  int result; // r0
  int v7; // r6
  int v8; // r6
  int (__fastcall *v9)(MushroomMaterial *, World *, _DWORD *); // r3
  int v10; // r5
  int v11; // r0
  int (__fastcall *v12)(MushroomMaterial *, World *, _DWORD *); // r3
  int v13; // [sp+10h] [bp-2Ch]
  int v14; // [sp+14h] [bp-28h]
  int v15; // [sp+18h] [bp-24h]
  int v16; // [sp+1Ch] [bp-20h]
  int v17; // [sp+20h] [bp-1Ch]
  int v18; // [sp+24h] [bp-18h]
  _DWORD v19[4]; // [sp+2Ch] [bp-10h] BYREF

  result = World::genRandomInt(a2, 0, 24);
  if ( result == 0 )
  {
    result = World::hasBlockInRange(a2, *((_DWORD *)this + 8), a3, 4, -1, 1, 5);
    if ( result == 0 )
    {
      v17 = *((_DWORD *)a3 + 1);
      v18 = *(_DWORD *)a3;
      v16 = *((_DWORD *)a3 + 2);
      v14 = v18 + World::genRandomInt(a2, -1, 1);
      v7 = v17 + World::genRandomInt(a2, 0, 1);
      v13 = v7 - World::genRandomInt(a2, 0, 1);
      v15 = 4;
      v8 = v16 + World::genRandomInt(a2, -1, 1);
      do
      {
        v19[0] = v14;
        v19[1] = v13;
        v19[2] = v8;
        if ( World::getBlockID(a2, (const WCoord *)v19) == 0 )
        {
          v9 = *(int (__fastcall **)(MushroomMaterial *, World *, _DWORD *))(*(_DWORD *)this + 160);
          v19[0] = v14;
          v19[2] = v8;
          v19[1] = v13;
          if ( v9(this, a2, v19) != 0 )
          {
            v16 = v8;
            v17 = v13;
            v18 = v14;
          }
        }
        v14 = v18 + World::genRandomInt(a2, -1, 1);
        v10 = v17 + World::genRandomInt(a2, 0, 1);
        v13 = v10 - World::genRandomInt(a2, 0, 1);
        v11 = World::genRandomInt(a2, -1, 1);
        v8 = v16 + v11;
        --v15;
      }
      while ( v15 != 0 );
      v19[0] = v14;
      v19[1] = v13;
      v19[2] = v16 + v11;
      result = World::getBlockID(a2, (const WCoord *)v19);
      if ( result == 0 )
      {
        v12 = *(int (__fastcall **)(MushroomMaterial *, World *, _DWORD *))(*(_DWORD *)this + 160);
        v19[0] = v14;
        v19[2] = v8;
        v19[1] = v13;
        result = v12(this, a2, v19);
        if ( result != 0 )
        {
          v19[2] = v8;
          v19[0] = v14;
          v19[1] = v13;
          return World::setBlockAll(a2, (const WCoord *)v19, *((_DWORD *)this + 8), 0, 2);
        }
      }
    }
  }
  return result;
}


//======================================================================
// MushroomMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002657CA   size: 0x24 (36 bytes)
//======================================================================
int __fastcall MushroomMaterial::canPlaceBlockAt(MushroomMaterial *this, World *a2, const WCoord *a3)
{
  int canPlaceBlockAt; // r3
  int result; // r0

  canPlaceBlockAt = HerbMaterial::canPlaceBlockAt(this, a2, a3);
  result = 0;
  if ( canPlaceBlockAt != 0 )
    return (*(int (__fastcall **)(MushroomMaterial *, World *, const WCoord *))(*(_DWORD *)this + 160))(this, a2, a3);
  return result;
}


//======================================================================
// MushroomMaterial::newObject(void)
// address: 0x002C18FC   size: 0x1C (28 bytes)
//======================================================================
ColorHerbMaterial *__fastcall MushroomMaterial::newObject(MushroomMaterial *this)
{
  ColorHerbMaterial *v1; // r4

  v1 = (ColorHerbMaterial *)operator new(0x50u);
  ColorHerbMaterial::ColorHerbMaterial(v1);
  *(_DWORD *)v1 = &off_45B390;
  return v1;
}

