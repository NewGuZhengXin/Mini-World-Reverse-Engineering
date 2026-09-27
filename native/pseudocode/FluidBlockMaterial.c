// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FluidBlockMaterial

//======================================================================
// FluidBlockMaterial::isSolid(void)
// address: 0x0026AF12   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::isSolid(FluidBlockMaterial *this)
{
  return 0;
}


//======================================================================
// FluidBlockMaterial::isLiquid(void)
// address: 0x0026AF16   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::isLiquid(FluidBlockMaterial *this)
{
  return 1;
}


//======================================================================
// FluidBlockMaterial::isOpaque(void)
// address: 0x0026AF1A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::isOpaque(FluidBlockMaterial *this)
{
  return 0;
}


//======================================================================
// FluidBlockMaterial::isOpaqueCube(void)
// address: 0x0026AF1E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::isOpaqueCube(FluidBlockMaterial *this)
{
  return 0;
}


//======================================================================
// FluidBlockMaterial::renderAsNormalBlock(void)
// address: 0x0026AF22   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::renderAsNormalBlock(FluidBlockMaterial *this)
{
  return 0;
}


//======================================================================
// FluidBlockMaterial::canBlocksMovement(World *,WCoord const&)
// address: 0x0026AF26   size: 0x4 (4 bytes)
//======================================================================
int FluidBlockMaterial::canBlocksMovement()
{
  return 0;
}


//======================================================================
// FluidBlockMaterial::getTickRandomly(void)
// address: 0x002E0B9C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::getTickRandomly(FluidBlockMaterial *this)
{
  return 1;
}


//======================================================================
// FluidBlockMaterial::isAssociatedBlockID(int)
// address: 0x002E0BA0   size: 0x1A (26 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::isAssociatedBlockID(FluidBlockMaterial *this, int a2)
{
  return (*((_DWORD *)this + 8) + 1) / -2
       + ((*((_DWORD *)this + 8) + 1) / 2 == (a2 + 1) / 2)
       + (*((_DWORD *)this + 8) + 1) / 2;
}


//======================================================================
// FluidBlockMaterial::getFaceMtl(DirectionType,int)
// address: 0x002E0BBA   size: 0x4 (4 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::getFaceMtl(int a1)
{
  return *(_DWORD *)(a1 + 64);
}


//======================================================================
// FluidBlockMaterial::getFaceTexture(DirectionType,BlockTexDesc &)
// address: 0x002E0BBE   size: 0x12 (18 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::getFaceTexture(int a1, int a2, int a3)
{
  *(_DWORD *)a3 = 3;
  *(_BYTE *)(a3 + 4) = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 60), 0);
}


//======================================================================
// FluidBlockMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002E0BD0   size: 0x12 (18 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_DWORD *)a3 = 3;
  *(_BYTE *)(a3 + 4) = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 60), 0);
}


//======================================================================
// FluidBlockMaterial::~FluidBlockMaterial()
// address: 0x002E0BE4   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN18FluidBlockMaterialD1Ev'
void __fastcall FluidBlockMaterial::~FluidBlockMaterial(FluidBlockMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_461500;
  v2 = *((_DWORD **)this + 16);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 16) = 0;
  }
  v3 = *((_DWORD **)this + 18);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 18) = 0;
  }
  SolidBlockMaterial::~SolidBlockMaterial(this);
}


//======================================================================
// FluidBlockMaterial::~FluidBlockMaterial()
// address: 0x002E0C1C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall FluidBlockMaterial::~FluidBlockMaterial(FluidBlockMaterial *this)
{
  FluidBlockMaterial::~FluidBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// FluidBlockMaterial::coverNeighbor(World *,WCoord const&,DirectionType)
// address: 0x002E0C30   size: 0x36 (54 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::coverNeighbor(int a1, World *a2, int *a3, int a4)
{
  int (__fastcall *v5)(int, int); // r6
  int v7; // r2
  int v8; // r3
  int BlockID; // r0
  _DWORD v11[4]; // [sp+4h] [bp-10h] BYREF

  v5 = *(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 76);
  operator+(v11, a3, &g_DirectionCoord[3 * a4]);
  BlockID = World::getBlockID(a2, (const WCoord *)v11, v7, v8);
  return v5(a1, BlockID);
}


//======================================================================
// FluidBlockMaterial::update(unsigned int)
// address: 0x002E0C6C   size: 0xBE (190 bytes)
//======================================================================
void __fastcall FluidBlockMaterial::update(FluidBlockMaterial *this, unsigned int a2)
{
  int v2; // r2
  int v4; // r3
  unsigned int v5; // r0
  unsigned int v6; // r1
  int v7; // r7
  _DWORD *v8; // r6
  int v9; // r1
  Ogre::Texture *Texture; // r0
  void *v11; // r1
  int v12; // r2
  unsigned int v13; // r1
  int v14; // r7
  Ogre::Material *v15; // r6
  BlockTexElement *v16; // r4
  int v17; // r1
  Ogre::Texture *v18; // r0
  void *v19; // r1
  Ogre::Material *v20; // [sp+4h] [bp-10h]
  Ogre::FixedString *v21[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = *((_DWORD *)this + 19);
  v4 = *((_DWORD *)this + 17);
  v5 = a2 + v2;
  *((_DWORD *)this + 19) = a2 + v2;
  v6 = *(_DWORD *)(v4 + 24);
  if ( v6 == 0 )
    v6 = 100;
  v7 = v5 / v6;
  v20 = *((Ogre::Material **)this + 18);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"g_DiffuseTex", v2);
  v8 = *((_DWORD **)this + 17);
  if ( v8[9] != 0 )
    v9 = v8[8] * v8[7];
  else
    v9 = (v8[11] - v8[10]) >> 2;
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*((BlockTexElement **)this + 17), v7 % v9);
  Ogre::Material::setParamTexture(v20, (const Ogre::FixedString *)v21, Texture, 0);
  Ogre::FixedString::~FixedString(v21, v11);
  v13 = *(_DWORD *)(*((_DWORD *)this + 15) + 24);
  if ( v13 == 0 )
    v13 = 100;
  v14 = *((_DWORD *)this + 19) / v13;
  v15 = *((Ogre::Material **)this + 16);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"g_DiffuseTex", v12);
  v16 = *((BlockTexElement **)this + 15);
  if ( *((_DWORD *)v16 + 9) != 0 )
    v17 = *((_DWORD *)v16 + 8) * *((_DWORD *)v16 + 7);
  else
    v17 = (*((_DWORD *)v16 + 11) - *((_DWORD *)v16 + 10)) >> 2;
  v18 = (Ogre::Texture *)BlockTexElement::getTexture(v16, v14 % v17);
  Ogre::Material::setParamTexture(v15, (const Ogre::FixedString *)v21, v18, 0);
  Ogre::FixedString::~FixedString(v21, v19);
}


//======================================================================
// FluidBlockMaterial::FluidBlockMaterial(void)
// address: 0x002E0DB4   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN18FluidBlockMaterialC1Ev'
void __fastcall FluidBlockMaterial::FluidBlockMaterial(FluidBlockMaterial *this)
{
  SolidBlockMaterial::SolidBlockMaterial(this);
  *(_DWORD *)this = &off_461500;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
}


//======================================================================
// FluidBlockMaterial::isLava(int)
// address: 0x002E0DD8   size: 0xC (12 bytes)
//======================================================================
bool __fastcall FluidBlockMaterial::isLava(FluidBlockMaterial *this, int a2)
{
  return (unsigned int)(a2 - 5) <= 1;
}


//======================================================================
// FluidBlockMaterial::isWater(int)
// address: 0x002E0DE4   size: 0xC (12 bytes)
//======================================================================
bool __fastcall FluidBlockMaterial::isWater(FluidBlockMaterial *this, int a2)
{
  return (unsigned int)(a2 - 3) <= 1;
}


//======================================================================
// FluidBlockMaterial::tickRate(void)
// address: 0x002E0DF0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::tickRate(FluidBlockMaterial *this)
{
  _BOOL4 isWater; // r3
  int result; // r0

  isWater = FluidBlockMaterial::isWater(this, *((_DWORD *)this + 8));
  result = 5;
  if ( !isWater )
  {
    result = FluidBlockMaterial::isLava(this, *((_DWORD *)this + 8));
    if ( result != 0 )
      return 30;
  }
  return result;
}


//======================================================================
// FluidBlockMaterial::randomDisplayTick(ClientWorld *,WCoord const&)
// address: 0x002E0E14   size: 0x22A (554 bytes)
//======================================================================
unsigned int __fastcall FluidBlockMaterial::randomDisplayTick(
        FluidBlockMaterial *this,
        ClientWorld *a2,
        const WCoord *a3)
{
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r3
  float v9; // r5
  unsigned int result; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r2
  unsigned int v15; // r0
  EffectParticle *v16; // r5
  float v17; // r6
  float v18; // r6
  float v19; // r0
  float v20; // r7
  float v21; // r0
  unsigned int v22; // [sp+Ch] [bp-40h]
  float v23; // [sp+Ch] [bp-40h]
  float lpsrca; // [sp+10h] [bp-3Ch]
  World *lpsrcb; // [sp+10h] [bp-3Ch]
  EffectManager *v27; // [sp+14h] [bp-38h]
  float v28; // [sp+18h] [bp-34h]
  unsigned int v29; // [sp+18h] [bp-34h]
  EffectManager *v30; // [sp+1Ch] [bp-30h]
  _DWORD v31[3]; // [sp+24h] [bp-28h] BYREF
  int v32[3]; // [sp+30h] [bp-1Ch] BYREF
  int v33[4]; // [sp+3Ch] [bp-10h] BYREF

  if ( FluidBlockMaterial::isWater(this, *((_DWORD *)this + 8)) )
  {
    if ( GenRandomInt(0xAu) == 0 )
      World::getBlockData(a2, a3, v5, v6);
    if ( GenRandomInt(0x40u) == 0 && (unsigned int)(World::getBlockData(a2, a3, v7, v8) - 1) <= 6 )
    {
      v30 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
      BlockCenterCoord(v33, a3);
      v9 = GenRandomFloat();
      v28 = GenRandomFloat();
      EffectManager::playSound(v30, (const WCoord *)v33, "liquid.water", (float)(v9 * 0.25) + 0.75, v28 + 0.5, false);
    }
  }
  result = FluidBlockMaterial::isLava(this, *((_DWORD *)this + 8));
  if ( result != 0 )
  {
    operator+(v33, (int *)a3, &dword_516664);
    result = World::getBlockID(a2, (const WCoord *)v33, v11, v12);
    if ( result == 0 )
    {
      if ( GenRandomInt(0x1F4u) == 0 )
      {
        v13 = 100 * *((_DWORD *)a3 + 2);
        v14 = 100 * *((_DWORD *)a3 + 1);
        v32[0] = 100 * *(_DWORD *)a3;
        v32[1] = v14;
        v32[2] = v13;
        v22 = GenRandomInt(0x64u);
        v29 = GenRandomInt(0x64u);
        v15 = GenRandomInt(0x64u);
        v33[0] = v22;
        v33[1] = v29;
        v33[2] = v15;
        operator+(v31, v32, v33);
        v16 = (EffectParticle *)operator new(0x14u);
        EffectParticle::EffectParticle(v16, a2, (Ogre::FixedString *)"particles/1019.ent", (const WCoord *)v31, 20);
        lpsrca = GenRandomFloat();
        v17 = GenRandomFloat();
        v23 = GenRandomFloat();
        EffectParticle::setRotation((int)v16, lpsrca * 360.0, (float)(v17 - v23) * 30.0, 0.0);
        EffectManager::addEffect((EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton, v16);
        lpsrcb = (World *)Ogre::Singleton<EffectManager>::ms_Singleton;
        v18 = GenRandomFloat();
        v19 = GenRandomFloat();
        EffectManager::playSound(
          lpsrcb,
          (const WCoord *)v31,
          "liquid.lavapop",
          (float)(v18 * 0.2) + 0.2,
          (float)(v19 * 0.15) + 0.9,
          false);
      }
      result = GenRandomInt(0x190u);
      if ( result == 0 )
      {
        v27 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
        BlockCenterCoord(v33, a3);
        v20 = GenRandomFloat();
        v21 = GenRandomFloat();
        return EffectManager::playSound(
                 v27,
                 (const WCoord *)v33,
                 "liquid.lava",
                 (float)(v20 * 0.25) + 0.75,
                 v21 + 0.5,
                 false);
      }
    }
  }
  return result;
}


//======================================================================
// FluidBlockMaterial::getFlowDecay(World *,WCoord const&)
// address: 0x002E1070   size: 0x2E (46 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::getFlowDecay(FluidBlockMaterial *this, World *a2, const WCoord *a3)
{
  int (__fastcall *v6)(FluidBlockMaterial *, int); // r7
  int BlockID; // r0
  int v8; // r2
  int v9; // r3

  v6 = *(int (__fastcall **)(FluidBlockMaterial *, int))(*(_DWORD *)this + 76);
  BlockID = World::getBlockID(a2, a3, (int)a3, *(_DWORD *)this);
  if ( v6(this, BlockID) != 0 )
    return World::getBlockData(a2, a3, v8, v9);
  else
    return -1;
}


//======================================================================
// FluidBlockMaterial::triggerLavaMixEffects(World *,WCoord const&)
// address: 0x002E10A0   size: 0x4E (78 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::triggerLavaMixEffects(FluidBlockMaterial *this, World *a2, const WCoord *a3)
{
  EffectManager *v3; // r5
  float v4; // r6
  float v5; // r0
  _DWORD v7[3]; // [sp+Ch] [bp-Ch] BYREF

  BlockCenterCoord(v7, a3);
  v3 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
  v4 = GenRandomFloat();
  v5 = GenRandomFloat();
  return EffectManager::playSound(
           v3,
           (const WCoord *)v7,
           "random.fizz",
           1.0,
           (float)((float)(v4 - v5) * 0.8) + 2.6,
           true);
}


//======================================================================
// FluidBlockMaterial::checkForHarden(World *,WCoord const&)
// address: 0x002E1100   size: 0x9E (158 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::checkForHarden(FluidBlockMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int result; // r0
  int v8; // r6
  int v9; // r2
  int v10; // r3
  int BlockID; // r0
  int v12; // r2
  int v13; // r3
  int BlockData; // r0
  _DWORD v15[4]; // [sp+14h] [bp-10h] BYREF

  result = World::getBlockID(a2, a3, (int)a3, a4);
  if ( result == *((_DWORD *)this + 8) )
  {
    result = FluidBlockMaterial::isLava(this, result);
    if ( result != 0 )
    {
      v8 = 0;
      while ( 1 )
      {
        while ( v8 == 4 )
          v8 = 5;
        operator+(v15, (int *)a3, &g_DirectionCoord[3 * v8]);
        BlockID = World::getBlockID(a2, (const WCoord *)v15, v9, v10);
        result = FluidBlockMaterial::isWater(this, BlockID);
        if ( result != 0 )
          break;
        if ( ++v8 == 6 )
          return result;
      }
      BlockData = World::getBlockData(a2, a3, v12, v13);
      if ( BlockData != 0 )
      {
        if ( BlockData <= 6 )
          World::setBlockAll(a2, a3, 505, 0, 3);
      }
      else
      {
        World::setBlockAll(a2, a3, 112, 0, 3);
      }
      return FluidBlockMaterial::triggerLavaMixEffects(this, a2, a3);
    }
  }
  return result;
}


//======================================================================
// FluidBlockMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002E11A4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::onNeighborBlockChange(FluidBlockMaterial *this, World *a2, const WCoord *a3, int a4)
{
  return FluidBlockMaterial::checkForHarden(this, a2, a3, a4);
}


//======================================================================
// FluidBlockMaterial::onBlockAdded(World *,WCoord const&)
// address: 0x002E11AC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::onBlockAdded(FluidBlockMaterial *this, World *a2, const WCoord *a3, int a4)
{
  return FluidBlockMaterial::checkForHarden(this, a2, a3, a4);
}


//======================================================================
// FluidBlockMaterial::getWaterGrade(ClientSection *,WCoord const&,WCoord const&)
// address: 0x002E11B4   size: 0x66 (102 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::getWaterGrade(
        FluidBlockMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        const WCoord *a4)
{
  World *v6; // r7
  int v7; // r2
  int v8; // r3
  __int16 *Block; // r0
  __int16 *v10; // r4
  int v11; // r3
  int v13[3]; // [sp+0h] [bp-1Ch] BYREF
  _DWORD v14[4]; // [sp+Ch] [bp-10h] BYREF

  v6 = *(World **)(*((_DWORD *)a2 + 1) + 1432);
  operator+(v13, (int *)a3, (int *)a4);
  operator+(v14, v13, (int *)a2 + 2);
  Block = World::getBlock(v6, (const WCoord *)v14, v7, v8);
  v10 = Block;
  if ( Block != nullptr )
  {
    v11 = 9;
    if ( (*Block & 0xFFF) == 0 )
      return v11;
    if ( (*(int (__fastcall **)(FluidBlockMaterial *, int))(*(_DWORD *)this + 76))(this, *Block & 0xFFF) != 0 )
      return (unsigned int)((int)(unsigned __int16)*v10 >> 12) <= 7 ? (int)(unsigned __int16)*v10 >> 12 : 0;
  }
  return 15;
}


//======================================================================
// FluidBlockMaterial::getFluidHeight(World *,WCoord const&)
// address: 0x002E121C   size: 0x130 (304 bytes)
//======================================================================
float __fastcall FluidBlockMaterial::getFluidHeight(FluidBlockMaterial *this, World *a2, const WCoord *a3)
{
  int v5; // r7
  int (__fastcall *v6)(FluidBlockMaterial *, int); // r3
  int BlockID; // r0
  int BlockData; // r0
  int v9; // r4
  float v10; // r0
  float v11; // r1
  int Material; // r0
  float v14; // [sp+0h] [bp-34h]
  int v15; // [sp+4h] [bp-30h]
  int v16; // [sp+8h] [bp-2Ch]
  int i; // [sp+Ch] [bp-28h]
  int v18; // [sp+10h] [bp-24h]
  int (__fastcall *v19)(FluidBlockMaterial *, int); // [sp+14h] [bp-20h]
  int v20; // [sp+14h] [bp-20h]
  int v21; // [sp+18h] [bp-1Ch]
  int v23; // [sp+24h] [bp-10h] BYREF
  int v24; // [sp+28h] [bp-Ch]
  int v25; // [sp+2Ch] [bp-8h]

  v18 = -1;
  v14 = 0.0;
  v5 = 0;
  while ( 2 )
  {
    for ( i = -1; i != 1; ++i )
    {
      v21 = *((_DWORD *)a3 + 1);
      v16 = v18 + *((_DWORD *)a3 + 2);
      v6 = *(int (__fastcall **)(FluidBlockMaterial *, int))(*(_DWORD *)this + 76);
      v23 = i + *(_DWORD *)a3;
      v15 = v23;
      v19 = v6;
      v24 = v21 + 1;
      v25 = v16;
      BlockID = World::getBlockID(a2, (const WCoord *)&v23, v23, v16);
      if ( v19(this, BlockID) != 0 )
        return 1.0;
      v23 = v15;
      v24 = v21;
      v25 = v16;
      v20 = World::getBlockID(a2, (const WCoord *)&v23, v21, v16);
      if ( (*(int (__fastcall **)(FluidBlockMaterial *, int))(*(_DWORD *)this + 76))(this, v20) != 0 )
      {
        v23 = v15;
        v24 = v21;
        v25 = v16;
        BlockData = World::getBlockData(a2, (const WCoord *)&v23, v16, v21);
        v9 = BlockData;
        if ( BlockData > 7 )
        {
          v10 = 0.0;
        }
        else
        {
          if ( BlockData != 0 )
            goto LABEL_10;
          v10 = 0.11111;
        }
        v5 += 10;
        v14 = v14 + (float)(v10 * 10.0);
        v11 = 0.0;
        if ( v9 > 7 )
        {
LABEL_11:
          ++v5;
          v14 = v14 + v11;
          continue;
        }
LABEL_10:
        v11 = (float)(v9 + 1) / 9.0;
        goto LABEL_11;
      }
      Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, v20);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)Material + 44))(Material) == 0 )
      {
        ++v5;
        v14 = v14 + 1.0;
      }
    }
    if ( ++v18 != 1 )
      continue;
    return 1.0 - (float)(v14 / (float)v5);
  }
}


//======================================================================
// FluidBlockMaterial::getEffectiveFlowDecay(World *,WCoord const&)
// address: 0x002E135C   size: 0x3C (60 bytes)
//======================================================================
int __fastcall FluidBlockMaterial::getEffectiveFlowDecay(FluidBlockMaterial *this, World *a2, const WCoord *a3)
{
  int (__fastcall *v6)(FluidBlockMaterial *, int); // r7
  int BlockID; // r0
  int v8; // r2
  int v9; // r3
  unsigned int BlockData; // r0

  v6 = *(int (__fastcall **)(FluidBlockMaterial *, int))(*(_DWORD *)this + 76);
  BlockID = World::getBlockID(a2, a3, (int)a3, *(_DWORD *)this);
  if ( v6(this, BlockID) == 0 )
    return -1;
  BlockData = World::getBlockData(a2, a3, v8, v9);
  return BlockData & -((BlockData >> 31) + (BlockData <= 7));
}


//======================================================================
// FluidBlockMaterial::getFlowVector(World *,WCoord const&)
// address: 0x002E1398   size: 0x10A (266 bytes)
//======================================================================
FluidBlockMaterial *__fastcall FluidBlockMaterial::getFlowVector(
        FluidBlockMaterial *this,
        World *a2,
        const WCoord *a3,
        const WCoord *a4)
{
  int *v6; // r7
  int v7; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r2
  int v11; // r0
  int v12; // r2
  int v13; // r3
  int v15; // [sp+8h] [bp-3Ch]
  int v16; // [sp+Ch] [bp-38h]
  int v17; // [sp+10h] [bp-34h]
  int EffectiveFlowDecay; // [sp+1Ch] [bp-28h]
  int v21[3]; // [sp+28h] [bp-1Ch] BYREF
  _DWORD v22[4]; // [sp+34h] [bp-10h] BYREF

  EffectiveFlowDecay = FluidBlockMaterial::getEffectiveFlowDecay(a2, a3, a4);
  v6 = g_DirectionCoord;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  do
  {
    operator+(v21, (int *)a4, v6);
    v7 = FluidBlockMaterial::getEffectiveFlowDecay(a2, a3, (const WCoord *)v21);
    if ( v7 >= 0 )
    {
      v10 = v21[0];
      v11 = v7 - EffectiveFlowDecay;
      goto LABEL_7;
    }
    if ( *(_DWORD *)(*(_DWORD *)(World::getBlockMaterial(a3, (const WCoord *)v21, v8) + 36) + 16) == 0 )
    {
      operator+(v22, v21, &dword_516658);
      v9 = FluidBlockMaterial::getEffectiveFlowDecay(a2, a3, (const WCoord *)v22);
      if ( v9 >= 0 )
      {
        v10 = v21[0];
        v11 = v9 - EffectiveFlowDecay + 8;
LABEL_7:
        v17 += (v10 - *(_DWORD *)a4) * v11;
        v16 += (v21[1] - *((_DWORD *)a4 + 1)) * v11;
        v15 += v11 * (v21[2] - *((_DWORD *)a4 + 2));
      }
    }
    v6 += 3;
  }
  while ( v6 != &dword_516658 );
  *(float *)this = (float)v17;
  *((float *)this + 1) = (float)v16;
  *((float *)this + 2) = (float)v15;
  Ogre::Normalize((float *)this);
  if ( World::getBlockData(a3, a4, v12, v13) > 7 )
  {
    *(float *)this = *(float *)this + 0.0;
    *((float *)this + 1) = *((float *)this + 1) - 6.0;
    *((float *)this + 2) = *((float *)this + 2) + 0.0;
    Ogre::Normalize((float *)this);
  }
  return this;
}


//======================================================================
// FluidBlockMaterial::velocityToAddToEntity(World *,WCoord const&,Ogre::Vector3 &)
// address: 0x002E14AC   size: 0x3C (60 bytes)
//======================================================================
float __fastcall FluidBlockMaterial::velocityToAddToEntity(
        FluidBlockMaterial *this,
        World *a2,
        const WCoord *a3,
        Ogre::Vector3 *a4)
{
  float v5; // r1
  float v6; // r0
  float v7; // r1
  float result; // r0
  float v9[4]; // [sp+4h] [bp-10h] BYREF

  FluidBlockMaterial::getFlowVector((FluidBlockMaterial *)v9, this, a2, a3);
  v5 = v9[1];
  *(float *)a4 = *(float *)a4 + v9[0];
  v6 = *((float *)a4 + 1) + v5;
  v7 = v9[2];
  *((float *)a4 + 1) = v6;
  result = *((float *)a4 + 2) + v7;
  *((float *)a4 + 2) = result;
  return result;
}


//======================================================================
// FluidBlockMaterial::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002E14E8   size: 0x252 (594 bytes)
//======================================================================
char *__fastcall FluidBlockMaterial::createBlockMesh(
        FluidBlockMaterial *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  _BOOL4 v5; // r6
  _BOOL4 v6; // r5
  _BOOL4 v7; // r0
  int v8; // r3
  int v9; // r5
  int i; // r4
  float FluidHeight; // r0
  int v12; // r3
  unsigned int j; // r4
  char *result; // r0
  Ogre::Material *v15; // r3
  SectionSubMesh *v16; // r5
  int *v17; // r2
  World *v19; // [sp+1Ch] [bp-190h]
  float v21; // [sp+24h] [bp-188h]
  int v22; // [sp+2Ch] [bp-180h]
  int v23; // [sp+30h] [bp-17Ch]
  _BYTE v25[44]; // [sp+38h] [bp-174h] BYREF
  _DWORD v26[3]; // [sp+64h] [bp-148h] BYREF
  float v27[3]; // [sp+70h] [bp-13Ch] BYREF
  _QWORD v28[2]; // [sp+7Ch] [bp-130h] BYREF
  float v29[8]; // [sp+8Ch] [bp-120h] BYREF
  _BYTE v30[36]; // [sp+ACh] [bp-100h] BYREF
  _BYTE v31[36]; // [sp+D0h] [bp-DCh] BYREF
  _BYTE v32[36]; // [sp+F4h] [bp-B8h] BYREF
  _BYTE v33[36]; // [sp+118h] [bp-94h] BYREF
  _BYTE v34[36]; // [sp+13Ch] [bp-70h] BYREF
  _BYTE v35[36]; // [sp+160h] [bp-4Ch] BYREF
  int v36[10]; // [sp+184h] [bp-28h] BYREF

  v19 = *(World **)(*((_DWORD *)a2 + 1) + 1432);
  operator+(v26, (int *)a3, (int *)a2 + 2);
  v23 = (*(int (__fastcall **)(FluidBlockMaterial *, ClientSection *, const WCoord *))(*(_DWORD *)this + 188))(
          this,
          a2,
          a3);
  ClientSection::getBlockVertexLight(a2, a3, v29);
  FluidBlockMaterial::getFlowVector((FluidBlockMaterial *)v27, this, v19, (const WCoord *)v26);
  if ( v27[0] < 0.0 )
  {
    v5 = v27[2] == 0.0;
    if ( v27[2] == 0.0 )
    {
      v8 = 1132920832;
      v5 = false;
      goto LABEL_21;
    }
    v6 = v27[2] < 0.0;
    if ( v27[2] < 0.0 )
    {
      v8 = 1130430464;
      goto LABEL_21;
    }
    v7 = v27[2] > 0.0;
    if ( v27[2] > 0.0 )
    {
      v8 = 1134395392;
LABEL_18:
      v5 = v6;
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v5 = v27[0] > 0.0;
  if ( v27[0] > 0.0 )
  {
    v6 = v27[2] == 0.0;
    if ( v27[2] == 0.0 )
    {
      v8 = 1119092736;
      v5 = v27[0] < 0.0;
      goto LABEL_21;
    }
    v5 = v27[2] < 0.0;
    if ( v27[2] < 0.0 )
    {
      v8 = 1124532224;
      goto LABEL_18;
    }
    v7 = v27[2] > 0.0;
    if ( v27[2] > 0.0 )
    {
      v8 = 1110704128;
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v7 = v27[0] == 0.0;
  if ( v27[0] != 0.0 )
  {
LABEL_19:
    v8 = 0;
    v5 = v7;
    goto LABEL_21;
  }
  if ( v27[2] < 0.0 )
  {
    v8 = 1127481344;
  }
  else
  {
    v5 = v27[2] <= 0.0;
    v8 = 0;
  }
LABEL_21:
  LODWORD(v21) = v8 + 0x80000000;
  v9 = 0;
  v22 = 1;
  do
  {
    for ( i = 0; i != 2; ++i )
    {
      v36[0] = v26[0] + i;
      v36[1] = v26[1];
      v36[2] = v9 + v26[2];
      FluidHeight = FluidBlockMaterial::getFluidHeight(this, v19, (const WCoord *)v36);
      v12 = 4 * i;
      *(float *)((char *)&v28[v9] + v12) = FluidHeight;
      v22 &= -(FluidHeight >= 1.0);
    }
    ++v9;
  }
  while ( v9 != 2 );
  Ogre::Matrix3::makeRotateVector2Matrix((Ogre::Matrix3 *)v31, v21);
  Ogre::Matrix3::makeTranslateVector2Matrix((Ogre::Matrix3 *)v32, -0.5, -0.5);
  Ogre::Matrix3::makeTranslateVector2Matrix((Ogre::Matrix3 *)v33, 0.5, 0.5);
  Ogre::Matrix3::makeScaleVector2Matrix((Ogre::Matrix3 *)v34, 1.0, 1.0);
  Ogre::operator*((int)v35, (int)v32, (int)v34);
  Ogre::operator*((int)v36, (int)v35, (int)v31);
  Ogre::operator*((int)v25, (int)v36, (int)v33);
  qmemcpy(v30, v25, sizeof(v30));
  for ( j = 0; j != 6; ++j )
  {
    result = (char *)ClientSection::getNeighborCover(a2, a3, j);
    if ( result != (_BYTE *)&dword_0 + 1 || v22 == 0 && j == 5 )
    {
      ClientSection::calVertexLights(a2, v23, (int *)a3, j, (int)result, v29);
      v15 = *((Ogre::Material **)this + 18);
      if ( v5 && j - 4 <= 1 )
        v15 = *((Ogre::Material **)this + 16);
      v16 = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, v15);
      if ( j - 4 > 1 || (v17 = (int *)v30, v5) )
        v17 = nullptr;
      BlockGeomTemplate::getMorphCubeFaceVerts(*((_DWORD *)this + 10), v36, j, (int)v28, v17);
      result = (char *)SectionSubMesh::addGeomFaceLight(v16, v36, a3, (int)v29, nullptr);
    }
  }
  return result;
}


//======================================================================
// FluidBlockMaterial::init(int)
// address: 0x002E1758   size: 0x272 (626 bytes)
//======================================================================
void __fastcall FluidBlockMaterial::init(__int64 this, int a2)
{
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  void *v6; // r1
  int v7; // r1
  TiXmlElement *v8; // r2
  int v9; // r2
  BlockMaterialMgr *v10; // r6
  BlockTexElement *TexElement; // r7
  void *v12; // r1
  int v13; // r2
  Ogre::Material *v14; // r6
  void *v15; // r1
  Ogre::Material *v16; // r6
  int v17; // r2
  Ogre::Texture *Texture; // r0
  void *v19; // r1
  Ogre::Material *v20; // r6
  int v21; // r2
  Ogre::Texture *v22; // r0
  void *v23; // r1
  int v24; // r2
  Ogre::Material *v25; // r6
  void *v26; // r1
  Ogre::Material *v27; // r6
  int v28; // r2
  Ogre::Texture *v29; // r0
  void *v30; // r1
  Ogre::Material *v31; // r6
  int v32; // r2
  Ogre::Texture *v33; // r0
  void *v34; // r1
  Ogre::Material *v35; // r6
  void *v36; // r1
  int v37; // r2
  Ogre::Material *v38; // r6
  Ogre::Texture *v39; // r0
  void *v40; // r1
  int v41; // r2
  Ogre::Material *v42; // r6
  void *v43; // r1
  int v44; // r2
  Ogre::Material *v45; // r6
  Ogre::Texture *v46; // r0
  Ogre::Material *v47; // r6
  void *v48; // r1
  Ogre::Material *v49; // r6
  void *v50; // r1
  BlockMaterialMgr *v51; // [sp+4h] [bp-10h]
  BlockMaterialMgr *v52; // [sp+4h] [bp-10h]
  Ogre::FixedString *v53[2]; // [sp+Ch] [bp-8h] BYREF

  SolidBlockMaterial::init(this, a2);
  v51 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)(*(_DWORD *)(this + 36) + 212), v3);
  *(_DWORD *)(this + 60) = BlockMaterialMgr::getTexElement(v51, (const char **)v53, 5u);
  Ogre::FixedString::~FixedString(v53, v4);
  v52 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)(*(_DWORD *)(this + 36) + 244), v5);
  *(_DWORD *)(this + 68) = BlockMaterialMgr::getTexElement(v52, (const char **)v53, 5u);
  Ogre::FixedString::~FixedString(v53, v6);
  if ( Ogre::Root::getWaterReflect((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton, v7, v8) != nullptr
    && FluidBlockMaterial::isWater((FluidBlockMaterial *)this, SHIDWORD(this)) )
  {
    v10 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"waternormal", v9);
    TexElement = (BlockTexElement *)BlockMaterialMgr::getTexElement(v10, (const char **)v53, 0);
    Ogre::FixedString::~FixedString(v53, v12);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"block_water", v13);
    v14 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v14, (const Ogre::FixedString *)v53);
    *(_DWORD *)(this + 64) = v14;
    Ogre::FixedString::~FixedString(v53, v15);
    v16 = *(Ogre::Material **)(this + 64);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"g_NormalTex", v17);
    Texture = (Ogre::Texture *)BlockTexElement::getTexture(TexElement, 0);
    Ogre::Material::setParamTexture(v16, (const Ogre::FixedString *)v53, Texture, 0);
    Ogre::FixedString::~FixedString(v53, v19);
    v20 = *(Ogre::Material **)(this + 64);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"g_DiffuseTex", v21);
    v22 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(this + 60), 0);
    Ogre::Material::setParamTexture(v20, (const Ogre::FixedString *)v53, v22, 0);
    Ogre::FixedString::~FixedString(v53, v23);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"block_water", v24);
    v25 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v25, (const Ogre::FixedString *)v53);
    *(_DWORD *)(this + 72) = v25;
    Ogre::FixedString::~FixedString(v53, v26);
    v27 = *(Ogre::Material **)(this + 72);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"g_NormalTex", v28);
    v29 = (Ogre::Texture *)BlockTexElement::getTexture(TexElement, 0);
    Ogre::Material::setParamTexture(v27, (const Ogre::FixedString *)v53, v29, 0);
    Ogre::FixedString::~FixedString(v53, v30);
    v31 = *(Ogre::Material **)(this + 72);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"g_DiffuseTex", v32);
    v33 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(this + 68), 0);
    Ogre::Material::setParamTexture(v31, (const Ogre::FixedString *)v53, v33, 0);
  }
  else
  {
    Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"block", v9);
    v35 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v35, (const Ogre::FixedString *)v53);
    *(_DWORD *)(this + 64) = v35;
    Ogre::FixedString::~FixedString(v53, v36);
    if ( FluidBlockMaterial::isWater((FluidBlockMaterial *)this, SHIDWORD(this)) )
    {
      v47 = *(Ogre::Material **)(this + 64);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"BLEND_MODE", v37);
      v48 = (void *)(Ogre::Material::setParamMacro(v47, (const Ogre::FixedString *)v53, 2u) >> 32);
      Ogre::FixedString::~FixedString(v53, v48);
    }
    v38 = *(Ogre::Material **)(this + 64);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"g_DiffuseTex", v37);
    v39 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(this + 60), 0);
    Ogre::Material::setParamTexture(v38, (const Ogre::FixedString *)v53, v39, 0);
    Ogre::FixedString::~FixedString(v53, v40);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"block", v41);
    v42 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v42, (const Ogre::FixedString *)v53);
    *(_DWORD *)(this + 72) = v42;
    Ogre::FixedString::~FixedString(v53, v43);
    if ( FluidBlockMaterial::isWater((FluidBlockMaterial *)this, SHIDWORD(this)) )
    {
      v49 = *(Ogre::Material **)(this + 72);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"BLEND_MODE", v44);
      v50 = (void *)(Ogre::Material::setParamMacro(v49, (const Ogre::FixedString *)v53, 2u) >> 32);
      Ogre::FixedString::~FixedString(v53, v50);
    }
    v45 = *(Ogre::Material **)(this + 72);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v53, (Ogre::FixedString *)"g_DiffuseTex", v44);
    v46 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(this + 68), 0);
    Ogre::Material::setParamTexture(v45, (const Ogre::FixedString *)v53, v46, 0);
  }
  Ogre::FixedString::~FixedString(v53, v34);
}

