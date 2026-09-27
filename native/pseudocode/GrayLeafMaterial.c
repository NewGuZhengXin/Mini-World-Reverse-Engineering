// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GrayLeafMaterial

//======================================================================
// GrayLeafMaterial::newObject(void)
// address: 0x002C161A   size: 0x12 (18 bytes)
//======================================================================
GrayLeafMaterial *__fastcall GrayLeafMaterial::newObject(GrayLeafMaterial *this)
{
  GrayLeafMaterial *v1; // r4

  v1 = (GrayLeafMaterial *)operator new(0x50u);
  GrayLeafMaterial::GrayLeafMaterial(v1);
  return v1;
}


//======================================================================
// GrayLeafMaterial::isOpaqueCube(void)
// address: 0x002CE230   size: 0x4 (4 bytes)
//======================================================================
int __fastcall GrayLeafMaterial::isOpaqueCube(GrayLeafMaterial *this)
{
  return 0;
}


//======================================================================
// GrayLeafMaterial::needBiomeColor(DirectionType)
// address: 0x002CE234   size: 0x4 (4 bytes)
//======================================================================
int GrayLeafMaterial::needBiomeColor()
{
  return 1;
}


//======================================================================
// GrayLeafMaterial::getTickRandomly(void)
// address: 0x002CE238   size: 0x4 (4 bytes)
//======================================================================
int __fastcall GrayLeafMaterial::getTickRandomly(GrayLeafMaterial *this)
{
  return 1;
}


//======================================================================
// GrayLeafMaterial::getFaceMtl(DirectionType,int)
// address: 0x002CE23C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall GrayLeafMaterial::getFaceMtl(int a1)
{
  return *(_DWORD *)(a1 + 64);
}


//======================================================================
// GrayLeafMaterial::getFaceUVTile(DirectionType)
// address: 0x002CE240   size: 0x4 (4 bytes)
//======================================================================
int __fastcall GrayLeafMaterial::getFaceUVTile(int a1)
{
  return *(_DWORD *)(a1 + 60);
}


//======================================================================
// GrayLeafMaterial::coverNeighbor(World *,WCoord const&,DirectionType)
// address: 0x002CE244   size: 0x4 (4 bytes)
//======================================================================
int GrayLeafMaterial::coverNeighbor()
{
  return 0;
}


//======================================================================
// GrayLeafMaterial::getFaceTexture(DirectionType,BlockTexDesc &)
// address: 0x002CE248   size: 0x12 (18 bytes)
//======================================================================
int __fastcall GrayLeafMaterial::getFaceTexture(int a1, int a2, int a3)
{
  *(_BYTE *)(a3 + 4) = 1;
  *(_DWORD *)a3 = 1;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 60), 0);
}


//======================================================================
// GrayLeafMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002CE25A   size: 0x12 (18 bytes)
//======================================================================
int __fastcall GrayLeafMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_BYTE *)(a3 + 4) = 1;
  *(_DWORD *)a3 = 1;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 60), 0);
}


//======================================================================
// GrayLeafMaterial::~GrayLeafMaterial()
// address: 0x002CE26C   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN16GrayLeafMaterialD1Ev'
void __fastcall GrayLeafMaterial::~GrayLeafMaterial(GrayLeafMaterial *this)
{
  _DWORD *v2; // r0
  int v3; // r3
  void *v4; // r0

  *(_DWORD *)this = &off_45FEC8;
  v2 = *((_DWORD **)this + 16);
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *((_DWORD *)this + 16) = 0;
  }
  v4 = *((void **)this + 17);
  if ( v4 != nullptr )
    operator delete(v4);
  SolidBlockMaterial::~SolidBlockMaterial(this);
}


//======================================================================
// GrayLeafMaterial::~GrayLeafMaterial()
// address: 0x002CE2AC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall GrayLeafMaterial::~GrayLeafMaterial(GrayLeafMaterial *this)
{
  GrayLeafMaterial::~GrayLeafMaterial(this);
  operator delete(this);
}


//======================================================================
// GrayLeafMaterial::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002CE2BE   size: 0xA2 (162 bytes)
//======================================================================
unsigned int __fastcall GrayLeafMaterial::onBlockRemoved(
        GrayLeafMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4,
        int a5)
{
  int v5; // r5
  int v6; // r0
  int v7; // r3
  unsigned int result; // r0
  int k; // r7
  int v12; // r12
  int v13; // r0
  int v14; // r2
  int v15; // r3
  int BlockData; // r0
  int j; // [sp+0h] [bp-24h]
  int i; // [sp+4h] [bp-20h]
  _DWORD v19[3]; // [sp+8h] [bp-1Ch] BYREF
  int v20; // [sp+14h] [bp-10h] BYREF
  int v21; // [sp+18h] [bp-Ch]
  int v22; // [sp+1Ch] [bp-8h]

  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v19[0] = *(_DWORD *)a3 - 2;
  v19[1] = v6 - 2;
  v19[2] = v7 - 2;
  v21 = v6 + 2;
  v20 = v5 + 2;
  v22 = v7 + 2;
  result = World::checkChunksExist(a2, (const WCoord *)v19, (const WCoord *)&v20);
  if ( result != 0 )
  {
    for ( i = -1; i != 2; ++i )
    {
      for ( j = -1; j != 2; ++j )
      {
        for ( k = -1; k != 2; ++k )
        {
          v12 = *((_DWORD *)a3 + 2) + k;
          v13 = *(_DWORD *)a3;
          v21 = j + *((_DWORD *)a3 + 1);
          v20 = v13 + i;
          v22 = v12;
          result = World::getBlockID(a2, (const WCoord *)&v20, v21, i) - 218;
          if ( result <= 5 )
          {
            BlockData = World::getBlockData(a2, (const WCoord *)&v20, v14, v15);
            result = (unsigned int)World::setBlockData(a2, (const WCoord *)&v20, BlockData | 8, 4);
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// GrayLeafMaterial::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002CE360   size: 0x42 (66 bytes)
//======================================================================
int __fastcall GrayLeafMaterial::onBlockActivated(int *a1, World *a2, const WCoord *a3, int a4, ClientPlayer *a5)
{
  if ( ClientPlayer::getCurToolID(a5) == 1056 )
  {
    BlockMaterial::doDropItem((BlockMaterial *)a1, a2, a3, a1[8], 1);
    World::setBlockAll(a2, a3, 0, 0, 3);
    ClientPlayer::shortcutItemUsed(a5);
  }
  return 0;
}


//======================================================================
// GrayLeafMaterial::GrayLeafMaterial(void)
// address: 0x002CE3A4   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN16GrayLeafMaterialC2Ev'
void __fastcall GrayLeafMaterial::GrayLeafMaterial(GrayLeafMaterial *this)
{
  SolidBlockMaterial::SolidBlockMaterial(this);
  *(_DWORD *)this = &off_45FEC8;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
}


//======================================================================
// GrayLeafMaterial::removeLeaves(World *,WCoord const&)
// address: 0x002CE3C8   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall GrayLeafMaterial::removeLeaves(GrayLeafMaterial *this, World *a2, const WCoord *a3)
{
  void (__fastcall **v5)(GrayLeafMaterial *, World *, const WCoord *, int, int); // r3
  void (__fastcall *v7)(GrayLeafMaterial *, World *, const WCoord *, int, int); // r7
  int BlockData; // r0
  __int64 v10; // [sp+0h] [bp-Ch]

  v5 = (void (__fastcall **)(GrayLeafMaterial *, World *, const WCoord *, int, int))(*(_DWORD *)this + 180);
  v7 = *v5;
  BlockData = World::getBlockData(a2, a3, (int)a3, (int)v5);
  HIDWORD(v10) = 1065353216;
  v7(this, a2, a3, BlockData, 1);
  World::setBlockAll(a2, a3, 0, 0, 3);
  return v10;
}


//======================================================================
// GrayLeafMaterial::blockTick(World *,WCoord const&)
// address: 0x002CE404   size: 0x1E2 (482 bytes)
//======================================================================
int __fastcall GrayLeafMaterial::blockTick(GrayLeafMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int result; // r0
  int v7; // r2
  unsigned int v8; // r3
  __int64 v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r3
  int i; // r6
  int v14; // r7
  int v15; // r2
  int v16; // r3
  int BlockID; // r0
  int v18; // r2
  int v19; // r2
  int m; // r3
  int n; // r2
  int ii; // r2
  int v23; // r12
  int v24; // r2
  int jj; // r0
  int v26; // r6
  int *v27; // r6
  int *v28; // r6
  int *v29; // r6
  int *v30; // r6
  int *v31; // r6
  int *v32; // r6
  int v33; // [sp+4h] [bp-38h]
  int v34; // [sp+8h] [bp-34h]
  int j; // [sp+Ch] [bp-30h]
  int k; // [sp+10h] [bp-2Ch]
  int v37; // [sp+10h] [bp-2Ch]
  int v39; // [sp+18h] [bp-24h]
  int v40; // [sp+1Ch] [bp-20h]
  _DWORD v41[3]; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v42[4]; // [sp+2Ch] [bp-10h] BYREF

  result = World::getBlockData(a2, a3, (int)a3, a4);
  v40 = result;
  if ( (result & 0xC) == 8 )
  {
    v7 = *((_DWORD *)this + 17);
    v8 = (*((_DWORD *)this + 18) - v7) >> 2;
    if ( v8 > 0x7FFF )
    {
      if ( v8 != 0x8000 )
        *((_DWORD *)this + 18) = v7 + 0x20000;
    }
    else
    {
      HIDWORD(v9) = 0x8000 - v8;
      LODWORD(v9) = (char *)this + 68;
      std::vector<int>::_M_default_append(v9);
    }
    v10 = *(_DWORD *)a3;
    v11 = *((_DWORD *)a3 + 1);
    v12 = *((_DWORD *)a3 + 2);
    v41[0] = *(_DWORD *)a3 - 5;
    v41[1] = v11 - 5;
    v41[2] = v12 - 5;
    v42[1] = v11 + 5;
    v42[0] = v10 + 5;
    v42[2] = v12 + 5;
    if ( World::checkChunksExist(a2, (const WCoord *)v41, (const WCoord *)v42) )
    {
      for ( i = -4; i != 5; ++i )
      {
        v39 = (i << 10) + 16768;
        for ( j = -4; j != 5; ++j )
        {
          v14 = 4 * (v39 + 12);
          for ( k = -4; k != 5; ++k )
          {
            v15 = j + *((_DWORD *)a3 + 1);
            v16 = k + *((_DWORD *)a3 + 2);
            v42[0] = *(_DWORD *)a3 + i;
            v42[1] = v15;
            v42[2] = v16;
            BlockID = World::getBlockID(a2, (const WCoord *)v42, v15, v16);
            if ( (unsigned int)(BlockID - 200) > 6 )
            {
              v19 = 2;
              if ( (unsigned int)(BlockID - 218) > 5 )
                v19 = 1;
              v18 = -v19;
            }
            else
            {
              v18 = 0;
            }
            *(_DWORD *)(*((_DWORD *)this + 17) + v14) = v18;
            v14 += 4;
          }
          v39 += 32;
        }
      }
      for ( m = 1; m != 5; ++m )
      {
        for ( n = 12288; ; n = v33 )
        {
          v33 = n + 1024;
          v37 = n + 672;
          v34 = 4 * (n + 396);
          for ( ii = n + 384; ; ii = v23 )
          {
            v23 = ii + 32;
            v24 = v34;
            for ( jj = -4; jj != 5; ++jj )
            {
              v26 = *((_DWORD *)this + 17);
              if ( *(_DWORD *)(v26 + v24) == m - 1 )
              {
                v27 = (int *)(v26 + v24 - 4096);
                if ( *v27 == -2 )
                  *v27 = m;
                v28 = (int *)(*((_DWORD *)this + 17) + v24 + 4096);
                if ( *v28 == -2 )
                  *v28 = m;
                v29 = (int *)(*((_DWORD *)this + 17) + v24 - 128);
                if ( *v29 == -2 )
                  *v29 = m;
                v30 = (int *)(*((_DWORD *)this + 17) + v24 + 128);
                if ( *v30 == -2 )
                  *v30 = m;
                v31 = (int *)(*((_DWORD *)this + 17) + v24 - 4);
                if ( *v31 == -2 )
                  *v31 = m;
                v32 = (int *)(*((_DWORD *)this + 17) + v24 + 4);
                if ( *v32 == -2 )
                  *v32 = m;
              }
              v24 += 4;
            }
            v34 += 128;
            if ( v23 == v37 )
              break;
          }
          if ( v33 == 21504 )
            break;
        }
      }
    }
    if ( *(int *)(*((_DWORD *)this + 17) + 67648) < 0 )
      return GrayLeafMaterial::removeLeaves(this, a2, a3);
    else
      return (int)World::setBlockData(a2, a3, v40 & 0xFFFFFFF7, 4);
  }
  return result;
}


//======================================================================
// GrayLeafMaterial::init(int)
// address: 0x002CE5F4   size: 0xB6 (182 bytes)
//======================================================================
__int64 __fastcall GrayLeafMaterial::init(__int64 this, int a2)
{
  int v2; // r5
  BlockMaterialMgr *v3; // r7
  int v4; // r2
  void *v5; // r1
  int v6; // r2
  BlockMaterialMgr *v7; // r6
  void *v8; // r1
  Ogre::Material *v9; // r6
  void *v10; // r1
  Ogre::Material *v11; // r6
  int v12; // r2
  void *v13; // r1
  Ogre::Material *v14; // r6
  int v15; // r2
  Ogre::Texture *Texture; // r0
  void *v17; // r1
  __int64 v19; // [sp+0h] [bp-Ch] BYREF
  int v20; // [sp+8h] [bp-4h]

  v19 = this;
  v20 = a2;
  v2 = this;
  SolidBlockMaterial::init(this, a2);
  v3 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString(
    (Ogre::FixedString *)((char *)&v19 + 4),
    (Ogre::FixedString *)(*(_DWORD *)(v2 + 36) + 212),
    v4);
  *(_DWORD *)(v2 + 60) = BlockMaterialMgr::getTexElement(v3, (const char **)&v19 + 1, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v19 + 1, v5);
  if ( *(_DWORD *)(v2 + 60) == 0 )
  {
    v7 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v19 + 4), (Ogre::FixedString *)"default", v6);
    *(_DWORD *)(v2 + 60) = BlockMaterialMgr::getTexElement(v7, (const char **)&v19 + 1, 0);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v19 + 1, v8);
  }
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v19 + 4), (Ogre::FixedString *)"block", v6);
  v9 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v9, (const Ogre::FixedString *)((char *)&v19 + 4));
  *(_DWORD *)(v2 + 64) = v9;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v19 + 1, v10);
  v11 = *(Ogre::Material **)(v2 + 64);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v19 + 4), (Ogre::FixedString *)"BLEND_MODE", v12);
  v13 = (void *)(Ogre::Material::setParamMacro(v11, (const Ogre::FixedString *)((char *)&v19 + 4), 1u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v19 + 1, v13);
  v14 = *(Ogre::Material **)(v2 + 64);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v19 + 4), (Ogre::FixedString *)"g_DiffuseTex", v15);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 60), 0);
  Ogre::Material::setParamTexture(v14, (const Ogre::FixedString *)((char *)&v19 + 4), Texture, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v19 + 1, v17);
  return v19;
}

