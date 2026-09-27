// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::__uninitialized_fill_n

//======================================================================
// void std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,unsigned int,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>(Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,unsigned int,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T const&)
// address: 0x00153920   size: 0x22 (34 bytes)
//======================================================================
char *__fastcall std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T *,unsigned int,Ogre::KeyFrameArray<Ogre::Quaternion>::CONTROL_POINT_T>(
        char *result,
        int a2,
        void *a3)
{
  char *v3; // r4

  v3 = result;
  while ( a2 != 0 )
  {
    if ( v3 != nullptr )
      result = (char *)j_memcpy(v3, a3, 0x20u);
    --a2;
    v3 += 32;
  }
  return result;
}


//======================================================================
// void std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::ContextQueDesc *,unsigned int,Ogre::ContextQueDesc>(Ogre::ContextQueDesc *,unsigned int,Ogre::ContextQueDesc const&)
// address: 0x0015CEA2   size: 0x22 (34 bytes)
//======================================================================
char *__fastcall std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::ContextQueDesc *,unsigned int,Ogre::ContextQueDesc>(
        char *result,
        int a2,
        void *a3)
{
  char *v3; // r4

  v3 = result;
  while ( a2 != 0 )
  {
    if ( v3 != nullptr )
      result = (char *)j_memcpy(v3, a3, 0x9Cu);
    --a2;
    v3 += 156;
  }
  return result;
}


//======================================================================
// void std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::CullResult::Record *,unsigned int,Ogre::CullResult::Record>(Ogre::CullResult::Record *,unsigned int,Ogre::CullResult::Record const&)
// address: 0x0015EF88   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::CullResult::Record *,unsigned int,Ogre::CullResult::Record>(
        _DWORD *result,
        int a2,
        _DWORD *a3)
{
  int v3; // r6
  int v4; // r7

  while ( a2 != 0 )
  {
    if ( result != nullptr )
    {
      v3 = a3[1];
      v4 = a3[2];
      *result = *a3;
      result[1] = v3;
      result[2] = v4;
      result[3] = a3[3];
    }
    --a2;
    result += 4;
  }
  return result;
}


//======================================================================
// void std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::UIScreenRect *,unsigned int,Ogre::UIScreenRect>(Ogre::UIScreenRect *,unsigned int,Ogre::UIScreenRect const&)
// address: 0x00162FC8   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::UIScreenRect *,unsigned int,Ogre::UIScreenRect>(
        _DWORD *result,
        int a2,
        _DWORD *a3)
{
  int v3; // r6
  int v4; // r7
  int v5; // r6
  int v6; // r7
  int v7; // r6
  int v8; // r7

  while ( a2 != 0 )
  {
    if ( result != nullptr )
    {
      v3 = a3[1];
      v4 = a3[2];
      *result = *a3;
      result[1] = v3;
      result[2] = v4;
      v5 = a3[4];
      v6 = a3[5];
      result[3] = a3[3];
      result[4] = v5;
      result[5] = v6;
      v7 = a3[7];
      v8 = a3[8];
      result[6] = a3[6];
      result[7] = v7;
      result[8] = v8;
      result[9] = a3[9];
    }
    --a2;
    result += 10;
  }
  return result;
}


//======================================================================
// void std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::RenderLines::LineVertex *,unsigned int,Ogre::RenderLines::LineVertex>(Ogre::RenderLines::LineVertex *,unsigned int,Ogre::RenderLines::LineVertex const&)
// address: 0x00171858   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::RenderLines::LineVertex *,unsigned int,Ogre::RenderLines::LineVertex>(
        _DWORD *result,
        int a2,
        _DWORD *a3)
{
  while ( a2 != 0 )
  {
    if ( result != nullptr )
    {
      *result = *a3;
      result[1] = a3[1];
      result[2] = a3[2];
      result[3] = a3[3];
      result[4] = a3[4];
      result[5] = a3[5];
    }
    --a2;
    result += 6;
  }
  return result;
}


//======================================================================
// void std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,unsigned int,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>(Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,unsigned int,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T const&)
// address: 0x00186EF6   size: 0x22 (34 bytes)
//======================================================================
char *__fastcall std::__uninitialized_fill_n<false>::__uninit_fill_n<Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T *,unsigned int,Ogre::KeyFrameArray<Ogre::Vector4>::CONTROL_POINT_T>(
        char *result,
        int a2,
        void *a3)
{
  char *v3; // r4

  v3 = result;
  while ( a2 != 0 )
  {
    if ( v3 != nullptr )
      result = (char *)j_memcpy(v3, a3, 0x20u);
    --a2;
    v3 += 32;
  }
  return result;
}

