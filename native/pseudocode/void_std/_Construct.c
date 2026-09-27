// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::_Construct

//======================================================================
// void std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T const&)
// address: 0x00140D6A   size: 0xE (14 bytes)
//======================================================================
void *__fastcall std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(
        void *result,
        const void *a2)
{
  if ( result != nullptr )
    return j_memcpy(result, a2, 0x14u);
  return result;
}


//======================================================================
// void std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T const&)
// address: 0x00140FE0   size: 0xE (14 bytes)
//======================================================================
void *__fastcall std::_Construct<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(
        void *result,
        const void *a2)
{
  if ( result != nullptr )
    return j_memcpy(result, a2, 0x20u);
  return result;
}


//======================================================================
// void std::_Construct<Ogre::PECollisionFace,Ogre::PECollisionFace>(Ogre::PECollisionFace *,Ogre::PECollisionFace const&)
// address: 0x00148B1E   size: 0xC (12 bytes)
//======================================================================
int __fastcall std::_Construct<Ogre::PECollisionFace,Ogre::PECollisionFace>(int result, int a2)
{
  if ( result != 0 )
    return Ogre::PECollisionFace::PECollisionFace(result, a2);
  return result;
}


//======================================================================
// void std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>(Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T *,Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T const&)
// address: 0x00148DA0   size: 0x36 (54 bytes)
//======================================================================
int __fastcall std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector3>::KEYFRAME_T>(
        int result,
        unsigned __int8 *a2)
{
  int v2; // r3

  if ( result != 0 )
  {
    v2 = (a2[1] << 8) | *a2 | (a2[2] << 16) | (a2[3] << 24);
    *(_BYTE *)result = *a2;
    *(_BYTE *)(result + 1) = BYTE1(v2);
    *(_BYTE *)(result + 2) = BYTE2(v2);
    *(_BYTE *)(result + 3) = HIBYTE(v2);
    *(_DWORD *)(result + 4) = *((_DWORD *)a2 + 1);
    *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(result + 12) = *((_DWORD *)a2 + 3);
  }
  return result;
}


//======================================================================
// void std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>(Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T const&)
// address: 0x001490C0   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall std::_Construct<Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T,Ogre::KeyFrameArray<Ogre::Vector3>::CONTROL_POINT_T>(
        _DWORD *result,
        _DWORD *a2)
{
  if ( result != nullptr )
  {
    *result = *a2;
    result[1] = a2[1];
    result[2] = a2[2];
    result[3] = a2[3];
    result[4] = a2[4];
    result[5] = a2[5];
  }
  return result;
}


//======================================================================
// void std::_Construct<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>(Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T *,Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T const&)
// address: 0x00153942   size: 0xE (14 bytes)
//======================================================================
void *__fastcall std::_Construct<Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Quaternion>::KEYFRAME_T>(
        void *result,
        const void *a2)
{
  if ( result != nullptr )
    return j_memcpy(result, a2, 0x14u);
  return result;
}


//======================================================================
// void std::_Construct<Ogre::BoneInstance,Ogre::BoneInstance>(Ogre::BoneInstance *,Ogre::BoneInstance const&)
// address: 0x0015567C   size: 0xC (12 bytes)
//======================================================================
Ogre::BoneInstance *__fastcall std::_Construct<Ogre::BoneInstance,Ogre::BoneInstance>(
        Ogre::BoneInstance *result,
        const Ogre::BoneInstance *a2)
{
  if ( result != nullptr )
    return Ogre::BoneInstance::BoneInstance(result, a2);
  return result;
}


//======================================================================
// void std::_Construct<Ogre::BlockVertex,Ogre::BlockVertex>(Ogre::BlockVertex *,Ogre::BlockVertex const&)
// address: 0x00157718   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall std::_Construct<Ogre::BlockVertex,Ogre::BlockVertex>(_DWORD *result, _DWORD *a2)
{
  if ( result != nullptr )
  {
    *result = *a2;
    result[1] = a2[1];
    result[2] = a2[2];
    result[3] = a2[3];
    result[4] = a2[4];
    result[5] = a2[5];
    result[6] = a2[6];
    result[7] = a2[7];
    result[8] = a2[8];
  }
  return result;
}


//======================================================================
// void std::_Construct<Ogre::DrawRect,Ogre::DrawRect>(Ogre::DrawRect *,Ogre::DrawRect const&)
// address: 0x00163618   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall std::_Construct<Ogre::DrawRect,Ogre::DrawRect>(_DWORD *result, int *a2)
{
  _DWORD *v2; // r1
  int v3; // r2
  int v4; // r4
  int v5; // r5
  _DWORD *v6; // r3
  _DWORD *v7; // r0
  int v8; // r2
  int v9; // r4
  int v10; // r2
  int v11; // r5

  if ( result != nullptr )
  {
    v3 = *a2;
    v4 = a2[1];
    v5 = a2[2];
    v2 = a2 + 3;
    *result = v3;
    result[1] = v4;
    result[2] = v5;
    v6 = result + 3;
    v7 = (_DWORD *)*v2;
    v8 = v2[1];
    v9 = v2[2];
    v2 += 3;
    *v6 = v7;
    v6[1] = v8;
    v6[2] = v9;
    v6 += 3;
    result = (_DWORD *)*v2;
    v10 = v2[1];
    v11 = v2[2];
    *v6 = *v2;
    v6[1] = v10;
    v6[2] = v11;
  }
  return result;
}


//======================================================================
// void std::_Construct<Ogre::Disturb,Ogre::Disturb>(Ogre::Disturb *,Ogre::Disturb const&)
// address: 0x0017A044   size: 0x20 (32 bytes)
//======================================================================
int __fastcall std::_Construct<Ogre::Disturb,Ogre::Disturb>(int result, int a2)
{
  if ( result != 0 )
  {
    *(_BYTE *)result = *(_BYTE *)a2;
    *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 20);
  }
  return result;
}


//======================================================================
// void std::_Construct<std::string,std::string>(std::string *,std::string const&)
// address: 0x001863B4   size: 0xC (12 bytes)
//======================================================================
int __fastcall std::_Construct<std::string,std::string>(int result, int a2)
{
  if ( result != 0 )
    return sub_3BEB1C(result, a2);
  return result;
}


//======================================================================
// void std::_Construct<Ogre::FixedString,Ogre::FixedString>(Ogre::FixedString *,Ogre::FixedString const&)
// address: 0x00186F18   size: 0x10 (16 bytes)
//======================================================================
int __fastcall std::_Construct<Ogre::FixedString,Ogre::FixedString>(int result, int *a2)
{
  int *v2; // r3
  int v3; // r0

  v2 = (int *)result;
  if ( result != 0 )
  {
    v3 = *a2;
    *v2 = *a2;
    return Ogre::FixedString::addRef(v3, a2);
  }
  return result;
}


//======================================================================
// void std::_Construct<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>(Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T *,Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T const&)
// address: 0x001870E4   size: 0xE (14 bytes)
//======================================================================
void *__fastcall std::_Construct<Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T,Ogre::KeyFrameArray<Ogre::Vector4>::KEYFRAME_T>(
        void *result,
        const void *a2)
{
  if ( result != nullptr )
    return j_memcpy(result, a2, 0x14u);
  return result;
}


//======================================================================
// void std::_Construct<Ogre::Matrix4,Ogre::Matrix4>(Ogre::Matrix4 *,Ogre::Matrix4 const&)
// address: 0x001976E0   size: 0xC (12 bytes)
//======================================================================
int __fastcall std::_Construct<Ogre::Matrix4,Ogre::Matrix4>(int result, const Ogre::Matrix4 *a2)
{
  if ( result != 0 )
    return Ogre::Matrix4::Matrix4(result, a2);
  return result;
}


//======================================================================
// void std::_Construct<tinyobj::material_t,tinyobj::material_t>(tinyobj::material_t *,tinyobj::material_t &&)
// address: 0x002B7370   size: 0x82 (130 bytes)
//======================================================================
// Alternative name is '_ZSt10_ConstructIN7tinyobj10material_tEJS1_EEvPT_DpOT0_'
_DWORD *__fastcall std::_Construct<tinyobj::material_t,tinyobj::material_t>(_DWORD *result, _DWORD *a2)
{
  int v2; // r2
  int v3; // r2
  int v4; // r2
  int v5; // r2

  if ( result != nullptr )
  {
    *result = *a2;
    v2 = a2[1];
    *a2 = &byte_55FB88;
    result[1] = v2;
    result[2] = a2[2];
    result[3] = a2[3];
    result[4] = a2[4];
    result[5] = a2[5];
    result[6] = a2[6];
    result[7] = a2[7];
    result[8] = a2[8];
    result[9] = a2[9];
    result[10] = a2[10];
    result[11] = a2[11];
    result[12] = a2[12];
    result[13] = a2[13];
    result[14] = a2[14];
    result[15] = a2[15];
    result[16] = a2[16];
    result[17] = a2[17];
    result[18] = a2[18];
    result[19] = a2[19];
    result[20] = a2[20];
    v3 = a2[21];
    a2[20] = &byte_55FB88;
    result[21] = v3;
    v4 = a2[22];
    a2[21] = &byte_55FB88;
    result[22] = v4;
    v5 = a2[23];
    a2[22] = &byte_55FB88;
    result[23] = v5;
    a2[23] = &byte_55FB88;
    return std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_Rb_tree(
             result + 24,
             a2 + 24);
  }
  return result;
}

