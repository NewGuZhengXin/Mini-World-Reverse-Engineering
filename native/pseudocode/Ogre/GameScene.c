// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::GameScene

//======================================================================
// Ogre::GameScene::getReflecteffect(void)
// address: 0x00143C94   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::GameScene::getReflecteffect(Ogre::GameScene *this)
{
  return 0;
}


//======================================================================
// Ogre::GameScene::getRTTI(void)const
// address: 0x0015E560   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::GameScene::getRTTI(Ogre::GameScene *this)
{
  return &Ogre::GameScene::m_RTTI;
}


//======================================================================
// Ogre::GameScene::onCull(Ogre::Camera *,Ogre::RenderUsage)
// address: 0x0015E56C   size: 0x2 (2 bytes)
//======================================================================
void Ogre::GameScene::onCull()
{
  ;
}


//======================================================================
// Ogre::GameScene::getShaderEnvData(Ogre::ShaderEnvData &)
// address: 0x0015E586   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::GameScene::getShaderEnvData(Ogre::GameScene *this, Ogre::ShaderEnvData *a2)
{
  ;
}


//======================================================================
// Ogre::GameScene::~GameScene()
// address: 0x0015E618   size: 0x94 (148 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9GameSceneD1Ev'
void __fastcall Ogre::GameScene::~GameScene(Ogre::GameScene *this)
{
  Ogre::PhysicsScene *v1; // r5
  void *v3; // r5
  int i; // r5
  int v5; // r3
  unsigned int j; // r5
  int v7; // r3
  _DWORD *v8; // r0
  void *v9; // r0
  void *v10; // r0

  v1 = *((Ogre::PhysicsScene **)this + 9);
  *(_DWORD *)this = &off_456940;
  if ( v1 != nullptr )
  {
    Ogre::PhysicsScene::~PhysicsScene(v1);
    operator delete(v1);
  }
  v3 = *((void **)this + 10);
  if ( v3 != nullptr )
  {
    Ogre::PhysicsScene2::~PhysicsScene2(*((Ogre::PhysicsScene2 **)this + 10));
    operator delete(v3);
  }
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 5);
    if ( i >= (*((_DWORD *)this + 6) - v5) >> 2 )
      break;
    Ogre::BaseObject::release(*(_DWORD **)(4 * i + v5));
  }
  *((_DWORD *)this + 6) = v5;
  for ( j = 0; ; ++j )
  {
    v7 = *((_DWORD *)this + 2);
    if ( j >= (*((_DWORD *)this + 3) - v7) >> 2 )
      break;
    v8 = *(_DWORD **)(v7 + 4 * j);
    if ( v8 != nullptr )
    {
      Ogre::BaseObject::release(v8);
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * j) = 0;
    }
  }
  v9 = *((void **)this + 5);
  if ( v9 != nullptr )
    operator delete(v9);
  v10 = *((void **)this + 2);
  if ( v10 != nullptr )
    operator delete(v10);
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::GameScene::~GameScene()
// address: 0x0015E6B4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::GameScene::~GameScene(Ogre::GameScene *this)
{
  Ogre::GameScene::~GameScene(this);
  operator delete(this);
}


//======================================================================
// Ogre::GameScene::caculateShadowCamera(Ogre::Camera *,Ogre::Camera *)
// address: 0x0015E728   size: 0x246 (582 bytes)
//======================================================================
int __fastcall Ogre::GameScene::caculateShadowCamera(Ogre::GameScene *this, Ogre::Camera *a2, Ogre::Camera *a3)
{
  unsigned int i; // r1
  int v6; // r3
  int v7; // r5
  float v8; // r1
  float v9; // r6
  float v10; // r5
  float v11; // r0
  _DWORD *v12; // r3
  int v13; // r5
  float v14; // r4
  int v15; // r6
  const Ogre::Matrix4 *ViewMatrix; // r0
  int v17; // r7
  int v19; // r2
  float *WorldMatrix; // r0
  int v21; // r2
  unsigned int v22; // [sp+4h] [bp-F8h]
  int v23; // [sp+4h] [bp-F8h]
  int v24; // [sp+Ch] [bp-F0h]
  float v25; // [sp+14h] [bp-E8h]
  float v26; // [sp+18h] [bp-E4h]
  float v27; // [sp+1Ch] [bp-E0h]
  float v28; // [sp+20h] [bp-DCh] BYREF
  float v29; // [sp+24h] [bp-D8h]
  float v30; // [sp+28h] [bp-D4h]
  _DWORD v31[3]; // [sp+2Ch] [bp-D0h] BYREF
  float v32[16]; // [sp+38h] [bp-C4h] BYREF
  float v33[16]; // [sp+78h] [bp-84h] BYREF
  float v34[17]; // [sp+B8h] [bp-44h] BYREF

  for ( i = 0; ; i = v22 + 1 )
  {
    v22 = i;
    v6 = *((_DWORD *)this + 2);
    if ( i >= (*((_DWORD *)this + 3) - v6) >> 2 )
      break;
    v7 = *(_DWORD *)(4 * i + v6);
    if ( Ogre::BaseObject::isKindOf((Ogre::BaseObject *)v7, (const Ogre::RuntimeClass *)&Ogre::Light::m_RTTI) != 0
      && *(_BYTE *)(v7 + 216) != 0 )
    {
      if ( *(_DWORD *)(v7 + 212) != 2 )
      {
        v19 = Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton;
        *(_DWORD *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 72) = 0;
        *(_DWORD *)(v19 + 76) = -1082130432;
        *(_DWORD *)(v19 + 80) = 0;
        WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)v7);
        v27 = WorldMatrix[12];
        v26 = WorldMatrix[13];
        v25 = WorldMatrix[14];
        v21 = 1;
        goto LABEL_9;
      }
      v34[0] = 0.0;
      v34[1] = 0.0;
      v34[2] = 1.0;
      Ogre::Quaternion::rotate((float *)(v7 + 20), (float *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 72), v34);
      break;
    }
  }
  v21 = 0;
LABEL_9:
  v24 = v21;
  v31[1] = 0;
  v8 = *(float *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 72);
  v9 = *(float *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 76);
  v10 = *(float *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 80);
  v31[0] = 0;
  v31[2] = 1065353216;
  v28 = v8;
  v29 = v9;
  v30 = v10;
  v11 = j_sqrt((float)((float)((float)(v8 * v8) + (float)(v9 * v9)) + (float)(v10 * v10)));
  if ( v11 <= 0.00001 )
  {
    v28 = 0.0;
    v29 = 0.0;
    v30 = 0.0;
  }
  else
  {
    v28 = v28 * (float)(1.0 / v11);
    v29 = v29 * (float)(1.0 / v11);
    v30 = v30 * (float)(1.0 / v11);
  }
  v12 = (_DWORD *)((char *)a3 + 240);
  if ( v24 != 0 )
  {
    *v12 = 1114636288;
    v33[0] = v27 + 0.0;
    v33[1] = v26 + 500.0;
    v33[2] = v25 + 0.0;
    Ogre::WorldPos::WorldPos(v34, (const Ogre::Vector3 *)v33);
    Ogre::Camera::setLookDirect(
      a3,
      (const Ogre::WorldPos *)v34,
      (const Ogre::Vector3 *)&v28,
      (const Ogre::Vector3 *)v31);
    v13 = 1167867904;
    v14 = 10.0;
  }
  else
  {
    *v12 = 0;
    *((_DWORD *)a3 + 61) = 1187512320;
    v23 = *((_DWORD *)this + 12) - (int)(float)((float)(v29 * 20000.0) * 10.0);
    v15 = *((_DWORD *)this + 13) - (int)(float)((float)(v30 * 20000.0) * 10.0);
    LODWORD(v34[0]) = *((_DWORD *)this + 11) - (int)(float)((float)(v28 * 20000.0) * 10.0);
    LODWORD(v34[1]) = v23;
    LODWORD(v34[2]) = v15;
    Ogre::Camera::setLookDirect(
      a3,
      (const Ogre::WorldPos *)v34,
      (const Ogre::Vector3 *)&v28,
      (const Ogre::Vector3 *)v31);
    v13 = 1193033728;
    v14 = 5000.0;
  }
  *((float *)a3 + 63) = v14;
  *((_DWORD *)a3 + 64) = v13;
  Ogre::Camera::setRatio(a3, 1.0);
  (*(void (__fastcall **)(Ogre::Camera *, _DWORD))(*(_DWORD *)a3 + 40))(a3, 0);
  ViewMatrix = (const Ogre::Matrix4 *)Ogre::Camera::getViewMatrix(a3);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v32, ViewMatrix);
  Ogre::Camera::getProjectMatrix((Ogre::Camera *)v33, *(float *)&a3, v14);
  v17 = Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 4;
  Ogre::operator*((Ogre::Matrix4 *)v34, v32, v33);
  return Ogre::Matrix4::operator=(v17, v34);
}


//======================================================================
// Ogre::GameScene::GameScene(void)
// address: 0x0015EA14   size: 0x64 (100 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9GameSceneC1Ev'
Ogre::GameScene *__fastcall Ogre::GameScene::GameScene(Ogre::GameScene *this)
{
  Ogre::PhysicsScene *v2; // r5
  Ogre::PhysicsScene2 *v3; // r5
  int v4; // r5
  int v6; // r3
  _DWORD v7[3]; // [sp+0h] [bp-1Ch] BYREF
  _DWORD v8[4]; // [sp+Ch] [bp-10h] BYREF

  *((_DWORD *)this + 1) = 1;
  *(_DWORD *)this = &off_456940;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 32) = 0;
  v2 = (Ogre::PhysicsScene *)operator new(0xCu);
  Ogre::PhysicsScene::PhysicsScene(v2);
  *((_DWORD *)this + 9) = v2;
  v3 = (Ogre::PhysicsScene2 *)operator new(0x1Cu);
  Ogre::PhysicsScene2::PhysicsScene2(v3);
  *((_DWORD *)this + 10) = v3;
  memset(v8, 0, 12);
  Ogre::WorldPos::WorldPos(v7, (const Ogre::Vector3 *)v8);
  v4 = v7[2];
  *((_DWORD *)this + 11) = v7[0];
  v6 = v7[1];
  *((_DWORD *)this + 13) = v4;
  *((_DWORD *)this + 12) = v6;
  return this;
}


//======================================================================
// Ogre::GameScene::caculateReflectCamera(Ogre::Camera *,Ogre::Plane &,Ogre::Camera *,Ogre::Plane &)
// address: 0x0015EA7C   size: 0x1A0 (416 bytes)
//======================================================================
float __fastcall Ogre::GameScene::caculateReflectCamera(
        Ogre::GameScene *this,
        Ogre::Camera *a2,
        Ogre::Plane *a3,
        Ogre::Camera *a4,
        Ogre::Plane *a5)
{
  char *WorldMatrix; // r0
  float v8; // r7
  float v9; // r3
  float v10; // r6
  float v11; // r0
  char *v12; // r0
  float v13; // r0
  const Ogre::Matrix4 *ViewMatrix; // r0
  const Ogre::Matrix4 *ProjectMatrix; // r0
  float v16; // r0
  float result; // r0
  float v19[3]; // [sp+8h] [bp-12Ch] BYREF
  int v20; // [sp+14h] [bp-120h] BYREF
  int v21; // [sp+18h] [bp-11Ch]
  int v22; // [sp+1Ch] [bp-118h]
  float v23; // [sp+20h] [bp-114h] BYREF
  float v24; // [sp+24h] [bp-110h]
  float v25; // [sp+28h] [bp-10Ch]
  float v26; // [sp+2Ch] [bp-108h]
  float v27[16]; // [sp+30h] [bp-104h] BYREF
  float v28[16]; // [sp+70h] [bp-C4h] BYREF
  _DWORD v29[16]; // [sp+B0h] [bp-84h] BYREF
  _DWORD v30[17]; // [sp+F0h] [bp-44h] BYREF

  WorldMatrix = Ogre::MovableObject::getWorldMatrix(a2);
  v8 = *((float *)a3 + 3);
  v9 = *((float *)WorldMatrix + 14);
  v10 = *((float *)WorldMatrix + 13);
  v11 = *((float *)WorldMatrix + 12);
  v19[2] = v9;
  v19[0] = v11;
  v19[1] = (float)(v8 + v8) - v10;
  v20 = 0;
  v21 = 0;
  v22 = 1065353216;
  v12 = Ogre::MovableObject::getWorldMatrix(a2);
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v12, (Ogre::Vector3 *)&v20, (const Ogre::Vector3 *)&v20);
  v21 += 0x80000000;
  Ogre::WorldPos::WorldPos(v30, (const Ogre::Vector3 *)v19);
  v29[0] = 0;
  v29[1] = -1082130432;
  v29[2] = 0;
  Ogre::Camera::setLookDirect(a4, (const Ogre::WorldPos *)v30, (const Ogre::Vector3 *)&v20, (const Ogre::Vector3 *)v29);
  v13 = *((float *)a2 + 64) * 1.5;
  *((_DWORD *)a4 + 63) = *((_DWORD *)a2 + 63);
  *((float *)a4 + 64) = v13;
  Ogre::Camera::setRatio(a4, *((float *)a2 + 62));
  *((_DWORD *)a4 + 60) = *((_DWORD *)a2 + 60);
  (*(void (__fastcall **)(Ogre::Camera *, _DWORD))(*(_DWORD *)a4 + 40))(a4, 0);
  ViewMatrix = (const Ogre::Matrix4 *)Ogre::Camera::getViewMatrix(a4);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v27, ViewMatrix);
  ProjectMatrix = (const Ogre::Matrix4 *)Ogre::Camera::getProjectMatrix(a4);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v28, ProjectMatrix);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v29);
  Ogre::Matrix4::identity((Ogre::Matrix4 *)v29);
  v29[5] = -1090519040;
  v29[12] = 1056964608;
  v29[13] = 1056964608;
  v29[0] = 1056964608;
  Ogre::operator*((Ogre::Matrix4 *)v30, v27, v28);
  Ogre::Matrix4::inverse((Ogre::Matrix4 *)v30);
  Ogre::Matrix4::transpose((Ogre::Matrix4 *)v30);
  v24 = 1.0;
  v23 = 0.0;
  v25 = 0.0;
  LODWORD(v26) = COERCE_INT(v8 - 5.0) + 0x80000000;
  Ogre::Matrix4::transformVec4(v30, &v23);
  v16 = j_sqrt((float)((float)((float)(v23 * v23) + (float)(v24 * v24)) + (float)(v25 * v25)));
  *(float *)a5 = v23 / v16;
  *((float *)a5 + 1) = v24 / v16;
  *((float *)a5 + 2) = v25 / v16;
  result = v26 / v16;
  *((float *)a5 + 3) = result;
  return result;
}


//======================================================================
// Ogre::GameScene::PreloadSound(void)
// address: 0x0015EC24   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::GameScene::PreloadSound(int this)
{
  int v1; // r5
  int v2; // r4
  int v3; // r6
  int v4; // r1

  v1 = this;
  v2 = 0;
  v3 = (*(_DWORD *)(this + 24) - *(_DWORD *)(this + 20)) >> 2;
  while ( v2 != v3 )
  {
    v4 = *(_DWORD *)(4 * v2++ + *(_DWORD *)(v1 + 20));
    this = (*(int (__fastcall **)(int, int))(*(_DWORD *)Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton + 8))(
             Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton,
             v4 + 216);
  }
  return this;
}


//======================================================================
// Ogre::GameScene::getEffectObjects(std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>> &,Ogre::RenderableObject *)
// address: 0x0015F3C8   size: 0xD2 (210 bytes)
//======================================================================
unsigned int __fastcall Ogre::GameScene::getEffectObjects(int a1, int a2, int a3)
{
  int v6; // r1
  int v7; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r1
  int v11; // r3
  unsigned int result; // r0
  Ogre::BaseObject *v13; // r4
  __int64 v14; // r0
  int v15; // r2
  unsigned int i; // [sp+0h] [bp-34h]
  Ogre::BaseObject *v17; // [sp+Ch] [bp-28h] BYREF
  float v18; // [sp+10h] [bp-24h]
  _DWORD v19[6]; // [sp+14h] [bp-20h] BYREF
  int v20; // [sp+2Ch] [bp-8h]

  if ( *(_BYTE *)(a3 + 180) != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a3 + 68))(a3);
  v6 = *(_DWORD *)(a3 + 144);
  v19[0] = *(_DWORD *)(a3 + 140);
  v7 = *(_DWORD *)(a3 + 148);
  v19[1] = v6;
  v19[2] = v7;
  v8 = *(_DWORD *)(a3 + 164);
  v19[3] = *(_DWORD *)(a3 + 152);
  v9 = *(_DWORD *)(a3 + 156);
  v10 = *(_DWORD *)(a3 + 160);
  v20 = v8;
  v19[4] = v9;
  v19[5] = v10;
  for ( i = 0; ; ++i )
  {
    v11 = *(_DWORD *)(a1 + 8);
    result = i;
    if ( i >= (*(_DWORD *)(a1 + 12) - v11) >> 2 )
      break;
    v13 = *(Ogre::BaseObject **)(4 * i + v11);
    if ( *((_BYTE *)v13 + 183) != 0
      && (Ogre::BaseObject::isKindOf(v13, (const Ogre::RuntimeClass *)&Ogre::Light::m_RTTI) == 0
       || *((_BYTE *)v13 + 220) == 0
       || *(_BYTE *)(a3 + 232) == 0) )
    {
      v18 = COERCE_FLOAT((*(int (__fastcall **)(Ogre::BaseObject *, _DWORD *, int))(*(_DWORD *)v13 + 80))(v13, v19, v20));
      if ( v18 > 0.0 )
      {
        HIDWORD(v14) = *(_DWORD *)(a2 + 4);
        v15 = *(_DWORD *)(a2 + 8);
        v17 = v13;
        if ( HIDWORD(v14) == v15 )
        {
          LODWORD(v14) = a2;
          std::vector<Ogre::RenderableEffectInfo>::_M_insert_aux(v14, &v17);
        }
        else
        {
          if ( HIDWORD(v14) != 0 )
          {
            *(_DWORD *)HIDWORD(v14) = v13;
            *(float *)(HIDWORD(v14) + 4) = v18;
          }
          *(_DWORD *)(a2 + 4) += 8;
        }
      }
    }
  }
  return result;
}

