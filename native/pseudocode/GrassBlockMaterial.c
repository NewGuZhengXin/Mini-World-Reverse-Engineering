// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GrassBlockMaterial

//======================================================================
// GrassBlockMaterial::getTickRandomly(void)
// address: 0x00269194   size: 0x4 (4 bytes)
//======================================================================
int __fastcall GrassBlockMaterial::getTickRandomly(GrassBlockMaterial *this)
{
  return 1;
}


//======================================================================
// GrassBlockMaterial::getFaceUVTile(DirectionType)
// address: 0x00269198   size: 0x16 (22 bytes)
//======================================================================
int __fastcall GrassBlockMaterial::getFaceUVTile(int a1, int a2)
{
  if ( a2 == 4 )
    return *(_DWORD *)(a1 + 60);
  if ( a2 == 5 )
    return *(_DWORD *)(a1 + 64);
  return 0;
}


//======================================================================
// GrassBlockMaterial::needBiomeColor(DirectionType)
// address: 0x002691AE   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall GrassBlockMaterial::needBiomeColor(int a1, int a2)
{
  int v2; // r3
  _BOOL4 result; // r0

  v2 = *(unsigned __int8 *)(a1 + 100);
  result = false;
  if ( v2 == 0 )
    return a2 != 4;
  return result;
}


//======================================================================
// GrassBlockMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002691C2   size: 0x10 (16 bytes)
//======================================================================
int __fastcall GrassBlockMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 60), 0);
}


//======================================================================
// GrassBlockMaterial::getFaceMtl(DirectionType,int)
// address: 0x002691D2   size: 0x32 (50 bytes)
//======================================================================
int __fastcall GrassBlockMaterial::getFaceMtl(int a1, int a2)
{
  if ( a2 == 5 )
  {
    if ( *(_BYTE *)(a1 + 100) != 0 )
      return *(_DWORD *)(a1 + 88);
    else
      return *(_DWORD *)(a1 + 80);
  }
  else if ( a2 == 4 )
  {
    return *(_DWORD *)(a1 + 96);
  }
  else if ( *(_BYTE *)(a1 + 100) != 0 )
  {
    return *(_DWORD *)(a1 + 92);
  }
  else
  {
    return *(_DWORD *)(a1 + 84);
  }
}


//======================================================================
// GrassBlockMaterial::getFaceTexture(DirectionType,BlockTexDesc &)
// address: 0x00269204   size: 0x26 (38 bytes)
//======================================================================
int __fastcall GrassBlockMaterial::getFaceTexture(_DWORD *a1, int a2, int a3)
{
  BlockTexElement *v3; // r0

  *(_DWORD *)a3 = 0;
  *(_BYTE *)(a3 + 4) = 0;
  if ( a2 == 5 )
  {
    *(_BYTE *)(a3 + 4) = 1;
    v3 = (BlockTexElement *)a1[16];
  }
  else if ( a2 == 4 )
  {
    v3 = (BlockTexElement *)a1[15];
  }
  else
  {
    v3 = (BlockTexElement *)a1[17];
  }
  return BlockTexElement::getTexture(v3, 0);
}


//======================================================================
// GrassBlockMaterial::prepareBlock(ClientSection *,WCoord const&)
// address: 0x0026922C   size: 0x50 (80 bytes)
//======================================================================
__int16 *__fastcall GrassBlockMaterial::prepareBlock(GrassBlockMaterial *this, ClientSection *a2, const WCoord *a3)
{
  _BYTE *v3; // r6
  _WORD *NeighborBlock; // r0
  int v7; // r3
  int v8; // r3

  v3 = (char *)this + 100;
  *((_BYTE *)this + 100) = 0;
  NeighborBlock = (_WORD *)Section::getNeighborBlock(a2, a3, 5);
  if ( NeighborBlock != nullptr )
  {
    v7 = *NeighborBlock & 0xFFF;
    if ( v7 == 122 || v7 == 115 )
      *v3 = 1;
  }
  v8 = *((_DWORD *)a2 + 5);
  if ( v8 != 0 )
    return (__int16 *)(v8 + 2 * ((*((_DWORD *)a3 + 1) << 8) | (16 * *((_DWORD *)a3 + 2)) | *(_DWORD *)a3));
  else
    return &Section::m_EmptyBlock;
}


//======================================================================
// GrassBlockMaterial::blockTick(World *,WCoord const&)
// address: 0x00269280   size: 0xFE (254 bytes)
//======================================================================
void __fastcall GrassBlockMaterial::blockTick(GrassBlockMaterial *this, World *a2, const WCoord *a3)
{
  int v3; // r7
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int BlockLightValue; // r0
  int v10; // r5
  int v11; // r5
  int v12; // r5
  int v13; // [sp+8h] [bp-3Ch]
  int v14; // [sp+Ch] [bp-38h]
  int v15; // [sp+10h] [bp-34h]
  int i; // [sp+14h] [bp-30h]
  _DWORD v17[3]; // [sp+1Ch] [bp-28h] BYREF
  _DWORD v18[3]; // [sp+28h] [bp-1Ch] BYREF
  _DWORD v19[4]; // [sp+34h] [bp-10h] BYREF

  v3 = *((unsigned __int8 *)a2 + 68);
  if ( *((_BYTE *)a2 + 68) == 0 )
  {
    v6 = *((_DWORD *)a3 + 1);
    v7 = *(_DWORD *)a3;
    v17[1] = v6 + 1;
    v8 = *((_DWORD *)a3 + 2);
    v17[0] = v7;
    v17[2] = v8;
    BlockLightValue = World::getBlockLightValue(a2, (const WCoord *)v17, true);
    if ( BlockLightValue > 3 )
    {
      if ( BlockLightValue > 8 )
      {
        for ( i = 4; i != 0; --i )
        {
          v10 = *(_DWORD *)a3;
          v13 = v10 + GenRandomInt(-1, 1);
          v11 = *((_DWORD *)a3 + 1);
          v14 = v11 + GenRandomInt(-3, 1);
          v12 = *((_DWORD *)a3 + 2);
          v15 = v12 + GenRandomInt(-1, 1);
          v18[2] = v15;
          v18[0] = v13;
          v18[1] = v14 + 1;
          World::getBlockID(a2, (const WCoord *)v18);
          v19[0] = v13;
          v19[1] = v14;
          v19[2] = v15;
          if ( World::getBlockID(a2, (const WCoord *)v19) == 101
            && (int)World::getBlockLightValue(a2, (const WCoord *)v18, true) > 3
            && (int)World::getLightOpacity(a2, (const WCoord *)v18) <= 2 )
          {
            v19[0] = v13;
            v19[1] = v14;
            v19[2] = v15;
            World::setBlockAll(a2, (const WCoord *)v19, 100, 0, 3);
          }
        }
      }
    }
    else if ( (int)World::getLightOpacity(a2, (const WCoord *)v17) > 2 )
    {
      World::setBlockAll(a2, a3, 101, v3, 3);
    }
  }
}


//======================================================================
// GrassBlockMaterial::~GrassBlockMaterial()
// address: 0x00269380   size: 0x5E (94 bytes)
//======================================================================
// Alternative name is '_ZN18GrassBlockMaterialD1Ev'
void __fastcall GrassBlockMaterial::~GrassBlockMaterial(GrassBlockMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0

  *(_DWORD *)this = &off_45BC20;
  v2 = *((_DWORD **)this + 20);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 20) = 0;
  }
  v3 = *((_DWORD **)this + 21);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 21) = 0;
  }
  v4 = *((_DWORD **)this + 24);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 24) = 0;
  }
  v5 = *((_DWORD **)this + 22);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 22) = 0;
  }
  v6 = *((_DWORD **)this + 23);
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    *((_DWORD *)this + 23) = 0;
  }
  SolidBlockMaterial::~SolidBlockMaterial(this);
}


//======================================================================
// GrassBlockMaterial::~GrassBlockMaterial()
// address: 0x002693E4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall GrassBlockMaterial::~GrassBlockMaterial(GrassBlockMaterial *this)
{
  GrassBlockMaterial::~GrassBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// GrassBlockMaterial::GrassBlockMaterial(void)
// address: 0x002693F8   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN18GrassBlockMaterialC1Ev'
void __fastcall GrassBlockMaterial::GrassBlockMaterial(GrassBlockMaterial *this)
{
  SolidBlockMaterial::SolidBlockMaterial(this);
  *(_DWORD *)this = &off_45BC20;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_BYTE *)this + 100) = 0;
}


//======================================================================
// GrassBlockMaterial::init(int)
// address: 0x00269424   size: 0x1FA (506 bytes)
//======================================================================
__int64 __fastcall GrassBlockMaterial::init(__int64 this, int a2)
{
  int v2; // r5
  BlockMaterialMgr *v3; // r7
  int v4; // r2
  void *v5; // r1
  BlockMaterialMgr *v6; // r7
  int v7; // r2
  void *v8; // r1
  BlockMaterialMgr *v9; // r7
  int v10; // r2
  void *v11; // r1
  BlockMaterialMgr *v12; // r7
  int v13; // r2
  void *v14; // r1
  BlockMaterialMgr *v15; // r7
  int v16; // r2
  void *v17; // r1
  int v18; // r2
  Ogre::Material *v19; // r7
  void *v20; // r1
  Ogre::Material *v21; // r7
  int v22; // r2
  void *v23; // r1
  Ogre::Material *v24; // r7
  int v25; // r2
  Ogre::Texture *Texture; // r0
  void *v27; // r1
  Ogre::Material *v28; // r7
  int v29; // r2
  Ogre::Texture *v30; // r0
  void *v31; // r1
  int v32; // r2
  Ogre::Material *v33; // r7
  void *v34; // r1
  BlockMaterialMgr *v35; // r6
  int v36; // r2
  BlockTexElement *TexElement; // r7
  void *v38; // r1
  Ogre::Material *v39; // r6
  int v40; // r2
  Ogre::Texture *v41; // r0
  void *v42; // r1
  int v43; // r2
  Ogre::Material *v44; // r6
  void *v45; // r1
  Ogre::Material *v46; // r6
  int v47; // r2
  Ogre::Texture *v48; // r0
  void *v49; // r1
  __int64 v51; // [sp+0h] [bp-Ch] BYREF
  int v52; // [sp+8h] [bp-4h]

  v51 = this;
  v52 = a2;
  v2 = this;
  SolidBlockMaterial::init((SolidBlockMaterial *)this, SHIDWORD(this));
  v3 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"dirt", v4);
  *(_DWORD *)(v2 + 60) = BlockMaterialMgr::getTexElement(v3, (const Ogre::FixedString *)((char *)&v51 + 4), 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v5);
  v6 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"grass_top", v7);
  *(_DWORD *)(v2 + 64) = BlockMaterialMgr::getTexElement(v6, (const Ogre::FixedString *)((char *)&v51 + 4), 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v8);
  v9 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"grass_side", v10);
  *(_DWORD *)(v2 + 68) = BlockMaterialMgr::getTexElement(v9, (const Ogre::FixedString *)((char *)&v51 + 4), 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v11);
  v12 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString(
    (Ogre::FixedString *)((char *)&v51 + 4),
    (Ogre::FixedString *)"grass_side_overlay",
    v13);
  *(_DWORD *)(v2 + 72) = BlockMaterialMgr::getTexElement(v12, (const Ogre::FixedString *)((char *)&v51 + 4), 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v14);
  v15 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"grass_side_snowed", v16);
  *(_DWORD *)(v2 + 76) = BlockMaterialMgr::getTexElement(v15, (const Ogre::FixedString *)((char *)&v51 + 4), 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v17);
  *(_DWORD *)(v2 + 80) = BlockMaterialMgr::createRenderMaterial(
                           (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                           "grass_top",
                           (BlockTexElement **)(v2 + 64));
  *(_DWORD *)(v2 + 96) = BlockMaterialMgr::createRenderMaterial(
                           (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                           "dirt",
                           (BlockTexElement **)(v2 + 60));
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"block", v18);
  v19 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v19, (const Ogre::FixedString *)((char *)&v51 + 4));
  *(_DWORD *)(v2 + 84) = v19;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v20);
  v21 = *(Ogre::Material **)(v2 + 84);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"OVERLAY", v22);
  v23 = (void *)(Ogre::Material::setParamMacro(v21, (const Ogre::FixedString *)((char *)&v51 + 4), 1u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v23);
  v24 = *(Ogre::Material **)(v2 + 84);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"g_OverlayTex", v25);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 72), 0);
  Ogre::Material::setParamTexture(v24, (const Ogre::FixedString *)((char *)&v51 + 4), Texture, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v27);
  v28 = *(Ogre::Material **)(v2 + 84);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"g_DiffuseTex", v29);
  v30 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 68), 0);
  Ogre::Material::setParamTexture(v28, (const Ogre::FixedString *)((char *)&v51 + 4), v30, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v31);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"block", v32);
  v33 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v33, (const Ogre::FixedString *)((char *)&v51 + 4));
  *(_DWORD *)(v2 + 88) = v33;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v34);
  v35 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"snow", v36);
  TexElement = (BlockTexElement *)BlockMaterialMgr::getTexElement(v35, (const Ogre::FixedString *)((char *)&v51 + 4), 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v38);
  v39 = *(Ogre::Material **)(v2 + 88);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"g_DiffuseTex", v40);
  v41 = (Ogre::Texture *)BlockTexElement::getTexture(TexElement, 0);
  Ogre::Material::setParamTexture(v39, (const Ogre::FixedString *)((char *)&v51 + 4), v41, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v42);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"block", v43);
  v44 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v44, (const Ogre::FixedString *)((char *)&v51 + 4));
  *(_DWORD *)(v2 + 92) = v44;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v45);
  v46 = *(Ogre::Material **)(v2 + 92);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v51 + 4), (Ogre::FixedString *)"g_DiffuseTex", v47);
  v48 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 76), 0);
  Ogre::Material::setParamTexture(v46, (const Ogre::FixedString *)((char *)&v51 + 4), v48, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v51 + 1, v49);
  return v51;
}


//======================================================================
// GrassBlockMaterial::newObject(void)
// address: 0x002C166E   size: 0x12 (18 bytes)
//======================================================================
GrassBlockMaterial *__fastcall GrassBlockMaterial::newObject(GrassBlockMaterial *this)
{
  GrassBlockMaterial *v1; // r4

  v1 = (GrassBlockMaterial *)operator new(0x68u);
  GrassBlockMaterial::GrassBlockMaterial(v1);
  return v1;
}

