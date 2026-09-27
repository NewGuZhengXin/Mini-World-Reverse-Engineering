// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::NormalSceneRenderer

//======================================================================
// Ogre::NormalSceneRenderer::onLostDevice(void)
// address: 0x0015A620   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::NormalSceneRenderer::onLostDevice(Ogre::NormalSceneRenderer *this)
{
  ;
}


//======================================================================
// Ogre::NormalSceneRenderer::onRestoreDevice(void)
// address: 0x0015A622   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::NormalSceneRenderer::onRestoreDevice(Ogre::NormalSceneRenderer *this)
{
  ;
}


//======================================================================
// Ogre::NormalSceneRenderer::~NormalSceneRenderer()
// address: 0x0015A6A0   size: 0x52 (82 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19NormalSceneRendererD1Ev'
void __fastcall Ogre::NormalSceneRenderer::~NormalSceneRenderer(Ogre::NormalSceneRenderer *this)
{
  *(_DWORD *)this = &off_4567F8;
  if ( Ogre::SceneRenderer::ms_bBorderBackSceneAlreadyExist != 0 )
  {
    if ( Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton != 0 )
      Ogre::BaseObject::release((_DWORD *)Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton);
    if ( Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton != 0 )
      Ogre::BaseObject::release((_DWORD *)Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton);
    if ( Ogre::Singleton<Ogre::DeathGameScene>::ms_Singleton != 0 )
      Ogre::BaseObject::release((_DWORD *)Ogre::Singleton<Ogre::DeathGameScene>::ms_Singleton);
  }
  Ogre::SceneRenderer::~SceneRenderer(this);
}


//======================================================================
// Ogre::NormalSceneRenderer::~NormalSceneRenderer()
// address: 0x0015A70C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::NormalSceneRenderer::~NormalSceneRenderer(Ogre::NormalSceneRenderer *this)
{
  Ogre::NormalSceneRenderer::~NormalSceneRenderer(this);
  operator delete(this);
}


//======================================================================
// Ogre::NormalSceneRenderer::NormalSceneRenderer(void)
// address: 0x0015A8CC   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19NormalSceneRendererC1Ev'
Ogre::NormalSceneRenderer *__fastcall Ogre::NormalSceneRenderer::NormalSceneRenderer(Ogre::NormalSceneRenderer *this)
{
  int v2; // r3
  _DWORD *v3; // r1

  Ogre::SceneRenderer::SceneRenderer(this);
  *(_DWORD *)this = &off_4567F8;
  v2 = 0;
  *((_DWORD *)this + 160) = 0;
  do
  {
    v3 = (_DWORD *)((char *)this + v2 + 752);
    v2 += 20;
    *v3 = -1082130432;
  }
  while ( v2 != 320 );
  if ( Ogre::SceneRenderer::ms_bBorderBackSceneAlreadyExist == 0 )
    Ogre::SceneRenderer::ms_bBorderBackSceneAlreadyExist = 1;
  return this;
}


//======================================================================
// Ogre::NormalSceneRenderer::clearClipPlane(void)
// address: 0x0015A91C   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::NormalSceneRenderer::clearClipPlane(int this)
{
  *(_DWORD *)(this + 640) = 0;
  return this;
}


//======================================================================
// Ogre::NormalSceneRenderer::setClipPlane(unsigned int,float *)
// address: 0x0015A926   size: 0x24 (36 bytes)
//======================================================================
void *__fastcall Ogre::NormalSceneRenderer::setClipPlane(Ogre::NormalSceneRenderer *this, unsigned int a2, float *a3)
{
  *((_DWORD *)this + 160) |= 1 << a2;
  return j_memcpy((char *)this + 16 * a2 + 644, a3, 0x10u);
}


//======================================================================
// Ogre::NormalSceneRenderer::shakeCamera(Ogre::Vector3 const&)
// address: 0x0015A990   size: 0x384 (900 bytes)
//======================================================================
int __fastcall Ogre::NormalSceneRenderer::shakeCamera(Ogre::Camera **this, const Ogre::Vector3 *a2)
{
  Ogre::Camera *v3; // r0
  int result; // r0
  float *v5; // r4
  int v6; // r5
  float v7; // r0
  float v8; // r0
  const Ogre::Matrix4 *ProjectMatrix; // r0
  int v10; // r0
  int v11; // r0
  float v12; // r6
  int v13; // r0
  float v14; // r5
  float v15; // r0
  float v16; // r4
  const Ogre::Matrix4 *ViewMatrix; // r0
  float v18; // r4
  float *v19; // r3
  float v20; // r0
  Ogre::Camera *v21; // r0
  float v22; // [sp+Ch] [bp-D8h]
  float v24; // [sp+10h] [bp-D4h]
  float v25; // [sp+14h] [bp-D0h]
  float v26; // [sp+14h] [bp-D0h]
  double v27; // [sp+18h] [bp-CCh]
  float v28; // [sp+20h] [bp-C4h]
  float v29; // [sp+20h] [bp-C4h]
  Ogre::Camera *v30; // [sp+24h] [bp-C0h]
  float v31; // [sp+28h] [bp-BCh]
  float v32; // [sp+2Ch] [bp-B8h]
  float v33; // [sp+30h] [bp-B4h]
  float v34; // [sp+34h] [bp-B0h]
  float v35[3]; // [sp+3Ch] [bp-A8h] BYREF
  _DWORD v36[3]; // [sp+48h] [bp-9Ch] BYREF
  _DWORD v37[3]; // [sp+54h] [bp-90h] BYREF
  float v38[10]; // [sp+60h] [bp-84h] BYREF
  float v39; // [sp+88h] [bp-5Ch]
  int v40; // [sp+98h] [bp-4Ch]
  float v41[17]; // [sp+A0h] [bp-44h] BYREF

  if ( Ogre::Root::getDistort((Ogre::Root *)Ogre::Singleton<Ogre::Root>::ms_Singleton) != 0 )
  {
    v5 = (float *)(this + 188);
    v6 = 16;
    v22 = 0.0;
    do
    {
      if ( *v5 > 0.0 )
      {
        v7 = *(v5 - 2) - *((float *)a2 + 1);
        v28 = *(v5 - 1) - *((float *)a2 + 2);
        v8 = j_sqrt((float)((float)((float)((float)(*(v5 - 3) - *(float *)a2) * (float)(*(v5 - 3) - *(float *)a2))
                                  + (float)(v7 * v7))
                          + (float)(v28 * v28)));
        if ( (float)((float)((float)(v5[1] - v8) / v5[1]) * *v5) > v22 )
          v22 = (float)((float)(v5[1] - v8) / v5[1]) * *v5;
      }
      --v6;
      v5 += 5;
    }
    while ( v6 != 0 );
    if ( v22 > 0.0 )
    {
      ProjectMatrix = (const Ogre::Matrix4 *)Ogre::Camera::getProjectMatrix(*(this + 146));
      Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v38, ProjectMatrix);
      v10 = j_lrand48();
      v24 = (float)((float)((float)v10 + (float)v10) * 4.6566e-10) - 1.0;
      v11 = j_lrand48();
      v12 = (float)((float)((float)v11 + (float)v11) * 4.6566e-10) - 1.0;
      v13 = j_lrand48();
      v14 = (float)((float)((float)v13 + (float)v13) * 4.6566e-10) - 1.0;
      v15 = j_sqrt((float)((float)((float)(v24 * v24) + (float)(v12 * v12)) + (float)(v14 * v14)));
      if ( v15 <= 0.00001 )
      {
        v16 = 0.0;
        v25 = 0.0;
        v29 = 0.0;
      }
      else
      {
        v29 = v24 * (float)(1.0 / v15);
        v25 = v12 * (float)(1.0 / v15);
        v16 = v14 * (float)(1.0 / v15);
      }
      ViewMatrix = (const Ogre::Matrix4 *)Ogre::Camera::getViewMatrix(*(this + 146));
      Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v41, ViewMatrix);
      v35[0] = v41[2] + (float)((float)(v29 * v22) / 100.0);
      v35[1] = (float)((float)(v25 * v22) / 100.0) + v41[6];
      v35[2] = (float)((float)(v16 * v22) / 100.0) + v41[10];
      Ogre::Matrix4::inverse((Ogre::Matrix4 *)v41);
      v31 = (float)((float)(v25 * 20.0) * v22) + v41[13];
      v32 = (float)((float)(v16 * 20.0) * v22) + v41[14];
      v26 = COERCE_FLOAT(v40 + 0x80000000) / v39;
      v18 = v38[5];
      v33 = (float)(v39 * v26) / (float)(v39 - 1.0);
      v27 = j_atan(v38[5]);
      v34 = v18 / v38[0];
      v30 = *(this + 147);
      v37[0] = (int)(float)((float)((float)((float)(v29 * 20.0) * v22) + v41[12]) * 10.0);
      v37[1] = (int)(float)(v31 * 10.0);
      v36[0] = 0;
      v36[1] = 1065353216;
      v37[2] = (int)(float)(v32 * 10.0);
      v36[2] = 0;
      Ogre::Camera::setLookDirect(
        v30,
        (const Ogre::WorldPos *)v37,
        (const Ogre::Vector3 *)v35,
        (const Ogre::Vector3 *)v36);
      v19 = (float *)((char *)*(this + 147) + 252);
      *v19 = v26;
      v19[1] = v33;
      Ogre::Camera::setRatio(*(this + 147), v34);
      v20 = 90.0 - v27 / 3.1415925 * 180.0 + 90.0 - v27 / 3.1415925 * 180.0;
      *((float *)*(this + 147) + 60) = v20;
      result = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 147) + 40))(*(this + 147), 0);
      *(this + 148) = *(this + 147);
    }
    else
    {
      v21 = *(this + 146);
      *(this + 148) = v21;
      return (*(int (__fastcall **)(Ogre::Camera *, _DWORD))(*(_DWORD *)v21 + 40))(v21, 0);
    }
  }
  else
  {
    v3 = *(this + 146);
    *(this + 148) = v3;
    return (*(int (__fastcall **)(Ogre::Camera *))(*(_DWORD *)v3 + 40))(v3);
  }
  return result;
}


//======================================================================
// Ogre::NormalSceneRenderer::allocCameraShakeChannel(float)
// address: 0x0015AD48   size: 0x5A (90 bytes)
//======================================================================
int __fastcall Ogre::NormalSceneRenderer::allocCameraShakeChannel(Ogre::NormalSceneRenderer *this, float a2)
{
  int i; // r7
  float *v3; // r6
  _DWORD *v4; // r5

  for ( i = 0; i != 16; ++i )
  {
    v3 = (float *)((char *)this + 20 * i + 752);
    if ( *v3 < 0.0 )
    {
      v4 = (_DWORD *)((char *)this + 20 * i + 736);
      *v3 = 0.0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
      *((float *)this + 5 * i + 189) = a2;
      return i;
    }
  }
  return -1;
}


//======================================================================
// Ogre::NormalSceneRenderer::freeCameraShakeChannel(int)
// address: 0x0015ADA4   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::NormalSceneRenderer::freeCameraShakeChannel(Ogre::NormalSceneRenderer *this, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 20 * a2 + 752);
  *result = -1082130432;
  return result;
}


//======================================================================
// Ogre::NormalSceneRenderer::setCameraShake(int,float,Ogre::Vector3 const&)
// address: 0x0015ADBC   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall Ogre::NormalSceneRenderer::setCameraShake(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r1
  _DWORD *result; // r0

  v4 = 20 * a2;
  *(_DWORD *)(a1 + v4 + 752) = a3;
  result = (_DWORD *)(a1 + v4 + 736);
  result[1] = *a4;
  result[2] = a4[1];
  result[3] = a4[2];
  return result;
}


//======================================================================
// Ogre::NormalSceneRenderer::doRender(void)
// address: 0x0015B500   size: 0x85E (2142 bytes)
//======================================================================
int __fastcall Ogre::NormalSceneRenderer::doRender(Ogre::NormalSceneRenderer *this)
{
  int v2; // r3
  int v3; // r1
  char *WorldMatrix; // r0
  float v5; // r2
  float v6; // r1
  int v7; // r3
  float v8; // r0
  _DWORD *v9; // r5
  int v10; // r3
  int v11; // r3
  int *v12; // r3
  int v13; // r0
  int v14; // r3
  int v15; // r3
  int v16; // r4
  Ogre::GameScene *v18; // r1
  Ogre::Camera *v19; // r3
  char *v20; // r0
  float v21; // r2
  float v22; // r6
  Ogre::MovableObject *v23; // r1
  char *v24; // r0
  int v25; // r2
  _DWORD *v26; // r3
  float *ViewMatrix; // r5
  float *ProjectMatrix; // r0
  float v29; // r0
  _DWORD *v30; // [sp+B0h] [bp-ACCh]
  Ogre::Camera *v31; // [sp+B4h] [bp-AC8h]
  Ogre::Camera *v32; // [sp+B4h] [bp-AC8h]
  int v33; // [sp+B8h] [bp-AC4h]
  _DWORD *v34; // [sp+BCh] [bp-AC0h]
  _DWORD *v35; // [sp+BCh] [bp-AC0h]
  _BOOL4 v36; // [sp+C4h] [bp-AB8h]
  float v37; // [sp+C4h] [bp-AB8h]
  _BOOL4 v38; // [sp+C8h] [bp-AB4h]
  float v39; // [sp+C8h] [bp-AB4h]
  int v40; // [sp+CCh] [bp-AB0h]
  _DWORD v41[3]; // [sp+D4h] [bp-AA8h] BYREF
  float v42; // [sp+E0h] [bp-A9Ch] BYREF
  float v43; // [sp+E4h] [bp-A98h]
  float v44; // [sp+E8h] [bp-A94h]
  float v45; // [sp+ECh] [bp-A90h]
  float v46[4]; // [sp+F0h] [bp-A8Ch] BYREF
  float v47[6]; // [sp+100h] [bp-A7Ch] BYREF
  _DWORD v48[16]; // [sp+118h] [bp-A64h] BYREF
  _BYTE v49[220]; // [sp+158h] [bp-A24h] BYREF
  int v50; // [sp+234h] [bp-948h]
  int v51; // [sp+238h] [bp-944h]
  int v52; // [sp+23Ch] [bp-940h]
  _DWORD v53[262]; // [sp+250h] [bp-92Ch] BYREF
  _DWORD v54[325]; // [sp+668h] [bp-514h] BYREF

  v2 = Ogre::Singleton<Ogre::SceneManager>::ms_Singleton;
  *((_DWORD *)this + 143) = *(_DWORD *)(*(_DWORD *)Ogre::Singleton<Ogre::SceneManager>::ms_Singleton + 8);
  *((_DWORD *)this + 144) = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v3 = *((_DWORD *)this + 154);
  if ( v3 == 0 )
    sub_15BD5E();
  Ogre::WorldPos::toVector3((Ogre::WorldPos *)v54, (_DWORD *)(v3 + 44));
  Ogre::NormalSceneRenderer::shakeCamera((Ogre::Camera **)this, (const Ogre::Vector3 *)v54);
  (*(void (__fastcall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 154) + 60))(
    *((_DWORD *)this + 154),
    *((_DWORD *)this + 148),
    1);
  j_memset(v47, 0, sizeof(v47));
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(*((Ogre::MovableObject **)this + 148));
  v5 = *((float *)WorldMatrix + 14);
  v6 = *((float *)WorldMatrix + 13);
  v47[2] = 3.4028e38;
  v7 = *((_DWORD *)this + 148);
  v8 = *((float *)WorldMatrix + 12);
  v47[5] = v5;
  v47[4] = v6;
  v47[3] = v8;
  Ogre::CullResult::getRenderPassRequired(*(_DWORD *)(v7 + 212), v47);
  Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v49);
  (*(void (__fastcall **)(_DWORD, _BYTE *))(**((_DWORD **)this + 154) + 48))(*((_DWORD *)this + 154), v49);
  v9 = (_DWORD *)Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton;
  if ( Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton != 0
    && *(_DWORD *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 68) != 0
    && *(_DWORD *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 108) != 0 )
  {
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 154) + 64))(
      *((_DWORD *)this + 154),
      *((_DWORD *)this + 148),
      *((_DWORD *)this + 151));
    (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 151) + 40))(*((_DWORD *)this + 151), 0);
    (*(void (__fastcall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 154) + 60))(
      *((_DWORD *)this + 154),
      *((_DWORD *)this + 151),
      3);
    Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v54);
    memset(&v54[290], 0, 16);
    Ogre::SceneRenderer::RenderResult(
      (int)this,
      (int)v54,
      *(_DWORD *)(*((_DWORD *)this + 151) + 212),
      v9[27],
      4,
      0,
      1065353216,
      0,
      0,
      nullptr,
      3,
      v9[22]);
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 151) + 212) + 556) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 151) + 212)
                                                                              + 552);
    v50 = v9[17];
    Ogre::Matrix4::operator=(v53, v9 + 1);
    memset(&v53[228], 0, 16);
    v53[48] = v9[21];
  }
  v34 = (_DWORD *)Ogre::Singleton<Ogre::ReflectEffect>::ms_Singleton;
  if ( Ogre::Singleton<Ogre::ReflectEffect>::ms_Singleton != 0 )
  {
    if ( *(_DWORD *)(Ogre::Singleton<Ogre::ReflectEffect>::ms_Singleton + 704) != 0
      && *(_DWORD *)(Ogre::Singleton<Ogre::ReflectEffect>::ms_Singleton + 724) != 0 )
    {
      v46[0] = 0.0;
      v47[1] = 6300.0;
      v46[2] = 0.0;
      v46[3] = 6300.0;
      v18 = *((Ogre::GameScene **)this + 154);
      v19 = *((Ogre::Camera **)this + 148);
      v46[1] = -1.0;
      Ogre::GameScene::caculateReflectCamera(
        v18,
        v19,
        (Ogre::Plane *)v46,
        *((Ogre::Camera **)this + 152),
        (Ogre::Plane *)v48);
      (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 152) + 40))(*((_DWORD *)this + 152), 0);
      (*(void (__fastcall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 154) + 60))(
        *((_DWORD *)this + 154),
        *((_DWORD *)this + 152),
        2);
      Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v54);
      Ogre::SceneRenderer::RenderResult(
        (int)this,
        (int)v54,
        *(_DWORD *)(*((_DWORD *)this + 152) + 212),
        v34[181],
        6,
        0,
        1065353216,
        0,
        1,
        v48,
        2,
        -1);
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 152) + 212) + 556) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 152)
                                                                                            + 212)
                                                                                + 552);
      v51 = v34[176];
    }
    if ( v34[176] != 0 && v34[181] != 0 && (LOBYTE(v47[0]) & 0x80) != 0 )
    {
      v20 = Ogre::MovableObject::getWorldMatrix(*((Ogre::MovableObject **)this + 148));
      v21 = *((float *)v20 + 12);
      v22 = *((float *)v20 + 13);
      v23 = *((Ogre::MovableObject **)this + 148);
      v39 = *((float *)v20 + 14);
      v41[2] = 1065353216;
      v41[0] = 0;
      v41[1] = 0;
      v37 = v21;
      v24 = Ogre::MovableObject::getWorldMatrix(v23);
      Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v24, (Ogre::Vector3 *)v41, (const Ogre::Vector3 *)v41);
      v32 = *((Ogre::Camera **)this + 152);
      v54[0] = (int)(float)(v37 * 10.0);
      v54[1] = (int)(float)(v22 * 10.0);
      v48[1] = 1065353216;
      v54[2] = (int)(float)(v39 * 10.0);
      v48[0] = 0;
      v48[2] = 0;
      Ogre::Camera::setLookDirect(
        v32,
        (const Ogre::WorldPos *)v54,
        (const Ogre::Vector3 *)v41,
        (const Ogre::Vector3 *)v48);
      v25 = *(_DWORD *)(*((_DWORD *)this + 148) + 256);
      v26 = (_DWORD *)(*((_DWORD *)this + 152) + 252);
      *v26 = *(_DWORD *)(*((_DWORD *)this + 148) + 252);
      v26[1] = v25;
      Ogre::Camera::setRatio(*((Ogre::Camera **)this + 152), *(float *)(*((_DWORD *)this + 148) + 248));
      *(_DWORD *)(*((_DWORD *)this + 152) + 240) = *(_DWORD *)(*((_DWORD *)this + 148) + 240);
      (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 152) + 40))(*((_DWORD *)this + 152), 0);
      (*(void (__fastcall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 154) + 60))(
        *((_DWORD *)this + 154),
        *((_DWORD *)this + 152),
        7);
      ViewMatrix = (float *)Ogre::Camera::getViewMatrix(*((Ogre::Camera **)this + 152));
      ProjectMatrix = (float *)Ogre::Camera::getProjectMatrix(*((Ogre::Camera **)this + 152));
      Ogre::operator*((Ogre::Matrix4 *)v48, ViewMatrix, ProjectMatrix);
      Ogre::Matrix4::inverse((Ogre::Matrix4 *)v48);
      Ogre::Matrix4::transpose((Ogre::Matrix4 *)v48);
      v42 = 0.0;
      v43 = -1.0;
      v45 = v47[1] + 5.0;
      v44 = 0.0;
      Ogre::Matrix4::transformVec4(v48, &v42);
      v29 = j_sqrt((float)((float)((float)(v42 * v42) + (float)(v43 * v43)) + (float)(v44 * v44)));
      v46[0] = v42 / v29;
      v46[1] = v43 / v29;
      v46[2] = v44 / v29;
      v46[3] = v45 / v29;
      Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v54);
      Ogre::SceneRenderer::RenderResult(
        (int)this,
        (int)v54,
        *(_DWORD *)(*((_DWORD *)this + 152) + 212),
        v34[182],
        6,
        0,
        1065353216,
        0,
        1,
        v46,
        7,
        -1);
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 152) + 212) + 556) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 152)
                                                                                            + 212)
                                                                                + 552);
      v52 = v34[177];
    }
  }
  v30 = (_DWORD *)Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton;
  v35 = (_DWORD *)Ogre::Singleton<Ogre::DistortEffect>::ms_Singleton;
  if ( Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton != 0 )
  {
    v10 = *(_DWORD *)(Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton + 680);
    if ( v10 != 0 )
    {
      v36 = *(_DWORD *)(Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton + 688) != 0;
      goto LABEL_18;
    }
  }
  else
  {
    v10 = 0;
  }
  v36 = v10;
LABEL_18:
  if ( Ogre::Singleton<Ogre::DistortEffect>::ms_Singleton != 0 )
  {
    v11 = *(_DWORD *)(Ogre::Singleton<Ogre::DistortEffect>::ms_Singleton + 648);
    if ( v11 != 0 && (v11 = *(_DWORD *)(Ogre::Singleton<Ogre::DistortEffect>::ms_Singleton + 652)) != 0 )
      v38 = *(_DWORD *)(Ogre::Singleton<Ogre::DistortEffect>::ms_Singleton + 644) != 0;
    else
      v38 = v11;
  }
  else
  {
    v38 = false;
  }
  v31 = *((Ogre::Camera **)this + 153);
  if ( v38 )
  {
    v31 = *(Ogre::Camera **)(Ogre::Singleton<Ogre::DistortEffect>::ms_Singleton + 644);
    Ogre::SceneRenderer::RenderResult(
      (int)this,
      (int)v49,
      *(_DWORD *)(*((_DWORD *)this + 148) + 212),
      *(_DWORD *)(Ogre::Singleton<Ogre::DistortEffect>::ms_Singleton + 652),
      6,
      -2139062144,
      1065353216,
      0,
      0,
      nullptr,
      5,
      -1);
  }
  else if ( v36 )
  {
    v31 = *(Ogre::Camera **)(Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton + 644);
  }
  v33 = *(_BYTE *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 74) != 0
      ? Ogre::Root::getBackSceneProcess((Ogre::Root *)Ogre::Singleton<Ogre::Root>::ms_Singleton)
      : 0;
  Ogre::SceneRenderer::RenderResult(
    (int)this,
    (int)v49,
    *(_DWORD *)(*((_DWORD *)this + 148) + 212),
    (int)v31,
    6,
    *((_DWORD *)this + 156),
    1065353216,
    *((_DWORD *)this + 158),
    0,
    nullptr,
    1,
    -1);
  if ( v33 != 0 )
  {
    Ogre::SceneRenderer::AddActorToBackScene((int)this, *(_DWORD *)(*((_DWORD *)this + 148) + 212));
    *(_DWORD *)(*((_DWORD *)this + 149) + 556) = *(_DWORD *)(*((_DWORD *)this + 149) + 552);
    v12 = (int *)(*((_DWORD *)this + 148) + 212);
    v13 = *v12;
    *v12 = *((_DWORD *)this + 149);
    v40 = v13;
    if ( Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton != 0 )
      (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton + 60))(
        Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton,
        *((_DWORD *)this + 148),
        1);
    Ogre::BackGameScene::setActiveBackMaterial0(Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton);
    Ogre::SceneRenderer::RenderResult(
      (int)this,
      (int)v49,
      *(_DWORD *)(*((_DWORD *)this + 148) + 212),
      (int)v31,
      1,
      *((_DWORD *)this + 156),
      *((_DWORD *)this + 157),
      *((_DWORD *)this + 158),
      0,
      nullptr,
      1,
      -1);
    Ogre::BackGameScene::setActiveBackMaterial1(Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton);
    Ogre::SceneRenderer::RenderResult(
      (int)this,
      (int)v49,
      *(_DWORD *)(*((_DWORD *)this + 148) + 212),
      (int)v31,
      4,
      *((_DWORD *)this + 156),
      *((_DWORD *)this + 157),
      *((_DWORD *)this + 158),
      0,
      nullptr,
      1,
      -1);
    Ogre::BackGameScene::setNoBack(Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton);
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 148) + 212) + 556) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 148) + 212)
                                                                              + 552);
    *(_DWORD *)(*((_DWORD *)this + 148) + 212) = v40;
  }
  *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 148) + 212) + 556) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 148) + 212)
                                                                            + 552);
  if ( Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton != 0 )
  {
    (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton + 60))(
      Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton,
      *((_DWORD *)this + 148),
      1);
    Ogre::BorderGameScene::setActiveBorderMaterial((Ogre::BorderGameScene *)Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton);
    Ogre::SceneRenderer::RenderResult(
      (int)this,
      (int)v49,
      *(_DWORD *)(*((_DWORD *)this + 148) + 212),
      (int)v31,
      5,
      *((_DWORD *)this + 156),
      1065353216,
      *((_DWORD *)this + 158),
      0,
      nullptr,
      1,
      -1);
    Ogre::BorderGameScene::setActiveBorderMaterial1((Ogre::BorderGameScene *)Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton);
    Ogre::SceneRenderer::RenderResult(
      (int)this,
      (int)v49,
      *(_DWORD *)(*((_DWORD *)this + 148) + 212),
      (int)v31,
      0,
      *((_DWORD *)this + 156),
      1065353216,
      *((_DWORD *)this + 158),
      0,
      nullptr,
      1,
      -1);
    Ogre::BorderGameScene::setNoBorder((Ogre::BorderGameScene *)Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton);
  }
  if ( v38 )
  {
    if ( v36 )
      v35[164] = v30[161];
    else
      v35[164] = *((_DWORD *)this + 153);
    v14 = *((_DWORD *)this + 144);
    v35[143] = *((_DWORD *)this + 143);
    v35[144] = v14;
    (*(void (__fastcall **)(_DWORD *))(*v35 + 16))(v35);
  }
  if ( v36 )
  {
    v30[169] = *((_DWORD *)this + 153);
    v15 = *((_DWORD *)this + 143);
    v16 = *((_DWORD *)this + 144);
    v30[143] = v15;
    v30[144] = v16;
    (*(void (__fastcall **)(_DWORD *))(*v30 + 16))(v30);
  }
  if ( Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton != 0 )
    Ogre::BackGameScene::clear(Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton);
  return sub_15BD5E();
}

