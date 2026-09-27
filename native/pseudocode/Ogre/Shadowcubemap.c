// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Shadowcubemap

//======================================================================
// Ogre::Shadowcubemap::getRTTI(void)const
// address: 0x0014EF58   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Shadowcubemap::getRTTI(Ogre::Shadowcubemap *this)
{
  return &Ogre::Shadowcubemap::m_RTTI;
}


//======================================================================
// Ogre::Shadowcubemap::prepare(Ogre::SceneRenderer *,unsigned int)
// address: 0x0014EF64   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::Shadowcubemap::prepare(int result, int a2, int a3)
{
  if ( *(_DWORD *)(result + 32) != a3 )
    *(_DWORD *)(result + 32) = a3;
  return result;
}


//======================================================================
// Ogre::Shadowcubemap::queryShaderEnv(Ogre::ShaderEnvData &,Ogre::Matrix4 const&)
// address: 0x0014EF70   size: 0x2 (2 bytes)
//======================================================================
void Ogre::Shadowcubemap::queryShaderEnv()
{
  ;
}


//======================================================================
// Ogre::Shadowcubemap::getEffectWeight(Ogre::Vector3 const&,float)
// address: 0x0014EF72   size: 0x4 (4 bytes)
//======================================================================
int Ogre::Shadowcubemap::getEffectWeight()
{
  return 0;
}


//======================================================================
// Ogre::Shadowcubemap::Shadowcubemap(void)
// address: 0x0014EF78   size: 0xA0 (160 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13ShadowcubemapC1Ev'
Ogre::Shadowcubemap *__fastcall Ogre::Shadowcubemap::Shadowcubemap(Ogre::Shadowcubemap *this)
{
  int v2; // r6
  int v3; // r5
  int v4; // r0
  int v5; // r0
  char *v6; // r3
  int i; // r5
  Ogre::Camera *v8; // r6
  char *v9; // r3
  int v11; // [sp+8h] [bp-24h] BYREF
  int v12; // [sp+Ch] [bp-20h] BYREF
  int v13; // [sp+10h] [bp-1Ch]
  int v14; // [sp+14h] [bp-18h]
  int v15; // [sp+18h] [bp-14h]
  int v16; // [sp+1Ch] [bp-10h]
  int v17; // [sp+20h] [bp-Ch]
  int v18; // [sp+24h] [bp-8h]

  Ogre::Singleton<Ogre::Shadowcubemap>::ms_Singleton = (int)this;
  *(_DWORD *)this = &off_4561A8;
  *((_DWORD *)this + 8) = -1;
  v15 = 1;
  v16 = 1;
  v12 = 2;
  v13 = 256;
  v14 = 256;
  v17 = 33;
  v18 = 6;
  v11 = 4;
  v2 = operator new(0x30u);
  Ogre::RT_TEXTURE::RT_TEXTURE(v2, &v12, &v11);
  v3 = 0;
  *((_DWORD *)this + 1) = v2;
  do
  {
    v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 32))(*((_DWORD *)this + 1));
    v5 = (*(int (__fastcall **)(_DWORD, int, int, int, _DWORD, _DWORD, int, int, int, int, int, int, int, int))(**(_DWORD **)(v4 + 12) + 24))(
           *(_DWORD *)(v4 + 12),
           v4,
           v3 << 16,
           16,
           0,
           0,
           v11,
           v12,
           v13,
           v14,
           v15,
           v16,
           v17,
           v18);
    v6 = (char *)this + 4 * v3++;
    *((_DWORD *)v6 + 15) = v5;
  }
  while ( v3 != 6 );
  for ( i = 0; i != 24; i += 4 )
  {
    v8 = (Ogre::Camera *)operator new(0x268u);
    Ogre::Camera::Camera(v8);
    v9 = (char *)this + i;
    *((_DWORD *)v9 + 9) = v8;
  }
  *((_DWORD *)this + 6) = 1065353216;
  return this;
}


//======================================================================
// Ogre::Shadowcubemap::getCameras(Ogre::Camera **)
// address: 0x0014F020   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::Shadowcubemap::getCameras(int result, int a2)
{
  int i; // r3

  for ( i = 0; i != 24; i += 4 )
    *(_DWORD *)(a2 + i) = *(_DWORD *)(result + i + 36);
  return result;
}


//======================================================================
// Ogre::Shadowcubemap::~Shadowcubemap()
// address: 0x0014F034   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13ShadowcubemapD2Ev'
void __fastcall Ogre::Shadowcubemap::~Shadowcubemap(Ogre::Shadowcubemap *this)
{
  int v2; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  v2 = 0;
  *(_DWORD *)this = &off_4561A8;
  do
  {
    v3 = *(_DWORD **)((char *)this + v2 + 60);
    if ( v3 != nullptr )
    {
      Ogre::BaseObject::release(v3);
      *(_DWORD *)((char *)this + v2 + 60) = 0;
    }
    v2 += 4;
  }
  while ( v2 != 24 );
  v4 = *((_DWORD **)this + 1);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 1) = 0;
  }
  Ogre::Singleton<Ogre::Shadowcubemap>::ms_Singleton = 0;
}


//======================================================================
// Ogre::Shadowcubemap::SetLightPosRange(Ogre::Vector3,float)
// address: 0x0014F080   size: 0x14C (332 bytes)
//======================================================================
int __fastcall Ogre::Shadowcubemap::SetLightPosRange(_DWORD *a1, float *a2, int a3)
{
  _DWORD *v4; // r7
  Ogre::Camera **v5; // r6
  int v6; // r2
  _DWORD *v7; // r3
  Ogre::Camera *v8; // r0
  int result; // r0
  float *v10; // [sp+4h] [bp-D4h]
  Ogre::Camera *v11; // [sp+14h] [bp-C4h]
  float v13; // [sp+1Ch] [bp-BCh]
  float v14; // [sp+20h] [bp-B8h]
  float v15; // [sp+24h] [bp-B4h]
  _DWORD v16[3]; // [sp+2Ch] [bp-ACh] BYREF
  _DWORD v17[3]; // [sp+38h] [bp-A0h] BYREF
  _DWORD v18[3]; // [sp+44h] [bp-94h] BYREF
  _BYTE v19[64]; // [sp+50h] [bp-88h] BYREF
  _DWORD v20[18]; // [sp+90h] [bp-48h] BYREF
  _DWORD v21[19]; // [sp+D8h] [bp+0h] BYREF

  a1[2] = *(_DWORD *)a2;
  v4 = v21;
  a1[3] = *((_DWORD *)a2 + 1);
  a1[4] = *((_DWORD *)a2 + 2);
  v20[3] = -1027080192;
  v20[10] = -1027080192;
  v20[17] = -1027080192;
  v20[0] = 1120403456;
  v20[1] = 0;
  v20[2] = 0;
  memset(&v20[4], 0, 12);
  v20[7] = 1120403456;
  v20[8] = 0;
  v20[9] = 0;
  memset(&v20[11], 0, 12);
  v20[14] = 1120403456;
  v20[15] = 0;
  v20[16] = 0;
  v21[0] = 0;
  v21[1] = 1120403456;
  v21[2] = 0;
  v21[3] = 0;
  v21[4] = 1120403456;
  memset(&v21[5], 0, 12);
  v21[8] = -1027080192;
  v21[9] = 0;
  v21[10] = 0;
  v21[11] = 1120403456;
  v21[12] = 0;
  v21[13] = 1120403456;
  v21[14] = 0;
  v21[15] = 0;
  v21[16] = 1120403456;
  v21[17] = 0;
  v10 = (float *)v20;
  v5 = (Ogre::Camera **)(a1 + 9);
  do
  {
    v13 = *a2 + *v10;
    v14 = a2[1] + v10[1];
    v15 = a2[2] + v10[2];
    v16[0] = *v4;
    v16[1] = v4[1];
    v6 = v4[2];
    v4 += 3;
    v16[2] = v6;
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v19);
    v11 = *v5;
    v17[0] = (int)(float)(*a2 * 10.0);
    v17[1] = (int)(float)(a2[1] * 10.0);
    v17[2] = (int)(float)(a2[2] * 10.0);
    v18[0] = (int)(float)(v13 * 10.0);
    v18[1] = (int)(float)(v14 * 10.0);
    v18[2] = (int)(float)(v15 * 10.0);
    Ogre::Camera::setLookAt(v11, (const Ogre::WorldPos *)v17, (const Ogre::WorldPos *)v18, (const Ogre::Vector3 *)v16);
    Ogre::Camera::setRatio(*v5, 1.0);
    *((_DWORD *)*v5 + 60) = 1119092736;
    v7 = (_DWORD *)((char *)*v5 + 252);
    *v7 = 1036831949;
    v7[1] = a3;
    v8 = *v5++;
    result = (*(int (__fastcall **)(Ogre::Camera *, _DWORD))(*(_DWORD *)v8 + 40))(v8, 0);
    v10 += 3;
  }
  while ( v21 != (_DWORD *)v10 );
  return result;
}

