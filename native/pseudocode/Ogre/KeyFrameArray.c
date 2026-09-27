// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::KeyFrameArray

//======================================================================
// Ogre::KeyFrameArray<float>::getNumKey(void)
// address: 0x0013FAE8   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<float>::getNumKey(int a1)
{
  return (*(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24)) >> 3;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::ColourValue>::getNumKey(void)
// address: 0x0013FAF4   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::ColourValue>::getNumKey(int a1)
{
  return -858993459 * ((*(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24)) >> 2);
}


//======================================================================
// Ogre::KeyFrameArray<float>::~KeyFrameArray()
// address: 0x0013FBBC   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13KeyFrameArrayIfED1Ev'
Ogre::BaseKeyFrameArray *__fastcall Ogre::KeyFrameArray<float>::~KeyFrameArray(Ogre::BaseKeyFrameArray *this)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_455A48;
  v2 = *((void **)this + 9);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 6);
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::BaseKeyFrameArray::~BaseKeyFrameArray(this);
  return this;
}


//======================================================================
// Ogre::KeyFrameArray<float>::~KeyFrameArray()
// address: 0x0013FBEC   size: 0x12 (18 bytes)
//======================================================================
Ogre::BaseKeyFrameArray *__fastcall Ogre::KeyFrameArray<float>::~KeyFrameArray(Ogre::BaseKeyFrameArray *a1)
{
  Ogre::KeyFrameArray<float>::~KeyFrameArray(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::ColourValue>::~KeyFrameArray()
// address: 0x0013FC00   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13KeyFrameArrayINS_11ColourValueEED1Ev'
Ogre::BaseKeyFrameArray *__fastcall Ogre::KeyFrameArray<Ogre::ColourValue>::~KeyFrameArray(
        Ogre::BaseKeyFrameArray *this)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_455A18;
  v2 = *((void **)this + 9);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 6);
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::BaseKeyFrameArray::~BaseKeyFrameArray(this);
  return this;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::ColourValue>::~KeyFrameArray()
// address: 0x0013FC30   size: 0x12 (18 bytes)
//======================================================================
Ogre::BaseKeyFrameArray *__fastcall Ogre::KeyFrameArray<Ogre::ColourValue>::~KeyFrameArray(Ogre::BaseKeyFrameArray *a1)
{
  Ogre::KeyFrameArray<Ogre::ColourValue>::~KeyFrameArray(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// Ogre::KeyFrameArray<float>::KeyFrameArray(void)
// address: 0x0013FD9C   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13KeyFrameArrayIfEC1Ev'
_DWORD *__fastcall Ogre::KeyFrameArray<float>::KeyFrameArray(_DWORD *result)
{
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  *result = &off_455A48;
  result[5] = 1;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  return result;
}


//======================================================================
// Ogre::KeyFrameArray<float>::getValue(int,unsigned int,float &,bool)
// address: 0x0013FEF4   size: 0x27A (634 bytes)
//======================================================================
unsigned int __fastcall Ogre::KeyFrameArray<float>::getValue(int a1, int a2, unsigned int a3, int *a4, char a5)
{
  unsigned __int8 *v5; // r6
  unsigned int result; // r0
  int v8; // r3
  int v9; // r7
  int v10; // r5
  int v11; // r7
  int *v12; // r1
  int v13; // r0
  int v14; // r1
  unsigned __int8 *v15; // r5
  int v16; // r3
  int v17; // r2
  unsigned __int8 *v18; // r3
  unsigned int v19; // r1
  int v20; // r3
  int v21; // r5
  unsigned __int8 *v22; // r1
  float *v23; // r7
  unsigned int v24; // r5
  unsigned int v25; // r6
  float v26; // r0
  unsigned int v27; // [sp+0h] [bp-24h]
  int v28; // [sp+8h] [bp-1Ch]
  unsigned __int8 *v29; // [sp+8h] [bp-1Ch]
  int v31; // [sp+10h] [bp-14h]
  int v32; // [sp+14h] [bp-10h]
  int v33; // [sp+18h] [bp-Ch]

  v5 = *(unsigned __int8 **)(a1 + 24);
  result = *(unsigned int *)(a1 + 28);
  v8 = (int)(result - (_DWORD)v5) >> 3;
  if ( v8 == 1 )
  {
    *a4 = (v5[5] << 8) | v5[4] | (v5[6] << 16) | (v5[7] << 24);
    return result;
  }
  v9 = *(_DWORD *)(a1 + 8);
  result = *(unsigned int *)(a1 + 12);
  v10 = (int)(result - v9) >> 3;
  if ( v10 != 0 )
  {
    v12 = (int *)(v9 + 8 * a2);
    v10 = *v12;
    v11 = v12[1];
  }
  else
  {
    v11 = v8 - 1;
  }
  v31 = *(_DWORD *)(a1 + 20);
  if ( v31 == 3 )
  {
    if ( v11 > v10 )
    {
      v13 = j_lrand48();
      v14 = v13 % (v11 - v10);
      result = v13 / (v11 - v10);
      v10 += v14;
    }
    v15 = (unsigned __int8 *)(*(_DWORD *)(a1 + 24) + 8 * v10);
    v16 = (v15[5] << 8) | v15[4] | (v15[6] << 16);
    v17 = v15[7];
    goto LABEL_25;
  }
  if ( v10 >= v8 )
    v10 = v8 - 1;
  if ( v11 >= v8 )
    v11 = v8 - 1;
  v27 = (v5[8 * v10 + 3] << 24) | v5[8 * v10] | (v5[8 * v10 + 1] << 8) | (v5[8 * v10 + 2] << 16);
  v18 = &v5[8 * v11];
  result = v18[2] << 16;
  v28 = (v18[3] << 24) | (v18[1] << 8) | *v18 | result;
  v19 = v28 + 1 - v27;
  if ( v28 + 1 != v27 )
  {
    result = a3 - v27;
    if ( a5 != 0 )
    {
      result = v27 + result % v19;
      v27 = result;
    }
    else
    {
      v27 = a3;
      if ( v19 < result )
        v27 = v28;
    }
  }
  while ( v10 < v11 - 1 )
  {
    v20 = (v10 + v11) / 2;
    result = v27;
    if ( v27 < ((v5[8 * v20 + 3] << 24) | (v5[8 * v20 + 1] << 8) | v5[8 * v20] | (v5[8 * v20 + 2] << 16)) )
      v11 = (v10 + v11) / 2;
    else
      v10 = (v10 + v11) / 2;
  }
  v21 = 8 * v10;
  v22 = &v5[v21];
  v32 = v21;
  v33 = 8 * v11;
  v23 = (float *)&v5[8 * v11];
  v29 = &v5[v21];
  v24 = (v5[v21 + 1] << 8) | v5[v21] | (v5[v21 + 2] << 16) | (v5[v21 + 3] << 24);
  v25 = (*((unsigned __int8 *)v23 + 1) << 8)
      | *(unsigned __int8 *)v23
      | (*((unsigned __int8 *)v23 + 2) << 16)
      | (*((unsigned __int8 *)v23 + 3) << 24);
  if ( v24 >= v25 )
  {
    v16 = (v22[5] << 8) | v22[4] | (v22[6] << 16);
    v17 = v22[7];
LABEL_25:
    *a4 = v16 | (v17 << 24);
    return result;
  }
  v26 = (double)(int)(v27 - v24) / (double)(v25 - v24);
  if ( v31 == 1 )
    *(float *)&result = *((float *)v29 + 1) + (float)((float)(v23[1] - *((float *)v29 + 1)) * v26);
  else
    *(float *)&result = (float)((float)((float)((float)((float)((float)((float)((float)(v26 + v26) * v26) * v26)
                                                              - (float)((float)(v26 * 3.0) * v26))
                                                      + 1.0)
                                              * *((float *)v29 + 1))
                                      + (float)((float)((float)((float)((float)(v26 * -2.0) * v26) * v26)
                                                      + (float)((float)(v26 * 3.0) * v26))
                                              * v23[1]))
                              + (float)((float)((float)((float)((float)(v26 * v26) * v26)
                                                      - (float)((float)(v26 + v26) * v26))
                                              + v26)
                                      * *(float *)(*(_DWORD *)(a1 + 36) + v32 + 4)))
                      + (float)((float)((float)((float)(v26 * v26) * v26) - (float)(v26 * v26))
                              * *(float *)(*(_DWORD *)(a1 + 36) + v33));
  *a4 = result;
  return result;
}


//======================================================================
// Ogre::KeyFrameArray<float>::getValue(int,unsigned int,void *)
// address: 0x00140174   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<float>::getValue(int a1, int a2, unsigned int a3, int *a4)
{
  int v5; // [sp+0h] [bp-8h]

  Ogre::KeyFrameArray<float>::getValue(a1, a2, a3, a4, 1);
  return v5;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::ColourValue>::getValue(int,unsigned int,Ogre::ColourValue&,bool)
// address: 0x0014033C   size: 0x23E (574 bytes)
//======================================================================
float __fastcall Ogre::KeyFrameArray<Ogre::ColourValue>::getValue(
        _DWORD *a1,
        int a2,
        unsigned int a3,
        float *a4,
        char a5)
{
  int v5; // r6
  int v7; // r3
  const void *v8; // r1
  int v9; // r7
  int *v10; // r1
  int v11; // r1
  unsigned int v12; // r7
  int v13; // r3
  unsigned int v14; // r1
  unsigned int v15; // r0
  int v16; // r3
  unsigned int v17; // r4
  float result; // r0
  float v19; // r0
  float v20; // r7
  float v21; // r6
  int v22; // [sp+Ch] [bp-20h]
  float v23; // [sp+Ch] [bp-20h]
  int v24; // [sp+10h] [bp-1Ch]
  float *v25; // [sp+14h] [bp-18h]
  float *v26; // [sp+18h] [bp-14h]
  unsigned int v28; // [sp+20h] [bp-Ch]
  int v29; // [sp+24h] [bp-8h]

  v5 = a1[6];
  v7 = -858993459 * ((a1[7] - v5) >> 2);
  if ( v7 == 1 )
  {
    v8 = (const void *)(v5 + 4);
    return COERCE_FLOAT(j_memcpy(a4, v8, 0x10u));
  }
  v9 = a1[2];
  if ( (a1[3] - v9) >> 3 != 0 )
  {
    v10 = (int *)(v9 + 8 * a2);
    v22 = *v10;
    v24 = v10[1];
  }
  else
  {
    v24 = v7 - 1;
    v22 = 0;
  }
  v29 = a1[5];
  if ( v29 == 3 )
  {
    if ( v24 > v22 )
      v22 += j_lrand48() % (v24 - v22);
    v11 = a1[6] + 20 * v22;
    goto LABEL_25;
  }
  if ( v22 >= v7 )
    v22 = v7 - 1;
  if ( v24 >= v7 )
    v24 = v7 - 1;
  v12 = (*(unsigned __int8 *)(v5 + 20 * v22 + 1) << 8)
      | *(unsigned __int8 *)(20 * v22 + v5)
      | (*(unsigned __int8 *)(v5 + 20 * v22 + 2) << 16)
      | (*(unsigned __int8 *)(v5 + 20 * v22 + 3) << 24);
  v13 = (*(unsigned __int8 *)(v5 + 20 * v24 + 1) << 8)
      | *(unsigned __int8 *)(20 * v24 + v5)
      | (*(unsigned __int8 *)(v5 + 20 * v24 + 2) << 16)
      | (*(unsigned __int8 *)(v5 + 20 * v24 + 3) << 24);
  v14 = v13 + 1 - v12;
  if ( v13 + 1 != v12 )
  {
    v15 = a3 - v12;
    if ( a5 != 0 )
    {
      v12 += v15 % v14;
    }
    else
    {
      v12 = a3;
      if ( v14 < v15 )
        v12 = (*(unsigned __int8 *)(v5 + 20 * v24 + 1) << 8)
            | *(unsigned __int8 *)(20 * v24 + v5)
            | (*(unsigned __int8 *)(v5 + 20 * v24 + 2) << 16)
            | (*(unsigned __int8 *)(v5 + 20 * v24 + 3) << 24);
    }
  }
  while ( v22 < v24 - 1 )
  {
    v16 = (v22 + v24) / 2;
    if ( v12 < ((*(unsigned __int8 *)(v5 + 20 * v16 + 3) << 24)
              | (*(unsigned __int8 *)(v5 + 20 * v16 + 1) << 8)
              | *(unsigned __int8 *)(20 * v16 + v5)
              | (*(unsigned __int8 *)(v5 + 20 * v16 + 2) << 16)) )
      v24 = (v22 + v24) / 2;
    else
      v22 = (v22 + v24) / 2;
  }
  v25 = (float *)(v5 + 20 * v22);
  v28 = (*((unsigned __int8 *)v25 + 3) << 24)
      | (*((unsigned __int8 *)v25 + 1) << 8)
      | *(unsigned __int8 *)v25
      | (*((unsigned __int8 *)v25 + 2) << 16);
  v26 = (float *)(v5 + 20 * v24);
  v17 = (*((unsigned __int8 *)v26 + 1) << 8)
      | *(unsigned __int8 *)v26
      | (*((unsigned __int8 *)v26 + 2) << 16)
      | (*((unsigned __int8 *)v26 + 3) << 24);
  if ( v28 >= v17 )
  {
    v11 = v5 + 20 * v22;
LABEL_25:
    v8 = (const void *)(v11 + 4);
    return COERCE_FLOAT(j_memcpy(a4, v8, 0x10u));
  }
  v19 = (double)(int)(v12 - v28) / (double)(v17 - v28);
  if ( v29 != 1 )
    return Ogre::KEYFRAME_HERMITE<Ogre::ColourValue>(
             a4,
             v19,
             v25 + 1,
             v26 + 1,
             (float *)(a1[9] + 32 * v22 + 16),
             (float *)(a1[9] + 32 * v24));
  v20 = v25[2] + (float)((float)(v26[2] - v25[2]) * v19);
  v23 = v25[3] + (float)((float)(v26[3] - v25[3]) * v19);
  v21 = v25[4] + (float)((float)(v26[4] - v25[4]) * v19);
  result = v25[1] + (float)((float)(v26[1] - v25[1]) * v19);
  *a4 = result;
  a4[1] = v20;
  a4[2] = v23;
  a4[3] = v21;
  return result;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::ColourValue>::getValue(int,unsigned int,void *)
// address: 0x00140580   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::ColourValue>::getValue(_DWORD *a1, int a2, unsigned int a3, float *a4)
{
  int v5; // [sp+0h] [bp-8h]

  Ogre::KeyFrameArray<Ogre::ColourValue>::getValue(a1, a2, a3, a4, 1);
  return v5;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::ColourValue>::_serialize(Ogre::Archive &,int)
// address: 0x001413FC   size: 0x4C (76 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::ColourValue>::_serialize(_DWORD *a1, Ogre::Archive *this)
{
  _BYTE *v4; // r3
  int v5; // r2

  Ogre::Archive::serialize(this, a1 + 5, 4u);
  Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>((int)this, (int)(a1 + 6));
  Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>((int)this, (int)(a1 + 9));
  v4 = (_BYTE *)a1[6];
  v5 = a1[7];
  if ( v4 != (_BYTE *)v5 )
  {
    v5 = (unsigned __int8)v4[3] << 24;
    if ( (v4[3] & 0x80) != 0 )
    {
      v5 = 0;
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
    }
  }
  return Ogre::Archive::serializeRawArray<Ogre::BaseKeyFrameArray::AnimRange>(
           (int)this,
           (unsigned int)(a1 + 2),
           v5,
           (int)v4);
}


//======================================================================
// Ogre::KeyFrameArray<float>::KEYFRAME_T * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::KEYFRAME_T>(Ogre::KeyFrameArray<float>::KEYFRAME_T const*,Ogre::KeyFrameArray<float>::KEYFRAME_T const*,Ogre::KeyFrameArray<float>::KEYFRAME_T *)
// address: 0x00141448   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::KEYFRAME_T>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 3;
  v5 = 8 * v3;
  if ( v3 != 0 )
    j_memmove(a3, a1, v5);
  return (int)a3 + v5;
}


//======================================================================
// Ogre::KeyFrameArray<float>::CONTROL_POINT_T * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>(Ogre::KeyFrameArray<float>::CONTROL_POINT_T const*,Ogre::KeyFrameArray<float>::CONTROL_POINT_T const*,Ogre::KeyFrameArray<float>::CONTROL_POINT_T *)
// address: 0x001416C2   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 3;
  v5 = 8 * v3;
  if ( v3 != 0 )
    j_memmove(a3, a1, v5);
  return (int)a3 + v5;
}


//======================================================================
// Ogre::KeyFrameArray<float>::_serialize(Ogre::Archive &,int)
// address: 0x00141914   size: 0x4C (76 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<float>::_serialize(_DWORD *a1, Ogre::Archive *this)
{
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r3
  _BYTE *v8; // r3
  int v9; // r2

  Ogre::Archive::serialize(this, a1 + 5, 4u);
  Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<float>::KEYFRAME_T>((int)this, (unsigned int)(a1 + 6), v4, v5);
  Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>(
    (int)this,
    (unsigned int)(a1 + 9),
    v6,
    v7);
  v8 = (_BYTE *)a1[6];
  v9 = a1[7];
  if ( v8 != (_BYTE *)v9 )
  {
    v9 = (unsigned __int8)v8[3] << 24;
    if ( (v8[3] & 0x80) != 0 )
    {
      v9 = 0;
      *v8 = 0;
      v8[1] = 0;
      v8[2] = 0;
      v8[3] = 0;
    }
  }
  return Ogre::Archive::serializeRawArray<Ogre::BaseKeyFrameArray::AnimRange>(
           (int)this,
           (unsigned int)(a1 + 2),
           v9,
           (int)v8);
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector3>::getNumKey(void)
// address: 0x00146978   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::Vector3>::getNumKey(int a1)
{
  return (*(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24)) >> 4;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray()
// address: 0x00146998   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13KeyFrameArrayINS_7Vector3EED1Ev'
Ogre::BaseKeyFrameArray *__fastcall Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray(Ogre::BaseKeyFrameArray *this)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_455C50;
  v2 = *((void **)this + 9);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 6);
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::BaseKeyFrameArray::~BaseKeyFrameArray(this);
  return this;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray()
// address: 0x001469C8   size: 0x12 (18 bytes)
//======================================================================
Ogre::BaseKeyFrameArray *__fastcall Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray(Ogre::BaseKeyFrameArray *a1)
{
  Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector3>::getValue(int,unsigned int,Ogre::Vector3&,bool)
// address: 0x001484EC   size: 0x380 (896 bytes)
//======================================================================
float __fastcall Ogre::KeyFrameArray<Ogre::Vector3>::getValue(_DWORD *a1, int a2, unsigned int a3, float a4, char a5)
{
  int v5; // r4
  int v7; // r3
  float result; // r0
  int v9; // r5
  int *v10; // r1
  int v11; // r3
  unsigned int v12; // r5
  int v13; // r3
  unsigned int v14; // r1
  unsigned int v15; // r0
  int v16; // r3
  unsigned int v17; // r7
  float v18; // r0
  float v19; // r4
  float v20; // r6
  float v21; // r7
  int v22; // r3
  float v23; // r0
  float v24; // r7
  float v25; // r5
  float v26; // r0
  float v27; // r4
  float v28; // r5
  float v29; // r6
  int v30; // [sp+14h] [bp-20h]
  float *v31; // [sp+14h] [bp-20h]
  int v33; // [sp+1Ch] [bp-18h]
  float *v34; // [sp+1Ch] [bp-18h]
  float *v35; // [sp+20h] [bp-14h]
  float *v36; // [sp+24h] [bp-10h]
  unsigned int v37; // [sp+28h] [bp-Ch]
  float v38; // [sp+28h] [bp-Ch]
  int v39; // [sp+2Ch] [bp-8h]
  float v40; // [sp+2Ch] [bp-8h]
  float v41; // [sp+2Ch] [bp-8h]

  v5 = a1[6];
  v7 = (a1[7] - v5) >> 4;
  if ( v7 == 1 )
  {
    result = *(float *)(v5 + 4);
    *(float *)LODWORD(a4) = result;
    *(_DWORD *)(LODWORD(a4) + 4) = *(_DWORD *)(v5 + 8);
    *(_DWORD *)(LODWORD(a4) + 8) = *(_DWORD *)(v5 + 12);
  }
  else
  {
    v9 = a1[2];
    if ( (a1[3] - v9) >> 3 != 0 )
    {
      v10 = (int *)(v9 + 8 * a2);
      v30 = *v10;
      v33 = v10[1];
    }
    else
    {
      v33 = v7 - 1;
      v30 = 0;
    }
    v39 = a1[5];
    if ( v39 == 3 )
    {
      if ( v33 > v30 )
        v30 += j_lrand48() % (v33 - v30);
      v11 = a1[6] + 16 * v30;
      result = *(float *)(v11 + 4);
      *(float *)LODWORD(a4) = result;
      *(_DWORD *)(LODWORD(a4) + 4) = *(_DWORD *)(v11 + 8);
      *(_DWORD *)(LODWORD(a4) + 8) = *(_DWORD *)(v11 + 12);
    }
    else
    {
      if ( v30 >= v7 )
        v30 = v7 - 1;
      if ( v33 >= v7 )
        v33 = v7 - 1;
      v12 = (*(unsigned __int8 *)(v5 + 16 * v30 + 1) << 8)
          | *(unsigned __int8 *)(16 * v30 + v5)
          | (*(unsigned __int8 *)(v5 + 16 * v30 + 2) << 16)
          | (*(unsigned __int8 *)(v5 + 16 * v30 + 3) << 24);
      v13 = (*(unsigned __int8 *)(v5 + 16 * v33 + 3) << 24)
          | (*(unsigned __int8 *)(v5 + 16 * v33 + 1) << 8)
          | *(unsigned __int8 *)(v5 + 16 * v33)
          | (*(unsigned __int8 *)(v5 + 16 * v33 + 2) << 16);
      v14 = v13 + 1 - v12;
      if ( v13 + 1 != v12 )
      {
        v15 = a3 - v12;
        if ( a5 != 0 )
        {
          v12 += v15 % v14;
        }
        else
        {
          v12 = a3;
          if ( v14 < v15 )
            v12 = (*(unsigned __int8 *)(v5 + 16 * v33 + 3) << 24)
                | (*(unsigned __int8 *)(v5 + 16 * v33 + 1) << 8)
                | *(unsigned __int8 *)(v5 + 16 * v33)
                | (*(unsigned __int8 *)(v5 + 16 * v33 + 2) << 16);
        }
      }
      while ( v30 < v33 - 1 )
      {
        v16 = (v30 + v33) / 2;
        if ( v12 < ((*(unsigned __int8 *)(v5 + 16 * v16 + 3) << 24)
                  | (*(unsigned __int8 *)(v5 + 16 * v16 + 1) << 8)
                  | *(unsigned __int8 *)(16 * v16 + v5)
                  | (*(unsigned __int8 *)(v5 + 16 * v16 + 2) << 16)) )
          v33 = (v30 + v33) / 2;
        else
          v30 = (v30 + v33) / 2;
      }
      v35 = (float *)(v5 + 16 * v30);
      v37 = (*((unsigned __int8 *)v35 + 3) << 24)
          | (*((unsigned __int8 *)v35 + 1) << 8)
          | *(unsigned __int8 *)v35
          | (*((unsigned __int8 *)v35 + 2) << 16);
      v36 = (float *)(v5 + 16 * v33);
      v17 = (*((unsigned __int8 *)v36 + 1) << 8)
          | *(unsigned __int8 *)v36
          | (*((unsigned __int8 *)v36 + 2) << 16)
          | (*((unsigned __int8 *)v36 + 3) << 24);
      if ( v37 < v17 )
      {
        v18 = (double)(int)(v12 - v37) / (double)(v17 - v37);
        v19 = v18;
        if ( v39 == 1 )
        {
          v20 = v35[2] + (float)((float)(v36[2] - v35[2]) * v18);
          v21 = v35[3] + (float)((float)(v36[3] - v35[3]) * v18);
          result = v35[1] + (float)((float)(v36[1] - v35[1]) * v18);
          *(float *)LODWORD(a4) = result;
          *(float *)(LODWORD(a4) + 4) = v20;
          *(float *)(LODWORD(a4) + 8) = v21;
        }
        else
        {
          v22 = a1[9];
          v31 = (float *)(v22 + 24 * v30);
          v34 = (float *)(v22 + 24 * v33);
          v40 = (float)(v18 + v18) * v18;
          v23 = (float)(v18 * 3.0) * v18;
          v24 = (float)((float)(v40 * v19) - v23) + 1.0;
          v38 = (float)((float)((float)(v19 * -2.0) * v19) * v19) + v23;
          v25 = v19 * v19;
          v26 = (float)(v19 * v19) * v19;
          v27 = (float)(v26 - v40) + v19;
          v28 = v26 - v25;
          v41 = (float)((float)((float)(v24 * v35[2]) + (float)(v38 * v36[2])) + (float)(v27 * v31[4]))
              + (float)(v28 * v34[1]);
          v29 = (float)((float)((float)(v24 * v35[3]) + (float)(v38 * v36[3])) + (float)(v27 * v31[5]))
              + (float)(v28 * v34[2]);
          *(float *)LODWORD(a4) = (float)((float)((float)(v24 * v35[1]) + (float)(v38 * v36[1])) + (float)(v27 * v31[3]))
                                + (float)(v28 * *v34);
          *(float *)(LODWORD(a4) + 8) = v29;
          *(float *)(LODWORD(a4) + 4) = v41;
          return v41;
        }
      }
      else
      {
        *(_DWORD *)LODWORD(a4) = *((_DWORD *)v35 + 1);
        *(float *)(LODWORD(a4) + 4) = v35[2];
        *(float *)(LODWORD(a4) + 8) = v35[3];
        return a4;
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector3>::getValue(int,unsigned int,void *)
// address: 0x00148A0C   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::Vector3>::getValue(_DWORD *a1, int a2, unsigned int a3, float a4)
{
  int v5; // [sp+0h] [bp-8h]

  Ogre::KeyFrameArray<Ogre::Vector3>::getValue(a1, a2, a3, a4, 1);
  return v5;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector3>::_serialize(Ogre::Archive &,int)
// address: 0x00149568   size: 0x4C (76 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::Vector3>::_serialize(_DWORD *a1, Ogre::Archive *this)
{
  _BYTE *v4; // r3
  int v5; // r2

  Ogre::Archive::serialize(this, a1 + 5, 4u);
  Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>((int)this, a1 + 6);
  Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>((int)this, a1 + 9);
  v4 = (_BYTE *)a1[6];
  v5 = a1[7];
  if ( v4 != (_BYTE *)v5 )
  {
    v5 = (unsigned __int8)v4[3] << 24;
    if ( (v4[3] & 0x80) != 0 )
    {
      v5 = 0;
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
    }
  }
  return Ogre::Archive::serializeRawArray<Ogre::BaseKeyFrameArray::AnimRange>(
           (int)this,
           (unsigned int)(a1 + 2),
           v5,
           (int)v4);
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Quaternion>::getNumKey(void)
// address: 0x0015339C   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::Quaternion>::getNumKey(int a1)
{
  return -858993459 * ((*(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24)) >> 2);
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Quaternion>::~KeyFrameArray()
// address: 0x00153460   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13KeyFrameArrayINS_10QuaternionEED1Ev'
Ogre::BaseKeyFrameArray *__fastcall Ogre::KeyFrameArray<Ogre::Quaternion>::~KeyFrameArray(
        Ogre::BaseKeyFrameArray *this)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_456368;
  v2 = *((void **)this + 9);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 6);
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::BaseKeyFrameArray::~BaseKeyFrameArray(this);
  return this;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Quaternion>::~KeyFrameArray()
// address: 0x001534DA   size: 0x12 (18 bytes)
//======================================================================
Ogre::BaseKeyFrameArray *__fastcall Ogre::KeyFrameArray<Ogre::Quaternion>::~KeyFrameArray(Ogre::BaseKeyFrameArray *a1)
{
  Ogre::KeyFrameArray<Ogre::Quaternion>::~KeyFrameArray(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Quaternion>::getValue(int,unsigned int,Ogre::Quaternion&,bool)
// address: 0x001536A8   size: 0x1EE (494 bytes)
//======================================================================
float __fastcall Ogre::KeyFrameArray<Ogre::Quaternion>::getValue(_DWORD *a1, int a2, unsigned int a3, int a4, char a5)
{
  int v5; // r6
  int v7; // r3
  float result; // r0
  int v9; // r4
  int *v10; // r1
  int v11; // r3
  int v12; // r3
  unsigned int v13; // r1
  unsigned int v14; // r0
  int v15; // r3
  float *v16; // r4
  unsigned __int8 *v17; // r6
  unsigned int v18; // r7
  const Ogre::Quaternion *v19; // r6
  float v20; // r0
  const Ogre::Quaternion *v21; // r2
  int v22; // [sp+14h] [bp-20h]
  int v24; // [sp+1Ch] [bp-18h]
  unsigned int v25; // [sp+20h] [bp-14h]
  unsigned int v26; // [sp+28h] [bp-Ch]
  int v27; // [sp+2Ch] [bp-8h]

  v5 = a1[6];
  v7 = -858993459 * ((a1[7] - v5) >> 2);
  if ( v7 == 1 )
  {
    *(_DWORD *)a4 = *(_DWORD *)(v5 + 4);
    result = *(float *)(v5 + 8);
    *(float *)(a4 + 4) = result;
    *(_DWORD *)(a4 + 8) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(a4 + 12) = *(_DWORD *)(v5 + 16);
  }
  else
  {
    v9 = a1[2];
    if ( (a1[3] - v9) >> 3 != 0 )
    {
      v10 = (int *)(v9 + 8 * a2);
      v22 = *v10;
      v24 = v10[1];
    }
    else
    {
      v24 = v7 - 1;
      v22 = 0;
    }
    v27 = a1[5];
    if ( v27 == 3 )
    {
      if ( v24 > v22 )
        v22 += j_lrand48() % (v24 - v22);
      v11 = a1[6] + 20 * v22;
      *(_DWORD *)a4 = *(_DWORD *)(v11 + 4);
      result = *(float *)(v11 + 8);
      *(float *)(a4 + 4) = result;
      *(_DWORD *)(a4 + 8) = *(_DWORD *)(v11 + 12);
      *(_DWORD *)(a4 + 12) = *(_DWORD *)(v11 + 16);
    }
    else
    {
      if ( v22 >= v7 )
        v22 = v7 - 1;
      if ( v24 >= v7 )
        v24 = v7 - 1;
      v25 = (*(unsigned __int8 *)(v5 + 20 * v22 + 3) << 24)
          | (*(unsigned __int8 *)(v5 + 20 * v22 + 1) << 8)
          | *(unsigned __int8 *)(20 * v22 + v5)
          | (*(unsigned __int8 *)(v5 + 20 * v22 + 2) << 16);
      v12 = (*(unsigned __int8 *)(v5 + 20 * v24 + 1) << 8)
          | *(unsigned __int8 *)(20 * v24 + v5)
          | (*(unsigned __int8 *)(v5 + 20 * v24 + 2) << 16)
          | (*(unsigned __int8 *)(v5 + 20 * v24 + 3) << 24);
      v13 = v12 + 1 - v25;
      if ( v12 + 1 != v25 )
      {
        v14 = a3 - v25;
        if ( a5 != 0 )
        {
          v25 += v14 % v13;
        }
        else
        {
          v25 = a3;
          if ( v13 < v14 )
            v25 = (*(unsigned __int8 *)(v5 + 20 * v24 + 1) << 8)
                | *(unsigned __int8 *)(20 * v24 + v5)
                | (*(unsigned __int8 *)(v5 + 20 * v24 + 2) << 16)
                | (*(unsigned __int8 *)(v5 + 20 * v24 + 3) << 24);
        }
      }
      while ( v22 < v24 - 1 )
      {
        v15 = (v22 + v24) / 2;
        if ( v25 < ((*(unsigned __int8 *)(v5 + 20 * v15 + 3) << 24)
                  | (*(unsigned __int8 *)(v5 + 20 * v15 + 1) << 8)
                  | *(unsigned __int8 *)(20 * v15 + v5)
                  | (*(unsigned __int8 *)(v5 + 20 * v15 + 2) << 16)) )
          v24 = (v22 + v24) / 2;
        else
          v22 = (v22 + v24) / 2;
      }
      v16 = (float *)(v5 + 20 * v22);
      v26 = (*((unsigned __int8 *)v16 + 3) << 24)
          | (*((unsigned __int8 *)v16 + 1) << 8)
          | *(unsigned __int8 *)v16
          | (*((unsigned __int8 *)v16 + 2) << 16);
      v17 = (unsigned __int8 *)(v5 + 20 * v24);
      v18 = (v17[1] << 8) | *v17 | (v17[2] << 16) | (v17[3] << 24);
      if ( v26 < v18 )
      {
        v19 = (const Ogre::Quaternion *)(v17 + 4);
        v21 = (const Ogre::Quaternion *)(v16 + 1);
        v20 = (double)(int)(v25 - v26) / (double)(v18 - v26);
        if ( v27 == 1 )
          return Ogre::Quaternion::slerp((Ogre::Quaternion *)a4, v21, v19, v20);
        else
          return Ogre::KEYFRAME_HERMITE<Ogre::Quaternion>(
                   (float *)a4,
                   v20,
                   (float *)v21,
                   (float *)v19,
                   (float *)(a1[9] + 32 * v22 + 16),
                   (float *)(a1[9] + 32 * v24));
      }
      else
      {
        result = v16[1];
        *(float *)a4 = result;
        *(float *)(a4 + 4) = v16[2];
        *(float *)(a4 + 8) = v16[3];
        *(float *)(a4 + 12) = v16[4];
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Quaternion>::getValue(int,unsigned int,void *)
// address: 0x001538F2   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::Quaternion>::getValue(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  int v5; // [sp+0h] [bp-8h]

  Ogre::KeyFrameArray<Ogre::Quaternion>::getValue(a1, a2, a3, a4, 1);
  return v5;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T::operator=(Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T const&)
// address: 0x001538FE   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T::operator=(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  return result;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T * std::__uninitialized_copy<false>::__uninit_copy<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *>(Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *)
// address: 0x00153C80   size: 0x30 (48 bytes)
//======================================================================
char *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *>(
        char *a1,
        char *a2,
        char *a3)
{
  char *v5; // r5
  char *i; // r4

  v5 = a3;
  for ( i = a1; i != a2; i += 32 )
  {
    if ( v5 != nullptr )
      j_memcpy(v5, i, 0x20u);
    v5 += 32;
  }
  return &a3[32 * ((unsigned int)(i - a1) >> 5)];
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Quaternion>::_serialize(Ogre::Archive &,int)
// address: 0x00153E9E   size: 0x4C (76 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::Quaternion>::_serialize(_DWORD *a1, Ogre::Archive *this)
{
  _BYTE *v4; // r3
  int v5; // r2

  Ogre::Archive::serialize(this, a1 + 5, 4u);
  Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>((int)this, (int)(a1 + 6));
  Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>((int)this, a1 + 9);
  v4 = (_BYTE *)a1[6];
  v5 = a1[7];
  if ( v4 != (_BYTE *)v5 )
  {
    v5 = (unsigned __int8)v4[3] << 24;
    if ( (v4[3] & 0x80) != 0 )
    {
      v5 = 0;
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
    }
  }
  return Ogre::Archive::serializeRawArray<Ogre::BaseKeyFrameArray::AnimRange>(
           (int)this,
           (unsigned int)(a1 + 2),
           v5,
           (int)v4);
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector4>::getValue(int,unsigned int,Ogre::Vector4&,bool)
// address: 0x001608AC   size: 0x26A (618 bytes)
//======================================================================
float __fastcall Ogre::KeyFrameArray<Ogre::Vector4>::getValue(_DWORD *a1, int a2, unsigned int a3, int a4, char a5)
{
  int v5; // r6
  int v7; // r3
  int v8; // r4
  float result; // r0
  float v10; // r6
  int v11; // r7
  int *v12; // r1
  int v13; // r3
  int v14; // r3
  unsigned int v15; // r1
  unsigned int v16; // r0
  int v17; // r3
  unsigned __int8 *v18; // r7
  unsigned int v19; // r4
  float v20; // r0
  int v21; // [sp+18h] [bp-24h]
  float v22; // [sp+18h] [bp-24h]
  unsigned int v24; // [sp+20h] [bp-1Ch]
  int v25; // [sp+28h] [bp-14h]
  float v26; // [sp+28h] [bp-14h]
  float *v27; // [sp+2Ch] [bp-10h]
  unsigned int v28; // [sp+30h] [bp-Ch]
  int v29; // [sp+34h] [bp-8h]

  v5 = a1[6];
  v7 = -858993459 * ((a1[7] - v5) >> 2);
  if ( v7 == 1 )
  {
    v8 = a4;
    *(_DWORD *)a4 = *(_DWORD *)(v5 + 4);
    result = *(float *)(v5 + 8);
    *(float *)(a4 + 4) = result;
    *(_DWORD *)(a4 + 8) = *(_DWORD *)(v5 + 12);
    v10 = *(float *)(v5 + 16);
LABEL_27:
    *(float *)(v8 + 12) = v10;
    return result;
  }
  v11 = a1[2];
  if ( (a1[3] - v11) >> 3 != 0 )
  {
    v12 = (int *)(v11 + 8 * a2);
    v21 = *v12;
    v25 = v12[1];
  }
  else
  {
    v25 = v7 - 1;
    v21 = 0;
  }
  v29 = a1[5];
  if ( v29 == 3 )
  {
    if ( v25 > v21 )
      v21 += j_lrand48() % (v25 - v21);
    v13 = a1[6] + 20 * v21;
    result = *(float *)(v13 + 4);
    *(float *)a4 = result;
    *(_DWORD *)(a4 + 4) = *(_DWORD *)(v13 + 8);
    *(_DWORD *)(a4 + 8) = *(_DWORD *)(v13 + 12);
    *(_DWORD *)(a4 + 12) = *(_DWORD *)(v13 + 16);
  }
  else
  {
    if ( v21 >= v7 )
      v21 = v7 - 1;
    if ( v25 >= v7 )
      v25 = v7 - 1;
    v24 = (*(unsigned __int8 *)(v5 + 20 * v21 + 3) << 24)
        | (*(unsigned __int8 *)(v5 + 20 * v21 + 1) << 8)
        | *(unsigned __int8 *)(20 * v21 + v5)
        | (*(unsigned __int8 *)(v5 + 20 * v21 + 2) << 16);
    v14 = (*(unsigned __int8 *)(v5 + 20 * v25 + 1) << 8)
        | *(unsigned __int8 *)(20 * v25 + v5)
        | (*(unsigned __int8 *)(v5 + 20 * v25 + 2) << 16)
        | (*(unsigned __int8 *)(v5 + 20 * v25 + 3) << 24);
    v15 = v14 + 1 - v24;
    if ( v14 + 1 != v24 )
    {
      v16 = a3 - v24;
      if ( a5 != 0 )
      {
        v24 += v16 % v15;
      }
      else
      {
        v24 = a3;
        if ( v15 < v16 )
          v24 = (*(unsigned __int8 *)(v5 + 20 * v25 + 1) << 8)
              | *(unsigned __int8 *)(20 * v25 + v5)
              | (*(unsigned __int8 *)(v5 + 20 * v25 + 2) << 16)
              | (*(unsigned __int8 *)(v5 + 20 * v25 + 3) << 24);
      }
    }
    while ( v21 < v25 - 1 )
    {
      v17 = (v21 + v25) / 2;
      if ( v24 < ((*(unsigned __int8 *)(v5 + 20 * v17 + 3) << 24)
                | (*(unsigned __int8 *)(v5 + 20 * v17 + 1) << 8)
                | *(unsigned __int8 *)(20 * v17 + v5)
                | (*(unsigned __int8 *)(v5 + 20 * v17 + 2) << 16)) )
        v25 = (v21 + v25) / 2;
      else
        v21 = (v21 + v25) / 2;
    }
    v18 = (unsigned __int8 *)(v5 + 20 * v21);
    v28 = (v18[3] << 24) | (v18[1] << 8) | *v18 | (v18[2] << 16);
    v27 = (float *)(v5 + 20 * v25);
    v19 = (*((unsigned __int8 *)v27 + 1) << 8)
        | *(unsigned __int8 *)v27
        | (*((unsigned __int8 *)v27 + 2) << 16)
        | (*((unsigned __int8 *)v27 + 3) << 24);
    if ( v28 >= v19 )
    {
      *(_DWORD *)a4 = *((_DWORD *)v18 + 1);
      result = *((float *)v18 + 2);
      *(float *)(a4 + 4) = result;
      *(_DWORD *)(a4 + 8) = *((_DWORD *)v18 + 3);
      *(_DWORD *)(a4 + 12) = *((_DWORD *)v18 + 4);
      return result;
    }
    v20 = (double)(int)(v24 - v28) / (double)(v19 - v28);
    if ( v29 == 1 )
    {
      v22 = *((float *)v18 + 2) + (float)((float)(v27[2] - *((float *)v18 + 2)) * v20);
      v26 = *((float *)v18 + 3) + (float)((float)(v27[3] - *((float *)v18 + 3)) * v20);
      v10 = *((float *)v18 + 4) + (float)((float)(v27[4] - *((float *)v18 + 4)) * v20);
      result = *((float *)v18 + 1) + (float)((float)(v27[1] - *((float *)v18 + 1)) * v20);
      v8 = a4;
      *(float *)a4 = result;
      *(float *)(a4 + 4) = v22;
      *(float *)(a4 + 8) = v26;
      goto LABEL_27;
    }
    return Ogre::KEYFRAME_HERMITE<Ogre::Vector4>(
             (float *)a4,
             v20,
             (float *)v18 + 1,
             v27 + 1,
             (float *)(a1[9] + 32 * v21 + 16),
             (float *)(a1[9] + 32 * v25));
  }
  return result;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector3>::KeyFrameArray(void)
// address: 0x0016A590   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13KeyFrameArrayINS_7Vector3EEC1Ev'
_DWORD *__fastcall Ogre::KeyFrameArray<Ogre::Vector3>::KeyFrameArray(_DWORD *result)
{
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  *result = &off_455C50;
  result[5] = 1;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  return result;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector4>::getNumKey(void)
// address: 0x001868C8   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::Vector4>::getNumKey(int a1)
{
  return -858993459 * ((*(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24)) >> 2);
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector4>::~KeyFrameArray()
// address: 0x001868F0   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13KeyFrameArrayINS_7Vector4EED1Ev'
Ogre::BaseKeyFrameArray *__fastcall Ogre::KeyFrameArray<Ogre::Vector4>::~KeyFrameArray(Ogre::BaseKeyFrameArray *this)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_457E08;
  v2 = *((void **)this + 9);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 6);
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::BaseKeyFrameArray::~BaseKeyFrameArray(this);
  return this;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector4>::~KeyFrameArray()
// address: 0x00186920   size: 0x12 (18 bytes)
//======================================================================
Ogre::BaseKeyFrameArray *__fastcall Ogre::KeyFrameArray<Ogre::Vector4>::~KeyFrameArray(Ogre::BaseKeyFrameArray *a1)
{
  Ogre::KeyFrameArray<Ogre::Vector4>::~KeyFrameArray(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T::operator=(Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T const&)
// address: 0x00186ED4   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T::operator=(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  return result;
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T * std::__uninitialized_copy<false>::__uninit_copy<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *>(Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *)
// address: 0x00187420   size: 0x30 (48 bytes)
//======================================================================
char *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *>(
        char *a1,
        char *a2,
        char *a3)
{
  char *v5; // r5
  char *i; // r4

  v5 = a3;
  for ( i = a1; i != a2; i += 32 )
  {
    if ( v5 != nullptr )
      j_memcpy(v5, i, 0x20u);
    v5 += 32;
  }
  return &a3[32 * ((unsigned int)(i - a1) >> 5)];
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector4>::_serialize(Ogre::Archive &,int)
// address: 0x00187800   size: 0x4C (76 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::Vector4>::_serialize(_DWORD *a1, Ogre::Archive *this)
{
  _BYTE *v4; // r3
  int v5; // r2

  Ogre::Archive::serialize(this, a1 + 5, 4u);
  Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>((int)this, (int)(a1 + 6));
  Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>((int)this, a1 + 9);
  v4 = (_BYTE *)a1[6];
  v5 = a1[7];
  if ( v4 != (_BYTE *)v5 )
  {
    v5 = (unsigned __int8)v4[3] << 24;
    if ( (v4[3] & 0x80) != 0 )
    {
      v5 = 0;
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
    }
  }
  return Ogre::Archive::serializeRawArray<Ogre::BaseKeyFrameArray::AnimRange>(
           (int)this,
           (unsigned int)(a1 + 2),
           v5,
           (int)v4);
}


//======================================================================
// Ogre::KeyFrameArray<Ogre::Vector4>::getValue(int,unsigned int,void *)
// address: 0x00187B40   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::KeyFrameArray<Ogre::Vector4>::getValue(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  int v5; // [sp+0h] [bp-8h]

  Ogre::KeyFrameArray<Ogre::Vector4>::getValue(a1, a2, a3, a4, 1);
  return v5;
}

