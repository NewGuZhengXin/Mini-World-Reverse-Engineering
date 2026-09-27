// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BigMushroomMaterial

//======================================================================
// BigMushroomMaterial::newObject(void)
// address: 0x002C15AA   size: 0x12 (18 bytes)
//======================================================================
BigMushroomMaterial *__fastcall BigMushroomMaterial::newObject(BigMushroomMaterial *this)
{
  BigMushroomMaterial *v1; // r4

  v1 = (BigMushroomMaterial *)operator new(0x4Cu);
  BigMushroomMaterial::BigMushroomMaterial(v1);
  return v1;
}


//======================================================================
// BigMushroomMaterial::getFaceTexture(DirectionType,BlockTexDesc &)
// address: 0x002D0482   size: 0x10 (16 bytes)
//======================================================================
int __fastcall BigMushroomMaterial::getFaceTexture(int a1, int a2, int a3)
{
  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 60), 0);
}


//======================================================================
// BigMushroomMaterial::getDestroyTexture(Block *,BlockTexDesc &)
// address: 0x002D0492   size: 0x10 (16 bytes)
//======================================================================
int __fastcall BigMushroomMaterial::getDestroyTexture(int a1, int a2, int a3)
{
  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  return BlockTexElement::getTexture(*(BlockTexElement **)(a1 + 60), 0);
}


//======================================================================
// BigMushroomMaterial::getFaceMtl(DirectionType,int)
// address: 0x002D04D4   size: 0x40 (64 bytes)
//======================================================================
int __fastcall BigMushroomMaterial::getFaceMtl(int a1, int a2, int a3)
{
  int v3; // r2
  int v5; // r2

  if ( a3 > 3 )
  {
    if ( a3 > 7 )
    {
      v3 = a3 - 8;
    }
    else
    {
      v3 = a3 - 4;
      if ( a2 == 5 )
        return *(_DWORD *)(a1 + 68);
    }
    v5 = 8 * v3;
    if ( a2 == *(_DWORD *)((char *)&unk_4467B8 + v5) || a2 == *(_DWORD *)((char *)&unk_4467B8 + v5 + 4) )
      return *(_DWORD *)(a1 + 68);
  }
  else if ( a2 == 5 || a2 == a3 )
  {
    return *(_DWORD *)(a1 + 68);
  }
  return *(_DWORD *)(a1 + 72);
}


//======================================================================
// BigMushroomMaterial::~BigMushroomMaterial()
// address: 0x002D051C   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN19BigMushroomMaterialD1Ev'
void __fastcall BigMushroomMaterial::~BigMushroomMaterial(BigMushroomMaterial *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_4600B8;
  v2 = *((_DWORD **)this + 18);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 18) = 0;
  }
  v3 = *((_DWORD **)this + 17);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 17) = 0;
  }
  SolidBlockMaterial::~SolidBlockMaterial(this);
}


//======================================================================
// BigMushroomMaterial::~BigMushroomMaterial()
// address: 0x002D0554   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BigMushroomMaterial::~BigMushroomMaterial(BigMushroomMaterial *this)
{
  BigMushroomMaterial::~BigMushroomMaterial(this);
  operator delete(this);
}


//======================================================================
// BigMushroomMaterial::BigMushroomMaterial(void)
// address: 0x002D0598   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN19BigMushroomMaterialC2Ev'
void __fastcall BigMushroomMaterial::BigMushroomMaterial(BigMushroomMaterial *this)
{
  SolidBlockMaterial::SolidBlockMaterial(this);
  *(_DWORD *)this = &off_4600B8;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
}


//======================================================================
// BigMushroomMaterial::init(int)
// address: 0x002D05BC   size: 0xDA (218 bytes)
//======================================================================
int __fastcall BigMushroomMaterial::init(__int64 this, int a2)
{
  int v2; // r5
  BlockMaterialMgr *v3; // r7
  int v4; // r2
  void *v5; // r1
  int v6; // r2
  Ogre::Material *v7; // r7
  void *v8; // r1
  Ogre::Material *v9; // r7
  int v10; // r2
  Ogre::Texture *Texture; // r0
  void *v12; // r1
  BlockMaterialMgr *v13; // r6
  int v14; // r2
  void *v15; // r1
  int v16; // r2
  Ogre::Material *v17; // r6
  void *v18; // r1
  Ogre::Material *v19; // r6
  int v20; // r2
  Ogre::Texture *v21; // r0
  void *v22; // r1
  int v24; // [sp+0h] [bp-Ch]
  _DWORD v25[2]; // [sp+4h] [bp-8h] BYREF

  v24 = this;
  v25[1] = a2;
  v2 = this;
  SolidBlockMaterial::init(this, a2);
  v3 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v25, (Ogre::FixedString *)(*(_DWORD *)(v2 + 36) + 212), v4);
  *(_DWORD *)(v2 + 60) = BlockMaterialMgr::getTexElement(v3, (const char **)v25, 1u);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v25, v5);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v25, (Ogre::FixedString *)"block", v6);
  v7 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v7, (const Ogre::FixedString *)v25);
  *(_DWORD *)(v2 + 68) = v7;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v25, v8);
  v9 = *(Ogre::Material **)(v2 + 68);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v25, (Ogre::FixedString *)"g_DiffuseTex", v10);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 60), 0);
  Ogre::Material::setParamTexture(v9, (const Ogre::FixedString *)v25, Texture, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v25, v12);
  v13 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v25, (Ogre::FixedString *)(*(_DWORD *)(v2 + 36) + 244), v14);
  *(_DWORD *)(v2 + 64) = BlockMaterialMgr::getTexElement(v13, (const char **)v25, 1u);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v25, v15);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v25, (Ogre::FixedString *)"block", v16);
  v17 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v17, (const Ogre::FixedString *)v25);
  *(_DWORD *)(v2 + 72) = v17;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v25, v18);
  v19 = *(Ogre::Material **)(v2 + 72);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v25, (Ogre::FixedString *)"g_DiffuseTex", v20);
  v21 = (Ogre::Texture *)BlockTexElement::getTexture(*(BlockTexElement **)(v2 + 64), 0);
  Ogre::Material::setParamTexture(v19, (const Ogre::FixedString *)v25, v21, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v25, v22);
  return v24;
}

