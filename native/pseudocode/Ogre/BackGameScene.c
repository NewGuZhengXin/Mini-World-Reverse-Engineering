// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BackGameScene

//======================================================================
// Ogre::BackGameScene::getRTTI(void)const
// address: 0x00143C98   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BackGameScene::getRTTI(Ogre::BackGameScene *this)
{
  return &Ogre::BackGameScene::m_RTTI;
}


//======================================================================
// Ogre::BackGameScene::getTerrainTile(void)
// address: 0x00143CA4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::BackGameScene::getTerrainTile(Ogre::BackGameScene *this)
{
  return 0;
}


//======================================================================
// Ogre::BackGameScene::update(unsigned int)
// address: 0x00143CA8   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::BackGameScene::update(Ogre::BackGameScene *this, unsigned int a2)
{
  ;
}


//======================================================================
// Ogre::BackGameScene::onObjectPosChange(Ogre::MovableObject *)
// address: 0x00143CAA   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::BackGameScene::onObjectPosChange(Ogre::BackGameScene *this, Ogre::MovableObject *a2)
{
  ;
}


//======================================================================
// Ogre::BackGameScene::onRender(Ogre::SceneRenderer *)
// address: 0x00143CAC   size: 0x2 (2 bytes)
//======================================================================
void Ogre::BackGameScene::onRender()
{
  ;
}


//======================================================================
// Ogre::BackGameScene::pickObject(Ogre::IntersectType,Ogre::WorldRay const&,float *,unsigned int)
// address: 0x00143CAE   size: 0x4 (4 bytes)
//======================================================================
int Ogre::BackGameScene::pickObject()
{
  return 0;
}


//======================================================================
// Ogre::BackGameScene::pickGround(Ogre::WorldRay const&,float *)
// address: 0x00143CB2   size: 0x4 (4 bytes)
//======================================================================
int Ogre::BackGameScene::pickGround()
{
  return 0;
}


//======================================================================
// Ogre::BackGameScene::pickGround(int,int,int *,Ogre::Vector3 *,float *)
// address: 0x00143CB6   size: 0x4 (4 bytes)
//======================================================================
int Ogre::BackGameScene::pickGround()
{
  return 0;
}


//======================================================================
// Ogre::BackGameScene::updateFocusArea(Ogre::WorldPos,float)
// address: 0x00143CBA   size: 0x6 (6 bytes)
//======================================================================
void Ogre::BackGameScene::updateFocusArea()
{
  ;
}


//======================================================================
// Ogre::BackGameScene::onCull(Ogre::Camera *,Ogre::RenderUsage)
// address: 0x00143CC0   size: 0x6A (106 bytes)
//======================================================================
void __fastcall Ogre::BackGameScene::onCull(Ogre::GameScene *a1, Ogre::CullResult **a2)
{
  Ogre::CullResult **v4; // r7
  unsigned int i; // r4
  int v6; // r3
  _BYTE v7[548]; // [sp+8h] [bp-224h] BYREF

  Ogre::CullFrustum::CullFrustum((Ogre::CullFrustum *)v7);
  v4 = a2 + 53;
  (*((void (__fastcall **)(Ogre::CullResult **, _DWORD))*a2 + 10))(a2, 0);
  Ogre::CullResult::startCull(a2[53], (Ogre::Camera *)a2);
  Ogre::Camera::getCullFrustum((Ogre::Camera *)a2, (Ogre::CullFrustum *)v7);
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)a1 + 14);
    if ( i >= (*((_DWORD *)a1 + 15) - v6) >> 2 )
      break;
    if ( *(_BYTE *)(*(_DWORD *)(4 * i + v6) + 183) != 0 )
      Ogre::CullResult::addRenderable(*v4, a1, *(Ogre::RenderableObject **)(4 * i + v6), 0, nullptr);
  }
  Ogre::CullFrustum::~CullFrustum((Ogre::CullFrustum *)v7);
}


//======================================================================
// Ogre::BackGameScene::BackGameScene(void)
// address: 0x00143D30   size: 0x70 (112 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13BackGameSceneC1Ev'
Ogre::BackGameScene *__fastcall Ogre::BackGameScene::BackGameScene(
        Ogre::BackGameScene *this,
        int a2,
        Ogre::FixedString *a3)
{
  int v4; // r2
  Ogre::Material *v5; // r7
  void *v6; // r1
  int v7; // r2
  Ogre::Material *v8; // r5
  void *v9; // r1
  Ogre::FixedString *v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[1] = a3;
  Ogre::GameScene::GameScene(this);
  Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton = (int)this;
  *(_DWORD *)this = &off_455B60;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  v11[0] = (Ogre::FixedString *)Ogre::FixedString::insert((Ogre::FixedString *)"back0", (const char *)0xFFFFFFFF, v4);
  v5 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v5, (const Ogre::FixedString *)v11);
  *((_DWORD *)this + 17) = v5;
  Ogre::FixedString::release(v11[0], v6);
  v11[0] = (Ogre::FixedString *)Ogre::FixedString::insert((Ogre::FixedString *)"back1", (const char *)0xFFFFFFFF, v7);
  v8 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v8, (const Ogre::FixedString *)v11);
  *((_DWORD *)this + 18) = v8;
  Ogre::FixedString::release(v11[0], v9);
  return this;
}


//======================================================================
// Ogre::BackGameScene::newObject(void)
// address: 0x00143DB0   size: 0x12 (18 bytes)
//======================================================================
Ogre::BackGameScene *__fastcall Ogre::BackGameScene::newObject(Ogre::BackGameScene *this)
{
  Ogre::BackGameScene *v1; // r4
  int v2; // r1
  Ogre::FixedString *v3; // r2

  v1 = (Ogre::BackGameScene *)operator new(0x4Cu);
  Ogre::BackGameScene::BackGameScene(v1, v2, v3);
  return v1;
}


//======================================================================
// Ogre::BackGameScene::setActiveBackMaterial0(void)
// address: 0x00143DC4   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::BackGameScene::setActiveBackMaterial0(int this)
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
// Ogre::BackGameScene::setActiveBackMaterial1(void)
// address: 0x00143DFC   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::BackGameScene::setActiveBackMaterial1(int this)
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
// Ogre::BackGameScene::setNoBack(void)
// address: 0x00143E34   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::BackGameScene::setNoBack(int this)
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
// Ogre::BackGameScene::clear(void)
// address: 0x00143E6C   size: 0x3E (62 bytes)
//======================================================================
int __fastcall Ogre::BackGameScene::clear(int this)
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
    {
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v1 + 56) + 4 * i) + 233) = 0;
      this = Ogre::Entity::setBoreder(*(Ogre::Entity **)(*(_DWORD *)(v1 + 56) + 4 * i), nullptr);
    }
  }
  *(_DWORD *)(v1 + 60) = v3;
  return this;
}


//======================================================================
// Ogre::BackGameScene::~BackGameScene()
// address: 0x00143EB0   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13BackGameSceneD1Ev'
void __fastcall Ogre::BackGameScene::~BackGameScene(Ogre::BackGameScene *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_455B60;
  Ogre::BackGameScene::clear((int)this);
  Ogre::BaseObject::release(*((_DWORD **)this + 17));
  Ogre::BaseObject::release(*((_DWORD **)this + 18));
  v2 = *((void **)this + 14);
  if ( v2 != nullptr )
    operator delete(v2);
  Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton = 0;
  Ogre::GameScene::~GameScene(this);
}


//======================================================================
// Ogre::BackGameScene::~BackGameScene()
// address: 0x00143EF4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BackGameScene::~BackGameScene(Ogre::BackGameScene *this)
{
  Ogre::BackGameScene::~BackGameScene(this);
  operator delete(this);
}


//======================================================================
// Ogre::BackGameScene::onDetachObject(Ogre::MovableObject *)
// address: 0x00143F24   size: 0x2C (44 bytes)
//======================================================================
Ogre::MovableObject *__fastcall Ogre::BackGameScene::onDetachObject(Ogre::BackGameScene *this, Ogre::MovableObject *a2)
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
// Ogre::BackGameScene::onAttachObject(Ogre::MovableObject *)
// address: 0x00143FFC   size: 0x5C (92 bytes)
//======================================================================
__int64 __fastcall Ogre::BackGameScene::onAttachObject(__int64 this)
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

