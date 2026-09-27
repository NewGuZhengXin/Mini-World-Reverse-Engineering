// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CompiledShader

//======================================================================
// Ogre::CompiledShader::saveGLSLCodeCache(Ogre::DataStream *)
// address: 0x001594E8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::CompiledShader::saveGLSLCodeCache(Ogre::CompiledShader *this, Ogre::DataStream *a2)
{
  return 1;
}


//======================================================================
// Ogre::CompiledShader::~CompiledShader()
// address: 0x001594EC   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14CompiledShaderD1Ev'
void __fastcall Ogre::CompiledShader::~CompiledShader(Ogre::CompiledShader *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_456780;
  v2 = *((void **)this + 3);
  if ( v2 != nullptr )
    operator delete(v2);
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::CompiledShader::~CompiledShader()
// address: 0x0015951C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::CompiledShader::~CompiledShader(Ogre::CompiledShader *this)
{
  Ogre::CompiledShader::~CompiledShader(this);
  operator delete(this);
}


//======================================================================
// Ogre::CompiledShader::CompiledShader(Ogre::COMPILED_TYPE)
// address: 0x001595A0   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14CompiledShaderC1ENS_13COMPILED_TYPEE'
_DWORD *__fastcall Ogre::CompiledShader::CompiledShader(_DWORD *result, int a2)
{
  result[1] = 1;
  result[2] = a2;
  *result = &off_456780;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  return result;
}


//======================================================================
// Ogre::CompiledShader::loadCodeCache(Ogre::DataStream *)
// address: 0x0015A5C8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall Ogre::CompiledShader::loadCodeCache(Ogre::CompiledShader *this, Ogre::DataStream *a2)
{
  int v4; // r6
  _BYTE *v5; // r1
  char *v6; // r2
  char *v7; // r0
  unsigned __int8 v9; // [sp+3h] [bp-5h] BYREF
  Ogre::DataStream *v10; // [sp+4h] [bp-4h] BYREF

  v9 = HIBYTE(this);
  v10 = a2;
  (*(void (__fastcall **)(Ogre::DataStream *, Ogre::DataStream **, int))(*(_DWORD *)a2 + 8))(a2, &v10, 4);
  v9 = 0;
  v4 = *((_DWORD *)this + 3);
  v5 = *((_BYTE **)this + 4);
  v6 = (char *)v10 + 1;
  v7 = &v5[-v4];
  if ( (char *)v10 + 1 <= &v5[-v4] )
  {
    if ( v6 < v7 )
      *((_DWORD *)this + 4) = &v6[v4];
  }
  else
  {
    std::vector<char>::_M_fill_insert((int)this + 12, v5, v6 - v7, &v9);
  }
  (*(void (__fastcall **)(Ogre::DataStream *, _DWORD, Ogre::DataStream *))(*(_DWORD *)a2 + 8))(
    a2,
    *((_DWORD *)this + 3),
    v10);
  *((_BYTE *)v10 + *((_DWORD *)this + 3)) = 0;
  return 1;
}

