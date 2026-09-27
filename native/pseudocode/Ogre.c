// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre

//======================================================================
// Ogre::operator<<(Ogre::Archive &,Ogre::RibbonSectionDesc &)
// address: 0x00140C0E   size: 0x22 (34 bytes)
//======================================================================
unsigned int __fastcall Ogre::operator<<(unsigned int a1, unsigned int a2, int a3, int a4)
{
  Ogre::Archive::serializeRawArray<Ogre::Vector2>(a1, a2, a3, a4);
  Ogre::Archive::serializeRawArray<float>(a1, (int *)(a2 + 12));
  Ogre::Archive::serializeRawArray<int>(a1, (int *)(a2 + 24));
  return a1;
}


//======================================================================
// Ogre::Sin(float)
// address: 0x00141A6C   size: 0x16 (22 bytes)
//======================================================================
float __fastcall Ogre::Sin(Ogre *this, float a2)
{
  return j_sin((float)(*(float *)&this * 0.017453));
}


//======================================================================
// Ogre::Cos(float)
// address: 0x00141A88   size: 0x16 (22 bytes)
//======================================================================
float __fastcall Ogre::Cos(Ogre *this, float a2)
{
  return j_cos((float)(*(float *)&this * 0.017453));
}


//======================================================================
// Ogre::Sqrt(float)
// address: 0x00141AA4   size: 0x10 (16 bytes)
//======================================================================
float __fastcall Ogre::Sqrt(Ogre *this, float a2)
{
  return j_sqrt(*(float *)&this);
}


//======================================================================
// Ogre::operator*(Ogre::Quaternion const&,Ogre::Quaternion const&)
// address: 0x00141AB4   size: 0x128 (296 bytes)
//======================================================================
float *__fastcall Ogre::operator*(float *result, float *a2, float *a3)
{
  float v3; // r5
  float v4; // r6
  float v5; // [sp+0h] [bp-1Ch]
  float v6; // [sp+4h] [bp-18h]
  float v7; // [sp+8h] [bp-14h]
  float v8; // [sp+Ch] [bp-10h]
  float v9; // [sp+10h] [bp-Ch]
  float v10; // [sp+14h] [bp-8h]

  v3 = a2[3];
  v5 = *a3;
  v4 = a3[3];
  v6 = *a2;
  v7 = a3[1];
  v9 = a3[2];
  v8 = a2[2];
  v10 = a2[1];
  *result = (float)((float)((float)(*a3 * v3) + (float)(v4 * *a2)) + (float)(v7 * v8)) - (float)(v9 * v10);
  result[1] = (float)((float)((float)(v7 * v3) + (float)(v4 * v10)) + (float)(v9 * v6)) - (float)(v5 * v8);
  result[2] = (float)((float)((float)(v9 * v3) + (float)(v4 * v8)) + (float)(v5 * v10)) - (float)(v7 * v6);
  result[3] = (float)((float)((float)(v4 * v3) - (float)(v5 * v6)) - (float)(v7 * v10)) - (float)(v9 * v8);
  return result;
}


//======================================================================
// Ogre::Normalize(Ogre::Vector3 &)
// address: 0x00141BDC   size: 0x7A (122 bytes)
//======================================================================
float __fastcall Ogre::Normalize(float *a1)
{
  float v2; // r1
  float v3; // r5
  float result; // r0

  v3 = Ogre::Sqrt(COERCE_OGRE_((float)((float)(*a1 * *a1) + (float)(a1[1] * a1[1])) + (float)(a1[2] * a1[2])), v2);
  LODWORD(result) = v3 > 0.00001;
  if ( v3 <= 0.00001 )
  {
    *a1 = 0.0;
    a1[1] = 0.0;
    a1[2] = 0.0;
  }
  else
  {
    *a1 = *a1 * (float)(1.0 / v3);
    a1[1] = a1[1] * (float)(1.0 / v3);
    result = a1[2] * (float)(1.0 / v3);
    a1[2] = result;
  }
  return result;
}


//======================================================================
// Ogre::CrossProduct(Ogre::Vector3 const&,Ogre::Vector3 const&)
// address: 0x00141C5C   size: 0x72 (114 bytes)
//======================================================================
float *__fastcall Ogre::CrossProduct(float *result, float *a2, float *a3)
{
  float v3; // r6
  float v4; // r7
  float v5; // r5
  float v6; // [sp+0h] [bp-14h]
  float v7; // [sp+4h] [bp-10h]
  float v8; // [sp+8h] [bp-Ch]

  v3 = a3[2];
  v6 = a2[1];
  v4 = a2[2];
  v5 = *a2;
  v7 = a3[1];
  v8 = *a3;
  *result = (float)(v6 * v3) - (float)(v4 * v7);
  result[1] = (float)(v4 * v8) - (float)(v5 * v3);
  result[2] = (float)(v5 * v7) - (float)(v6 * v8);
  return result;
}


//======================================================================
// Ogre::operator*(Ogre::Matrix4 const&,Ogre::Matrix4 const&)
// address: 0x001432C6   size: 0x7A (122 bytes)
//======================================================================
Ogre::Matrix4 *__fastcall Ogre::operator*(Ogre::Matrix4 *a1, float *a2, float *a3)
{
  float *v4; // r4
  int j; // r6
  float v6; // r7
  float v7; // r0
  int i; // [sp+0h] [bp-14h]

  Ogre::Matrix4::Matrix4(a1);
  for ( i = 0; i != 64; i += 16 )
  {
    v4 = a3;
    for ( j = 0; j != 16; j += 4 )
    {
      v6 = (float)((float)(*a2 * *v4) + (float)(a2[1] * v4[4])) + (float)(a2[2] * v4[8]);
      v7 = a2[3] * v4[12];
      ++v4;
      *(float *)((char *)a1 + i + j) = v6 + v7;
    }
    a2 += 4;
  }
  return a1;
}


//======================================================================
// Ogre::GetNormalize(Ogre::Vector3 const&)
// address: 0x00146B7C   size: 0x52 (82 bytes)
//======================================================================
Ogre *__fastcall Ogre::GetNormalize(Ogre *this, const Ogre::Vector3 *a2)
{
  float v4; // r6
  float v5; // r0
  float v6; // r3
  float v8; // [sp+4h] [bp-8h]

  v4 = Ogre::Vector3::length(a2);
  if ( v4 <= 0.00001 )
  {
    v6 = 0.0;
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
  }
  else
  {
    v8 = (float)(1.0 / v4) * *((float *)a2 + 2);
    v5 = *(float *)a2 * (float)(1.0 / v4);
    *((float *)this + 1) = (float)(1.0 / v4) * *((float *)a2 + 1);
    *(float *)this = v5;
    v6 = v8;
  }
  *((float *)this + 2) = v6;
  return this;
}


//======================================================================
// Ogre::operator*(Ogre::Vector3 const&,Ogre::Matrix4 const&)
// address: 0x00146BD4   size: 0xBA (186 bytes)
//======================================================================
float *__fastcall Ogre::operator*(float *result, float *a2, float *a3)
{
  float v3; // r6
  float v4; // [sp+4h] [bp-10h]
  float v5; // [sp+8h] [bp-Ch]
  float v6; // [sp+Ch] [bp-8h]

  v3 = a2[1];
  v6 = a2[2];
  v4 = (float)((float)((float)(*a2 * a3[1]) + (float)(v3 * a3[5])) + (float)(v6 * a3[9])) + a3[13];
  v5 = (float)((float)((float)(*a2 * a3[2]) + (float)(v3 * a3[6])) + (float)(v6 * a3[10])) + a3[14];
  *result = (float)((float)((float)(*a2 * *a3) + (float)(v3 * a3[4])) + (float)(v6 * a3[8])) + a3[12];
  result[1] = v4;
  result[2] = v5;
  return result;
}


//======================================================================
// Ogre::RandFlt(float,float)
// address: 0x00146D08   size: 0x40 (64 bytes)
//======================================================================
float __fastcall Ogre::RandFlt(Ogre *this, float a2, float a3)
{
  Ogre::ParticleEmitterData::m_Rand = 214013 * Ogre::ParticleEmitterData::m_Rand + 2531011;
  return (float)((float)((float)((unsigned int)(2 * Ogre::ParticleEmitterData::m_Rand) >> 17) * 0.000030519)
               * (float)(a2 - *(float *)&this))
       + *(float *)&this;
}


//======================================================================
// Ogre::CalcSpreadMatrix(Ogre::Matrix4 &,float,float,float,float,float)
// address: 0x00146D58   size: 0x162 (354 bytes)
//======================================================================
float __fastcall Ogre::CalcSpreadMatrix(
        Ogre *this,
        Ogre::Matrix4 *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  float v10; // r2
  int v11; // r6
  double v12; // r4
  double v13; // r0
  double v14; // r0
  int v15; // r3
  float v16; // r6
  float v17; // r4
  float v18; // r0
  float v19; // r4
  float v20; // r0
  float v21; // r0
  int v22; // r4
  float v23; // r6
  float *v24; // r5
  float result; // r0
  Ogre::Matrix4 *v26; // [sp+0h] [bp-28h] BYREF
  Ogre *v27; // [sp+4h] [bp-24h]
  float *v28; // [sp+8h] [bp-20h]
  float *v29; // [sp+Ch] [bp-1Ch]
  float v30[2]; // [sp+10h] [bp-18h] BYREF
  float v31; // [sp+18h] [bp-10h] BYREF
  float v32; // [sp+1Ch] [bp-Ch]
  float v33; // [sp+20h] [bp-8h] BYREF
  float v34; // [sp+24h] [bp-4h]
  float v35[5]; // [sp+28h] [bp+0h] BYREF
  float v36; // [sp+3Ch] [bp+14h]
  unsigned int v37; // [sp+40h] [bp+18h]
  float v38; // [sp+4Ch] [bp+24h]
  float v39; // [sp+50h] [bp+28h]
  _BYTE v40[68]; // [sp+68h] [bp+40h] BYREF

  v26 = this;
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v35);
  Ogre::Matrix4::identity(v26);
  *(float *)&v27 = a3 - *(float *)&a2;
  *(float *)&v28 = COERCE_FLOAT(v30);
  v30[0] = Ogre::RandFlt(COERCE_OGRE_(a3 - *(float *)&a2), *(float *)&a2 + a3, v10) * 0.5;
  v11 = 0;
  v30[1] = Ogre::RandFlt((Ogre *)(LODWORD(a4) + 0x80000000), a4, COERCE_FLOAT(v30)) * 0.5;
  do
  {
    v12 = v30[v11];
    v13 = j_cos(v12);
    *(float *)&v27 = COERCE_FLOAT(&v31);
    *(float *)&v13 = v13;
    *(Ogre::Matrix4 **)((char *)&v26 + v11 * 4 + 24) = (Ogre::Matrix4 *)LODWORD(v13);
    v14 = j_sin(v12);
    v29 = &v33;
    *(float *)&v14 = v14;
    v15 = v11 * 4 + 32;
    ++v11;
    *(Ogre::Matrix4 **)((char *)&v26 + v15) = (Ogre::Matrix4 *)LODWORD(v14);
  }
  while ( v11 != 2 );
  Ogre::Matrix4::identity((Ogre::Matrix4 *)v35);
  v16 = v33;
  v28 = (float *)(LODWORD(v33) + 0x80000000);
  v17 = v31;
  v37 = LODWORD(v33) + 0x80000000;
  v36 = v31;
  v38 = v33;
  v39 = v31;
  Ogre::operator*((Ogre::Matrix4 *)v40, (float *)v26, v35);
  Ogre::Matrix4::operator=(v26, v40);
  Ogre::Matrix4::identity((Ogre::Matrix4 *)v35);
  v35[0] = v32;
  v36 = v32;
  v35[4] = v34;
  LODWORD(v35[1]) = LODWORD(v34) + 0x80000000;
  Ogre::operator*((Ogre::Matrix4 *)v40, (float *)v26, v35);
  Ogre::Matrix4::operator=(v26, v40);
  if ( v17 >= 0.0 )
    v18 = v17;
  else
    LODWORD(v18) = LODWORD(v17) + 0x80000000;
  v19 = v18 * a6;
  if ( v16 < 0.0 )
    v20 = *(float *)&v28;
  else
    v20 = v16;
  v21 = v19 + (float)(v20 * a5);
  v22 = 0;
  v23 = v21;
  do
  {
    v24 = (float *)((char *)v26 + v22);
    *(float *)((char *)v26 + v22) = *(float *)((char *)v26 + v22) * v23;
    v24[1] = v24[1] * v23;
    result = v24[2] * v23;
    v22 += 16;
    v24[2] = result;
  }
  while ( v22 != 48 );
  return result;
}


//======================================================================
// Ogre::Color2Opengl(Ogre::KeyFrameArray<Ogre::ColourValue> &)
// address: 0x00146EBC   size: 0x54 (84 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Color2Opengl(_DWORD *result)
{
  unsigned int i; // r3
  int v2; // r2
  int v3; // r2
  int v4; // r6
  unsigned int v5; // r3
  int v6; // r1
  int v7; // r2
  _DWORD *v8; // r1
  int v9; // r5
  int v10; // r2
  int v11; // r4

  for ( i = 0; ; ++i )
  {
    v2 = result[6];
    if ( i >= -858993459 * ((result[7] - v2) >> 2) )
      break;
    v3 = v2 + 20 * i;
    v4 = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v3 + 12) = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v3 + 4) = v4;
  }
  v5 = 0;
  while ( 1 )
  {
    v6 = result[9];
    if ( v5 >= (result[10] - v6) >> 5 )
      break;
    v7 = 32 * v5;
    v8 = (_DWORD *)(v6 + 32 * v5);
    v9 = v8[2];
    ++v5;
    v8[2] = *v8;
    *v8 = v9;
    v10 = result[9] + v7;
    v11 = *(_DWORD *)(v10 + 24);
    *(_DWORD *)(v10 + 24) = *(_DWORD *)(v10 + 16);
    *(_DWORD *)(v10 + 16) = v11;
  }
  return result;
}


//======================================================================
// Ogre::DecryptMyFile(unsigned char *,int)
// address: 0x0014E51C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::DecryptMyFile(Ogre *this, unsigned __int8 *a2, int a3)
{
  ;
}


//======================================================================
// Ogre::alloc(unsigned int)
// address: 0x001541C4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::alloc(Ogre *this, unsigned int a2)
{
  return j_malloc((size_t)this);
}


//======================================================================
// Ogre::release(void *)
// address: 0x001541CC   size: 0x8 (8 bytes)
//======================================================================
void __fastcall Ogre::release(Ogre *this, void *a2)
{
  j_free(this);
}


//======================================================================
// Ogre::resize(void *,unsigned int)
// address: 0x001541D4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::resize(Ogre *this, size_t a2, unsigned int a3)
{
  return j_realloc(this, a2);
}


//======================================================================
// Ogre::operator+(Ogre::Vector3 const&,Ogre::Vector3 const&)
// address: 0x00156726   size: 0x30 (48 bytes)
//======================================================================
float *__fastcall Ogre::operator+(float *result, float *a2, float *a3)
{
  float v3; // r7
  float v4; // [sp+4h] [bp-8h]

  v3 = a2[1] + a3[1];
  v4 = a2[2] + a3[2];
  *result = *a2 + *a3;
  result[1] = v3;
  result[2] = v4;
  return result;
}


//======================================================================
// Ogre::operator-(Ogre::Vector3 const&,Ogre::Vector3 const&)
// address: 0x00156756   size: 0x30 (48 bytes)
//======================================================================
float *__fastcall Ogre::operator-(float *result, float *a2, float *a3)
{
  float v3; // r7
  float v4; // [sp+4h] [bp-8h]

  v3 = a2[1] - a3[1];
  v4 = a2[2] - a3[2];
  *result = *a2 - *a3;
  result[1] = v3;
  result[2] = v4;
  return result;
}


//======================================================================
// Ogre::Normalize(Ogre::Vector3 const&)
// address: 0x00156788   size: 0x50 (80 bytes)
//======================================================================
Ogre *__fastcall Ogre::Normalize(Ogre *this, const Ogre::Vector3 *a2)
{
  float v4; // r6

  v4 = Ogre::Vector3::length(a2);
  if ( v4 <= 0.00001 )
  {
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  else
  {
    *(float *)this = *(float *)a2 * (float)(1.0 / v4);
    *((float *)this + 1) = *((float *)a2 + 1) * (float)(1.0 / v4);
    *((float *)this + 2) = *((float *)a2 + 2) * (float)(1.0 / v4);
  }
  return this;
}


//======================================================================
// Ogre::Lerp(Ogre::Vector3 const&,Ogre::Vector3 const&,float)
// address: 0x001567DC   size: 0x66 (102 bytes)
//======================================================================
Ogre *__fastcall Ogre::Lerp(Ogre *this, const Ogre::Vector3 *a2, const Ogre::Vector3 *a3, float a4)
{
  float v5; // r7
  float v6; // r0

  v5 = *((float *)a2 + 1) + (float)((float)(*((float *)a3 + 1) - *((float *)a2 + 1)) * a4);
  v6 = *((float *)a2 + 2) + (float)((float)(*((float *)a3 + 2) - *((float *)a2 + 2)) * a4);
  *(float *)this = *(float *)a2 + (float)((float)(*(float *)a3 - *(float *)a2) * a4);
  *((float *)this + 1) = v5;
  *((float *)this + 2) = v6;
  return this;
}


//======================================================================
// Ogre::operator<(Ogre::CompiledShaderKey const&,Ogre::CompiledShaderKey const&)
// address: 0x0015953C   size: 0x64 (100 bytes)
//======================================================================
bool __fastcall Ogre::operator<(int a1, int a2)
{
  int v2; // r2
  int v3; // r4
  _BOOL4 result; // r0
  unsigned int v6; // r4
  unsigned int v7; // r2

  v2 = *(_DWORD *)(a2 + 20);
  v3 = *(_DWORD *)(a1 + 20);
  result = true;
  if ( v3 >= v2 )
  {
    result = false;
    if ( v3 <= v2 )
    {
      v6 = *(_DWORD *)(a1 + 16);
      v7 = *(_DWORD *)(a2 + 16);
      result = true;
      if ( v6 >= v7 )
      {
        result = false;
        if ( v6 <= v7 )
        {
          if ( *(_QWORD *)a2 > *(_QWORD *)a1 )
            return true;
          else
            return *(_QWORD *)a1 <= *(_QWORD *)a2 && *(_QWORD *)(a2 + 8) > *(_QWORD *)(a1 + 8);
        }
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::GetPerpendicular(Ogre::Vector3 &,Ogre::Vector3 &,Ogre::Vector3 const&)
// address: 0x0015F8B8   size: 0x16E (366 bytes)
//======================================================================
float __fastcall Ogre::GetPerpendicular(Ogre *this, Ogre::Vector3 *a2, Ogre::Vector3 *a3, const Ogre::Vector3 *a4)
{
  float v4; // r7
  float v6; // r5
  float v7; // r4
  float v8; // r4
  float v9; // r5
  float v10; // r7
  float result; // r0
  float v12; // [sp+0h] [bp-1Ch]
  float v13; // [sp+4h] [bp-18h]
  float v14; // [sp+4h] [bp-18h]
  float v15; // [sp+8h] [bp-14h]
  float v16; // [sp+Ch] [bp-10h]
  float v17; // [sp+10h] [bp-Ch]
  float v18; // [sp+14h] [bp-8h]

  v4 = *(float *)a3;
  if ( *(float *)a3 < 0.0 )
    LODWORD(v4) += 0x80000000;
  if ( *((float *)a3 + 1) >= 0.0 )
    v13 = *((float *)a3 + 1);
  else
    LODWORD(v13) = *((_DWORD *)a3 + 1) + 0x80000000;
  v6 = *((float *)a3 + 2);
  if ( v6 < 0.0 )
    LODWORD(v6) += 0x80000000;
  if ( v4 >= v13 || v4 >= v6 )
  {
    *(_DWORD *)this = 0;
    if ( v13 >= v6 )
    {
      *((_DWORD *)this + 1) = 0;
      *((_DWORD *)this + 2) = 1065353216;
      goto LABEL_15;
    }
    *((_DWORD *)this + 1) = 1065353216;
  }
  else
  {
    *(_DWORD *)this = 1065353216;
    *((_DWORD *)this + 1) = 0;
  }
  *((_DWORD *)this + 2) = 0;
LABEL_15:
  v17 = *((float *)this + 2);
  v16 = *((float *)a3 + 1);
  v7 = *((float *)a3 + 2);
  v18 = *((float *)this + 1);
  v14 = (float)(v16 * v17) - (float)(v7 * v18);
  v8 = (float)(v7 * *(float *)this) - (float)(*(float *)a3 * v17);
  v9 = (float)(*(float *)a3 * v18) - (float)(v16 * *(float *)this);
  *((float *)a2 + 1) = v8;
  *(float *)a2 = v14;
  *((float *)a2 + 2) = v9;
  v10 = *((float *)a3 + 2);
  v15 = *((float *)a3 + 1);
  v12 = *(float *)a3;
  *(float *)this = (float)(v8 * v10) - (float)(v9 * v15);
  *((float *)this + 1) = (float)(v9 * v12) - (float)(v14 * v10);
  result = (float)(v14 * v15) - (float)(v8 * v12);
  *((float *)this + 2) = result;
  return result;
}


//======================================================================
// Ogre::Lerp(Ogre::UIFaceVert const&,Ogre::UIFaceVert const&,float)
// address: 0x00161330   size: 0x160 (352 bytes)
//======================================================================
int __fastcall Ogre::Lerp(int a1, int a2, int a3, float a4)
{
  float v5; // r0
  float v6; // r0
  char v7; // r7
  char v9; // [sp+0h] [bp-14h]
  float v10; // [sp+8h] [bp-Ch]

  v10 = *(float *)(a2 + 4) + (float)((float)(*(float *)(a3 + 4) - *(float *)(a2 + 4)) * a4);
  v5 = *(float *)(a2 + 8) + (float)((float)(*(float *)(a3 + 8) - *(float *)(a2 + 8)) * a4);
  *(float *)a1 = *(float *)a2 + (float)((float)(*(float *)a3 - *(float *)a2) * a4);
  *(float *)(a1 + 8) = v5;
  *(float *)(a1 + 4) = v10;
  v6 = *(float *)(a2 + 20) + (float)((float)(*(float *)(a3 + 20) - *(float *)(a2 + 20)) * a4);
  *(float *)(a1 + 16) = *(float *)(a2 + 16) + (float)((float)(*(float *)(a3 + 16) - *(float *)(a2 + 16)) * a4);
  *(float *)(a1 + 20) = v6;
  v9 = (unsigned int)(float)((float)*(unsigned __int8 *)(a2 + 14)
                           + (float)((float)(*(unsigned __int8 *)(a3 + 14) - *(unsigned __int8 *)(a2 + 14)) * a4));
  LOBYTE(v10) = (unsigned int)(float)((float)*(unsigned __int8 *)(a2 + 13)
                                    + (float)((float)(*(unsigned __int8 *)(a3 + 13) - *(unsigned __int8 *)(a2 + 13)) * a4));
  v7 = (unsigned int)(float)((float)*(unsigned __int8 *)(a2 + 15)
                           + (float)((float)(*(unsigned __int8 *)(a3 + 15) - *(unsigned __int8 *)(a2 + 15)) * a4));
  *(_BYTE *)(a1 + 12) = (unsigned int)(float)((float)*(unsigned __int8 *)(a2 + 12)
                                            + (float)((float)(*(unsigned __int8 *)(a3 + 12)
                                                            - *(unsigned __int8 *)(a2 + 12))
                                                    * a4));
  *(_BYTE *)(a1 + 15) = v7;
  *(_BYTE *)(a1 + 13) = LOBYTE(v10);
  *(_BYTE *)(a1 + 14) = v9;
  return a1;
}


//======================================================================
// Ogre::PolygonRectClip(Ogre::UIFaceVert *,int,Ogre::UIFaceVert *,int,Ogre::TRect<float> const&)
// address: 0x001614B4   size: 0x12E (302 bytes)
//======================================================================
int __fastcall Ogre::PolygonRectClip(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r5
  int v7; // r6
  int result; // r0
  float *v9; // r7
  float v10; // r5
  float v11; // r4
  _BYTE *v12; // r0
  float *v13; // r1
  int v14; // r3
  float v15; // r5
  int v16; // [sp+4h] [bp-3Ch]
  float v17; // [sp+8h] [bp-38h]
  float *v18; // [sp+8h] [bp-38h]
  float v19; // [sp+10h] [bp-30h]
  int i; // [sp+18h] [bp-28h]
  _DWORD v22[8]; // [sp+20h] [bp-20h] BYREF
  _BYTE v23[4]; // [sp+40h] [bp+0h] BYREF
  _BYTE v24[1252]; // [sp+60h] [bp+20h] BYREF

  v5 = 32 * a2;
  j_memcpy(v23, a1, 32 * a2);
  v7 = 0;
  result = (int)Ogre::UIFaceVert::operator=(&v23[v5], a1);
  v9 = (float *)v24;
  for ( i = 0; i <= a2; ++i )
  {
    v10 = *(v9 - 7);
    v11 = *(float *)(a5 + 4);
    if ( v10 < v11 )
    {
      v17 = v9[1];
      result = v17 > v11;
      if ( v17 > v11 )
      {
        v16 = v7 + 1;
        Ogre::Lerp((int)v22, (int)(v9 - 8), (int)v9, (float)(v11 - v10) / (float)(v17 - v10));
        v12 = &v24[32 * v7 + 608];
        v13 = (float *)v22;
LABEL_8:
        result = (int)Ogre::UIFaceVert::operator=(v12, v13);
        goto LABEL_12;
      }
      goto LABEL_11;
    }
    v18 = v9 - 8;
    v16 = v7 + 1;
    v14 = 32 * v7;
    if ( v10 == v11 )
    {
      v13 = v9 - 8;
      v12 = &v24[v14 + 608];
      goto LABEL_8;
    }
    Ogre::UIFaceVert::operator=(&v24[v14 + 608], v18);
    v15 = *(float *)(a5 + 4);
    v19 = v9[1];
    result = v19 < v15;
    if ( v19 < v15 )
    {
      v7 += 2;
      Ogre::Lerp((int)v22, (int)v18, (int)v9, (float)(v15 - *(v9 - 7)) / (float)(v19 - *(v9 - 7)));
      result = (int)Ogre::UIFaceVert::operator=(&v24[32 * v16 + 608], v22);
LABEL_11:
      v16 = v7;
    }
LABEL_12:
    v9 += 8;
    v7 = v16;
  }
  return result;
}


//======================================================================
// Ogre::nVertex2nPrimitive(Ogre::PrimitiveType,unsigned int)
// address: 0x00163DBE   size: 0x32 (50 bytes)
//======================================================================
unsigned int __fastcall Ogre::nVertex2nPrimitive(int a1, unsigned int a2)
{
  unsigned int v2; // r3

  v2 = 0;
  switch ( a1 )
  {
    case 1:
      v2 = a2;
      break;
    case 2:
      v2 = a2 >> 1;
      break;
    case 3:
      v2 = a2 - 1;
      break;
    case 4:
      v2 = a2 / 3;
      break;
    case 5:
    case 6:
      v2 = a2 - 2;
      break;
    default:
      return v2;
  }
  return v2;
}


//======================================================================
// Ogre::operator<<(Ogre::Archive &,Ogre::VertexFormat &)
// address: 0x001645F2   size: 0xC (12 bytes)
//======================================================================
unsigned int __fastcall Ogre::operator<<(unsigned int a1, int a2)
{
  Ogre::Archive::serializeRawArray<Ogre::VertexElement>(a1, a2);
  return a1;
}


//======================================================================
// Ogre::createObjectFromResource(Ogre::Resource *)
// address: 0x00165148   size: 0x1B0 (432 bytes)
//======================================================================
Ogre::Entity *__fastcall Ogre::createObjectFromResource(Ogre *this, Ogre::Resource *a2)
{
  Ogre::Entity *v4; // r5

  if ( this == nullptr )
    return nullptr;
  if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::EntityData::m_RTTI) != 0 )
  {
    v4 = (Ogre::Entity *)operator new(0x210u);
    Ogre::Entity::Entity(v4);
    Ogre::Entity::load(v4, this);
  }
  else if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::ModelData::m_RTTI) != 0 )
  {
    v4 = (Ogre::Entity *)operator new(0x1C8u);
    Ogre::Model::Model(v4, this);
  }
  else
  {
    if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::LightData::m_RTTI) != 0 )
      goto LABEL_17;
    if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::DummyNodeData::m_RTTI) != 0 )
    {
      v4 = (Ogre::Entity *)operator new(0x148u);
      Ogre::DummyNode::DummyNode(v4, this);
      return v4;
    }
    if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::ParamShapeData::m_RTTI) != 0 )
    {
      v4 = (Ogre::Entity *)operator new(0x194u);
      Ogre::ParametricShape::ParametricShape(v4, this);
      return v4;
    }
    if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::ParticleEmitterData::m_RTTI) != 0 )
    {
      v4 = (Ogre::Entity *)operator new(0x2BCu);
      Ogre::ParticleEmitter::ParticleEmitter(v4, this);
      return v4;
    }
    if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::RibbonEmitterData::m_RTTI) != 0 )
    {
      v4 = (Ogre::Entity *)operator new(0x258u);
      Ogre::RibbonEmitter::RibbonEmitter(v4, this);
      return v4;
    }
    if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::LightData::m_RTTI) != 0 )
    {
LABEL_17:
      v4 = (Ogre::Entity *)operator new(0x120u);
      Ogre::Light::Light(v4, this);
      return v4;
    }
    if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::BillboardData::m_RTTI) != 0 )
    {
      v4 = (Ogre::Entity *)operator new(0x1ACu);
      Ogre::Billboard::Billboard(v4, this);
    }
    else if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::BeamEmitterData::m_RTTI) != 0 )
    {
      v4 = (Ogre::Entity *)operator new(0x178u);
      Ogre::BeamEmitter::BeamEmitter(v4, this);
    }
    else if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::SoundData::m_RTTI) != 0 )
    {
      v4 = (Ogre::Entity *)operator new(0x230u);
      Ogre::SoundNode::SoundNode(v4, this, true);
    }
    else
    {
      if ( Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::DecalData::m_RTTI) == 0 )
        return nullptr;
      v4 = (Ogre::Entity *)operator new(0x148u);
      Ogre::DecalNode::DecalNode(v4, this);
    }
  }
  return v4;
}


//======================================================================
// Ogre::createObjectFromResource(char const*)
// address: 0x00165328   size: 0x4C (76 bytes)
//======================================================================
Ogre::Entity *__fastcall Ogre::createObjectFromResource(Ogre *this, const char *a2, Ogre::FixedString *a3)
{
  Ogre::ResourceManager *v3; // r4
  Ogre *v4; // r4
  void *v5; // r1
  Ogre::Resource *v6; // r1
  Ogre::Entity *ObjectFromResource; // r5
  int v8; // r3
  Ogre::FixedString *v10[2]; // [sp+4h] [bp-8h] BYREF

  v10[1] = a3;
  v3 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  v10[0] = (Ogre::FixedString *)Ogre::FixedString::insert(this, (const char *)0xFFFFFFFF, (int)a3);
  v4 = (Ogre *)Ogre::ResourceManager::blockLoad(v3, (const Ogre::FixedString *)v10, 0);
  Ogre::FixedString::release(v10[0], v5);
  if ( v4 == nullptr )
    return nullptr;
  ObjectFromResource = Ogre::createObjectFromResource(v4, v6);
  v8 = *((_DWORD *)v4 + 1) - 1;
  *((_DWORD *)v4 + 1) = v8;
  if ( v8 <= 0 )
    (*(void (__fastcall **)(Ogre *))(*(_DWORD *)v4 + 24))(v4);
  return ObjectFromResource;
}


//======================================================================
// Ogre::operator<(Ogre::ShaderEnvKey const&,Ogre::ShaderEnvKey const&)
// address: 0x001653D4   size: 0x42 (66 bytes)
//======================================================================
bool __fastcall Ogre::operator<(_QWORD *a1, _QWORD *a2)
{
  if ( *a2 > *a1 )
    return true;
  if ( *a1 > *a2 )
    return false;
  return a2[1] > a1[1];
}


//======================================================================
// Ogre::fastACos(float)
// address: 0x0016744C   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::fastACos(Ogre *this, float a2)
{
  return Ogre::g_ArcCosTable[(int)(float)(*(float *)&this * 2048.0) + 2048];
}


//======================================================================
// Ogre::InitRadsValue(void)
// address: 0x00167470   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::InitRadsValue(Ogre *this)
{
  int i; // r4
  double v2; // r0
  int v3; // r5

  for ( i = -2048; i != 2049; ++i )
  {
    v2 = j_acos((float)((float)i * 0.00048828));
    v3 = i;
    *(float *)&v2 = v2;
    Ogre::g_ArcCosTable[v3 + 2048] = LODWORD(v2);
  }
  return 1;
}


//======================================================================
// Ogre::fastSin(float)
// address: 0x001674B8   size: 0x84 (132 bytes)
//======================================================================
float __fastcall Ogre::fastSin(Ogre *this, float a2)
{
  float v2; // r4
  float v3; // r0
  float v4; // r1

  v2 = *(float *)&this - (float)((float)(int)(float)(*(float *)&this / 360.0) * 360.0);
  if ( v2 >= -180.0 )
  {
    if ( v2 <= 180.0 )
      goto LABEL_6;
    v3 = v2 - 360.0;
  }
  else
  {
    v3 = v2 + 360.0;
  }
  v2 = v3;
LABEL_6:
  v4 = v2;
  if ( v2 < 0.0 )
    LODWORD(v4) = LODWORD(v2) + 0x80000000;
  return (float)(v2 * 0.022222) + (float)((float)(v2 * -0.00012346) * v4);
}


//======================================================================
// Ogre::fastCos(float)
// address: 0x00167550   size: 0x8A (138 bytes)
//======================================================================
float __fastcall Ogre::fastCos(Ogre *this, float a2)
{
  float v2; // r4
  float v3; // r0
  float v4; // r1

  v2 = (float)(*(float *)&this + 90.0) - (float)((float)(int)(float)((float)(*(float *)&this + 90.0) / 360.0) * 360.0);
  if ( v2 >= -180.0 )
  {
    if ( v2 <= 180.0 )
      goto LABEL_6;
    v3 = v2 - 360.0;
  }
  else
  {
    v3 = v2 + 360.0;
  }
  v2 = v3;
LABEL_6:
  v4 = v2;
  if ( v2 < 0.0 )
    LODWORD(v4) = LODWORD(v2) + 0x80000000;
  return (float)(v2 * 0.022222) + (float)((float)(v2 * -0.00012346) * v4);
}


//======================================================================
// Ogre::operator==(Ogre::FixedString const&,char const*)
// address: 0x0016787A   size: 0x1A (26 bytes)
//======================================================================
bool __fastcall Ogre::operator==(const char **a1, const char *a2)
{
  const char *v2; // r0
  int v3; // r0

  v2 = *a1;
  if ( v2 != nullptr && a2 != nullptr )
    v3 = j_strcmp(v2, a2);
  else
    v3 = v2 - a2;
  return v3 == 0;
}


//======================================================================
// Ogre::operator!=(Ogre::FixedString const&,char const*)
// address: 0x00167894   size: 0x1A (26 bytes)
//======================================================================
bool __fastcall Ogre::operator!=(const char **a1, const char *a2)
{
  const char *v2; // r0
  int v3; // r0

  v2 = *a1;
  if ( v2 != nullptr && a2 != nullptr )
    v3 = j_strcmp(v2, a2);
  else
    v3 = v2 - a2;
  return v3 != 0;
}


//======================================================================
// Ogre::operator+(Ogre::FixedString const&,char const*)
// address: 0x001678AE   size: 0x30 (48 bytes)
//======================================================================
unsigned __int8 **__fastcall Ogre::operator+(unsigned __int8 **a1, Ogre::FixedString *a2, char *a3)
{
  int v5; // r2
  int v6; // r3
  Ogre::FixedString *v8; // [sp+4h] [bp-4h] BYREF

  v8 = a2;
  sub_3BF0BC((int)&v8, *(char **)a2);
  sub_3BE96C((int)&v8, a3);
  *a1 = Ogre::FixedString::insert(v8, (const char *)0xFFFFFFFF, v5, v6);
  sub_3BDF80(&v8);
  return a1;
}


//======================================================================
// Ogre::operator+(char const*,Ogre::FixedString const&)
// address: 0x001678DE   size: 0x30 (48 bytes)
//======================================================================
unsigned __int8 **__fastcall Ogre::operator+(unsigned __int8 **a1, Ogre::FixedString *a2, char **a3)
{
  int v5; // r2
  int v6; // r3
  Ogre::FixedString *v8; // [sp+4h] [bp-4h] BYREF

  v8 = a2;
  sub_3BF0BC((int)&v8, *a3);
  sub_3BE96C((int)&v8, (char *)a2);
  *a1 = Ogre::FixedString::insert(v8, (const char *)0xFFFFFFFF, v5, v6);
  sub_3BDF80(&v8);
  return a1;
}


//======================================================================
// Ogre::CreateSoundSystem(Ogre::SOUND_SYSTEM_TYPE,Ogre::SoundSystemInitInfo const&)
// address: 0x0016B9CC   size: 0x4A (74 bytes)
//======================================================================
Ogre::FmodSoundSystem *__fastcall Ogre::CreateSoundSystem(int a1, int a2)
{
  Ogre::FmodSoundSystem *v3; // r4
  int v4; // r3
  Ogre::FmodSoundSystem *result; // r0

  if ( a1 == 0 )
  {
    v3 = (Ogre::FmodSoundSystem *)operator new(0x8A8u);
    Ogre::FmodSoundSystem::FmodSoundSystem(v3);
    v4 = Ogre::FmodSoundSystem::Init((FMOD::System **)v3, a2);
    result = v3;
    if ( v4 != 0 )
      return result;
    if ( v3 != nullptr )
      (*(void (__fastcall **)(Ogre::FmodSoundSystem *))(*(_DWORD *)v3 + 4))(v3);
  }
  result = (Ogre::FmodSoundSystem *)operator new(0x10u);
  Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton = (int)result;
  *(_DWORD *)result = &off_4571B8;
  return result;
}


//======================================================================
// Ogre::Normalize(Ogre::Vector2 &)
// address: 0x0016D154   size: 0x2A (42 bytes)
//======================================================================
float __fastcall Ogre::Normalize(Ogre *this, Ogre::Vector2 *a2)
{
  float v3; // r0
  float result; // r0

  v3 = 1.0 / Ogre::Vector2::length(this);
  *(float *)this = *(float *)this * v3;
  result = *((float *)this + 1) * v3;
  *((float *)this + 1) = result;
  return result;
}


//======================================================================
// Ogre::IsNormalized(Ogre::Vector2 const&)
// address: 0x0016D180   size: 0x30 (48 bytes)
//======================================================================
bool __fastcall Ogre::IsNormalized(Ogre *this, const Ogre::Vector2 *a2)
{
  float v2; // r4
  float v3; // r0

  v2 = Ogre::Vector2::length(this) - 1.0;
  if ( v2 >= 0.0 )
    v3 = v2;
  else
    LODWORD(v3) = LODWORD(v2) + 0x80000000;
  return v3 < 0.00001;
}


//======================================================================
// Ogre::DotProduct(Ogre::Vector3 const&,Ogre::Vector3 const&)
// address: 0x0016D1E8   size: 0x34 (52 bytes)
//======================================================================
float __fastcall Ogre::DotProduct(Ogre *this, const Ogre::Vector3 *a2, const Ogre::Vector3 *a3)
{
  return (float)((float)(*(float *)this * *(float *)a2) + (float)(*((float *)this + 1) * *((float *)a2 + 1)))
       + (float)(*((float *)this + 2) * *((float *)a2 + 2));
}


//======================================================================
// Ogre::SqrDistance(Ogre::Ray const&,Ogre::Segment const&,float *,float *)
// address: 0x0016DA88   size: 0x360 (864 bytes)
//======================================================================
unsigned int __fastcall Ogre::SqrDistance(float *a1, float *a2, float *a3, float *a4)
{
  Ogre::Vector3 *v5; // r6
  const Ogre::Vector3 *v6; // r4
  const Ogre::Vector3 *v7; // r2
  const Ogre::Vector3 *v8; // r2
  const Ogre::Vector3 *v9; // r2
  float v10; // r6
  float v11; // r5
  float v12; // r0
  float v13; // r7
  float v14; // r5
  float v15; // r0
  float v16; // r5
  float v17; // r4
  float v18; // r4
  float v19; // r0
  unsigned int v20; // r3
  unsigned int v21; // r2
  float v22; // r0
  float v23; // r1
  float v24; // r0
  float v25; // r1
  float v26; // r0
  float v27; // r4
  float v28; // r7
  float v30; // [sp+4h] [bp-38h]
  float v31; // [sp+8h] [bp-34h]
  float v32; // [sp+Ch] [bp-30h]
  float v33; // [sp+10h] [bp-2Ch]
  float v34; // [sp+14h] [bp-28h]
  float v35; // [sp+18h] [bp-24h]
  float v38; // [sp+24h] [bp-18h]
  float v39[4]; // [sp+2Ch] [bp-10h] BYREF

  v5 = (Ogre::Vector3 *)(a1 + 3);
  Ogre::operator-(v39, a1, a2);
  v6 = (const Ogre::Vector3 *)(a2 + 3);
  v32 = Ogre::Vector3::lengthSqr(v5);
  v33 = Ogre::DotProduct(v5, v6, v7);
  LODWORD(v34) = LODWORD(v33) + 0x80000000;
  v30 = Ogre::Vector3::lengthSqr(v6);
  v31 = Ogre::DotProduct((Ogre *)v39, v5, v8);
  v10 = Ogre::Vector3::lengthSqr((Ogre::Vector3 *)v39);
  v11 = (float)(v32 * v30) - (float)(v34 * v34);
  if ( v11 >= 0.0 )
  {
    v35 = (float)(v32 * v30) - (float)(v34 * v34);
  }
  else
  {
    v9 = (const Ogre::Vector3 *)(LODWORD(v11) + 0x80000000);
    LODWORD(v35) = LODWORD(v11) + 0x80000000;
  }
  if ( v35 < 0.00001 )
  {
    if ( v34 <= 0.0 )
    {
      v26 = Ogre::DotProduct((Ogre *)v39, v6, v9);
      LODWORD(v27) = LODWORD(v26) + 0x80000000;
      v28 = v31 - v33;
      if ( (float)(v31 - v33) < 0.0 )
      {
        v16 = COERCE_FLOAT(LODWORD(v28) + 0x80000000) / v32;
        v22 = (float)(v28 * v16) + v30;
        v23 = v27 + v27;
        goto LABEL_33;
      }
      LODWORD(v24) = LODWORD(v26) + 0x80000000;
      v25 = v27;
      goto LABEL_30;
    }
    if ( v31 < 0.0 )
    {
      v21 = LODWORD(v31);
      v20 = 0x80000000;
      goto LABEL_27;
    }
  }
  else
  {
    v12 = Ogre::DotProduct((Ogre *)v39, v6, v9);
    LODWORD(v13) = LODWORD(v12) + 0x80000000;
    v14 = v12;
    v38 = (float)(v34 * COERCE_FLOAT(LODWORD(v12) + 0x80000000)) - (float)(v30 * v31);
    v15 = (float)(v34 * v31) - (float)(v32 * COERCE_FLOAT(LODWORD(v12) + 0x80000000));
    if ( v38 < 0.0 )
    {
      if ( v15 > 0.0 )
      {
        if ( v15 > v35 )
        {
          v18 = v31 - v33;
          if ( (float)(v31 - v33) < 0.0 )
          {
            LODWORD(v19) = LODWORD(v18) + 0x80000000;
            goto LABEL_19;
          }
        }
      }
      else if ( v31 < 0.0 )
      {
LABEL_15:
        v20 = LODWORD(v31);
        v21 = 0x80000000;
LABEL_27:
        v16 = COERCE_FLOAT(v21 + v20) / v32;
        v17 = 0.0;
        v10 = v10 + (float)(v31 * v16);
        goto LABEL_35;
      }
      if ( v13 < 0.0 )
      {
        if ( v14 < v30 )
        {
          v17 = v14 / v30;
          v10 = v10 + (float)(v13 * (float)(v14 / v30));
LABEL_31:
          v16 = 0.0;
          goto LABEL_35;
        }
        goto LABEL_22;
      }
    }
    else
    {
      if ( v15 >= 0.0 )
      {
        if ( v15 <= v35 )
        {
          v16 = v38 * (float)(1.0 / v35);
          v17 = (float)((float)(v34 * v31) - (float)(v32 * v13)) * (float)(1.0 / v35);
          v10 = v10
              + (float)((float)(v16
                              * (float)((float)((float)(v32 * v16) + (float)(v34 * (float)(v15 * (float)(1.0 / v35))))
                                      + (float)(v31 + v31)))
                      + (float)(v17
                              * (float)((float)((float)(v34 * v16) + (float)(v30 * (float)(v15 * (float)(1.0 / v35))))
                                      + (float)(v13 + v13))));
          goto LABEL_35;
        }
        if ( v31 < v33 )
        {
          v18 = v31 - v33;
          LODWORD(v19) = COERCE_INT(v31 - v33) + 0x80000000;
LABEL_19:
          v16 = v19 / v32;
          v22 = (float)(v18 * (float)(v19 / v32)) + v30;
          v23 = v13 + v13;
LABEL_33:
          v10 = v10 + (float)(v22 + v23);
          v17 = 1.0;
          goto LABEL_35;
        }
LABEL_22:
        v24 = v13;
        v25 = v13;
LABEL_30:
        v10 = v10 + (float)(v30 + (float)(v24 + v25));
        v17 = 1.0;
        goto LABEL_31;
      }
      if ( v31 < 0.0 )
        goto LABEL_15;
    }
  }
  v17 = 0.0;
  v16 = 0.0;
LABEL_35:
  if ( a3 != nullptr )
    *a3 = v16;
  if ( a4 != nullptr )
    *a4 = v17;
  if ( v10 >= 0.0 )
    return LODWORD(v10);
  else
    return LODWORD(v10) + 0x80000000;
}


//======================================================================
// Ogre::PkgLess(Ogre::FilePkgBase *,Ogre::FilePkgBase *)
// address: 0x0016E4FE   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall Ogre::PkgLess(Ogre *this, Ogre::FilePkgBase *a2, Ogre::FilePkgBase *a3)
{
  return *((_DWORD *)this + 3) > *((_DWORD *)a2 + 3);
}


//======================================================================
// Ogre::ValidateFileName(char *,unsigned int,char const*)
// address: 0x0016E54A   size: 0x44 (68 bytes)
//======================================================================
int __fastcall Ogre::ValidateFileName(int this, char *a2, unsigned __int8 *a3, const char *a4)
{
  int v4; // r3
  int v5; // r3
  int v6; // r4
  int v7; // r1

  if ( *a3 == 46 )
  {
    v4 = a3[1];
    if ( v4 == 92 || v4 == 47 )
      a3 += 2;
  }
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *a3;
    if ( *a3 == 0 )
      break;
    if ( v7 == 47 || v7 == 92 )
    {
      if ( v6 == 0 )
        *(_BYTE *)(this + v5++) = 47;
      v6 = 1;
    }
    else
    {
      *(_BYTE *)(this + v5) = v7;
      v6 = 0;
      ++v5;
    }
    ++a3;
  }
  *(_BYTE *)(this + v5) = v7;
  return this;
}


//======================================================================
// Ogre::MakeDirectory(char const*)
// address: 0x0016E5C4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::MakeDirectory(Ogre *this, const char *a2)
{
  DIR *v3; // r0

  v3 = j_opendir((const char *)this);
  if ( v3 != nullptr )
    return j_closedir(v3);
  else
    return j_mkdir((const char *)this, 0x1FFu);
}


//======================================================================
// Ogre::Vector3_to_Vec3f(ozcollide::Vec3f &,Ogre::Vector3 const&)
// address: 0x0016F72C   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Vector3_to_Vec3f(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  return result;
}


//======================================================================
// Ogre::Vec3f_to_Vector3(Ogre::Vector3 &,ozcollide::Vec3f const&)
// address: 0x0016F73A   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Vec3f_to_Vector3(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  return result;
}


//======================================================================
// Ogre::Lerp(Ogre::ColourValue const&,Ogre::ColourValue const&,float)
// address: 0x00172E5E   size: 0x8A (138 bytes)
//======================================================================
float *__fastcall Ogre::Lerp(float *this, const Ogre::ColourValue *a2, const Ogre::ColourValue *a3, float a4)
{
  float v4; // r7
  float v5; // [sp+4h] [bp-10h]
  float v6; // [sp+Ch] [bp-8h]

  v6 = *((float *)a2 + 1) + (float)((float)(*((float *)a3 + 1) - *((float *)a2 + 1)) * a4);
  v5 = *((float *)a2 + 2) + (float)((float)(*((float *)a3 + 2) - *((float *)a2 + 2)) * a4);
  v4 = *((float *)a2 + 3) + (float)((float)(*((float *)a3 + 3) - *((float *)a2 + 3)) * a4);
  *this = *(float *)a2 + (float)((float)(*(float *)a3 - *(float *)a2) * a4);
  *(this + 1) = v6;
  *(this + 3) = v4;
  *(this + 2) = v5;
  return this;
}


//======================================================================
// Ogre::operator*(Ogre::Vector3 const&,Ogre::Matrix3 const&)
// address: 0x00172F02   size: 0xA8 (168 bytes)
//======================================================================
float *__fastcall Ogre::operator*(float *result, float *a2, float *a3)
{
  float v3; // r6
  float v4; // [sp+4h] [bp-10h]
  float v5; // [sp+8h] [bp-Ch]
  float v6; // [sp+Ch] [bp-8h]

  v3 = a2[1];
  v6 = a2[2];
  v4 = (float)((float)(*a2 * a3[1]) + (float)(v3 * a3[4])) + (float)(v6 * a3[7]);
  v5 = (float)((float)(*a2 * a3[2]) + (float)(v3 * a3[5])) + (float)(v6 * a3[8]);
  *result = (float)((float)(*a2 * *a3) + (float)(v3 * a3[3])) + (float)(v6 * a3[6]);
  result[1] = v4;
  result[2] = v5;
  return result;
}


//======================================================================
// Ogre::Lerp(Ogre::Matrix4 const&,Ogre::Matrix4 const&,float)
// address: 0x00172FAA   size: 0x172 (370 bytes)
//======================================================================
Ogre *__fastcall Ogre::Lerp(Ogre *this, const Ogre::Matrix4 *a2, const Ogre::Matrix4 *a3, float a4)
{
  Ogre::Matrix4::Matrix4(this);
  *(float *)this = *(float *)a2 + (float)((float)(*(float *)a3 - *(float *)a2) * a4);
  *((float *)this + 1) = *((float *)a2 + 1) + (float)((float)(*((float *)a3 + 1) - *((float *)a2 + 1)) * a4);
  *((float *)this + 2) = *((float *)a2 + 2) + (float)((float)(*((float *)a3 + 2) - *((float *)a2 + 2)) * a4);
  *((_DWORD *)this + 3) = 0;
  *((float *)this + 4) = *((float *)a2 + 4) + (float)((float)(*((float *)a3 + 4) - *((float *)a2 + 4)) * a4);
  *((float *)this + 5) = *((float *)a2 + 5) + (float)((float)(*((float *)a3 + 5) - *((float *)a2 + 5)) * a4);
  *((float *)this + 6) = *((float *)a2 + 6) + (float)((float)(*((float *)a3 + 6) - *((float *)a2 + 6)) * a4);
  *((_DWORD *)this + 7) = 0;
  *((float *)this + 8) = *((float *)a2 + 8) + (float)((float)(*((float *)a3 + 8) - *((float *)a2 + 8)) * a4);
  *((float *)this + 9) = *((float *)a2 + 9) + (float)((float)(*((float *)a3 + 9) - *((float *)a2 + 9)) * a4);
  *((float *)this + 10) = *((float *)a2 + 10) + (float)((float)(*((float *)a3 + 10) - *((float *)a2 + 10)) * a4);
  *((_DWORD *)this + 11) = 0;
  *((float *)this + 12) = *((float *)a2 + 12) + (float)((float)(*((float *)a3 + 12) - *((float *)a2 + 12)) * a4);
  *((float *)this + 13) = *((float *)a2 + 13) + (float)((float)(*((float *)a3 + 13) - *((float *)a2 + 13)) * a4);
  *((float *)this + 14) = *((float *)a2 + 14) + (float)((float)(*((float *)a3 + 14) - *((float *)a2 + 14)) * a4);
  *((_DWORD *)this + 15) = 1065353216;
  return this;
}


//======================================================================
// Ogre::CreateParticleMaterial(int,Ogre::Texture *,Ogre::Texture *,int,int)
// address: 0x001731A4   size: 0xA2 (162 bytes)
//======================================================================
Ogre::Material *__fastcall Ogre::CreateParticleMaterial(
        Ogre *this,
        Ogre::Texture *a2,
        Ogre::Texture *a3,
        Ogre::Texture *a4,
        int a5,
        int a6)
{
  Ogre::Material *v8; // r5
  void *v9; // r1
  int v10; // r2
  void *v11; // r1
  int v12; // r2
  void *v13; // r1
  int v14; // r2
  void *v15; // r1
  int v16; // r2
  void *v17; // r1
  Ogre::FixedString *v21[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"particle", (int)a3);
  v8 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v8, (const Ogre::FixedString *)v21);
  Ogre::FixedString::~FixedString(v21, v9);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"BLEND_MODE", v10);
  Ogre::Material::setParamMacro(v8, (const Ogre::FixedString *)v21, (int)this);
  Ogre::FixedString::~FixedString(v21, v11);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"g_DiffuseTex", v12);
  Ogre::Material::setParamTexture(v8, (const Ogre::FixedString *)v21, a2, (int)a4);
  Ogre::FixedString::~FixedString(v21, v13);
  if ( a3 != nullptr )
  {
    Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"MASK_TEXTURE", v14);
    Ogre::Material::setParamMacro(v8, (const Ogre::FixedString *)v21, 1);
    Ogre::FixedString::~FixedString(v21, v15);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"g_MaskTex", v16);
    Ogre::Material::setParamTexture(v8, (const Ogre::FixedString *)v21, a3, a5);
    Ogre::FixedString::~FixedString(v21, v17);
  }
  return v8;
}


//======================================================================
// Ogre::ColorAddBlendAlpha(Ogre::ColourValue &,float,int)
// address: 0x0017325C   size: 0x38 (56 bytes)
//======================================================================
float __fastcall Ogre::ColorAddBlendAlpha(float this, Ogre::ColourValue *a2, float a3, int a4)
{
  float v4; // r4

  v4 = this;
  if ( (unsigned int)(LODWORD(a3) - 2) > 1 )
  {
    if ( LODWORD(a3) == 4 )
    {
      *(float *)LODWORD(this) = *(float *)LODWORD(this) * *(float *)&a2;
      *(float *)(LODWORD(this) + 4) = *(float *)(LODWORD(this) + 4) * *(float *)&a2;
      this = *(float *)(LODWORD(this) + 8) * *(float *)&a2;
      *(float *)(LODWORD(v4) + 8) = this;
    }
  }
  else
  {
    this = *(float *)(LODWORD(this) + 12) * *(float *)&a2;
    *(float *)(LODWORD(v4) + 12) = this;
  }
  return this;
}


//======================================================================
// Ogre::GetTransparentColor(Ogre::ColourValue const&,float,int)
// address: 0x00173294   size: 0xB8 (184 bytes)
//======================================================================
int *__fastcall Ogre::GetTransparentColor(Ogre *this, float a2, float a3, int a4)
{
  int v6; // r0
  float v7; // r7
  int v8; // r5
  int v9; // r7
  float v10; // r0
  int v13; // [sp+0h] [bp-Ch]
  int v14; // [sp+0h] [bp-Ch]

  if ( (dword_4B9370 & 1) == 0 && _cxa_guard_acquire(&dword_4B9370) != 0 )
  {
    dword_4B9360 = 1065353216;
    dword_4B9364 = 1065353216;
    dword_4B9368 = 1065353216;
    dword_4B936C = 1065353216;
    _cxa_guard_release(&dword_4B9370);
  }
  if ( a2 < 0.0 )
  {
    a2 = 0.0;
  }
  else if ( a2 > 1.0 )
  {
    a2 = 1.0;
  }
  if ( (unsigned int)(LODWORD(a3) - 2) > 1 )
  {
    if ( LODWORD(a3) == 4 )
    {
      *(float *)&v9 = a2 * *((float *)this + 1);
      v10 = *(float *)this;
      v14 = *((_DWORD *)this + 3);
      *(float *)&dword_4B9368 = a2 * *((float *)this + 2);
      *(float *)&dword_4B9360 = v10 * a2;
      dword_4B9364 = v9;
      dword_4B936C = v14;
      return &dword_4B9360;
    }
  }
  else
  {
    v13 = *((_DWORD *)this + 2);
    *(float *)&v6 = a2 * *((float *)this + 3);
    v7 = *(float *)this;
    v8 = *((_DWORD *)this + 1);
    this = (Ogre *)&dword_4B9360;
    dword_4B9360 = LODWORD(v7);
    dword_4B9364 = v8;
    dword_4B9368 = v13;
    dword_4B936C = v6;
  }
  return (int *)this;
}


//======================================================================
// Ogre::Lerp(Ogre::ParticleEmitterFrameData &,Ogre::ParticleEmitterFrameData const&,Ogre::ParticleEmitterFrameData const&,float)
// address: 0x00173368   size: 0x36A (874 bytes)
//======================================================================
float __fastcall Ogre::Lerp(
        Ogre *this,
        Ogre::ParticleEmitterFrameData *a2,
        const Ogre::ParticleEmitterFrameData *a3,
        const Ogre::ParticleEmitterFrameData *a4,
        float a5)
{
  float v7; // r7
  float result; // r0
  float v11; // [sp+14h] [bp-58h]
  __int128 v12; // [sp+18h] [bp-54h] BYREF
  _BYTE v13[68]; // [sp+28h] [bp-44h] BYREF

  Ogre::Lerp((Ogre *)v13, a2, a3, *(float *)&a4);
  Ogre::Matrix4::operator=(this, v13);
  Ogre::Lerp(
    (Ogre *)v13,
    (Ogre::ParticleEmitterFrameData *)((char *)a2 + 64),
    (const Ogre::ParticleEmitterFrameData *)((char *)a3 + 64),
    *(float *)&a4);
  Ogre::Matrix4::operator=((char *)this + 64, v13);
  *((float *)this + 32) = *((float *)a2 + 32)
                        + (float)((float)(*((float *)a3 + 32) - *((float *)a2 + 32)) * *(float *)&a4);
  *((float *)this + 33) = *((float *)a2 + 33)
                        + (float)((float)(*((float *)a3 + 33) - *((float *)a2 + 33)) * *(float *)&a4);
  *((float *)this + 34) = *((float *)a2 + 34)
                        + (float)((float)(*((float *)a3 + 34) - *((float *)a2 + 34)) * *(float *)&a4);
  *((float *)this + 35) = *((float *)a2 + 35)
                        + (float)((float)(*((float *)a3 + 35) - *((float *)a2 + 35)) * *(float *)&a4);
  *((float *)this + 36) = *((float *)a2 + 36)
                        + (float)((float)(*((float *)a3 + 36) - *((float *)a2 + 36)) * *(float *)&a4);
  v11 = *((float *)a2 + 38) + (float)((float)(*((float *)a3 + 38) - *((float *)a2 + 38)) * *(float *)&a4);
  v7 = *((float *)a2 + 39) + (float)((float)(*((float *)a3 + 39) - *((float *)a2 + 39)) * *(float *)&a4);
  *((float *)this + 37) = *((float *)a2 + 37)
                        + (float)((float)(*((float *)a3 + 37) - *((float *)a2 + 37)) * *(float *)&a4);
  *((float *)this + 39) = v7;
  *((float *)this + 38) = v11;
  *((float *)this + 40) = *((float *)a2 + 40)
                        + (float)((float)(*((float *)a3 + 40) - *((float *)a2 + 40)) * *(float *)&a4);
  *((float *)this + 41) = *((float *)a2 + 41)
                        + (float)((float)(*((float *)a3 + 41) - *((float *)a2 + 41)) * *(float *)&a4);
  *((float *)this + 42) = *((float *)a2 + 42)
                        + (float)((float)(*((float *)a3 + 42) - *((float *)a2 + 42)) * *(float *)&a4);
  *((float *)this + 43) = *((float *)a2 + 43)
                        + (float)((float)(*((float *)a3 + 43) - *((float *)a2 + 43)) * *(float *)&a4);
  *((float *)this + 44) = *((float *)a2 + 44)
                        + (float)((float)(*((float *)a3 + 44) - *((float *)a2 + 44)) * *(float *)&a4);
  *((float *)this + 45) = *((float *)a2 + 45)
                        + (float)((float)(*((float *)a3 + 45) - *((float *)a2 + 45)) * *(float *)&a4);
  *((float *)this + 46) = *((float *)a2 + 46)
                        + (float)((float)(*((float *)a3 + 46) - *((float *)a2 + 46)) * *(float *)&a4);
  Ogre::Lerp(
    (float *)&v12,
    (Ogre::ParticleEmitterFrameData *)((char *)a2 + 188),
    (const Ogre::ParticleEmitterFrameData *)((char *)a3 + 188),
    *(float *)&a4);
  *(_OWORD *)((char *)this + 188) = v12;
  *((float *)this + 51) = *((float *)a2 + 51)
                        + (float)((float)(*((float *)a3 + 51) - *((float *)a2 + 51)) * *(float *)&a4);
  *((float *)this + 52) = *((float *)a2 + 52)
                        + (float)((float)(*((float *)a3 + 52) - *((float *)a2 + 52)) * *(float *)&a4);
  *((float *)this + 54) = *((float *)a2 + 54)
                        + (float)((float)(*((float *)a3 + 54) - *((float *)a2 + 54)) * *(float *)&a4);
  *((float *)this + 55) = *((float *)a2 + 55)
                        + (float)((float)(*((float *)a3 + 55) - *((float *)a2 + 55)) * *(float *)&a4);
  *((float *)this + 56) = *((float *)a2 + 56)
                        + (float)((float)(*((float *)a3 + 56) - *((float *)a2 + 56)) * *(float *)&a4);
  result = *((float *)a2 + 53) + (float)((float)(*((float *)a3 + 53) - *((float *)a2 + 53)) * *(float *)&a4);
  *((float *)this + 53) = result;
  return result;
}


//======================================================================
// Ogre::Invert(Ogre::Matrix4 const&)
// address: 0x0017B832   size: 0x16 (22 bytes)
//======================================================================
Ogre *__fastcall Ogre::Invert(Ogre *this, const Ogre::Matrix4 *a2)
{
  Ogre::Matrix4::Matrix4(this);
  Ogre::Matrix4::inverse(a2, this);
  return this;
}


//======================================================================
// Ogre::operator<<(Ogre::Archive &,Ogre::BitArray1D &)
// address: 0x0017E8C0   size: 0x56 (86 bytes)
//======================================================================
int __fastcall Ogre::operator<<(int a1, unsigned int *a2)
{
  void (*v4)(void); // r3

  Ogre::Archive::operator<<(a1);
  Ogre::Archive::operator<<(a1);
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    Ogre::BitArray1D::init((Ogre::BitArray1D *)a2, a2[1], a2[2]);
    v4 = *(void (**)(void))(**(_DWORD **)(a1 + 4) + 8);
  }
  else
  {
    v4 = *(void (**)(void))(**(_DWORD **)(a1 + 4) + 12);
  }
  v4();
  return a1;
}


//======================================================================
// Ogre::operator<<(Ogre::Archive &,Ogre::BitArray2D &)
// address: 0x0017E916   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::operator<<(int a1, unsigned int *a2)
{
  Ogre::Archive::operator<<(a1);
  Ogre::Archive::operator<<(a1);
  Ogre::operator<<(a1, a2);
  return a1;
}


//======================================================================
// Ogre::_indexMapBuf(int,int)
// address: 0x0017FF54   size: 0x1A (26 bytes)
//======================================================================
char *__fastcall Ogre::_indexMapBuf(Ogre *this, int a2, int a3)
{
  return (char *)this + 9 * ((a2 + 1) / 2) + 8 * (a2 / 2);
}


//======================================================================
// Ogre::Normalize(Ogre::Vector4 &)
// address: 0x001836B6   size: 0x3E (62 bytes)
//======================================================================
float __fastcall Ogre::Normalize(Ogre *this, Ogre::Vector4 *a2)
{
  float v3; // r0
  float result; // r0

  v3 = 1.0 / Ogre::Vector4::length(this);
  *(float *)this = *(float *)this * v3;
  *((float *)this + 1) = *((float *)this + 1) * v3;
  *((float *)this + 2) = *((float *)this + 2) * v3;
  result = *((float *)this + 3) * v3;
  *((float *)this + 3) = result;
  return result;
}


//======================================================================
// Ogre::IsNormalized(Ogre::Vector4 const&)
// address: 0x001836F4   size: 0x30 (48 bytes)
//======================================================================
bool __fastcall Ogre::IsNormalized(Ogre *this, const Ogre::Vector4 *a2)
{
  float v2; // r4
  float v3; // r0

  v2 = Ogre::Vector4::length(this) - 1.0;
  if ( v2 >= 0.0 )
    v3 = v2;
  else
    LODWORD(v3) = LODWORD(v2) + 0x80000000;
  return v3 < 0.00001;
}


//======================================================================
// Ogre::Md5Calc(char *,char const*,unsigned int)
// address: 0x00186098   size: 0x3E (62 bytes)
//======================================================================
int __fastcall Ogre::Md5Calc(Ogre *this, char *a2, const char *a3, unsigned int a4)
{
  _DWORD v8[22]; // [sp+Ch] [bp-60h] BYREF

  MD5Init(v8);
  MD5Update((int)v8, (int)a2, (unsigned int)a3);
  return MD5Final((int)this, (char *)v8);
}


//======================================================================
// Ogre::Md5Verify(char const*,char const*,unsigned int)
// address: 0x001860DC   size: 0x36 (54 bytes)
//======================================================================
bool __fastcall Ogre::Md5Verify(Ogre *this, char *a2, const char *a3, unsigned int a4)
{
  _BYTE v6[16]; // [sp+4h] [bp-14h] BYREF

  Ogre::Md5Calc((Ogre *)v6, a2, a3, _stack_chk_guard);
  return j_memcmp(v6, this, 0x10u) == 0;
}


//======================================================================
// Ogre::SerializeBindObj(Ogre::Archive &,Ogre::BINDOBJ_T &,int)
// address: 0x00186D18   size: 0xE4 (228 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::SerializeBindObj(Ogre *this, Ogre::Archive *a2, Ogre::BINDOBJ_T *a3, int a4)
{
  Ogre::Archive *result; // r0

  Ogre::Archive::operator<<(this, a2);
  Ogre::Archive::serialize(this, (char *)a2 + 4, 0xCu);
  Ogre::Archive::serialize(this, (char *)a2 + 16, 0x10u);
  if ( (int)a3 <= 101 || (Ogre::Archive::serialize(this, (char *)a2 + 71, 1u), *((_BYTE *)a2 + 71) == 0) )
    Ogre::Archive::operator<<<Ogre::Resource>(this, (Ogre::BaseObject **)a2 + 8);
  Ogre::Archive::operator<<(this, (char *)a2 + 36);
  Ogre::Archive::operator<<((int)this, (const char **)a2 + 10);
  Ogre::Archive::serialize(this, (char *)a2 + 44, 0xCu);
  Ogre::Archive::operator<<((int)this, (const char **)a2 + 14);
  Ogre::Archive::operator<<(this, (char *)a2 + 60);
  Ogre::Archive::operator<<(this, (char *)a2 + 64);
  Ogre::Archive::serialize(this, (char *)a2 + 68, 1u);
  Ogre::Archive::serialize(this, (char *)a2 + 69, 1u);
  Ogre::Archive::serialize(this, (char *)a2 + 70, 1u);
  result = Ogre::Archive::operator<<(this, (char *)a2 + 72);
  if ( (int)a3 > 100 )
    result = Ogre::Archive::operator<<(this, (char *)a2 + 76);
  if ( *((_DWORD *)this + 2) == 1 && *((_BYTE *)a2 + 71) != 0 )
  {
    result = (Ogre::Archive *)Ogre::ResourceManager::blockLoad(
                                (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
                                (Ogre::FixedString **)a2 + 14,
                                0);
    *((_DWORD *)a2 + 8) = result;
  }
  return result;
}


//======================================================================
// Ogre::iswide(int)
// address: 0x001884F0   size: 0x66 (102 bytes)
//======================================================================
bool __fastcall Ogre::iswide(int this, int a2)
{
  _BOOL4 result; // r0

  result = false;
  if ( this > 4351 )
  {
    result = true;
    if ( (unsigned int)(this - 4352) > 0x5F
      && ((unsigned int)(this - 11904) > 0x764F || (this & 0xFFFFFFEE) == 0x300A || this == 12351) )
    {
      result = true;
      if ( (unsigned int)(this - 44032) > 0x2BA3
        && (unsigned int)(this - 63744) > 0x1FF
        && (unsigned int)(this - 65072) > 0x3F
        && (unsigned int)(this - 65280) > 0x5F )
      {
        return (unsigned int)(this - 65504) <= 6;
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::Stricmp(char const*,char const*)
// address: 0x0018858C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Stricmp(Ogre *this, const char *a2, const char *a3)
{
  return j_strcasecmp((const char *)this, a2);
}


//======================================================================
// Ogre::loadModelFromFile(Ogre::FixedString const&)
// address: 0x0018AF7C   size: 0x5A (90 bytes)
//======================================================================
const Ogre::RuntimeClass *__fastcall Ogre::loadModelFromFile(Ogre::FixedString **this, const Ogre::FixedString *a2)
{
  Ogre::BaseObject *v3; // r0
  unsigned int v4; // r3
  Ogre::ModelData *v5; // r4
  const Ogre::RuntimeClass *result; // r0
  Ogre::Model *v7; // r5

  v3 = (Ogre::BaseObject *)Ogre::ResourceManager::blockLoad(
                             (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
                             this,
                             0);
  v5 = v3;
  if ( v3 != nullptr )
  {
    result = Ogre::BaseObject::isKindOf(v3, (const Ogre::RuntimeClass *)&Ogre::ModelData::m_RTTI);
    if ( result != nullptr )
    {
      v7 = (Ogre::Model *)operator new(0x1C8u);
      Ogre::Model::Model(v7, v5);
      Ogre::BaseObject::release(v5);
      return v7;
    }
  }
  else
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreModel.cpp",
      (const char *)&stru_498.st_value,
      8,
      v4);
    Ogre::LogMessage((Ogre *)"failed to load: %s", (const char *)*this);
    return nullptr;
  }
  return result;
}


//======================================================================
// Ogre::ThreadSleep(unsigned int)
// address: 0x0018B17C   size: 0x28 (40 bytes)
//======================================================================
__int64 __fastcall Ogre::ThreadSleep(unsigned int this, unsigned int a2, int a3)
{
  struct timespec v4; // [sp+0h] [bp-Ch] BYREF
  int v5; // [sp+8h] [bp-4h]

  v5 = a3;
  v4.tv_sec = this / 0x3E8;
  v4.tv_nsec = 1000000 * (this % 0x3E8);
  j_nanosleep(&v4, nullptr);
  return (__int64)v4;
}


//======================================================================
// Ogre::PopMessageBox(char const*,char const*)
// address: 0x0018B1A8   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::PopMessageBox(Ogre *this, const char *a2, const char *a3)
{
  ;
}


//======================================================================
// Ogre::GenerateUniqueDeviceID(char *,int)
// address: 0x0018B1AC   size: 0x4C (76 bytes)
//======================================================================
char *__fastcall Ogre::GenerateUniqueDeviceID(Ogre *this, char *a2, int a3)
{
  const char *UniqueDeviceIDJNI; // r0
  const char *v6; // r4
  char *result; // r0

  UniqueDeviceIDJNI = (const char *)GetUniqueDeviceIDJNI(this, a2, a3);
  v6 = UniqueDeviceIDJNI;
  if ( UniqueDeviceIDJNI == nullptr || *UniqueDeviceIDJNI == 0 )
    return j_strcpy((char *)this, "0");
  Ogre::LogSetCurParam(
    (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreOSUtility.cpp",
    (const char *)&stru_178.st_info,
    2,
    *(unsigned __int8 *)UniqueDeviceIDJNI);
  Ogre::LogMessage((Ogre *)"DeviceID=%s", v6);
  result = j_strncpy((char *)this, v6, (size_t)a2);
  a2[(_DWORD)this - 1] = 0;
  return result;
}


//======================================================================
// Ogre::GetMachineLocation(double &,double &)
// address: 0x0018B204   size: 0x18 (24 bytes)
//======================================================================
__int64 __fastcall Ogre::GetMachineLocation(Ogre *this, double *a2, double *a3)
{
  __int64 result; // r0

  *(_QWORD *)this = GetLocationLongitude(this, a2, a3);
  result = GetLocationLatitude();
  *(_QWORD *)a2 = result;
  return result;
}


//======================================================================
// Ogre::GetNetworkState(void)
// address: 0x0018B21C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::GetNetworkState(Ogre *this)
{
  return GetMobileNetworkState(this);
}


//======================================================================
// Ogre::SetScreenBrightness(float)
// address: 0x0018B224   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::SetScreenBrightness(Ogre *this, float a2)
{
  return SetMobileScreenBright(this, LODWORD(a2));
}


//======================================================================
// Ogre::BindObjLessThan(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)
// address: 0x0018B280   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall Ogre::BindObjLessThan(int a1, int a2)
{
  return *(_DWORD *)(a1 + 8) < *(_DWORD *)(a2 + 8);
}


//======================================================================
// Ogre::LogInit(void)
// address: 0x0018E6F8   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::LogInit(Ogre *this)
{
  pthread_mutex_t *v1; // r6

  dword_4C6BDC = 0;
  dword_4C6BE0 = 0;
  dword_4C6BE4 = 0;
  dword_4C6BE8 = 0;
  v1 = (pthread_mutex_t *)operator new(4u);
  Ogre::LockSection::LockSection(v1);
  dword_4C6BEC = (int)v1;
  return 0;
}


//======================================================================
// Ogre::LogRelease(void)
// address: 0x0018E720   size: 0x36 (54 bytes)
//======================================================================
void __fastcall Ogre::LogRelease(Ogre *this)
{
  int i; // r4
  int v2; // r0
  void *v3; // r4

  for ( i = 0; i < dword_4C6BE8; ++i )
  {
    v2 = dword_4C6BF0[i];
    if ( v2 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  }
  v3 = (void *)dword_4C6BEC;
  if ( dword_4C6BEC != 0 )
  {
    Ogre::LockSection::~LockSection((pthread_mutex_t *)dword_4C6BEC);
    operator delete(v3);
  }
}


//======================================================================
// Ogre::LogAddHandler(Ogre::LogHandler *)
// address: 0x0018E75C   size: 0x46 (70 bytes)
//======================================================================
int __fastcall Ogre::LogAddHandler(Ogre *this, Ogre::LogHandler *a2)
{
  int v2; // r2
  int i; // r3

  if ( this == nullptr )
    return -1;
  v2 = dword_4C6BE8;
  if ( dword_4C6BE8 == 16 )
    return -1;
  for ( i = 0; ; ++i )
  {
    if ( i >= dword_4C6BE8 )
    {
      ++dword_4C6BE8;
      dword_4C6BDC[v2 + 5] = (int)this;
      return v2;
    }
    if ( (Ogre *)dword_4C6BF0[i] == this )
      break;
  }
  return i;
}


//======================================================================
// Ogre::LogAddFileHandler(char const*,unsigned int)
// address: 0x0018E7B0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::LogAddFileHandler(Ogre *this, const char *a2, unsigned int a3)
{
  Ogre::FileLogHandler *v5; // r4
  Ogre::LogHandler *v6; // r1

  v5 = (Ogre::FileLogHandler *)operator new(0xCu);
  Ogre::FileLogHandler::FileLogHandler(v5, (unsigned int)a2, (char *)this, 0x800u);
  return Ogre::LogAddHandler(v5, v6);
}


//======================================================================
// Ogre::LogAddConsoleHandler(unsigned int)
// address: 0x0018E7D2   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Ogre::LogAddConsoleHandler(Ogre *this, unsigned int a2)
{
  Ogre::ConsoleLogHandler *v3; // r4
  Ogre::LogHandler *v4; // r1

  v3 = (Ogre::ConsoleLogHandler *)operator new(8u);
  Ogre::ConsoleLogHandler::ConsoleLogHandler(v3, (unsigned int)this);
  return Ogre::LogAddHandler(v3, v4);
}


//======================================================================
// Ogre::LogSetCurParam(char const*,int,unsigned int)
// address: 0x0018E7EC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::LogSetCurParam(int this, const char *a2, int a3, unsigned int a4)
{
  dword_4C6BDC[0] = this;
  dword_4C6BE0 = (int)a2;
  dword_4C6BE4 = a3;
  return this;
}


//======================================================================
// Ogre::LogMessage(char const*,...)
// address: 0x0018E7F8   size: 0x96 (150 bytes)
//======================================================================
int Ogre::LogMessage(Ogre *this, const char *a2, ...)
{
  int i; // r5
  _DWORD *v4; // r0
  char s[8200]; // [sp+Ch] [bp-2008h] BYREF
  int savedregs_24; // [sp+202Ch] [bp+18h] BYREF

  Ogre::LockSection::Lock((pthread_mutex_t *)dword_4C6BEC);
  j_vsprintf(s, (const char *)this, &savedregs_24);
  for ( i = 0; i < dword_4C6BE8; ++i )
  {
    v4 = (_DWORD *)dword_4C6BF0[i];
    if ( (v4[1] & dword_4C6BE4) != 0 )
      (*(void (__fastcall **)(_DWORD *, int, int))(*v4 + 8))(v4, dword_4C6BDC[0], dword_4C6BE0);
  }
  if ( dword_4C6BE4 == 8 )
    Ogre::PopMessageBox((Ogre *)s, "LOG_SEVERE", (const char *)dword_4C6BDC);
  return Ogre::LockSection::Unlock((pthread_mutex_t *)dword_4C6BEC);
}


//======================================================================
// Ogre::AnimPlayTrackPred(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)
// address: 0x00192714   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall Ogre::AnimPlayTrackPred(int a1, int a2)
{
  return *(_DWORD *)(a1 + 40) > *(_DWORD *)(a2 + 40);
}


//======================================================================
// Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)
// address: 0x00194AD0   size: 0x12C (300 bytes)
//======================================================================
float __fastcall Ogre::TransformUV(
        Ogre *this,
        Ogre::Vector2 *a2,
        const Ogre::Vector2 *a3,
        const Ogre::Vector2 *a4,
        const Ogre::Vector2 *a5,
        const Ogre::Vector4 *a6)
{
  float v7; // r0
  float v8; // r6
  float v9; // r0
  float v10; // r6
  float v11; // r1
  float result; // r0
  float v14; // [sp+Ch] [bp-10h]

  if ( (`guard variable for'Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::FIX_VEC
      & 1) == 0
    && _cxa_guard_acquire(&`guard variable for'Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::FIX_VEC) != 0 )
  {
    Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::FIX_VEC = 1056964608;
    dword_4C6DF4 = 1056964608;
    _cxa_guard_release(&`guard variable for'Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::FIX_VEC);
  }
  if ( (`guard variable for'Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::transformedVec
      & 1) == 0
    && _cxa_guard_acquire(&`guard variable for'Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::transformedVec) != 0 )
  {
    _cxa_guard_release(&`guard variable for'Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::transformedVec);
  }
  v7 = *(float *)this
     - *(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::FIX_VEC;
  *(float *)this = v7;
  v8 = v7;
  v9 = *((float *)this + 1) - *(float *)&dword_4C6DF4;
  *((float *)this + 1) = v9;
  v14 = *((float *)a4 + 1);
  *(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::fTransformedUVX = (float)(v8 * v14) - (float)(v9 * *(float *)a4);
  *(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::fTransformedUVY = (float)(*(float *)this * *(float *)a4) + (float)(v9 * v14);
  *(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::fTransformedUVX = *(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::fTransformedUVX * *(float *)a3;
  *(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::fTransformedUVX = (float)((float)(*(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::fTransformedUVX + *(float *)a2) + *(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::FIX_VEC) / *((float *)a5 + 2);
  v11 = *((float *)a3 + 1);
  *(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::fTransformedUVX = *(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::fTransformedUVX + *(float *)a5;
  v10 = *(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::fTransformedUVX;
  result = (float)((float)((float)((float)(*(float *)&Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::fTransformedUVY
                                         * v11)
                                 + *((float *)a2 + 1))
                         + *(float *)&dword_4C6DF4)
                 / *((float *)a5 + 3))
         + *((float *)a5 + 1);
  Ogre::TransformUV(Ogre::Vector2 &,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector2 const&,Ogre::Vector4 const&)::fTransformedUVY = LODWORD(result);
  *((float *)this + 1) = result;
  *(float *)this = v10;
  return result;
}


//======================================================================
// Ogre::ParamCompare(Ogre::MaterialParam *,Ogre::MaterialParam *)
// address: 0x00195D1C   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall Ogre::ParamCompare(int a1, int a2)
{
  return *(_DWORD *)(a1 + 8) < *(_DWORD *)(a2 + 8);
}


//======================================================================
// Ogre::LoadingForOldVersion(Ogre::FixedString &,int &,int &)
// address: 0x00195FC8   size: 0x9E (158 bytes)
//======================================================================
int *__fastcall Ogre::LoadingForOldVersion(Ogre *this, Ogre::FixedString *a2, int *a3, int *a4)
{
  int *result; // r0
  int v8; // r3

  if ( Ogre::operator==((const char **)this, "opaque_stdmtl") )
  {
    result = Ogre::FixedString::operator=((int *)this, "stdmtl");
    v8 = 0;
LABEL_5:
    *(_DWORD *)a2 = v8;
    return result;
  }
  if ( Ogre::operator==((const char **)this, "xparent_stdmtl") )
  {
    result = Ogre::FixedString::operator=((int *)this, "stdmtl");
    v8 = 1;
    goto LABEL_5;
  }
  if ( Ogre::operator==((const char **)this, "blend_stdmtl") )
  {
    result = Ogre::FixedString::operator=((int *)this, "stdmtl");
    v8 = 2;
    goto LABEL_5;
  }
  if ( Ogre::operator==((const char **)this, "uvanim_blend") )
  {
    result = Ogre::FixedString::operator=((int *)this, "uvanim");
    *(_DWORD *)a2 = 3;
    *a3 = 1;
  }
  else
  {
    result = (int *)Ogre::operator==((const char **)this, "uvanim_selfillum");
    if ( result != nullptr )
    {
      result = Ogre::FixedString::operator=((int *)this, "uvanim");
      *(_DWORD *)a2 = 3;
      *a3 = 0;
    }
  }
  return result;
}


//======================================================================
// Ogre::SerializeExternalTexture(Ogre::Archive &,Ogre::TextureData *&)
// address: 0x0019B004   size: 0x4A (74 bytes)
//======================================================================
__int64 __fastcall Ogre::SerializeExternalTexture(__int64 this, Ogre::TextureData **a2)
{
  int v2; // r3
  void *v4; // r1
  int v5; // r1
  __int64 v7; // [sp+0h] [bp-Ch] BYREF
  Ogre::TextureData **v8; // [sp+8h] [bp-4h]

  v7 = this;
  v8 = a2;
  v2 = *(_DWORD *)(this + 8);
  HIDWORD(v7) = 0;
  if ( v2 == 1 )
  {
    Ogre::Archive::operator<<(this, (const char **)&v7 + 1);
    *(_DWORD *)HIDWORD(this) = Ogre::ResourceManager::blockLoad(
                                 (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
                                 (Ogre::FixedString **)&v7 + 1,
                                 0);
  }
  else
  {
    v5 = *(_DWORD *)HIDWORD(this);
    if ( v5 != 0 )
      Ogre::FixedString::operator=((int *)&v7 + 1, (int *)(v5 + 8));
    Ogre::Archive::operator<<(this, (const char **)&v7 + 1);
  }
  Ogre::FixedString::release(0, v4);
  return v7;
}


//======================================================================
// Ogre::SaveImageToPng(char const*,unsigned int,unsigned int,unsigned int,char *)
// address: 0x0019B054   size: 0x54 (84 bytes)
//======================================================================
int __fastcall Ogre::SaveImageToPng(Ogre *this, const char *a2, int a3, char a4, void *a5, char *a6)
{
  _DWORD v11[2]; // [sp+1Ch] [bp-8h] BYREF

  ilEnable(1568);
  ilGenImages(1, v11);
  ilBindImage(v11[0]);
  ilTexImage((int)a2, a3, 1, a4, 32992, 5121, a5);
  ilSave(1061, this);
  return ilDeleteImages(1, v11);
}


//======================================================================
// Ogre::LoadTextureFromFile(char const*,bool)
// address: 0x0019C31C   size: 0x76 (118 bytes)
//======================================================================
Ogre::TextureData *__fastcall Ogre::LoadTextureFromFile(Ogre *this, Ogre::FixedString *a2, Ogre::FixedString *a3)
{
  char *v5; // r0
  int v6; // r2
  Ogre::ResourceManager *v7; // r7
  int v8; // r4
  void *v9; // r1
  Ogre::TextureData *v10; // r6
  Ogre::FixedString *v12[2]; // [sp+4h] [bp-8h] BYREF

  v12[0] = a2;
  v12[1] = a3;
  v5 = j_strrchr((const char *)this, 46);
  if ( v5 == nullptr )
    return nullptr;
  if ( j_strcasecmp(v5, ".otex") == 0 )
  {
    v7 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
    v12[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                    this,
                                    (const char *)0xFFFFFFFF,
                                    v6,
                                    (int)&Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton);
    v8 = Ogre::ResourceManager::blockLoad(v7, v12, 0);
    Ogre::FixedString::release((int)v12[0], v9);
  }
  else
  {
    v10 = (Ogre::TextureData *)operator new(0x48u);
    Ogre::TextureData::TextureData(v10);
    sub_3BF0BC((int)v12, (char *)this);
    Ogre::TextureData::loadFromImageFile(v10, (char **)v12, (int)a2);
    sub_3BDF80(v12);
    return v10;
  }
  return (Ogre::TextureData *)v8;
}


//======================================================================
// Ogre::operator<(Ogre::ModelInstanceData const&,Ogre::ModelInstanceData const&)
// address: 0x0019D6F8   size: 0xC (12 bytes)
//======================================================================
bool __fastcall Ogre::operator<(int a1, int a2)
{
  return *(_DWORD *)(a1 + 60) < *(_DWORD *)(a2 + 60);
}


//======================================================================
// Ogre::IsInViewRange(int,int,float,float,float)
// address: 0x0019ECC4   size: 0x6E (110 bytes)
//======================================================================
bool __fastcall Ogre::IsInViewRange(Ogre *this, int a2, float a3, float a4, float a5, float a6)
{
  float v6; // r5
  float v7; // r4

  v6 = (float)((float)(int)this + 0.5) - a3;
  if ( v6 < 0.0 )
    LODWORD(v6) += 0x80000000;
  v7 = (float)((float)a2 + 0.5) - a4;
  if ( v7 < 0.0 )
    LODWORD(v7) += 0x80000000;
  if ( v6 <= v7 )
    v6 = v7;
  return v6 < a5;
}


//======================================================================
// Ogre::Tan(float)
// address: 0x001CCE1C   size: 0x16 (22 bytes)
//======================================================================
float __fastcall Ogre::Tan(Ogre *this, float a2)
{
  return j_tan((float)(*(float *)&this * 0.017453));
}


//======================================================================
// Ogre::operator<(Ogre::ShaderProgKey const&,Ogre::ShaderProgKey const&)
// address: 0x0025E7DA   size: 0x1A (26 bytes)
//======================================================================
bool __fastcall Ogre::operator<(unsigned int *a1, unsigned int *a2)
{
  unsigned int v3; // r2
  _BOOL4 result; // r0

  v3 = *a1;
  result = true;
  if ( v3 >= *a2 )
    return a1[1] < a2[1];
  return result;
}


//======================================================================
// Ogre::SetSamplerAddress(unsigned int,Ogre::SAMPLER_ADDRESS)
// address: 0x0025ECD0   size: 0x1A (26 bytes)
//======================================================================
void __fastcall Ogre::SetSamplerAddress(GLenum pname, int a2)
{
  GLenum v2; // r1
  GLint v3; // r2

  if ( a2 != 0 )
  {
    v3 = 33071;
    v2 = pname;
  }
  else
  {
    v2 = pname;
    v3 = 10497;
  }
  j_glTexParameteri(0xDE1u, v2, v3);
}


//======================================================================
// Ogre::SetSamplerMinFilter(Ogre::SAMPLER_FILTER,Ogre::SAMPLER_FILTER)
// address: 0x0025ECF8   size: 0x44 (68 bytes)
//======================================================================
void __fastcall Ogre::SetSamplerMinFilter(int a1, int a2)
{
  GLint v2; // r2
  int v3; // r2

  if ( a1 != 2 )
  {
    if ( a2 != 0 )
    {
      if ( a2 == 2 )
      {
        v2 = 9986;
        goto LABEL_13;
      }
      v3 = 156;
    }
    else
    {
      v3 = 152;
    }
    v2 = v3 << 6;
    goto LABEL_13;
  }
  if ( a2 != 0 )
  {
    if ( a2 == 2 )
      v2 = 9987;
    else
      v2 = 9985;
  }
  else
  {
    v2 = 9729;
  }
LABEL_13:
  j_glTexParameteri(0xDE1u, 0x2801u, v2);
}


//======================================================================
// Ogre::SetSamplerTexture(int,unsigned int)
// address: 0x00262E64   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::SetSamplerTexture(Ogre *this, GLuint a2, unsigned int a3)
{
  j_glActiveTexture((GLenum)this + 33984);
  j_glBindTexture(0xDE1u, a2);
}


//======================================================================
// Ogre::SetBlendState(int,int)
// address: 0x00262ECC   size: 0x36 (54 bytes)
//======================================================================
void __fastcall Ogre::SetBlendState(Ogre *this, int a2, int a3)
{
  GLenum v3; // r0

  if ( (unsigned int)this <= 1 )
  {
    j_glDisable(0xBE2u);
    return;
  }
  if ( this == (Ogre *)((char *)&dword_0 + 2) )
  {
    j_glEnable(0xBE2u);
    v3 = 770;
LABEL_7:
    j_glBlendFunc(v3, 0x303u);
    return;
  }
  if ( this == (Ogre *)((char *)&dword_0 + 3) )
  {
    j_glEnable(0xBE2u);
    v3 = 1;
    goto LABEL_7;
  }
  sub_26179C((int)this);
}


//======================================================================
// Ogre::OGL_SetDefaultState(void)
// address: 0x0026463C   size: 0x8E (142 bytes)
//======================================================================
void __fastcall Ogre::OGL_SetDefaultState(Ogre *this)
{
  GLenum i; // r4

  j_glEnable(0xB71u);
  j_glEnable(0xB44u);
  j_glFrontFace(0x900u);
  j_glCullFace(0x405u);
  j_glColorMask(1u, 1u, 1u, 1u);
  j_glDepthMask(1u);
  j_glDepthFunc(0x201u);
  j_glDisable(0xBE2u);
  j_glBlendFunc(0x302u, 0x303u);
  j_glDisable(0xB90u);
  for ( i = 33984; i != 33992; ++i )
  {
    j_glActiveTexture(i);
    j_glBindTexture(0xDE1u, 0);
    j_glTexParameteri(0xDE1u, 0x2802u, 10497);
    j_glTexParameteri(0xDE1u, 0x2803u, 10497);
    j_glTexParameteri(0xDE1u, 0x2800u, 9729);
    j_glTexParameteri(0xDE1u, 0x2801u, 9985);
  }
}


//======================================================================
// Ogre::operator*(Ogre::Matrix3 const&,Ogre::Matrix3 const&)
// address: 0x002E0D40   size: 0x72 (114 bytes)
//======================================================================
int __fastcall Ogre::operator*(int result, int a2, int a3)
{
  int i; // r5
  int v4; // r4
  float v5; // [sp+10h] [bp-14h]
  float v6; // [sp+14h] [bp-10h]
  float v7; // [sp+18h] [bp-Ch]

  for ( i = 0; i != 36; i += 12 )
  {
    v4 = 0;
    v5 = *(float *)(a2 + i);
    v6 = *(float *)(a2 + i + 4);
    v7 = *(float *)(a2 + i + 8);
    do
    {
      *(float *)(result + i + v4) = (float)((float)(v5 * *(float *)(a3 + v4)) + (float)(v6 * *(float *)(a3 + v4 + 12)))
                                  + (float)(v7 * *(float *)(a3 + v4 + 24));
      v4 += 4;
    }
    while ( v4 != 12 );
  }
  return result;
}


//======================================================================
// Ogre::Pow(float,float)
// address: 0x002EC7A2   size: 0x24 (36 bytes)
//======================================================================
float __fastcall Ogre::Pow(Ogre *this, float a2, float a3)
{
  return j_pow(*(float *)&this, a2);
}


//======================================================================
// Ogre::CreateApplication(void)
// address: 0x002F6046   size: 0x12 (18 bytes)
//======================================================================
ClientManager *__fastcall Ogre::CreateApplication(Ogre *this)
{
  ClientManager *v1; // r4

  v1 = (ClientManager *)operator new(0xB0u);
  ClientManager::ClientManager(v1);
  return v1;
}

