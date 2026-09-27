// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockBed

//======================================================================
// BlockBed::newObject(void)
// address: 0x002C1E7C   size: 0x1C (28 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockBed::newObject(BlockBed *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x3Cu);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_460428;
  return v1;
}


//======================================================================
// BlockBed::getGeomName(void)
// address: 0x002D1BB4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockBed::getGeomName(BlockBed *this)
{
  return "bed";
}


//======================================================================
// BlockBed::dropBlockAsItem(World *,WCoord const&,int,BLOCK_MINE_TYPE,float)
// address: 0x002D1BC0   size: 0x14 (20 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> BlockBed::dropBlockAsItem(
        int a1,
        World *a2,
        const WCoord *a3,
        char a4,
        int a5,
        float a6)
{
  if ( (a4 & 4) == 0 )
    BlockMaterial::dropBlockAsItem(a1, a2, a3, a4, a5, a6);
}


//======================================================================
// BlockBed::~BlockBed()
// address: 0x002D1BD4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN8BlockBedD1Ev'
void __fastcall BlockBed::~BlockBed(BlockBed *this)
{
  *(_DWORD *)this = &off_460428;
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockBed::~BlockBed()
// address: 0x002D1BF0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockBed::~BlockBed(BlockBed *this)
{
  BlockBed::~BlockBed(this);
  operator delete(this);
}


//======================================================================
// BlockBed::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x002D1C02   size: 0x32 (50 bytes)
//======================================================================
int __fastcall BlockBed::getBlockGeomID(int a1, int *a2, int *a3, int a4, _DWORD *a5)
{
  int v5; // r3
  int v6; // r0

  v5 = *(_DWORD *)(a4 + 20);
  if ( v5 != 0 )
    v5 = (int)*(unsigned __int16 *)(2 * ((16 * a5[2]) | (a5[1] << 8) | *a5) + v5) >> 12;
  v6 = v5 & 4;
  if ( (v5 & 4) != 0 )
    v6 = 1;
  *a2 = v6;
  *a3 = v5 & 3;
  return 1;
}


//======================================================================
// BlockBed::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002D1C34   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall BlockBed::onNeighborBlockChange(BlockBed *this, World *a2, const WCoord *a3, int a4)
{
  int BlockData; // r7
  int v8; // r2
  int v9; // r0
  int *v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int result; // r0
  int v15; // r12
  int *v16; // r3
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // [sp+8h] [bp-1Ch]
  int v21; // [sp+Ch] [bp-18h]
  _DWORD v22[4]; // [sp+14h] [bp-10h] BYREF

  BlockData = World::getBlockData(a2, a3, (int)a3, a4);
  v20 = *((_DWORD *)a3 + 2);
  v8 = BlockData & 3;
  v9 = *((_DWORD *)a3 + 1);
  v21 = *(_DWORD *)a3;
  if ( (BlockData & 4) != 0 )
  {
    v10 = &g_DirectionCoord[3 * v8];
    v11 = v10[2];
    v12 = v10[1];
    v13 = *v10;
    v22[1] = v9 + v12;
    v22[0] = v21 + v13;
    v22[2] = v20 + v11;
    result = World::getBlockID(a2, (const WCoord *)v22, v20 + v11, v21 + v13);
    if ( result != *((_DWORD *)this + 8) )
      return World::setBlockAir(a2, a3);
  }
  else
  {
    v15 = v8 + 1;
    if ( (BlockData & 1) != 0 )
      v15 = v8 - 1;
    v16 = &g_DirectionCoord[3 * v15];
    v17 = v9 + v16[1];
    v18 = v16[2];
    v19 = v21 + *v16;
    v22[1] = v17;
    v22[0] = v19;
    v22[2] = v20 + v18;
    result = World::getBlockID(a2, (const WCoord *)v22, v20 + v18, v19);
    if ( result != *((_DWORD *)this + 8) )
    {
      World::setBlockAir(a2, a3);
      return (*(int (__fastcall **)(BlockBed *, World *, const WCoord *, int, int, int))(*(_DWORD *)this + 180))(
               this,
               a2,
               a3,
               BlockData,
               1,
               1065353216);
    }
  }
  return result;
}


//======================================================================
// BlockBed::setBedOccupied(World *,WCoord const&,bool)
// address: 0x002D1D00   size: 0x26 (38 bytes)
//======================================================================
unsigned int *__fastcall BlockBed::setBedOccupied(BlockBed *this, World *a2, const WCoord *a3, bool a4)
{
  int BlockData; // r0
  int v8; // r2

  BlockData = World::getBlockData(this, a2, (int)a3, a4);
  if ( a3 != nullptr )
    v8 = BlockData | 8;
  else
    v8 = BlockData & 0xFFFFFFF7;
  return World::setBlockData(this, a2, v8, 4);
}


//======================================================================
// BlockBed::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002D1D28   size: 0x192 (402 bytes)
//======================================================================
int __fastcall BlockBed::onBlockActivated(int a1, World *this, int *a3, int a4, ClientPlayer *a5)
{
  int v6; // r0
  int v7; // r1
  int v8; // r2
  char BlockData; // r0
  char v10; // r6
  int v11; // r6
  int v12; // r3
  int v13; // r2
  int BlockID; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r7
  unsigned int i; // r4
  int v19; // r3
  unsigned int v20; // r0
  int v21; // r1
  bool v22; // r3
  int v23; // r6
  int v24; // r3
  unsigned int v26; // [sp+10h] [bp-34h]
  unsigned int v28; // [sp+14h] [bp-30h]
  int v29; // [sp+1Ch] [bp-28h] BYREF
  int v30; // [sp+20h] [bp-24h]
  int v31; // [sp+24h] [bp-20h]
  int v32; // [sp+28h] [bp-1Ch] BYREF
  int v33; // [sp+2Ch] [bp-18h]
  int v34; // [sp+30h] [bp-14h]
  int v35[4]; // [sp+34h] [bp-10h] BYREF

  if ( *((_BYTE *)this + 68) == 0 )
  {
    v6 = *a3;
    v7 = a3[1];
    v8 = a3[2];
    v29 = v6;
    v30 = v7;
    v31 = v8;
    BlockData = World::getBlockData(this, (const WCoord *)&v29, v8, 0);
    v10 = BlockData;
    if ( (BlockData & 4) == 0 )
    {
      v11 = 8 * (BlockData & 3);
      v12 = *(_DWORD *)((char *)&unk_446868 + v11 + 4);
      v29 += *(_DWORD *)((char *)&unk_446868 + v11);
      v13 = v31;
      v31 += v12;
      BlockID = World::getBlockID(this, (const WCoord *)&v29, v13, v31);
      v16 = *(_DWORD *)(a1 + 32);
      if ( BlockID != v16 )
        return 1;
      v10 = World::getBlockData(this, (const WCoord *)&v29, v15, v16);
    }
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 31) + 24))(*((_DWORD *)this + 31)) != 0 )
    {
      if ( (v10 & 8) != 0 )
      {
        v17 = *((_DWORD *)this + 33);
        for ( i = 0; ; ++i )
        {
          v19 = *(_DWORD *)(v17 + 16);
          if ( i >= (*(_DWORD *)(v17 + 20) - v19) >> 2 )
            break;
          if ( (*(_DWORD *)(*(_DWORD *)(4 * i + v19) + 60) & 0x100) != 0 )
          {
            ClientActor::getPosition((ClientActor *)v35);
            v28 = CoordDivBlock(v35[0]);
            v26 = CoordDivBlock(v35[1]);
            v20 = CoordDivBlock(v35[2]);
            if ( v28 == v29 && v26 == v30 && v20 == v31 )
              return 1;
          }
        }
        BlockBed::setBedOccupied(this, (World *)&v29, nullptr, v19);
      }
      v21 = ClientPlayer::sleepInBed(a5, (const WCoord *)&v29);
      if ( v21 != 0 )
        GameEventQue::postInfoTips((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, v21);
      else
        BlockBed::setBedOccupied(this, (World *)&v29, (const WCoord *)((char *)&dword_0 + 1), v22);
    }
    else
    {
      BlockCenterCoord(&v32, &v29);
      World::setBlockAir(this, (const WCoord *)&v29);
      v23 = 8 * (v10 & 3);
      v24 = *(_DWORD *)((char *)&unk_446868 + v23 + 4);
      v29 -= *(_DWORD *)((char *)&unk_446868 + v23);
      v31 -= v24;
      if ( World::getBlockID(this, (const WCoord *)&v29, v29, v31) == *(_DWORD *)(a1 + 32) )
      {
        World::setBlockAir(this, (const WCoord *)&v29);
        BlockCenterCoord(v35, &v29);
        v32 = (v32 + v35[0]) / 2;
        v33 = (v33 + v35[1]) / 2;
        v34 = (v34 + v35[2]) / 2;
      }
      World::createExplosion(this, nullptr, (const WCoord *)&v32, 5, true, true);
    }
  }
  return 1;
}


//======================================================================
// BlockBed::getNearestEmptyChunkCoordinates(WCoord &,World *,WCoord const&,int)
// address: 0x002D1EF4   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall BlockBed::getNearestEmptyChunkCoordinates(
        BlockBed *this,
        WCoord *a2,
        World *a3,
        const WCoord *a4,
        int a5)
{
  int v7; // r3
  int v8; // r2
  int v9; // r6
  int j; // r5
  int v11; // r3
  int v12; // r4
  int i; // [sp+4h] [bp-30h]
  int v15; // [sp+8h] [bp-2Ch]
  const WCoord *v17; // [sp+10h] [bp-24h]
  int v18; // [sp+14h] [bp-20h]
  int v19; // [sp+18h] [bp-1Ch]
  int v20; // [sp+1Ch] [bp-18h]
  _DWORD v21[4]; // [sp+24h] [bp-10h] BYREF

  v17 = a4;
  v18 = World::getBlockData(a2, a3, (int)a3, (int)a4) & 3;
  for ( i = 0; i != 2; ++i )
  {
    v7 = *((_DWORD *)a3 + 2) - dword_446868[2 * v18 + 1] * i;
    v8 = *(_DWORD *)a3 - dword_446868[2 * v18] * i;
    v9 = v8 - 1;
    v15 = v7 - 1;
    v19 = v8 + 1;
    v20 = v7 + 1;
    while ( v9 <= v19 )
    {
      for ( j = v15; j <= v20; ++j )
      {
        v11 = *((_DWORD *)a3 + 1) - 1;
        v21[0] = v9;
        v21[1] = v11;
        v21[2] = j;
        if ( World::doesBlockHaveSolidTopSurface(a2, (const WCoord *)v21) != 0
          && CanStandOnBlock(a2, v9, *((_DWORD *)a3 + 1), j)
          && CanStandOnBlock(a2, v9, *((_DWORD *)a3 + 1) + 1, j) )
        {
          if ( (int)v17 <= 0 )
          {
            v12 = *((_DWORD *)a3 + 1);
            *(_DWORD *)this = v9;
            *((_DWORD *)this + 1) = v12;
            *((_DWORD *)this + 2) = j;
            return 1;
          }
          v17 = (const WCoord *)((char *)v17 - 1);
        }
      }
      ++v9;
    }
  }
  return 0;
}

