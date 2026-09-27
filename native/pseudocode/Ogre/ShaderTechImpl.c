// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ShaderTechImpl

//======================================================================
// Ogre::ShaderTechImpl::~ShaderTechImpl()
// address: 0x00159174   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14ShaderTechImplD1Ev'
void __fastcall Ogre::ShaderTechImpl::~ShaderTechImpl(Ogre::ShaderTechImpl *this)
{
  int v2; // r0

  *(_DWORD *)this = &off_456710;
  *((_DWORD *)this + 1) = &off_45674C;
  v2 = *((_DWORD *)this + 3);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  *((_DWORD *)this + 1) = &off_4559C0;
  *(_DWORD *)this = &off_456690;
}


//======================================================================
// Ogre::ShaderTechImpl::begin(void)
// address: 0x001591CC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::ShaderTechImpl::begin(Ogre::ShaderTechImpl *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 3) + 312);
}


//======================================================================
// Ogre::ShaderTechImpl::end(void)
// address: 0x001591D4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::ShaderTechImpl::end(Ogre::ShaderTechImpl *this)
{
  ;
}


//======================================================================
// Ogre::ShaderTechImpl::~ShaderTechImpl()
// address: 0x00159206   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ShaderTechImpl::~ShaderTechImpl(Ogre::ShaderTechImpl *this)
{
  Ogre::ShaderTechImpl::~ShaderTechImpl(this);
  operator delete(this);
}


//======================================================================
// Ogre::ShaderTechImpl::getRequiredParams(Ogre::ShaderParamUsage *,unsigned int)
// address: 0x0015922C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Ogre::ShaderTechImpl::getRequiredParams(int a1, void *a2)
{
  int v2; // r4

  v2 = a1 + 236;
  j_memcpy(a2, (const void *)(a1 + 20), 4 * *(_DWORD *)(a1 + 236));
  return *(_DWORD *)v2;
}


//======================================================================
// Ogre::ShaderTechImpl::ShaderTechImpl(Ogre::TechPassData *)
// address: 0x001592D8   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14ShaderTechImplC1EPNS_12TechPassDataE'
_DWORD *__fastcall Ogre::ShaderTechImpl::ShaderTechImpl(_DWORD *this, Ogre::TechPassData *a2)
{
  *(this + 2) = 1;
  *(this + 3) = a2;
  *(this + 1) = &off_45674C;
  *(this + 4) = -1;
  *this = &off_456710;
  *(this + 59) = 0;
  return this;
}


//======================================================================
// Ogre::ShaderTechImpl::postInit(Ogre::MaterialTemplate *)
// address: 0x00159304   size: 0x9C (156 bytes)
//======================================================================
__int64 __fastcall Ogre::ShaderTechImpl::postInit(_DWORD *a1, int a2)
{
  int v4; // r5
  int v5; // r3
  _DWORD *v6; // r7
  int v7; // r0
  int v8; // r3
  int v9; // r2
  _DWORD *v10; // r6
  int v11; // r5
  _DWORD *v12; // r3
  __int64 v14; // [sp+0h] [bp-Ch]

  HIDWORD(v14) = a2;
  LODWORD(v14) = 0;
  while ( (unsigned int)v14 < *(_DWORD *)(a1[3] + 312) )
  {
    v4 = a1[3] + 76 * v14 + 8;
    *(_DWORD *)(v4 + 8) = 0;
    for ( HIDWORD(v14) = 0; ; ++HIDWORD(v14) )
    {
      v5 = *(_DWORD *)(a2 + 40);
      if ( HIDWORD(v14) >= -1171354717 * ((*(_DWORD *)(a2 + 44) - v5) >> 3) )
        break;
      v6 = (_DWORD *)(v5 + 88 * HIDWORD(v14));
      v7 = (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 48))(a1, v14, *v6);
      if ( v7 >= 0 )
      {
        v8 = *(_DWORD *)(v4 + 8);
        v9 = v4 + 8 * v8;
        *(_DWORD *)(v9 + 12) = v7;
        *(_DWORD *)(v9 + 16) = v6;
        *(_DWORD *)(v4 + 8) = v8 + 1;
      }
    }
    LODWORD(v14) = v14 + 1;
  }
  v10 = a1 + 59;
  v11 = 0;
  a1[59] = 0;
  do
  {
    if ( (*(int (__fastcall **)(_DWORD *, int))(*a1 + 44))(a1, v11) != 0 )
    {
      v12 = &a1[*v10 + 4];
      ++*v10;
      v12[1] = v11;
    }
    ++v11;
  }
  while ( v11 != 54 );
  return v14;
}

