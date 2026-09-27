// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::AmbientManager

//======================================================================
// Ogre::AmbientManager::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x0017E9C8   size: 0xAE (174 bytes)
//======================================================================
Ogre::Resource *__fastcall Ogre::AmbientManager::ResourceLoaded(
        Ogre::AmbientManager *this,
        Ogre::Resource *a2,
        unsigned int a3)
{
  int v4; // r6
  int v5; // r3
  Ogre::Resource *result; // r0
  Ogre::BaseObject *v7; // r4
  Ogre::Resource *v8; // r4
  int v9[4]; // [sp+4h] [bp-10h] BYREF

  v4 = 1376;
  v5 = *((_DWORD *)this + 344);
  result = a2;
  if ( a3 == v5 )
  {
    if ( a2 != nullptr )
    {
      result = Ogre::createObjectFromResource(a2, a2);
      v7 = result;
      if ( result != nullptr )
      {
        *((_DWORD *)result + 9) = 1084227584;
        *((_DWORD *)result + 10) = 1084227584;
        *((_DWORD *)result + 11) = 1084227584;
        (*(void (__fastcall **)(Ogre::Resource *))(*(_DWORD *)result + 64))(result);
        (*(void (__fastcall **)(Ogre::BaseObject *, _DWORD))(*(_DWORD *)v7 + 40))(v7, 0);
        (*(void (__fastcall **)(Ogre::BaseObject *, _DWORD, _DWORD))(*(_DWORD *)v7 + 48))(
          v7,
          *((_DWORD *)this + 347),
          0);
        if ( Ogre::BaseObject::isKindOf(v7, (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI) != 0 )
          (*(void (__fastcall **)(Ogre::BaseObject *, int))(*(_DWORD *)v7 + 88))(v7, 2);
        *((_DWORD *)this + 342) = v7;
        Ogre::WorldPos::WorldPos(v9, (Ogre::AmbientManager *)((char *)this + 4));
        result = (Ogre::Resource *)Ogre::MovableObject::setPosition((int *)v7, v9);
      }
    }
  }
  else
  {
    v4 = 1380;
    if ( a3 != *((_DWORD *)this + 345) )
      return result;
    if ( a2 != nullptr )
    {
      result = Ogre::createObjectFromResource(a2, a2);
      v8 = result;
      if ( result != nullptr )
      {
        (*(void (__fastcall **)(Ogre::Resource *, _DWORD))(*(_DWORD *)result + 40))(result, 0);
        result = (Ogre::Resource *)(*(int (__fastcall **)(Ogre::Resource *, _DWORD, _DWORD))(*(_DWORD *)v8 + 48))(
                                     v8,
                                     *((_DWORD *)this + 347),
                                     0);
        *((_DWORD *)this + 343) = v8;
      }
    }
  }
  *(_DWORD *)((char *)this + v4) = 0;
  return result;
}


//======================================================================
// Ogre::AmbientManager::AmbientManager(Ogre::GameScene *)
// address: 0x0017EA8C   size: 0x25C (604 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14AmbientManagerC1EPNS_9GameSceneE'
Ogre::AmbientManager *__fastcall Ogre::AmbientManager::AmbientManager(Ogre::AmbientManager *this, Ogre::GameScene *a2)
{
  char *v2; // r12
  char *v3; // r1
  char *v5; // r7
  char *v6; // r6
  char *v7; // r5
  int v8; // r2
  char *v9; // r0
  char *v10; // r0
  char *v11; // r0
  _DWORD *v12; // r12
  int v13; // r2
  int v14; // r3
  int v15; // r3
  int v16; // r7
  _DWORD *v17; // r3
  _DWORD *v18; // r3
  _DWORD *v19; // r12
  int v20; // r3
  int v21; // r7
  int v22; // r6
  int v23; // r7
  int v24; // r6
  int v25; // r6
  int v27; // [sp+0h] [bp-1Ch]
  int v28; // [sp+0h] [bp-1Ch]
  _DWORD *v29; // [sp+Ch] [bp-10h]
  _DWORD *v30; // [sp+Ch] [bp-10h]
  char *v31; // [sp+10h] [bp-Ch]

  *(_DWORD *)this = &off_457A08;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v2 = (char *)this + 1376;
  v31 = (char *)this + 16;
  v3 = (char *)this + 16;
  v5 = (char *)this + 20;
  v6 = (char *)this + 36;
  v7 = (char *)this + 68;
  do
  {
    v8 = v3 - v31;
    v9 = &v5[v8];
    *(_DWORD *)&v5[v8] = 1065353216;
    *((_DWORD *)v9 + 1) = 1065353216;
    *((_DWORD *)v9 + 2) = 1065353216;
    *((_DWORD *)v9 + 3) = 1065353216;
    v10 = &v6[v3 - v31];
    *(_DWORD *)&v6[v8] = 1065353216;
    *((_DWORD *)v10 + 1) = 1065353216;
    *((_DWORD *)v10 + 2) = 1065353216;
    *((_DWORD *)v10 + 3) = 1065353216;
    v11 = &v7[v3 - v31];
    *(_DWORD *)&v7[v8] = 1065353216;
    *((_DWORD *)v11 + 1) = 1065353216;
    *((_DWORD *)v11 + 2) = 1065353216;
    *((_DWORD *)v11 + 3) = 1065353216;
    *(_DWORD *)&v31[v8 + 76] = 1065353216;
    *((_DWORD *)v3 + 20) = 1065353216;
    *((_DWORD *)v3 + 21) = 1065353216;
    *((_DWORD *)v3 + 22) = 1065353216;
    *(_DWORD *)&v31[v8 + 92] = 1065353216;
    *((_DWORD *)v3 + 24) = 1065353216;
    *((_DWORD *)v3 + 25) = 1065353216;
    *((_DWORD *)v3 + 26) = 1065353216;
    *(_DWORD *)&v31[v8 + 116] = 1065353216;
    *((_DWORD *)v3 + 30) = 1065353216;
    *((_DWORD *)v3 + 31) = 1065353216;
    *((_DWORD *)v3 + 32) = 1065353216;
    v3 += 680;
  }
  while ( v3 != v2 );
  *((_DWORD *)this + 344) = 0;
  *((_DWORD *)this + 345) = 0;
  *((_DWORD *)this + 346) = 0;
  *((_DWORD *)this + 347) = a2;
  *((_DWORD *)this + 348) = 0;
  *((_DWORD *)this + 349) = 1056964608;
  *((_DWORD *)this + 350) = 0;
  *((_DWORD *)this + 351) = 0;
  *((_DWORD *)this + 352) = 0;
  *((_BYTE *)this + 1416) = 1;
  v29 = (_DWORD *)operator new(0x120u);
  Ogre::Light::Light((int)v29, 2);
  *((_DWORD *)this + 350) = v29;
  v12 = v29 + 60;
  v29[64] = 1061997773;
  v29[65] = 1061997773;
  v29[66] = 1061997773;
  v29[67] = 1065353216;
  v13 = v29[65];
  v14 = v29[66];
  v29[60] = v29[64];
  v29[61] = v13;
  v29[62] = v14;
  v27 = v29[67];
  v29[63] = v27;
  v29 += 56;
  v15 = v12[1];
  v16 = v12[2];
  *v29 = *v12;
  v29[1] = v15;
  v29[2] = v16;
  v29[3] = v27;
  v17 = *((_DWORD **)this + 350);
  v17[60] = 1045220557;
  v17[61] = 1045220557;
  v17[62] = 1045220557;
  v17[63] = 1065353216;
  v18 = (_DWORD *)(*((_DWORD *)this + 350) + 252);
  v18[1] = 1065353216;
  v18[2] = 1065353216;
  v18[3] = 1065353216;
  v18[4] = 1065353216;
  *(_DWORD *)(*((_DWORD *)this + 350) + 272) = 1090519040;
  *(_BYTE *)(*((_DWORD *)this + 350) + 209) = 1;
  *(_BYTE *)(*((_DWORD *)this + 350) + 183) = 1;
  *(_BYTE *)(*((_DWORD *)this + 350) + 218) = 1;
  *(_BYTE *)(*((_DWORD *)this + 350) + 217) = 1;
  (*(void (__fastcall **)(_DWORD, Ogre::GameScene *, _DWORD))(**((_DWORD **)this + 350) + 48))(
    *((_DWORD *)this + 350),
    a2,
    0);
  v30 = (_DWORD *)operator new(0x120u);
  Ogre::Light::Light((int)v30, 1);
  *((_DWORD *)this + 353) = v30;
  v19 = v30 + 60;
  v30[64] = 0;
  v30[65] = 0;
  v30[66] = 0;
  v30[67] = 1065353216;
  v20 = v30[65];
  v21 = v30[66];
  v30[60] = v30[64];
  v30[61] = v20;
  v30[62] = v21;
  v28 = v30[67];
  v30[63] = v28;
  v30 += 56;
  v22 = v19[1];
  v23 = v19[2];
  *v30 = *v19;
  v30[1] = v22;
  v30[2] = v23;
  v30[3] = v28;
  *(_DWORD *)(*((_DWORD *)this + 353) + 280) = 1148846080;
  *(_BYTE *)(*((_DWORD *)this + 353) + 209) = 1;
  *(_BYTE *)(*((_DWORD *)this + 353) + 183) = 0;
  (*(void (__fastcall **)(_DWORD, Ogre::GameScene *, _DWORD))(**((_DWORD **)this + 353) + 48))(
    *((_DWORD *)this + 353),
    a2,
    0);
  v24 = operator new(0xF4u);
  Ogre::FogEffect::FogEffect(v24, 0);
  *((_DWORD *)this + 351) = v24;
  *(_BYTE *)(v24 + 209) = 1;
  *(_BYTE *)(*((_DWORD *)this + 351) + 183) = 0;
  (*(void (__fastcall **)(_DWORD, Ogre::GameScene *, _DWORD))(**((_DWORD **)this + 351) + 48))(
    *((_DWORD *)this + 351),
    a2,
    0);
  v25 = operator new(0xF4u);
  Ogre::FogEffect::FogEffect(v25, 1);
  *((_DWORD *)this + 352) = v25;
  *(_BYTE *)(v25 + 209) = 1;
  *(_BYTE *)(*((_DWORD *)this + 352) + 183) = 0;
  (*(void (__fastcall **)(_DWORD, Ogre::GameScene *, _DWORD))(**((_DWORD **)this + 352) + 48))(
    *((_DWORD *)this + 352),
    a2,
    0);
  j_memset(v31, 0, 0x550u);
  *((_BYTE *)this + 1545) = 0;
  *((_BYTE *)this + 1417) = 0;
  return this;
}


//======================================================================
// Ogre::AmbientManager::clearAmbientData(int)
// address: 0x0017ED14   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall Ogre::AmbientManager::clearAmbientData(Ogre::AmbientManager *this, int a2)
{
  _DWORD *v2; // r5
  _DWORD **v5; // r4
  _DWORD *result; // r0

  v2 = (_DWORD *)((char *)this + 680 * a2 + 688);
  if ( *v2 != 0 )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 52))(*v2);
    Ogre::BaseObject::release((_DWORD *)*v2);
    *v2 = 0;
  }
  v5 = (_DWORD **)((char *)this + 680 * a2 + 692);
  result = *v5;
  if ( *v5 != nullptr )
  {
    (*(void (__fastcall **)(_DWORD *))(*result + 52))(result);
    result = Ogre::BaseObject::release(*v5);
    *v5 = nullptr;
  }
  return result;
}


//======================================================================
// Ogre::AmbientManager::~AmbientManager()
// address: 0x0017ED64   size: 0x88 (136 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14AmbientManagerD1Ev'
void __fastcall Ogre::AmbientManager::~AmbientManager(Ogre::AmbientManager *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r1

  *(_DWORD *)this = &off_457A08;
  Ogre::AmbientManager::clearAmbientData(this, 0);
  Ogre::AmbientManager::clearAmbientData(this, 1);
  v2 = *((_DWORD **)this + 350);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 350) = 0;
  }
  v3 = *((_DWORD **)this + 353);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 353) = 0;
  }
  v4 = *((_DWORD **)this + 351);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 351) = 0;
  }
  v5 = *((_DWORD **)this + 352);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 352) = 0;
  }
  v6 = *((_DWORD *)this + 344);
  if ( v6 != 0 )
    Ogre::LoadWrap::breakLoad(this, v6);
  v7 = *((_DWORD *)this + 345);
  if ( v7 != 0 )
    Ogre::LoadWrap::breakLoad(this, v7);
  Ogre::LoadWrap::~LoadWrap(this);
}


//======================================================================
// Ogre::AmbientManager::~AmbientManager()
// address: 0x0017EDFC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::AmbientManager::~AmbientManager(Ogre::AmbientManager *this)
{
  Ogre::AmbientManager::~AmbientManager(this);
  operator delete(this);
}


//======================================================================
// Ogre::AmbientManager::switchToMusic(char const*,float,int)
// address: 0x0017EE10   size: 0x4C (76 bytes)
//======================================================================
__int64 __fastcall Ogre::AmbientManager::switchToMusic(Ogre::AmbientManager *this, const char *a2, float a3, int a4)
{
  __int64 v8; // [sp+0h] [bp-Ch]

  LODWORD(v8) = 5000;
  if ( *a2 != 0 )
  {
    *((float *)&v8 + 1) = a3;
    (*(void (__fastcall **)(int, int, const char *, int))(*(_DWORD *)Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton
                                                        + 20))(
      Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton,
      a4,
      a2,
      1);
  }
  else
  {
    HIDWORD(v8) = 1065353216;
    (*(void (__fastcall **)(int, int, _DWORD, int))(*(_DWORD *)Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton + 20))(
      Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton,
      a4,
      0,
      1);
  }
  j_strncpy((char *)this + 128 * a4 + 1417, a2, 0x80u);
  return v8;
}


//======================================================================
// Ogre::AmbientManager::setCurAmbient(Ogre::AmbientInfo const&,bool,bool)
// address: 0x0017EF8C   size: 0x128 (296 bytes)
//======================================================================
__int64 __fastcall Ogre::AmbientManager::setCurAmbient(Ogre::AmbientManager *this, int a2, int a3, int a4)
{
  int v6; // r2
  int v7; // r3
  unsigned int v8; // r1
  void *v9; // r1
  int v10; // r3
  unsigned int v11; // r1
  void *v12; // r1
  __int64 result; // r0
  int v14; // r3
  Ogre::FixedString *v16[2]; // [sp+Ch] [bp-8h] BYREF

  if ( a3 != 0 )
  {
    Ogre::AmbientManager::clearAmbientData(this, 0);
    Ogre::AmbientManager::clearAmbientData(this, 1);
    *((_DWORD *)this + 346) = 0;
  }
  if ( *((int *)this + 346) > 0 )
  {
    Ogre::AmbientManager::clearAmbientData(this, 0);
    Ogre::AmbientInfo::operator=((int)this + 16, (int)this + 696);
    *((_DWORD *)this + 172) = *((_DWORD *)this + 342);
    *((_DWORD *)this + 173) = *((_DWORD *)this + 343);
    *((_DWORD *)this + 342) = 0;
    *((_DWORD *)this + 343) = 0;
  }
  Ogre::AmbientInfo::operator=((int)this + 696, a2);
  if ( *(_BYTE *)(a2 + 160) != 0 )
  {
    v7 = 1376;
    v8 = *((_DWORD *)this + 344);
    if ( v8 != 0 )
      Ogre::LoadWrap::breakLoad(this, v8);
    v16[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                    (Ogre::FixedString *)(a2 + 160),
                                    (const char *)0xFFFFFFFF,
                                    v6,
                                    v7);
    *((_DWORD *)this + 344) = Ogre::LoadWrap::backgroundLoad(this, (const Ogre::FixedString *)v16);
    Ogre::FixedString::release((int)v16[0], v9);
  }
  v10 = *(unsigned __int8 *)(a2 + 544);
  if ( *(_BYTE *)(a2 + 544) != 0 )
  {
    v11 = *((_DWORD *)this + 345);
    if ( v11 != 0 )
      Ogre::LoadWrap::breakLoad(this, v11);
    v16[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                    (Ogre::FixedString *)(a2 + 544),
                                    (const char *)0xFFFFFFFF,
                                    544,
                                    v10);
    *((_DWORD *)this + 345) = Ogre::LoadWrap::backgroundLoad(this, (const Ogre::FixedString *)v16);
    Ogre::FixedString::release((int)v16[0], v12);
  }
  if ( a4 == 0 )
    Ogre::AmbientManager::switchToMusic(this, (const char *)(a2 + 288), *(float *)(a2 + 152), 0);
  result = Ogre::AmbientManager::switchToMusic(this, (const char *)(a2 + 416), *(float *)(a2 + 156), 1);
  v14 = *((_DWORD *)this + 346);
  if ( v14 <= 1 )
    *((_DWORD *)this + 346) = v14 + 1;
  *((_DWORD *)this + 348) = 0;
  return result;
}


//======================================================================
// Ogre::AmbientManager::updatecamera(Ogre::Camera *,Ogre::WorldPos const&)
// address: 0x0017F0C0   size: 0x276 (630 bytes)
//======================================================================
int __fastcall Ogre::AmbientManager::updatecamera(
        Ogre::AmbientManager *this,
        Ogre::Camera *a2,
        const Ogre::WorldPos *a3)
{
  float v5; // r2
  float v6; // r3
  int i; // r4
  float v8; // r0
  float v9; // r6
  float v10; // r0
  float v11; // r0
  float v12; // r0
  float v13; // r0
  float v14; // r0
  float v15; // r0
  int *v16; // r0
  int v17; // r2
  int v18; // r3
  int v19; // r7
  int *v21; // [sp+Ch] [bp-98h]
  int *v22; // [sp+Ch] [bp-98h]
  float v23; // [sp+Ch] [bp-98h]
  float v24; // [sp+Ch] [bp-98h]
  float v25; // [sp+10h] [bp-94h]
  float v27; // [sp+18h] [bp-8Ch] BYREF
  float v28; // [sp+1Ch] [bp-88h]
  float v29; // [sp+20h] [bp-84h]
  _DWORD v30[3]; // [sp+24h] [bp-80h] BYREF
  _DWORD v31[3]; // [sp+30h] [bp-74h] BYREF
  float v32; // [sp+3Ch] [bp-68h] BYREF
  float v33; // [sp+40h] [bp-64h]
  float v34; // [sp+44h] [bp-60h]
  int v35; // [sp+48h] [bp-5Ch]
  int v36; // [sp+4Ch] [bp-58h]
  int v37; // [sp+50h] [bp-54h]
  int v38[3]; // [sp+54h] [bp-50h] BYREF
  float v39[17]; // [sp+60h] [bp-44h] BYREF

  if ( *((_BYTE *)a2 + 180) != 0 )
    (*(void (__fastcall **)(Ogre::Camera *))(*(_DWORD *)a2 + 68))(a2);
  Ogre::Matrix4::Matrix4((int)v39, (Ogre::Camera *)((char *)a2 + 48));
  v5 = v39[13];
  v6 = v39[14];
  v27 = v39[12];
  v28 = v39[13];
  v29 = v39[14];
  *((float *)this + 1) = v39[12];
  *((float *)this + 2) = v5;
  *((float *)this + 3) = v6;
  for ( i = 0; i != 1360; i += 680 )
  {
    v21 = *(int **)((char *)this + i + 688);
    if ( v21 != nullptr )
    {
      Ogre::WorldPos::WorldPos(v38, (const Ogre::Vector3 *)&v27);
      Ogre::MovableObject::setPosition(v21, v38);
    }
    v22 = *(int **)((char *)this + i + 692);
    if ( v22 != nullptr )
    {
      Ogre::WorldPos::WorldPos(v38, (const Ogre::Vector3 *)&v27);
      Ogre::MovableObject::setPosition(v22, v38);
    }
  }
  v30[2] = 1065353216;
  v31[1] = 1065353216;
  v30[1] = 0;
  v30[0] = 0;
  v31[0] = 0;
  v31[2] = 0;
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v39, (Ogre::Vector3 *)v30, (const Ogre::Vector3 *)v30);
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v39, (Ogre::Vector3 *)v31, (const Ogre::Vector3 *)v31);
  v8 = (double)(*(_DWORD *)a3 - Ogre::WorldPos::m_Origin) / 10.0;
  v9 = v27 - v8;
  v10 = (double)(*((_DWORD *)a3 + 1) - dword_4C6B7C) / 10.0;
  v23 = v28 - v10;
  v11 = (double)(*((_DWORD *)a3 + 2) - dword_4C6B80) / 10.0;
  v34 = v29 - v11;
  v33 = v23;
  v32 = v9;
  v12 = j_sqrt((float)((float)((float)(v9 * v9) + (float)(v23 * v23)) + (float)(v34 * v34)));
  if ( v12 <= 0.00001 )
  {
    v32 = 0.0;
    v33 = 0.0;
    v34 = 0.0;
  }
  else
  {
    v32 = v32 * (float)(1.0 / v12);
    v33 = v33 * (float)(1.0 / v12);
    v34 = v34 * (float)(1.0 / v12);
  }
  v13 = (double)(*((_DWORD *)a3 + 1) - dword_4C6B7C) / 10.0;
  v24 = (float)(v33 * 500.0) + v13;
  v14 = (double)(*((_DWORD *)a3 + 2) - dword_4C6B80) / 10.0;
  v25 = (float)(v34 * 500.0) + v14;
  v15 = (double)(*(_DWORD *)a3 - Ogre::WorldPos::m_Origin) / 10.0;
  v32 = (float)(v32 * 500.0) + v15;
  v34 = v25;
  v33 = v24;
  v36 = 0;
  v37 = 0;
  v35 = 0;
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton + 44))(
    Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton,
    &v32);
  v16 = *((int **)this + 353);
  v17 = *((_DWORD *)a3 + 1) + 4000;
  v18 = *((_DWORD *)a3 + 2);
  v19 = *(_DWORD *)a3;
  v38[1] = v17;
  v38[0] = v19;
  v38[2] = v18;
  return Ogre::MovableObject::setPosition(v16, v38);
}


//======================================================================
// Ogre::AmbientManager::update(unsigned int)
// address: 0x0017F358   size: 0x60A (1546 bytes)
//======================================================================
int __fastcall Ogre::AmbientManager::update(int this, unsigned int a2)
{
  int v2; // r3
  int v3; // r4
  float v4; // r0
  float *v5; // r5
  float v6; // r1
  float v7; // r2
  float v8; // r1
  float v9; // r5
  float *v10; // r5
  float v11; // r1
  float v12; // r2
  float v13; // r1
  float v14; // r5
  float v15; // r1
  float v16; // r5
  int v17; // r5
  int v18; // r5
  float *v19; // r3
  float v20; // r1
  float v21; // r5
  float v22; // r6
  int v23; // r5
  int v24; // r5
  Ogre::Light *v25; // r0
  _DWORD *v26; // r2
  int v27; // r1
  int v28; // r5
  int v29; // r5
  int v30; // r0
  int v31; // r3
  int v32; // r6
  _DWORD *v33; // r1
  int v34; // r3
  int v35; // r6
  _DWORD *v36; // r3
  int v37; // r1
  int v38; // r6
  _DWORD *v39; // r1
  int v40; // r3
  int v41; // r6
  _DWORD *v42; // r1
  int v43; // r3
  int v44; // r6
  int v45; // r2
  _DWORD *v46; // r3
  _DWORD *v47; // r1
  int v48; // r5
  int v49; // r6
  int v50; // r2
  _DWORD *v51; // r3
  int v52; // r3
  _DWORD *v53; // [sp+20h] [bp-74h]
  Ogre *v54; // [sp+48h] [bp-4Ch]
  Ogre::Light *v55; // [sp+48h] [bp-4Ch]
  int v56; // [sp+4Ch] [bp-48h]
  float v57; // [sp+4Ch] [bp-48h]
  int v58; // [sp+50h] [bp-44h]
  int v59; // [sp+50h] [bp-44h]
  int v60; // [sp+54h] [bp-40h]
  Ogre::Light *v61; // [sp+58h] [bp-3Ch]
  float v62; // [sp+58h] [bp-3Ch]
  float v63; // [sp+64h] [bp-30h]
  float v65[5]; // [sp+70h] [bp-24h] BYREF
  float v66[4]; // [sp+84h] [bp-10h] BYREF

  v2 = *(_DWORD *)(this + 1384);
  v3 = this;
  if ( v2 != 0 )
  {
    if ( v2 == 2 )
    {
      v4 = (float)((float)((float)a2 / 1000.0) * *(float *)(this + 1396)) + *(float *)(this + 1392);
      *(float *)(v3 + 1392) = v4;
      if ( v4 >= 1.0 )
      {
        Ogre::AmbientManager::clearAmbientData((Ogre::AmbientManager *)v3, 0);
        *(_DWORD *)(v3 + 1384) = 1;
      }
    }
    v5 = (float *)(*(_DWORD *)(v3 + 1400) + 224);
    if ( *(_DWORD *)(v3 + 1384) == 1 )
    {
      v31 = *(_DWORD *)(v3 + 720);
      v32 = *(_DWORD *)(v3 + 724);
      *v5 = *(float *)(v3 + 716);
      *((_DWORD *)v5 + 1) = v31;
      *((_DWORD *)v5 + 2) = v32;
      v5[3] = *(float *)(v3 + 728);
      v33 = (_DWORD *)(*(_DWORD *)(v3 + 1400) + 240);
      v34 = *(_DWORD *)(v3 + 704);
      v35 = *(_DWORD *)(v3 + 708);
      *v33 = *(_DWORD *)(v3 + 700);
      v33[1] = v34;
      v33[2] = v35;
      v33[3] = *(_DWORD *)(v3 + 712);
      v36 = (_DWORD *)(*(_DWORD *)(v3 + 1400) + 256);
      v37 = *(_DWORD *)(v3 + 752);
      v38 = *(_DWORD *)(v3 + 756);
      *v36 = *(_DWORD *)(v3 + 748);
      v36[1] = v37;
      v36[2] = v38;
      v36[3] = *(_DWORD *)(v3 + 760);
      *(_DWORD *)(*(_DWORD *)(v3 + 1400) + 272) = *(_DWORD *)(v3 + 764);
      v55 = *(Ogre::Light **)(v3 + 1400);
      sub_17E938(v66, *(float *)(v3 + 732), *(float *)(v3 + 736));
      Ogre::Light::setDirection(v55, (const Ogre::Vector3 *)v66);
      v60 = *(unsigned __int8 *)(v3 + 740);
      v39 = (_DWORD *)(*(_DWORD *)(v3 + 1412) + 224);
      v40 = *(_DWORD *)(v3 + 776);
      v41 = *(_DWORD *)(v3 + 780);
      *v39 = *(_DWORD *)(v3 + 772);
      v39[1] = v40;
      v39[2] = v41;
      v39[3] = *(_DWORD *)(v3 + 784);
      v42 = (_DWORD *)(*(_DWORD *)(v3 + 1404) + 216);
      v43 = *(_DWORD *)(v3 + 792);
      v44 = *(_DWORD *)(v3 + 796);
      *v42 = *(_DWORD *)(v3 + 788);
      v42[1] = v43;
      v42[2] = v44;
      v42[3] = *(_DWORD *)(v3 + 800);
      v45 = *(_DWORD *)(v3 + 808);
      v46 = (_DWORD *)(*(_DWORD *)(v3 + 1404) + 240);
      *(_DWORD *)(*(_DWORD *)(v3 + 1404) + 236) = *(_DWORD *)(v3 + 804);
      *v46 = v45;
      v47 = (_DWORD *)(*(_DWORD *)(v3 + 1408) + 216);
      v48 = *(_DWORD *)(v3 + 816);
      v49 = *(_DWORD *)(v3 + 820);
      *v47 = *(_DWORD *)(v3 + 812);
      v47[1] = v48;
      v47[2] = v49;
      v47[3] = *(_DWORD *)(v3 + 824);
      v50 = *(_DWORD *)(v3 + 832);
      v51 = (_DWORD *)(*(_DWORD *)(v3 + 1408) + 240);
      *(_DWORD *)(*(_DWORD *)(v3 + 1408) + 236) = *(_DWORD *)(v3 + 828);
      *v51 = v50;
      v52 = Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton;
      if ( Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton != 0 )
      {
        *(_DWORD *)(Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton + 700) = *(_DWORD *)(v3 + 836);
        *(_DWORD *)(v52 + 696) = *(_DWORD *)(v3 + 840);
        *(_DWORD *)(v52 + 704) = *(_DWORD *)(v3 + 844);
      }
      if ( Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton != 0 )
        *(_DWORD *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 84) = *(_DWORD *)(v3 + 744);
    }
    else
    {
      Ogre::Lerp(
        v65,
        (const Ogre::ColourValue *)(v3 + 36),
        (const Ogre::ColourValue *)(v3 + 716),
        *(float *)(v3 + 1392));
      v6 = v65[1];
      v7 = v65[2];
      *v5 = v65[0];
      v5[1] = v6;
      v5[2] = v7;
      v5[3] = v65[3];
      v56 = *(_DWORD *)(v3 + 1400) + 240;
      Ogre::Lerp(
        v65,
        (const Ogre::ColourValue *)(v3 + 20),
        (const Ogre::ColourValue *)(v3 + 700),
        *(float *)(v3 + 1392));
      v8 = v65[1];
      v9 = v65[2];
      *(float *)v56 = v65[0];
      *(float *)(v56 + 4) = v8;
      *(float *)(v56 + 8) = v9;
      *(float *)(v56 + 12) = v65[3];
      v10 = *(float **)(v3 + 1400);
      Ogre::Lerp(
        v65,
        (const Ogre::ColourValue *)(v3 + 68),
        (const Ogre::ColourValue *)(v3 + 748),
        *(float *)(v3 + 1392));
      v10 += 64;
      v11 = v65[1];
      v12 = v65[2];
      *v10 = v65[0];
      v10[1] = v11;
      v10[2] = v12;
      v10[3] = v65[3];
      *(float *)(*(_DWORD *)(v3 + 1400) + 272) = *(float *)(v3 + 84)
                                               + (float)((float)(*(float *)(v3 + 764) - *(float *)(v3 + 84))
                                                       * *(float *)(v3 + 1392));
      v61 = *(Ogre::Light **)(v3 + 1400);
      sub_17E938(
        v66,
        *(float *)(v3 + 52) + (float)((float)(*(float *)(v3 + 732) - *(float *)(v3 + 52)) * *(float *)(v3 + 1392)),
        *(float *)(v3 + 56) + (float)((float)(*(float *)(v3 + 736) - *(float *)(v3 + 56)) * *(float *)(v3 + 1392)));
      Ogre::Light::setDirection(v61, (const Ogre::Vector3 *)v66);
      v60 = *(unsigned __int8 *)(v3 + 60);
      v58 = *(_DWORD *)(v3 + 1412) + 224;
      Ogre::Lerp(
        v65,
        (const Ogre::ColourValue *)(v3 + 92),
        (const Ogre::ColourValue *)(v3 + 772),
        *(float *)(v3 + 1392));
      v13 = v65[1];
      v14 = v65[2];
      *(float *)v58 = v65[0];
      *(float *)(v58 + 4) = v13;
      *(float *)(v58 + 8) = v14;
      *(float *)(v58 + 12) = v65[3];
      v59 = *(_DWORD *)(v3 + 1404) + 216;
      Ogre::Lerp(
        v65,
        (const Ogre::ColourValue *)(v3 + 108),
        (const Ogre::ColourValue *)(v3 + 788),
        *(float *)(v3 + 1392));
      v15 = v65[1];
      v16 = v65[2];
      *(float *)v59 = v65[0];
      *(float *)(v59 + 4) = v15;
      *(float *)(v59 + 8) = v16;
      *(float *)(v59 + 12) = v65[3];
      v62 = *(float *)(v3 + 1392);
      v63 = *(float *)(v3 + 128) + (float)((float)(*(float *)(v3 + 808) - *(float *)(v3 + 128)) * v62);
      v17 = *(_DWORD *)(v3 + 1404);
      *(float *)(v17 + 236) = *(float *)(v3 + 124) + (float)((float)(*(float *)(v3 + 804) - *(float *)(v3 + 124)) * v62);
      *(float *)(v17 + 240) = v63;
      v18 = *(_DWORD *)(v3 + 1408) + 216;
      Ogre::Lerp(
        v65,
        (const Ogre::ColourValue *)(v3 + 132),
        (const Ogre::ColourValue *)(v3 + 812),
        *(float *)(v3 + 1392));
      v19 = (float *)v18;
      v20 = v65[1];
      v21 = v65[2];
      *v19 = v65[0];
      v19[1] = v20;
      v19[2] = v21;
      v19[3] = v65[3];
      v57 = *(float *)(v3 + 1392);
      v22 = *(float *)(v3 + 152) + (float)((float)(*(float *)(v3 + 832) - *(float *)(v3 + 152)) * v57);
      v23 = *(_DWORD *)(v3 + 1408);
      *(float *)(v23 + 236) = *(float *)(v3 + 148) + (float)((float)(*(float *)(v3 + 828) - *(float *)(v3 + 148)) * v57);
      *(float *)(v23 + 240) = v22;
      v54 = (Ogre *)Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton;
      if ( Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton != 0 )
      {
        *(float *)(Ogre::Singleton<Ogre::BloomEffect>::ms_Singleton + 700) = *(float *)(v3 + 156)
                                                                           + (float)((float)(*(float *)(v3 + 836)
                                                                                           - *(float *)(v3 + 156))
                                                                                   * *(float *)(v3 + 1392));
        *((float *)v54 + 174) = *(float *)(v3 + 160)
                              + (float)((float)(*(float *)(v3 + 840) - *(float *)(v3 + 160)) * *(float *)(v3 + 1392));
        *((float *)v54 + 176) = *(float *)(v3 + 164)
                              + (float)((float)(*(float *)(v3 + 844) - *(float *)(v3 + 164)) * *(float *)(v3 + 1392));
      }
      if ( Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton != 0 )
        *(float *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 84) = *(float *)(v3 + 64)
                                                                        + (float)((float)(*(float *)(v3 + 744)
                                                                                        - *(float *)(v3 + 64))
                                                                                * *(float *)(v3 + 1392));
    }
    if ( *(_BYTE *)(v3 + 1416) == 0
      || *(float *)((v24 = *(_DWORD *)(v3 + 1412)) + 224) == 0.0
      && *(float *)(v24 + 228) == 0.0
      && *(float *)(v24 + 232) == 0.0 )
    {
      *(_BYTE *)(*(_DWORD *)(v3 + 1412) + 183) = 0;
      Ogre::Light::disableShadow(*(Ogre::Light **)(v3 + 1412));
      *(_BYTE *)(*(_DWORD *)(v3 + 1400) + 183) = 1;
      v25 = *(Ogre::Light **)(v3 + 1400);
      if ( v60 != 0 )
        Ogre::Light::enableShadow(v25);
      else
        Ogre::Light::disableShadow(v25);
      if ( Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton != 0 )
        *(_DWORD *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 88) = -1;
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(v3 + 1400) + 183) = 1;
      Ogre::Light::disableShadow(*(Ogre::Light **)(v3 + 1400));
      *(_BYTE *)(*(_DWORD *)(v3 + 1400) + 219) = 0;
      *(_BYTE *)(*(_DWORD *)(v3 + 1400) + 217) = 0;
      *(_BYTE *)(*(_DWORD *)(v3 + 1412) + 183) = 1;
      Ogre::Light::enableShadow(*(Ogre::Light **)(v3 + 1412));
      *(_BYTE *)(*(_DWORD *)(v3 + 1412) + 217) = 1;
      v26 = (_DWORD *)(*(_DWORD *)(v3 + 1400) + 256);
      v53 = *(_DWORD **)(v3 + 1412);
      v27 = *(_DWORD *)(*(_DWORD *)(v3 + 1400) + 260);
      v28 = *(_DWORD *)(*(_DWORD *)(v3 + 1400) + 264);
      v53[64] = *v26;
      v53[65] = v27;
      v53[66] = v28;
      v53[67] = v26[3];
      *(_DWORD *)(*(_DWORD *)(v3 + 1412) + 272) = *(_DWORD *)(*(_DWORD *)(v3 + 1400) + 272);
      if ( Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton != 0 )
        *(_DWORD *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 88) = *(_DWORD *)(v3 + 768);
    }
    *(_BYTE *)(*(_DWORD *)(v3 + 1404) + 183) = *(_BYTE *)(v3 + 696);
    v29 = 0;
    *(_BYTE *)(*(_DWORD *)(v3 + 1408) + 183) = *(_BYTE *)(v3 + 697);
    do
    {
      v30 = *(_DWORD *)(v3 + v29 + 688);
      if ( v30 != 0 )
        (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v30 + 40))(v30, a2);
      this = *(_DWORD *)(v3 + v29 + 692);
      if ( this != 0 )
        this = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)this + 40))(this, a2);
      v29 += 680;
    }
    while ( v29 != 1360 );
  }
  return this;
}

