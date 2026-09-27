// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ReflectEffect

//======================================================================
// Ogre::ReflectEffect::getRTTI(void)const
// address: 0x001A0A78   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::ReflectEffect::getRTTI(Ogre::ReflectEffect *this)
{
  return &Ogre::ReflectEffect::m_RTTI;
}


//======================================================================
// Ogre::ReflectEffect::prepare(Ogre::SceneRenderer *,unsigned int)
// address: 0x001A0A84   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::ReflectEffect::prepare(Ogre::ReflectEffect *this, Ogre::SceneRenderer *a2, unsigned int a3)
{
  ;
}


//======================================================================
// Ogre::ReflectEffect::getEffectWeight(Ogre::Vector3 const&,float)
// address: 0x001A0A86   size: 0x4 (4 bytes)
//======================================================================
int Ogre::ReflectEffect::getEffectWeight()
{
  return 0;
}


//======================================================================
// Ogre::ReflectEffect::doRender(void)
// address: 0x001A0A8A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::ReflectEffect::doRender(Ogre::ReflectEffect *this)
{
  ;
}


//======================================================================
// Ogre::ReflectEffect::queryShaderEnv(Ogre::ShaderEnvData &,Ogre::Matrix4 const&)
// address: 0x001A0A8C   size: 0x22 (34 bytes)
//======================================================================
void *__fastcall Ogre::ReflectEffect::queryShaderEnv(
        Ogre::ReflectEffect *this,
        Ogre::ShaderEnvData *a2,
        const Ogre::Matrix4 *a3)
{
  void *result; // r0

  result = Ogre::Matrix4::operator=((char *)a2 + 312, (char *)this + 640);
  *((_DWORD *)a2 + 56) = *((_DWORD *)this + 176);
  return result;
}


//======================================================================
// Ogre::ReflectEffect::onRestoreDevice(void)
// address: 0x001A0AB0   size: 0x84 (132 bytes)
//======================================================================
TiXmlNode *__fastcall Ogre::ReflectEffect::onRestoreDevice(Ogre::ReflectEffect *this, int a2, TiXmlElement *a3)
{
  TiXmlNode *result; // r0
  _DWORD *v5; // r7
  int v6; // r0
  Ogre::LockSection *v7; // [sp+8h] [bp-24h] BYREF
  int v8; // [sp+Ch] [bp-20h] BYREF
  int v9; // [sp+10h] [bp-1Ch]
  int v10; // [sp+14h] [bp-18h]
  int v11; // [sp+18h] [bp-14h]
  int v12; // [sp+1Ch] [bp-10h]
  int v13; // [sp+20h] [bp-Ch]
  int v14; // [sp+24h] [bp-8h]

  result = Ogre::Root::getWaterReflect((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton, a2, a3);
  if ( result != nullptr )
  {
    v11 = 1;
    v12 = 1;
    v13 = 12;
    v7 = (Ogre::LockSection *)&byte_4;
    v9 = 512;
    v10 = 512;
    v14 = 0;
    v8 = 0;
    v5 = (_DWORD *)operator new(0x30u);
    Ogre::RT_TEXTURE::RT_TEXTURE(v5, &v8, &v7);
    *((_DWORD *)this + 176) = v5;
    v6 = (*(int (__fastcall **)(_DWORD *))(*v5 + 32))(v5);
    result = (TiXmlNode *)(*(int (__fastcall **)(_DWORD, int, _DWORD, int, _DWORD, _DWORD, Ogre::LockSection *, int, int, int, int, int, int, int))(**(_DWORD **)(v6 + 12) + 24))(
                            *(_DWORD *)(v6 + 12),
                            v6,
                            0,
                            16,
                            0,
                            0,
                            v7,
                            v8,
                            v9,
                            v10,
                            v11,
                            v12,
                            v13,
                            v14);
  }
  else
  {
    *((_DWORD *)this + 176) = 0;
  }
  *((_DWORD *)this + 181) = result;
  *((_DWORD *)this + 177) = 0;
  *((_DWORD *)this + 182) = 0;
  return result;
}


//======================================================================
// Ogre::ReflectEffect::onLostDevice(void)
// address: 0x001A0B38   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall Ogre::ReflectEffect::onLostDevice(Ogre::ReflectEffect *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *result; // r0

  v2 = *((_DWORD **)this + 181);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 181) = 0;
  }
  v3 = *((_DWORD **)this + 176);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 176) = 0;
  }
  v4 = *((_DWORD **)this + 182);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 182) = 0;
  }
  result = *((_DWORD **)this + 177);
  if ( result != nullptr )
  {
    result = Ogre::BaseObject::release(result);
    *((_DWORD *)this + 177) = 0;
  }
  return result;
}


//======================================================================
// Ogre::ReflectEffect::~ReflectEffect()
// address: 0x001A0B88   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13ReflectEffectD1Ev'
void __fastcall Ogre::ReflectEffect::~ReflectEffect(Ogre::ReflectEffect *this)
{
  _DWORD *v2; // r0

  *(_DWORD *)this = &off_458BD0;
  Ogre::ReflectEffect::onLostDevice(this);
  v2 = *((_DWORD **)this + 180);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 180) = 0;
  }
  Ogre::Singleton<Ogre::ReflectEffect>::ms_Singleton = 0;
  Ogre::SceneRenderer::~SceneRenderer(this);
}


//======================================================================
// Ogre::ReflectEffect::~ReflectEffect()
// address: 0x001A0BC8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ReflectEffect::~ReflectEffect(Ogre::ReflectEffect *this)
{
  Ogre::ReflectEffect::~ReflectEffect(this);
  operator delete(this);
}


//======================================================================
// Ogre::ReflectEffect::ReflectEffect(void)
// address: 0x001A0BDC   size: 0x6E (110 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13ReflectEffectC1Ev'
Ogre::ReflectEffect *__fastcall Ogre::ReflectEffect::ReflectEffect(Ogre::ReflectEffect *this)
{
  Ogre::Camera *v2; // r5
  int v3; // r1
  TiXmlElement *v4; // r2

  Ogre::SceneRenderer::SceneRenderer(this);
  Ogre::Singleton<Ogre::ReflectEffect>::ms_Singleton = (int)this;
  *(_DWORD *)this = &off_458BD0;
  Ogre::Matrix4::Matrix4((Ogre::ReflectEffect *)((char *)this + 640));
  *((_DWORD *)this + 176) = 0;
  *((_DWORD *)this + 177) = 0;
  *((_DWORD *)this + 181) = 0;
  *((_DWORD *)this + 182) = 0;
  *((_DWORD *)this + 179) = -1;
  *((_DWORD *)this + 178) = 1120403456;
  v2 = (Ogre::Camera *)operator new(0x268u);
  Ogre::Camera::Camera(v2);
  *((_DWORD *)this + 180) = v2;
  Ogre::ReflectEffect::onRestoreDevice(this, v3, v4);
  return this;
}


//======================================================================
// Ogre::ReflectEffect::caculateReflectCamera(Ogre::SceneRenderer *,Ogre::Camera *)
// address: 0x001A0C58   size: 0x158 (344 bytes)
//======================================================================
int __fastcall Ogre::ReflectEffect::caculateReflectCamera(
        Ogre::ReflectEffect *this,
        Ogre::SceneRenderer *a2,
        Ogre::Camera *a3)
{
  Ogre::Camera *v3; // r6
  char *ViewMatrix; // r0
  char *ProjectMatrix; // r0
  float v7; // r0
  float v8; // r4
  float v9; // r5
  float v10; // r6
  float v11; // r0
  float v14; // [sp+8h] [bp-104h]
  float v15; // [sp+Ch] [bp-100h]
  double v16; // [sp+10h] [bp-FCh]
  float v17; // [sp+18h] [bp-F4h]
  float v18; // [sp+1Ch] [bp-F0h]
  _DWORD v19[3]; // [sp+24h] [bp-E8h] BYREF
  _DWORD v20[3]; // [sp+30h] [bp-DCh] BYREF
  _DWORD v21[3]; // [sp+3Ch] [bp-D0h] BYREF
  float v22[16]; // [sp+48h] [bp-C4h] BYREF
  _DWORD v23[16]; // [sp+88h] [bp-84h] BYREF
  float v24[17]; // [sp+C8h] [bp-44h] BYREF

  v3 = *((Ogre::Camera **)a2 + 146);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v22);
  ViewMatrix = Ogre::Camera::getViewMatrix(v3);
  Ogre::Matrix4::Matrix4((int)v23, (const Ogre::Matrix4 *)ViewMatrix);
  ProjectMatrix = Ogre::Camera::getProjectMatrix(v3);
  Ogre::Matrix4::Matrix4((int)v24, (const Ogre::Matrix4 *)ProjectMatrix);
  Ogre::Matrix4::inverse((Ogre::Matrix4 *)v23, (Ogre::Matrix4 *)v22);
  v15 = v22[12];
  v7 = (float)(*((float *)this + 178) + *((float *)this + 178)) - v22[13];
  v19[1] = v23[6] + 0x80000000;
  v19[0] = v23[2];
  v19[2] = v23[10];
  v18 = v7;
  v17 = v22[14];
  v14 = COERCE_FLOAT(LODWORD(v24[14]) + 0x80000000) / v24[10];
  v8 = v24[5];
  v9 = (float)(v24[10] * v14) / (float)(v24[10] - 1.0);
  v16 = j_atan(v24[5]);
  v10 = v8 / v24[0];
  v21[0] = (int)(float)(v15 * 10.0);
  v21[1] = (int)(float)(v18 * 10.0);
  v21[2] = (int)(float)(v17 * 10.0);
  v20[0] = 0;
  v20[1] = -1082130432;
  v20[2] = 0;
  Ogre::Camera::setLookDirect(a3, (const Ogre::WorldPos *)v21, (const Ogre::Vector3 *)v19, (const Ogre::Vector3 *)v20);
  *((float *)a3 + 63) = v14;
  *((float *)a3 + 64) = v9 * 4.0;
  Ogre::Camera::setRatio(a3, v10);
  v11 = 90.0 - v16 / 3.1415925 * 180.0 + 90.0 - v16 / 3.1415925 * 180.0;
  *((float *)a3 + 60) = v11;
  return (*(int (__fastcall **)(Ogre::Camera *, _DWORD))(*(_DWORD *)a3 + 40))(a3, 0);
}


//======================================================================
// Ogre::ReflectEffect::ValidateCreateResult(void)
// address: 0x001A0DD0   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::ReflectEffect::ValidateCreateResult(Ogre::ReflectEffect *this)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 181);
  if ( v2 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 40))(v2) != 0 )
    return (*(unsigned __int8 (__fastcall **)(_DWORD))(**((_DWORD **)this + 181) + 44))(*((_DWORD *)this + 181)) ^ 1;
  else
    return 1;
}

