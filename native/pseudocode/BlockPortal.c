// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockPortal

//======================================================================
// BlockPortal::isSolid(void)
// address: 0x0026B9FC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockPortal::isSolid(BlockPortal *this)
{
  return 0;
}


//======================================================================
// BlockPortal::isLiquid(void)
// address: 0x0026BA00   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockPortal::isLiquid(BlockPortal *this)
{
  return 0;
}


//======================================================================
// BlockPortal::isOpaque(void)
// address: 0x0026BA04   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockPortal::isOpaque(BlockPortal *this)
{
  return 0;
}


//======================================================================
// BlockPortal::isOpaqueCube(void)
// address: 0x0026BA08   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockPortal::isOpaqueCube(BlockPortal *this)
{
  return 0;
}


//======================================================================
// BlockPortal::renderAsNormalBlock(void)
// address: 0x0026BA0C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockPortal::renderAsNormalBlock(BlockPortal *this)
{
  return 0;
}


//======================================================================
// BlockPortal::canBlocksMovement(World *,WCoord const&)
// address: 0x0026BA10   size: 0x4 (4 bytes)
//======================================================================
int BlockPortal::canBlocksMovement()
{
  return 0;
}


//======================================================================
// BlockPortal::getTextureType(void)
// address: 0x0026BA14   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockPortal::getTextureType(BlockPortal *this)
{
  return 5;
}


//======================================================================
// BlockPortal::onActorCollidedWithBlock(World *,WCoord const&,ClientActor *)
// address: 0x0026BA18   size: 0x16 (22 bytes)
//======================================================================
int __fastcall BlockPortal::onActorCollidedWithBlock(int a1, int a2, int a3, ClientActor *this)
{
  int result; // r0

  if ( *((_DWORD *)this + 20) == 0 && *((_DWORD *)this + 21) == 0 )
    return ClientActor::setInPortal(this);
  return result;
}


//======================================================================
// BlockPortal::~BlockPortal()
// address: 0x0026BA30   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN11BlockPortalD1Ev'
void __fastcall BlockPortal::~BlockPortal(BlockPortal *this)
{
  *(_DWORD *)this = &off_45C078;
  BasicBlockMaterial::~BasicBlockMaterial(this);
}


//======================================================================
// BlockPortal::~BlockPortal()
// address: 0x0026BA4C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockPortal::~BlockPortal(BlockPortal *this)
{
  BlockPortal::~BlockPortal(this);
  operator delete(this);
}


//======================================================================
// BlockPortal::randomDisplayTick(ClientWorld *,WCoord const&)
// address: 0x0026BA60   size: 0x66 (102 bytes)
//======================================================================
int __fastcall BlockPortal::randomDisplayTick(BlockPortal *this, ClientWorld *a2, const WCoord *a3)
{
  EffectManager *v4; // r6
  int v5; // r0
  int v6; // r2
  int v7; // r0
  float v8; // r0
  _DWORD v10[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( GenRandomInt(100) == 0 )
  {
    v4 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
    v5 = *((_DWORD *)a3 + 2);
    v10[1] = 100 * *((_DWORD *)a3 + 1) + 50;
    v6 = 100 * v5;
    v7 = *(_DWORD *)a3;
    v10[2] = v6 + 50;
    v10[0] = 100 * v7 + 50;
    v8 = COERCE_FLOAT(GenRandomFloat());
    EffectManager::playSound(v4, (const WCoord *)v10, "portal.portal", 0.5, (float)(v8 * 0.4) + 0.8, false);
  }
  return GenRandomInt(50);
}


//======================================================================
// BlockPortal::update(unsigned int)
// address: 0x0026BAD8   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall BlockPortal::update(__int64 this)
{
  int v1; // r2
  _DWORD *v2; // r4
  int v3; // r3
  unsigned int v4; // r0
  unsigned int v5; // r1
  int v6; // r6
  Ogre::Material *v7; // r5
  unsigned __int8 *v8; // r0
  BlockTexElement *v9; // r4
  int v10; // r1
  Ogre::Texture *Texture; // r0
  void *v12; // r1
  __int64 v14; // [sp+0h] [bp-8h] BYREF

  v14 = this;
  v1 = *(_DWORD *)(this + 116);
  v2 = (_DWORD *)this;
  v3 = *(_DWORD *)(this + 108);
  LODWORD(this) = HIDWORD(this) + v1;
  v2[29] = HIDWORD(this) + v1;
  v5 = *(_DWORD *)(v3 + 24);
  if ( v5 == 0 )
    v5 = 100;
  v6 = v4 / v5;
  v7 = (Ogre::Material *)v2[28];
  v8 = Ogre::FixedString::insert((Ogre::FixedString *)"g_DiffuseTex", (const char *)0xFFFFFFFF, v1, v3);
  v9 = (BlockTexElement *)v2[27];
  HIDWORD(v14) = v8;
  if ( *((_DWORD *)v9 + 9) != 0 )
    v10 = *((_DWORD *)v9 + 8) * *((_DWORD *)v9 + 7);
  else
    v10 = (*((_DWORD *)v9 + 11) - *((_DWORD *)v9 + 10)) >> 2;
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(v9, v6 % v10);
  Ogre::Material::setParamTexture(v7, (const Ogre::FixedString *)((char *)&v14 + 4), Texture, 0);
  Ogre::FixedString::release(SHIDWORD(v14), v12);
  return v14;
}


//======================================================================
// BlockPortal::init(int)
// address: 0x0026BB4C   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall BlockPortal::init(__int64 this, int a2)
{
  int v2; // r4
  Ogre::Material *v3; // r5
  int v4; // r2
  int v5; // r3
  void *v6; // r1
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+8h] [bp-4h]

  v8 = this;
  v9 = a2;
  v2 = this;
  BasicBlockMaterial::init((BasicBlockMaterial *)this, SHIDWORD(this));
  v3 = *(Ogre::Material **)(v2 + 112);
  HIDWORD(v8) = Ogre::FixedString::insert((Ogre::FixedString *)"BLEND_MODE", (const char *)0xFFFFFFFF, v4, v5);
  v6 = (void *)(Ogre::Material::setParamMacro(v3, (const Ogre::FixedString *)((char *)&v8 + 4), 2u) >> 32);
  Ogre::FixedString::release(SHIDWORD(v8), v6);
  *(_DWORD *)(v2 + 116) = 0;
  return v8;
}


//======================================================================
// BlockPortal::coverNeighbor(World *,WCoord const&,DirectionType)
// address: 0x0026BB88   size: 0x34 (52 bytes)
//======================================================================
bool __fastcall BlockPortal::coverNeighbor(int a1, World *a2, int *a3, int a4)
{
  _DWORD v7[4]; // [sp+4h] [bp-10h] BYREF

  operator+(v7, a3, &g_DirectionCoord[3 * a4]);
  return World::getBlockID(a2, (const WCoord *)v7) == *(_DWORD *)(a1 + 32);
}


//======================================================================
// BlockPortal::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x0026BBD0   size: 0x1C8 (456 bytes)
//======================================================================
int __fastcall BlockPortal::onNeighborBlockChange(BlockPortal *this, World *a2, const WCoord *a3, int a4)
{
  int BlockID; // r0
  _BOOL4 v8; // r3
  int v9; // r6
  int result; // r0
  _BOOL4 v11; // r3
  int i; // [sp+4h] [bp-28h]
  _BOOL4 v13; // [sp+4h] [bp-28h]
  WCoord *v14; // [sp+8h] [bp-24h]
  int v15; // [sp+Ch] [bp-20h]
  _DWORD v16[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v17[4]; // [sp+1Ch] [bp-10h] BYREF

  operator+(v16, (int *)a3, g_DirectionCoord);
  if ( World::getBlockID(a2, (const WCoord *)v16) == *((_DWORD *)this + 8)
    || (operator+(v17, (int *)a3, &dword_516634),
        BlockID = World::getBlockID(a2, (const WCoord *)v17),
        v8 = BlockID == *((_DWORD *)this + 8)) )
  {
    v15 = 0;
    v8 = true;
  }
  else
  {
    v15 = 1;
  }
  v14 = (WCoord *)v8;
  for ( i = *((_DWORD *)a3 + 1);
        World::getBlockID(a2, *(_DWORD *)a3, i - 1, *((_DWORD *)a3 + 2)) == *((_DWORD *)this + 8);
        --i )
  {
    ;
  }
  v9 = 1;
  if ( World::getBlockID(a2, *(_DWORD *)a3, i - 1, *((_DWORD *)a3 + 2)) != 8 )
    return World::setBlockAir(a2, a3);
  while ( World::getBlockID(a2, *(_DWORD *)a3, v9 + i, *((_DWORD *)a3 + 2)) == *((_DWORD *)this + 8) )
  {
    if ( ++v9 == 4 )
      return World::setBlockAir(a2, a3);
  }
  if ( v9 != 3 || World::getBlockID(a2, *(_DWORD *)a3, i + 3, *((_DWORD *)a3 + 2)) != 8 )
    return World::setBlockAir(a2, a3);
  operator+(v16, (int *)a3, g_DirectionCoord);
  if ( World::getBlockID(a2, (const WCoord *)v16) == *((_DWORD *)this + 8) )
  {
    v13 = true;
  }
  else
  {
    operator+(v17, (int *)a3, &dword_516634);
    v13 = World::getBlockID(a2, (const WCoord *)v17) == *((_DWORD *)this + 8);
  }
  operator+(v16, (int *)a3, &dword_516640);
  if ( World::getBlockID(a2, (const WCoord *)v16) == *((_DWORD *)this + 8) )
  {
    v11 = true;
  }
  else
  {
    operator+(v17, (int *)a3, &dword_51664C);
    v11 = World::getBlockID(a2, (const WCoord *)v17) == *((_DWORD *)this + 8);
  }
  if ( v13 && v11 )
    return World::setBlockAir(a2, a3);
  if ( World::getBlockID(a2, (int)v14 + *(_DWORD *)a3, *((_DWORD *)a3 + 1), v15 + *((_DWORD *)a3 + 2)) != 8
    || (result = World::getBlockID(a2, *(_DWORD *)a3 - (_DWORD)v14, *((_DWORD *)a3 + 1), *((_DWORD *)a3 + 2) - v15)) != *((_DWORD *)this + 8) )
  {
    if ( World::getBlockID(a2, *(_DWORD *)a3 - (_DWORD)v14, *((_DWORD *)a3 + 1), *((_DWORD *)a3 + 2) - v15) != 8 )
      return World::setBlockAir(a2, a3);
    result = World::getBlockID(a2, (int)v14 + *(_DWORD *)a3, *((_DWORD *)a3 + 1), v15 + *((_DWORD *)a3 + 2));
    if ( result != *((_DWORD *)this + 8) )
      return World::setBlockAir(a2, a3);
  }
  return result;
}


//======================================================================
// BlockPortal::placePortal(World *,WCoord const&,bool)
// address: 0x0026BD9C   size: 0x82 (130 bytes)
//======================================================================
int __fastcall BlockPortal::placePortal(BlockPortal *this, World *a2, const WCoord *a3, bool a4)
{
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int i; // r4
  _BOOL4 v9; // r6
  int j; // r5
  int v11; // r2
  int result; // r0
  int v13; // [sp+Ch] [bp-20h]
  int v14; // [sp+10h] [bp-1Ch]
  int v15; // [sp+14h] [bp-18h]
  _DWORD v16[2]; // [sp+1Ch] [bp-10h] BYREF
  int v17; // [sp+24h] [bp-8h]

  if ( a3 != nullptr )
  {
    v14 = 0;
    v13 = 1;
  }
  else
  {
    v14 = 1;
    v13 = 0;
  }
  v5 = *((_DWORD *)a2 + 1);
  v6 = *(_DWORD *)a2;
  v7 = *((_DWORD *)a2 + 2);
  v15 = v5;
  v16[0] = v6;
  v17 = v7;
  for ( i = 0; i != 4; ++i )
  {
    v16[0] += v13;
    v17 += v14;
    v9 = i == 0 || i == 3;
    for ( j = 0; j != 5; ++j )
    {
      v16[1] = j + v15;
      if ( (j & 0xFFFFFFFB) != 0 && !v9 )
        v11 = 9;
      else
        v11 = 8;
      result = World::setBlockAll(this, (const WCoord *)v16, v11, 0, 3);
    }
  }
  return result;
}


//======================================================================
// BlockPortal::tryCreatePortal(World *,WCoord &,int,int,int)
// address: 0x0026BE20   size: 0x18A (394 bytes)
//======================================================================
int __fastcall BlockPortal::tryCreatePortal(BlockPortal *this, World *a2, WCoord *a3, int a4, int a5, int a6)
{
  int v8; // r6
  int v9; // r5
  int v10; // r6
  int v11; // r7
  int v12; // r6
  int i; // r5
  _BOOL4 v14; // r7
  int BlockID; // r0
  int k; // r5
  int v17; // [sp+8h] [bp-44h]
  int v18; // [sp+Ch] [bp-40h]
  int v20; // [sp+14h] [bp-38h]
  int v21; // [sp+18h] [bp-34h]
  int j; // [sp+18h] [bp-34h]
  int v23; // [sp+1Ch] [bp-30h]
  int v24; // [sp+20h] [bp-2Ch]
  int v25; // [sp+24h] [bp-28h]
  _DWORD v28[3]; // [sp+30h] [bp-1Ch] BYREF
  _DWORD v29[4]; // [sp+3Ch] [bp-10h] BYREF

  operator+(v28, (int *)a2, g_DirectionCoord);
  if ( World::getBlockID(this, (const WCoord *)v28) == 8 )
  {
    v18 = 1;
  }
  else
  {
    operator+(v29, (int *)a2, &dword_516634);
    v18 = World::getBlockID(this, (const WCoord *)v29) == 8;
  }
  operator+(v28, (int *)a2, &dword_516640);
  if ( World::getBlockID(this, (const WCoord *)v28) == 8 )
  {
    v17 = 1;
  }
  else
  {
    operator+(v29, (int *)a2, &dword_51664C);
    v17 = World::getBlockID(this, (const WCoord *)v29) == 8;
  }
  if ( v18 == v17 )
    return 0;
  v8 = *((_DWORD *)a2 + 2);
  v9 = *(_DWORD *)a2;
  v25 = *((_DWORD *)a2 + 1);
  v23 = v8 - v17;
  v20 = *(_DWORD *)a2 - v18;
  if ( World::getBlockID(this, v20, v25, v8 - v17) != 0 )
  {
    v23 = v8;
    v20 = v9;
  }
  v10 = -1;
  v21 = v20 - v18;
  v24 = v23 - v17;
  while ( v10 <= a4 )
  {
    for ( i = -1; i <= a5; ++i )
    {
      v14 = v10 == -1 || v10 == a4 || i == -1 || i == a5;
      BlockID = World::getBlockID(this, v21, i + v25, v24);
      if ( v14 )
      {
        if ( BlockID != 8 )
          return 0;
      }
      else if ( BlockID != 0 )
      {
        return 0;
      }
    }
    ++v10;
    v21 += v18;
    v24 += v17;
  }
  v11 = v23;
  v12 = v20;
  for ( j = 0; j < a4; ++j )
  {
    for ( k = v25; k - v25 < a5; ++k )
    {
      v29[1] = k;
      v29[2] = v11;
      v29[0] = v12;
      World::setBlockAll(this, (const WCoord *)v29, (int)a3, 0, 2);
    }
    v12 += v18;
    v11 += v17;
  }
  *(_DWORD *)a2 = v20;
  *((_DWORD *)a2 + 2) = v23;
  return 1;
}


//======================================================================
// BlockPortal::newObject(void)
// address: 0x002C1A04   size: 0x1C (28 bytes)
//======================================================================
BasicBlockMaterial *__fastcall BlockPortal::newObject(BlockPortal *this)
{
  BasicBlockMaterial *v1; // r4

  v1 = (BasicBlockMaterial *)operator new(0x78u);
  BasicBlockMaterial::BasicBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45C078;
  return v1;
}

