// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockGlassPane

//======================================================================
// BlockGlassPane::newObject(void)
// address: 0x002C176C   size: 0x20 (32 bytes)
//======================================================================
ModelBlockMaterial *__fastcall BlockGlassPane::newObject(BlockGlassPane *this)
{
  ModelBlockMaterial *v1; // r4

  v1 = (ModelBlockMaterial *)operator new(0x40u);
  ModelBlockMaterial::ModelBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45F888;
  *((_DWORD *)v1 + 15) = 0;
  return v1;
}


//======================================================================
// BlockGlassPane::getGeomName(void)
// address: 0x002C6AD4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall BlockGlassPane::getGeomName(BlockGlassPane *this)
{
  return "glasspane";
}


//======================================================================
// BlockGlassPane::isOpaque(void)
// address: 0x002C6AE0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockGlassPane::isOpaque(BlockGlassPane *this)
{
  return 0;
}


//======================================================================
// BlockGlassPane::~BlockGlassPane()
// address: 0x002C6AE4   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN14BlockGlassPaneD1Ev'
void __fastcall BlockGlassPane::~BlockGlassPane(BlockGlassPane *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_45F888;
  v2 = *((_DWORD **)this + 15);
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *((_DWORD *)this + 15) = 0;
  }
  ModelBlockMaterial::~ModelBlockMaterial(this);
}


//======================================================================
// BlockGlassPane::~BlockGlassPane()
// address: 0x002C6B1C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockGlassPane::~BlockGlassPane(BlockGlassPane *this)
{
  BlockGlassPane::~BlockGlassPane(this);
  operator delete(this);
}


//======================================================================
// BlockGlassPane::getBlockGeomID(int *,int *,Section *,WCoord const&)
// address: 0x002C6B2E   size: 0xE0 (224 bytes)
//======================================================================
unsigned int __fastcall BlockGlassPane::getBlockGeomID(
        BlockGlassPane *this,
        int *a2,
        int *a3,
        Section *a4,
        const WCoord *a5)
{
  int v7; // r7
  int v8; // r2
  int v9; // r12
  int v10; // r3
  int v11; // r2
  unsigned int result; // r0
  unsigned int v13; // r1
  int v14; // r2
  unsigned int v15; // r2
  int v16; // r3
  int *v17; // r4
  int v18; // r1
  int v19; // [sp+0h] [bp-1Ch]
  int v20[5]; // [sp+8h] [bp-14h] BYREF

  WallNeighborFlags(v20, this, a4, a5);
  v7 = v20[1];
  v8 = v20[3];
  v9 = v20[2];
  v10 = v20[0] + v20[1] + v20[2] + v20[3];
  v19 = v20[0];
  if ( v10 == 1 )
  {
    v11 = 0;
    result = 0;
    do
    {
      if ( v20[v11] > 0 )
      {
        v13 = result;
        a2[v13] = 1;
        ++result;
        a3[v13] = v11;
      }
      ++v11;
    }
    while ( v11 != 4 );
    return result;
  }
  result = v10 & 0xFFFFFFFB;
  if ( (v10 & 0xFFFFFFFB) == 0 )
  {
    *a2 = 0;
    goto LABEL_19;
  }
  if ( v20[2] > 0 && v20[3] > 0 )
  {
    v14 = 2;
    *a2 = 2;
LABEL_15:
    *a3 = v14;
    result = 1;
    goto LABEL_21;
  }
  if ( v20[0] > 0 && v20[1] > 0 )
  {
    *a2 = 2;
    v14 = 0;
    goto LABEL_15;
  }
  if ( v10 == 2 )
  {
    *a2 = 3;
    result = 1;
    if ( v19 > 0 )
    {
      if ( v9 <= 0 )
      {
        if ( v8 <= 0 )
          goto LABEL_19;
        v10 = 0;
      }
      *a3 = v10;
      return result;
    }
    if ( v7 > 0 && v8 > 0 )
    {
      *a3 = 3;
      return result;
    }
LABEL_19:
    *a3 = result;
    return 1;
  }
  result = 0;
LABEL_21:
  if ( v10 == 3 )
  {
    v15 = result;
    a2[result] = 1;
    v16 = 0;
    while ( v20[v16] != 0 )
    {
      if ( ++v16 == 4 )
        return result;
    }
    ++result;
    v17 = &a3[v15];
    v18 = v16 + 1;
    if ( (v16 & 1) != 0 )
      v18 = v16 - 1;
    *v17 = v18;
  }
  return result;
}


//======================================================================
// BlockGlassPane::createBlockMesh(ClientSection *,WCoord const&,SectionSubMesh *)
// address: 0x002C6C0E   size: 0xC8 (200 bytes)
//======================================================================
SectionSubMesh *__fastcall BlockGlassPane::createBlockMesh(
        BlockGlassPane *this,
        ClientSection *a2,
        const WCoord *a3,
        SectionSubMesh *a4)
{
  int v6; // r7
  SectionSubMesh *result; // r0
  int v8; // r5
  SectionSubMesh *v9; // [sp+14h] [bp-88h]
  SectionSubMesh *v12; // [sp+20h] [bp-7Ch]
  int v13; // [sp+24h] [bp-78h]
  _DWORD v14[4]; // [sp+28h] [bp-74h] BYREF
  _DWORD v15[8]; // [sp+38h] [bp-64h] BYREF
  _DWORD v16[8]; // [sp+58h] [bp-44h] BYREF
  float v17[9]; // [sp+78h] [bp-24h] BYREF

  ClientSection::getBlockVertexLight(a2, a3, v17);
  v12 = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, *((Ogre::Material **)this + 13));
  v6 = 0;
  v13 = (*(int (__fastcall **)(BlockGlassPane *, _DWORD *, _DWORD *, ClientSection *, const WCoord *))(*(_DWORD *)this + 192))(
          this,
          v15,
          v16,
          a2,
          a3);
  while ( v6 < v13 )
  {
    BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v14, v15[v6], 1065353216, 0, v16[v6], 0, nullptr);
    SectionSubMesh::addGeomBlockLight(v12, v14, a3, v17, 0);
    ++v6;
  }
  result = BlockMaterial::blockMeshOutput(this, a4, (SectionMesh **)a2, *((Ogre::Material **)this + 15));
  v8 = 0;
  v9 = result;
  while ( v8 < v13 )
  {
    BlockGeomTemplate::getFaceVerts(*((_DWORD *)this + 10), v14, v15[v8] + 4, 1065353216, 0, v16[v8], 0, nullptr);
    result = (SectionSubMesh *)SectionSubMesh::addGeomBlockLight(v9, v14, a3, v17, 0);
    ++v8;
  }
  return result;
}


//======================================================================
// BlockGlassPane::createCollideData(CollisionDetect *,World *,WCoord const&)
// address: 0x002C6CD6   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall BlockGlassPane::createCollideData(
        BlockGlassPane *this,
        CollisionDetect *a2,
        World *a3,
        const WCoord *a4)
{
  _DWORD *Section; // r0
  int (__fastcall *v7)(BlockGlassPane *, _DWORD *, _DWORD *); // r6
  int v8; // r1
  int v9; // r2
  int v10; // r7
  int result; // r0
  int v12; // r6
  int v13; // r4
  int v14; // [sp+14h] [bp-88h]
  int v15; // [sp+18h] [bp-84h]
  int v16; // [sp+20h] [bp-7Ch]
  int v18[3]; // [sp+28h] [bp-74h] BYREF
  int v19[3]; // [sp+34h] [bp-68h] BYREF
  _DWORD v20[3]; // [sp+40h] [bp-5Ch] BYREF
  int v21; // [sp+4Ch] [bp-50h] BYREF
  int v22; // [sp+50h] [bp-4Ch]
  int v23; // [sp+54h] [bp-48h]
  _DWORD v24[8]; // [sp+58h] [bp-44h] BYREF
  _DWORD v25[9]; // [sp+78h] [bp-24h] BYREF

  Section = (_DWORD *)World::getSection(a3, a4);
  v7 = *(int (__fastcall **)(BlockGlassPane *, _DWORD *, _DWORD *))(*(_DWORD *)this + 192);
  v8 = *((_DWORD *)a4 + 2) - Section[4];
  v9 = Section[2];
  v10 = *(_DWORD *)a4;
  v22 = *((_DWORD *)a4 + 1) - Section[3];
  v23 = v8;
  v21 = v10 - v9;
  result = v7(this, v24, v25);
  v14 = 100 * *(_DWORD *)a4;
  v16 = result;
  v15 = 100 * *((_DWORD *)a4 + 1);
  v12 = 100 * *((_DWORD *)a4 + 2);
  v13 = 0;
  while ( v13 < v16 )
  {
    BlockGeomTemplate::getBoundBox(*((_DWORD **)this + 10), v18, v19, v24[v13], 1.0, v25[v13], 0);
    ++v13;
    v20[0] = v18[0] + v14;
    v20[1] = v15 + v18[1];
    v20[2] = v12 + v18[2];
    v21 = v19[0] + v14;
    v22 = v15 + v19[1];
    v23 = v12 + v19[2];
    result = CollisionDetect::addObstacle(a2, (const WCoord *)v20, (const WCoord *)&v21);
  }
  return result;
}


//======================================================================
// BlockGlassPane::init(int)
// address: 0x002C6DA0   size: 0xCA (202 bytes)
//======================================================================
__int64 __fastcall BlockGlassPane::init(__int64 this, int a2)
{
  _DWORD *v2; // r5
  Ogre::Material *v3; // r6
  int v4; // r2
  void *v5; // r1
  BlockMaterialMgr *v6; // r6
  int v7; // r2
  BlockTexElement *TexElement; // r7
  void *v9; // r1
  int v10; // r2
  Ogre::Material *v11; // r6
  void *v12; // r1
  Ogre::Material *v13; // r6
  int v14; // r2
  void *v15; // r1
  Ogre::Material *v16; // r6
  int v17; // r2
  Ogre::Texture *Texture; // r0
  void *v19; // r1
  Ogre::Material *v20; // r5
  int v21; // r2
  void *v22; // r1
  __int64 v24; // [sp+0h] [bp-Ch] BYREF
  int v25; // [sp+8h] [bp-4h]

  v24 = this;
  v25 = a2;
  v2 = (_DWORD *)this;
  ModelBlockMaterial::init(this, a2);
  v3 = (Ogre::Material *)v2[13];
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v24 + 4), (Ogre::FixedString *)"BLEND_MODE", v4);
  v5 = (void *)(Ogre::Material::setParamMacro(v3, (const Ogre::FixedString *)((char *)&v24 + 4), 2u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v24 + 1, v5);
  v6 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v24 + 4), (Ogre::FixedString *)(v2[9] + 244), v7);
  TexElement = (BlockTexElement *)BlockMaterialMgr::getTexElement(v6, (const char **)&v24 + 1, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v24 + 1, v9);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v24 + 4), (Ogre::FixedString *)"block", v10);
  v11 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v11, (const Ogre::FixedString *)((char *)&v24 + 4));
  v2[15] = v11;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v24 + 1, v12);
  v13 = (Ogre::Material *)v2[15];
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v24 + 4), (Ogre::FixedString *)"BLEND_MODE", v14);
  v15 = (void *)(Ogre::Material::setParamMacro(v13, (const Ogre::FixedString *)((char *)&v24 + 4), 2u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v24 + 1, v15);
  v16 = (Ogre::Material *)v2[15];
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v24 + 4), (Ogre::FixedString *)"g_DiffuseTex", v17);
  Texture = (Ogre::Texture *)BlockTexElement::getTexture(TexElement, 0);
  Ogre::Material::setParamTexture(v16, (const Ogre::FixedString *)((char *)&v24 + 4), Texture, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v24 + 1, v19);
  v20 = (Ogre::Material *)v2[14];
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v24 + 4), (Ogre::FixedString *)"BLEND_MODE", v21);
  v22 = (void *)(Ogre::Material::setParamMacro(v20, (const Ogre::FixedString *)((char *)&v24 + 4), 2u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v24 + 1, v22);
  return v24;
}

