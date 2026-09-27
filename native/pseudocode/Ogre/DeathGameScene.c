// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DeathGameScene

//======================================================================
// Ogre::DeathGameScene::getRTTI(void)const
// address: 0x00191830   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::DeathGameScene::getRTTI(Ogre::DeathGameScene *this)
{
  return &Ogre::DeathGameScene::m_RTTI;
}


//======================================================================
// Ogre::DeathGameScene::getTerrainTile(void)
// address: 0x0019183C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::DeathGameScene::getTerrainTile(Ogre::DeathGameScene *this)
{
  return 0;
}


//======================================================================
// Ogre::DeathGameScene::onAttachObject(Ogre::MovableObject *)
// address: 0x00191840   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::DeathGameScene::onAttachObject(Ogre::DeathGameScene *this, Ogre::MovableObject *a2)
{
  ;
}


//======================================================================
// Ogre::DeathGameScene::onDetachObject(Ogre::MovableObject *)
// address: 0x00191842   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::DeathGameScene::onDetachObject(Ogre::DeathGameScene *this, Ogre::MovableObject *a2)
{
  ;
}


//======================================================================
// Ogre::DeathGameScene::onObjectPosChange(Ogre::MovableObject *)
// address: 0x00191844   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::DeathGameScene::onObjectPosChange(Ogre::DeathGameScene *this, Ogre::MovableObject *a2)
{
  ;
}


//======================================================================
// Ogre::DeathGameScene::onRender(Ogre::SceneRenderer *)
// address: 0x00191846   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::DeathGameScene::onRender(Ogre::DeathGameScene *this, Ogre::SceneRenderer *a2)
{
  ;
}


//======================================================================
// Ogre::DeathGameScene::pickObject(Ogre::IntersectType,Ogre::WorldRay const&,float *,unsigned int)
// address: 0x00191848   size: 0x4 (4 bytes)
//======================================================================
int Ogre::DeathGameScene::pickObject()
{
  return 0;
}


//======================================================================
// Ogre::DeathGameScene::pickGround(Ogre::WorldRay const&,float *)
// address: 0x0019184C   size: 0x4 (4 bytes)
//======================================================================
int Ogre::DeathGameScene::pickGround()
{
  return 1;
}


//======================================================================
// Ogre::DeathGameScene::pickGround(int,int,int *,Ogre::Vector3 *,float *)
// address: 0x00191850   size: 0x4 (4 bytes)
//======================================================================
int Ogre::DeathGameScene::pickGround()
{
  return 1;
}


//======================================================================
// Ogre::DeathGameScene::updateFocusArea(Ogre::WorldPos,float)
// address: 0x00191854   size: 0x6 (6 bytes)
//======================================================================
void Ogre::DeathGameScene::updateFocusArea()
{
  ;
}


//======================================================================
// Ogre::DeathGameScene::~DeathGameScene()
// address: 0x0019185C   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14DeathGameSceneD1Ev'
void __fastcall Ogre::DeathGameScene::~DeathGameScene(Ogre::DeathGameScene *this)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_4583B0;
  v2 = *((void **)this + 17);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 14);
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::Singleton<Ogre::DeathGameScene>::ms_Singleton = 0;
  Ogre::GameScene::~GameScene(this);
}


//======================================================================
// Ogre::DeathGameScene::~DeathGameScene()
// address: 0x0019189C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DeathGameScene::~DeathGameScene(Ogre::DeathGameScene *this)
{
  Ogre::DeathGameScene::~DeathGameScene(this);
  operator delete(this);
}


//======================================================================
// Ogre::DeathGameScene::onCull(Ogre::Camera *,Ogre::RenderUsage)
// address: 0x001918B0   size: 0x74 (116 bytes)
//======================================================================
void __fastcall Ogre::DeathGameScene::onCull(Ogre::GameScene *a1, Ogre::CullResult **a2)
{
  Ogre::CullResult **v4; // r7
  unsigned int i; // r4
  int v6; // r3
  Ogre::RenderableObject *v7; // [sp+Ch] [bp-228h]
  _BYTE v8[548]; // [sp+10h] [bp-224h] BYREF

  Ogre::CullFrustum::CullFrustum((int)v8);
  v4 = a2 + 53;
  (*((void (__fastcall **)(Ogre::CullResult **, _DWORD))*a2 + 10))(a2, 0);
  Ogre::CullResult::startCull(a2[53], (Ogre::Camera *)a2);
  Ogre::Camera::getCullFrustum((Ogre::Camera *)a2, (Ogre::CullFrustum *)v8);
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)a1 + 14);
    if ( i >= (*((_DWORD *)a1 + 15) - v6) >> 2 )
      break;
    v7 = *(Ogre::RenderableObject **)(4 * i + v6);
    if ( *((_BYTE *)v7 + 183) != 0 )
    {
      Ogre::MovableObject::getWorldBounds(*(Ogre::MovableObject **)(4 * i + v6));
      Ogre::CullResult::addRenderable(*v4, a1, (Ogre::MovableObject **)v7, 0, nullptr);
    }
  }
  Ogre::CullFrustum::~CullFrustum((Ogre::CullFrustum *)v8);
}


//======================================================================
// Ogre::DeathGameScene::DeathGameScene(void)
// address: 0x00191928   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14DeathGameSceneC1Ev'
Ogre::DeathGameScene *__fastcall Ogre::DeathGameScene::DeathGameScene(Ogre::DeathGameScene *this)
{
  Ogre::GameScene::GameScene(this);
  *((_DWORD *)this + 21) = -1014562816;
  Ogre::Singleton<Ogre::DeathGameScene>::ms_Singleton = (int)this;
  *((_DWORD *)this + 22) = 1147207680;
  *((_DWORD *)this + 25) = 1077936128;
  *(_DWORD *)this = &off_4583B0;
  *((_DWORD *)this + 24) = 1078774989;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 23) = 1090099610;
  *((_DWORD *)this + 29) = 0;
  return this;
}


//======================================================================
// Ogre::DeathGameScene::newObject(void)
// address: 0x00191988   size: 0x12 (18 bytes)
//======================================================================
Ogre::DeathGameScene *__fastcall Ogre::DeathGameScene::newObject(Ogre::DeathGameScene *this)
{
  Ogre::DeathGameScene *v1; // r4

  v1 = (Ogre::DeathGameScene *)operator new(0x78u);
  Ogre::DeathGameScene::DeathGameScene(v1);
  return v1;
}


//======================================================================
// Ogre::DeathGameScene::clear(void)
// address: 0x0019199A   size: 0x50 (80 bytes)
//======================================================================
void __fastcall Ogre::DeathGameScene::clear(Ogre::DeathGameScene *this)
{
  int v2; // r5
  int v3; // r3
  int v4; // r0
  int v5; // r0
  void *v6; // r0

  v2 = 0;
  *((_DWORD *)this + 15) = *((_DWORD *)this + 14);
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 17);
    if ( v2 >= (*((_DWORD *)this + 18) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(*(_DWORD *)(v3 + 4 * v2) + 4);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 52))(v4);
    v5 = **(_DWORD **)(*((_DWORD *)this + 17) + 4 * v2);
    if ( v5 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5);
    Ogre::BaseObject::release(*(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 17) + 4 * v2) + 4));
    v6 = *(void **)(*((_DWORD *)this + 17) + 4 * v2);
    if ( v6 != nullptr )
      operator delete(v6);
    ++v2;
  }
  *((_DWORD *)this + 18) = v3;
}


//======================================================================
// Ogre::DeathGameScene::DeleteObjectOnRenderObjectList(Ogre::RenderableObject *)
// address: 0x00191AB4   size: 0x2E (46 bytes)
//======================================================================
Ogre::RenderableObject ***__fastcall Ogre::DeathGameScene::DeleteObjectOnRenderObjectList(
        Ogre::RenderableObject ***this,
        Ogre::RenderableObject *a2)
{
  Ogre::RenderableObject **v2; // r4
  Ogre::RenderableObject ***v3; // r5
  int v5; // r1

  v2 = *(this + 14);
  v3 = this;
  while ( 1 )
  {
    v5 = (int)v3[15];
    if ( v2 == (Ogre::RenderableObject **)v5 )
      break;
    this = (Ogre::RenderableObject ***)(v2 + 1);
    if ( *v2 == a2 )
    {
      if ( this != (Ogre::RenderableObject ***)v5 )
        this = (Ogre::RenderableObject ***)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableObject *>(
                                             this,
                                             v5,
                                             v2);
      --v3[15];
    }
    else
    {
      ++v2;
    }
  }
  return this;
}


//======================================================================
// Ogre::DeathGameScene::update(unsigned int)
// address: 0x00191AE4   size: 0x1C2 (450 bytes)
//======================================================================
float __fastcall Ogre::DeathGameScene::update(Ogre::DeathGameScene *this, unsigned int a2)
{
  float result; // r0
  void **v4; // r2
  float *v5; // r7
  float *v6; // r6
  int v7; // r0
  int v8; // r1
  int *v9; // r5
  int v10; // r0
  int v11; // r3
  int v12; // r6
  int v13; // r7
  int v14; // r3
  float v15; // [sp+4h] [bp-20h]
  void **v16; // [sp+8h] [bp-1Ch]
  float v17; // [sp+Ch] [bp-18h]
  int v19; // [sp+14h] [bp-10h]
  int v20; // [sp+18h] [bp-Ch]

  result = (float)a2 / 1000.0;
  v4 = *((void ***)this + 17);
  v17 = result;
LABEL_2:
  v16 = v4;
  while ( v16 != *((void ***)this + 18) )
  {
    v5 = (float *)*v16;
    v15 = *((float *)*v16 + 4) - v17;
    v6 = *(float **)*v16;
    if ( v15 >= 0.0 )
    {
      v9 = *((int **)v5 + 1);
      if ( v6 != nullptr )
        (*(void (__fastcall **)(_DWORD, unsigned int))(*(_DWORD *)v6 + 40))(*(_DWORD *)v5, a2);
      if ( v9 != nullptr )
      {
        (*(void (__fastcall **)(int *, unsigned int))(*v9 + 40))(v9, a2);
        Ogre::Entity::setDeadScale((Ogre::Entity *)v9, 1.0 - (float)(v15 / *((float *)this + 23)));
      }
      v5[4] = v15;
      if ( v15 < (float)(*((float *)this + 23) - *((float *)this + 25)) )
      {
        v20 = *((_DWORD *)v5 + 8);
        v19 = *((_DWORD *)v5 + 10);
        v10 = *((_DWORD *)v5 + 9) + (int)(float)(v17 * *((float *)this + 22));
        *((_DWORD *)v5 + 9) = v10;
        if ( v6 != nullptr )
        {
          *((_BYTE *)v6 + 183) = 1;
          *((_DWORD *)v6 + 3) = v10;
          *((_DWORD *)v6 + 4) = v19;
          v11 = *(_DWORD *)v6;
          *((_DWORD *)v6 + 2) = v20;
          (*(void (__fastcall **)(float *))(v11 + 64))(v6);
          Ogre::Entity::setDeadScale((Ogre::Entity *)v6, v15 / (float)(*((float *)this + 23) - *((float *)this + 25)));
          v6[47] = (float)(v15 * 0.55) / (float)(*((float *)this + 23) - *((float *)this + 25));
        }
      }
      LODWORD(result) = v15 < (float)(*((float *)this + 23) - *((float *)this + 24));
      if ( v15 < (float)(*((float *)this + 23) - *((float *)this + 24)) && v9 != nullptr )
      {
        if ( *((_BYTE *)v9 + 180) != 0 )
          (*(void (__fastcall **)(int *))(*v9 + 68))(v9);
        v12 = (int)(float)(*((float *)v9 + 26) * 10.0);
        v13 = (int)(float)(*((float *)v9 + 25) * 10.0) + (int)(float)(v17 * *((float *)this + 21));
        v14 = *v9;
        v9[2] = (int)(float)(*((float *)v9 + 24) * 10.0);
        v9[3] = v13;
        v9[4] = v12;
        result = COERCE_FLOAT((*(int (__fastcall **)(int *))(v14 + 64))(v9));
      }
      v4 = v16 + 1;
      goto LABEL_2;
    }
    Ogre::DeathGameScene::DeleteObjectOnRenderObjectList(
      (Ogre::RenderableObject ***)this,
      *(Ogre::RenderableObject **)v5);
    v7 = *((_DWORD *)v5 + 1);
    if ( v7 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 52))(v7);
      Ogre::BaseObject::release(*((_DWORD **)v5 + 1));
    }
    if ( *(_DWORD *)v5 != 0 )
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)v5 + 20))(*(_DWORD *)v5);
    if ( *v16 != nullptr )
      operator delete(*v16);
    v8 = *((_DWORD *)this + 18);
    LODWORD(result) = v16 + 1;
    if ( v16 + 1 != (void **)v8 )
      result = COERCE_FLOAT(
                 std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::DeathSceneObject *>(
                   (void *)LODWORD(result),
                   v8,
                   v16));
    *((_DWORD *)this + 18) -= 4;
  }
  return result;
}


//======================================================================
// Ogre::DeathGameScene::addObject(Ogre::Entity *,Ogre::Entity *)
// address: 0x00191CB4   size: 0x1F0 (496 bytes)
//======================================================================
float __fastcall Ogre::DeathGameScene::addObject(Ogre::DeathGameScene *this, Ogre::Entity *a2, Ogre::Entity *a3)
{
  int v4; // r2
  int v7; // r1
  int i; // r3
  float result; // r0
  int v10; // r2
  int j; // r3
  int v12; // r2
  int v13; // r3
  void *v14; // r1
  __int64 v15; // r0
  int v16; // r2
  float v17; // r5
  float v18; // r6
  float v19; // r3
  __int64 v20; // r0
  float v21; // [sp+4h] [bp-30h]
  float v22; // [sp+8h] [bp-2Ch]
  float v23; // [sp+Ch] [bp-28h]
  Ogre::FixedString *v24; // [sp+14h] [bp-20h] BYREF
  int v25; // [sp+18h] [bp-1Ch] BYREF
  float v26; // [sp+1Ch] [bp-18h]
  int v27; // [sp+20h] [bp-14h]
  float v28; // [sp+24h] [bp-10h] BYREF
  int v29; // [sp+28h] [bp-Ch]
  int v30; // [sp+2Ch] [bp-8h]

  v4 = *((_DWORD *)this + 14);
  v7 = (*((_DWORD *)this + 15) - v4) >> 2;
  for ( i = 0; i < v7; ++i )
  {
    result = *(float *)(v4 + 4 * i);
    if ( (Ogre::Entity *)LODWORD(result) == a2 && *(float *)&a2 != 0.0 )
      return result;
  }
  v10 = *((_DWORD *)this + 17);
  for ( j = 0; j < (*((_DWORD *)this + 18) - v10) >> 2; ++j )
  {
    result = *(float *)(*(_DWORD *)(v10 + 4 * j) + 4);
    if ( (Ogre::Entity *)LODWORD(result) == a3 && a3 != nullptr )
      return result;
  }
  if ( a3 != nullptr )
  {
    (*(void (__fastcall **)(Ogre::Entity *))(*(_DWORD *)a3 + 4))(a3);
    Ogre::Entity::enableDeadEffect(a3, true);
    v28 = 0.0;
    v29 = 1065353216;
    v30 = 0;
    Ogre::Entity::setUVMaskColor((int)a3, &v28);
    v28 = 0.12;
    v29 = 1039516303;
    Ogre::Entity::setUVMaskSpeed((int)a3);
    Ogre::Entity::getAnchorWorldPos((Ogre::Entity *)&v25, a3, 107);
    v23 = *((float *)Ogre::MovableObject::getWorldBounds(a3) + 6);
    v22 = (float)((float)(*((float *)a3 + 9) + *((float *)a3 + 10)) + *((float *)a3 + 11)) / 3.0;
    v26 = v26 - 30.0;
    Ogre::Entity::playAnim(a3, 10162);
    v24 = (Ogre::FixedString *)Ogre::FixedString::insert(
                                 (Ogre::FixedString *)"siwang",
                                 (const char *)0xFFFFFFFF,
                                 v12,
                                 v13);
    v28 = *(float *)&v25;
    v29 = LODWORD(v26);
    v30 = v27;
    Ogre::Entity::playParticleEmitter(
      a3,
      (const Ogre::FixedString *)&v24,
      (int *)&v28,
      COERCE_INT((float)(v23 / 2.2) / v22));
    Ogre::FixedString::release((int)v24, v14);
  }
  if ( *(float *)&a2 != 0.0 )
  {
    *((_BYTE *)a2 + 183) = 0;
    Ogre::Entity::playAnim(a2, 10162);
    HIDWORD(v15) = *((_DWORD *)this + 15);
    v16 = *((_DWORD *)this + 16);
    v28 = *(float *)&a2;
    if ( HIDWORD(v15) == v16 )
    {
      LODWORD(v15) = (char *)this + 56;
      std::vector<Ogre::RenderableObject *>::_M_insert_aux(v15, &v28);
    }
    else
    {
      if ( HIDWORD(v15) != 0 )
        *(float *)HIDWORD(v15) = *(float *)&a2;
      *((_DWORD *)this + 15) += 4;
    }
  }
  result = COERCE_FLOAT(operator new(0x2Cu));
  *(_DWORD *)(LODWORD(result) + 8) = 1065353216;
  *(_DWORD *)(LODWORD(result) + 4) = 0;
  *(_DWORD *)(LODWORD(result) + 12) = 0;
  *(_DWORD *)(LODWORD(result) + 16) = 0;
  *(_DWORD *)(LODWORD(result) + 20) = 0;
  *(_DWORD *)(LODWORD(result) + 24) = 0;
  *(_DWORD *)(LODWORD(result) + 28) = 0;
  v28 = result;
  *(float *)LODWORD(result) = *(float *)&a2;
  v17 = v28;
  *(_DWORD *)(LODWORD(v28) + 4) = a3;
  *(_DWORD *)(LODWORD(v17) + 12) = *((_DWORD *)this + 23);
  *(_DWORD *)(LODWORD(v17) + 16) = *((_DWORD *)this + 23);
  if ( *(float *)&a2 != 0.0 )
  {
    if ( *((_BYTE *)a2 + 180) != 0 )
      (*(void (__fastcall **)(Ogre::Entity *))(*(_DWORD *)a2 + 68))(a2);
    v21 = *((float *)a2 + 25);
    v18 = *((float *)a2 + 26);
    *(_DWORD *)(LODWORD(v17) + 20) = (int)(float)(*((float *)a2 + 24) * 10.0);
    *(_DWORD *)(LODWORD(v17) + 24) = (int)(float)(v21 * 10.0);
    *(_DWORD *)(LODWORD(v17) + 28) = (int)(float)(v18 * 10.0);
    result = Ogre::MovableObject::getTransparent((Ogre::MovableObject **)a2);
    *(float *)(LODWORD(v28) + 8) = result;
  }
  v19 = v28;
  *(_DWORD *)(LODWORD(v28) + 32) = *(_DWORD *)(LODWORD(v28) + 20);
  *(_DWORD *)(LODWORD(v19) + 36) = *(_DWORD *)(LODWORD(v19) + 24);
  *(_DWORD *)(LODWORD(v19) + 40) = *(_DWORD *)(LODWORD(v19) + 28);
  HIDWORD(v20) = *((_DWORD *)this + 18);
  if ( HIDWORD(v20) == *((_DWORD *)this + 19) )
  {
    LODWORD(v20) = (char *)this + 68;
    LODWORD(result) = std::vector<Ogre::DeathSceneObject *>::_M_insert_aux(v20, &v28);
  }
  else
  {
    if ( HIDWORD(v20) != 0 )
      *(float *)HIDWORD(v20) = v19;
    *((_DWORD *)this + 18) += 4;
  }
  return result;
}

