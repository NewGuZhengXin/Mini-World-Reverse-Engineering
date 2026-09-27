// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LogBlockMaterial

//======================================================================
// LogBlockMaterial::getFaceMtl(DirectionType,int)
// address: 0x002BD8B6   size: 0x5A (90 bytes)
//======================================================================
int __fastcall LogBlockMaterial::getFaceMtl(_DWORD *a1, int a2, int a3)
{
  int v4; // r4
  int result; // r0

  v4 = a1[25];
  result = a1[26];
  switch ( a3 )
  {
    case 0:
      return a1[a2 + 21];
    case 1:
      if ( a2 != 0 )
      {
        result = a1[21];
        if ( a2 == 1 )
          return v4;
      }
      break;
    case 2:
      if ( a2 != 1 )
      {
        result = a1[21];
        if ( a2 == 0 )
          return v4;
      }
      break;
    case 3:
      if ( a2 != 2 )
      {
        result = a1[21];
        if ( a2 == 3 )
          return v4;
      }
      break;
    case 4:
      if ( a2 != 3 )
      {
        result = a1[21];
        if ( a2 == 2 )
          return v4;
      }
      break;
    default:
      return a1[a2 + 21];
  }
  return result;
}


//======================================================================
// LogBlockMaterial::~LogBlockMaterial()
// address: 0x002BD910   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16LogBlockMaterialD1Ev'
void __fastcall LogBlockMaterial::~LogBlockMaterial(LogBlockMaterial *this)
{
  *(_DWORD *)this = &off_45EAA8;
  CubeBlockMaterial::~CubeBlockMaterial(this);
}


//======================================================================
// LogBlockMaterial::~LogBlockMaterial()
// address: 0x002BD92C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall LogBlockMaterial::~LogBlockMaterial(LogBlockMaterial *this)
{
  LogBlockMaterial::~LogBlockMaterial(this);
  operator delete(this);
}


//======================================================================
// LogBlockMaterial::onBlockPlaced(World *,WCoord const&,DirectionType,float,float,float,int)
// address: 0x002BD96E   size: 0x30 (48 bytes)
//======================================================================
int __fastcall LogBlockMaterial::onBlockPlaced(int a1, int a2, int a3, int a4)
{
  int v4; // r2
  int result; // r0

  v4 = *(_DWORD *)(a1 + 32);
  if ( v4 == 233 || v4 == 820 )
    return 0;
  result = 1;
  if ( a4 != 0 )
  {
    result = 2;
    if ( a4 != 1 )
    {
      result = 3;
      if ( a4 != 2 )
        return 4 * (a4 == 3);
    }
  }
  return result;
}


//======================================================================
// LogBlockMaterial::onBlockRemoved(World *,WCoord const&,int,int)
// address: 0x002BD9E2   size: 0xAE (174 bytes)
//======================================================================
unsigned int __fastcall LogBlockMaterial::onBlockRemoved(
        unsigned int this,
        World *a2,
        const WCoord *a3,
        int a4,
        int a5)
{
  int v7; // r5
  int v8; // r0
  int v9; // r3
  int k; // r7
  int v11; // r12
  int v12; // r0
  int j; // [sp+0h] [bp-24h]
  int i; // [sp+4h] [bp-20h]
  _DWORD v15[3]; // [sp+8h] [bp-1Ch] BYREF
  int v16; // [sp+14h] [bp-10h] BYREF
  int v17; // [sp+18h] [bp-Ch]
  int v18; // [sp+1Ch] [bp-8h]

  if ( (unsigned int)(*(_DWORD *)(this + 32) - 200) <= 6 )
  {
    v7 = *(_DWORD *)a3;
    v8 = *((_DWORD *)a3 + 1);
    v9 = *((_DWORD *)a3 + 2);
    v15[0] = *(_DWORD *)a3 - 5;
    v15[1] = v8 - 5;
    v15[2] = v9 - 5;
    v17 = v8 + 5;
    v16 = v7 + 5;
    v18 = v9 + 5;
    this = World::checkChunksExist(a2, (const WCoord *)v15, (const WCoord *)&v16);
    if ( this != 0 )
    {
      for ( i = -4; i != 5; ++i )
      {
        for ( j = -4; j != 5; ++j )
        {
          for ( k = -4; k != 5; ++k )
          {
            v11 = *((_DWORD *)a3 + 2) + k;
            v12 = *(_DWORD *)a3;
            v17 = j + *((_DWORD *)a3 + 1);
            v16 = v12 + i;
            v18 = v11;
            this = World::getBlockID(a2, (const WCoord *)&v16) - 218;
            if ( this <= 5 )
            {
              this = World::getBlockData(a2, (const WCoord *)&v16);
              if ( (this & 8) == 0 )
                this = World::setBlockData(a2, (const WCoord *)&v16, this | 8, 4);
            }
          }
        }
      }
    }
  }
  return this;
}


//======================================================================
// LogBlockMaterial::init(int)
// address: 0x002BDA90   size: 0x110 (272 bytes)
//======================================================================
_DWORD *__fastcall LogBlockMaterial::init(LogBlockMaterial *this, int a2)
{
  _DWORD *v3; // r6
  int v4; // r3
  const char *v5; // r1
  _DWORD *v6; // r5
  _DWORD *v7; // r0
  BlockTexElement *v8; // r3
  _DWORD *v9; // r7
  _DWORD *v10; // r2
  _DWORD *result; // r0
  BlockTexElement *v12; // [sp+8h] [bp-114h] BYREF
  BlockTexElement *v13; // [sp+Ch] [bp-110h] BYREF
  BlockTexElement *v14; // [sp+10h] [bp-10Ch] BYREF
  char s[256]; // [sp+14h] [bp-108h] BYREF

  SolidBlockMaterial::init(this, a2);
  j_sprintf(s, "%s_top", (const char *)(*((_DWORD *)this + 9) + 212));
  v3 = (_DWORD *)BlockMaterialMgr::createRenderMaterial(
                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                   s,
                   &v12);
  CubeBlockMaterial::setFaceMtl(this, 5, v3, v12);
  v4 = *((_DWORD *)this + 9);
  v5 = (const char *)(v4 + 244);
  if ( *(_BYTE *)(v4 + 244) == 0 )
    v5 = (const char *)(v4 + 212);
  v6 = (_DWORD *)BlockMaterialMgr::createRenderMaterial(
                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                   v5,
                   &v13);
  if ( v6 == nullptr )
  {
    j_sprintf(s, "%s_side", (const char *)(*((_DWORD *)this + 9) + 212));
    v6 = (_DWORD *)BlockMaterialMgr::createRenderMaterial(
                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                     s,
                     &v13);
  }
  CubeBlockMaterial::setFaceMtl(this, 0, v6, v13);
  CubeBlockMaterial::setFaceMtl(this, 1, v6, v13);
  CubeBlockMaterial::setFaceMtl(this, 2, v6, v13);
  CubeBlockMaterial::setFaceMtl(this, 3, v6, v13);
  j_sprintf(s, "%s_bottom", (const char *)(*((_DWORD *)this + 9) + 212));
  v7 = (_DWORD *)BlockMaterialMgr::createRenderMaterial(
                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                   s,
                   &v14);
  v8 = v14;
  v9 = v7;
  v10 = v7;
  if ( v14 == nullptr )
  {
    v8 = v12;
    v10 = v3;
  }
  result = (_DWORD *)CubeBlockMaterial::setFaceMtl(this, 4, v10, v8);
  if ( v6 != nullptr )
    result = Ogre::BaseObject::release(v6);
  if ( v3 != nullptr )
    result = Ogre::BaseObject::release(v3);
  if ( v9 != nullptr )
    return Ogre::BaseObject::release(v9);
  return result;
}


//======================================================================
// LogBlockMaterial::newObject(void)
// address: 0x002C19AC   size: 0x1C (28 bytes)
//======================================================================
CubeBlockMaterial *__fastcall LogBlockMaterial::newObject(LogBlockMaterial *this)
{
  CubeBlockMaterial *v1; // r4

  v1 = (CubeBlockMaterial *)operator new(0x6Cu);
  CubeBlockMaterial::CubeBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45EAA8;
  return v1;
}

