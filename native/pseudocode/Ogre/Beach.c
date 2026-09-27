// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Beach

//======================================================================
// Ogre::Beach::getRTTI(void)const
// address: 0x001699F8   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Beach::getRTTI(Ogre::Beach *this)
{
  return &Ogre::Beach::m_RTTI;
}


//======================================================================
// Ogre::Beach::attachToScene(Ogre::GameScene *,bool)
// address: 0x00169A04   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::Beach::attachToScene(Ogre::Beach *this, Ogre::GameScene *a2, bool a3)
{
  Ogre::MovableObject::attachToScene(this, a2, a3);
  return (*(int (__fastcall **)(Ogre::GameScene *, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
}


//======================================================================
// Ogre::Beach::detachFromScene(void)
// address: 0x00169A18   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Beach::detachFromScene(Ogre::Beach *this)
{
  return Ogre::MovableObject::detachFromScene(this);
}


//======================================================================
// Ogre::Beach::~Beach()
// address: 0x00169A20   size: 0x5E (94 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5BeachD1Ev'
void __fastcall Ogre::Beach::~Beach(Ogre::Beach *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  void *v5; // r0
  void *v6; // r0

  v1 = (_DWORD *)((char *)this + 252);
  *(_DWORD *)this = &off_457020;
  v3 = *((_DWORD **)this + 92);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    v1[29] = 0;
  }
  v4 = (_DWORD *)v1[7];
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    v1[7] = 0;
  }
  v5 = (void *)v1[17];
  if ( v5 != nullptr )
  {
    operator delete(v5);
    v1[17] = 0;
  }
  v6 = *((void **)this + 89);
  if ( v6 != nullptr )
    operator delete(v6);
  Ogre::VertexFormat::~VertexFormat((void **)this + 72);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::Beach::~Beach()
// address: 0x00169A84   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Beach::~Beach(Ogre::Beach *this)
{
  Ogre::Beach::~Beach(this);
  operator delete(this);
}


//======================================================================
// Ogre::Beach::updateWorldCache(void)
// address: 0x00169A98   size: 0x34 (52 bytes)
//======================================================================
float __fastcall Ogre::Beach::updateWorldCache(Ogre::Beach *this)
{
  char *WorldMatrix; // r0
  int v3; // r3
  int v4; // r1
  float result; // r0

  Ogre::MovableObject::updateWorldCache(this);
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  v3 = *((_DWORD *)WorldMatrix + 14);
  v4 = *((_DWORD *)WorldMatrix + 12);
  *((_DWORD *)this + 64) = *((_DWORD *)WorldMatrix + 13);
  *((_DWORD *)this + 65) = v3;
  *((_DWORD *)this + 63) = v4;
  *((_DWORD *)this + 66) = 1148846080;
  *((_DWORD *)this + 67) = 1148846080;
  *((_DWORD *)this + 68) = 1148846080;
  result = Ogre::Vector3::length((Ogre::Beach *)((char *)this + 264));
  *((float *)this + 69) = result;
  return result;
}


//======================================================================
// Ogre::Beach::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x00169AD0   size: 0x1A6 (422 bytes)
//======================================================================
float __fastcall Ogre::Beach::render(float this, Ogre::DynamicBufferPool **a2, const Ogre::ShaderEnvData *a3)
{
  Ogre::MovableObject *v3; // r5
  unsigned int *v4; // r7
  signed int v5; // r6
  int v6; // r4
  _DWORD *v7; // r3
  int v8; // r6
  float *WorldMatrix; // r5
  float *v10; // r4
  float v11; // r7
  float v12; // r0
  Ogre::SceneRenderer *v13; // r1
  float v14; // [sp+24h] [bp-58h]
  Ogre::DynamicVertexBuffer *v15; // [sp+28h] [bp-54h]
  float *v16; // [sp+28h] [bp-54h]
  Ogre::SceneRenderer *v18; // [sp+2Ch] [bp-50h]
  _BYTE v20[56]; // [sp+38h] [bp-44h] BYREF
  float v21; // [sp+70h] [bp-Ch]

  v3 = (Ogre::MovableObject *)LODWORD(this);
  if ( (unsigned int)(-1431655765 * ((*(_DWORD *)(LODWORD(this) + 360) - *(_DWORD *)(LODWORD(this) + 356)) >> 2)) > 1 )
  {
    v4 = (unsigned int *)(LODWORD(this) + 252);
    v15 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                         a2,
                                         (const Ogre::VertexFormat *)(LODWORD(this) + 288),
                                         *(_DWORD *)(LODWORD(this) + 308));
    v5 = 0;
    v6 = Ogre::DynamicVertexBuffer::lock(v15);
    while ( v5 < (int)v4[14] )
    {
      v7 = (_DWORD *)(v4[17] + 12 * v5);
      *(_DWORD *)v6 = *v7;
      *(_DWORD *)(v6 + 4) = v7[1];
      *(_DWORD *)(v6 + 8) = v7[2];
      *(_BYTE *)(v6 + 12) = -1;
      *(_BYTE *)(v6 + 13) = -1;
      *(_BYTE *)(v6 + 14) = -1;
      *(_BYTE *)(v6 + 15) = -1;
      v14 = (float)(v5 / 2);
      *(float *)(v6 + 16) = v14
                          * (float)(*((float *)v4 + 21)
                                  / (float)(unsigned int)(-1431655765
                                                        * ((*((_DWORD *)v3 + 90) - *((_DWORD *)v3 + 89)) >> 2)));
      *(float *)(v6 + 24) = v14
                          * (float)(1.0
                                  / (float)(unsigned int)(-1431655765
                                                        * ((*((_DWORD *)v3 + 90) - *((_DWORD *)v3 + 89)) >> 2)));
      if ( (v5 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 20) = v4[22];
        *(_DWORD *)(v6 + 28) = 1065353216;
      }
      else
      {
        *(_DWORD *)(v6 + 20) = 0;
        *(_DWORD *)(v6 + 28) = 0;
      }
      ++v5;
      v6 += 32;
    }
    v8 = 0;
    v16 = (float *)Ogre::SceneRenderer::newContext(
                     (int)a2,
                     2,
                     a3,
                     (Ogre::Material *)v4[12],
                     v4[8],
                     v15,
                     nullptr,
                     5,
                     v4[15],
                     1);
    Ogre::ShaderContext::setInstanceEnvData((Ogre::ShaderContext *)v16, (Ogre::SceneRenderer *)a2, nullptr, a3, nullptr);
    WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(v3);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v20);
    do
    {
      v10 = (float *)((char *)a3 + 956);
      v18 = nullptr;
      do
      {
        v11 = (float)((float)(*WorldMatrix * *v10) + (float)(WorldMatrix[1] * v10[4]))
            + (float)(WorldMatrix[2] * v10[8]);
        v12 = WorldMatrix[3] * v10[12];
        v13 = v18;
        ++v10;
        *(float *)&v20[v8 + (_DWORD)v18] = v11 + v12;
        v18 = (Ogre::SceneRenderer *)((char *)v18 + 4);
      }
      while ( v13 != (Ogre::SceneRenderer *)&byte_9[3] );
      v8 += 16;
      WorldMatrix += 4;
    }
    while ( v8 != 64 );
    this = v21 + 100000.0;
    v16[5] = v21 + 100000.0;
  }
  return this;
}


//======================================================================
// Ogre::Beach::update(unsigned int)
// address: 0x00169C80   size: 0x66 (102 bytes)
//======================================================================
__int64 __fastcall Ogre::Beach::update(__int64 this)
{
  unsigned int v1; // r4
  int v2; // r6
  float v3; // r0
  float v4; // r1
  double v5; // r0
  int v6; // r2
  Ogre::Material *v7; // r5
  void *v8; // r1
  __int64 v10; // [sp+0h] [bp-8h] BYREF

  v10 = this;
  v1 = HIDWORD(this);
  v2 = this;
  Ogre::MovableObject::update((Ogre::MovableObject *)this, HIDWORD(this));
  v2 += 252;
  v3 = (float)((float)v1 / 1000.0) + *(float *)(v2 + 52);
  v4 = *(float *)(v2 + 92);
  *(float *)(v2 + 52) = v3;
  v5 = j_sin((float)(v3 * v4));
  *(float *)&v5 = *(float *)(v2 + 100) * v5;
  v7 = *(Ogre::Material **)(v2 + 48);
  LODWORD(v10) = LODWORD(v5);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v10 + 4), (Ogre::FixedString *)"g_uvTrans", v6);
  Ogre::Material::setParamValue(v7, (const Ogre::FixedString *)((char *)&v10 + 4), &v10);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v10 + 1, v8);
  return v10;
}


//======================================================================
// Ogre::Beach::clearPoints(void)
// address: 0x00169CF0   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::Beach::clearPoints(int this)
{
  *(_DWORD *)(this + 360) = *(_DWORD *)(this + 356);
  return this;
}


//======================================================================
// Ogre::Beach::getNumPoint(void)
// address: 0x00169D00   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::Beach::getNumPoint(Ogre::Beach *this)
{
  return -1431655765 * ((*((_DWORD *)this + 90) - *((_DWORD *)this + 89)) >> 2);
}


//======================================================================
// Ogre::Beach::reBuild(void)
// address: 0x00169D1C   size: 0x1E8 (488 bytes)
//======================================================================
float __fastcall Ogre::Beach::reBuild(float this)
{
  int v1; // r3
  _DWORD *v2; // r4
  void *v3; // r0
  unsigned int v4; // r3
  unsigned int v5; // r0
  float *v6; // r4
  float v7; // r5
  float v8; // r0
  int v9; // r3
  float *v10; // r5
  float *v11; // r4
  float v12; // r6
  float v13; // r0
  float v14; // r5
  float *v15; // r7
  float *v16; // r7
  float v17; // r6
  float *v18; // r5
  int v19; // r5
  float v20; // [sp+0h] [bp-3Ch]
  float *v21; // [sp+4h] [bp-38h]
  int i; // [sp+8h] [bp-34h]
  float v23; // [sp+Ch] [bp-30h]
  float v24; // [sp+10h] [bp-2Ch]
  float v25; // [sp+14h] [bp-28h]
  int v26; // [sp+18h] [bp-24h]
  float v27; // [sp+1Ch] [bp-20h]
  float v28; // [sp+20h] [bp-1Ch] BYREF
  float v29; // [sp+24h] [bp-18h]
  float v30; // [sp+28h] [bp-14h]
  float v31; // [sp+2Ch] [bp-10h] BYREF
  float v32; // [sp+30h] [bp-Ch]
  float v33; // [sp+34h] [bp-8h]

  v24 = this;
  v1 = *(_DWORD *)(LODWORD(this) + 360) - *(_DWORD *)(LODWORD(this) + 356);
  v26 = -1431655765 * (v1 >> 2);
  if ( v26 > 1 )
  {
    v2 = (_DWORD *)(LODWORD(this) + 252);
    v3 = *(void **)(LODWORD(this) + 320);
    v2[14] = 1431655766 * (v1 >> 2);
    v2[15] = 1431655766 * (v1 >> 2) - 2;
    if ( v3 != nullptr )
    {
      operator delete(v3);
      v2[17] = 0;
    }
    v4 = v2[14];
    if ( v4 > 0xAA00000 )
      v5 = -1;
    else
      v5 = 12 * v4;
    v2[17] = operator new[](v5);
    for ( i = 0; i != v26; ++i )
    {
      if ( i != 0 )
      {
        v9 = *(_DWORD *)(LODWORD(v24) + 356);
        v10 = (float *)(v9 + 12 * i);
        v11 = (float *)(v9 + 12 * i - 12);
        v12 = v10[2] - v11[2];
        v13 = *v10 - *v11;
        v29 = v10[1] - v11[1];
        v28 = v13;
        v30 = v12;
      }
      else
      {
        v6 = *(float **)(LODWORD(v24) + 356);
        v7 = v6[5] - v6[2];
        v8 = v6[3] - *v6;
        v29 = v6[4] - v6[1];
        v28 = v8;
        v30 = v7;
      }
      Ogre::Normalize(&v28);
      v31 = v30 - (float)(v29 * 0.0);
      v32 = (float)(v28 * 0.0) - (float)(v30 * 0.0);
      v33 = (float)(v29 * 0.0) - v28;
      Ogre::Normalize(&v31);
      v14 = *(float *)(LODWORD(v24) + 324);
      v15 = (float *)(*(_DWORD *)(LODWORD(v24) + 356) + 12 * i);
      v21 = (float *)(*(_DWORD *)(LODWORD(v24) + 320) + 24 * i);
      v23 = (float)(v14 * v32) + v15[1];
      v27 = (float)(v14 * v33) + v15[2];
      *v21 = *v15 + (float)(v14 * v31);
      v21[1] = v23;
      v21[2] = v27;
      *(float *)(*(_DWORD *)(LODWORD(v24) + 320) + 24 * i + 4) = *(float *)(*(_DWORD *)(LODWORD(v24) + 320) + 24 * i + 4)
                                                               + *(float *)(LODWORD(v24) + 328);
      v16 = (float *)(*(_DWORD *)(LODWORD(v24) + 320) + 24 * i + 12);
      v17 = *(float *)(LODWORD(v24) + 324);
      v18 = (float *)(*(_DWORD *)(LODWORD(v24) + 356) + 12 * i);
      v25 = v18[1] - (float)(v17 * v32);
      v20 = v18[2] - (float)(v17 * v33);
      *v16 = *v18 - (float)(v17 * v31);
      v16[1] = v25;
      v16[2] = v20;
      v19 = *(_DWORD *)(LODWORD(v24) + 320) + 24 * i + 12;
      this = *(float *)(v19 + 4) + *(float *)(LODWORD(v24) + 328);
      *(float *)(v19 + 4) = this;
    }
  }
  return this;
}


//======================================================================
// Ogre::Beach::removeLastPoint(void)
// address: 0x00169F08   size: 0x24 (36 bytes)
//======================================================================
float __fastcall Ogre::Beach::removeLastPoint(float this)
{
  int v1; // r3

  v1 = *(_DWORD *)(LODWORD(this) + 360);
  if ( v1 - *(_DWORD *)(LODWORD(this) + 356) > 11 )
  {
    *(_DWORD *)(LODWORD(this) + 360) = v1 - 12;
    return Ogre::Beach::reBuild(this);
  }
  return this;
}


//======================================================================
// Ogre::Beach::setWidth(float)
// address: 0x00169F2C   size: 0xE (14 bytes)
//======================================================================
float __fastcall Ogre::Beach::setWidth(Ogre::Beach *this, float a2)
{
  *((float *)this + 81) = a2;
  return Ogre::Beach::reBuild(*(float *)&this);
}


//======================================================================
// Ogre::Beach::getWidth(void)
// address: 0x00169F3A   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Beach::getWidth(Ogre::Beach *this)
{
  return *((_DWORD *)this + 81);
}


//======================================================================
// Ogre::Beach::setHeight(float)
// address: 0x00169F40   size: 0xE (14 bytes)
//======================================================================
float __fastcall Ogre::Beach::setHeight(Ogre::Beach *this, float a2)
{
  *((float *)this + 82) = a2;
  return Ogre::Beach::reBuild(*(float *)&this);
}


//======================================================================
// Ogre::Beach::getHeight(void)
// address: 0x00169F4E   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Beach::getHeight(Ogre::Beach *this)
{
  return *((_DWORD *)this + 82);
}


//======================================================================
// Ogre::Beach::setUVXRepeat(int)
// address: 0x00169F54   size: 0x18 (24 bytes)
//======================================================================
float __fastcall Ogre::Beach::setUVXRepeat(Ogre::Beach *this, int a2)
{
  *((float *)this + 84) = (float)a2;
  return Ogre::Beach::reBuild(*(float *)&this);
}


//======================================================================
// Ogre::Beach::setUVYrepeat(int)
// address: 0x00169F6C   size: 0x18 (24 bytes)
//======================================================================
float __fastcall Ogre::Beach::setUVYrepeat(Ogre::Beach *this, int a2)
{
  *((float *)this + 85) = (float)a2;
  return Ogre::Beach::reBuild(*(float *)&this);
}


//======================================================================
// Ogre::Beach::setBlendMode(int)
// address: 0x00169F84   size: 0x28 (40 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::Beach::setBlendMode(Ogre::Beach *this, int a2, int a3)
{
  char *v3; // r5
  Ogre::Material *v4; // r6
  void *v5; // r1
  Ogre::FixedString *v6; // [sp+4h] [bp-4h] BYREF

  v3 = (char *)this + 252;
  *((_DWORD *)this + 83) = a2;
  v4 = *((Ogre::Material **)this + 75);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v6, (Ogre::FixedString *)"BLEND_MODE", a3);
  Ogre::Material::setParamMacro(v4, (const Ogre::FixedString *)&v6, *((_DWORD *)v3 + 20));
  Ogre::FixedString::~FixedString(&v6, v5);
}


//======================================================================
// Ogre::Beach::getBlendMode(void)
// address: 0x00169FB0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::Beach::getBlendMode(Ogre::Beach *this)
{
  return *((_DWORD *)this + 83);
}


//======================================================================
// Ogre::Beach::setTextureRes(std::string)
// address: 0x00169FB8   size: 0x60 (96 bytes)
//======================================================================
int __fastcall Ogre::Beach::setTextureRes(int a1, int a2)
{
  int v2; // r4
  _DWORD *v3; // r0
  Ogre::TextureData *v5; // r5
  int v6; // r2
  Ogre::Material *v7; // r6
  void *v8; // r1
  Ogre::FixedString *v11; // [sp+4h] [bp-4h] BYREF

  v2 = a1 + 252;
  v3 = *(_DWORD **)(a1 + 368);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *(_DWORD *)(v2 + 116) = 0;
  }
  v5 = (Ogre::TextureData *)operator new(0x48u);
  Ogre::TextureData::TextureData(v5);
  *(_DWORD *)(v2 + 116) = v5;
  if ( v5 != nullptr )
  {
    if ( Ogre::TextureData::loadFromImageFile(v5, a2, 0) == 0 )
    {
      Ogre::BaseObject::release(*(_DWORD **)(v2 + 116));
      *(_DWORD *)(v2 + 116) = 0;
    }
    v7 = *(Ogre::Material **)(v2 + 48);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v11, (Ogre::FixedString *)"g_DiffuseTex", v6);
    Ogre::Material::setParamTexture(v7, (const Ogre::FixedString *)&v11, *(Ogre::Texture **)(v2 + 116), 0);
    Ogre::FixedString::~FixedString(&v11, v8);
  }
  return a1;
}


//======================================================================
// Ogre::Beach::setMaskTextureRes(std::string)
// address: 0x0016A01C   size: 0x60 (96 bytes)
//======================================================================
int __fastcall Ogre::Beach::setMaskTextureRes(int a1, int a2)
{
  int v2; // r4
  _DWORD *v3; // r0
  Ogre::TextureData *v5; // r5
  int v6; // r2
  Ogre::Material *v7; // r6
  void *v8; // r1
  Ogre::FixedString *v11; // [sp+4h] [bp-4h] BYREF

  v2 = a1 + 252;
  v3 = *(_DWORD **)(a1 + 372);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *(_DWORD *)(v2 + 120) = 0;
  }
  v5 = (Ogre::TextureData *)operator new(0x48u);
  Ogre::TextureData::TextureData(v5);
  *(_DWORD *)(v2 + 120) = v5;
  if ( v5 != nullptr )
  {
    if ( Ogre::TextureData::loadFromImageFile(v5, a2, 0) == 0 )
    {
      Ogre::BaseObject::release(*(_DWORD **)(v2 + 120));
      *(_DWORD *)(v2 + 120) = 0;
    }
    v7 = *(Ogre::Material **)(v2 + 48);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v11, (Ogre::FixedString *)"g_MaskTex", v6);
    Ogre::Material::setParamTexture(v7, (const Ogre::FixedString *)&v11, *(Ogre::Texture **)(v2 + 120), 0);
    Ogre::FixedString::~FixedString(&v11, v8);
  }
  return a1;
}


//======================================================================
// Ogre::Beach::setUVSpeed(float)
// address: 0x0016A080   size: 0x6 (6 bytes)
//======================================================================
float *__fastcall Ogre::Beach::setUVSpeed(Ogre::Beach *this, float a2)
{
  float *result; // r0

  result = (float *)((char *)this + 252);
  result[23] = a2;
  return result;
}


//======================================================================
// Ogre::Beach::addPoint(Ogre::Vector3)
// address: 0x0016A0FC   size: 0xC0 (192 bytes)
//======================================================================
void __fastcall Ogre::Beach::addPoint(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  int v3; // r5
  unsigned int v6; // r0
  _DWORD *v7; // r3
  _DWORD *v8; // r0
  void *v9; // r0
  unsigned int v10; // [sp+4h] [bp-10h]
  int v11; // [sp+8h] [bp-Ch]
  _DWORD *v12; // [sp+8h] [bp-Ch]
  _DWORD *v13; // [sp+Ch] [bp-8h]

  v2 = a1 + 89;
  v3 = a1[90];
  if ( v3 == a1[91] )
  {
    v6 = std::vector<Ogre::Vector3>::_M_check_len(a1 + 89, 1u, (int)"vector::_M_insert_aux");
    v10 = v6;
    v11 = a1[89];
    if ( v6 != 0 )
    {
      if ( v6 > 0x15555555 )
        sub_3BCEB4(v6);
      v13 = (_DWORD *)operator new(12 * v6);
    }
    else
    {
      v13 = nullptr;
    }
    v7 = &v13[(v3 - v11) >> 2];
    if ( v7 != nullptr )
    {
      *v7 = *a2;
      v7[1] = a2[1];
      v7[2] = a2[2];
    }
    v8 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector3 *,Ogre::Vector3 *>(
           (char *)a1[89],
           (char *)v3,
           v13);
    v12 = std::__uninitialized_copy<false>::__uninit_copy<Ogre::Vector3 *,Ogre::Vector3 *>(
            (char *)v3,
            (char *)v2[1],
            v8 + 3);
    v9 = (void *)a1[89];
    if ( v9 != nullptr )
      operator delete(v9);
    a1[89] = v13;
    v2[1] = v12;
    v2[2] = &v13[3 * v10];
  }
  else
  {
    if ( v3 != 0 )
    {
      *(_DWORD *)v3 = *a2;
      *(_DWORD *)(v3 + 4) = a2[1];
      *(_DWORD *)(v3 + 8) = a2[2];
    }
    a1[90] += 12;
  }
}


//======================================================================
// Ogre::Beach::Beach(Ogre::BeachData *)
// address: 0x0016A1C4   size: 0x186 (390 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5BeachC1EPNS_9BeachDataE'
Ogre::Beach *__fastcall Ogre::Beach::Beach(char **this, Ogre::BeachData *a2)
{
  unsigned int v4; // r5
  char *v5; // r1
  int v6; // r3
  unsigned int v7; // r2
  signed int v8; // r3
  int v9; // r1
  char *v10; // r2
  _DWORD *v11; // r1
  char *v12; // r0
  int v13; // r2
  int v14; // r2
  int *v16; // [sp+Ch] [bp-18h]
  Ogre::Material *v17; // [sp+Ch] [bp-18h]
  Ogre::FixedString *v18[4]; // [sp+14h] [bp-10h] BYREF

  Ogre::MovableObject::MovableObject((Ogre::MovableObject *)this);
  *(this + 59) = (_BYTE *)(&dword_0 + 2);
  *(this + 60) = nullptr;
  *((_BYTE *)this + 248) = 0;
  *(this + 61) = (_BYTE *)(&dword_0 + 3);
  *(this + 53) = nullptr;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  v16 = (int *)(this + 72);
  *this = (char *)&off_457020;
  Ogre::VertexFormat::VertexFormat(this + 72);
  *(this + 89) = nullptr;
  *(this + 90) = nullptr;
  *(this + 91) = nullptr;
  *(this + 70) = (char *)a2;
  *(this + 92) = nullptr;
  *(this + 93) = nullptr;
  if ( a2 != nullptr )
  {
    (*(void (__fastcall **)(Ogre::BeachData *))(*(_DWORD *)a2 + 4))(a2);
    *(this + 81) = *((char **)a2 + 4);
    *(this + 82) = *((char **)a2 + 5);
    *(this + 83) = *((char **)a2 + 6);
    v4 = -1431655765 * ((*((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 12)) >> 2);
    v5 = *(this + 90);
    v6 = (int)*(this + 89);
    v7 = -1431655765 * ((int)&v5[-v6] >> 2);
    if ( v4 <= v7 )
    {
      if ( v4 < v7 )
        *(this + 90) = (char *)(v6 + 4 * ((*((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 12)) >> 2));
    }
    else
    {
      std::vector<Ogre::Vector3>::_M_fill_insert((int)(this + 89), v5, v4 - v7, v18);
    }
    v8 = 0;
    while ( v8 < (int)v4 )
    {
      v9 = 12 * v8++;
      v10 = &(*(this + 89))[v9];
      v11 = (_DWORD *)(*((_DWORD *)a2 + 12) + v9);
      *(_DWORD *)v10 = *v11;
      *((_DWORD *)v10 + 1) = v11[1];
      *((_DWORD *)v10 + 2) = v11[2];
    }
    v12 = *((char **)a2 + 15);
    *(this + 92) = v12;
    (*(void (__fastcall **)(char *))(*(_DWORD *)v12 + 4))(v12);
  }
  Ogre::VertexFormat::addElement(v16, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement(v16, 4u, 5u, 0, 0, -1);
  Ogre::VertexFormat::addElement(v16, 1u, 7u, 0, 0, -1);
  Ogre::VertexFormat::addElement(v16, 1u, 7u, 1, 0, -1);
  *(this + 71) = (char *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                           + 36))(
                           Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                           v16);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"beach", v13);
  v17 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v17, (const Ogre::FixedString *)v18);
  *(this + 75) = (char *)v17;
  Ogre::FixedString::~FixedString(v18, v17);
  Ogre::Beach::setBlendMode((Ogre::Beach *)this, 1, v14);
  *(this + 81) = (char *)1120403456;
  *(this + 80) = nullptr;
  *(this + 87) = nullptr;
  *(this + 82) = (char *)1084227584;
  *(this + 76) = nullptr;
  *(this + 84) = (char *)1092616192;
  *(this + 85) = (char *)1065353216;
  *(this + 86) = (char *)1065353216;
  *(this + 88) = (char *)1065353216;
  return (Ogre::Beach *)this;
}


//======================================================================
// Ogre::Beach::newObject(void)
// address: 0x0016A368   size: 0x16 (22 bytes)
//======================================================================
char **__fastcall Ogre::Beach::newObject(Ogre::Beach *this)
{
  char **v1; // r4

  v1 = (char **)operator new(0x178u);
  Ogre::Beach::Beach(v1, nullptr);
  return v1;
}

