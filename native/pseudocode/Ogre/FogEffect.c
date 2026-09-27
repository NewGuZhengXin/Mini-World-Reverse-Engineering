// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FogEffect

//======================================================================
// Ogre::FogEffect::getRTTI(void)const
// address: 0x001541DC   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::FogEffect::getRTTI(Ogre::FogEffect *this)
{
  return &Ogre::FogEffect::m_RTTI;
}


//======================================================================
// Ogre::FogEffect::prepare(Ogre::SceneRenderer *,unsigned int)
// address: 0x001541E8   size: 0x2 (2 bytes)
//======================================================================
void Ogre::FogEffect::prepare()
{
  ;
}


//======================================================================
// Ogre::FogEffect::getEffectWeight(Ogre::Vector3 const&,float)
// address: 0x001541EA   size: 0x6 (6 bytes)
//======================================================================
int Ogre::FogEffect::getEffectWeight()
{
  return 1065353216;
}


//======================================================================
// Ogre::FogEffect::~FogEffect()
// address: 0x001541F0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9FogEffectD1Ev'
void __fastcall Ogre::FogEffect::~FogEffect(Ogre::FogEffect *this)
{
  *(_DWORD *)this = &off_456420;
  Ogre::EffectObject::~EffectObject(this);
}


//======================================================================
// Ogre::FogEffect::~FogEffect()
// address: 0x0015420C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::FogEffect::~FogEffect(Ogre::FogEffect *this)
{
  Ogre::FogEffect::~FogEffect(this);
  operator delete(this);
}


//======================================================================
// Ogre::FogEffect::queryShaderEnv(Ogre::ShaderEnvData &,Ogre::Matrix4 const&)
// address: 0x0015421E   size: 0x58 (88 bytes)
//======================================================================
int __fastcall Ogre::FogEffect::queryShaderEnv(_DWORD *a1, int a2)
{
  int v2; // r4
  _DWORD *v3; // r2
  _DWORD *v4; // r3
  _DWORD *v5; // r0
  _DWORD *v6; // r1
  int v7; // r4
  int v8; // r5
  int result; // r0

  v2 = a1[53];
  v3 = a1 + 59;
  v4 = a1 + 60;
  v5 = a1 + 54;
  if ( v2 != 0 )
  {
    *(_BYTE *)(a2 + 2) |= 1u;
    *(_DWORD *)(a2 + 180) = *v3;
    *(_DWORD *)(a2 + 184) = *v4;
    v6 = (_DWORD *)(a2 + 204);
  }
  else
  {
    *(_BYTE *)(a2 + 1) |= 0x80u;
    *(_DWORD *)(a2 + 172) = *v3;
    *(_DWORD *)(a2 + 176) = *v4;
    v6 = (_DWORD *)(a2 + 188);
  }
  v7 = v5[1];
  v8 = v5[2];
  *v6 = *v5;
  v6[1] = v7;
  v6[2] = v8;
  result = v5[3];
  v6[3] = result;
  return result;
}


//======================================================================
// Ogre::FogEffect::_serialize(Ogre::Archive &,int)
// address: 0x00154276   size: 0x44 (68 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::FogEffect::_serialize(Ogre::FogEffect *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive::serialize(a2, (char *)this + 212, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 216, 0x10u);
  Ogre::Archive::serialize(a2, (char *)this + 232, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 236, 4u);
  return Ogre::Archive::serialize(a2, (char *)this + 240, 4u);
}


//======================================================================
// Ogre::FogEffect::FogEffect(Ogre::FOG_TYPE)
// address: 0x001542BC   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9FogEffectC1ENS_8FOG_TYPEE'
int __fastcall Ogre::FogEffect::FogEffect(int a1, int a2)
{
  Ogre::MovableObject::MovableObject((Ogre::MovableObject *)a1);
  *(_BYTE *)(a1 + 209) = 0;
  *(_DWORD *)a1 = &off_456420;
  *(_DWORD *)(a1 + 212) = a2;
  *(_DWORD *)(a1 + 216) = 1065353216;
  *(_DWORD *)(a1 + 220) = 1065353216;
  *(_DWORD *)(a1 + 224) = 1065353216;
  *(_DWORD *)(a1 + 228) = 1065353216;
  *(_DWORD *)(a1 + 232) = 1065353216;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 1065353216;
  return a1;
}

