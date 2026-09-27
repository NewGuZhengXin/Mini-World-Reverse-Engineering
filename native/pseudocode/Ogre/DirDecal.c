// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DirDecal

//======================================================================
// Ogre::DirDecal::getRTTI(void)const
// address: 0x0018E8B4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::DirDecal::getRTTI(Ogre::DirDecal *this)
{
  return &Ogre::DirDecal::m_RTTI;
}


//======================================================================
// Ogre::DirDecal::update(unsigned int)
// address: 0x0018E8C0   size: 0xE2 (226 bytes)
//======================================================================
float __fastcall Ogre::DirDecal::update(Ogre::DirDecal *this, unsigned int a2)
{
  float result; // r0
  int v4; // r2
  int v5; // r3
  float *v6; // r7
  float v7; // r5
  int v8; // r3
  int v9; // r2
  float v10; // [sp+14h] [bp-18h]
  int v11; // [sp+18h] [bp-14h]
  int i; // [sp+1Ch] [bp-10h]

  result = COERCE_FLOAT(Ogre::MovableObject::update((int)this, a2));
  for ( i = 0; i < -1431655765 * ((*((_DWORD *)this + 31599) - *((_DWORD *)this + 31598)) >> 2); ++i )
  {
    v11 = 4 * i;
    *(float *)(*((_DWORD *)this + 31604) + 4 * i) = *(float *)(*((_DWORD *)this + 31604) + 4 * i) + (float)a2;
    v4 = *((_DWORD *)this + 31604);
    v5 = *((_DWORD *)this + 31601);
    LODWORD(result) = *(float *)(v4 + v11) >= *(float *)(v5 + v11);
    if ( *(float *)(v4 + v11) < *(float *)(v5 + v11) )
      continue;
    *(_DWORD *)(v4 + 4 * i) = *(_DWORD *)(v5 + 4 * i);
    *(float *)(*((_DWORD *)this + 31607) + 4 * i) = *(float *)(*((_DWORD *)this + 31607) + 4 * i) + (float)a2;
    v6 = (float *)(*((_DWORD *)this + 31607) + v11);
    v7 = *((float *)this + 31588);
    v10 = *v6;
    LODWORD(result) = *v6 > v7;
    if ( *v6 > v7 )
    {
      *v6 = v7;
      v8 = *((_DWORD *)this + 31610);
      v9 = 0;
LABEL_8:
      *(_DWORD *)(v8 + 4 * i) = v9;
      continue;
    }
    LODWORD(result) = v10 <= (float)(v7 - *((float *)this + 31589));
    if ( v10 <= (float)(v7 - *((float *)this + 31589)) )
    {
      v8 = *((_DWORD *)this + 31610);
      v9 = 1065353216;
      goto LABEL_8;
    }
    result = (float)(v7 - v10) / *((float *)this + 31589);
    *(float *)(*((_DWORD *)this + 31610) + 4 * i) = result;
  }
  return result;
}


//======================================================================
// Ogre::DirDecal::attachToScene(Ogre::GameScene *,bool)
// address: 0x0018E9C4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::attachToScene(Ogre::DirDecal *this, Ogre::GameScene *a2, bool a3)
{
  return Ogre::MovableObject::attachToScene((int)this, a2, a3);
}


//======================================================================
// Ogre::DirDecal::detachFromScene(void)
// address: 0x0018E9CC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::detachFromScene(Ogre::DirDecal *this)
{
  return Ogre::MovableObject::detachFromScene(this);
}


//======================================================================
// Ogre::DirDecal::updateWorldCache(void)
// address: 0x0018E9D4   size: 0x3A (58 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::updateWorldCache(Ogre::DirDecal *this)
{
  int v2; // r1
  int result; // r0

  Ogre::MovableObject::updateWorldCache(this);
  if ( *((_BYTE *)this + 180) != 0 )
    (*(void (__fastcall **)(Ogre::DirDecal *))(*(_DWORD *)this + 68))(this);
  v2 = *((_DWORD *)this + 25);
  result = *((_DWORD *)this + 24);
  *((_DWORD *)this + 37) = *((_DWORD *)this + 26);
  *((_DWORD *)this + 35) = result;
  *((_DWORD *)this + 36) = v2;
  *((_DWORD *)this + 38) = 1148846080;
  *((_DWORD *)this + 39) = 1148846080;
  *((_DWORD *)this + 40) = 1148846080;
  *((_DWORD *)this + 41) = 1155039648;
  return result;
}


//======================================================================
// Ogre::DirDecal::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x0018EA18   size: 0x46 (70 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::DirDecal::ResourceLoaded(
        Ogre::DirDecal *this,
        Ogre::Resource *a2,
        Ogre::FixedString *a3)
{
  Ogre::Material *v4; // r7
  int v5; // r2
  void *v6; // r1
  Ogre::FixedString *v7[2]; // [sp+4h] [bp-8h] BYREF

  v7[1] = a3;
  if ( a3 == *((Ogre::FixedString **)this + 31571) )
  {
    if ( a2 != nullptr )
    {
      *((_DWORD *)this + 31570) = a2;
      (*(void (__fastcall **)(Ogre::Resource *))(*(_DWORD *)a2 + 4))(a2);
      v4 = *((Ogre::Material **)this + 31569);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v7, (Ogre::FixedString *)"g_DiffuseTex", v5);
      Ogre::Material::setParamTexture(v4, (const Ogre::FixedString *)v7, *((Ogre::Texture **)this + 31570), 0);
      Ogre::FixedString::release((int)v7[0], v6);
    }
    *((_DWORD *)this + 31571) = 0;
  }
}


//======================================================================
// Ogre::DirDecal::setRebuild(bool)
// address: 0x0018EA84   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::setRebuild(int this, bool a2)
{
  *(_BYTE *)(this + 126384) = a2;
  return this;
}


//======================================================================
// Ogre::DirDecal::shouldRebuild(void)
// address: 0x0018EA90   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::shouldRebuild(Ogre::DirDecal *this)
{
  return *((unsigned __int8 *)this + 126384);
}


//======================================================================
// Ogre::DirDecal::setTextureRes(std::string)
// address: 0x0018EA9C   size: 0x44 (68 bytes)
//======================================================================
__int64 __fastcall Ogre::DirDecal::setTextureRes(__int64 a1, int a2)
{
  _DWORD *v3; // r0
  unsigned int v4; // r1
  void *v5; // r1
  __int64 v7; // [sp+0h] [bp-Ch] BYREF
  int v8; // [sp+8h] [bp-4h]

  v7 = a1;
  v8 = a2;
  v3 = *(_DWORD **)(a1 + 126280);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *(_DWORD *)(a1 + 126280) = 0;
  }
  v4 = *(_DWORD *)(a1 + 126284);
  if ( v4 != 0 )
    Ogre::LoadWrap::breakLoad((Ogre::LoadWrap *)(a1 + 252), v4);
  Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v7 + 4), *(Ogre::FixedString **)HIDWORD(a1), a2);
  *(_DWORD *)(a1 + 126284) = Ogre::LoadWrap::backgroundLoad(
                               (Ogre::LoadWrap *)(a1 + 252),
                               (const Ogre::FixedString *)((char *)&v7 + 4));
  Ogre::FixedString::release(SHIDWORD(v7), v5);
  return v7;
}


//======================================================================
// Ogre::DirDecal::setBlendMode(int)
// address: 0x0018EAE8   size: 0x2A (42 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::DirDecal::setBlendMode(
        Ogre::DirDecal *this,
        int a2,
        Ogre::FixedString *a3)
{
  Ogre::Material *v3; // r7
  void *v5; // r1
  Ogre::FixedString *v6[2]; // [sp+4h] [bp-8h] BYREF

  v6[1] = a3;
  *((_DWORD *)this + 31564) = a2;
  v3 = *((Ogre::Material **)this + 31569);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v6, (Ogre::FixedString *)"BLEND_MODE", (int)a3);
  Ogre::Material::setParamMacro(v3, (const Ogre::FixedString *)v6, *((_DWORD *)this + 31564));
  Ogre::FixedString::release((int)v6[0], v5);
}


//======================================================================
// Ogre::DirDecal::DirDecal(void)
// address: 0x0018EB20   size: 0x148 (328 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8DirDecalC1Ev'
Ogre::DirDecal *__fastcall Ogre::DirDecal::DirDecal(Ogre::DirDecal *this)
{
  int v2; // r2
  Ogre::Material *v3; // r6
  Ogre::FixedString *v4; // r0
  void *v5; // r1
  Ogre::FixedString *v6; // r2
  Ogre::FixedString *v8[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_4581A8;
  *((_DWORD *)this + 63) = off_458218;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 31572);
  *((_DWORD *)this + 31598) = 0;
  *((_DWORD *)this + 31599) = 0;
  *((_DWORD *)this + 31600) = 0;
  *((_DWORD *)this + 31601) = 0;
  *((_DWORD *)this + 31602) = 0;
  *((_DWORD *)this + 31603) = 0;
  *((_DWORD *)this + 31604) = 0;
  *((_DWORD *)this + 31605) = 0;
  *((_DWORD *)this + 31606) = 0;
  *((_DWORD *)this + 31607) = 0;
  *((_DWORD *)this + 31608) = 0;
  *((_DWORD *)this + 31609) = 0;
  *((_DWORD *)this + 31610) = 0;
  *((_DWORD *)this + 31611) = 0;
  *((_DWORD *)this + 31612) = 0;
  Ogre::VertexFormat::addElement((int *)this + 31572, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 31572, 4u, 5u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 31572, 1u, 7u, 0, 0, -1);
  *((_DWORD *)this + 31568) = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                                 + 36))(
                                Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                                (char *)this + 126288);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v8, (Ogre::FixedString *)"dirdecal", v2);
  v3 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v3, (const Ogre::FixedString *)v8);
  v4 = v8[0];
  *((_DWORD *)this + 31569) = v3;
  Ogre::FixedString::release((int)v4, v5);
  *((_DWORD *)this + 31564) = 0;
  Ogre::DirDecal::setBlendMode(this, 0, v6);
  *((_DWORD *)this + 31590) = 0;
  *((_DWORD *)this + 31591) = 0;
  *((_DWORD *)this + 31592) = 0;
  *((_DWORD *)this + 31570) = 0;
  *((_DWORD *)this + 31571) = 0;
  *((_DWORD *)this + 31567) = 1065353216;
  *((_BYTE *)this + 126384) = 1;
  *((_DWORD *)this + 31577) = 0;
  *((_DWORD *)this + 31578) = 0;
  *((_DWORD *)this + 31566) = 4;
  *((_DWORD *)this + 31575) = 0;
  *((_DWORD *)this + 31576) = 0;
  *((_DWORD *)this + 31586) = 1157234688;
  *((_DWORD *)this + 31587) = 21;
  *((_DWORD *)this + 31588) = 1161527296;
  *((_DWORD *)this + 31589) = 1140457472;
  *((_BYTE *)this + 126316) = 0;
  return this;
}


//======================================================================
// Ogre::DirDecal::newObject(void)
// address: 0x0018ECE8   size: 0x12 (18 bytes)
//======================================================================
Ogre::DirDecal *__fastcall Ogre::DirDecal::newObject(Ogre::DirDecal *this)
{
  Ogre::DirDecal *v1; // r4

  v1 = (Ogre::DirDecal *)operator new(0x1EDF4u);
  Ogre::DirDecal::DirDecal(v1);
  return v1;
}


//======================================================================
// Ogre::DirDecal::getBlendMode(void)
// address: 0x0018ED00   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::getBlendMode(Ogre::DirDecal *this)
{
  return *((_DWORD *)this + 31564);
}


//======================================================================
// Ogre::DirDecal::clearPoints(void)
// address: 0x0018ED0C   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall Ogre::DirDecal::clearPoints(_DWORD *this)
{
  *(this + 31599) = *(this + 31598);
  *(this + 31602) = *(this + 31601);
  *(this + 31605) = *(this + 31604);
  *(this + 31608) = *(this + 31607);
  *(this + 31611) = *(this + 31610);
  return this;
}


//======================================================================
// Ogre::DirDecal::setWidth(float)
// address: 0x0018ED60   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::setWidth(int this, float a2)
{
  *(float *)(this + 126260) = a2;
  return this;
}


//======================================================================
// Ogre::DirDecal::getWidth(void)
// address: 0x0018ED6C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::getWidth(Ogre::DirDecal *this)
{
  return *((_DWORD *)this + 31565);
}


//======================================================================
// Ogre::DirDecal::setWidthGridNum(int)
// address: 0x0018ED78   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::setWidthGridNum(int this, int a2)
{
  *(_DWORD *)(this + 126264) = a2;
  return this;
}


//======================================================================
// Ogre::DirDecal::getWidthGridNum(void)
// address: 0x0018ED84   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::getWidthGridNum(Ogre::DirDecal *this)
{
  return *((_DWORD *)this + 31566);
}


//======================================================================
// Ogre::DirDecal::setTextureRadio(float)
// address: 0x0018ED90   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::setTextureRadio(int this, float a2)
{
  *(float *)(this + 126268) = a2;
  return this;
}


//======================================================================
// Ogre::DirDecal::getTextureRadio(void)
// address: 0x0018ED9C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::getTextureRadio(Ogre::DirDecal *this)
{
  return *((_DWORD *)this + 31567);
}


//======================================================================
// Ogre::DirDecal::getRoadPoints(void)
// address: 0x0018EDA8   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall Ogre::DirDecal::getRoadPoints(Ogre::DirDecal *this)
{
  return (char *)this + 126392;
}


//======================================================================
// Ogre::DirDecal::buildMesh(Ogre::Vector3 *,Ogre::Vector2 *,unsigned short *,int,int)
// address: 0x0018EDB4   size: 0xE0 (224 bytes)
//======================================================================
_DWORD *__fastcall Ogre::DirDecal::buildMesh(
        _DWORD *this,
        Ogre::Vector3 *a2,
        Ogre::Vector2 *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        int a6)
{
  _DWORD *v6; // r4
  void *v7; // r0
  void *v8; // r0
  unsigned int v9; // r0
  unsigned int v10; // r0
  void *v11; // r0
  unsigned int v12; // r0

  v6 = this;
  if ( a6 != 0 )
  {
    *(this + 31575) = a5;
    *(this + 31576) = a6;
    if ( (signed int)a5 > *(this + 31577) )
    {
      v7 = (void *)*(this + 31590);
      if ( v7 != nullptr )
        operator delete(v7);
      v8 = (void *)v6[31591];
      if ( v8 != nullptr )
        operator delete(v8);
      if ( a5 > 0xAA00000 )
        v9 = -1;
      else
        v9 = 12 * a5;
      v6[31590] = operator new[](v9);
      v10 = 8 * a5;
      if ( a5 > 0xFE00000 )
        v10 = -1;
      v6[31591] = operator new[](v10);
      v6[31577] = a5;
    }
    if ( a6 > v6[31578] )
    {
      v11 = (void *)v6[31592];
      if ( v11 != nullptr )
        operator delete(v11);
      if ( (unsigned int)(3 * a6) > 0x3F800000 )
        v12 = -1;
      else
        v12 = 6 * a6;
      v6[31592] = operator new[](v12);
      v6[31578] = a6;
    }
    j_memcpy((void *)v6[31590], a2, 12 * v6[31575]);
    j_memcpy((void *)v6[31591], a3, 8 * v6[31575]);
    return j_memcpy((void *)v6[31592], a4, 6 * v6[31576]);
  }
  else
  {
    *(this + 31575) = 0;
    *(this + 31576) = 0;
  }
  return this;
}


//======================================================================
// Ogre::DirDecal::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x0018F110   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::DirDecal::render(int this, Ogre::SceneRenderer *a2, const Ogre::ShaderEnvData *a3)
{
  if ( *(_DWORD *)(this + 126304) != 0
    && (unsigned int)(-1431655765 * ((*(_DWORD *)(this + 126396) - *(_DWORD *)(this + 126392)) >> 2)) > 1 )
  {
    *(float *)&this = sub_18EEB0(this, a2, a3);
  }
  return this;
}


//======================================================================
// Ogre::DirDecal::~DirDecal()
// address: 0x0018F144   size: 0xAE (174 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8DirDecalD1Ev'
void __fastcall Ogre::DirDecal::~DirDecal(Ogre::DirDecal *this)
{
  Ogre::LoadWrap *v1; // r5
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  unsigned int v8; // r1
  void *v9; // r0

  v1 = (Ogre::DirDecal *)((char *)this + 252);
  *(_DWORD *)this = &off_4581A8;
  *((_DWORD *)this + 63) = off_458218;
  v3 = *((void **)this + 31590);
  if ( v3 != nullptr )
    operator delete(v3);
  v4 = *((void **)this + 31591);
  if ( v4 != nullptr )
    operator delete(v4);
  v5 = *((void **)this + 31592);
  if ( v5 != nullptr )
    operator delete(v5);
  v6 = *((_DWORD **)this + 31569);
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    *((_DWORD *)this + 31569) = 0;
  }
  v7 = *((_DWORD **)this + 31570);
  if ( v7 != nullptr )
  {
    Ogre::BaseObject::release(v7);
    *((_DWORD *)this + 31570) = 0;
  }
  v8 = *((_DWORD *)this + 31571);
  if ( v8 != 0 )
    Ogre::LoadWrap::breakLoad(v1, v8);
  std::_Vector_base<float>::~_Vector_base((void **)this + 31610);
  std::_Vector_base<float>::~_Vector_base((void **)this + 31607);
  std::_Vector_base<float>::~_Vector_base((void **)this + 31604);
  std::_Vector_base<float>::~_Vector_base((void **)this + 31601);
  v9 = *((void **)this + 31598);
  if ( v9 != nullptr )
    operator delete(v9);
  Ogre::VertexFormat::~VertexFormat((void **)this + 31572);
  Ogre::LoadWrap::~LoadWrap(v1);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::DirDecal::~DirDecal()
// address: 0x0018F23C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DirDecal::~DirDecal(Ogre::DirDecal *this)
{
  Ogre::DirDecal::~DirDecal(this);
  operator delete(this);
}


//======================================================================
// Ogre::DirDecal::addPoint(Ogre::Vector3)
// address: 0x0018F264   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall Ogre::DirDecal::addPoint(__int64 a1)
{
  __int64 v2; // r0
  __int64 v3; // r0
  __int64 v4; // r0
  __int64 v5; // r0
  __int64 v6; // r0
  __int64 v8; // [sp+0h] [bp-8h] BYREF

  v8 = a1;
  LODWORD(v2) = a1 + 126392;
  HIDWORD(v2) = *(_DWORD *)(v2 + 4);
  if ( HIDWORD(v2) == *(_DWORD *)(v2 + 8) )
  {
    std::vector<Ogre::Vector3>::_M_insert_aux(v2, (int *)HIDWORD(a1));
  }
  else
  {
    if ( HIDWORD(v2) != 0 )
    {
      *(_QWORD *)HIDWORD(v2) = *(_QWORD *)HIDWORD(a1);
      *(_DWORD *)(HIDWORD(v2) + 8) = *(_DWORD *)(HIDWORD(a1) + 8);
    }
    *(_DWORD *)(v2 + 4) += 12;
  }
  LODWORD(v3) = a1 + 126404;
  HIDWORD(v3) = (char *)&v8 + 4;
  HIDWORD(v8) = 0;
  std::vector<float>::push_back(v3);
  HIDWORD(v4) = (char *)&v8 + 4;
  HIDWORD(v8) = 0;
  LODWORD(v4) = a1 + 126416;
  std::vector<float>::push_back(v4);
  HIDWORD(v5) = (char *)&v8 + 4;
  HIDWORD(v8) = 0;
  LODWORD(v5) = a1 + 126428;
  std::vector<float>::push_back(v5);
  HIDWORD(v6) = (char *)&v8 + 4;
  HIDWORD(v8) = 0;
  LODWORD(v6) = a1 + 126440;
  std::vector<float>::push_back(v6);
  return v8;
}


//======================================================================
// Ogre::DirDecal::playTrace(Ogre::Vector3,Ogre::Vector3,float,float,float,int)
// address: 0x0018F2DC   size: 0x10E (270 bytes)
//======================================================================
float __fastcall Ogre::DirDecal::playTrace(unsigned int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6, int a7)
{
  unsigned int v8; // r6
  unsigned int v9; // r4
  float result; // r0
  float v11; // r7
  float v12; // r6
  float v13; // [sp+0h] [bp-24h]
  int i; // [sp+0h] [bp-24h]
  float v15; // [sp+4h] [bp-20h]
  float v16; // [sp+8h] [bp-1Ch]
  float v17; // [sp+Ch] [bp-18h]
  float v18[4]; // [sp+14h] [bp-10h] BYREF

  *(_BYTE *)(a1 + 126316) = 1;
  v8 = a1 + 126320;
  *(_DWORD *)(a1 + 126320) = *a2;
  *(_DWORD *)(a1 + 126324) = a2[1];
  *(_DWORD *)(a1 + 126328) = a2[2];
  *(_DWORD *)(a1 + 126332) = *a3;
  v9 = a1 + 126332;
  *(_DWORD *)(a1 + 126336) = a3[1];
  *(_DWORD *)(a1 + 126340) = a3[2];
  *(_DWORD *)(a1 + 126344) = a4;
  *(_DWORD *)(a1 + 126352) = a5;
  *(_DWORD *)(a1 + 126356) = a6;
  *(_DWORD *)(a1 + 126348) = a7;
  Ogre::DirDecal::clearPoints((_DWORD *)a1);
  v13 = (float)(a7 - 1);
  v15 = (float)(*(float *)(a1 + 126332) - *(float *)(a1 + 126320)) / v13;
  v16 = (float)(*(float *)(v9 + 4) - *(float *)(v8 + 4)) / v13;
  result = (float)(*(float *)(v9 + 8) - *(float *)(v8 + 8)) / v13;
  v17 = result;
  for ( i = 0; i < a7; ++i )
  {
    v11 = (float)(v16 * (float)i) + *(float *)(a1 + 126324);
    v12 = (float)(v17 * (float)i) + *(float *)(a1 + 126328);
    v18[0] = *(float *)(a1 + 126320) + (float)(v15 * (float)i);
    v18[1] = v11;
    v18[2] = v12;
    Ogre::DirDecal::addPoint(__SPAIR64__(v18, a1));
    *(float *)(4 * i + *(_DWORD *)(a1 + 126404)) = (float)((float)i * *(float *)(a1 + 126344))
                                                 / (float)*(int *)(a1 + 126348);
    LODWORD(result) = i + 1;
  }
  return result;
}

