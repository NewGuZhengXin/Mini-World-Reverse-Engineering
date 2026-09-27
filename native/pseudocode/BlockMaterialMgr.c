// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockMaterialMgr

//======================================================================
// BlockMaterialMgr::update(unsigned int)
// address: 0x002C1F70   size: 0x34 (52 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::update(int this, unsigned int a2)
{
  int v2; // r5
  unsigned int v4; // r4
  unsigned int v5; // r7

  v2 = this;
  v4 = 0;
  v5 = *(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 432) + 1;
  while ( v4 < v5 )
  {
    this = *(_DWORD *)(4 * v4 + *(_DWORD *)(v2 + 48));
    if ( this != 0 )
      this = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)this + 12))(this, a2);
    ++v4;
  }
  return this;
}


//======================================================================
// BlockMaterialMgr::getModel(char const*,char const*)
// address: 0x002C1FA8   size: 0xB2 (178 bytes)
//======================================================================
Ogre::Model *__fastcall BlockMaterialMgr::getModel(
        BlockMaterialMgr *this,
        Ogre::FixedString *a2,
        Ogre::FixedString *a3)
{
  Ogre::ModelData *v5; // r5
  void *v6; // r1
  int v7; // r2
  unsigned int v8; // r3
  Ogre::ResourceManager *v10; // r7
  _DWORD *v11; // r6
  void *v12; // r1
  Ogre::Model *v13; // r4
  Ogre::ResourceManager *v14; // [sp+0h] [bp-14h]
  Ogre::FixedString *v15[2]; // [sp+Ch] [bp-8h] BYREF

  v14 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v15, a2, (int)a3);
  v5 = (Ogre::ModelData *)Ogre::ResourceManager::blockLoad(v14, v15, 0);
  Ogre::FixedString::~FixedString(v15, v6);
  if ( v5 != nullptr )
  {
    if ( a3 != nullptr )
    {
      v10 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
      Ogre::FixedString::FixedString((Ogre::FixedString *)v15, a3, v7);
      v11 = (_DWORD *)Ogre::ResourceManager::blockLoad(v10, v15, 0);
      Ogre::FixedString::~FixedString(v15, v12);
      if ( v11 != nullptr )
      {
        Ogre::ModelData::addAnimation(__SPAIR64__((unsigned int)v11, (unsigned int)v5));
        Ogre::BaseObject::release(v11);
      }
    }
    v13 = (Ogre::Model *)operator new(0x1C8u);
    Ogre::Model::Model(v13, v5);
    Ogre::BaseObject::release(v5);
    return v13;
  }
  else
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/BlockMaterialMgr.cpp", (const char *)&dword_8C, 8, v8);
    Ogre::LogMessage((Ogre *)"Load %s failed", (const char *)a2);
    return nullptr;
  }
}


//======================================================================
// BlockMaterialMgr::getEntity(char const*)
// address: 0x002C2068   size: 0x30 (48 bytes)
//======================================================================
Ogre::Entity *__fastcall BlockMaterialMgr::getEntity(BlockMaterialMgr *this, Ogre::FixedString *a2)
{
  Ogre::Entity *v3; // r4
  int v4; // r2
  void *v5; // r1
  Ogre::FixedString *v7; // [sp+4h] [bp-4h] BYREF

  v7 = a2;
  v3 = (Ogre::Entity *)operator new(0x210u);
  Ogre::Entity::Entity(v3);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v7, a2, v4);
  Ogre::Entity::load(v3, &v7, 1);
  Ogre::FixedString::~FixedString(&v7, v5);
  return v3;
}


//======================================================================
// BlockMaterialMgr::getGrassColor(float,float)
// address: 0x002C20AA   size: 0x62 (98 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::getGrassColor(BlockMaterialMgr *this, float a2, float a3)
{
  int v4; // [sp+4h] [bp-8h]

  v4 = *(_DWORD *)(*((_DWORD *)this + 43)
                 + 4
                 * (*((_DWORD *)this + 41) * (int)(float)(a3 * (float)(*((_DWORD *)this + 42) - 1))
                  + (int)(float)(a2 * (float)(*((_DWORD *)this + 41) - 1))));
  return (unsigned __int8)v4 | (BYTE1(v4) << 8) | (BYTE2(v4) << 16) | (HIBYTE(v4) << 24);
}


//======================================================================
// BlockMaterialMgr::getLeafColor(float,float)
// address: 0x002C210C   size: 0x62 (98 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::getLeafColor(BlockMaterialMgr *this, float a2, float a3)
{
  int v4; // [sp+4h] [bp-8h]

  v4 = *(_DWORD *)(*((_DWORD *)this + 46)
                 + 4
                 * (*((_DWORD *)this + 44) * (int)(float)(a3 * (float)(*((_DWORD *)this + 45) - 1))
                  + (int)(float)(a2 * (float)(*((_DWORD *)this + 44) - 1))));
  return (unsigned __int8)v4 | (BYTE1(v4) << 8) | (BYTE2(v4) << 16) | (HIBYTE(v4) << 24);
}


//======================================================================
// BlockMaterialMgr::loadGrassColorTable(int &,int &,char const*)
// address: 0x002C2170   size: 0xF2 (242 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::loadGrassColorTable(BlockMaterialMgr *this, int *a2, int *a3, Ogre::FixedString *a4)
{
  Ogre::ResourceManager *v6; // r4
  _DWORD *v7; // r4
  void *v8; // r1
  unsigned int v9; // r3
  Ogre::FixedString *v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // r3
  int v17; // r12
  int v18; // r1
  _BYTE *v19; // r2
  _BYTE *v20; // r0
  _DWORD v22[3]; // [sp+10h] [bp-2Ch] BYREF
  Ogre::FixedString *v23[8]; // [sp+1Ch] [bp-20h] BYREF

  v6 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v23, a4, (int)a3);
  v7 = (_DWORD *)Ogre::ResourceManager::blockLoad(v6, v23, 1);
  Ogre::FixedString::~FixedString(v23, v8);
  if ( v7 != nullptr )
  {
    (*(void (__fastcall **)(_DWORD *, Ogre::FixedString **))(*v7 + 28))(v7, v23);
    *a2 = (int)v23[1];
    v11 = v23[2];
    *a3 = (int)v23[2];
    v12 = (_DWORD)v11 * *a2;
    if ( v12 > 0x1FC00000 )
      v13 = -1;
    else
      v13 = 4 * v12;
    v14 = operator new[](v13);
    v15 = (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int, _DWORD *))(*v7 + 36))(v7, 0, 0, 1, v22);
    v16 = 0;
    v17 = v15;
    while ( v16 < *a3 )
    {
      v18 = 0;
      v19 = (_BYTE *)(v22[1] * v16 + v17);
      while ( v18 < *a2 )
      {
        v20 = (_BYTE *)(v14 + 4 * (*a2 * v16 + v18));
        *v20 = *v19;
        ++v18;
        v20[1] = v19[1];
        v20[2] = v19[2];
        v20[3] = -1;
        v19 += v22[0];
      }
      ++v16;
    }
    (*(void (__fastcall **)(_DWORD *, _DWORD, _DWORD))(*v7 + 40))(v7, 0, 0);
    Ogre::BaseObject::release(v7);
    return v14;
  }
  else
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/BlockMaterialMgr.cpp",
      (const char *)&dword_C0 + 1,
      8,
      v9);
    Ogre::LogMessage((Ogre *)"Load %s failed", (const char *)a4);
    return 0;
  }
}


//======================================================================
// BlockMaterialMgr::loadTextureAtlasFile(void)
// address: 0x002C2270   size: 0x86 (134 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::loadTextureAtlasFile(BlockMaterialMgr *this, Ogre::FixedString *a2)
{
  int GrassColorTable; // r0
  int v5; // r0
  int v6; // r0
  Ogre::ResourceManager *v7; // r6
  int v8; // r2
  void *v9; // r1
  Ogre::FixedString *v10; // [sp+4h] [bp-4h] BYREF

  v10 = a2;
  GrassColorTable = BlockMaterialMgr::loadGrassColorTable(
                      this,
                      (int *)this + 41,
                      (int *)this + 42,
                      (Ogre::FixedString *)"colormap/grass.png");
  *((_DWORD *)this + 43) = GrassColorTable;
  if ( GrassColorTable == 0 )
    return 0;
  v5 = BlockMaterialMgr::loadGrassColorTable(
         this,
         (int *)this + 44,
         (int *)this + 45,
         (Ogre::FixedString *)"colormap/foliage.png");
  *((_DWORD *)this + 46) = v5;
  if ( v5 == 0 )
    return 0;
  v6 = *(_DWORD *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  *((_DWORD *)this + 47) = *(_DWORD *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString(
    (Ogre::FixedString *)&v10,
    (Ogre::FixedString *)"colormap/enchanted_item_glint.png",
    v8);
  *((_DWORD *)this + 48) = Ogre::ResourceManager::blockLoad(v7, &v10, 0);
  Ogre::FixedString::~FixedString(&v10, v9);
  return 1;
}


//======================================================================
// BlockMaterialMgr::LoadTextureVarName(char const*,...)
// address: 0x002C2308   size: 0x7A (122 bytes)
//======================================================================
int BlockMaterialMgr::LoadTextureVarName(BlockMaterialMgr *this, const char *a2, ...)
{
  int *v2; // r7
  int v3; // r2
  int v4; // r6
  void *v5; // r1
  Ogre::ResourceManager *v7; // [sp+4h] [bp-414h]
  Ogre::FixedString *v8; // [sp+10h] [bp-408h] BYREF
  char s[1000]; // [sp+14h] [bp-404h] BYREF
  int vars18; // [sp+430h] [bp+18h] BYREF
  va_list va; // [sp+430h] [bp+18h]
  va_list va1; // [sp+434h] [bp+1Ch] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  vars18 = va_arg(va1, _DWORD);
  v2 = (int *)((char *)this + 196);
  j_vsprintf(s, a2, va);
  v7 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v8, (Ogre::FixedString *)s, v3);
  v4 = Ogre::ResourceManager::blockLoad(v7, &v8, *v2);
  Ogre::FixedString::~FixedString(&v8, v5);
  return v4;
}


//======================================================================
// BlockMaterialMgr::loadBlockTex(Ogre::FixedString const&)
// address: 0x002C2390   size: 0x48 (72 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::loadBlockTex(BlockMaterialMgr *this, const char **a2)
{
  int result; // r0
  int v3; // r5
  BlockTexElement *v4; // r4
  int v5; // r3
  int v6; // r6
  _DWORD v7[7]; // [sp+4h] [bp-1Ch] BYREF

  result = BlockMaterialMgr::LoadTextureVarName(this, "blocks/%s.png", *a2);
  v3 = result;
  if ( result != 0 )
  {
    v4 = (BlockTexElement *)operator new(0x34u);
    BlockTexElement::BlockTexElement(v4);
    (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 28))(v3, v7);
    v5 = v7[1];
    v6 = v7[2];
    *((_DWORD *)v4 + 9) = v3;
    *((_DWORD *)v4 + 4) = v5;
    *((_DWORD *)v4 + 5) = v6;
    return (int)v4;
  }
  return result;
}


//======================================================================
// BlockMaterialMgr::loadBlockTex_Frames(Ogre::FixedString const&,int)
// address: 0x002C23DC   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::loadBlockTex_Frames(BlockMaterialMgr *this, const char **a2, int a3)
{
  char *v4; // r0
  char *v5; // r5
  char *v6; // r0
  int v7; // r4
  int TextureVarName; // r5
  BlockTexElement *v10; // r6
  int v11; // r7
  int v12; // [sp+0h] [bp-2Ch]
  _DWORD v15[7]; // [sp+10h] [bp-1Ch] BYREF
  char v16[4]; // [sp+2Ch] [bp+0h] BYREF

  j_strcpy(v16, *a2);
  v4 = j_strrchr(v16, 95);
  v5 = v4;
  if ( v4 != nullptr )
  {
    if ( (unsigned int)(unsigned __int8)v4[1] - 48 > 9 )
    {
      v12 = 1;
      v7 = 1;
    }
    else
    {
      v12 = j_atoi(v4 + 1);
      *v5 = 0;
      v6 = j_strrchr(v16, 95);
      if ( v6 != nullptr )
      {
        v7 = 1;
        if ( (unsigned int)(unsigned __int8)v6[1] - 48 <= 9 )
          v7 = j_atoi(v6 + 1);
      }
      else
      {
        v7 = 1;
      }
    }
  }
  else
  {
    v12 = 1;
    v7 = 1;
  }
  TextureVarName = BlockMaterialMgr::LoadTextureVarName(this, "blocks/%s.png", *a2);
  if ( TextureVarName == 0 )
    return BlockMaterialMgr::loadBlockTex(this, a2);
  v10 = (BlockTexElement *)operator new(0x34u);
  BlockTexElement::BlockTexElement(v10);
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)TextureVarName + 28))(TextureVarName, v15);
  v11 = v15[2];
  *((_DWORD *)v10 + 4) = v15[1];
  *((_DWORD *)v10 + 5) = v11;
  *((_DWORD *)v10 + 6) = a3;
  *((_DWORD *)v10 + 7) = v7;
  *((_DWORD *)v10 + 8) = v12;
  *((_DWORD *)v10 + 9) = TextureVarName;
  return (int)v10;
}


//======================================================================
// BlockMaterialMgr::loadComplete(void)
// address: 0x002C24BC   size: 0x1A (26 bytes)
//======================================================================
bool __fastcall BlockMaterialMgr::loadComplete(BlockMaterialMgr *this)
{
  return *((_DWORD *)this + 15) == *(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 432) + 1;
}


//======================================================================
// BlockMaterialMgr::getGeomTemplate(Ogre::FixedString const&)
// address: 0x002C24DC   size: 0x38 (56 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::getGeomTemplate(BlockMaterialMgr *this, const Ogre::FixedString *a2)
{
  char *v2; // r0
  char *v3; // r3
  char *v4; // r2
  char *v5; // r4
  int result; // r0

  v2 = (char *)this + 28;
  v3 = *((char **)v2 + 1);
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( *((_DWORD *)v3 + 4) < *(_DWORD *)a2 )
    {
      v5 = *((char **)v3 + 3);
      v3 = v4;
    }
    else
    {
      v5 = *((char **)v3 + 2);
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 )
    return 0;
  result = 0;
  if ( *(_DWORD *)a2 >= *((_DWORD *)v4 + 4) )
    return *((_DWORD *)v4 + 5);
  return result;
}


//======================================================================
// BlockMaterialMgr::~BlockMaterialMgr()
// address: 0x002C25DC   size: 0x14A (330 bytes)
//======================================================================
// Alternative name is '_ZN16BlockMaterialMgrD1Ev'
void __fastcall BlockMaterialMgr::~BlockMaterialMgr(BlockMaterialMgr *this)
{
  BlockTexElement **i; // r5
  BlockTexElement *v3; // r6
  BlockGeomTemplate **j; // r5
  BlockGeomTemplate *v5; // r6
  unsigned int k; // r5
  int v7; // r3
  int v8; // r0
  _DWORD **m; // r5
  unsigned int n; // r5
  void **v11; // r6
  int v12; // r3
  void *v13; // r6
  void *v14; // r0
  void *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0

  for ( i = *((BlockTexElement ***)this + 3);
        i != (BlockTexElement **)((char *)this + 4);
        i = (BlockTexElement **)sub_391DDC(i) )
  {
    v3 = i[5];
    if ( v3 != nullptr )
    {
      BlockTexElement::~BlockTexElement(i[5]);
      operator delete(v3);
    }
  }
  for ( j = *((BlockGeomTemplate ***)this + 9);
        j != (BlockGeomTemplate **)((char *)this + 28);
        j = (BlockGeomTemplate **)sub_391DDC(j) )
  {
    v5 = j[5];
    if ( v5 != nullptr )
    {
      BlockGeomTemplate::~BlockGeomTemplate(j[5]);
      operator delete(v5);
    }
  }
  for ( k = 0; ; ++k )
  {
    v7 = *((_DWORD *)this + 12);
    if ( k >= (*((_DWORD *)this + 13) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(4 * k + v7);
    if ( v8 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
  }
  for ( m = *((_DWORD ***)this + 31); m != (_DWORD **)((char *)this + 116); m = (_DWORD **)sub_391DDC(m) )
  {
    Ogre::BaseObject::release(m[5]);
    Ogre::BaseObject::release(m[6]);
  }
  for ( n = 0; ; ++n )
  {
    v11 = (void **)((char *)this + 200);
    v12 = *((_DWORD *)this + 50);
    if ( n >= (*((_DWORD *)this + 51) - v12) >> 2 )
      break;
    v13 = *(void **)(4 * n + v12);
    if ( v13 != nullptr )
    {
      ShareMaterial::~ShareMaterial(*(ShareMaterial **)(4 * n + v12));
      operator delete(v13);
    }
  }
  v14 = *((void **)this + 43);
  if ( v14 != nullptr )
    operator delete[](v14);
  v15 = *((void **)this + 46);
  if ( v15 != nullptr )
    operator delete[](v15);
  v16 = *((_DWORD **)this + 47);
  if ( v16 != nullptr )
  {
    Ogre::BaseObject::release(v16);
    *((_DWORD *)this + 47) = 0;
  }
  v17 = *((_DWORD **)this + 48);
  if ( v17 != nullptr )
  {
    Ogre::BaseObject::release(v17);
    *((_DWORD *)this + 48) = 0;
  }
  if ( *v11 != nullptr )
    operator delete(*v11);
  std::_Rb_tree<int,std::pair<int const,void *>,std::_Select1st<std::pair<int const,void *>>,std::less<int>,std::allocator<std::pair<int const,void *>>>::_M_erase(
    (int)this + 136,
    *((_DWORD **)this + 36));
  std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>,std::_Select1st<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>>::_M_erase(
    (int)this + 112,
    *((_DWORD *)this + 30));
  UnloadBlockMaterial::~UnloadBlockMaterial((BlockMaterialMgr *)((char *)this + 64));
  std::_Vector_base<BlockMaterial *>::~_Vector_base((void **)this + 12);
  std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockGeomTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>>::_M_erase(
    (int)this + 24,
    *((_DWORD *)this + 8));
  std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockTexElement *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockTexElement *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockTexElement *>>>::_M_erase(
    (int)this,
    *((_DWORD *)this + 2));
  Ogre::Singleton<BlockMaterialMgr>::ms_Singleton = 0;
}


//======================================================================
// BlockMaterialMgr::loadBlockTex_OnOff(Ogre::FixedString const&)
// address: 0x002C2804   size: 0x88 (136 bytes)
//======================================================================
BlockTexElement *__fastcall BlockMaterialMgr::loadBlockTex_OnOff(BlockMaterialMgr *this, const char **a2)
{
  int TextureVarName; // r7
  int v5; // r0
  int v6; // r5
  BlockTexElement *v7; // r4
  int v8; // r6
  int v10; // [sp+8h] [bp-24h] BYREF
  _DWORD v11[8]; // [sp+Ch] [bp-20h] BYREF

  TextureVarName = BlockMaterialMgr::LoadTextureVarName(this, "blocks/%s_off.png", *a2);
  v5 = BlockMaterialMgr::LoadTextureVarName(this, "blocks/%s_on.png", *a2);
  v6 = v5;
  if ( TextureVarName == 0 )
  {
    TextureVarName = v5;
    if ( v5 == 0 )
      TextureVarName = BlockMaterialMgr::LoadTextureVarName(this, "blocks/default.png");
  }
  else if ( v5 != 0 )
  {
LABEL_7:
    v7 = (BlockTexElement *)operator new(0x34u);
    BlockTexElement::BlockTexElement(v7);
    (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)TextureVarName + 28))(TextureVarName, v11);
    v10 = TextureVarName;
    std::vector<Ogre::Texture *>::emplace_back<Ogre::Texture *>((int)v7 + 40, &v10);
    v10 = v6;
    std::vector<Ogre::Texture *>::emplace_back<Ogre::Texture *>((int)v7 + 40, &v10);
    v8 = v11[2];
    *((_DWORD *)v7 + 4) = v11[1];
    *((_DWORD *)v7 + 5) = v8;
    return v7;
  }
  v6 = TextureVarName;
  (*(void (__fastcall **)(int))(*(_DWORD *)TextureVarName + 4))(TextureVarName);
  goto LABEL_7;
}


//======================================================================
// BlockMaterialMgr::loadBlockTex_OneRowFrames(Ogre::FixedString const&,int)
// address: 0x002C28A4   size: 0x140 (320 bytes)
//======================================================================
BlockTexElement *__fastcall BlockMaterialMgr::loadBlockTex_OneRowFrames(
        BlockMaterialMgr *this,
        const char **a2,
        int a3)
{
  Ogre::ResourceManager *v3; // r7
  int v4; // r2
  Ogre::TextureData *v5; // r7
  void *v6; // r1
  BlockTexElement *v7; // r4
  unsigned int v8; // r5
  unsigned int v9; // r1
  Ogre::TextureData *v10; // r5
  char *v12; // [sp+10h] [bp-144h]
  signed int v14; // [sp+14h] [bp-140h]
  signed int v15; // [sp+18h] [bp-13Ch]
  Ogre::SurfaceData *v16; // [sp+1Ch] [bp-138h]
  Ogre::TextureData *v18; // [sp+2Ch] [bp-128h] BYREF
  Ogre::FixedString *v19; // [sp+30h] [bp-124h] BYREF
  unsigned int v20; // [sp+34h] [bp-120h]
  unsigned int v21; // [sp+38h] [bp-11Ch]
  char s[256]; // [sp+4Ch] [bp-108h] BYREF

  j_sprintf(s, "blocks/%s.png", *a2);
  v3 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v19, (Ogre::FixedString *)s, v4);
  v5 = (Ogre::TextureData *)Ogre::ResourceManager::blockLoad(v3, &v19, 1);
  Ogre::FixedString::~FixedString(&v19, v6);
  if ( v5 == nullptr )
    return nullptr;
  v7 = (BlockTexElement *)operator new(0x34u);
  BlockTexElement::BlockTexElement(v7);
  (*(void (__fastcall **)(Ogre::TextureData *, Ogre::FixedString **))(*(_DWORD *)v5 + 28))(v5, &v19);
  v8 = v20;
  v15 = v21 / v20;
  v9 = v21 / v20;
  v21 = v20;
  *((_DWORD *)v7 + 4) = v20;
  *((_DWORD *)v7 + 5) = v8;
  *((_DWORD *)v7 + 6) = a3;
  *((_DWORD *)v7 + 8) = v9;
  *((_DWORD *)v7 + 7) = 1;
  *((_DWORD *)v7 + 9) = 0;
  v14 = 0;
  v16 = (Ogre::SurfaceData *)Ogre::TextureData::lockSurface(v5, 0, 0, 1);
  while ( v14 < v15 )
  {
    v10 = (Ogre::TextureData *)operator new(0x48u);
    Ogre::TextureData::TextureData((int)v10, (int *)&v19, 1);
    v12 = (char *)Ogre::TextureData::lockSurface(v10, 0, 0, 0);
    Ogre::SurfaceData::bitBlt(v12, 0, 0, v16, 0, v21 * v14, v20, v21);
    Ogre::TextureData::unlockSurface((int)v10, 0, 0);
    Ogre::TextureData::genMipmaps((int)v10, *((_DWORD *)this + 49));
    v18 = v10;
    std::vector<Ogre::Texture *>::emplace_back<Ogre::Texture *>((int)v7 + 40, &v18);
    ++v14;
  }
  Ogre::TextureData::unlockSurface((int)v5, 0, 0);
  Ogre::BaseObject::release(v5);
  return v7;
}


//======================================================================
// BlockMaterialMgr::loadBlockTex_Stages(Ogre::FixedString const&,int)
// address: 0x002C29F0   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::loadBlockTex_Stages(BlockMaterialMgr *this, const char **a2, int a3)
{
  int BlockTex; // r4
  int i; // r6
  Ogre::FixedString *TextureVarName; // r0
  _DWORD *v7; // r3
  int v8; // r2
  int v9; // r2
  void *v10; // r1
  Ogre::FixedString *v11; // r5
  Ogre::FixedString *v15[8]; // [sp+Ch] [bp-20h] BYREF

  BlockTex = operator new(0x34u);
  BlockTexElement::BlockTexElement((BlockTexElement *)BlockTex);
  for ( i = 0; i != 100; ++i )
  {
    TextureVarName = (Ogre::FixedString *)BlockMaterialMgr::LoadTextureVarName(this, "blocks/%s_stage_%d.png", *a2, i);
    if ( TextureVarName == nullptr )
      break;
    v15[0] = TextureVarName;
    std::vector<Ogre::Texture *>::emplace_back<Ogre::Texture *>(BlockTex + 40, v15);
  }
  v7 = *(_DWORD **)(BlockTex + 40);
  v8 = (*(_DWORD *)(BlockTex + 44) - (int)v7) >> 2;
  if ( v8 != 0 )
  {
    (*(void (__fastcall **)(_DWORD, Ogre::FixedString **, int))(*(_DWORD *)*v7 + 28))(*v7, v15, v8);
    *(Ogre::FixedString **)(BlockTex + 16) = v15[1];
    v11 = v15[2];
    *(_DWORD *)(BlockTex + 24) = a3;
    *(_DWORD *)(BlockTex + 20) = v11;
  }
  else
  {
    BlockTexElement::~BlockTexElement((BlockTexElement *)BlockTex);
    operator delete((void *)BlockTex);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v15, (Ogre::FixedString *)"default", v9);
    BlockTex = BlockMaterialMgr::loadBlockTex(this, (const char **)v15);
    Ogre::FixedString::~FixedString(v15, v10);
  }
  return BlockTex;
}


//======================================================================
// BlockMaterialMgr::BlockMaterialMgr(void)
// address: 0x002C2D94   size: 0x6A2 (1698 bytes)
//======================================================================
// Alternative name is '_ZN16BlockMaterialMgrC1Ev'
void __fastcall BlockMaterialMgr::BlockMaterialMgr(BlockMaterialMgr *this)
{
  char *v1; // r6

  v1 = (char *)this + 4;
  Ogre::Singleton<BlockMaterialMgr>::ms_Singleton = (int)this;
  j_memset((char *)this + 4, 0, 0x10u);
  *((_DWORD *)this + 3) = v1;
  *((_DWORD *)this + 4) = v1;
  v1 += 24;
  *((_DWORD *)this + 5) = 0;
  j_memset(v1, 0, 0x10u);
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 9) = v1;
  *((_DWORD *)this + 10) = v1;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  BlockMaterial::BlockMaterial((BlockMaterialMgr *)((char *)this + 64));
  *((_DWORD *)this + 16) = &off_45ED90;
  j_memset((char *)this + 116, 0, 0x10u);
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 31) = (char *)this + 116;
  *((_DWORD *)this + 32) = (char *)this + 116;
  j_memset((char *)this + 140, 0, 0x10u);
  *((_DWORD *)this + 37) = (char *)this + 140;
  *((_DWORD *)this + 38) = (char *)this + 140;
  *((_DWORD *)this + 39) = 0;
  *((_BYTE *)this + 160) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 5;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  sub_2C2CFC("air", (int)AirBlockMaterial::newObject);
  sub_2C2CFC("basic", (int)BasicBlockMaterial::newObject);
  sub_2C2CFC("snow", (int)SnowBlockMaterial::newObject);
  sub_2C2CFC("log", (int)LogBlockMaterial::newObject);
  sub_2C2CFC("farmland", (int)FarmlandBlockMaterial::newObject);
  sub_2C2CFC("crafting", (int)CraftingBlockMaterial::newObject);
  sub_2C2CFC("furnace", (int)FurnaceBlockMaterial::newObject);
  sub_2C2CFC("grass", (int)GrassBlockMaterial::newObject);
  sub_2C2CFC("flowfluid", (int)FlowFluidMaterial::newObject);
  sub_2C2CFC("stillfluid", (int)StillFluidMaterial::newObject);
  sub_2C2CFC("grayherbs", (int)GrayHerbMaterial::newObject);
  sub_2C2CFC("colorherbs", (int)ColorHerbMaterial::newObject);
  sub_2C2CFC("grayleaf", (int)GrayLeafMaterial::newObject);
  sub_2C2CFC("wall", (int)WallMaterial::newObject);
  sub_2C2CFC("fence", (int)FenceMaterial::newObject);
  sub_2C2CFC("stair", (int)StairMaterial::newObject);
  sub_2C2CFC("torch", (int)TorchMaterial::newObject);
  sub_2C2CFC("door", (int)DoorMaterial::newObject);
  sub_2C2CFC("wheat", (int)WheatMaterial::newObject);
  sub_2C2CFC("melonstem", (int)MelonStemMaterial::newObject);
  sub_2C2CFC("mushroom", (int)MushroomMaterial::newObject);
  sub_2C2CFC("sapling", (int)SaplingMaterial::newObject);
  sub_2C2CFC("netherwart", (int)NetherWartMaterial::newObject);
  sub_2C2CFC("bigmushroom", (int)BigMushroomMaterial::newObject);
  sub_2C2CFC("bigmushroom_center", (int)BigMushroomCenterMaterial::newObject);
  sub_2C2CFC("bigmushroom_stem", (int)BigMushroomStemMaterial::newObject);
  sub_2C2CFC("cactus", (int)CactusMaterial::newObject);
  sub_2C2CFC("reed", (int)ReedMaterial::newObject);
  sub_2C2CFC("cocoa", (int)CocoaMaterial::newObject);
  sub_2C2CFC("chest", (int)ChestMaterial::newObject);
  sub_2C2CFC("slab", (int)SlabMaterial::newObject);
  sub_2C2CFC("redstone_torch", (int)RedStoneTorchMaterial::newObject);
  sub_2C2CFC("dust", (int)RedStoneDustMaterial::newObject);
  sub_2C2CFC("trapdoor", (int)TrapDoorMaterial::newObject);
  sub_2C2CFC("lever", (int)LeverMaterial::newObject);
  sub_2C2CFC("tripwirehook", (int)TripWireHookMaterial::newObject);
  sub_2C2CFC("wire", (int)BlockWire::newObject);
  sub_2C2CFC("repeater", (int)RepeaterMaterial::newObject);
  sub_2C2CFC("comparator", (int)ComparatorMaterial::newObject);
  sub_2C2CFC("redstone_light", (int)RedstoneLightMaterial::newObject);
  sub_2C2CFC("vine", (int)VineMaterial::newObject);
  sub_2C2CFC("lilypad", (int)LilyPadMaterial::newObject);
  sub_2C2CFC("ladder", (int)LadderMaterial::newObject);
  sub_2C2CFC("carpet", (int)CarpetMaterial::newObject);
  sub_2C2CFC("glass", (int)GlassMaterial::newObject);
  sub_2C2CFC("fire", (int)FireBlockMaterial::newObject);
  sub_2C2CFC("rail", (int)BlockRail::newObject);
  sub_2C2CFC("railpowered", (int)BlockRailPowered::newObject);
  sub_2C2CFC("tnt", (int)BlockTNT::newObject);
  sub_2C2CFC("enchanting", (int)BlockEnchantTable::newObject);
  sub_2C2CFC("cake", (int)BlockCake::newObject);
  sub_2C2CFC("anvil", (int)BlockAnvil::newObject);
  sub_2C2CFC("mobspawner", (int)BlockMobSpawner::newObject);
  sub_2C2CFC("ironfence", (int)BlockIronFence::newObject);
  sub_2C2CFC("glasspane", (int)BlockGlassPane::newObject);
  sub_2C2CFC("fencegate", (int)BlockFenceGate::newObject);
  sub_2C2CFC("bed", (int)BlockBed::newObject);
  sub_2C2CFC("button", (int)BlockButton::newObject);
  sub_2C2CFC("sand", (int)BlockSand::newObject);
  sub_2C2CFC("piston", (int)BlockPistonBase::newObject);
  sub_2C2CFC("pistonmoving", (int)BlockPistonMoving::newObject);
  sub_2C2CFC("pistonexten", (int)BlockPistonExtension::newObject);
  sub_2C2CFC("spring", (int)BlockSpringBase::newObject);
  sub_2C2CFC("springexten", (int)BlockSpringExten::newObject);
  sub_2C2CFC("pressure", (int)BlockPressurePlate::newObject);
  sub_2C2CFC("powerbasic", (int)BlockPowerBasic::newObject);
  sub_2C2CFC("watermelon", (int)BlockWaterMelon::newObject);
  sub_2C2CFC("portal", (int)BlockPortal::newObject);
  sub_2C2CFC("jar", (int)BlockJar::newObject);
  sub_2C2CFC("simplechest", (int)BlockSimpleChest::newObject);
  j_memset(&BlockMaterial::m_LightOpacity, 0, 0x1000u);
  j_memset(&BlockMaterial::m_LightValue, 0, 0x1000u);
  j_memset(BlockMaterial::m_IsOpaqueCube, 0, sizeof(BlockMaterial::m_IsOpaqueCube));
}


//======================================================================
// BlockMaterialMgr::loadGeomFile(void)
// address: 0x002C36E8   size: 0x110 (272 bytes)
//======================================================================
Ogre::DataStream *__fastcall BlockMaterialMgr::loadGeomFile(BlockMaterialMgr *this)
{
  unsigned int v2; // r3
  const char *v3; // r1
  BlockGeomTemplate *v4; // r5
  Ogre::FixedString *Name; // r0
  int v6; // r2
  _DWORD *v7; // r3
  _DWORD *v8; // r1
  _DWORD *v9; // r0
  Ogre::FixedString **v10; // r0
  void *v11; // r1
  Ogre::DataStream *File; // [sp+Ch] [bp-20h]
  TiXmlNode *v14; // [sp+14h] [bp-18h] BYREF
  TiXmlNode *RootNode; // [sp+18h] [bp-14h] BYREF
  TiXmlElement *v16; // [sp+1Ch] [bp-10h] BYREF
  Ogre::FixedString *v17; // [sp+20h] [bp-Ch] BYREF
  Ogre::FixedString **v18; // [sp+24h] [bp-8h] BYREF

  Ogre::XMLData::XMLData(&v14);
  sub_3BF0BC((int)&v17, "blockgeom.xml");
  File = Ogre::XMLData::loadFile((Ogre::XMLData *)&v14, (const char **)&v17);
  sub_3BDF80(&v17);
  if ( File != nullptr )
  {
    RootNode = (TiXmlNode *)Ogre::XMLData::getRootNode(&v14);
    v16 = (TiXmlElement *)Ogre::XMLNode::iterateChild(&RootNode);
    while ( v16 != nullptr )
    {
      v4 = (BlockGeomTemplate *)operator new(0x24u);
      BlockGeomTemplate::BlockGeomTemplate(v4);
      BlockGeomTemplate::loadFromXML(v4, &v16);
      Name = (Ogre::FixedString *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v16);
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v17, Name, v6);
      v7 = *((_DWORD **)this + 8);
      v8 = (_DWORD *)((char *)this + 28);
      while ( v7 != nullptr )
      {
        if ( v7[4] < (unsigned int)v17 )
        {
          v9 = (_DWORD *)v7[3];
          v7 = v8;
        }
        else
        {
          v9 = (_DWORD *)v7[2];
        }
        v8 = v7;
        v7 = v9;
      }
      v10 = (Ogre::FixedString **)v8;
      if ( v8 == (_DWORD *)((char *)this + 28) || (unsigned int)v17 < v8[4] )
      {
        v18 = &v17;
        v10 = std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockGeomTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<Ogre::FixedString const&>,std::tuple<>>(
                (_DWORD *)this + 6,
                (int)v8,
                (int)&unk_446585,
                (int **)&v18);
      }
      v10[5] = v4;
      v16 = (TiXmlElement *)Ogre::XMLNode::iterateChild(&RootNode, v16);
      Ogre::FixedString::~FixedString(&v17, v11);
    }
  }
  else
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/BlockMaterialMgr.cpp",
      (const char *)&stru_1D8.st_info,
      8,
      v2);
    Ogre::LogMessage((Ogre *)"Failed to open file: blockgeom.xml", v3);
  }
  Ogre::XMLData::~XMLData((Ogre::XMLData *)&v14);
  return File;
}


//======================================================================
// BlockMaterialMgr::getTexElement(Ogre::FixedString const&,int)
// address: 0x002C3984   size: 0x106 (262 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::getTexElement(BlockMaterialMgr *this, const char **a2, unsigned int a3)
{
  Ogre::FixedString **v4; // r3
  Ogre::FixedString **v7; // r2
  Ogre::FixedString *v8; // r1
  int result; // r0
  int v10; // r2
  int BlockTex; // r6
  void *v12; // r1
  BlockTexElement *BlockTex_OnOff; // r0
  Ogre::FixedString **v14; // r3
  Ogre::FixedString **v15; // r1
  Ogre::FixedString *v16; // r2
  Ogre::FixedString **v17; // [sp+Ch] [bp-10h]
  int *v18[2]; // [sp+14h] [bp-8h] BYREF

  v4 = *((Ogre::FixedString ***)this + 2);
  v17 = (Ogre::FixedString **)((char *)this + 4);
  v7 = (Ogre::FixedString **)((char *)this + 4);
  while ( v4 != nullptr )
  {
    if ( v4[4] < (Ogre::FixedString *)*a2 )
    {
      v8 = v4[3];
      v4 = v7;
    }
    else
    {
      v8 = v4[2];
    }
    v7 = v4;
    v4 = (Ogre::FixedString **)v8;
  }
  if ( v7 != v17 && *a2 >= (const char *)v7[4] )
    return (int)v7[5];
  if ( a3 > 1 )
  {
    switch ( a3 )
    {
      case 2u:
        BlockTex_OnOff = BlockMaterialMgr::loadBlockTex_OnOff(this, a2);
        break;
      case 3u:
        BlockTex_OnOff = (BlockTexElement *)BlockMaterialMgr::loadBlockTex_Frames(this, a2, 100);
        break;
      case 5u:
        BlockTex_OnOff = BlockMaterialMgr::loadBlockTex_OneRowFrames(this, a2, 100);
        break;
      default:
        result = 0;
        if ( a3 != 4 )
          return result;
        BlockTex_OnOff = (BlockTexElement *)BlockMaterialMgr::loadBlockTex_Stages(this, a2, 100);
        break;
    }
    BlockTex = (int)BlockTex_OnOff;
  }
  else
  {
    BlockTex = BlockMaterialMgr::loadBlockTex(this, a2);
    if ( BlockTex == 0 && a3 == 1 )
    {
      Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"default", v10);
      BlockTex = BlockMaterialMgr::loadBlockTex(this, (const char **)v18);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)v18, v12);
    }
  }
  v14 = *((Ogre::FixedString ***)this + 2);
  v15 = v17;
  while ( v14 != nullptr )
  {
    if ( v14[4] < (Ogre::FixedString *)*a2 )
    {
      v16 = v14[3];
      v14 = v15;
    }
    else
    {
      v16 = v14[2];
    }
    v15 = v14;
    v14 = (Ogre::FixedString **)v16;
  }
  if ( v15 == v17 || *a2 < (const char *)v15[4] )
  {
    v18[0] = (int *)a2;
    v15 = std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockTexElement *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockTexElement *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockTexElement *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<Ogre::FixedString const&>,std::tuple<>>(
            this,
            (int)v15,
            (int)&unk_446585,
            v18);
  }
  v15[5] = (Ogre::FixedString *)BlockTex;
  return BlockTex;
}


//======================================================================
// BlockMaterialMgr::createRenderMaterial(char const*,BlockTexElement *&)
// address: 0x002C3A94   size: 0x84 (132 bytes)
//======================================================================
BlockTexElement *__fastcall BlockMaterialMgr::createRenderMaterial(
        BlockMaterialMgr *this,
        Ogre::FixedString *a2,
        BlockTexElement **a3)
{
  void *v5; // r1
  int v6; // r2
  BlockTexElement *result; // r0
  Ogre::Material *v8; // r5
  void *v9; // r1
  int v10; // r2
  Ogre::Texture *Texture; // r0
  void *v12; // r1
  Ogre::FixedString *v13; // [sp+4h] [bp-4h] BYREF

  v13 = a2;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v13, a2, (int)a3);
  *a3 = (BlockTexElement *)BlockMaterialMgr::getTexElement(this, (const char **)&v13, 0);
  Ogre::FixedString::~FixedString(&v13, v5);
  result = *a3;
  if ( *a3 != nullptr )
  {
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v13, (Ogre::FixedString *)"block", v6);
    v8 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v8, (const Ogre::FixedString *)&v13);
    Ogre::FixedString::~FixedString(&v13, v9);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v13, (Ogre::FixedString *)"g_DiffuseTex", v10);
    Texture = (Ogre::Texture *)BlockTexElement::getTexture(*a3, 0);
    Ogre::Material::setParamTexture(v8, (const Ogre::FixedString *)&v13, Texture, 0);
    Ogre::FixedString::~FixedString(&v13, v12);
    return v8;
  }
  return result;
}


//======================================================================
// BlockMaterialMgr::buildImageMeshData(Ogre::VertexData *&,Ogre::IndexData *&,Ogre::FixedString const&)
// address: 0x002C3F04   size: 0x436 (1078 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::buildImageMeshData(
        BlockMaterialMgr *this,
        Ogre::VertexData **a2,
        Ogre::IndexData **a3,
        Ogre::FixedString **a4)
{
  int v4; // r2
  _DWORD *v5; // r4
  Ogre::ResourceManager *v6; // r6
  void *v7; // r1
  BlockMaterialMgr *v8; // r7
  int v9; // r2
  void *v10; // r1
  int v11; // r7
  char *v12; // r6
  int v13; // r3
  int i; // r5
  unsigned int v15; // r2
  char v16; // r12
  char v17; // r0
  int v18; // r5
  unsigned __int16 *v19; // r7
  int j; // r6
  int v21; // r2
  unsigned int v22; // r7
  int *v23; // r6
  int v24; // r7
  Ogre::IndexData *v25; // r6
  void *v26; // r0
  void *v27; // r0
  Ogre::IndexData *v28; // r3
  int v30; // [sp+18h] [bp-8Ch]
  char v31; // [sp+1Ch] [bp-88h]
  int v32; // [sp+20h] [bp-84h]
  int v33; // [sp+20h] [bp-84h]
  int v34; // [sp+24h] [bp-80h]
  int v35; // [sp+24h] [bp-80h]
  _BOOL4 v38; // [sp+30h] [bp-74h]
  Ogre::FixedString *v40; // [sp+38h] [bp-6Ch] BYREF
  char v41[4]; // [sp+3Ch] [bp-68h] BYREF
  int v42; // [sp+40h] [bp-64h]
  void *v43[3]; // [sp+48h] [bp-5Ch] BYREF
  char v44[4]; // [sp+54h] [bp-50h] BYREF
  int v45; // [sp+58h] [bp-4Ch]
  int v46; // [sp+5Ch] [bp-48h]
  int v47; // [sp+68h] [bp-3Ch]
  Ogre::FixedString *v48; // [sp+70h] [bp-34h] BYREF
  int v49; // [sp+74h] [bp-30h]
  char v50; // [sp+78h] [bp-2Ch]
  char v51; // [sp+79h] [bp-2Bh]
  char v52; // [sp+7Ah] [bp-2Ah]
  char v53; // [sp+7Bh] [bp-29h]
  int GeomTemplate; // [sp+7Ch] [bp-28h]
  int v55; // [sp+80h] [bp-24h]
  int v56; // [sp+84h] [bp-20h]
  void *v57; // [sp+88h] [bp-1Ch]
  int v58; // [sp+8Ch] [bp-18h]
  int v59; // [sp+90h] [bp-14h]
  void *v60; // [sp+94h] [bp-10h]
  int v61; // [sp+98h] [bp-Ch]
  int v62; // [sp+9Ch] [bp-8h]

  v5 = (_DWORD *)Ogre::ResourceManager::blockLoad(
                   (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
                   a4,
                   0);
  if ( v5 == nullptr )
  {
    v6 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v48, (Ogre::FixedString *)"items/apple.png", v4);
    v5 = (_DWORD *)Ogre::ResourceManager::blockLoad(v6, &v48, 0);
    Ogre::FixedString::~FixedString(&v48, v7);
    if ( v5 == nullptr )
      return 0;
  }
  (*(void (__fastcall **)(_DWORD *, char *))(*v5 + 28))(v5, v44);
  v57 = nullptr;
  v58 = 0;
  v59 = 0;
  v60 = nullptr;
  v61 = 0;
  v62 = 0;
  v56 = v46;
  v55 = v45;
  v8 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v40, (Ogre::FixedString *)"cube", v9);
  GeomTemplate = BlockMaterialMgr::getGeomTemplate(v8, (const Ogre::FixedString *)&v40);
  Ogre::FixedString::~FixedString(&v40, v10);
  v30 = (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int, char *))(*v5 + 36))(v5, 0, 0, 1, v41);
  v11 = 0;
  v38 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 64) == 2;
  if ( v47 == 12 )
  {
    while ( v11 < v46 )
    {
      v32 = 0;
      v12 = (char *)(v30 + v42 * v11);
      if ( v11 != 0 )
        v32 = v30 + (v11 - 1) * v42;
      if ( v11 == v46 - 1 )
        v13 = 0;
      else
        v13 = v30 + v42 * (v11 + 1);
      v34 = v13;
      for ( i = 0; i < v45; ++i )
      {
        v31 = v12[1];
        v15 = (unsigned __int8)v12[3];
        v16 = *v12;
        v17 = v12[2];
        if ( v15 > 0xB3 )
        {
          v48 = (Ogre::FixedString *)i;
          v49 = v46 - 1 - v11;
          if ( v38 )
          {
            v52 = v16;
            v50 = v17;
            v53 = v15;
            v51 = v31;
          }
          else
          {
            v50 = v16;
            v52 = v17;
            v51 = v31;
            v53 = v15;
          }
          sub_2C3DB8((int)&v48, 2u);
          sub_2C3DB8((int)&v48, 3u);
          if ( i == 0 || (unsigned __int8)*(v12 - 1) <= 0xB3u )
            sub_2C3DB8((int)&v48, 0);
          if ( i == v45 - 1 || (unsigned __int8)v12[7] <= 0xB3u )
            sub_2C3DB8((int)&v48, 1u);
          if ( v32 == 0 || *(unsigned __int8 *)(v32 + 4 * i + 3) <= 0xB3u )
            sub_2C3DB8((int)&v48, 5u);
          if ( v34 == 0 || *(unsigned __int8 *)(v34 + 4 * i + 3) <= 0xB3u )
            sub_2C3DB8((int)&v48, 4u);
        }
        v12 += 4;
      }
      ++v11;
    }
  }
  else
  {
    v18 = 0;
    if ( v47 == 9 )
    {
      while ( v18 < v46 )
      {
        v33 = 0;
        if ( v18 != 0 )
          v33 = v30 + (v18 - 1) * v42;
        if ( v18 == v46 - 1 )
          v35 = 0;
        else
          v35 = v30 + v42 * (v18 + 1);
        v19 = (unsigned __int16 *)(v30 + v42 * v18);
        for ( j = 0; j < v45; ++j )
        {
          v21 = *v19;
          if ( (unsigned int)v21 >> 15 != 0 )
          {
            v49 = v46 - 1 - v18;
            v48 = (Ogre::FixedString *)j;
            if ( v38 )
            {
              v52 = v21 & 0x1F;
              v51 = (v21 >> 5) & 0x1F;
              v50 = (v21 >> 10) & 0x1F;
            }
            else
            {
              v52 = (v21 >> 10) & 0x1F;
              v51 = (v21 >> 5) & 0x1F;
              v50 = v21 & 0x1F;
            }
            v53 = -1;
            sub_2C3DB8((int)&v48, 2u);
            sub_2C3DB8((int)&v48, 3u);
            if ( j == 0 || *(v19 - 1) >> 15 == 0 )
              sub_2C3DB8((int)&v48, 0);
            if ( j == v45 - 1 || v19[1] >> 15 == 0 )
              sub_2C3DB8((int)&v48, 1u);
            if ( v33 == 0 || *(unsigned __int16 *)(v33 + 2 * j) >> 15 == 0 )
              sub_2C3DB8((int)&v48, 5u);
            if ( v35 == 0 || *(unsigned __int16 *)(v35 + 2 * j) >> 15 == 0 )
              sub_2C3DB8((int)&v48, 4u);
          }
          ++v19;
        }
        ++v18;
      }
    }
  }
  (*(void (__fastcall **)(_DWORD *, _DWORD, _DWORD))(*v5 + 40))(v5, 0, 0);
  Ogre::BaseObject::release(v5);
  Ogre::VertexFormat::VertexFormat(v43);
  Ogre::VertexFormat::addElement((int *)v43, 8u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v43, 9u, 4u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v43, 9u, 5u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v43, 9u, 7u, 0, 0, -1);
  v22 = -858993459 * ((v58 - (int)v57) >> 2);
  v23 = (int *)operator new(0x50u);
  Ogre::VertexData::VertexData((Ogre::VertexData *)v23, (const Ogre::VertexFormat *)v43, v22);
  *a2 = (Ogre::VertexData *)v23;
  Ogre::FixedString::operator=(v23 + 2, (int *)a4);
  v24 = (v61 - (int)v60) >> 1;
  v25 = (Ogre::IndexData *)operator new(0x28u);
  Ogre::IndexData::IndexData(v25, v24);
  *a3 = v25;
  v26 = (void *)Ogre::VertexData::lock(*a2);
  j_memcpy(v26, v57, 4 * ((v58 - (int)v57) >> 2));
  Ogre::VertexData::unlock((int)*a2);
  v27 = (void *)Ogre::IndexData::lock(*a3);
  j_memcpy(v27, v60, 2 * ((v61 - (int)v60) >> 1));
  Ogre::IndexData::unlock((int)*a3);
  v28 = *a3;
  *((_DWORD *)v28 + 5) = *((_DWORD *)*a2 + 13);
  *((_DWORD *)v28 + 4) = 0;
  Ogre::VertexFormat::~VertexFormat(v43);
  ImgCalMeshData::~ImgCalMeshData((ImgCalMeshData *)&v48);
  return 1;
}


//======================================================================
// BlockMaterialMgr::getImageMeshData(Ogre::VertexData *&,Ogre::IndexData *&,Ogre::FixedString const&)
// address: 0x002C4340   size: 0xAE (174 bytes)
//======================================================================
Ogre::FixedString **__fastcall BlockMaterialMgr::getImageMeshData(
        BlockMaterialMgr *this,
        Ogre::VertexData **a2,
        Ogre::IndexData **a3,
        Ogre::FixedString **a4)
{
  char *v5; // r0
  char *v7; // r3
  char *v10; // r2
  char *v11; // r1
  Ogre::FixedString **result; // r0
  Ogre::VertexData *v13; // r7
  Ogre::IndexData *v14; // r6
  Ogre::FixedString **v15; // r3
  Ogre::FixedString **v16; // r1
  Ogre::FixedString *v17; // r2
  Ogre::FixedString **v18; // [sp+Ch] [bp-10h]
  Ogre::FixedString **v19; // [sp+14h] [bp-8h] BYREF

  v5 = (char *)this + 116;
  v7 = *((char **)v5 + 1);
  v18 = (Ogre::FixedString **)v5;
  v10 = v5;
  while ( v7 != nullptr )
  {
    if ( *((_DWORD *)v7 + 4) < (unsigned int)*a4 )
    {
      v11 = *((char **)v7 + 3);
      v7 = v10;
    }
    else
    {
      v11 = *((char **)v7 + 2);
    }
    v10 = v7;
    v7 = v11;
  }
  if ( v10 == v5 || (result = *((Ogre::FixedString ***)v10 + 4), *a4 < (Ogre::FixedString *)result) )
  {
    *a2 = nullptr;
    *a3 = nullptr;
    result = (Ogre::FixedString **)BlockMaterialMgr::buildImageMeshData(this, a2, a3, a4);
    if ( result != nullptr )
    {
      v13 = *a2;
      v14 = *a3;
      v15 = *((Ogre::FixedString ***)this + 30);
      v16 = v18;
      while ( v15 != nullptr )
      {
        if ( v15[4] < *a4 )
        {
          v17 = v15[3];
          v15 = v16;
        }
        else
        {
          v17 = v15[2];
        }
        v16 = v15;
        v15 = (Ogre::FixedString **)v17;
      }
      if ( v16 == v18 || (result = (Ogre::FixedString **)v16[4], *a4 < (Ogre::FixedString *)result) )
      {
        v19 = a4;
        result = std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>,std::_Select1st<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<Ogre::FixedString const&>,std::tuple<>>(
                   (_DWORD *)this + 28,
                   (int)v16,
                   (int)&unk_446585,
                   (int **)&v19);
        v16 = result;
      }
      v16[5] = v13;
      v16[6] = v14;
    }
  }
  else
  {
    *a2 = *((Ogre::VertexData **)v10 + 5);
    *a3 = *((Ogre::IndexData **)v10 + 6);
  }
  return result;
}


//======================================================================
// BlockMaterialMgr::loadMaterialFile(void)
// address: 0x002C4528   size: 0x3C (60 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::loadMaterialFile(BlockMaterialMgr *this, void *a2, void *a3)
{
  char *v4; // r1
  int v5; // r0
  unsigned int v6; // r3
  void *v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v4 = *((char **)this + 13);
  v5 = *((_DWORD *)this + 12);
  v8[0] = nullptr;
  v6 = (int)&v4[-v5] >> 2;
  if ( v6 > 0xFFF )
  {
    if ( v6 != 4096 )
      *((_DWORD *)this + 13) = v5 + 0x4000;
  }
  else
  {
    std::vector<BlockMaterial *>::_M_fill_insert((void **)this + 12, v4, 4096 - v6, v8);
  }
  *((_DWORD *)this + 15) = 0;
  return 1;
}


//======================================================================
// BlockMaterialMgr::init(void)
// address: 0x002C4568   size: 0x22 (34 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::init(BlockMaterialMgr *this, Ogre::FixedString *a2)
{
  void *v4; // r1
  void *v5; // r2

  if ( BlockMaterialMgr::loadTextureAtlasFile(this, a2) != 0 && BlockMaterialMgr::loadGeomFile(this) != nullptr )
    return BlockMaterialMgr::loadMaterialFile(this, v4, v5);
  else
    return 0;
}


//======================================================================
// BlockMaterialMgr::genBlockIcon(void)
// address: 0x002C458C   size: 0x272 (626 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::genBlockIcon(BlockMaterialMgr *this)
{
  _BYTE *v1; // r3
  const char *v3; // r1
  Ogre::Timer *v4; // r0
  __suseconds_t v5; // r1
  unsigned int v6; // r1
  int v7; // r3
  int v8; // r6
  SectionMesh *BlockProtoMesh; // r5
  BlockMesh *v10; // r4
  unsigned int v11; // r0
  unsigned int v12; // r4
  char *v13; // r3
  char *v14; // r6
  char *v15; // r0
  signed int v16; // r7
  _DWORD *v17; // r6
  int i; // r5
  int v19; // r4
  _DWORD *v20; // r0
  int v21; // r3
  int v22; // r2
  unsigned int v23; // r5
  Ogre::Timer *v24; // r0
  int v25; // r4
  __suseconds_t v26; // r1
  int v27; // r0
  char *v29; // [sp+8h] [bp-2D4h]
  void *v30; // [sp+8h] [bp-2D4h]
  int v31; // [sp+Ch] [bp-2D0h]
  unsigned int v32; // [sp+10h] [bp-2CCh]
  signed int v33; // [sp+10h] [bp-2CCh]
  int SystemTick; // [sp+18h] [bp-2C4h]
  void *v35; // [sp+20h] [bp-2BCh] BYREF
  char *v36; // [sp+24h] [bp-2B8h]
  char *v37; // [sp+28h] [bp-2B4h]
  _BYTE *v38; // [sp+2Ch] [bp-2B0h] BYREF
  char *v39; // [sp+30h] [bp-2ACh]
  char *v40; // [sp+34h] [bp-2A8h]
  _DWORD v41[3]; // [sp+38h] [bp-2A4h] BYREF
  Ogre::Camera *v42[166]; // [sp+44h] [bp-298h] BYREF

  v1 = (char *)this + 160;
  v31 = *((unsigned __int8 *)this + 160);
  if ( *((_BYTE *)this + 160) == 0 )
  {
    *v1 = 1;
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/BlockMaterialMgr.cpp",
      (_BYTE *)&stru_328.st_value + 1,
      2,
      (unsigned int)v1);
    v4 = (Ogre::Timer *)Ogre::LogMessage((Ogre *)"begin genBlockIcon", v3);
    SystemTick = Ogre::Timer::getSystemTick(v4, v5);
    Ogre::TextureRenderGen::TextureRenderGen(v42, (Ogre::Camera *)&stru_1F8.st_size, (Ogre::Camera *)&stru_1F8.st_size);
    v6 = 0;
    v35 = nullptr;
    v36 = nullptr;
    v37 = nullptr;
    v38 = nullptr;
    v39 = nullptr;
    v40 = nullptr;
    while ( 1 )
    {
      v32 = v6;
      v7 = *((_DWORD *)this + 12);
      if ( v6 >= (*((_DWORD *)this + 13) - v7) >> 2 )
        break;
      v8 = *(_DWORD *)(4 * v6 + v7);
      if ( v8 != 0 )
      {
        BlockProtoMesh = (SectionMesh *)BlockMaterial::getBlockProtoMesh(*(BlockMaterial **)(4 * v6 + v7));
        if ( BlockProtoMesh != nullptr )
        {
          v10 = (BlockMesh *)operator new(0x144u);
          BlockMesh::BlockMesh(v10, BlockProtoMesh);
          v41[0] = 1056964608;
          v41[1] = -1082130432;
          v41[2] = 1056964608;
          BlockMesh::setLightDir(v10, (const Ogre::Vector3 *)v41);
          v41[0] = v10;
          if ( v36 == v37 )
          {
            std::vector<Ogre::RenderableObject *>::_M_emplace_back_aux<Ogre::RenderableObject *>((int)&v35, v41);
          }
          else
          {
            if ( v36 != nullptr )
              *(_DWORD *)v36 = v10;
            v36 += 4;
          }
          if ( v39 == v40 )
          {
            v11 = std::vector<BlockMaterial *>::_M_check_len(&v38, 1u, (int)"vector::_M_emplace_back_aux");
            v12 = v11;
            if ( v11 != 0 )
            {
              if ( v11 > 0x3FFFFFFF )
                sub_3BCEB4(v11);
              v29 = (char *)operator new(4 * v11);
            }
            else
            {
              v29 = nullptr;
            }
            v13 = &v29[4 * ((v39 - v38) >> 2)];
            if ( v13 != nullptr )
              *(_DWORD *)v13 = v8;
            v14 = (char *)(std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BlockMaterial *>(
                             v38,
                             (int)v39,
                             v29)
                         + 4);
            if ( v38 != nullptr )
              operator delete(v38);
            v39 = v14;
            v38 = v29;
            v40 = &v29[4 * v12];
          }
          else
          {
            if ( v39 != nullptr )
              *(_DWORD *)v39 = v8;
            v39 += 4;
          }
        }
      }
      v6 = v32 + 1;
    }
    v15 = v36;
    v16 = 0;
    *(_BYTE *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 45) = 1;
    v33 = (unsigned int)(((v15 - (_BYTE *)v35) >> 2) + 63) >> 6;
    while ( v16 < v33 )
    {
      v30 = (void *)(((v36 - (_BYTE *)v35) >> 2) - (v16 << 6));
      if ( (int)v30 > 64 )
        v30 = &dword_40;
      v17 = (_DWORD *)Ogre::TextureRenderGen::gen(
                        (Ogre::TextureRenderGen *)v42,
                        64,
                        64,
                        (Ogre::RenderableObject **)v35 + 64 * v16,
                        (int)v30);
      if ( v17 == nullptr )
        goto LABEL_41;
      for ( i = 0; i < (int)v30; ++i )
      {
        v19 = *(_DWORD *)&v38[256 * v16 + 4 * i];
        v20 = *(_DWORD **)(v19 + 8);
        if ( v20 != nullptr )
          Ogre::BaseObject::release(v20);
        (*(void (__fastcall **)(_DWORD *))(*v17 + 4))(v17);
        v21 = i >> 3 << 6;
        v22 = (i & 7) << 6;
        *(_DWORD *)(v19 + 16) = v21;
        *(_DWORD *)(v19 + 12) = v22;
        *(_DWORD *)(v19 + 24) = v21 + 64;
        *(_DWORD *)(v19 + 8) = v17;
        *(_DWORD *)(v19 + 20) = v22 + 64;
        *(_BYTE *)(v19 + 28) = -1;
        *(_BYTE *)(v19 + 29) = -1;
        *(_BYTE *)(v19 + 30) = -1;
        *(_BYTE *)(v19 + 31) = -1;
      }
      Ogre::BaseObject::release(v17);
      ++v16;
    }
    v23 = 0;
    *(_BYTE *)(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 45) = 0;
    while ( v23 < (v36 - (_BYTE *)v35) >> 2 )
      Ogre::BaseObject::release(*((_DWORD **)v35 + v23++));
    v24 = (Ogre::Timer *)Ogre::LogSetCurParam(
                           (int)"D:/work/oworldsrc/client/iworld/BlockMaterialMgr.cpp",
                           (_BYTE *)&stru_368.st_value + 2,
                           2,
                           (unsigned int)v35);
    v25 = (v36 - (_BYTE *)v35) >> 2;
    v27 = Ogre::Timer::getSystemTick(v24, v26);
    Ogre::LogMessage((Ogre *)"end genBlockIcon: %d/%d, %d", (const char *)v25, v33, v27 - SystemTick);
    v31 = 1;
LABEL_41:
    std::_Vector_base<BlockMaterial *>::~_Vector_base((void **)&v38);
    if ( v35 != nullptr )
      operator delete(v35);
    Ogre::TextureRenderGen::~TextureRenderGen((Ogre::TextureRenderGen *)v42);
  }
  return v31;
}


//======================================================================
// BlockMaterialMgr::updateLoad(bool)
// address: 0x002C482C   size: 0x19C (412 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::updateLoad(BlockMaterialMgr *this, int a2)
{
  int result; // r0
  char *v4; // r4
  int v5; // r5
  int (__fastcall **v6)(int); // r6
  int v7; // r3
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r3
  _DWORD *v11; // r5
  int v12; // r6
  unsigned int v13; // r4
  BlockMaterial *v14; // r4
  int v15; // r3
  int v16; // r3
  unsigned int v17; // [sp+Ch] [bp-28h]
  unsigned int v18; // [sp+10h] [bp-24h]
  int v19; // [sp+1Ch] [bp-18h]
  int v20; // [sp+20h] [bp-14h]
  _BYTE v21[8]; // [sp+2Ch] [bp-8h] BYREF

  v17 = *((_DWORD *)this + 15);
  result = Ogre::Singleton<DefManager>::ms_Singleton;
  v19 = *(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 432) + 1;
  v18 = v19;
  if ( a2 == 0 && *(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 432) + 1 > v17 + 3 )
    v18 = v17 + 3;
  v20 = 4 * v17;
  while ( v17 < v18 )
  {
    v4 = *(char **)(*(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 420) + v20);
    if ( v4 != nullptr )
    {
      sub_3BF0BC((int)v21, v4 + 148);
      v5 = dword_516530;
      v6 = (int (__fastcall **)(int))&unk_51652C;
      while ( v5 != 0 )
      {
        if ( std::operator<<char>() != 0 )
        {
          v7 = *(_DWORD *)(v5 + 12);
          v5 = (int)v6;
        }
        else
        {
          v7 = *(_DWORD *)(v5 + 8);
        }
        v6 = (int (__fastcall **)(int))v5;
        v5 = v7;
      }
      if ( v6 != (int (__fastcall **)(int))&unk_51652C && std::operator<<char>() != 0 )
        v6 = (int (__fastcall **)(int))&unk_51652C;
      v8 = sub_3BDF80(v21);
      if ( v6 == (int (__fastcall **)(int))&unk_51652C )
      {
        Ogre::LogSetCurParam(
          (int)"D:/work/oworldsrc/client/iworld/BlockMaterialMgr.cpp",
          (const char *)&stru_1B8.st_value + 2,
          8,
          (unsigned int)&unk_51652C);
        Ogre::LogMessage((Ogre *)"Load BlockDef error: type=%s, id=%d", v4 + 148, v17);
      }
      else
      {
        v9 = (_DWORD *)v6[5](v8);
        v10 = *v9;
        v11 = v9;
        v9[1] = v6[4];
        (*(void (__fastcall **)(_DWORD *, _DWORD))(v10 + 8))(v9, *(_DWORD *)v4);
        BlockMaterial::m_LightOpacity[*(_DWORD *)v4] = *((_DWORD *)v4 + 16);
        BlockMaterial::m_LightValue[*(_DWORD *)v4] = *((_DWORD *)v4 + 17);
        v12 = *(_DWORD *)v4;
        BlockMaterial::m_IsOpaqueCube[v12] = (*(int (__fastcall **)(_DWORD *))(*v11 + 60))(v11);
        *(_DWORD *)(4 * *(_DWORD *)v4 + *((_DWORD *)this + 12)) = v11;
      }
    }
    result = v20 + 4;
    ++v17;
    v20 += 4;
  }
  *((_DWORD *)this + 15) = v18;
  if ( v18 == v19 )
  {
    v13 = dword_516540;
    if ( dword_516540 == 0 )
    {
      dword_516540 = 1;
      while ( 1 )
      {
        v15 = *((_DWORD *)this + 50);
        if ( v13 >= (*((_DWORD *)this + 51) - v15) >> 2 )
          break;
        v16 = *(_DWORD *)(4 * v13++ + v15);
        Ogre::TextureData::genMipmaps(*(_DWORD *)(v16 + 4), *((_DWORD *)this + 49));
      }
    }
    BlockMaterialMgr::genBlockIcon(this);
    v14 = (BlockMaterial *)operator new(0x30u);
    BlockMaterial::BlockMaterial(v14);
    *(_DWORD *)v14 = &off_45ED90;
    result = UnloadBlockMaterial::init(v14, 4095);
    *(_DWORD *)(*((_DWORD *)this + 12) + 16380) = v14;
  }
  return result;
}


//======================================================================
// BlockMaterialMgr::getMaterial(int)
// address: 0x002C4A00   size: 0x1A (26 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::getMaterial(BlockMaterialMgr *this, int a2)
{
  if ( a2 >= *((_DWORD *)this + 15) )
    BlockMaterialMgr::updateLoad(this, 1);
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 12));
}


//======================================================================
// BlockMaterialMgr::getIconTexture(int,Ogre::TRect<int> &,Ogre::ColorQuad &)
// address: 0x002C4A1C   size: 0x126 (294 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::getIconTexture(BlockMaterialMgr *a1, const char *a2, int a3, _BYTE *a4)
{
  int ItemDef; // r0
  unsigned int v7; // r3
  int v8; // r7
  int v9; // r2
  void *v10; // r1
  int v11; // r2
  void *v12; // r1
  Ogre::FixedString *v13; // r2
  int result; // r0
  int v15; // r5
  int v16; // r1
  int v17; // r7
  Ogre::FixedString *v19; // [sp+4h] [bp-130h]
  Ogre::ResourceManager *v21; // [sp+8h] [bp-12Ch]
  Ogre::FixedString *v22[7]; // [sp+10h] [bp-124h] BYREF
  char s[256]; // [sp+2Ch] [bp-108h] BYREF

  ItemDef = DefManager::getItemDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, (int)a2);
  v8 = ItemDef;
  if ( ItemDef == 0 )
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/BlockMaterialMgr.cpp",
      (_BYTE *)&stru_2F8.st_value + 3,
      8,
      v7);
    Ogre::LogMessage((Ogre *)"itemdef is NULL; id=%d", a2);
    return v8;
  }
  if ( *(_BYTE *)(ItemDef + 304) != 0 || *(_DWORD *)(ItemDef + 4) != 1 )
  {
    j_sprintf(s, "items/%s.png", (const char *)(ItemDef + 304));
    v21 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v22, (Ogre::FixedString *)s, v9);
    v8 = Ogre::ResourceManager::blockLoad(v21, v22, 0);
    Ogre::FixedString::~FixedString(v22, v10);
    if ( v8 == 0 )
    {
      v19 = (Ogre::FixedString *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
      Ogre::FixedString::FixedString((Ogre::FixedString *)v22, (Ogre::FixedString *)"blocks/default.png", v11);
      v8 = Ogre::ResourceManager::blockLoad(v19, v22, 0);
      Ogre::FixedString::~FixedString(v22, v12);
    }
    (*(void (__fastcall **)(int, Ogre::FixedString **))(*(_DWORD *)v8 + 28))(v8, v22);
    v13 = v22[1];
    *(Ogre::FixedString **)(a3 + 12) = v22[2];
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)(a3 + 8) = v13;
    *a4 = -1;
    a4[1] = -1;
    a4[2] = -1;
    a4[3] = -1;
    return v8;
  }
  result = BlockMaterialMgr::getMaterial(a1, (int)a2);
  v15 = result;
  if ( result != 0 )
  {
    result = *(_DWORD *)(result + 8);
    if ( result != 0 )
    {
      v16 = *(_DWORD *)(v15 + 16);
      v17 = *(_DWORD *)(v15 + 20);
      *(_DWORD *)a3 = *(_DWORD *)(v15 + 12);
      *(_DWORD *)(a3 + 4) = v16;
      *(_DWORD *)(a3 + 8) = v17;
      *(_DWORD *)(a3 + 12) = *(_DWORD *)(v15 + 24);
      *(_DWORD *)a4 = *(_DWORD *)(v15 + 28);
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v15 + 8) + 4))(*(_DWORD *)(v15 + 8));
      return *(_DWORD *)(v15 + 8);
    }
  }
  return result;
}


//======================================================================
// BlockMaterialMgr::needGenBlockIcon(void)
// address: 0x002C4B64   size: 0x36 (54 bytes)
//======================================================================
int __fastcall BlockMaterialMgr::needGenBlockIcon(BlockMaterialMgr *this)
{
  int result; // r0

  *((_BYTE *)this + 160) = 0;
  result = 1;
  if ( *((_DWORD *)this + 15) == (*(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 424)
                                - *(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 420)) >> 2 )
    return BlockMaterialMgr::genBlockIcon(this);
  return result;
}

