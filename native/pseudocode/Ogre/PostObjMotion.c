// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PostObjMotion

//======================================================================
// Ogre::PostObjMotion::InitObject(Ogre::Entity *)
// address: 0x0015FC1C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::PostObjMotion::InitObject(int result)
{
  *(_DWORD *)(result + 4) = 0;
  return result;
}


//======================================================================
// Ogre::PostObjMotion::StopObject(Ogre::Entity *)
// address: 0x0015FC22   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::PostObjMotion::StopObject(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// Ogre::PostObjMotion::DelayStopObject(Ogre::Entity *,float)
// address: 0x0015FC2C   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::PostObjMotion::DelayStopObject(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// Ogre::PostObjMotion::StartObject(Ogre::Entity *)
// address: 0x0015FD34   size: 0x56 (86 bytes)
//======================================================================
_DWORD *__fastcall Ogre::PostObjMotion::StartObject(_DWORD *this, Ogre::Entity *a2)
{
  int v2; // r7
  _DWORD *v3; // r4
  int v5; // r3
  Ogre::NormalSceneRenderer *v6; // r5
  int v7; // r1
  unsigned int v8; // r1
  Ogre::LoadWrap *v9; // r6

  v2 = *(this + 4);
  v3 = this;
  v5 = *(_DWORD *)(v2 + 44);
  if ( v5 == 4 )
  {
    this = (_DWORD *)Ogre::Entity::getPostSceneRenderer(a2);
    v6 = (Ogre::NormalSceneRenderer *)this;
    if ( this == nullptr )
      return this;
    v7 = v3[16];
    if ( v7 >= 0 )
      Ogre::NormalSceneRenderer::freeCameraShakeChannel((Ogre::NormalSceneRenderer *)this, v7);
    this = (_DWORD *)Ogre::NormalSceneRenderer::allocCameraShakeChannel(v6, 1000.0);
    v3[16] = this;
  }
  else if ( v5 == 9 )
  {
    v8 = *(this + 18);
    v9 = (Ogre::LoadWrap *)(this + 15);
    if ( v8 != 0 )
      Ogre::LoadWrap::breakLoad((Ogre::LoadWrap *)(this + 15), v8);
    this = (_DWORD *)Ogre::LoadWrap::backgroundLoad(v9, (const Ogre::FixedString *)(v2 + 156));
    v3[17] = a2;
    v3[18] = this;
  }
  v3[1] = 1;
  return this;
}


//======================================================================
// Ogre::PostObjMotion::EndObject(Ogre::Entity *)
// address: 0x0015FD90   size: 0x58 (88 bytes)
//======================================================================
Ogre::NormalSceneRenderer *__fastcall Ogre::PostObjMotion::EndObject(Ogre::PostObjMotion *this, Ogre::Entity *a2)
{
  int v3; // r3
  Ogre::NormalSceneRenderer *result; // r0
  int v5; // r3
  int v6; // r1
  unsigned int v7; // r1

  v3 = *((_DWORD *)this + 4);
  result = a2;
  v5 = *(_DWORD *)(v3 + 44);
  switch ( v5 )
  {
    case 4:
      result = (Ogre::NormalSceneRenderer *)Ogre::Entity::getPostSceneRenderer(a2);
      if ( result == nullptr )
        return result;
      v6 = *((_DWORD *)this + 16);
      if ( v6 >= 0 )
      {
        result = (Ogre::NormalSceneRenderer *)Ogre::NormalSceneRenderer::freeCameraShakeChannel(result, v6);
        *((_DWORD *)this + 16) = -1;
      }
      break;
    case 9:
      v7 = *((_DWORD *)this + 18);
      if ( v7 != 0 )
      {
        result = (Ogre::NormalSceneRenderer *)Ogre::LoadWrap::breakLoad((Ogre::PostObjMotion *)((char *)this + 60), v7);
        *((_DWORD *)this + 18) = 0;
      }
      else
      {
        result = (Ogre::NormalSceneRenderer *)Ogre::Entity::clearTopMaterial(result);
      }
      break;
    case 6:
      result = (Ogre::Entity *)((char *)a2 + 188);
      *((_DWORD *)a2 + 47) = 1065353216;
      break;
    default:
      break;
  }
  *((_DWORD *)this + 1) = 2;
  return result;
}


//======================================================================
// Ogre::PostObjMotion::~PostObjMotion()
// address: 0x0015FF74   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13PostObjMotionD1Ev'
void __fastcall Ogre::PostObjMotion::~PostObjMotion(Ogre::PostObjMotion *this)
{
  unsigned int v1; // r1
  Ogre::LoadWrap *v3; // r5

  v1 = *((_DWORD *)this + 18);
  v3 = (Ogre::PostObjMotion *)((char *)this + 60);
  *(_DWORD *)this = &off_456C18;
  *((_DWORD *)this + 15) = off_456C74;
  if ( v1 != 0 )
    Ogre::LoadWrap::breakLoad((Ogre::PostObjMotion *)((char *)this + 60), v1);
  Ogre::LoadWrap::~LoadWrap(v3);
  Ogre::ObjectMotion::~ObjectMotion(this);
}


//======================================================================
// Ogre::PostObjMotion::~PostObjMotion()
// address: 0x0015FFC0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::PostObjMotion::~PostObjMotion(Ogre::PostObjMotion *this)
{
  Ogre::PostObjMotion::~PostObjMotion(this);
  operator delete(this);
}


//======================================================================
// Ogre::PostObjMotion::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x00160118   size: 0x8C (140 bytes)
//======================================================================
_DWORD *__fastcall Ogre::PostObjMotion::ResourceLoaded(_DWORD *this, Ogre::Resource *a2, int a3)
{
  _DWORD *v3; // r6
  Ogre::Material *v5; // r5
  void *v6; // r1
  int v7; // r2
  void *v8; // r1
  int v9; // r2
  void *v10; // r1
  int v11; // [sp+4h] [bp-10h]
  Ogre::FixedString *v12[2]; // [sp+Ch] [bp-8h] BYREF

  v3 = this;
  if ( a3 == *(this + 18) )
  {
    if ( a2 != nullptr )
    {
      v11 = *(this + 4);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v12, (Ogre::FixedString *)"overlay", a3);
      v5 = (Ogre::Material *)operator new(0x2Cu);
      Ogre::Material::Material(v5, (const Ogre::FixedString *)v12);
      Ogre::FixedString::~FixedString(v12, v6);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v12, (Ogre::FixedString *)"BLEND_MODE", v7);
      Ogre::Material::setParamMacro(v5, (const Ogre::FixedString *)v12, *(_DWORD *)(v11 + 152));
      Ogre::FixedString::~FixedString(v12, v8);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v12, (Ogre::FixedString *)"g_DiffuseTex", v9);
      Ogre::Material::setParamTexture(v5, (const Ogre::FixedString *)v12, a2, 0);
      Ogre::FixedString::~FixedString(v12, v10);
      Ogre::Entity::addOverlayMaterial((Ogre::Entity *)v3[17], v5, *(float *)(v11 + 160));
      this = Ogre::BaseObject::release(v5);
    }
    v3[18] = 0;
  }
  return this;
}


//======================================================================
// Ogre::PostObjMotion::UpdateData(float,Ogre::Entity *)
// address: 0x00160B1C   size: 0xE4 (228 bytes)
//======================================================================
float __fastcall Ogre::PostObjMotion::UpdateData(float this, float a2, Ogre::Entity *a3)
{
  float v3; // r6
  int v5; // r5
  int v6; // r3
  int v7; // r6
  int v8; // r5
  int v9; // r1
  int v10; // r2
  int v11; // r4
  int v13; // [sp+Ch] [bp-20h]
  int v14; // [sp+14h] [bp-18h] BYREF
  int v15[5]; // [sp+18h] [bp-14h] BYREF

  v3 = this;
  v5 = *(_DWORD *)(LODWORD(this) + 16);
  if ( *(_DWORD *)(LODWORD(this) + 4) == 1 )
  {
    v6 = *(_DWORD *)(v5 + 44);
    switch ( v6 )
    {
      case 5:
        return Ogre::KeyFrameArray<Ogre::Vector4>::getValue(
                 (_DWORD *)(v5 + 48),
                 0,
                 (unsigned int)(float)(a2 * 1000.0),
                 (int)v15,
                 1);
      case 6:
        this = COERCE_FLOAT(Ogre::KeyFrameArray<float>::getValue(v5 + 96, 0, (unsigned int)(float)(a2 * 1000.0), v15, 1));
        *((_DWORD *)a3 + 47) = v15[0];
        break;
      case 7:
        return COERCE_FLOAT(Ogre::KeyFrameArray<float>::getValue(v5 + 96, 0, (unsigned int)(float)(a2 * 1000.0), v15, 1));
      case 4:
        this = COERCE_FLOAT(Ogre::Entity::getPostSceneRenderer(a3));
        v13 = LODWORD(this);
        if ( this != 0.0 && *(int *)(LODWORD(v3) + 64) >= 0 )
        {
          Ogre::KeyFrameArray<float>::getValue(v5 + 96, 0, (unsigned int)(float)(a2 * 1000.0), &v14, 1);
          v7 = *(_DWORD *)(LODWORD(v3) + 64);
          v8 = v14;
          if ( *((_BYTE *)a3 + 180) != 0 )
            (*(void (__fastcall **)(Ogre::Entity *))(*(_DWORD *)a3 + 68))(a3);
          v9 = *((_DWORD *)a3 + 25);
          v10 = *((_DWORD *)a3 + 26);
          v11 = *((_DWORD *)a3 + 24);
          v15[1] = v9;
          v15[2] = v10;
          v15[0] = v11;
          return COERCE_FLOAT(Ogre::NormalSceneRenderer::setCameraShake(v13, v7, v8, v15));
        }
        break;
      default:
        break;
    }
  }
  return this;
}

