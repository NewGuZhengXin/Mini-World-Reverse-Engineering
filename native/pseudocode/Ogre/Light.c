// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Light

//======================================================================
// Ogre::Light::getRTTI(void)const
// address: 0x001431D4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Light::getRTTI(Ogre::Light *this)
{
  return &Ogre::Light::m_RTTI;
}


//======================================================================
// Ogre::Light::prepare(Ogre::SceneRenderer *,unsigned int)
// address: 0x001431E0   size: 0x2 (2 bytes)
//======================================================================
void Ogre::Light::prepare()
{
  ;
}


//======================================================================
// Ogre::Light::~Light()
// address: 0x00143214   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5LightD1Ev'
void __fastcall Ogre::Light::~Light(Ogre::Light *this)
{
  *(_DWORD *)this = &off_455AD8;
  Ogre::EffectObject::~EffectObject(this);
}


//======================================================================
// Ogre::Light::~Light()
// address: 0x00143230   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Light::~Light(Ogre::Light *this)
{
  Ogre::Light::~Light(this);
  operator delete(this);
}


//======================================================================
// Ogre::Light::_serialize(Ogre::Archive &,int)
// address: 0x00143242   size: 0x84 (132 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Light::_serialize(Ogre::Light *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive::serialize(a2, (char *)this + 212, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 209, 1u);
  Ogre::Archive::serialize(a2, (char *)this + 216, 1u);
  Ogre::Archive::serialize(a2, (char *)this + 217, 1u);
  Ogre::Archive::serialize(a2, (char *)this + 218, 1u);
  Ogre::Archive::serialize(a2, (char *)this + 219, 1u);
  Ogre::Archive::serialize(a2, (char *)this + 224, 0x10u);
  Ogre::Archive::serialize(a2, (char *)this + 240, 0x10u);
  Ogre::Archive::serialize(a2, (char *)this + 276, 4u);
  return Ogre::Archive::serialize(a2, (char *)this + 280, 4u);
}


//======================================================================
// Ogre::Light::getEffectWeight(Ogre::Vector3 const&,float)
// address: 0x001433C6   size: 0xB8 (184 bytes)
//======================================================================
float __fastcall Ogre::Light::getEffectWeight(Ogre::MovableObject *a1, float *a2, float a3)
{
  int v3; // r3
  float *WorldMatrix; // r0
  float v7; // r7
  float v8; // r0
  float *v9; // r4
  float v10; // r0
  float v11; // r5
  float v13; // [sp+0h] [bp-Ch]

  v3 = *((_DWORD *)a1 + 53);
  if ( v3 == 1 )
  {
    WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(a1);
    v7 = WorldMatrix[12] - *a2;
    v13 = WorldMatrix[13] - a2[1];
    v8 = WorldMatrix[14] - a2[2];
    v9 = (float *)((char *)a1 + 252);
    v10 = j_sqrt((float)((float)((float)(v7 * v7) + (float)(v13 * v13)) + (float)(v8 * v8)));
    v11 = v10 - a3;
    if ( (float)(v10 - a3) <= v9[7] )
    {
      if ( v11 > 0.0 )
        return 1.0 / (float)((float)(v11 * v9[6]) + 1.0);
      return 1.0;
    }
  }
  else if ( v3 == 2 )
  {
    return 1.0;
  }
  return 0.0;
}


//======================================================================
// Ogre::Light::queryShaderEnv(Ogre::ShaderEnvData &,Ogre::Matrix4 const&)
// address: 0x00143480   size: 0x270 (624 bytes)
//======================================================================
int __fastcall Ogre::Light::queryShaderEnv(Ogre::Light *this, Ogre::ShaderEnvData *a2, const Ogre::Matrix4 *a3)
{
  int result; // r0
  unsigned int v6; // r2
  int v7; // r3
  char *v8; // r3
  int v9; // r1
  int v10; // r6
  float *WorldMatrix; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  char v15; // r1
  char v16; // r2
  int v17; // r3
  char v18; // r3
  char v19; // r1
  char v20; // r2
  char v21; // r2
  char v22; // r1
  char v23; // r2
  char v24; // r3
  char v25; // r1
  int v26; // r6
  char v27; // r1
  char v28; // r2
  int v29; // r3
  _DWORD *v30; // r4
  char *v31; // r5
  int v32; // r1
  int v33; // r6
  char v34; // r7
  int v35; // [sp+8h] [bp-D4h]
  _DWORD *v36; // [sp+10h] [bp-CCh]
  _DWORD v38[16]; // [sp+18h] [bp-C4h] BYREF
  float v39[16]; // [sp+58h] [bp-84h] BYREF
  int v40; // [sp+98h] [bp-44h] BYREF
  int v41; // [sp+9Ch] [bp-40h]
  int v42; // [sp+A0h] [bp-3Ch]

  *(float *)&result = COERCE_FLOAT(Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v38));
  if ( *((_BYTE *)this + 219) == 0 )
    goto LABEL_30;
  v6 = *(_BYTE *)a2 & 7;
  if ( v6 > 3 )
    return result;
  LOBYTE(v7) = Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton;
  if ( Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton == 0 )
  {
LABEL_7:
    v34 = v7;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 68) != 0 )
  {
    v7 = *(_DWORD *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 108);
    if ( v7 != 0 )
    {
      v34 = *((_BYTE *)this + 216);
      goto LABEL_9;
    }
    goto LABEL_7;
  }
  v34 = 0;
LABEL_9:
  v8 = (char *)a2 + 16 * v6 + 12;
  result = *((int *)this + 56);
  v9 = *((_DWORD *)this + 57);
  v10 = *((_DWORD *)this + 58);
  *(float *)v8 = *(float *)&result;
  *((_DWORD *)v8 + 1) = v9;
  *((_DWORD *)v8 + 2) = v10;
  *((_DWORD *)v8 + 3) = *((_DWORD *)this + 59);
  v36 = (_DWORD *)((char *)a2 + 16 * v6 + 72);
  v35 = *((_DWORD *)this + 53);
  if ( v35 == 1 )
  {
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v39);
    Ogre::Matrix4::inverse(a3, (Ogre::Matrix4 *)v39);
    WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(this);
    Ogre::operator*((Ogre::Matrix4 *)&v40, WorldMatrix, v39);
    Ogre::Matrix4::operator=(v38, &v40);
    v12 = v38[13];
    v13 = v38[14];
    v14 = *((_DWORD *)this + 70);
    v36[1] = v38[12];
    v36[4] = v14;
    v36[2] = v12;
    v36[3] = v13;
    v15 = *(_BYTE *)a2;
    v16 = *((_BYTE *)this + 217);
    v17 = *(_BYTE *)a2 & 7;
    if ( (*(_BYTE *)a2 & 7) == 0 )
    {
      result = 231;
      v18 = 16 * (v34 & 1);
      v19 = v15 & 0xC7 | (32 * (v16 & 1));
LABEL_24:
      *(_BYTE *)a2 = v19 | v18;
      goto LABEL_29;
    }
    if ( v17 == 1 )
    {
      result = *((_BYTE *)a2 + 1) & 0xFE;
      *((_BYTE *)a2 + 1) = v16 & 1 | result;
      v18 = v34 << 7;
      v20 = 63;
LABEL_23:
      v19 = v15 & v20;
      goto LABEL_24;
    }
    v21 = v16 & 1;
    v22 = v34 & 1;
    if ( v17 == 2 )
    {
      v23 = *((_BYTE *)a2 + 1) & 0xF5 | (8 * v21);
      v24 = 4 * v22;
      result = 251;
    }
    else
    {
      v23 = *((_BYTE *)a2 + 1) & 0xAF | (v21 << 6);
      result = 207;
      v24 = 32 * v22;
    }
    v25 = v23 & result | v24;
    goto LABEL_27;
  }
  if ( v35 == 2 )
  {
    sub_143370((int)v38, this, a3);
    v40 = 0;
    v41 = 0;
    v42 = -1082130432;
    Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v38, (Ogre::Vector3 *)&v40, (const Ogre::Vector3 *)&v40);
    v36[1] = v40;
    v36[2] = v41;
    v26 = v42;
    v36[4] = 0;
    v36[3] = v26;
    v27 = *(_BYTE *)a2;
    v28 = *((_BYTE *)this + 217);
    v29 = *(_BYTE *)a2 & 7;
    if ( (*(_BYTE *)a2 & 7) != 0 )
    {
      if ( v29 == 1 )
      {
        result = *((_BYTE *)a2 + 1) & 0xFE;
        *((_BYTE *)a2 + 1) = v28 & 1 | result;
        v15 = v27 | 0x40;
        v18 = v34 << 7;
        v20 = 127;
        goto LABEL_23;
      }
      if ( v29 != 2 )
      {
        result = *((_BYTE *)a2 + 1) & 0xAF | 0x10;
        *((_BYTE *)a2 + 1) = *((_BYTE *)a2 + 1) & 0x8F | 0x10 | ((v28 & 1) << 6) | (32 * (v34 & 1));
        goto LABEL_29;
      }
      result = 4 * (v34 & 1);
      v25 = *((_BYTE *)a2 + 1) & 0xF1 | 2 | (8 * (v28 & 1)) | result;
LABEL_27:
      *((_BYTE *)a2 + 1) = v25;
      goto LABEL_29;
    }
    result = 16 * (v34 & 1);
    *(_BYTE *)a2 = *(_BYTE *)a2 & 0xC7 | 8 | (32 * (v28 & 1)) | result;
  }
LABEL_29:
  *(_BYTE *)a2 = *(_BYTE *)a2 & 0xF8 | ((*(_BYTE *)a2 & 7) + 1) & 7;
LABEL_30:
  if ( *((_BYTE *)this + 218) != 0 )
  {
    *((float *)a2 + 39) = *((float *)a2 + 39) + *((float *)this + 60);
    *((float *)a2 + 40) = *((float *)a2 + 40) + *((float *)this + 61);
    *(float *)&result = *((float *)a2 + 41) + *((float *)this + 62);
    *((float *)a2 + 41) = *(float *)&result;
  }
  if ( *((_BYTE *)this + 217) != 0 )
  {
    v30 = (_DWORD *)((char *)a2 + 140);
    *((_DWORD *)this + 67) = *((_DWORD *)this + 68);
    v31 = (char *)this + 256;
    result = *(int *)v31;
    v32 = *((_DWORD *)v31 + 1);
    v33 = *((_DWORD *)v31 + 2);
    *v30 = *(_DWORD *)v31;
    v30[1] = v32;
    v30[2] = v33;
    v30[3] = *((_DWORD *)v31 + 3);
  }
  return result;
}


//======================================================================
// Ogre::Light::updateWorldCache(void)
// address: 0x001436F8   size: 0x32 (50 bytes)
//======================================================================
char *__fastcall Ogre::Light::updateWorldCache(Ogre::Light *this)
{
  Ogre::Light *v1; // r4
  char *result; // r0
  int v3; // r2
  int v4; // r1
  int v5; // r3
  _DWORD *v6; // r2

  v1 = this;
  Ogre::MovableObject::updateWorldCache(this);
  result = Ogre::MovableObject::getWorldMatrix(v1);
  v3 = *((_DWORD *)result + 14);
  v4 = *((_DWORD *)result + 13);
  *((_DWORD *)v1 + 35) = *((_DWORD *)result + 12);
  *((_DWORD *)v1 + 37) = v3;
  *((_DWORD *)v1 + 36) = v4;
  v5 = *((_DWORD *)v1 + 70);
  v6 = (_DWORD *)((char *)v1 + 164);
  v1 = (Ogre::Light *)((char *)v1 + 152);
  *v6 = v5;
  *(_DWORD *)v1 = v5;
  *((_DWORD *)v1 + 1) = v5;
  *((_DWORD *)v1 + 2) = v5;
  return result;
}


//======================================================================
// Ogre::Light::Light(Ogre::LightData *)
// address: 0x0014372C   size: 0x90 (144 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5LightC1EPNS_9LightDataE'
Ogre::Light *__fastcall Ogre::Light::Light(Ogre::Light *this, Ogre::LightData *a2)
{
  char *v4; // r1
  int v5; // r2
  int v6; // r5
  int v7; // r7
  int v8; // r6
  int v9; // r7
  int v11; // r6
  int v12; // r7
  int v13; // [sp+4h] [bp-8h]

  Ogre::MovableObject::MovableObject(this);
  *((_BYTE *)this + 209) = 0;
  *(_DWORD *)this = &off_455AD8;
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 4);
  *((_BYTE *)this + 216) = 0;
  *((_BYTE *)this + 217) = 0;
  *((_BYTE *)this + 218) = 0;
  *((_BYTE *)this + 219) = 1;
  *((_BYTE *)this + 220) = 0;
  *((_DWORD *)this + 56) = 1065353216;
  *((_DWORD *)this + 57) = 1065353216;
  *((_DWORD *)this + 58) = 1065353216;
  *((_DWORD *)this + 59) = 1065353216;
  *((_DWORD *)this + 60) = 1065353216;
  *((_DWORD *)this + 61) = 1065353216;
  *((_DWORD *)this + 62) = 1065353216;
  *((_DWORD *)this + 63) = 1065353216;
  *((_DWORD *)this + 64) = 1065353216;
  *((_DWORD *)this + 65) = 1065353216;
  *((_DWORD *)this + 66) = 1065353216;
  *((_DWORD *)this + 67) = 1065353216;
  *((_DWORD *)this + 69) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 70) = *((_DWORD *)a2 + 10);
  v4 = (char *)a2 + 20;
  v5 = *((_DWORD *)a2 + 5);
  v6 = *((_DWORD *)a2 + 6);
  v7 = *((_DWORD *)v4 + 2);
  *((_DWORD *)this + 64) = v5;
  *((_DWORD *)this + 65) = v6;
  *((_DWORD *)this + 66) = v7;
  v13 = *((_DWORD *)v4 + 3);
  *((_DWORD *)this + 67) = v13;
  v8 = *((_DWORD *)this + 65);
  v9 = *((_DWORD *)this + 66);
  *((_DWORD *)this + 60) = *((_DWORD *)this + 64);
  *((_DWORD *)this + 61) = v8;
  *((_DWORD *)this + 62) = v9;
  *((_DWORD *)this + 63) = v13;
  v11 = *((_DWORD *)this + 61);
  v12 = *((_DWORD *)this + 62);
  *((_DWORD *)this + 56) = *((_DWORD *)this + 60);
  *((_DWORD *)this + 57) = v11;
  *((_DWORD *)this + 58) = v12;
  *((_DWORD *)this + 59) = v13;
  return this;
}


//======================================================================
// Ogre::Light::Light(Ogre::LightType)
// address: 0x001437C0   size: 0x64 (100 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5LightC1ENS_9LightTypeE'
int __fastcall Ogre::Light::Light(int a1, int a2)
{
  Ogre::MovableObject::MovableObject((Ogre::MovableObject *)a1);
  *(_BYTE *)(a1 + 209) = 0;
  *(_DWORD *)a1 = &off_455AD8;
  *(_BYTE *)(a1 + 220) = 0;
  *(_BYTE *)(a1 + 216) = 0;
  *(_BYTE *)(a1 + 217) = 0;
  *(_BYTE *)(a1 + 218) = 0;
  *(_DWORD *)(a1 + 212) = a2;
  *(_BYTE *)(a1 + 219) = 1;
  *(_DWORD *)(a1 + 224) = 1065353216;
  *(_DWORD *)(a1 + 228) = 1065353216;
  *(_DWORD *)(a1 + 232) = 1065353216;
  *(_DWORD *)(a1 + 236) = 1065353216;
  *(_DWORD *)(a1 + 240) = 1065353216;
  *(_DWORD *)(a1 + 244) = 1065353216;
  *(_DWORD *)(a1 + 248) = 1065353216;
  *(_DWORD *)(a1 + 252) = 1065353216;
  *(_DWORD *)(a1 + 256) = 1065353216;
  *(_DWORD *)(a1 + 260) = 1065353216;
  *(_DWORD *)(a1 + 264) = 1065353216;
  *(_DWORD *)(a1 + 268) = 1065353216;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 280) = 2139095039;
  return a1;
}


//======================================================================
// Ogre::Light::enableShadow(void)
// address: 0x0014382C   size: 0x8 (8 bytes)
//======================================================================
_BYTE *__fastcall Ogre::Light::enableShadow(Ogre::Light *this)
{
  _BYTE *result; // r0

  result = (char *)this + 216;
  *result = 1;
  return result;
}


//======================================================================
// Ogre::Light::disableShadow(void)
// address: 0x00143834   size: 0x8 (8 bytes)
//======================================================================
_BYTE *__fastcall Ogre::Light::disableShadow(Ogre::Light *this)
{
  _BYTE *result; // r0

  result = (char *)this + 216;
  *result = 0;
  return result;
}


//======================================================================
// Ogre::Light::setDirection(Ogre::Vector3 const&)
// address: 0x0014383C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall Ogre::Light::setDirection(Ogre::Light *this, const Ogre::Vector3 *a2)
{
  int v3; // r4
  int v4; // r3
  _DWORD v6[3]; // [sp+4h] [bp-20h] BYREF
  int v7; // [sp+10h] [bp-14h] BYREF
  int v8; // [sp+14h] [bp-10h]
  int v9; // [sp+18h] [bp-Ch]
  int v10; // [sp+1Ch] [bp-8h]

  v10 = 1065353216;
  v6[1] = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v6[0] = 0;
  v6[2] = -1082130432;
  Ogre::Quaternion::setRotateArc((Ogre::Quaternion *)&v7, (const Ogre::Vector3 *)v6, a2);
  *((_DWORD *)this + 5) = v7;
  *((_DWORD *)this + 6) = v8;
  v3 = v10;
  *((_DWORD *)this + 7) = v9;
  v4 = *(_DWORD *)this;
  *((_DWORD *)this + 8) = v3;
  return (*(int (__fastcall **)(Ogre::Light *))(v4 + 64))(this);
}

