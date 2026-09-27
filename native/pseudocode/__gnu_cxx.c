// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: __gnu_cxx

//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>::__value),void>::__type std::__fill_a<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T const&)
// address: 0x00140D32   size: 0x1C (28 bytes)
//======================================================================
char *__fastcall std::__fill_a<Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::KEYFRAME_T>(
        char *result,
        char *a2,
        void *a3)
{
  char *i; // r4

  for ( i = result; i != a2; i += 20 )
    result = (char *)j_memcpy(i, a3, 0x14u);
  return result;
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>::__value),void>::__type std::__fill_a<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T const&)
// address: 0x00140D4E   size: 0x1C (28 bytes)
//======================================================================
char *__fastcall std::__fill_a<Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T *,Ogre::KeyFrameArray<Ogre::ColourValue>::CONTROL_POINT_T>(
        char *result,
        char *a2,
        void *a3)
{
  char *i; // r4

  for ( i = result; i != a2; i += 32 )
    result = (char *)j_memcpy(i, a3, 0x20u);
  return result;
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::PkgFileInfo>::__value),void>::__type std::__fill_a<Ogre::PkgFileInfo *,Ogre::PkgFileInfo>(Ogre::PkgFileInfo *,Ogre::PkgFileInfo *,Ogre::PkgFileInfo const&)
// address: 0x00149FCA   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_a<Ogre::PkgFileInfo *,Ogre::PkgFileInfo>(_DWORD *result, _DWORD *a2, _DWORD *a3)
{
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r3
  int v6; // r6
  int v7; // r7

  while ( result != a2 )
  {
    v3 = a3[1];
    v4 = a3[2];
    *result = *a3;
    result[1] = v3;
    result[2] = v4;
    v5 = result + 3;
    result += 6;
    v6 = a3[4];
    v7 = a3[5];
    *v5 = a3[3];
    v5[1] = v6;
    v5[2] = v7;
  }
  return result;
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::PkgFileInfo>::__value),Ogre::PkgFileInfo *>::__type std::__fill_n_a<Ogre::PkgFileInfo *,unsigned int,Ogre::PkgFileInfo>(Ogre::PkgFileInfo *,unsigned int,Ogre::PkgFileInfo const&)
// address: 0x0014A050   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_n_a<Ogre::PkgFileInfo *,unsigned int,Ogre::PkgFileInfo>(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r12
  int v4; // r6
  int v5; // r3
  int v6; // r7
  int v7; // r3
  int v8; // r7

  v3 = a1;
  v4 = a2;
  while ( v4 != 0 )
  {
    --v4;
    v5 = a3[1];
    v6 = a3[2];
    *v3 = *a3;
    v3[1] = v5;
    v3[2] = v6;
    v7 = a3[4];
    v8 = a3[5];
    v3[3] = a3[3];
    v3[4] = v7;
    v3[5] = v8;
    v3 += 6;
  }
  return &a1[6 * a2];
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::SequenceDesc>::__value),void>::__type std::__fill_a<Ogre::SequenceDesc *,Ogre::SequenceDesc>(Ogre::SequenceDesc *,Ogre::SequenceDesc *,Ogre::SequenceDesc const&)
// address: 0x0014ACDE   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_a<Ogre::SequenceDesc *,Ogre::SequenceDesc>(_DWORD *result, _DWORD *a2, _DWORD *a3)
{
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r3

  while ( result != a2 )
  {
    v3 = a3[1];
    v4 = a3[2];
    *result = *a3;
    result[1] = v3;
    result[2] = v4;
    v5 = result + 3;
    result += 4;
    *v5 = a3[3];
  }
  return result;
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::SequenceDesc>::__value),Ogre::SequenceDesc *>::__type std::__fill_n_a<Ogre::SequenceDesc *,unsigned int,Ogre::SequenceDesc>(Ogre::SequenceDesc *,unsigned int,Ogre::SequenceDesc const&)
// address: 0x0014ACF6   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_n_a<Ogre::SequenceDesc *,unsigned int,Ogre::SequenceDesc>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v3; // r12
  int v4; // r4
  int v5; // r3
  int v6; // r7
  _DWORD *v7; // r5

  v3 = a1;
  v4 = a2;
  while ( v4 != 0 )
  {
    --v4;
    v5 = a3[1];
    v6 = a3[2];
    *v3 = *a3;
    v3[1] = v5;
    v3[2] = v6;
    v7 = v3 + 3;
    v3 += 4;
    *v7 = a3[3];
  }
  return &a1[4 * a2];
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::ShaderContextPool::ValueParam>::__value),void>::__type std::__fill_a<Ogre::ShaderContextPool::ValueParam *,Ogre::ShaderContextPool::ValueParam>(Ogre::ShaderContextPool::ValueParam *,Ogre::ShaderContextPool::ValueParam *,Ogre::ShaderContextPool::ValueParam const&)
// address: 0x0015CDF4   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_a<Ogre::ShaderContextPool::ValueParam *,Ogre::ShaderContextPool::ValueParam>(
        _DWORD *result,
        _DWORD *a2,
        _DWORD *a3)
{
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r3
  int v6; // r6

  while ( result != a2 )
  {
    v3 = a3[1];
    v4 = a3[2];
    *result = *a3;
    result[1] = v3;
    result[2] = v4;
    v5 = result + 3;
    result += 5;
    v6 = a3[4];
    *v5 = a3[3];
    v5[1] = v6;
  }
  return result;
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::ContextQueDesc>::__value),void>::__type std::__fill_a<Ogre::ContextQueDesc *,Ogre::ContextQueDesc>(Ogre::ContextQueDesc *,Ogre::ContextQueDesc *,Ogre::ContextQueDesc const&)
// address: 0x0015CE0C   size: 0x1C (28 bytes)
//======================================================================
char *__fastcall std::__fill_a<Ogre::ContextQueDesc *,Ogre::ContextQueDesc>(char *result, char *a2, void *a3)
{
  char *i; // r4

  for ( i = result; i != a2; i += 156 )
    result = (char *)j_memcpy(i, a3, 0x9Cu);
  return result;
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::ShaderContextPool::ValueParam>::__value),Ogre::ShaderContextPool::ValueParam *>::__type std::__fill_n_a<Ogre::ShaderContextPool::ValueParam *,unsigned int,Ogre::ShaderContextPool::ValueParam>(Ogre::ShaderContextPool::ValueParam *,unsigned int,Ogre::ShaderContextPool::ValueParam const&)
// address: 0x0015DBA0   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_n_a<Ogre::ShaderContextPool::ValueParam *,unsigned int,Ogre::ShaderContextPool::ValueParam>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v3; // r12
  int v4; // r6
  int v5; // r3
  int v6; // r7
  int v7; // r3

  v3 = a1;
  v4 = a2;
  while ( v4 != 0 )
  {
    --v4;
    v5 = a3[1];
    v6 = a3[2];
    *v3 = *a3;
    v3[1] = v5;
    v3[2] = v6;
    v7 = a3[4];
    v3[3] = a3[3];
    v3[4] = v7;
    v3 += 5;
  }
  return &a1[5 * a2];
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::CullResult::Record>::__value),void>::__type std::__fill_a<Ogre::CullResult::Record *,Ogre::CullResult::Record>(Ogre::CullResult::Record *,Ogre::CullResult::Record *,Ogre::CullResult::Record const&)
// address: 0x0015ECC4   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_a<Ogre::CullResult::Record *,Ogre::CullResult::Record>(
        _DWORD *result,
        _DWORD *a2,
        _DWORD *a3)
{
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r3

  while ( result != a2 )
  {
    v3 = a3[1];
    v4 = a3[2];
    *result = *a3;
    result[1] = v3;
    result[2] = v4;
    v5 = result + 3;
    result += 4;
    *v5 = a3[3];
  }
  return result;
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::DrawRect>::__value),void>::__type std::__fill_a<Ogre::DrawRect *,Ogre::DrawRect>(Ogre::DrawRect *,Ogre::DrawRect *,Ogre::DrawRect const&)
// address: 0x00162F8C   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_a<Ogre::DrawRect *,Ogre::DrawRect>(_DWORD *result, _DWORD *a2, _DWORD *a3)
{
  int v3; // r6
  int v4; // r7
  int v5; // r6
  int v6; // r7
  _DWORD *v7; // r3
  int v8; // r6
  int v9; // r7

  while ( result != a2 )
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
    v7 = result + 6;
    result += 9;
    v8 = a3[7];
    v9 = a3[8];
    *v7 = a3[6];
    v7[1] = v8;
    v7[2] = v9;
  }
  return result;
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::UIScreenRect>::__value),void>::__type std::__fill_a<Ogre::UIScreenRect *,Ogre::UIScreenRect>(Ogre::UIScreenRect *,Ogre::UIScreenRect *,Ogre::UIScreenRect const&)
// address: 0x00162FA8   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_a<Ogre::UIScreenRect *,Ogre::UIScreenRect>(_DWORD *result, _DWORD *a2, _DWORD *a3)
{
  int v3; // r6
  int v4; // r7
  int v5; // r6
  int v6; // r7
  int v7; // r6
  int v8; // r7
  _DWORD *v9; // r3

  while ( result != a2 )
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
    v9 = result + 9;
    result += 10;
    *v9 = a3[9];
  }
  return result;
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<IconBarIcon>::__value),void>::__type std::__fill_a<IconBarIcon *,IconBarIcon>(IconBarIcon *,IconBarIcon *,IconBarIcon const&)
// address: 0x001CAABA   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_a<IconBarIcon *,IconBarIcon>(_DWORD *result, _DWORD *a2, _DWORD *a3)
{
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r3

  while ( result != a2 )
  {
    v3 = a3[1];
    v4 = a3[2];
    *result = *a3;
    result[1] = v3;
    result[2] = v4;
    v5 = result + 3;
    result += 4;
    *v5 = a3[3];
  }
  return result;
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<IconBarIcon>::__value),IconBarIcon *>::__type std::__fill_n_a<IconBarIcon *,unsigned int,IconBarIcon>(IconBarIcon *,unsigned int,IconBarIcon const&)
// address: 0x001CAAD2   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_n_a<IconBarIcon *,unsigned int,IconBarIcon>(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r12
  int v4; // r4
  int v5; // r3
  int v6; // r7
  _DWORD *v7; // r5

  v3 = a1;
  v4 = a2;
  while ( v4 != 0 )
  {
    --v4;
    v5 = a3[1];
    v6 = a3[2];
    *v3 = *a3;
    v3[1] = v5;
    v3[2] = v6;
    v7 = v3 + 3;
    v3 += 4;
    *v7 = a3[3];
  }
  return &a1[4 * a2];
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::VertexDeclElement>::__value),void>::__type std::__fill_a<Ogre::VertexDeclElement *,Ogre::VertexDeclElement>(Ogre::VertexDeclElement *,Ogre::VertexDeclElement *,Ogre::VertexDeclElement const&)
// address: 0x002648F4   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_a<Ogre::VertexDeclElement *,Ogre::VertexDeclElement>(
        _DWORD *result,
        _DWORD *a2,
        _DWORD *a3)
{
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r3
  int v6; // r6
  int v7; // r7

  while ( result != a2 )
  {
    v3 = a3[1];
    v4 = a3[2];
    *result = *a3;
    result[1] = v3;
    result[2] = v4;
    v5 = result + 3;
    result += 6;
    v6 = a3[4];
    v7 = a3[5];
    *v5 = a3[3];
    v5[1] = v6;
    v5[2] = v7;
  }
  return result;
}


//======================================================================
// __gnu_cxx::__enable_if<!(std::__is_scalar<Ogre::VertexDeclElement>::__value),Ogre::VertexDeclElement *>::__type std::__fill_n_a<Ogre::VertexDeclElement *,unsigned int,Ogre::VertexDeclElement>(Ogre::VertexDeclElement *,unsigned int,Ogre::VertexDeclElement const&)
// address: 0x00264B86   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall std::__fill_n_a<Ogre::VertexDeclElement *,unsigned int,Ogre::VertexDeclElement>(
        _DWORD *a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v3; // r12
  int v4; // r6
  int v5; // r3
  int v6; // r7
  int v7; // r3
  int v8; // r7

  v3 = a1;
  v4 = a2;
  while ( v4 != 0 )
  {
    --v4;
    v5 = a3[1];
    v6 = a3[2];
    *v3 = *a3;
    v3[1] = v5;
    v3[2] = v6;
    v7 = a3[4];
    v8 = a3[5];
    v3[3] = a3[3];
    v3[4] = v7;
    v3[5] = v8;
    v3 += 6;
  }
  return &a1[6 * a2];
}


//======================================================================
// __gnu_cxx::__verbose_terminate_handler(void)
// address: 0x003C0730   size: 0xFA (250 bytes)
//======================================================================
void __noreturn __gnu_cxx::__verbose_terminate_handler()
{
  struct type_info *v0; // r0
  const char *v1; // r6
  char *v2; // r7
  int status; // [sp+Ch] [bp-8h] BYREF

  if ( byte_55FB94 == 0 )
  {
    byte_55FB94 = 1;
    v0 = _cxa_current_exception_type();
    if ( v0 != nullptr )
    {
      v1 = (const char *)(*((_DWORD *)v0 + 1) + (**((_BYTE **)v0 + 1) == 42));
      status = -1;
      v2 = _cxa_demangle(v1, nullptr, nullptr, &status);
      j_fwrite("terminate called after throwing an instance of '", 1u, 0x30u, (FILE *)((char *)&_sF + 168));
      if ( status != 0 )
        j_fputs(v1, (FILE *)((char *)&_sF + 168));
      else
        j_fputs(v2, (FILE *)((char *)&_sF + 168));
      j_fwrite("'\n", 1u, 2u, (FILE *)((char *)&_sF + 168));
      if ( status == 0 )
        j_free(v2);
      _cxa_rethrow();
    }
    j_fwrite("terminate called without an active exception\n", 1u, 0x2Du, (FILE *)((char *)&_sF + 168));
    j_abort();
  }
  j_fwrite("terminate called recursively\n", 1u, 0x1Du, (FILE *)((char *)&_sF + 168));
  j_abort();
}

