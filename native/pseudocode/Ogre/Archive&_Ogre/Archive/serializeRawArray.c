// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Archive&_Ogre::Archive::serializeRawArray

//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::Vector2>(std::vector<Ogre::Vector2,std::allocator<Ogre::Vector2>> &)
// address: 0x0014081C   size: 0x78 (120 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::Vector2>(int a1, unsigned int a2, int a3, int a4)
{
  int v5; // r2
  int v7; // r0
  char *v8; // r1
  int v9; // r0
  unsigned int v10; // r2
  int v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h] BYREF
  int v15; // [sp+Ch] [bp-4h]

  v14 = a3;
  v15 = a4;
  v5 = *(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    sub_13FB24(v7);
    v8 = *(char **)(a2 + 4);
    v9 = *(_DWORD *)a2;
    v14 = 0;
    v15 = 0;
    v10 = (int)&v8[-v9] >> 3;
    if ( a2 <= v10 )
    {
      if ( a2 < v10 )
        *(_DWORD *)(a2 + 4) = v9 + 8 * a2;
    }
    else
    {
      std::vector<Ogre::Vector2>::_M_fill_insert(a2, v8, a2 - v10, &v14);
    }
    if ( a2 != 0 )
      sub_13FB24(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v13 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 3;
    sub_13FB2E(v7);
    if ( v13 != 0 )
      sub_13FB2E(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(std::vector<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>> &)
// address: 0x00140F30   size: 0xAA (170 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(int a1, int a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  unsigned int v7; // r2
  unsigned int v9; // [sp+Ch] [bp-30h]
  int v10; // [sp+Ch] [bp-30h]
  _DWORD v11[5]; // [sp+10h] [bp-2Ch] BYREF
  _DWORD v12[6]; // [sp+24h] [bp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_13FB24(v5);
    j_memset(v11, 0, sizeof(v11));
    v11[1] = 1065353216;
    v11[2] = 1065353216;
    v11[3] = 1065353216;
    v11[4] = 1065353216;
    v12[0] = v11[0];
    v12[1] = 1065353216;
    v12[2] = 1065353216;
    v12[3] = 1065353216;
    v12[4] = 1065353216;
    v6 = *(char **)(a2 + 4);
    v7 = -858993459 * ((int)&v6[-*(_DWORD *)a2] >> 2);
    if ( v9 <= v7 )
    {
      if ( v9 < v7 )
        *(_DWORD *)(a2 + 4) = *(_DWORD *)a2 + 20 * v9;
    }
    else
    {
      std::vector<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>>::_M_fill_insert(
        (void **)a2,
        v6,
        v9 - v7,
        v12);
    }
    if ( v9 != 0 )
      sub_13FB24(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v10 = -858993459 * ((*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2);
    sub_13FB2E(v5);
    if ( v10 != 0 )
      sub_13FB2E(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(std::vector<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>> &)
// address: 0x00141188   size: 0x88 (136 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(
        int a1,
        int a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  _BYTE *v7; // r0
  unsigned int v8; // r3
  unsigned int v10; // [sp+4h] [bp-24h]
  int v11; // [sp+4h] [bp-24h]
  _DWORD v12[8]; // [sp+8h] [bp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_13FB24(v5);
    v6 = *(char **)(a2 + 4);
    v7 = *(_BYTE **)a2;
    v12[0] = 1065353216;
    v12[1] = 1065353216;
    v12[2] = 1065353216;
    v12[3] = 1065353216;
    v12[4] = 1065353216;
    v12[5] = 1065353216;
    v12[6] = 1065353216;
    v12[7] = 1065353216;
    v8 = (v6 - v7) >> 5;
    if ( v10 <= v8 )
    {
      if ( v10 < v8 )
        *(_DWORD *)(a2 + 4) = &v7[32 * v10];
    }
    else
    {
      std::vector<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>>::_M_fill_insert(
        (void **)a2,
        v6,
        v10 - v8,
        v12);
    }
    if ( v10 != 0 )
      sub_13FB24(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v11 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 5;
    sub_13FB2E(v5);
    if ( v11 != 0 )
      sub_13FB2E(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::BaseKeyFrameArray::AnimRange>(std::vector<Ogre::BaseKeyFrameArray::AnimRange,std::allocator<Ogre::BaseKeyFrameArray::AnimRange>> &)
// address: 0x00141374   size: 0x78 (120 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::BaseKeyFrameArray::AnimRange>(
        int a1,
        unsigned int a2,
        int a3,
        int a4)
{
  int v5; // r2
  int v7; // r0
  char *v8; // r1
  int v9; // r0
  unsigned int v10; // r2
  int v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h] BYREF
  int v15; // [sp+Ch] [bp-4h]

  v14 = a3;
  v15 = a4;
  v5 = *(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    sub_13FB24(v7);
    v8 = *(char **)(a2 + 4);
    v9 = *(_DWORD *)a2;
    v14 = 0;
    v15 = 0;
    v10 = (int)&v8[-v9] >> 3;
    if ( a2 <= v10 )
    {
      if ( a2 < v10 )
        *(_DWORD *)(a2 + 4) = v9 + 8 * a2;
    }
    else
    {
      std::vector<Ogre::BaseKeyFrameArray::AnimRange>::_M_fill_insert(a2, v8, a2 - v10, &v14);
    }
    if ( a2 != 0 )
      sub_13FB24(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v13 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 3;
    sub_13FB2E(v7);
    if ( v13 != 0 )
      sub_13FB2E(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<float>::KEYFRAME_T>(std::vector<Ogre::KeyFrameArray<float>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<float>::KEYFRAME_T>> &)
// address: 0x00141648   size: 0x7A (122 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<float>::KEYFRAME_T>(
        int a1,
        unsigned int a2,
        int a3,
        int a4)
{
  int v5; // r2
  int v7; // r0
  char *v8; // r1
  int v9; // r0
  unsigned int v10; // r2
  int v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h] BYREF
  int v15; // [sp+Ch] [bp-4h]

  v14 = a3;
  v15 = a4;
  v5 = *(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    sub_13FB24(v7);
    v8 = *(char **)(a2 + 4);
    v9 = *(_DWORD *)a2;
    v14 = 0;
    v15 = 0;
    v10 = (int)&v8[-v9] >> 3;
    if ( a2 <= v10 )
    {
      if ( a2 < v10 )
        *(_DWORD *)(a2 + 4) = v9 + 8 * a2;
    }
    else
    {
      std::vector<Ogre::KeyFrameArray<float>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<float>::KEYFRAME_T>>::_M_fill_insert(
        a2,
        v8,
        a2 - v10,
        (unsigned __int8 *)&v14);
    }
    if ( a2 != 0 )
      sub_13FB24(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v13 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 3;
    sub_13FB2E(v7);
    if ( v13 != 0 )
      sub_13FB2E(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>(std::vector<Ogre::KeyFrameArray<float>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>> &)
// address: 0x0014189C   size: 0x78 (120 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>(
        int a1,
        unsigned int a2,
        int a3,
        int a4)
{
  int v5; // r2
  int v7; // r0
  char *v8; // r1
  int v9; // r0
  unsigned int v10; // r2
  int v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h] BYREF
  int v15; // [sp+Ch] [bp-4h]

  v14 = a3;
  v15 = a4;
  v5 = *(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    sub_13FB24(v7);
    v8 = *(char **)(a2 + 4);
    v9 = *(_DWORD *)a2;
    v14 = 0;
    v15 = 0;
    v10 = (int)&v8[-v9] >> 3;
    if ( a2 <= v10 )
    {
      if ( a2 < v10 )
        *(_DWORD *)(a2 + 4) = v9 + 8 * a2;
    }
    else
    {
      std::vector<Ogre::KeyFrameArray<float>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<float>::CONTROL_POINT_T>>::_M_fill_insert(
        a2,
        v8,
        a2 - v10,
        (unsigned __int8 *)&v14);
    }
    if ( a2 != 0 )
      sub_13FB24(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v13 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 3;
    sub_13FB2E(v7);
    if ( v13 != 0 )
      sub_13FB2E(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::PECollisionFace>(std::vector<Ogre::PECollisionFace,std::allocator<Ogre::PECollisionFace>> &)
// address: 0x00148CF8   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::PECollisionFace>(int a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r2
  unsigned int v9; // [sp+0h] [bp-BCh]
  int v10; // [sp+0h] [bp-BCh]
  _DWORD v11[46]; // [sp+4h] [bp-B8h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_146982(v5);
    j_memset(v11, 0, 0xB4u);
    v11[9] = 1065353216;
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)&v11[13]);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)&v11[29]);
    v6 = a2[1];
    v7 = -1527099483 * ((v6 - *a2) >> 2);
    if ( v9 <= v7 )
    {
      if ( v9 < v7 )
        a2[1] = *a2 + 180 * v9;
    }
    else
    {
      std::vector<Ogre::PECollisionFace>::_M_fill_insert(a2, v6, v9 - v7, (int)v11);
    }
    if ( v9 != 0 )
      sub_146982(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v10 = -1527099483 * ((a2[1] - *a2) >> 2);
    sub_14698C(v5);
    if ( v10 != 0 )
      sub_14698C(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>(std::vector<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>> &)
// address: 0x00149040   size: 0x80 (128 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>(int a1, _DWORD *a2)
{
  int v3; // r2
  int v5; // r0
  unsigned __int8 *v6; // r1
  unsigned int v7; // r2
  unsigned int v9; // [sp+4h] [bp-18h]
  int v10; // [sp+4h] [bp-18h]
  unsigned __int8 v11[20]; // [sp+8h] [bp-14h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_146982(v5);
    j_memset(v11, 0, 0x10u);
    v6 = (unsigned __int8 *)a2[1];
    v7 = (int)&v6[-*a2] >> 4;
    if ( v9 <= v7 )
    {
      if ( v9 < v7 )
        a2[1] = *a2 + 16 * v9;
    }
    else
    {
      std::vector<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>>::_M_fill_insert(
        (int)a2,
        v6,
        v9 - v7,
        v11);
    }
    if ( v9 != 0 )
      sub_146982(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v10 = (a2[1] - *a2) >> 4;
    sub_14698C(v5);
    if ( v10 != 0 )
      sub_14698C(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>(std::vector<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>> &)
// address: 0x00149338   size: 0x8E (142 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>(
        int a1,
        _DWORD *a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  unsigned int v7; // r2
  unsigned int v9; // [sp+4h] [bp-20h]
  int v10; // [sp+4h] [bp-20h]
  int v11[7]; // [sp+8h] [bp-1Ch] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_146982(v5);
    j_memset(v11, 0, 0x18u);
    v6 = (char *)a2[1];
    v7 = -1431655765 * ((int)&v6[-*a2] >> 3);
    if ( v9 <= v7 )
    {
      if ( v9 < v7 )
        a2[1] = *a2 + 24 * v9;
    }
    else
    {
      std::vector<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>>::_M_fill_insert(
        (int)a2,
        v6,
        v9 - v7,
        v11);
    }
    if ( v9 != 0 )
      sub_146982(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v10 = -1431655765 * ((a2[1] - *a2) >> 3);
    sub_14698C(v5);
    if ( v10 != 0 )
      sub_14698C(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::TriggerDesc>(std::vector<Ogre::TriggerDesc,std::allocator<Ogre::TriggerDesc>> &)
// address: 0x0014AEF8   size: 0x78 (120 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::TriggerDesc>(int a1, unsigned int a2, int a3, int a4)
{
  int v5; // r2
  int v7; // r0
  char *v8; // r1
  _BYTE *v9; // r0
  unsigned int v10; // r2
  int v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h] BYREF
  int v15; // [sp+Ch] [bp-4h]

  v14 = a3;
  v15 = a4;
  v5 = *(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    sub_14AA7C(v7);
    v8 = *(char **)(a2 + 4);
    v9 = *(_BYTE **)a2;
    v14 = 0;
    v15 = 0;
    v10 = (v8 - v9) >> 3;
    if ( a2 <= v10 )
    {
      if ( a2 < v10 )
        *(_DWORD *)(a2 + 4) = &v9[8 * a2];
    }
    else
    {
      std::vector<Ogre::TriggerDesc>::_M_fill_insert((void **)a2, v8, a2 - v10, &v14);
    }
    if ( a2 != 0 )
      sub_14AA7C(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v13 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 3;
    sub_14AA86(v7);
    if ( v13 != 0 )
      sub_14AA86(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::SequenceDesc>(std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>> &)
// address: 0x0014B420   size: 0x7E (126 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::SequenceDesc>(int a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  unsigned int v10; // [sp+4h] [bp-14h]
  int v11; // [sp+4h] [bp-14h]
  _DWORD v12[4]; // [sp+8h] [bp-10h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_14AA7C(v5);
    v6 = (char *)a2[1];
    v7 = *a2;
    memset(v12, 0, sizeof(v12));
    v8 = (int)&v6[-v7] >> 4;
    if ( v10 <= v8 )
    {
      if ( v10 < v8 )
        a2[1] = v7 + 16 * v10;
    }
    else
    {
      std::vector<Ogre::SequenceDesc>::_M_fill_insert((int)a2, v6, v10 - v8, v12);
    }
    if ( v10 != 0 )
      sub_14AA7C(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v11 = (a2[1] - *a2) >> 4;
    sub_14AA86(v5);
    if ( v11 != 0 )
      sub_14AA86(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>(std::vector<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>> &)
// address: 0x00153BD8   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>(int a1, int a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  unsigned int v7; // r2
  unsigned int v9; // [sp+Ch] [bp-30h]
  int v10; // [sp+Ch] [bp-30h]
  _DWORD v11[5]; // [sp+10h] [bp-2Ch] BYREF
  _DWORD v12[6]; // [sp+24h] [bp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_1533B0(v5);
    j_memset(v11, 0, sizeof(v11));
    v11[4] = 1065353216;
    v12[0] = v11[0];
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = 1065353216;
    v6 = *(char **)(a2 + 4);
    v7 = -858993459 * ((int)&v6[-*(_DWORD *)a2] >> 2);
    if ( v9 <= v7 )
    {
      if ( v9 < v7 )
        *(_DWORD *)(a2 + 4) = *(_DWORD *)a2 + 20 * v9;
    }
    else
    {
      std::vector<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>>::_M_fill_insert(
        (void **)a2,
        v6,
        v9 - v7,
        v12);
    }
    if ( v9 != 0 )
      sub_1533B0(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v10 = -858993459 * ((*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2);
    sub_1533BA(v5);
    if ( v10 != 0 )
      sub_1533BA(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>(std::vector<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>> &)
// address: 0x00153E08   size: 0x96 (150 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>(
        int a1,
        _DWORD *a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  unsigned int v7; // r2
  unsigned int v9; // [sp+Ch] [bp-48h]
  int v10; // [sp+Ch] [bp-48h]
  _DWORD v11[8]; // [sp+10h] [bp-44h] BYREF
  _BYTE v12[36]; // [sp+30h] [bp-24h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_1533B0(v5);
    j_memset(v11, 0, sizeof(v11));
    v11[3] = 1065353216;
    v11[7] = 1065353216;
    j_memcpy(v12, v11, 0x20u);
    v6 = (char *)a2[1];
    v7 = (int)&v6[-*a2] >> 5;
    if ( v9 <= v7 )
    {
      if ( v9 < v7 )
        a2[1] = *a2 + 32 * v9;
    }
    else
    {
      std::vector<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>>::_M_fill_insert(
        (int)a2,
        v6,
        v9 - v7,
        v12);
    }
    if ( v9 != 0 )
      sub_1533B0(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v10 = (a2[1] - *a2) >> 5;
    sub_1533BA(v5);
    if ( v10 != 0 )
      sub_1533BA(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::Vector3>(std::vector<Ogre::Vector3,std::allocator<Ogre::Vector3>> &)
// address: 0x00158844   size: 0x82 (130 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::Vector3>(int a1, _DWORD *a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  unsigned int v7; // r2
  unsigned int v9; // [sp+0h] [bp-14h]
  int v10; // [sp+0h] [bp-14h]
  _DWORD v11[4]; // [sp+4h] [bp-10h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_156446(v5);
    v6 = (char *)a2[1];
    v7 = -1431655765 * ((int)&v6[-*a2] >> 2);
    if ( v9 <= v7 )
    {
      if ( v9 < v7 )
        a2[1] = *a2 + 12 * v9;
    }
    else
    {
      std::vector<Ogre::Vector3>::_M_fill_insert((int)a2, v6, v9 - v7, v11);
    }
    if ( v9 != 0 )
      sub_156446(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v10 = -1431655765 * ((a2[1] - *a2) >> 2);
    sub_156450(v5);
    if ( v10 != 0 )
      sub_156450(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::TerrainLinkMeshData>(std::vector<Ogre::TerrainLinkMeshData,std::allocator<Ogre::TerrainLinkMeshData>> &)
// address: 0x00159084   size: 0x7A (122 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::TerrainLinkMeshData>(int a1, unsigned int a2, int a3, int a4)
{
  int v5; // r2
  int v7; // r0
  char *v8; // r1
  int v9; // r0
  unsigned int v10; // r2
  int v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h] BYREF
  int v15; // [sp+Ch] [bp-4h]

  v14 = a3;
  v15 = a4;
  v5 = *(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    sub_156446(v7);
    v8 = *(char **)(a2 + 4);
    v9 = *(_DWORD *)a2;
    v14 = 0;
    v15 = 0;
    v10 = (int)&v8[-v9] >> 3;
    if ( a2 <= v10 )
    {
      if ( a2 < v10 )
        *(_DWORD *)(a2 + 4) = v9 + 8 * a2;
    }
    else
    {
      std::vector<Ogre::TerrainLinkMeshData>::_M_fill_insert(a2, v8, a2 - v10, &v14);
    }
    if ( a2 != 0 )
      sub_156446(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v13 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 3;
    sub_156450(v7);
    if ( v13 != 0 )
      sub_156450(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::VertexElement>(std::vector<Ogre::VertexElement,std::allocator<Ogre::VertexElement>> &)
// address: 0x0016457C   size: 0x76 (118 bytes)
//======================================================================
unsigned int __fastcall Ogre::Archive::serializeRawArray<Ogre::VertexElement>(unsigned int a1, int a2)
{
  int v3; // r2
  int v5; // r0
  int *v6; // r1
  _BYTE *v7; // r0
  unsigned int v8; // r2
  int v11; // [sp+0h] [bp-8h]
  int v12; // [sp+4h] [bp-4h] BYREF

  v12 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_163C6C(v5);
    v6 = *(int **)(a2 + 4);
    v7 = *(_BYTE **)a2;
    v12 = 0;
    v8 = ((char *)v6 - v7) >> 2;
    if ( a1 <= v8 )
    {
      if ( a1 < v8 )
        *(_DWORD *)(a2 + 4) = &v7[4 * a1];
    }
    else
    {
      std::vector<Ogre::VertexElement>::_M_fill_insert((void **)a2, v6, a1 - v8, &v12);
    }
    if ( a1 != 0 )
      sub_163C6C(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v11 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2;
    sub_163C76(v5);
    if ( v11 != 0 )
      sub_163C76(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::MorphAnimData::AnimRange>(std::vector<Ogre::MorphAnimData::AnimRange,std::allocator<Ogre::MorphAnimData::AnimRange>> &)
// address: 0x00167D08   size: 0x78 (120 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::MorphAnimData::AnimRange>(
        int a1,
        unsigned int a2,
        int a3,
        int a4)
{
  int v5; // r2
  int v7; // r0
  char *v8; // r1
  int v9; // r0
  unsigned int v10; // r2
  int v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h] BYREF
  int v15; // [sp+Ch] [bp-4h]

  v14 = a3;
  v15 = a4;
  v5 = *(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    sub_167920(v7);
    v8 = *(char **)(a2 + 4);
    v9 = *(_DWORD *)a2;
    v14 = 0;
    v15 = 0;
    v10 = (int)&v8[-v9] >> 3;
    if ( a2 <= v10 )
    {
      if ( a2 < v10 )
        *(_DWORD *)(a2 + 4) = v9 + 8 * a2;
    }
    else
    {
      std::vector<Ogre::MorphAnimData::AnimRange>::_M_fill_insert(a2, v8, a2 - v10, &v14);
    }
    if ( a2 != 0 )
      sub_167920(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v13 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 3;
    sub_16792A(v7);
    if ( v13 != 0 )
      sub_16792A(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>(std::vector<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>> &)
// address: 0x0018737C   size: 0x9E (158 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>(int a1, int a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  unsigned int v7; // r2
  unsigned int v9; // [sp+Ch] [bp-30h]
  int v10; // [sp+Ch] [bp-30h]
  _BYTE v11[20]; // [sp+10h] [bp-2Ch] BYREF
  _BYTE v12[24]; // [sp+24h] [bp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_1868DC(v5);
    j_memset(v11, 0, sizeof(v11));
    qmemcpy(v12, v11, 20);
    v6 = *(char **)(a2 + 4);
    v7 = -858993459 * ((int)&v6[-*(_DWORD *)a2] >> 2);
    if ( v9 <= v7 )
    {
      if ( v9 < v7 )
        *(_DWORD *)(a2 + 4) = *(_DWORD *)a2 + 20 * v9;
    }
    else
    {
      std::vector<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>>::_M_fill_insert(
        (void **)a2,
        v6,
        v9 - v7,
        v12);
    }
    if ( v9 != 0 )
      sub_1868DC(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v10 = -858993459 * ((*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2);
    sub_1868E6(v5);
    if ( v10 != 0 )
      sub_1868E6(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>(std::vector<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>> &)
// address: 0x001875A8   size: 0x8E (142 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>(
        int a1,
        _DWORD *a2)
{
  int v3; // r2
  int v5; // r0
  char *v6; // r1
  unsigned int v7; // r2
  unsigned int v9; // [sp+Ch] [bp-48h]
  int v10; // [sp+Ch] [bp-48h]
  _BYTE v11[32]; // [sp+10h] [bp-44h] BYREF
  _BYTE v12[36]; // [sp+30h] [bp-24h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_1868DC(v5);
    j_memset(v11, 0, sizeof(v11));
    j_memcpy(v12, v11, 0x20u);
    v6 = (char *)a2[1];
    v7 = (int)&v6[-*a2] >> 5;
    if ( v9 <= v7 )
    {
      if ( v9 < v7 )
        a2[1] = *a2 + 32 * v9;
    }
    else
    {
      std::vector<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T,std::allocator<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>>::_M_fill_insert(
        (int)a2,
        v6,
        v9 - v7,
        v12);
    }
    if ( v9 != 0 )
      sub_1868DC(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v10 = (a2[1] - *a2) >> 5;
    sub_1868E6(v5);
    if ( v10 != 0 )
      sub_1868E6(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::BSPData::SufaceMtl>(std::vector<Ogre::BSPData::SufaceMtl,std::allocator<Ogre::BSPData::SufaceMtl>> &)
// address: 0x00193914   size: 0x76 (118 bytes)
//======================================================================
unsigned int __fastcall Ogre::Archive::serializeRawArray<Ogre::BSPData::SufaceMtl>(unsigned int a1, _DWORD *a2)
{
  int v3; // r2
  int v5; // r0
  int *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  int v11; // [sp+0h] [bp-8h]
  _DWORD *v12; // [sp+4h] [bp-4h] BYREF

  v12 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_192FA0(v5);
    v6 = (int *)a2[1];
    v7 = *a2;
    v12 = nullptr;
    v8 = ((int)v6 - v7) >> 2;
    if ( a1 <= v8 )
    {
      if ( a1 < v8 )
        a2[1] = v7 + 4 * a1;
    }
    else
    {
      std::vector<Ogre::BSPData::SufaceMtl>::_M_fill_insert((int)a2, v6, a1 - v8, (int *)&v12);
    }
    if ( a1 != 0 )
      sub_192FA0(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v11 = (a2[1] - *a2) >> 2;
    sub_192FAA(v5);
    if ( v11 != 0 )
      sub_192FAA(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::ModelAnchor>(std::vector<Ogre::ModelAnchor,std::allocator<Ogre::ModelAnchor>> &)
// address: 0x00193F6C   size: 0x78 (120 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::ModelAnchor>(int a1, unsigned int a2, int a3, int a4)
{
  int v5; // r2
  int v7; // r0
  char *v8; // r1
  int v9; // r0
  unsigned int v10; // r2
  int v13; // [sp+4h] [bp-Ch]
  int v14; // [sp+8h] [bp-8h] BYREF
  int v15; // [sp+Ch] [bp-4h]

  v14 = a3;
  v15 = a4;
  v5 = *(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    sub_192FA0(v7);
    v8 = *(char **)(a2 + 4);
    v9 = *(_DWORD *)a2;
    v14 = 0;
    v15 = 0;
    v10 = (int)&v8[-v9] >> 3;
    if ( a2 <= v10 )
    {
      if ( a2 < v10 )
        *(_DWORD *)(a2 + 4) = v9 + 8 * a2;
    }
    else
    {
      std::vector<Ogre::ModelAnchor>::_M_fill_insert(a2, v8, a2 - v10, &v14);
    }
    if ( a2 != 0 )
      sub_192FA0(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v13 = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 3;
    sub_192FAA(v7);
    if ( v13 != 0 )
      sub_192FAA(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive& Ogre::Archive::serializeRawArray<Ogre::Matrix4>(std::vector<Ogre::Matrix4,std::allocator<Ogre::Matrix4>> &)
// address: 0x00197890   size: 0x7C (124 bytes)
//======================================================================
int __fastcall Ogre::Archive::serializeRawArray<Ogre::Matrix4>(int a1, _DWORD *a2)
{
  int v3; // r2
  int v5; // r0
  const Ogre::Matrix4 *v6; // r1
  unsigned int v7; // r2
  unsigned int v9; // [sp+4h] [bp-48h]
  int v10; // [sp+4h] [bp-48h]
  _BYTE v11[68]; // [sp+8h] [bp-44h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_197510(v5);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v11);
    v6 = (const Ogre::Matrix4 *)a2[1];
    v7 = ((int)v6 - *a2) >> 6;
    if ( v9 <= v7 )
    {
      if ( v9 < v7 )
        a2[1] = *a2 + (v9 << 6);
    }
    else
    {
      std::vector<Ogre::Matrix4>::_M_fill_insert((int)a2, v6, v9 - v7, (const Ogre::Matrix4 *)v11);
    }
    if ( v9 != 0 )
      sub_197510(*(_DWORD *)(a1 + 4));
  }
  else
  {
    v10 = (a2[1] - *a2) >> 6;
    sub_19751A(v5);
    if ( v10 != 0 )
      sub_19751A(*(_DWORD *)(a1 + 4));
  }
  return a1;
}

