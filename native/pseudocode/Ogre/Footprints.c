// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Footprints

//======================================================================
// Ogre::Footprints::getRTTI(void)const
// address: 0x00183728   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Footprints::getRTTI(Ogre::Footprints *this)
{
  return &Ogre::Footprints::m_RTTI;
}


//======================================================================
// Ogre::Footprints::resetUpdate(bool,unsigned int)
// address: 0x00183734   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::Footprints::resetUpdate(Ogre::Footprints *this, bool a2, unsigned int a3)
{
  ;
}


//======================================================================
// Ogre::Footprints::~Footprints()
// address: 0x00183738   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10FootprintsD1Ev'
void __fastcall Ogre::Footprints::~Footprints(Ogre::Footprints *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  void *v4; // r0

  v1 = (_DWORD *)((char *)this + 252);
  *(_DWORD *)this = &off_457C38;
  v3 = *((_DWORD **)this + 63);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *v1 = 0;
  }
  v4 = *((void **)this + 64);
  if ( v4 != nullptr )
    operator delete(v4);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::Footprints::~Footprints()
// address: 0x00183774   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Footprints::~Footprints(Ogre::Footprints *this)
{
  Ogre::Footprints::~Footprints(this);
  operator delete(this);
}


//======================================================================
// Ogre::Footprints::Footprints(void)
// address: 0x00183788   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10FootprintsC1Ev'
Ogre::Footprints *__fastcall Ogre::Footprints::Footprints(Ogre::Footprints *this)
{
  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_457C38;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  return this;
}


//======================================================================
// Ogre::Footprints::newObject(void)
// address: 0x001837D0   size: 0x14 (20 bytes)
//======================================================================
Ogre::Footprints *__fastcall Ogre::Footprints::newObject(Ogre::Footprints *this)
{
  Ogre::Footprints *v1; // r4

  v1 = (Ogre::Footprints *)operator new(0x110u);
  Ogre::Footprints::Footprints(v1);
  return v1;
}


//======================================================================
// Ogre::Footprints::update(unsigned int)
// address: 0x00183828   size: 0x5C (92 bytes)
//======================================================================
__int64 __fastcall Ogre::Footprints::update(Ogre::Footprints *this, unsigned int a2)
{
  unsigned int v3; // r4
  int v4; // r3
  int v5; // r5
  float v6; // r0
  float v7; // r1
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  v3 = 0;
  *((float *)&v9 + 1) = (float)a2 / 1000.0;
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 64);
    if ( v3 >= (*((_DWORD *)this + 65) - v4) >> 6 )
      break;
    v5 = v4 + (v3 << 6);
    v6 = *((float *)&v9 + 1) + *(float *)(v5 + 56);
    v7 = *(float *)(v5 + 60);
    *(float *)(v5 + 56) = v6;
    if ( v6 < v7 )
    {
      ++v3;
    }
    else
    {
      Ogre::Footprints::OnePrint::operator=((_DWORD *)(v4 + (v3 << 6)), (_DWORD *)(*((_DWORD *)this + 65) - 64));
      *((_DWORD *)this + 65) -= 64;
    }
  }
  return v9;
}


//======================================================================
// Ogre::Footprints::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x00183888   size: 0x454 (1108 bytes)
//======================================================================
int __fastcall Ogre::Footprints::render(int this, Ogre::DynamicBufferPool **a2, const Ogre::ShaderEnvData *a3)
{
  int v3; // r4
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r6
  float *v9; // r5
  int v10; // r5
  float *v11; // r4
  float v12; // r6
  float v13; // r7
  float v14; // r6
  int v15; // r3
  float v16; // r6
  int v17; // r3
  float v18; // r6
  int v19; // r3
  float *v20; // r4
  float v21; // r7
  float v22; // r0
  int v23; // r1
  float v24; // [sp+20h] [bp-59Ch]
  int v25; // [sp+20h] [bp-59Ch]
  int v26; // [sp+20h] [bp-59Ch]
  float v27; // [sp+24h] [bp-598h]
  float v28; // [sp+24h] [bp-598h]
  float v29; // [sp+24h] [bp-598h]
  float v30; // [sp+24h] [bp-598h]
  int v31; // [sp+28h] [bp-594h]
  Ogre::ShaderContext *v32; // [sp+28h] [bp-594h]
  _WORD *v33; // [sp+2Ch] [bp-590h]
  char v34; // [sp+30h] [bp-58Ch]
  float v35; // [sp+30h] [bp-58Ch]
  int v36; // [sp+34h] [bp-588h]
  float v37; // [sp+34h] [bp-588h]
  Ogre::DynamicIndexBuffer *v38; // [sp+38h] [bp-584h]
  float v39; // [sp+38h] [bp-584h]
  int v40; // [sp+3Ch] [bp-580h]
  float v41; // [sp+3Ch] [bp-580h]
  __int16 v42; // [sp+40h] [bp-57Ch]
  float v43; // [sp+44h] [bp-578h]
  float v44; // [sp+44h] [bp-578h]
  float v45; // [sp+44h] [bp-578h]
  float v46; // [sp+48h] [bp-574h]
  float v47; // [sp+48h] [bp-574h]
  float v48; // [sp+48h] [bp-574h]
  int v49; // [sp+4Ch] [bp-570h]
  unsigned int v52; // [sp+58h] [bp-564h]
  Ogre::DynamicVertexBuffer *v53; // [sp+5Ch] [bp-560h]
  int v54; // [sp+60h] [bp-55Ch]
  int v55; // [sp+64h] [bp-558h]
  _BYTE v56[64]; // [sp+68h] [bp-554h] BYREF
  _DWORD v57[325]; // [sp+A8h] [bp-514h] BYREF

  v3 = this + 252;
  v4 = *(_DWORD *)(this + 256);
  v5 = *(_DWORD *)(this + 260);
  v49 = this;
  if ( v4 != v5 )
  {
    v6 = (v5 - v4) >> 6;
    v52 = 4 * v6;
    v40 = v6;
    v53 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                         a2,
                                         (const Ogre::VertexFormat *)&unk_4BB67C,
                                         4 * v6);
    v38 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(a2, 6 * v40);
    v31 = Ogre::DynamicVertexBuffer::lock(v53);
    v7 = Ogre::DynamicIndexBuffer::lock(v38);
    v33 = (_WORD *)v7;
    if ( v31 != 0 && v7 != 0 )
    {
      v10 = v31;
      v36 = 0;
      v55 = v3;
      v54 = v31 + 16;
      while ( 1 )
      {
        v42 = 4 * v36;
        if ( v36 == v40 )
          break;
        v11 = (float *)(*(_DWORD *)(v55 + 4) + (v36 << 6));
        v12 = v11[12];
        v34 = ~(unsigned int)(float)((float)(v11[14] * 255.0) / v11[15]);
        v24 = v11[13];
        v27 = (float)((float)(v12 * v11[7]) + v11[1]) + (float)(v24 * v11[10]);
        v13 = (float)((float)(v12 * v11[8]) + v11[2]) + (float)(v24 * v11[11]);
        *(float *)v10 = (float)((float)(v12 * v11[6]) + *v11) + (float)(v24 * v11[9]);
        *(_BYTE *)(v10 + 12) = -1;
        *(_BYTE *)(v10 + 13) = -1;
        *(_BYTE *)(v10 + 14) = -1;
        *(float *)(v10 + 4) = v27;
        *(_BYTE *)(v10 + 15) = v34;
        *(float *)(v10 + 8) = v13;
        v25 = v10 - v31;
        *(_DWORD *)(v25 + v54) = 1065353216;
        *(_DWORD *)(v25 + v54 + 4) = 0;
        v14 = v11[12];
        v28 = v11[13];
        v43 = (float)((float)(v14 * v11[7]) + v11[1]) - (float)(v28 * v11[10]);
        v46 = (float)((float)(v14 * v11[8]) + v11[2]) - (float)(v28 * v11[11]);
        *(float *)(v25 + v31 + 24) = (float)((float)(v14 * v11[6]) + *v11) - (float)(v28 * v11[9]);
        *(float *)(v10 + 28) = v43;
        *(float *)(v10 + 32) = v46;
        *(_BYTE *)(v10 + 36) = -1;
        *(_BYTE *)(v10 + 37) = -1;
        *(_BYTE *)(v10 + 38) = -1;
        *(_BYTE *)(v10 + 39) = v34;
        v15 = v31 + 40;
        *(_DWORD *)(v25 + v15) = 0;
        *(_DWORD *)(v25 + v15 + 4) = 0;
        v16 = v11[12];
        v29 = v11[13];
        v44 = (float)(v11[1] - (float)(v16 * v11[7])) + (float)(v29 * v11[10]);
        v47 = (float)(v11[2] - (float)(v16 * v11[8])) + (float)(v29 * v11[11]);
        *(float *)(v25 + v31 + 48) = (float)(*v11 - (float)(v16 * v11[6])) + (float)(v29 * v11[9]);
        *(float *)(v10 + 52) = v44;
        *(float *)(v10 + 56) = v47;
        *(_BYTE *)(v10 + 60) = -1;
        *(_BYTE *)(v10 + 61) = -1;
        *(_BYTE *)(v10 + 62) = -1;
        *(_BYTE *)(v10 + 63) = v34;
        v17 = v31 + 64;
        *(_DWORD *)(v25 + v17) = 1065353216;
        *(_DWORD *)(v25 + v17 + 4) = 1065353216;
        v18 = v11[12];
        v30 = v11[13];
        v45 = (float)(v11[1] - (float)(v18 * v11[7])) - (float)(v30 * v11[10]);
        v48 = (float)(v11[2] - (float)(v18 * v11[8])) - (float)(v30 * v11[11]);
        *(float *)(v25 + v31 + 72) = (float)(*v11 - (float)(v18 * v11[6])) - (float)(v30 * v11[9]);
        *(float *)(v10 + 76) = v45;
        *(float *)(v10 + 80) = v48;
        *(_BYTE *)(v10 + 84) = -1;
        *(_BYTE *)(v10 + 85) = -1;
        *(_BYTE *)(v10 + 86) = -1;
        *(_BYTE *)(v10 + 87) = v34;
        v19 = v31 + 88;
        *(_DWORD *)(v25 + v19) = 0;
        *(_DWORD *)(v25 + v19 + 4) = 1065353216;
        v10 += 96;
        *v33 = v42;
        v33[1] = v42 + 1;
        v33[3] = v42 + 1;
        v33[5] = v42 + 3;
        v33[2] = v42 + 2;
        v33[4] = v42 + 2;
        v33 += 6;
        ++v36;
      }
    }
    v8 = 0;
    *((_DWORD *)v38 + 5) = v52;
    *((_DWORD *)v38 + 4) = 0;
    Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v57, a3);
    Ogre::ShaderEnvData::clearFlags((Ogre::ShaderEnvData *)v57);
    v32 = Ogre::SceneRenderer::newContext(
            (int)a2,
            *(_DWORD *)(v49 + 236),
            v57,
            *(Ogre::Material **)(v49 + 252),
            dword_4BB688,
            v53,
            v38,
            4,
            2 * v40,
            1);
    *((_DWORD *)v32 + 5) = 1203982336;
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v56);
    v9 = (float *)((char *)a3 + 956);
    do
    {
      v20 = (float *)((char *)a3 + 1020);
      v35 = *v9;
      v37 = v9[1];
      v39 = v9[2];
      v41 = v9[3];
      v26 = 0;
      do
      {
        v21 = (float)((float)(v35 * *v20) + (float)(v37 * v20[4])) + (float)(v39 * v20[8]);
        v22 = v41 * v20[12];
        v23 = v26;
        ++v20;
        *(float *)&v56[v8 + v26] = v21 + v22;
        v26 += 4;
      }
      while ( v23 != 12 );
      v8 += 16;
      v9 += 4;
    }
    while ( v8 != 64 );
    return Ogre::ShaderContext::addValueParam((int)v32, 2, v56, 7, 1);
  }
  return this;
}


//======================================================================
// Ogre::Footprints::Footprints(char const*)
// address: 0x00183D24   size: 0x196 (406 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10FootprintsC1EPKc'
Ogre::Footprints *__fastcall Ogre::Footprints::Footprints(Ogre::Material **this, Ogre::FixedString *a2)
{
  int v3; // r3
  int v4; // r5
  int v5; // r2
  Ogre::Material *v6; // r7
  void *v7; // r1
  Ogre::ResourceManager *v8; // r7
  int v9; // r2
  Ogre::Texture *v10; // r7
  void *v11; // r1
  Ogre::Material *v12; // r6
  int v13; // r2
  int v14; // r3
  void *v15; // r1
  char *v16; // r5
  Ogre::FixedString *v17; // r7
  void *v18; // r0
  Ogre::FixedString *v21; // [sp+Ch] [bp-18h]
  char *v22; // [sp+10h] [bp-14h]
  int v23; // [sp+14h] [bp-10h]
  Ogre::FixedString *v24[2]; // [sp+1Ch] [bp-8h] BYREF

  Ogre::MovableObject::MovableObject((Ogre::MovableObject *)this);
  *(this + 59) = (Ogre::Material *)(&dword_0 + 2);
  v3 = 0;
  *(this + 60) = nullptr;
  *((_BYTE *)this + 248) = 0;
  *(this + 61) = (Ogre::Material *)(&dword_0 + 3);
  *(this + 53) = nullptr;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  v4 = dword_4BB688;
  *this = (Ogre::Material *)&off_457C38;
  v5 = 256;
  *(this + 64) = nullptr;
  *(this + 65) = nullptr;
  *(this + 66) = nullptr;
  if ( v4 == 0 )
  {
    Ogre::VertexFormat::addElement(dword_4BB67C, 2u, 1u, 0, 0, -1);
    Ogre::VertexFormat::addElement(dword_4BB67C, 4u, 5u, 0, 0, -1);
    Ogre::VertexFormat::addElement(dword_4BB67C, 1u, 7u, 0, 0, -1);
    dword_4BB688 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 36))(
                     Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                     dword_4BB67C);
  }
  v24[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                  (Ogre::FixedString *)"footprint",
                                  (const char *)0xFFFFFFFF,
                                  v5,
                                  v3);
  v6 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v6, (const Ogre::FixedString *)v24);
  *(this + 63) = v6;
  Ogre::FixedString::release((int)v24[0], v7);
  v8 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  v24[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                  a2,
                                  (const char *)0xFFFFFFFF,
                                  v9,
                                  (int)&Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton);
  v10 = (Ogre::Texture *)Ogre::ResourceManager::blockLoad(v8, v24, 0);
  Ogre::FixedString::release((int)v24[0], v11);
  v12 = *(this + 63);
  v24[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                  (Ogre::FixedString *)"g_DiffuseTex",
                                  (const char *)0xFFFFFFFF,
                                  v13,
                                  v14);
  Ogre::Material::setParamTexture(v12, (const Ogre::FixedString *)v24, v10, 0);
  Ogre::FixedString::release((int)v24[0], v15);
  if ( v10 != nullptr )
    Ogre::BaseObject::release(v10);
  v16 = (char *)*(this + 64);
  if ( (unsigned int)((*(this + 66) - (Ogre::Material *)v16) >> 6) <= 0x63 )
  {
    v22 = (char *)*(this + 65);
    v23 = (v22 - v16) >> 6;
    v21 = (Ogre::FixedString *)operator new(0x1900u);
    v17 = v21;
    while ( v16 != v22 )
    {
      if ( v17 != nullptr )
        Ogre::Footprints::OnePrint::OnePrint(v17, v16);
      v16 += 64;
      v17 = (Ogre::FixedString *)((char *)v17 + 64);
    }
    v18 = *(this + 64);
    if ( v18 != nullptr )
      operator delete(v18);
    *(this + 64) = v21;
    *(this + 65) = (Ogre::FixedString *)((char *)v21 + 64 * v23);
    *(this + 66) = (Ogre::FixedString *)((char *)v21 + 6400);
  }
  *(this + 35) = nullptr;
  *(this + 36) = nullptr;
  *(this + 37) = nullptr;
  *(this + 38) = (Ogre::Material *)1203982336;
  *(this + 39) = (Ogre::Material *)1203982336;
  *(this + 40) = (Ogre::Material *)1203982336;
  *(this + 41) = (Ogre::Material *)1210656069;
  return (Ogre::Footprints *)this;
}


//======================================================================
// Ogre::Footprints::addFootprint(Ogre::Vector3 const&,Ogre::Vector3 const&,Ogre::Vector3 const&,float,float,float)
// address: 0x00183FDC   size: 0x114 (276 bytes)
//======================================================================
void __fastcall Ogre::Footprints::addFootprint(
        Ogre::Footprints *this,
        const Ogre::Vector3 *a2,
        const Ogre::Vector3 *a3,
        const Ogre::Vector3 *a4,
        float a5,
        float a6,
        float a7)
{
  float v7; // r7
  float v8; // r0
  float v9; // r5
  float v10; // r1
  float v11; // r6
  int v12; // r3
  char *v13; // r1
  float v14; // [sp+4h] [bp-58h]
  float v15; // [sp+Ch] [bp-50h]
  float v17; // [sp+14h] [bp-48h]
  float v18[17]; // [sp+18h] [bp-44h] BYREF

  v14 = *(float *)a3;
  v7 = *((float *)a3 + 2);
  v15 = *((float *)a3 + 1);
  v17 = (float)(v7 * 10.0) + *((float *)a2 + 2);
  v8 = *(float *)a2 + (float)(*(float *)a3 * 10.0);
  v18[1] = (float)(v15 * 10.0) + *((float *)a2 + 1);
  v9 = *((float *)a4 + 1);
  v18[2] = v17;
  v18[3] = v14;
  v10 = *(float *)a4;
  v11 = *((float *)a4 + 2);
  v18[0] = v8;
  v18[6] = v10;
  v18[4] = v15;
  v18[5] = v7;
  v18[7] = v9;
  v18[8] = v11;
  v18[9] = (float)(v15 * v11) - (float)(v7 * v9);
  v18[10] = (float)(v7 * v10) - (float)(v14 * v11);
  v18[11] = (float)(v14 * v9) - (float)(v15 * v10);
  v18[12] = a5;
  v18[13] = a6;
  v18[14] = 0.0;
  v18[15] = a7;
  v12 = *((_DWORD *)this + 65);
  if ( (unsigned int)((v12 - *((_DWORD *)this + 64)) >> 6) > 0x63 )
    *((_DWORD *)this + 65) = v12 - 64;
  v13 = *((char **)this + 65);
  if ( v13 == *((char **)this + 66) )
  {
    std::vector<Ogre::Footprints::OnePrint>::_M_insert_aux((int)this + 256, v13, v18);
  }
  else
  {
    if ( v13 != nullptr )
      Ogre::Footprints::OnePrint::OnePrint(*((_DWORD **)this + 65), v18);
    *((_DWORD *)this + 65) += 64;
  }
}

