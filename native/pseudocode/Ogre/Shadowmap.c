// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Shadowmap

//======================================================================
// Ogre::Shadowmap::getRTTI(void)const
// address: 0x00198114   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Shadowmap::getRTTI(Ogre::Shadowmap *this)
{
  return &Ogre::Shadowmap::m_RTTI;
}


//======================================================================
// Ogre::Shadowmap::queryShaderEnv(Ogre::ShaderEnvData &,Ogre::Matrix4 const&)
// address: 0x00198120   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::Shadowmap::queryShaderEnv(
        Ogre::Shadowmap *this,
        Ogre::ShaderEnvData *a2,
        const Ogre::Matrix4 *a3)
{
  ;
}


//======================================================================
// Ogre::Shadowmap::getEffectWeight(Ogre::Vector3 const&,float)
// address: 0x00198122   size: 0x4 (4 bytes)
//======================================================================
int Ogre::Shadowmap::getEffectWeight()
{
  return 0;
}


//======================================================================
// Ogre::Shadowmap::caculateShadowCamera(Ogre::SceneRenderer *,Ogre::Camera *)
// address: 0x00198128   size: 0x404 (1028 bytes)
//======================================================================
int __fastcall Ogre::Shadowmap::caculateShadowCamera(Ogre::Shadowmap *this, Ogre::SceneRenderer *a2, Ogre::Camera *a3)
{
  Ogre::Camera *v3; // r5
  float v4; // r3
  float v5; // r2
  float v6; // r0
  char *ViewMatrix; // r0
  char *ProjectMatrix; // r0
  float v9; // r5
  Ogre::Vector3 *v10; // r6
  Ogre::Vector3 *v11; // r4
  float *v12; // r4
  float v14; // [sp+0h] [bp-2D4h]
  float v15; // [sp+4h] [bp-2D0h]
  float v16; // [sp+8h] [bp-2CCh]
  float v17; // [sp+Ch] [bp-2C8h]
  float v18; // [sp+Ch] [bp-2C8h]
  float v19; // [sp+10h] [bp-2C4h]
  float v20; // [sp+10h] [bp-2C4h]
  float v21; // [sp+14h] [bp-2C0h]
  float v22; // [sp+14h] [bp-2C0h]
  float v24; // [sp+20h] [bp-2B4h] BYREF
  float v25; // [sp+24h] [bp-2B0h] BYREF
  float v26; // [sp+28h] [bp-2ACh]
  float v27; // [sp+2Ch] [bp-2A8h]
  float v28; // [sp+30h] [bp-2A4h] BYREF
  float v29; // [sp+34h] [bp-2A0h]
  float v30; // [sp+38h] [bp-29Ch]
  float v31; // [sp+3Ch] [bp-298h] BYREF
  float v32; // [sp+40h] [bp-294h]
  float v33; // [sp+44h] [bp-290h]
  float v34[3]; // [sp+48h] [bp-28Ch] BYREF
  float v35; // [sp+54h] [bp-280h] BYREF
  float v36; // [sp+58h] [bp-27Ch]
  float v37; // [sp+5Ch] [bp-278h]
  float v38[3]; // [sp+60h] [bp-274h] BYREF
  float v39; // [sp+6Ch] [bp-268h] BYREF
  float v40; // [sp+70h] [bp-264h]
  float v41; // [sp+74h] [bp-260h]
  _DWORD v42[3]; // [sp+78h] [bp-25Ch] BYREF
  _DWORD v43[4]; // [sp+84h] [bp-250h] BYREF
  float v44[7]; // [sp+94h] [bp-240h] BYREF
  float v45[2]; // [sp+B0h] [bp-224h] BYREF
  float v46; // [sp+B8h] [bp-21Ch]
  float v47; // [sp+E0h] [bp-1F4h]
  float v48; // [sp+E4h] [bp-1F0h]
  float v49; // [sp+E8h] [bp-1ECh]
  float v50[16]; // [sp+F0h] [bp-1E4h] BYREF
  float v51[16]; // [sp+130h] [bp-1A4h] BYREF
  _BYTE v52[64]; // [sp+170h] [bp-164h] BYREF
  _BYTE v53[64]; // [sp+1B0h] [bp-124h] BYREF
  _BYTE v54[64]; // [sp+1F0h] [bp-E4h] BYREF
  _BYTE v55[64]; // [sp+230h] [bp-A4h] BYREF
  int v56; // [sp+270h] [bp-64h] BYREF
  int v57; // [sp+274h] [bp-60h]
  float v58; // [sp+278h] [bp-5Ch]
  float v59[21]; // [sp+27Ch] [bp-58h] BYREF
  char v60; // [sp+2D0h] [bp-4h] BYREF

  v3 = *((Ogre::Camera **)a2 + 146);
  v4 = *((float *)this + 18);
  v5 = *((float *)this + 19);
  v6 = *((float *)this + 20);
  v26 = v5;
  v27 = v6;
  v25 = v4;
  Ogre::Normalize(&v25);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v45);
  ViewMatrix = Ogre::Camera::getViewMatrix(v3);
  Ogre::Matrix4::Matrix4((int)v50, (const Ogre::Matrix4 *)ViewMatrix);
  ProjectMatrix = Ogre::Camera::getProjectMatrix(v3);
  Ogre::Matrix4::Matrix4((int)v51, (const Ogre::Matrix4 *)ProjectMatrix);
  Ogre::Matrix4::inverse((Ogre::Matrix4 *)v50, (Ogre::Matrix4 *)v45);
  v19 = v50[2];
  v30 = v49;
  v17 = v50[6];
  v28 = v47;
  v21 = v50[10];
  v44[2] = v49;
  v44[0] = v47;
  v44[3] = v50[2];
  v44[6] = 3.4028e38;
  v44[4] = v50[6];
  v29 = v48;
  v44[1] = v48;
  v43[1] = 1065353216;
  v44[5] = v50[10];
  v43[2] = 0;
  v43[3] = 1120403456;
  v43[0] = 0;
  Ogre::Ray::intersectPlane(v44, (int)v43, (const Ogre::Vector3 *)&v24);
  v31 = v28 + (float)(v19 * v24);
  v33 = (float)(v21 * v24) + v30;
  v32 = (float)(v17 * v24) + v29;
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v50, (Ogre::Vector3 *)v34, (const Ogre::Vector3 *)&v31);
  v9 = (float)((float)((float)(v34[2] + v24) * v51[10]) + v51[14]) / (float)(v34[2] + v24);
  Ogre::operator*((Ogre::Matrix4 *)v52, v50, v51);
  Ogre::Matrix4::Matrix4((int)v53, (const Ogre::Matrix4 *)v52);
  Ogre::Matrix4::inverse((Ogre::Matrix4 *)v53);
  v10 = (Ogre::Vector3 *)&v56;
  v59[0] = 1.0;
  *(float *)&v56 = -1.0;
  *(float *)&v57 = -1.0;
  v59[1] = -1.0;
  v59[3] = -1.0;
  v59[9] = -1.0;
  v59[10] = -1.0;
  v59[13] = -1.0;
  v59[15] = -1.0;
  v59[4] = 1.0;
  v59[6] = 1.0;
  v59[7] = 1.0;
  v59[12] = 1.0;
  v59[16] = 1.0;
  v59[18] = 1.0;
  v59[19] = 1.0;
  v58 = 0.0;
  v59[2] = 0.0;
  v59[5] = 0.0;
  v59[8] = 0.0;
  v59[11] = v9;
  v59[14] = v9;
  v59[17] = v9;
  v59[20] = v9;
  v11 = (Ogre::Vector3 *)&v56;
  do
  {
    Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v53, v11, v11);
    v11 = (Ogre::Vector3 *)((char *)v11 + 12);
  }
  while ( v11 != (Ogre::Vector3 *)&v60 );
  v35 = v31 - (float)(v25 * 10000.0);
  v36 = v32 - (float)(v26 * 10000.0);
  v37 = v33 - (float)(v27 * 10000.0);
  v38[0] = (float)(v27 * 0.0) - (float)(v46 * v26);
  v38[1] = (float)(v46 * v25) - (float)(v45[0] * v27);
  v38[2] = (float)(v45[0] * v26) - (float)(v25 * 0.0);
  Ogre::Normalize(v38);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v54);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v55);
  Ogre::Matrix4::makeViewMatrix(
    (Ogre::Matrix4 *)v54,
    (const Ogre::Vector3 *)&v35,
    (const Ogre::Vector3 *)&v28,
    (const Ogre::Vector3 *)v38);
  Ogre::Matrix4::operator=(v55, v54);
  Ogre::Matrix4::inverse((Ogre::Matrix4 *)v55);
  do
  {
    Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v54, v10, v10);
    v10 = (Ogre::Vector3 *)((char *)v10 + 12);
  }
  while ( v10 != (Ogre::Vector3 *)&v60 );
  v16 = *(float *)&v56;
  v15 = *(float *)&v57;
  v18 = v58;
  v12 = v59;
  v22 = v58;
  v20 = *(float *)&v57;
  v14 = *(float *)&v56;
  do
  {
    if ( *v12 < v14 )
      v14 = *v12;
    if ( v12[1] < v20 )
      v20 = v12[1];
    if ( v12[2] < v22 )
      v22 = v12[2];
    if ( *v12 > v16 )
      v16 = *v12;
    if ( v12[1] > v15 )
      v15 = v12[1];
    if ( v12[2] > v18 )
      v18 = v12[2];
    v12 += 3;
  }
  while ( v12 != (float *)&v60 );
  v39 = (float)(v14 + v16) * 0.5;
  v40 = (float)(v20 + v15) * 0.5;
  v41 = (float)(v22 + v18) * 0.5;
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v55, (Ogre::Vector3 *)&v39, (const Ogre::Vector3 *)&v39);
  v37 = v41 - (float)(v27 * 10000.0);
  v35 = v39 - (float)(v25 * 10000.0);
  v36 = v40 - (float)(v26 * 10000.0);
  v42[0] = (int)(float)(v35 * 10.0);
  v42[1] = (int)(float)(v36 * 10.0);
  v42[2] = (int)(float)(v37 * 10.0);
  Ogre::Camera::setLookDirect(a3, (const Ogre::WorldPos *)v42, (const Ogre::Vector3 *)&v25, (const Ogre::Vector3 *)v38);
  *((_DWORD *)a3 + 60) = 0;
  *((float *)a3 + 61) = (float)(unsigned int)(float)(v16 - v14);
  *((_DWORD *)a3 + 63) = 1092616192;
  *((_DWORD *)a3 + 64) = 1198153728;
  Ogre::Camera::setRatio(a3, (float)(unsigned int)(float)(v16 - v14) / (float)(unsigned int)(float)(v15 - v20));
  return (*(int (__fastcall **)(Ogre::Camera *, _DWORD))(*(_DWORD *)a3 + 40))(a3, 0);
}


//======================================================================
// Ogre::Shadowmap::prepare(Ogre::SceneRenderer *,unsigned int)
// address: 0x0019859E   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Shadowmap::prepare(_DWORD *this, Ogre::SceneRenderer *a2, int a3)
{
  if ( *(this + 25) != a3 )
    return sub_19852C((int)this, a2, a3);
  return this;
}


//======================================================================
// Ogre::Shadowmap::onLostDevice(void)
// address: 0x001985AC   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Shadowmap::onLostDevice(Ogre::Shadowmap *this)
{
  _DWORD *v2; // r0
  _DWORD *result; // r0

  v2 = *((_DWORD **)this + 27);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 27) = 0;
  }
  result = *((_DWORD **)this + 17);
  if ( result != nullptr )
  {
    result = Ogre::BaseObject::release(result);
    *((_DWORD *)this + 17) = 0;
  }
  return result;
}


//======================================================================
// Ogre::Shadowmap::~Shadowmap()
// address: 0x001985D0   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9ShadowmapD2Ev'
void __fastcall Ogre::Shadowmap::~Shadowmap(Ogre::Shadowmap *this)
{
  _DWORD *v2; // r0

  *(_DWORD *)this = &off_458728;
  v2 = *((_DWORD **)this + 26);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 26) = 0;
  }
  Ogre::Shadowmap::onLostDevice(this);
  Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton = 0;
}


//======================================================================
// Ogre::Shadowmap::onRestoreDevice(void)
// address: 0x00198608   size: 0x64 (100 bytes)
//======================================================================
int __fastcall Ogre::Shadowmap::onRestoreDevice(Ogre::Shadowmap *this)
{
  int result; // r0
  int v3; // r6
  int v4; // r0
  int v5; // [sp+0h] [bp-24h] BYREF
  int v6; // [sp+4h] [bp-20h] BYREF
  int v7; // [sp+8h] [bp-1Ch]
  int v8; // [sp+Ch] [bp-18h]
  int v9; // [sp+10h] [bp-14h]
  int v10; // [sp+14h] [bp-10h]
  int v11; // [sp+18h] [bp-Ch]
  int v12; // [sp+1Ch] [bp-8h]

  result = Ogre::Root::getShadowmapSize((TiXmlNode **)Ogre::Singleton<Ogre::Root>::ms_Singleton);
  if ( result != 0 )
  {
    if ( result == 1 )
      result = 2048;
    v9 = 1;
    v10 = 1;
    v7 = result;
    v8 = result;
    v11 = 39;
    v5 = 3;
    v12 = 0;
    v6 = 0;
    v3 = operator new(0x30u);
    Ogre::RT_TEXTURE::RT_TEXTURE(v3, &v6, &v5);
    *((_DWORD *)this + 17) = v3;
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 32))(v3);
    result = (*(int (__fastcall **)(_DWORD, int, _DWORD, _DWORD, int, int, int, int, int, int, int, int))(**(_DWORD **)(v4 + 12) + 28))(
               *(_DWORD *)(v4 + 12),
               v4,
               0,
               *(_DWORD *)(**(_DWORD **)(v4 + 12) + 28),
               v5,
               v6,
               v7,
               v8,
               v9,
               v10,
               v11,
               v12);
    *((_DWORD *)this + 27) = result;
  }
  return result;
}


//======================================================================
// Ogre::Shadowmap::Shadowmap(void)
// address: 0x00198670   size: 0x5C (92 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9ShadowmapC1Ev'
Ogre::Shadowmap *__fastcall Ogre::Shadowmap::Shadowmap(Ogre::Shadowmap *this)
{
  Ogre::Camera *v2; // r7

  Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton = (int)this;
  *(_DWORD *)this = &off_458728;
  Ogre::Matrix4::Matrix4((Ogre::Shadowmap *)((char *)this + 4));
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 25) = -1;
  *((_DWORD *)this + 19) = -1082130432;
  *((_DWORD *)this + 20) = 1065353216;
  Ogre::Normalize((float *)this + 18);
  v2 = (Ogre::Camera *)operator new(0x268u);
  Ogre::Camera::Camera(v2);
  *((_DWORD *)this + 26) = v2;
  *((_DWORD *)this + 21) = 1065353216;
  *((_DWORD *)this + 22) = -1;
  *((_DWORD *)this + 23) = 1065353216;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 27) = 0;
  Ogre::Shadowmap::onRestoreDevice(this);
  return this;
}

