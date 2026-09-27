// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RenderTriangle

//======================================================================
// Ogre::RenderTriangle::getRTTI(void)const
// address: 0x001840F4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::RenderTriangle::getRTTI(Ogre::RenderTriangle *this)
{
  return &Ogre::RenderTriangle::m_RTTI;
}


//======================================================================
// Ogre::RenderTriangle::~RenderTriangle()
// address: 0x00184100   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14RenderTriangleD1Ev'
void __fastcall Ogre::RenderTriangle::~RenderTriangle(Ogre::RenderTriangle *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  int v4; // r3

  v1 = (_DWORD *)((char *)this + 252);
  *(_DWORD *)this = &off_457CB8;
  v3 = *((_DWORD **)this + 63);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *v1 = 0;
  }
  Ogre::VertexFormat::~VertexFormat((void **)this + 65);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::RenderTriangle::~RenderTriangle()
// address: 0x00184144   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::RenderTriangle::~RenderTriangle(Ogre::RenderTriangle *this)
{
  Ogre::RenderTriangle::~RenderTriangle(this);
  operator delete(this);
}


//======================================================================
// Ogre::RenderTriangle::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x00184158   size: 0x92 (146 bytes)
//======================================================================
int __fastcall Ogre::RenderTriangle::render(
        Ogre::RenderTriangle *this,
        Ogre::DynamicBufferPool **a2,
        const Ogre::ShaderEnvData *a3)
{
  int i; // r4
  float v6; // r0
  int v7; // r1
  Ogre::DynamicVertexBuffer *v8; // r7
  void *v9; // r0
  Ogre::ShaderContext *v10; // r0
  _DWORD v12[7]; // [sp+0h] [bp-20h] BYREF
  _DWORD *v13; // [sp+1Ch] [bp-4h]
  _DWORD v14[9]; // [sp+20h] [bp+0h]
  _BYTE v15[40]; // [sp+44h] [bp+24h] BYREF

  v13 = a3;
  v14[0] = 0;
  v14[1] = 1056964608;
  v14[2] = 0;
  v14[3] = -1090519040;
  v14[4] = -1090519040;
  v14[5] = 0;
  v14[6] = 1056964608;
  v14[7] = -1090519040;
  v14[8] = 0;
  for ( i = 0; i != 9; ++i )
  {
    v12[6] = v15;
    v6 = *(float *)&v14[i] * 100.0;
    v7 = i * 4 + 68;
    *(float *)((char *)v12 + v7) = v6;
  }
  v8 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                      a2,
                                      (Ogre::RenderTriangle *)((char *)this + 260),
                                      3u);
  v9 = (void *)Ogre::DynamicVertexBuffer::lock(v8);
  if ( v9 != nullptr )
    j_memcpy(v9, v15, 0x24u);
  v10 = Ogre::SceneRenderer::newContext(
          (int)a2,
          *((_DWORD *)this + 59),
          v13,
          *((Ogre::Material **)this + 63),
          *((_DWORD *)this + 64),
          v8,
          nullptr,
          4,
          1,
          1);
  return Ogre::ShaderContext::addValueParam((int)v10, 2, v13 + 271, 7, 1);
}


//======================================================================
// Ogre::RenderTriangle::RenderTriangle(void)
// address: 0x001841F8   size: 0x9C (156 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14RenderTriangleC1Ev'
Ogre::RenderTriangle *__fastcall Ogre::RenderTriangle::RenderTriangle(Ogre::RenderTriangle *this)
{
  int v2; // r2
  int v3; // r3
  void *v4; // r1
  Ogre::Material *v6; // [sp+Ch] [bp-10h]
  Ogre::FixedString *v7; // [sp+14h] [bp-8h] BYREF

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_457CB8;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 65);
  v7 = (Ogre::FixedString *)Ogre::FixedString::insert((Ogre::FixedString *)"triangle", (const char *)0xFFFFFFFF, v2, v3);
  v6 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v6, (const Ogre::FixedString *)&v7);
  *((_DWORD *)this + 63) = v6;
  Ogre::FixedString::release((int)v7, v4);
  Ogre::VertexFormat::addElement((int *)this + 65, 2u, 1u, 0, 0, -1);
  *((_DWORD *)this + 64) = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                              + 36))(
                             Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                             (char *)this + 260);
  *((_DWORD *)this + 61) = 3;
  return this;
}


//======================================================================
// Ogre::RenderTriangle::newObject(void)
// address: 0x001842A0   size: 0x14 (20 bytes)
//======================================================================
Ogre::RenderTriangle *__fastcall Ogre::RenderTriangle::newObject(Ogre::RenderTriangle *this)
{
  Ogre::RenderTriangle *v1; // r4

  v1 = (Ogre::RenderTriangle *)operator new(0x110u);
  Ogre::RenderTriangle::RenderTriangle(v1);
  return v1;
}

