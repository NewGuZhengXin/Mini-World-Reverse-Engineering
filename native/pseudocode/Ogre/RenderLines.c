// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RenderLines

//======================================================================
// Ogre::RenderLines::getRTTI(void)const
// address: 0x001713A8   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::RenderLines::getRTTI(Ogre::RenderLines *this)
{
  return &Ogre::RenderLines::m_RTTI;
}


//======================================================================
// Ogre::RenderLines::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x001713B4   size: 0x120 (288 bytes)
//======================================================================
int __fastcall Ogre::RenderLines::render(
        Ogre::RenderLines *this,
        Ogre::DynamicBufferPool **a2,
        const Ogre::ShaderEnvData *a3)
{
  char *v3; // r4
  unsigned int v6; // r2
  Ogre::DynamicVertexBuffer *v7; // r5
  void *v8; // r0
  Ogre::ShaderContext *v9; // r0
  int result; // r0
  unsigned int v11; // r2
  void *v12; // r0
  Ogre::ShaderContext *v13; // r0
  Ogre::DynamicVertexBuffer *v14; // [sp+18h] [bp-14h]

  v3 = (char *)this + 252;
  v6 = -1431655765 * ((*((_DWORD *)this + 64) - *((_DWORD *)this + 63)) >> 3);
  if ( v6 > 1 )
  {
    v7 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                        a2,
                                        (Ogre::RenderLines *)((char *)this + 312),
                                        v6);
    v8 = (void *)Ogre::DynamicVertexBuffer::lock(v7);
    if ( v8 != nullptr )
      j_memcpy(v8, *(const void **)v3, 8 * ((*((_DWORD *)v3 + 1) - *(_DWORD *)v3) >> 3));
    v9 = Ogre::SceneRenderer::newContext(
           (int)a2,
           *((_DWORD *)this + 59),
           a3,
           *((Ogre::Material **)v3 + 13),
           *((_DWORD *)v3 + 14),
           v7,
           nullptr,
           2,
           (unsigned int)(-1431655765 * ((*((_DWORD *)v3 + 1) - *(_DWORD *)v3) >> 3)) >> 1,
           1);
    Ogre::ShaderContext::addValueParam((int)v9, 2, (char *)a3 + 1084, 7, 1);
  }
  result = -1431655765;
  v11 = -1431655765 * ((*((_DWORD *)this + 67) - *((_DWORD *)this + 66)) >> 3);
  if ( v11 > 2 )
  {
    v14 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                         a2,
                                         (Ogre::RenderLines *)((char *)this + 312),
                                         v11);
    v12 = (void *)Ogre::DynamicVertexBuffer::lock(v14);
    if ( v12 != nullptr )
      j_memcpy(v12, *((const void **)v3 + 3), 8 * ((*((_DWORD *)this + 67) - *((_DWORD *)v3 + 3)) >> 3));
    v13 = Ogre::SceneRenderer::newContext(
            (int)a2,
            *((_DWORD *)this + 59),
            a3,
            *((Ogre::Material **)v3 + 13),
            *((_DWORD *)v3 + 14),
            v14,
            nullptr,
            4,
            -1431655765 * ((*((_DWORD *)this + 67) - *((_DWORD *)this + 66)) >> 3) / 3u,
            1);
    return Ogre::ShaderContext::addValueParam((int)v13, 2, (char *)a3 + 1084, 7, 1);
  }
  return result;
}


//======================================================================
// Ogre::RenderLines::~RenderLines()
// address: 0x001714DC   size: 0x58 (88 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11RenderLinesD1Ev'
void __fastcall Ogre::RenderLines::~RenderLines(Ogre::RenderLines *this)
{
  char *v1; // r5
  _DWORD *v3; // r0
  int v4; // r3
  void *v5; // r0

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_4575E0;
  v3 = *((_DWORD **)this + 76);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *((_DWORD *)v1 + 13) = 0;
  }
  Ogre::VertexFormat::~VertexFormat((void **)this + 78);
  v5 = *((void **)this + 66);
  if ( v5 != nullptr )
    operator delete(v5);
  if ( *(_DWORD *)v1 != 0 )
    operator delete(*(void **)v1);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::RenderLines::~RenderLines()
// address: 0x00171538   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::RenderLines::~RenderLines(Ogre::RenderLines *this)
{
  Ogre::RenderLines::~RenderLines(this);
  operator delete(this);
}


//======================================================================
// Ogre::RenderLines::update(unsigned int)
// address: 0x001716A2   size: 0x36 (54 bytes)
//======================================================================
float __fastcall Ogre::RenderLines::update(Ogre::RenderLines *this, unsigned int a2)
{
  float result; // r0
  _DWORD *v4; // r4

  Ogre::MovableObject::update(this, a2);
  LODWORD(result) = (char *)this + 140;
  if ( *((_BYTE *)this + 300) != 0 )
    return Ogre::BoxSphereBound::fromBoxBound(
             (Ogre::BoxSphereBound *)LODWORD(result),
             (Ogre::RenderLines *)((char *)this + 276));
  v4 = (_DWORD *)((char *)this + 152);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  *(_DWORD *)LODWORD(result) = 0;
  *(_DWORD *)(LODWORD(result) + 4) = 0;
  *(_DWORD *)(LODWORD(result) + 8) = 0;
  *(_DWORD *)(LODWORD(result) + 24) = 0;
  return result;
}


//======================================================================
// Ogre::RenderLines::RenderLines(bool)
// address: 0x001716D8   size: 0x108 (264 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11RenderLinesC1Eb'
Ogre::RenderLines *__fastcall Ogre::RenderLines::RenderLines(Ogre::RenderLines *this, int a2)
{
  int v3; // r2
  int v4; // r3
  Ogre::Material *v5; // r7
  void *v6; // r1
  int v7; // r2
  Ogre::Material *v8; // r6
  void *v9; // r1
  Ogre::FixedString *v12[2]; // [sp+14h] [bp-8h] BYREF

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_4575E0;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_BYTE *)this + 300) = 0;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 78);
  v12[0] = (Ogre::FixedString *)Ogre::FixedString::insert((Ogre::FixedString *)"line", (const char *)0xFFFFFFFF, v3, v4);
  v5 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v5, (const Ogre::FixedString *)v12);
  *((_DWORD *)this + 76) = v5;
  Ogre::FixedString::release((int)v12[0], v6);
  if ( a2 != 0 )
  {
    v8 = *((Ogre::Material **)this + 76);
    v12[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                    (Ogre::FixedString *)"DEPTH_TEST",
                                    (const char *)0xFFFFFFFF,
                                    v7,
                                    a2);
    Ogre::Material::setParamMacro(v8, (const Ogre::FixedString *)v12, 1);
    Ogre::FixedString::release((int)v12[0], v9);
  }
  Ogre::VertexFormat::addElement((int *)this + 78, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 78, 4u, 5u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 78, 1u, 7u, 0, 0, -1);
  *((_DWORD *)this + 77) = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                              + 36))(
                             Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                             (char *)this + 312);
  *((_DWORD *)this + 61) = 3;
  return this;
}


//======================================================================
// Ogre::RenderLines::newObject(void)
// address: 0x001717F0   size: 0x16 (22 bytes)
//======================================================================
Ogre::RenderLines *__fastcall Ogre::RenderLines::newObject(Ogre::RenderLines *this)
{
  Ogre::RenderLines *v1; // r4

  v1 = (Ogre::RenderLines *)operator new(0x144u);
  Ogre::RenderLines::RenderLines(v1, 0);
  return v1;
}


//======================================================================
// Ogre::RenderLines::addLine(Ogre::Vector3 const&,Ogre::Vector3 const&,Ogre::ColorQuad)
// address: 0x00171A22   size: 0x5A (90 bytes)
//======================================================================
int __fastcall Ogre::RenderLines::addLine(int a1, int a2, int a3, int a4)
{
  int v5; // r7
  int v6; // r2
  int v8; // r2
  int v9; // r3
  float v12; // [sp+8h] [bp-1Ch] BYREF
  int v13; // [sp+Ch] [bp-18h]
  int v14; // [sp+10h] [bp-14h]
  int v15; // [sp+14h] [bp-10h]
  int v16; // [sp+18h] [bp-Ch]
  int v17; // [sp+1Ch] [bp-8h]

  v12 = *(float *)a2;
  v5 = a1 + 252;
  v13 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  v15 = a4;
  v14 = v6;
  v16 = 0;
  v17 = 0;
  std::vector<Ogre::RenderLines::LineVertex>::push_back(a1 + 252, &v12);
  v8 = *(_DWORD *)(a3 + 4);
  v12 = *(float *)a3;
  v9 = *(_DWORD *)(a3 + 8);
  v13 = v8;
  v14 = v9;
  std::vector<Ogre::RenderLines::LineVertex>::push_back(v5, &v12);
  Ogre::BoxBound::operator+=(a1 + 276, (float *)a2);
  return Ogre::BoxBound::operator+=(a1 + 276, (float *)a3);
}


//======================================================================
// Ogre::RenderLines::addLineStrip(Ogre::Vector3 const*,unsigned int,Ogre::ColorQuad,bool)
// address: 0x00171A7C   size: 0x4C (76 bytes)
//======================================================================
int __fastcall Ogre::RenderLines::addLineStrip(int result, int a2, unsigned int a3, int a4, char a5)
{
  int v6; // r5
  unsigned int i; // r4
  int v8; // r6
  int v9; // [sp+4h] [bp-10h]

  v9 = result;
  v6 = a2;
  for ( i = 1; ; ++i )
  {
    v8 = a2 + 12;
    if ( i >= a3 )
      break;
    result = Ogre::RenderLines::addLine(v9, a2, a2 + 12, a4);
    a2 = v8;
  }
  if ( a5 != 0 )
    return Ogre::RenderLines::addLine(v9, v6 + 12 * a3 - 12, v6, a4);
  return result;
}


//======================================================================
// Ogre::RenderLines::addLineList(Ogre::Vector3 const*,unsigned int,Ogre::ColorQuad)
// address: 0x00171AC8   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall Ogre::RenderLines::addLineList(int a1, int a2, unsigned int a3, int a4)
{
  int i; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = a1;
  HIDWORD(v9) = a3 >> 1;
  for ( i = 0; i != HIDWORD(v9); ++i )
  {
    Ogre::RenderLines::addLine(a1, a2, a2 + 12, a4);
    a2 += 24;
  }
  return v9;
}


//======================================================================
// Ogre::RenderLines::addTriangleList(Ogre::Vector3 const*,Ogre::ColorQuad const*,unsigned int,unsigned short *,unsigned int)
// address: 0x00171AF2   size: 0x90 (144 bytes)
//======================================================================
unsigned int __fastcall Ogre::RenderLines::addTriangleList(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int result; // r0
  int v9; // r7
  int *v10; // r7
  int i; // [sp+8h] [bp-24h]
  int v14; // [sp+10h] [bp-1Ch]
  int v15; // [sp+14h] [bp-18h]
  int v17; // [sp+24h] [bp-8h]

  result = a6 / 3;
  for ( i = 0; i != a6 / 3; ++i )
  {
    v9 = *a5;
    v14 = a5[1];
    v17 = a5[2];
    v15 = a2 + 12 * v9;
    v10 = (int *)(a3 + 4 * v9);
    Ogre::RenderLines::addLine(a1, v15, a2 + 12 * v14, *v10);
    Ogre::RenderLines::addLine(a1, v15, a2 + 12 * v17, *v10);
    a5 += 3;
    result = Ogre::RenderLines::addLine(a1, a2 + 12 * v17, a2 + 12 * v14, *(_DWORD *)(4 * v14 + a3));
    a2 += a4;
    a3 += a4;
  }
  return result;
}


//======================================================================
// Ogre::RenderLines::addTriangle(Ogre::Vector3 const&,Ogre::Vector3 const&,Ogre::Vector3 const&,Ogre::ColorQuad)
// address: 0x00171B82   size: 0x7E (126 bytes)
//======================================================================
int __fastcall Ogre::RenderLines::addTriangle(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // [sp+0h] [bp-24h]
  float v11; // [sp+8h] [bp-1Ch] BYREF
  int v12; // [sp+Ch] [bp-18h]
  int v13; // [sp+10h] [bp-14h]
  int v14; // [sp+14h] [bp-10h]
  int v15; // [sp+18h] [bp-Ch]
  int v16; // [sp+1Ch] [bp-8h]

  v14 = a5;
  v15 = 0;
  v16 = 0;
  v11 = *(float *)a2;
  v12 = *(_DWORD *)(a2 + 4);
  v13 = *(_DWORD *)(a2 + 8);
  v9 = a1 + 264;
  std::vector<Ogre::RenderLines::LineVertex>::push_back(a1 + 264, &v11);
  v11 = *(float *)a3;
  v12 = *(_DWORD *)(a3 + 4);
  v13 = *(_DWORD *)(a3 + 8);
  std::vector<Ogre::RenderLines::LineVertex>::push_back(v9, &v11);
  v11 = *(float *)a4;
  v12 = *(_DWORD *)(a4 + 4);
  v13 = *(_DWORD *)(a4 + 8);
  std::vector<Ogre::RenderLines::LineVertex>::push_back(v9, &v11);
  Ogre::BoxBound::operator+=(a1 + 276, (float *)a2);
  Ogre::BoxBound::operator+=(a1 + 276, (float *)a3);
  return Ogre::BoxBound::operator+=(a1 + 276, (float *)a4);
}


//======================================================================
// Ogre::RenderLines::addTriangleFan(Ogre::Vector3 const*,unsigned int,Ogre::ColorQuad)
// address: 0x00171C00   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::RenderLines::addTriangleFan(int result, int a2, unsigned int a3, int a4)
{
  int v6; // r2
  unsigned int i; // r4
  int v8; // r5
  int v9; // [sp+8h] [bp-Ch]

  v9 = result;
  v6 = a2 + 12;
  for ( i = 2; ; ++i )
  {
    v8 = v6 + 12;
    if ( i >= a3 )
      break;
    result = Ogre::RenderLines::addTriangle(v9, a2, v6, v6 + 12, a4);
    v6 = v8;
  }
  return result;
}


//======================================================================
// Ogre::RenderLines::reset(void)
// address: 0x00171DD4   size: 0x42 (66 bytes)
//======================================================================
void __fastcall Ogre::RenderLines::reset(Ogre::RenderLines *this)
{
  int v2[6]; // [sp+0h] [bp-18h] BYREF

  j_memset(v2, 0, sizeof(v2));
  std::vector<Ogre::RenderLines::LineVertex>::resize((int)this + 252, 0, v2);
  j_memset(v2, 0, sizeof(v2));
  std::vector<Ogre::RenderLines::LineVertex>::resize((int)this + 264, 0, v2);
  *((_BYTE *)this + 300) = 0;
}

