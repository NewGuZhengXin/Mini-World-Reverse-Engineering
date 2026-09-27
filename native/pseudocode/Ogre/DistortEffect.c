// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DistortEffect

//======================================================================
// Ogre::DistortEffect::onRestoreDevice(void)
// address: 0x00191EC0   size: 0xD4 (212 bytes)
//======================================================================
TiXmlNode *__fastcall Ogre::DistortEffect::onRestoreDevice(Ogre::DistortEffect *this, int a2, TiXmlElement *a3)
{
  TiXmlNode *result; // r0
  int v5; // r0
  int v6; // r1
  TiXmlNode *MultiSample; // r6
  int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // [sp+Ch] [bp-30h]
  int v12; // [sp+10h] [bp-2Ch] BYREF
  int v13; // [sp+14h] [bp-28h] BYREF
  int v14; // [sp+18h] [bp-24h] BYREF
  _DWORD v15[5]; // [sp+1Ch] [bp-20h] BYREF
  int v16; // [sp+30h] [bp-Ch]

  result = Ogre::Root::getDistort((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton, a2, a3);
  if ( result != nullptr )
  {
    v5 = (*(int (__fastcall **)(int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 32))(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton);
    (*(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v5 + 28))(v5, &v12, &v13);
    v15[2] = v13;
    v15[1] = v12;
    v15[4] = 1;
    v16 = 28;
    v14 = 4;
    v15[0] = 0;
    v11 = operator new(0x30u);
    Ogre::RT_TEXTURE::RT_TEXTURE(v11, v15, &v14);
    *((_DWORD *)this + 160) = v11;
    MultiSample = Ogre::Root::getMultiSample(
                    (TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton,
                    v6,
                    (TiXmlElement *)&stru_278.st_size);
    v8 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 160) + 32))(*((_DWORD *)this + 160));
    *((_DWORD *)this + 161) = (*(int (__fastcall **)(_DWORD, int, _DWORD, int, TiXmlNode *, _DWORD))(**(_DWORD **)(v8 + 12) + 24))(
                                *(_DWORD *)(v8 + 12),
                                v8,
                                0,
                                24,
                                MultiSample,
                                0);
    v16 = 35;
    v14 = 4;
    v15[0] = 0;
    v9 = operator new(0x30u);
    Ogre::RT_TEXTURE::RT_TEXTURE(v9, v15, &v14);
    *((_DWORD *)this + 162) = v9;
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 32))(v9);
    result = (TiXmlNode *)(*(int (__fastcall **)(_DWORD, int, _DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(v10 + 12) + 24))(
                            *(_DWORD *)(v10 + 12),
                            v10,
                            0,
                            32,
                            0,
                            0);
    *((_DWORD *)this + 163) = result;
  }
  return result;
}


//======================================================================
// Ogre::DistortEffect::onLostDevice(void)
// address: 0x00191F9C   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall Ogre::DistortEffect::onLostDevice(Ogre::DistortEffect *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *result; // r0

  v2 = *((_DWORD **)this + 161);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 161) = 0;
  }
  v3 = *((_DWORD **)this + 160);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 160) = 0;
  }
  v4 = *((_DWORD **)this + 162);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 162) = 0;
  }
  result = *((_DWORD **)this + 163);
  if ( result != nullptr )
  {
    result = Ogre::BaseObject::release(result);
    *((_DWORD *)this + 163) = 0;
  }
  return result;
}


//======================================================================
// Ogre::DistortEffect::~DistortEffect()
// address: 0x00191FEC   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13DistortEffectD1Ev'
void __fastcall Ogre::DistortEffect::~DistortEffect(void **this)
{
  _DWORD *v2; // r0

  *this = &off_458438;
  Ogre::DistortEffect::onLostDevice((Ogre::DistortEffect *)this);
  v2 = *(this + 165);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *(this + 165) = nullptr;
  }
  Ogre::VertexFormat::~VertexFormat(this + 166);
  Ogre::Singleton<Ogre::DistortEffect>::ms_Singleton = 0;
  Ogre::SceneRenderer::~SceneRenderer((Ogre::SceneRenderer *)this);
}


//======================================================================
// Ogre::DistortEffect::~DistortEffect()
// address: 0x00192038   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DistortEffect::~DistortEffect(void **this)
{
  Ogre::DistortEffect::~DistortEffect(this);
  operator delete(this);
}


//======================================================================
// Ogre::DistortEffect::doRender(void)
// address: 0x0019204C   size: 0x154 (340 bytes)
//======================================================================
int __fastcall Ogre::DistortEffect::doRender(Ogre::DistortEffect *this)
{
  int v1; // r3
  int v3; // r2
  void *v4; // r1
  int v5; // r2
  void *v6; // r1
  int v7; // r0
  Ogre::ShaderContextPool *v9; // [sp+1Ch] [bp-5D0h]
  Ogre::Material *v10; // [sp+24h] [bp-5C8h]
  Ogre::Material *v11; // [sp+24h] [bp-5C8h]
  Ogre::DynamicVertexBuffer *v12; // [sp+24h] [bp-5C8h]
  float v13; // [sp+28h] [bp-5C4h]
  float v14; // [sp+2Ch] [bp-5C0h]
  unsigned int v15; // [sp+34h] [bp-5B8h] BYREF
  unsigned int v16; // [sp+38h] [bp-5B4h] BYREF
  _DWORD v17[39]; // [sp+3Ch] [bp-5B0h] BYREF
  Ogre::FixedString *v18[325]; // [sp+D8h] [bp-514h] BYREF

  v17[9] = 0;
  v17[6] = 0;
  v17[5] = 0;
  v17[36] = 1;
  v1 = *((_DWORD *)this + 164);
  v9 = *((Ogre::ShaderContextPool **)this + 143);
  v17[1] = 0;
  v17[11] = 0;
  v17[10] = 1065353216;
  v17[8] = 1065353216;
  v17[7] = 1065353216;
  v17[0] = v1;
  v17[37] = 0;
  v17[38] = 0;
  Ogre::ShaderContextPool::startQueue(v9, (const Ogre::ContextQueDesc *)v17);
  v10 = *((Ogre::Material **)this + 165);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"g_SceneTexture", v3);
  Ogre::Material::setParamTexture(v10, (const Ogre::FixedString *)v18, *((Ogre::Texture **)this + 160), 0);
  Ogre::FixedString::~FixedString(v18, v4);
  v11 = *((Ogre::Material **)this + 165);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"g_DistortTexture", v5);
  Ogre::Material::setParamTexture(v11, (const Ogre::FixedString *)v18, *((Ogre::Texture **)this + 162), 0);
  Ogre::FixedString::~FixedString(v18, v6);
  (*(void (__fastcall **)(_DWORD, unsigned int *, unsigned int *))(**((_DWORD **)this + 164) + 28))(
    *((_DWORD *)this + 164),
    &v15,
    &v16);
  v13 = (float)v15 - 0.5;
  v14 = (float)v16 - 0.5;
  v12 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                       (Ogre::DynamicBufferPool **)this,
                                       (Ogre::DistortEffect *)((char *)this + 664),
                                       4u);
  v7 = Ogre::DynamicVertexBuffer::lock(v12);
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 20) = 0;
  *(float *)(v7 + 24) = v13;
  *(_DWORD *)v7 = -1090519040;
  *(_DWORD *)(v7 + 4) = -1090519040;
  *(_DWORD *)(v7 + 28) = -1090519040;
  *(_DWORD *)(v7 + 44) = 0;
  *(_DWORD *)(v7 + 48) = -1090519040;
  *(_DWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 8) = 1056964608;
  *(_DWORD *)(v7 + 12) = 1065353216;
  *(_DWORD *)(v7 + 32) = 1056964608;
  *(_DWORD *)(v7 + 36) = 1065353216;
  *(_DWORD *)(v7 + 40) = 1065353216;
  *(float *)(v7 + 52) = v14;
  *(_DWORD *)(v7 + 56) = 1056964608;
  *(_DWORD *)(v7 + 60) = 1065353216;
  *(_DWORD *)(v7 + 68) = 1065353216;
  *(float *)(v7 + 72) = v13;
  *(float *)(v7 + 76) = v14;
  *(_DWORD *)(v7 + 80) = 1056964608;
  *(_DWORD *)(v7 + 84) = 1065353216;
  *(_DWORD *)(v7 + 88) = 1065353216;
  *(_DWORD *)(v7 + 92) = 1065353216;
  Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v18);
  Ogre::SceneRenderer::newContext(
    (int)this,
    2,
    v18,
    *((Ogre::Material **)this + 165),
    *((_DWORD *)this + 169),
    v12,
    nullptr,
    5,
    2,
    0);
  return Ogre::ShaderContextPool::endQueue(*((_DWORD *)this + 143));
}


//======================================================================
// Ogre::DistortEffect::DistortEffect(void)
// address: 0x001921B0   size: 0xAE (174 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13DistortEffectC1Ev'
Ogre::DistortEffect *__fastcall Ogre::DistortEffect::DistortEffect(Ogre::DistortEffect *this)
{
  int v2; // r2
  Ogre::Material *v3; // r6
  void *v4; // r1
  int v5; // r1
  TiXmlElement *v6; // r2
  Ogre::FixedString *v8[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::SceneRenderer::SceneRenderer(this);
  Ogre::Singleton<Ogre::DistortEffect>::ms_Singleton = (int)this;
  *(_DWORD *)this = &off_458438;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 166);
  *((_DWORD *)this + 161) = 0;
  *((_DWORD *)this + 160) = 0;
  *((_DWORD *)this + 162) = 0;
  *((_DWORD *)this + 163) = 0;
  Ogre::VertexFormat::addElement((int *)this + 166, 3u, 0xAu, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 166, 1u, 7u, 0, 0, -1);
  *((_DWORD *)this + 169) = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                               + 36))(
                              Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                              (char *)this + 664);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v8, (Ogre::FixedString *)"distort", v2);
  v3 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v3, (const Ogre::FixedString *)v8);
  *((_DWORD *)this + 165) = v3;
  Ogre::FixedString::~FixedString(v8, v4);
  Ogre::DistortEffect::onRestoreDevice(this, v5, v6);
  return this;
}


//======================================================================
// Ogre::DistortEffect::setGray(bool)
// address: 0x00192270   size: 0x86 (134 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::DistortEffect::setGray(Ogre::DistortEffect *this, int a2, int a3)
{
  Ogre::Material *v3; // r5
  void *v4; // r1
  const char *v5; // r1
  Ogre::Material *v6; // r6
  void *v7; // r1
  Ogre::FixedString *v8; // [sp+4h] [bp-4h] BYREF

  *((_BYTE *)this + 680) = a2;
  if ( a2 != 0 )
  {
    if ( dword_4C6CD0 == 0 )
    {
      v3 = *((Ogre::Material **)this + 165);
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v8, (Ogre::FixedString *)"GRAY", a3);
      Ogre::Material::setParamMacro(v3, (const Ogre::FixedString *)&v8, 1);
      Ogre::FixedString::~FixedString(&v8, v4);
    }
    if ( ++dword_4C6CD0 > 2 )
    {
      Ogre::LogSetCurParam(
        (int)"D:/work/oworldsrc/client/OgreMain/ogredistort.cpp",
        (const char *)&dword_38 + 2,
        4,
        dword_4C6CD0);
      Ogre::LogMessage((Ogre *)&unk_3FD697, v5);
    }
  }
  else
  {
    dword_4C6CD0 = 0;
    v6 = *((Ogre::Material **)this + 165);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v8, (Ogre::FixedString *)"GRAY", a3);
    Ogre::Material::setParamMacro(v6, (const Ogre::FixedString *)&v8, 0);
    Ogre::FixedString::~FixedString(&v8, v7);
  }
}


//======================================================================
// Ogre::DistortEffect::ValidateCreateResult(void)
// address: 0x00192314   size: 0x4E (78 bytes)
//======================================================================
int __fastcall Ogre::DistortEffect::ValidateCreateResult(Ogre::DistortEffect *this)
{
  int v2; // r0
  int v4; // r0

  v2 = *((_DWORD *)this + 163);
  if ( v2 != 0
    && (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 40))(v2) != 0
    && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 163) + 44))(*((_DWORD *)this + 163)) != 0
    && (v4 = *((_DWORD *)this + 161)) != 0
    && (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 40))(v4) != 0 )
  {
    return (*(unsigned __int8 (__fastcall **)(_DWORD))(**((_DWORD **)this + 161) + 44))(*((_DWORD *)this + 161)) ^ 1;
  }
  else
  {
    return 1;
  }
}

