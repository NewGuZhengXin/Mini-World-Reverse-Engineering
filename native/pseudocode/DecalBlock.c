// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: DecalBlock

//======================================================================
// DecalBlock::~DecalBlock()
// address: 0x00268E00   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN10DecalBlockD1Ev'
void __fastcall DecalBlock::~DecalBlock(DecalBlock *this)
{
  char *v1; // r5
  _DWORD *v3; // r0
  int v4; // r2

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_45BBA0;
  v3 = *((_DWORD **)this + 69);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *((_DWORD *)v1 + 6) = 0;
  }
  SectionMesh::~SectionMesh(this);
}


//======================================================================
// DecalBlock::~DecalBlock()
// address: 0x00268E3C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall DecalBlock::~DecalBlock(DecalBlock *this)
{
  DecalBlock::~DecalBlock(this);
  operator delete(this);
}


//======================================================================
// DecalBlock::updateWorldCache(void)
// address: 0x00268E4E   size: 0x11A (282 bytes)
//======================================================================
float __fastcall DecalBlock::updateWorldCache(DecalBlock *this)
{
  DecalBlock *v1; // r4
  int v2; // r6
  int v3; // r5
  float v4; // r7
  float v5; // r6
  float v6; // r0
  float v7; // r7
  float v8; // r6
  float v9; // r0
  float result; // r0
  float *v11; // [sp+0h] [bp-14h]
  float v12; // [sp+4h] [bp-10h]
  float v13; // [sp+8h] [bp-Ch]

  v1 = this;
  Ogre::MovableObject::updateWorldCache(this);
  v2 = 100 * *((_DWORD *)v1 + 73);
  v3 = 100 * *((_DWORD *)v1 + 74);
  v12 = (float)(100 * *((_DWORD *)v1 + 72));
  v13 = (float)v2;
  v4 = (float)(100 * *((_DWORD *)v1 + 72) + 100);
  v5 = (float)(v2 + 100);
  v6 = (float)(v3 + 100);
  v11 = (float *)((char *)v1 + 140);
  v1 = (DecalBlock *)((char *)v1 + 152);
  *v11 = (float)(v12 + v4) * 0.5;
  v11[1] = (float)(v13 + v5) * 0.5;
  v11[2] = (float)((float)v3 + v6) * 0.5;
  v7 = (float)(v4 - v12) * 0.5;
  v8 = (float)(v5 - v13) * 0.5;
  v9 = (float)(v6 - (float)v3) * 0.5;
  *(float *)v1 = v7;
  *((float *)v1 + 1) = v8;
  *((float *)v1 + 2) = v9;
  result = j_sqrt((float)((float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v9 * v9)));
  v11[6] = result;
  return result;
}


//======================================================================
// DecalBlock::DecalBlock(char const*,int)
// address: 0x00268F68   size: 0x96 (150 bytes)
//======================================================================
// Alternative name is '_ZN10DecalBlockC1EPKci'
void __fastcall DecalBlock::DecalBlock(DecalBlock *this, Ogre::FixedString *a2, int a3)
{
  void *v6; // r1
  int v7; // r2
  int v8; // r3
  Ogre::Material *v9; // r7
  void *v10; // r1
  BlockMaterialMgr *v11; // [sp+4h] [bp-10h]
  Ogre::FixedString *v12[2]; // [sp+Ch] [bp-8h] BYREF

  SectionMesh::SectionMesh(this, true);
  *(_DWORD *)this = &off_45BBA0;
  *((_DWORD *)this + 72) = 0x7FFFFFFF;
  *((_DWORD *)this + 73) = 0x7FFFFFFF;
  *((_DWORD *)this + 74) = 0x7FFFFFFF;
  *((_DWORD *)this + 76) = -1;
  v11 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  v12[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                  a2,
                                  (const char *)0xFFFFFFFF,
                                  (int)this + 288,
                                  Ogre::Singleton<BlockMaterialMgr>::ms_Singleton);
  *((_DWORD *)this + 70) = BlockMaterialMgr::getTexElement(v11, (const Ogre::FixedString *)v12, a3);
  Ogre::FixedString::~FixedString(v12, v6);
  v12[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                  (Ogre::FixedString *)"blockdecal",
                                  (const char *)0xFFFFFFFF,
                                  v7,
                                  v8);
  v9 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v9, (const Ogre::FixedString *)v12);
  *((_DWORD *)this + 69) = v9;
  Ogre::FixedString::~FixedString(v12, v10);
  *(_BYTE *)(*((_DWORD *)this + 69) + 28) = 1;
  *((_DWORD *)this + 71) = SectionMesh::getSubMesh(this, *((Ogre::Material **)this + 69));
}


//======================================================================
// DecalBlock::setBlock(World *,WCoord const&,int)
// address: 0x0026902C   size: 0x154 (340 bytes)
//======================================================================
void __fastcall DecalBlock::setBlock(DecalBlock *this, World *a2, const WCoord *a3, int a4)
{
  int v6; // r2
  int *Section; // r0
  int *v8; // r5
  Ogre::FixedString *v9; // r3
  int v10; // r0
  int v11; // r7
  int BlockMaterial; // r0
  float v13; // r7
  char *v14; // r4
  _DWORD *v15; // r3
  unsigned int v16; // r6
  int v17; // r6
  unsigned int v18; // r5
  Ogre::Material *v19; // r7
  Ogre::Texture *Texture; // r0
  void *v21; // r1
  float v22; // [sp+4h] [bp-20h]
  Ogre::FixedString *v25[4]; // [sp+14h] [bp-10h] BYREF

  if ( *(_DWORD *)a3 != *((_DWORD *)this + 72)
    || (v6 = *((_DWORD *)this + 73), *((_DWORD *)a3 + 1) != v6)
    || *((_DWORD *)a3 + 2) != *((_DWORD *)this + 74) )
  {
    SectionMesh::reset(this, false);
    Section = (int *)World::getSection(a2, a3);
    v8 = Section;
    if ( Section == nullptr )
      return;
    v9 = (Ogre::FixedString *)(*((_DWORD *)a3 + 2) - Section[4]);
    v10 = Section[2];
    v11 = *(_DWORD *)a3;
    v25[1] = (Ogre::FixedString *)(*((_DWORD *)a3 + 1) - v8[3]);
    v25[2] = v9;
    v25[0] = (Ogre::FixedString *)(v11 - v10);
    BlockMaterial = World::getBlockMaterial(a2, a3);
    (*(void (__fastcall **)(int, int *, Ogre::FixedString **, _DWORD, _DWORD))(*(_DWORD *)BlockMaterial + 20))(
      BlockMaterial,
      v8,
      v25,
      *((_DWORD *)this + 71),
      *((_DWORD *)this + 71));
    v13 = (float)v8[3] * 100.0;
    v22 = (float)v8[4] * 100.0;
    *((float *)this + 66) = (float)v8[2] * 100.0;
    *((float *)this + 67) = v13;
    *((float *)this + 68) = v22;
    SectionMesh::onCreate(this);
    *((_DWORD *)this + 72) = *(_DWORD *)a3;
    *((_DWORD *)this + 73) = *((_DWORD *)a3 + 1);
    *((_DWORD *)this + 74) = *((_DWORD *)a3 + 2);
    *((_DWORD *)this + 76) = -1;
    (*(void (__fastcall **)(DecalBlock *))(*(_DWORD *)this + 68))(this);
  }
  v14 = (char *)this + 252;
  v15 = *((_DWORD **)this + 70);
  if ( v15[9] != 0 )
  {
    v6 = v15[7];
    v16 = v15[8] * v6;
  }
  else
  {
    v17 = v15[11];
    v15 = (_DWORD *)v15[10];
    v16 = (v17 - (int)v15) >> 2;
  }
  v18 = a4 * v16 / 0xA;
  if ( v18 >= v16 )
    v18 = v16 - 1;
  if ( v18 != *((_DWORD *)v14 + 13) )
  {
    v19 = *((Ogre::Material **)v14 + 6);
    v25[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                    (Ogre::FixedString *)"g_DiffuseTex",
                                    (const char *)0xFFFFFFFF,
                                    v6,
                                    (int)v15);
    Texture = (Ogre::Texture *)BlockTexElement::getTexture(*((BlockTexElement **)v14 + 7), v18);
    Ogre::Material::setParamTexture(v19, (const Ogre::FixedString *)v25, Texture, 0);
    Ogre::FixedString::~FixedString(v25, v21);
    *((_DWORD *)v14 + 13) = v18;
  }
}


//======================================================================
// DecalBlock::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x00269188   size: 0x8 (8 bytes)
//======================================================================
int __fastcall DecalBlock::render(DecalBlock *this, Ogre::SceneRenderer *a2, const Ogre::ShaderEnvData *a3)
{
  return SectionMesh::render(this, a2, a3);
}

