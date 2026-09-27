// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BorderGameScene

//======================================================================
// Ogre::BorderGameScene::getRTTI(void)const
// address: 0x001811A4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BorderGameScene::getRTTI(Ogre::BorderGameScene *this)
{
  return &Ogre::BorderGameScene::m_RTTI;
}


//======================================================================
// Ogre::BorderGameScene::getTerrainTile(void)
// address: 0x001811B0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::BorderGameScene::getTerrainTile(Ogre::BorderGameScene *this)
{
  return 0;
}


//======================================================================
// Ogre::BorderGameScene::onObjectPosChange(Ogre::MovableObject *)
// address: 0x001811B4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::BorderGameScene::onObjectPosChange(Ogre::BorderGameScene *this, Ogre::MovableObject *a2)
{
  ;
}


//======================================================================
// Ogre::BorderGameScene::onRender(Ogre::SceneRenderer *)
// address: 0x001811B6   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::BorderGameScene::onRender(Ogre::BorderGameScene *this, Ogre::SceneRenderer *a2)
{
  ;
}


//======================================================================
// Ogre::BorderGameScene::pickObject(Ogre::IntersectType,Ogre::WorldRay const&,float *,unsigned int)
// address: 0x001811B8   size: 0x4 (4 bytes)
//======================================================================
int Ogre::BorderGameScene::pickObject()
{
  return 0;
}


//======================================================================
// Ogre::BorderGameScene::pickGround(Ogre::WorldRay const&,float *)
// address: 0x001811BC   size: 0x4 (4 bytes)
//======================================================================
int Ogre::BorderGameScene::pickGround()
{
  return 0;
}


//======================================================================
// Ogre::BorderGameScene::pickGround(int,int,int *,Ogre::Vector3 *,float *)
// address: 0x001811C0   size: 0x4 (4 bytes)
//======================================================================
int Ogre::BorderGameScene::pickGround()
{
  return 0;
}


//======================================================================
// Ogre::BorderGameScene::updateFocusArea(Ogre::WorldPos,float)
// address: 0x001811C4   size: 0x6 (6 bytes)
//======================================================================
void Ogre::BorderGameScene::updateFocusArea()
{
  ;
}


//======================================================================
// Ogre::BorderGameScene::onCull(Ogre::Camera *,Ogre::RenderUsage)
// address: 0x001811CC   size: 0x80 (128 bytes)
//======================================================================
void __fastcall Ogre::BorderGameScene::onCull(Ogre::GameScene *a1, Ogre::CullResult **a2)
{
  unsigned int v3; // r5
  Ogre::CullResult **v5; // r7
  int v6; // r3
  Ogre::MovableObject **v7; // r4
  _BYTE v8[548]; // [sp+10h] [bp-224h] BYREF

  v3 = 0;
  Ogre::CullFrustum::CullFrustum((Ogre::CullFrustum *)v8);
  v5 = a2 + 53;
  (*((void (__fastcall **)(Ogre::CullResult **, _DWORD))*a2 + 10))(a2, 0);
  Ogre::CullResult::startCull(a2[53], (Ogre::Camera *)a2);
  Ogre::Camera::getCullFrustum((Ogre::Camera *)a2, (Ogre::CullFrustum *)v8);
  while ( 1 )
  {
    v6 = *((_DWORD *)a1 + 14);
    if ( v3 >= (*((_DWORD *)a1 + 15) - v6) >> 2 )
      break;
    v7 = *(Ogre::MovableObject ***)(4 * v3 + v6);
    if ( *((_BYTE *)v7 + 183) != 0 )
    {
      if ( *((_BYTE *)v7 + 180) != 0 )
        (*((void (__fastcall **)(Ogre::MovableObject **))*v7 + 17))(v7);
      Ogre::CullResult::addRenderable(*v5, a1, v7, 0, nullptr);
    }
    ++v3;
  }
  Ogre::CullFrustum::~CullFrustum((Ogre::CullFrustum *)v8);
}


//======================================================================
// Ogre::BorderGameScene::update(unsigned int)
// address: 0x00181250   size: 0x78 (120 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::BorderGameScene::update(
        Ogre::BorderGameScene *this,
        unsigned int a2,
        int a3)
{
  Ogre::Material *v4; // r6
  void *v5; // r1
  Ogre::Material *v6; // r6
  int v7; // r2
  void *v8; // r1
  Ogre::Material *v9; // r6
  int v10; // r2
  void *v11; // r1
  Ogre::FixedString *v12; // [sp+4h] [bp-4h] BYREF

  v4 = *((Ogre::Material **)this + 18);
  *((float *)this + 24) = *((float *)this + 24) + (float)((float)a2 / 1000.0);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v12, (Ogre::FixedString *)"g_color", a3);
  Ogre::Material::setParamValue(v4, (const Ogre::FixedString *)&v12, (char *)this + 76);
  Ogre::FixedString::~FixedString(&v12, v5);
  v6 = *((Ogre::Material **)this + 18);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v12, (Ogre::FixedString *)"g_strength", v7);
  Ogre::Material::setParamValue(v6, (const Ogre::FixedString *)&v12, (char *)this + 92);
  Ogre::FixedString::~FixedString(&v12, v8);
  v9 = *((Ogre::Material **)this + 18);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v12, (Ogre::FixedString *)"g_scale", v10);
  Ogre::Material::setParamValue(v9, (const Ogre::FixedString *)&v12, (char *)this + 96);
  Ogre::FixedString::~FixedString(&v12, v11);
}


//======================================================================
// Ogre::BorderGameScene::BorderGameScene(void)
// address: 0x001812D8   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15BorderGameSceneC1Ev'
Ogre::BorderGameScene *__fastcall Ogre::BorderGameScene::BorderGameScene(
        Ogre::BorderGameScene *this,
        Ogre::FixedString *a2)
{
  int v3; // r2
  Ogre::Material *v4; // r6
  void *v5; // r1
  int v6; // r2
  Ogre::Material *v7; // r6
  void *v8; // r1
  Ogre::FixedString *v10; // [sp+4h] [bp-4h] BYREF

  v10 = a2;
  Ogre::GameScene::GameScene(this);
  Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton = (int)this;
  *(_DWORD *)this = &off_457B00;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v10, (Ogre::FixedString *)"border", v3);
  v4 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v4, (const Ogre::FixedString *)&v10);
  *((_DWORD *)this + 17) = v4;
  Ogre::FixedString::~FixedString(&v10, v5);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v10, (Ogre::FixedString *)"border1", v6);
  v7 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v7, (const Ogre::FixedString *)&v10);
  *((_DWORD *)this + 18) = v7;
  Ogre::FixedString::~FixedString(&v10, v8);
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 23) = 1076258406;
  *((_DWORD *)this + 19) = 1042536202;
  *((_DWORD *)this + 20) = 1065185444;
  *((_DWORD *)this + 21) = 1065185444;
  return this;
}


//======================================================================
// Ogre::BorderGameScene::newObject(void)
// address: 0x00181370   size: 0x12 (18 bytes)
//======================================================================
Ogre::BorderGameScene *__fastcall Ogre::BorderGameScene::newObject(Ogre::BorderGameScene *this)
{
  Ogre::BorderGameScene *v1; // r4
  Ogre::FixedString *v2; // r1

  v1 = (Ogre::BorderGameScene *)operator new(0x64u);
  Ogre::BorderGameScene::BorderGameScene(v1, v2);
  return v1;
}


//======================================================================
// Ogre::BorderGameScene::setActiveBorderMaterial(void)
// address: 0x00181384   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::BorderGameScene::setActiveBorderMaterial(int this)
{
  int v1; // r5
  int i; // r4
  int v3; // r3

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(v1 + 56);
    if ( i >= (*(_DWORD *)(v1 + 60) - v3) >> 2 )
      break;
    this = Ogre::BaseObject::isKindOf(
             *(Ogre::BaseObject **)(v3 + 4 * i),
             (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI);
    if ( this != 0 )
      this = Ogre::Entity::setBoreder(*(Ogre::Entity **)(*(_DWORD *)(v1 + 56) + 4 * i), *(Ogre::Material **)(v1 + 68));
  }
  return this;
}


//======================================================================
// Ogre::BorderGameScene::setActiveBorderMaterial1(void)
// address: 0x001813BC   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::BorderGameScene::setActiveBorderMaterial1(int this)
{
  int v1; // r5
  int i; // r4
  int v3; // r3

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(v1 + 56);
    if ( i >= (*(_DWORD *)(v1 + 60) - v3) >> 2 )
      break;
    this = Ogre::BaseObject::isKindOf(
             *(Ogre::BaseObject **)(v3 + 4 * i),
             (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI);
    if ( this != 0 )
      this = Ogre::Entity::setBoreder(*(Ogre::Entity **)(*(_DWORD *)(v1 + 56) + 4 * i), *(Ogre::Material **)(v1 + 72));
  }
  return this;
}


//======================================================================
// Ogre::BorderGameScene::setNoBorder(void)
// address: 0x001813F4   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::BorderGameScene::setNoBorder(int this)
{
  int v1; // r5
  int i; // r4
  int v3; // r3

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(v1 + 56);
    if ( i >= (*(_DWORD *)(v1 + 60) - v3) >> 2 )
      break;
    this = Ogre::BaseObject::isKindOf(
             *(Ogre::BaseObject **)(v3 + 4 * i),
             (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI);
    if ( this != 0 )
      this = Ogre::Entity::setBoreder(*(Ogre::Entity **)(*(_DWORD *)(v1 + 56) + 4 * i), nullptr);
  }
  return this;
}


//======================================================================
// Ogre::BorderGameScene::setBorderColor(Ogre::Vector3)
// address: 0x0018142C   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall Ogre::BorderGameScene::setBorderColor(_DWORD *result, _DWORD *a2)
{
  result[19] = *a2;
  result[20] = a2[1];
  result[21] = a2[2];
  return result;
}


//======================================================================
// Ogre::BorderGameScene::setBorderStrength(float)
// address: 0x0018143A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::BorderGameScene::setBorderStrength(int this, float a2)
{
  *(float *)(this + 92) = a2;
  return this;
}


//======================================================================
// Ogre::BorderGameScene::getBorderStrength(void)
// address: 0x0018143E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::BorderGameScene::getBorderStrength(Ogre::BorderGameScene *this)
{
  return *((_DWORD *)this + 23);
}


//======================================================================
// Ogre::BorderGameScene::clear(void)
// address: 0x00181444   size: 0x36 (54 bytes)
//======================================================================
int __fastcall Ogre::BorderGameScene::clear(int this)
{
  int v1; // r4
  int i; // r5
  int v3; // r3

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(v1 + 56);
    if ( i >= (*(_DWORD *)(v1 + 60) - v3) >> 2 )
      break;
    this = Ogre::BaseObject::isKindOf(
             *(Ogre::BaseObject **)(v3 + 4 * i),
             (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI);
    if ( this != 0 )
      this = Ogre::Entity::setBoreder(*(Ogre::Entity **)(*(_DWORD *)(v1 + 56) + 4 * i), nullptr);
  }
  *(_DWORD *)(v1 + 60) = v3;
  return this;
}


//======================================================================
// Ogre::BorderGameScene::~BorderGameScene()
// address: 0x00181480   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15BorderGameSceneD1Ev'
void __fastcall Ogre::BorderGameScene::~BorderGameScene(Ogre::BorderGameScene *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_457B00;
  Ogre::BorderGameScene::clear((int)this);
  Ogre::BaseObject::release(*((_DWORD **)this + 17));
  Ogre::BaseObject::release(*((_DWORD **)this + 18));
  v2 = *((void **)this + 14);
  if ( v2 != nullptr )
    operator delete(v2);
  Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton = 0;
  Ogre::GameScene::~GameScene(this);
}


//======================================================================
// Ogre::BorderGameScene::~BorderGameScene()
// address: 0x001814C4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BorderGameScene::~BorderGameScene(Ogre::BorderGameScene *this)
{
  Ogre::BorderGameScene::~BorderGameScene(this);
  operator delete(this);
}


//======================================================================
// Ogre::BorderGameScene::onDetachObject(Ogre::MovableObject *)
// address: 0x001814D6   size: 0x2C (44 bytes)
//======================================================================
Ogre::MovableObject *__fastcall Ogre::BorderGameScene::onDetachObject(
        Ogre::BorderGameScene *this,
        Ogre::MovableObject *a2)
{
  Ogre::MovableObject **v3; // r3
  Ogre::MovableObject *result; // r0
  int v5; // r1
  Ogre::MovableObject **v6; // r2

  v3 = *((Ogre::MovableObject ***)this + 14);
  result = a2;
  v5 = *((_DWORD *)this + 15);
  while ( 1 )
  {
    v6 = v3;
    if ( v3 == (Ogre::MovableObject **)v5 )
      break;
    if ( *v3++ == result )
    {
      result = (Ogre::MovableObject *)(v6 + 1);
      if ( v6 + 1 != (Ogre::MovableObject **)v5 )
        result = (Ogre::MovableObject *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableObject *>(
                                          result,
                                          v5,
                                          v6);
      *((_DWORD *)this + 15) -= 4;
      return result;
    }
  }
  return result;
}


//======================================================================
// Ogre::BorderGameScene::onAttachObject(Ogre::MovableObject *)
// address: 0x00181504   size: 0x5C (92 bytes)
//======================================================================
__int64 __fastcall Ogre::BorderGameScene::onAttachObject(__int64 this)
{
  Ogre::BaseObject *v1; // r5
  int v2; // r4
  int v3; // r3
  int v4; // r2
  __int64 v5; // r0
  int v6; // r3
  __int64 v8; // [sp+0h] [bp-8h] BYREF

  v8 = this;
  v1 = (Ogre::BaseObject *)HIDWORD(this);
  HIDWORD(this) = *(_DWORD *)(this + 56);
  v2 = this;
  v3 = 0;
  LODWORD(this) = (*(_DWORD *)(this + 60) - HIDWORD(this)) >> 2;
  v4 = 0;
  while ( v3 < (int)this )
  {
    if ( *(Ogre::BaseObject **)(HIDWORD(this) + 4 * v3) == v1 )
      v4 = 1;
    ++v3;
  }
  if ( v4 == 0 && Ogre::BaseObject::isKindOf(v1, (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI) != 0 )
  {
    HIDWORD(v5) = *(_DWORD *)(v2 + 60);
    v6 = *(_DWORD *)(v2 + 64);
    HIDWORD(v8) = v1;
    if ( HIDWORD(v5) == v6 )
    {
      LODWORD(v5) = v2 + 56;
      std::vector<Ogre::RenderableObject *>::_M_insert_aux(v5, (_DWORD *)&v8 + 1);
    }
    else
    {
      if ( HIDWORD(v5) != 0 )
        *(_DWORD *)HIDWORD(v5) = v1;
      *(_DWORD *)(v2 + 60) += 4;
    }
  }
  return v8;
}

