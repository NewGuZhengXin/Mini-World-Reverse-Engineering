// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SimpleGameScene

//======================================================================
// Ogre::SimpleGameScene::getRTTI(void)const
// address: 0x0015E570   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::SimpleGameScene::getRTTI(Ogre::SimpleGameScene *this)
{
  return &Ogre::SimpleGameScene::m_RTTI;
}


//======================================================================
// Ogre::SimpleGameScene::updateFocusArea(Ogre::WorldPos,float)
// address: 0x0015E57C   size: 0x6 (6 bytes)
//======================================================================
void Ogre::SimpleGameScene::updateFocusArea()
{
  ;
}


//======================================================================
// Ogre::SimpleGameScene::getTerrainTile(void)
// address: 0x0015E582   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::SimpleGameScene::getTerrainTile(Ogre::SimpleGameScene *this)
{
  return 0;
}


//======================================================================
// Ogre::SimpleGameScene::update(unsigned int)
// address: 0x0015E588   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::SimpleGameScene::update(Ogre::SimpleGameScene *this, unsigned int a2)
{
  ;
}


//======================================================================
// Ogre::SimpleGameScene::onObjectPosChange(Ogre::MovableObject *)
// address: 0x0015E58A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::SimpleGameScene::onObjectPosChange(Ogre::SimpleGameScene *this, Ogre::MovableObject *a2)
{
  ;
}


//======================================================================
// Ogre::SimpleGameScene::onRender(Ogre::SceneRenderer *)
// address: 0x0015E58C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::SimpleGameScene::onRender(Ogre::SimpleGameScene *this, Ogre::SceneRenderer *a2)
{
  ;
}


//======================================================================
// Ogre::SimpleGameScene::pickGround(Ogre::WorldRay const&,float *)
// address: 0x0015E58E   size: 0x4 (4 bytes)
//======================================================================
int Ogre::SimpleGameScene::pickGround()
{
  return 0;
}


//======================================================================
// Ogre::SimpleGameScene::pickGround(int,int,int *,Ogre::Vector3 *,float *)
// address: 0x0015E592   size: 0x4 (4 bytes)
//======================================================================
int Ogre::SimpleGameScene::pickGround()
{
  return 0;
}


//======================================================================
// Ogre::SimpleGameScene::pickObject(Ogre::IntersectType,Ogre::WorldRay const&,float *,unsigned int)
// address: 0x0015E598   size: 0x7A (122 bytes)
//======================================================================
_DWORD *__fastcall Ogre::SimpleGameScene::pickObject(int a1, int a2, Ogre::WorldRay *this, float *a4, int a5)
{
  unsigned int v5; // r4
  int v7; // r3
  _DWORD *v8; // r5
  float v10; // [sp+0h] [bp-3Ch]
  _DWORD *v11; // [sp+4h] [bp-38h]
  float v14[3]; // [sp+10h] [bp-2Ch] BYREF
  _DWORD v15[8]; // [sp+1Ch] [bp-20h] BYREF

  v5 = 0;
  v15[6] = 2139095039;
  memset(v14, 0, sizeof(v14));
  Ogre::WorldRay::getRelativeRay(this, (Ogre::Ray *)v15, (const Ogre::WorldPos *)v14);
  v11 = nullptr;
  v10 = 3.4028e38;
  while ( 1 )
  {
    v7 = *(_DWORD *)(a1 + 56);
    if ( v5 >= (*(_DWORD *)(a1 + 60) - v7) >> 2 )
      break;
    v8 = *(_DWORD **)(4 * v5 + v7);
    if ( (v8[50] & a5) != 0
      && (*(int (__fastcall **)(_DWORD *, int, _DWORD *, float *))(*v8 + 56))(v8, a2, v15, v14) != 0
      && v14[0] < v10 )
    {
      v11 = v8;
      v10 = v14[0];
    }
    ++v5;
  }
  if ( a4 != nullptr )
    *a4 = v10;
  return v11;
}


//======================================================================
// Ogre::SimpleGameScene::~SimpleGameScene()
// address: 0x0015E6C8   size: 0x48 (72 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15SimpleGameSceneD1Ev'
void __fastcall Ogre::SimpleGameScene::~SimpleGameScene(Ogre::SimpleGameScene *this)
{
  unsigned int v2; // r5
  int v3; // r3
  void *v4; // r0
  void *v5; // r0

  v2 = 0;
  *(_DWORD *)this = &off_4569A0;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 14);
    if ( v2 >= (*((_DWORD *)this + 15) - v3) >> 2 )
      break;
    Ogre::BaseObject::release(*(_DWORD **)(4 * v2++ + v3));
  }
  v4 = *((void **)this + 17);
  *((_DWORD *)this + 15) = v3;
  if ( v4 != nullptr )
    operator delete(v4);
  v5 = *((void **)this + 14);
  if ( v5 != nullptr )
    operator delete(v5);
  Ogre::GameScene::~GameScene(this);
}


//======================================================================
// Ogre::SimpleGameScene::~SimpleGameScene()
// address: 0x0015E714   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::SimpleGameScene::~SimpleGameScene(Ogre::SimpleGameScene *this)
{
  Ogre::SimpleGameScene::~SimpleGameScene(this);
  operator delete(this);
}


//======================================================================
// Ogre::SimpleGameScene::SimpleGameScene(void)
// address: 0x0015EC58   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15SimpleGameSceneC1Ev'
Ogre::SimpleGameScene *__fastcall Ogre::SimpleGameScene::SimpleGameScene(Ogre::SimpleGameScene *this)
{
  Ogre::GameScene::GameScene(this);
  *(_DWORD *)this = &off_4569A0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  return this;
}


//======================================================================
// Ogre::SimpleGameScene::newObject(void)
// address: 0x0015EC80   size: 0x12 (18 bytes)
//======================================================================
Ogre::SimpleGameScene *__fastcall Ogre::SimpleGameScene::newObject(Ogre::SimpleGameScene *this)
{
  Ogre::SimpleGameScene *v1; // r4

  v1 = (Ogre::SimpleGameScene *)operator new(0x5Cu);
  Ogre::SimpleGameScene::SimpleGameScene(v1);
  return v1;
}


//======================================================================
// Ogre::SimpleGameScene::onDetachObject(Ogre::MovableObject *)
// address: 0x0015ECFC   size: 0x13C (316 bytes)
//======================================================================
_DWORD *__fastcall Ogre::SimpleGameScene::onDetachObject(Ogre::SimpleGameScene *this, Ogre::MovableObject *a2)
{
  Ogre::MovableObject **v4; // r3
  Ogre::MovableObject **v5; // r1
  int i; // r0
  Ogre::MovableObject **v7; // r2
  int v8; // r0
  Ogre::MovableObject **j; // r2
  Ogre::MovableObject **v10; // r3
  Ogre::MovableObject **v11; // r1
  int k; // r0
  Ogre::MovableObject **v13; // r2
  int v14; // r0
  Ogre::MovableObject **m; // r2

  if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI) != 0 )
  {
    v4 = *((Ogre::MovableObject ***)this + 14);
    v5 = *((Ogre::MovableObject ***)this + 15);
    for ( i = ((char *)v5 - (char *)v4) >> 4; ; --i )
    {
      v7 = v4;
      if ( i <= 0 )
        break;
      if ( *v4 == a2 )
        goto LABEL_22;
      if ( v4[1] == a2 )
      {
        ++v4;
        goto LABEL_22;
      }
      if ( v4[2] == a2 )
      {
        v4 += 2;
        goto LABEL_22;
      }
      v4 += 4;
      if ( *(v4 - 1) == a2 )
      {
        v4 = v7 + 3;
        goto LABEL_22;
      }
    }
    v8 = v5 - v4;
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        if ( v8 != 1 )
          goto LABEL_29;
        goto LABEL_20;
      }
      if ( *v4 == a2 )
      {
LABEL_22:
        if ( v4 != v5 )
        {
          for ( j = v4 + 1; j != v5; ++j )
          {
            if ( *j != a2 )
              *v4++ = *j;
          }
          v5 = v4;
        }
LABEL_29:
        if ( v5 != *((Ogre::MovableObject ***)this + 15) )
          *((_DWORD *)this + 15) = v5;
        return Ogre::BaseObject::release(a2);
      }
      v7 = v4 + 1;
    }
    if ( *v7 == a2 )
    {
LABEL_21:
      v4 = v7;
      goto LABEL_22;
    }
    ++v7;
LABEL_20:
    if ( *v7 != a2 )
      goto LABEL_29;
    goto LABEL_21;
  }
  if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI) == 0 )
    return Ogre::BaseObject::release(a2);
  v10 = *((Ogre::MovableObject ***)this + 2);
  v11 = *((Ogre::MovableObject ***)this + 3);
  for ( k = ((char *)v11 - (char *)v10) >> 4; ; --k )
  {
    v13 = v10;
    if ( k <= 0 )
      break;
    if ( *v10 == a2 )
      goto LABEL_52;
    if ( v10[1] == a2 )
    {
      ++v10;
      goto LABEL_52;
    }
    if ( v10[2] == a2 )
    {
      v10 += 2;
      goto LABEL_52;
    }
    v10 += 4;
    if ( *(v10 - 1) == a2 )
    {
      v10 = v13 + 3;
      goto LABEL_52;
    }
  }
  v14 = v11 - v10;
  if ( v14 == 2 )
    goto LABEL_48;
  if ( v14 != 3 )
  {
    if ( v14 != 1 )
      goto LABEL_59;
    goto LABEL_50;
  }
  if ( *v10 != a2 )
  {
    v13 = v10 + 1;
LABEL_48:
    if ( *v13 == a2 )
    {
LABEL_51:
      v10 = v13;
      goto LABEL_52;
    }
    ++v13;
LABEL_50:
    if ( *v13 != a2 )
      goto LABEL_59;
    goto LABEL_51;
  }
LABEL_52:
  if ( v10 != v11 )
  {
    for ( m = v10 + 1; m != v11; ++m )
    {
      if ( *m != a2 )
        *v10++ = *m;
    }
    v11 = v10;
  }
LABEL_59:
  if ( v11 != *((Ogre::MovableObject ***)this + 3) )
    *((_DWORD *)this + 3) = v11;
  return Ogre::BaseObject::release(a2);
}


//======================================================================
// Ogre::SimpleGameScene::onAttachObject(Ogre::MovableObject *)
// address: 0x0015EEEC   size: 0x90 (144 bytes)
//======================================================================
__int64 __fastcall Ogre::SimpleGameScene::onAttachObject(__int64 this, int a2)
{
  __int64 v3; // r0
  int v4; // r3
  __int64 v5; // r0
  int v6; // r3
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+8h] [bp-4h]

  v8 = this;
  v9 = a2;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(this) + 4))(HIDWORD(this));
  if ( Ogre::BaseObject::isKindOf(
         (Ogre::BaseObject *)HIDWORD(this),
         (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI) != 0 )
  {
    if ( Ogre::BaseObject::isKindOf(
           (Ogre::BaseObject *)HIDWORD(this),
           (const Ogre::RuntimeClass *)&Ogre::DecalNode::m_RTTI) != 0 )
      Ogre::DecalNode::BuildMesh(HIDWORD(this), this + 56);
    HIDWORD(v3) = *(_DWORD *)(this + 60);
    v4 = *(_DWORD *)(this + 64);
    HIDWORD(v8) = HIDWORD(this);
    if ( HIDWORD(v3) == v4 )
    {
      LODWORD(v3) = this + 56;
      std::vector<Ogre::RenderableObject *>::_M_insert_aux(v3, (_DWORD *)&v8 + 1);
    }
    else
    {
      if ( HIDWORD(v3) != 0 )
        *(_DWORD *)HIDWORD(v3) = HIDWORD(this);
      *(_DWORD *)(this + 60) += 4;
    }
  }
  else if ( Ogre::BaseObject::isKindOf(
              (Ogre::BaseObject *)HIDWORD(this),
              (const Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI) != 0 )
  {
    HIDWORD(v5) = *(_DWORD *)(this + 12);
    v6 = *(_DWORD *)(this + 16);
    HIDWORD(v8) = HIDWORD(this);
    if ( HIDWORD(v5) == v6 )
    {
      LODWORD(v5) = this + 8;
      std::vector<Ogre::EffectObject *>::_M_insert_aux(v5, (_DWORD *)&v8 + 1);
    }
    else
    {
      if ( HIDWORD(v5) != 0 )
        *(_DWORD *)HIDWORD(v5) = HIDWORD(this);
      *(_DWORD *)(this + 12) += 4;
    }
  }
  return v8;
}


//======================================================================
// Ogre::SimpleGameScene::onCull(Ogre::Camera *,Ogre::RenderUsage)
// address: 0x0015F26C   size: 0x96 (150 bytes)
//======================================================================
void __fastcall Ogre::SimpleGameScene::onCull(Ogre::GameScene *a1, Ogre::CullResult **a2)
{
  Ogre::CullResult **v4; // r7
  int v5; // r3
  Ogre::MovableObject **v6; // r4
  unsigned int i; // [sp+Ch] [bp-228h]
  _BYTE v8[548]; // [sp+10h] [bp-224h] BYREF

  Ogre::CullFrustum::CullFrustum((Ogre::CullFrustum *)v8);
  v4 = a2 + 53;
  (*((void (__fastcall **)(Ogre::CullResult **, _DWORD))*a2 + 10))(a2, 0);
  Ogre::CullResult::startCull(a2[53], (Ogre::Camera *)a2);
  Ogre::Camera::getCullFrustum((Ogre::Camera *)a2, (Ogre::CullFrustum *)v8);
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)a1 + 14);
    if ( i >= (*((_DWORD *)a1 + 15) - v5) >> 2 )
      break;
    v6 = *(Ogre::MovableObject ***)(4 * i + v5);
    if ( *((_BYTE *)v6 + 183) != 0 )
    {
      if ( *((_BYTE *)v6 + 180) != 0 )
        (*((void (__fastcall **)(Ogre::MovableObject **))*v6 + 17))(v6);
      if ( Ogre::CullFrustum::cull((Ogre::CullFrustum *)v8, (const Ogre::BoxSphereBound *)(v6 + 35)) != 1 )
        Ogre::CullResult::addRenderable(*v4, a1, v6, 0, nullptr);
    }
  }
  Ogre::CullFrustum::~CullFrustum((Ogre::CullFrustum *)v8);
}

