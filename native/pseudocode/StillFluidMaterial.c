// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: StillFluidMaterial

//======================================================================
// StillFluidMaterial::getTickRandomly(void)
// address: 0x0026AF2A   size: 0xA (10 bytes)
//======================================================================
int __fastcall StillFluidMaterial::getTickRandomly(StillFluidMaterial *this)
{
  return FluidBlockMaterial::isLava(this, *((_DWORD *)this + 8));
}


//======================================================================
// StillFluidMaterial::~StillFluidMaterial()
// address: 0x0026AF34   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18StillFluidMaterialD1Ev'
void __fastcall StillFluidMaterial::~StillFluidMaterial(StillFluidMaterial *this)
{
  *(_DWORD *)this = &off_45BE60;
  FluidBlockMaterial::~FluidBlockMaterial(this);
}


//======================================================================
// StillFluidMaterial::~StillFluidMaterial()
// address: 0x0026AF50   size: 0x12 (18 bytes)
//======================================================================
void __fastcall StillFluidMaterial::~StillFluidMaterial(StillFluidMaterial *this)
{
  StillFluidMaterial::~StillFluidMaterial(this);
  operator delete(this);
}


//======================================================================
// StillFluidMaterial::setNotStationary(World *,WCoord const&)
// address: 0x0026AF62   size: 0x44 (68 bytes)
//======================================================================
int __fastcall StillFluidMaterial::setNotStationary(StillFluidMaterial *this, BlockTickMgr **a2, const WCoord *a3)
{
  int BlockData; // r0
  BlockTickMgr *v7; // r7
  int v8; // r6
  int v9; // r0
  int v11; // [sp+0h] [bp-Ch]

  BlockData = World::getBlockData((World *)a2, a3);
  World::setBlockAll((World *)a2, a3, *((_DWORD *)this + 8) + 1, BlockData, 2);
  v7 = a2[34];
  v8 = *((_DWORD *)this + 8);
  v9 = (*(int (__fastcall **)(StillFluidMaterial *))(*(_DWORD *)this + 100))(this);
  BlockTickMgr::scheduleBlockUpdate(v7, a3, v8 + 1, v9, 0);
  return v11;
}


//======================================================================
// StillFluidMaterial::isFlammable(World *,WCoord const&)
// address: 0x0026AFA6   size: 0x16 (22 bytes)
//======================================================================
unsigned int __fastcall StillFluidMaterial::isFlammable(StillFluidMaterial *this, World *a2, const WCoord *a3)
{
  int BlockMaterial; // r0

  BlockMaterial = World::getBlockMaterial(a2, a3);
  return (unsigned int)((*(int *)(*(_DWORD *)(BlockMaterial + 36) + 48) >> 31)
                      - *(_DWORD *)(*(_DWORD *)(BlockMaterial + 36) + 48)) >> 31;
}


//======================================================================
// StillFluidMaterial::blockTick(World *,WCoord const&)
// address: 0x0026AFBC   size: 0x162 (354 bytes)
//======================================================================
unsigned int __fastcall StillFluidMaterial::blockTick(StillFluidMaterial *this, World *a2, const WCoord *a3)
{
  unsigned int result; // r0
  int v6; // r0
  int v7; // r2
  int v8; // r4
  int BlockID; // r1
  int *v10; // r4
  int v11; // r1
  int v12; // r12
  int v13; // r6
  int i; // [sp+8h] [bp-2Ch]
  int v15; // [sp+Ch] [bp-28h]
  signed int v17; // [sp+14h] [bp-20h]
  int v18; // [sp+14h] [bp-20h]
  int v19; // [sp+18h] [bp-1Ch] BYREF
  int v20; // [sp+1Ch] [bp-18h]
  int v21; // [sp+20h] [bp-14h]
  int v22; // [sp+24h] [bp-10h] BYREF
  int v23; // [sp+28h] [bp-Ch]
  int v24; // [sp+2Ch] [bp-8h]

  result = FluidBlockMaterial::isLava(this, *((_DWORD *)this + 8));
  if ( result != 0 )
  {
    v6 = *(_DWORD *)a3;
    v7 = *((_DWORD *)a3 + 1);
    v8 = *((_DWORD *)a3 + 2);
    v19 = v6;
    v20 = v7;
    v21 = v8;
    v17 = GenRandomInt(0, 2);
    for ( i = 0; ; ++i )
    {
      result = v17;
      if ( i >= v17 )
      {
        if ( v17 == 0 )
        {
          v13 = 3;
          v18 = v19;
          v15 = v21;
          do
          {
            v19 = v18 + GenRandomInt(-1, 1);
            v21 = v15 + GenRandomInt(-1, 1);
            v24 = v21;
            v22 = v19;
            v23 = v20 + 1;
            result = World::getBlockID(a2, (const WCoord *)&v22);
            if ( result == 0 )
            {
              result = StillFluidMaterial::isFlammable(this, a2, (const WCoord *)&v19);
              if ( result != 0 )
              {
                v23 = v20 + 1;
                v24 = v21;
                v22 = v19;
                result = World::setBlockAll(a2, (const WCoord *)&v22, 500, 0, 3);
              }
            }
            --v13;
          }
          while ( v13 != 0 );
        }
        return result;
      }
      v19 += GenRandomInt(-1, 1);
      ++v20;
      v21 += GenRandomInt(-1, 1);
      BlockID = World::getBlockID(a2, (const WCoord *)&v19);
      if ( BlockID == 0 )
        break;
      result = BlockMaterialMgr::getMaterial(
                 (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                 BlockID);
      if ( *(_DWORD *)(*(_DWORD *)(result + 36) + 12) == 1 )
        return result;
LABEL_10:
      ;
    }
    v10 = g_DirectionCoord;
    while ( 1 )
    {
      v11 = v20 + v10[1];
      v12 = v21 + v10[2];
      v22 = v19 + *v10;
      v23 = v11;
      v24 = v12;
      if ( StillFluidMaterial::isFlammable(this, a2, (const WCoord *)&v22) != 0 )
        return World::setBlockAll(a2, (const WCoord *)&v19, 500, 0, 3);
      v10 += 3;
      if ( v10 == (int *)&slotelements )
        goto LABEL_10;
    }
  }
  return result;
}


//======================================================================
// StillFluidMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x0026B128   size: 0x26 (38 bytes)
//======================================================================
int __fastcall StillFluidMaterial::onNeighborBlockChange(StillFluidMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int result; // r0

  FluidBlockMaterial::onNeighborBlockChange(this, a2, a3, a4);
  result = World::getBlockID(a2, a3);
  if ( result == *((_DWORD *)this + 8) )
    return StillFluidMaterial::setNotStationary(this, (BlockTickMgr **)a2, a3);
  return result;
}


//======================================================================
// StillFluidMaterial::newObject(void)
// address: 0x002C1CF0   size: 0x1C (28 bytes)
//======================================================================
FluidBlockMaterial *__fastcall StillFluidMaterial::newObject(StillFluidMaterial *this)
{
  FluidBlockMaterial *v1; // r4

  v1 = (FluidBlockMaterial *)operator new(0x50u);
  FluidBlockMaterial::FluidBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45BE60;
  return v1;
}

