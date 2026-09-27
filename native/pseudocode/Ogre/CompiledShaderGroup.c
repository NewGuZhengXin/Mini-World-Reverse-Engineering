// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CompiledShaderGroup

//======================================================================
// Ogre::CompiledShaderGroup::writeSymbolName(Ogre::DataStream *,char const*)
// address: 0x001595C0   size: 0x2C (44 bytes)
//======================================================================
__int64 __fastcall Ogre::CompiledShaderGroup::writeSymbolName(__int64 this, const char *a2)
{
  char v3; // r0
  int v4; // r3
  __int64 v6; // [sp+0h] [bp-8h] BYREF

  v6 = this;
  v3 = j_strlen((const char *)HIDWORD(this));
  v4 = *(_DWORD *)this;
  HIBYTE(v6) = v3;
  (*(void (__fastcall **)(_DWORD, char *, int))(v4 + 12))(this, (char *)&v6 + 7, 1);
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 12))(this, HIDWORD(this), HIBYTE(v6));
  return v6;
}


//======================================================================
// Ogre::CompiledShaderGroup::readSymbolName(char *,int,Ogre::DataStream *)
// address: 0x001595EC   size: 0x2A (42 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::CompiledShaderGroup::readSymbolName(
        Ogre::CompiledShaderGroup *this,
        char *a2,
        int a3,
        Ogre::DataStream *a4)
{
  unsigned __int8 v6; // [sp+7h] [bp-1h] BYREF

  (*(void (__fastcall **)(int, unsigned __int8 *, int))(*(_DWORD *)a3 + 8))(a3, &v6, 1);
  (*(void (__fastcall **)(int, Ogre::CompiledShaderGroup *, _DWORD))(*(_DWORD *)a3 + 8))(a3, this, v6);
  *((_BYTE *)this + v6) = 0;
}


//======================================================================
// Ogre::CompiledShaderGroup::CompiledShaderGroup(void)
// address: 0x00159616   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19CompiledShaderGroupC1Ev'
Ogre::CompiledShaderGroup *__fastcall Ogre::CompiledShaderGroup::CompiledShaderGroup(Ogre::CompiledShaderGroup *this)
{
  char *v1; // r5

  v1 = (char *)this + 4;
  j_memset((char *)this + 4, 0, 0x10u);
  *((_DWORD *)this + 3) = v1;
  *((_DWORD *)this + 4) = v1;
  v1 += 24;
  *((_DWORD *)this + 5) = 0;
  j_memset(v1, 0, 0x10u);
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 9) = v1;
  *((_DWORD *)this + 10) = v1;
  return this;
}


//======================================================================
// Ogre::CompiledShaderGroup::onLostDevice(void)
// address: 0x00159646   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::CompiledShaderGroup::onLostDevice(int this)
{
  int v1; // r4
  int v2; // r5

  v1 = *(_DWORD *)(this + 36);
  v2 = this;
  while ( v1 != v2 + 28 )
  {
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v1 + 20) + 44))(*(_DWORD *)(v1 + 20));
    this = sub_391DDC(v1);
    v1 = this;
  }
  return this;
}


//======================================================================
// Ogre::CompiledShaderGroup::onResetDevice(void)
// address: 0x00159668   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::CompiledShaderGroup::onResetDevice(Ogre::CompiledShaderGroup *this)
{
  _DWORD **i; // r4
  int result; // r0

  for ( i = *((_DWORD ***)this + 9); i != (_DWORD **)((char *)this + 28); i = (_DWORD **)sub_391DDC(i) )
  {
    result = (*(int (__fastcall **)(_DWORD *))(*i[5] + 48))(i[5]);
    if ( result == 0 )
      return result;
  }
  return 1;
}


//======================================================================
// Ogre::CompiledShaderGroup::~CompiledShaderGroup()
// address: 0x001596D8   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19CompiledShaderGroupD1Ev'
void __fastcall Ogre::CompiledShaderGroup::~CompiledShaderGroup(Ogre::CompiledShaderGroup *this)
{
  _DWORD **i; // r5

  for ( i = *((_DWORD ***)this + 9); i != (_DWORD **)((char *)this + 28); i = (_DWORD **)sub_391DDC(i) )
    Ogre::BaseObject::release(i[5]);
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::CompiledShader *>,std::_Select1st<std::pair<unsigned int const,Ogre::CompiledShader *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::CompiledShader *>>>::_M_erase(
    (int)this + 24,
    *((_DWORD **)this + 8));
  std::_Rb_tree<Ogre::CompiledShaderKey,std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>,std::_Select1st<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>,std::less<Ogre::CompiledShaderKey>,std::allocator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>>::_M_erase(
    (int)this,
    *((_DWORD *)this + 2));
}


//======================================================================
// Ogre::CompiledShaderGroup::createCompiledShader(Ogre::CompiledShaderKey const&)
// address: 0x00159AD8   size: 0x190 (400 bytes)
//======================================================================
int __fastcall Ogre::CompiledShaderGroup::createCompiledShader(_DWORD *a1, int a2)
{
  unsigned int *v3; // r4
  int v4; // r6
  const char *MacroName; // r0
  const char *v6; // r3
  int v7; // r2
  __int64 v8; // r0
  int v9; // r5
  unsigned int v10; // r3
  void (__fastcall *v11)(unsigned int *, Ogre::FixedString **, void **, int); // r7
  int v12; // r2
  void *v13; // r1
  unsigned int v14; // r0
  _DWORD *v15; // r3
  _DWORD *v16; // r2
  _DWORD *v17; // r5
  Ogre::ShaderMacroManager *v19; // [sp+10h] [bp-12Ch]
  __int64 (__fastcall *v21)(unsigned int *, Ogre::FixedString **, void **, int); // [sp+18h] [bp-124h]
  Ogre::FixedString *v22; // [sp+24h] [bp-118h] BYREF
  void **v23; // [sp+28h] [bp-114h] BYREF
  int v24; // [sp+2Ch] [bp-110h]
  char s[256]; // [sp+34h] [bp-108h] BYREF

  v3 = (unsigned int *)(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton
                                                          + 20))(
                         Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton,
                         *(_DWORD *)(a2 + 20));
  Ogre::ShaderMacroTable::ShaderMacroTable(&v23);
  Ogre::ShaderMacroTable::createFromShaderEnv((Ogre::ShaderMacroTable *)&v23, (unsigned __int8 *)a2);
  v4 = 0;
  v19 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
  do
  {
    if ( *(_BYTE *)(a2 + 8 + v4) != 0 )
    {
      MacroName = (const char *)Ogre::ShaderMacroManager::getMacroName(v19, *(unsigned __int8 *)(a2 + 8 + v4));
      Ogre::ShaderMacroTable::addMacro((Ogre::ShaderMacroTable *)&v23, MacroName, *(unsigned __int8 *)(a2 + 8 + v4 + 4));
    }
    ++v4;
  }
  while ( v4 != 4 );
  if ( *(_DWORD *)(a2 + 20) == 1 )
    v6 = "vsh";
  else
    v6 = "psh";
  j_sprintf(s, "%s%s.%s", "shaders/test/", *(const char **)(a2 + 16), v6);
  v21 = *(__int64 (__fastcall **)(unsigned int *, Ogre::FixedString **, void **, int))(*v3 + 28);
  v22 = (Ogre::FixedString *)Ogre::FixedString::insert((Ogre::FixedString *)s, (const char *)0xFFFFFFFF, v7);
  v8 = v21(v3, &v22, v23, (v24 - (int)v23) >> 3);
  v9 = v8;
  Ogre::FixedString::~FixedString(&v22, (void *)HIDWORD(v8));
  if ( v9 != 0 )
  {
    v14 = Ogre::StringUtil::hash((Ogre::StringUtil *)v3[3], (const char *)&dword_0 + 3, v3[4] - v3[3], v10);
    v3[6] = v14;
    v15 = (_DWORD *)a1[8];
    v16 = a1 + 7;
    while ( v15 != nullptr )
    {
      if ( v15[4] < v14 )
      {
        v17 = (_DWORD *)v15[3];
        v15 = v16;
      }
      else
      {
        v17 = (_DWORD *)v15[2];
      }
      v16 = v15;
      v15 = v17;
    }
    if ( v16 == a1 + 7 || v14 < v16[4] )
    {
      v9 = (*(int (__fastcall **)(unsigned int *))(*v3 + 40))(v3);
      if ( v9 != 0 )
      {
        *std::map<Ogre::CompiledShaderKey,Ogre::CompiledShader *>::operator[](a1, a2) = v3;
        v9 = (int)v3;
        *(_DWORD *)std::map<unsigned int,Ogre::CompiledShader *>::operator[](a1 + 6, v3 + 6) = v3;
      }
      else
      {
        Ogre::BaseObject::release(v3);
      }
    }
    else
    {
      v9 = v16[5];
      Ogre::BaseObject::release(v3);
      *std::map<Ogre::CompiledShaderKey,Ogre::CompiledShader *>::operator[](a1, a2) = v9;
    }
  }
  else
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreCompiledShader.cpp",
      (const char *)&dword_70 + 2,
      8,
      v10);
    Ogre::LogMessage((Ogre *)"createCompiledShader compileCode failed: %s", s);
    v11 = *(void (__fastcall **)(unsigned int *, Ogre::FixedString **, void **, int))(*v3 + 28);
    v22 = (Ogre::FixedString *)Ogre::FixedString::insert((Ogre::FixedString *)s, (const char *)0xFFFFFFFF, v12);
    v11(v3, &v22, v23, (v24 - (int)v23) >> 3);
    Ogre::FixedString::~FixedString(&v22, v13);
  }
  Ogre::ShaderMacroTable::~ShaderMacroTable(&v23);
  return v9;
}


//======================================================================
// Ogre::CompiledShaderGroup::getCompiledShader(Ogre::COMPILED_TYPE,Ogre::FixedString const&,Ogre::ShaderEnvFlags const&,Ogre::MaterialMacro const&)
// address: 0x00159C8C   size: 0x86 (134 bytes)
//======================================================================
int __fastcall Ogre::CompiledShaderGroup::getCompiledShader(
        _DWORD *a1,
        Ogre::FixedString *a2,
        int a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _DWORD *v7; // r4
  _DWORD *v8; // r6
  _DWORD *v9; // r3
  void *v10; // r1
  int CompiledShader; // r4
  _QWORD v13[2]; // [sp+8h] [bp-1Ch] BYREF
  Ogre::FixedString *v14[3]; // [sp+18h] [bp-Ch] BYREF

  v14[0] = nullptr;
  v13[0] = *a4;
  v13[1] = *a5;
  Ogre::FixedString::operator=(v14, a3);
  v7 = (_DWORD *)a1[2];
  v14[1] = a2;
  v8 = a1 + 1;
  while ( v7 != nullptr )
  {
    if ( Ogre::operator<((int)(v7 + 4), (int)v13) )
    {
      v9 = (_DWORD *)v7[3];
      v7 = v8;
    }
    else
    {
      v9 = (_DWORD *)v7[2];
    }
    v8 = v7;
    v7 = v9;
  }
  if ( v8 == a1 + 1 || Ogre::operator<((int)v13, (int)(v8 + 4)) )
    CompiledShader = Ogre::CompiledShaderGroup::createCompiledShader(a1, (int)v13);
  else
    CompiledShader = v8[10];
  Ogre::FixedString::~FixedString(v14, v10);
  return CompiledShader;
}


//======================================================================
// Ogre::CompiledShaderGroup::saveShaders(void)
// address: 0x00159D30   size: 0x28E (654 bytes)
//======================================================================
void __fastcall Ogre::CompiledShaderGroup::saveShaders(Ogre::CompiledShaderGroup *this)
{
  int *v1; // r4
  _DWORD *v2; // r6
  char *v3; // r5
  unsigned int v4; // r0
  _BYTE *v5; // r7
  char *v6; // r7
  int v7; // r0
  char *v8; // r5
  int v9; // r2
  int v10; // r6
  int MacroName; // r0
  const char *v12; // r2
  _DWORD *i; // r5
  int v14; // r3
  int j; // r3
  __int64 v16; // r0
  const char *v17; // r2
  int v18; // r4
  unsigned int v19; // r6
  _DWORD *v20; // r5
  int v21; // r4
  unsigned int v22; // r6
  _DWORD *v23; // r7
  unsigned int v24; // [sp+8h] [bp-3Ch]
  char *v25; // [sp+Ch] [bp-38h]
  int v27; // [sp+18h] [bp-2Ch] BYREF
  int v28; // [sp+1Ch] [bp-28h] BYREF
  _DWORD v29[3]; // [sp+20h] [bp-24h] BYREF
  int v30; // [sp+2Ch] [bp-18h] BYREF
  int v31; // [sp+30h] [bp-14h]
  void *v32; // [sp+34h] [bp-10h] BYREF
  char *v33; // [sp+38h] [bp-Ch]
  char *v34; // [sp+3Ch] [bp-8h]

  v1 = (int *)Ogre::FileManager::openFile(
                (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
                "shadercache.key",
                false);
  if ( v1 != nullptr )
  {
    v32 = nullptr;
    v2 = *((_DWORD **)this + 9);
    v33 = nullptr;
    v34 = nullptr;
    while ( v2 != (_DWORD *)((char *)this + 28) )
    {
      v3 = v33;
      if ( v33 == v34 )
      {
        v4 = std::vector<Ogre::CompiledShader *>::_M_check_len(&v32, 1u, (int)"vector::_M_insert_aux");
        v5 = v32;
        v24 = v4;
        if ( v4 != 0 )
        {
          if ( v4 > 0x3FFFFFFF )
            sub_3BCEB4();
          v25 = (char *)operator new(4 * v4);
        }
        else
        {
          v25 = nullptr;
        }
        v6 = &v25[4 * ((v3 - v5) >> 2)];
        if ( v6 != nullptr )
          *(_DWORD *)v6 = v2[5];
        v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::CompiledShader *>(
               v32,
               (int)v3,
               v25);
        v8 = (char *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::CompiledShader *>(
                       v3,
                       (int)v33,
                       (void *)(v7 + 4));
        if ( v32 != nullptr )
          operator delete(v32);
        v33 = v8;
        v32 = v25;
        v34 = &v25[4 * v24];
      }
      else
      {
        if ( v33 != nullptr )
          *(_DWORD *)v33 = v2[5];
        v33 += 4;
      }
      v2 = (_DWORD *)sub_391DDC(v2);
    }
    v9 = *((_DWORD *)this + 5);
    v29[1] = 100;
    v29[2] = v9;
    (*(void (__fastcall **)(int *))(*v1 + 12))(v1);
    v10 = 0;
    v27 = (*(_DWORD *)(Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton + 28)
         - *(_DWORD *)(Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton + 24)) >> 2;
    (*(void (__fastcall **)(int *, int *, int))(*v1 + 12))(v1, &v27, 4);
    while ( v10 < v27 )
    {
      MacroName = Ogre::ShaderMacroManager::getMacroName(
                    (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton,
                    v10);
      Ogre::CompiledShaderGroup::writeSymbolName(__SPAIR64__(MacroName, (unsigned int)v1), v12);
      ++v10;
    }
    for ( i = *((_DWORD **)this + 3); ; i = (_DWORD *)sub_391DDC(i) )
    {
      v14 = *v1;
      if ( i == (_DWORD *)((char *)this + 4) )
        break;
      (*(void (__fastcall **)(int *, _DWORD *, int))(v14 + 12))(v1, i + 9, 4);
      for ( j = 0; j != (v33 - (_BYTE *)v32) >> 2; ++j )
      {
        if ( *((_DWORD *)v32 + j) == i[10] )
          goto LABEL_29;
      }
      j = -1;
LABEL_29:
      v30 = j;
      (*(void (__fastcall **)(int *, int *, int))(*v1 + 12))(v1, &v30, 4);
      (*(void (__fastcall **)(int *, _DWORD *, int))(*v1 + 12))(v1, i + 4, 16);
      HIDWORD(v16) = i[8];
      LODWORD(v16) = v1;
      Ogre::CompiledShaderGroup::writeSymbolName(v16, v17);
    }
    (*(void (__fastcall **)(int *))(v14 + 4))(v1);
    v30 = 100;
    v31 = (v33 - (_BYTE *)v32) >> 2;
    v18 = Ogre::FileManager::openFile(
            (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
            "shadercache_d3d.dat",
            false);
    (*(void (__fastcall **)(int, int *, int))(*(_DWORD *)v18 + 12))(v18, &v30, 8);
    v19 = 0;
    while ( v19 < (v33 - (_BYTE *)v32) >> 2 )
    {
      v20 = *((_DWORD **)v32 + v19++);
      v28 = v20[2];
      (*(void (__fastcall **)(int, int *, int))(*(_DWORD *)v18 + 12))(v18, &v28, 4);
      (*(void (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)v18 + 12))(v18, v20 + 6, 4);
      v29[0] = v20[4] - v20[3];
      (*(void (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)v18 + 12))(v18, v29, 4);
      (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v18 + 12))(v18, v20[3], v29[0]);
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 4))(v18);
    v30 = 100;
    v31 = (v33 - (_BYTE *)v32) >> 2;
    v21 = Ogre::FileManager::openFile(
            (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
            "shadercache_ogl.dat",
            false);
    (*(void (__fastcall **)(int, int *, int))(*(_DWORD *)v21 + 12))(v21, &v30, 8);
    v22 = 0;
    while ( v22 < (v33 - (_BYTE *)v32) >> 2 )
    {
      v23 = *((_DWORD **)v32 + v22++);
      v29[0] = v23[2];
      (*(void (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)v21 + 12))(v21, v29, 4);
      (*(void (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)v21 + 12))(v21, v23 + 6, 4);
      (*(void (__fastcall **)(_DWORD *, int))(*v23 + 36))(v23, v21);
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 4))(v21);
    if ( v32 != nullptr )
      operator delete(v32);
  }
}


//======================================================================
// Ogre::CompiledShaderGroup::loadShaders(bool)
// address: 0x0015A194   size: 0x300 (768 bytes)
//======================================================================
int __fastcall Ogre::CompiledShaderGroup::loadShaders(Ogre::CompiledShaderGroup *this, int a2)
{
  int v2; // r0
  int v3; // r5
  int v4; // r4
  void *v5; // r0
  Ogre::ShaderMacroManager *v6; // r7
  int v7; // r2
  __int64 v8; // r0
  unsigned int v9; // r5
  void *v10; // r1
  int v11; // r5
  signed int i; // r7
  char *j; // r6
  int v14; // r3
  _DWORD *v15; // r0
  int k; // r3
  int v17; // r0
  signed int v18; // r4
  void *v19; // r1
  int v20; // r1
  int *v21; // r0
  int *v22; // r4
  unsigned int v23; // r2
  signed int m; // r6
  int v25; // r3
  int v26; // r0
  unsigned int *v27; // r7
  int v28; // r5
  int n; // r4
  _DWORD *v30; // r0
  int v31; // r3
  Ogre::FixedString **ii; // r5
  char *v34; // [sp+4h] [bp-160h]
  unsigned int v36; // [sp+Ch] [bp-158h]
  char *v37; // [sp+Ch] [bp-158h]
  char *v38; // [sp+10h] [bp-154h]
  Ogre::DataStream *v40; // [sp+20h] [bp-144h] BYREF
  int v41; // [sp+24h] [bp-140h] BYREF
  void *v42; // [sp+28h] [bp-13Ch] BYREF
  char v43[4]; // [sp+2Ch] [bp-138h] BYREF
  unsigned int v44; // [sp+30h] [bp-134h]
  void *v45; // [sp+34h] [bp-130h] BYREF
  _DWORD *v46; // [sp+38h] [bp-12Ch]
  _DWORD *v47; // [sp+3Ch] [bp-128h]
  void *v48[7]; // [sp+40h] [bp-124h] BYREF
  _BYTE v49[256]; // [sp+5Ch] [bp-108h] BYREF

  v2 = Ogre::FileManager::openFile(
         (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
         "shadercache.key",
         true);
  v3 = 0;
  v4 = v2;
  if ( v2 != 0 )
  {
    v47 = nullptr;
    v45 = nullptr;
    v46 = nullptr;
    (*(void (__fastcall **)(int, char *, int))(*(_DWORD *)v2 + 8))(v2, v43, 8);
    v5 = (void *)(*(int (__fastcall **)(int, Ogre::DataStream **, int))(*(_DWORD *)v4 + 8))(v4, &v40, 4);
    while ( v3 < (int)v40 )
    {
      Ogre::CompiledShaderGroup::readSymbolName((Ogre::CompiledShaderGroup *)v49, (char *)&dword_100, v4, v40);
      v6 = (Ogre::ShaderMacroManager *)Ogre::Singleton<Ogre::ShaderMacroManager>::ms_Singleton;
      v42 = (void *)Ogre::FixedString::insert((Ogre::FixedString *)v49, (const char *)0xFFFFFFFF, v7);
      LODWORD(v8) = Ogre::ShaderMacroManager::registerMacro(v6, (Ogre::FixedString **)&v42);
      HIDWORD(v8) = v46;
      v48[0] = (void *)v8;
      if ( v46 == v47 )
      {
        LODWORD(v8) = &v45;
        HIDWORD(v8) = (unsigned __int64)std::vector<int>::_M_insert_aux(v8, v48) >> 32;
      }
      else
      {
        if ( v46 != nullptr )
          *v46 = v8;
        ++v46;
      }
      Ogre::FixedString::~FixedString((Ogre::FixedString **)&v42, (void *)HIDWORD(v8));
      ++v3;
    }
    v9 = v44;
    if ( v44 != 0 )
    {
      if ( v44 > 0x3FFFFFFF )
        goto LABEL_12;
      v38 = (char *)operator new(4 * v44);
    }
    else
    {
      v38 = nullptr;
    }
    memset(v38, 0, 4 * v9);
    v36 = v44;
    v5 = j_memset(v48, 0, 0x18u);
    if ( v44 != 0 )
    {
      if ( v44 > 0xAAAAAAA )
LABEL_12:
        sub_3BCEB4(v5);
      v34 = (char *)operator new(24 * v44);
    }
    else
    {
      v34 = nullptr;
    }
    v11 = (int)v34;
    for ( i = v36; i != 0; --i )
    {
      if ( v11 != 0 )
        Ogre::CompiledShaderKey::CompiledShaderKey(v11, (int)v48);
      v11 += 24;
    }
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v48[4], v10);
    for ( j = v34; ; j += 24 )
    {
      v14 = *(_DWORD *)v4;
      if ( i >= (int)v44 )
        break;
      (*(void (__fastcall **)(int, char *, int))(v14 + 8))(v4, j + 20, 4);
      (*(void (__fastcall **)(int, char *, int))(*(_DWORD *)v4 + 8))(v4, &v38[4 * i], 4);
      (*(void (__fastcall **)(int, char *, int))(*(_DWORD *)v4 + 8))(v4, j, 16);
      v15 = v45;
      for ( k = 0; k != 4; ++k )
      {
        if ( j[k + 8] != 0 )
          j[k + 8] = v15[(unsigned __int8)j[k + 8]];
      }
      Ogre::CompiledShaderGroup::readSymbolName(
        (Ogre::CompiledShaderGroup *)v49,
        (char *)&dword_100,
        v4,
        (Ogre::DataStream *)&byte_4);
      Ogre::FixedString::operator=(j + 16, v49);
      ++i;
    }
    v17 = v4;
    v18 = 0;
    v37 = &v34[24 * v36];
    (*(void (__fastcall **)(int))(v14 + 4))(v17);
    if ( a2 != 0 )
    {
      while ( 1 )
      {
        v19 = (void *)v44;
        if ( v18 >= (int)v44 )
          break;
        v20 = 24 * v18++;
        Ogre::CompiledShaderGroup::createCompiledShader(this, (int)&v34[v20]);
      }
      v4 = 1;
    }
    else
    {
      v21 = (int *)Ogre::FileManager::openFile(
                     (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
                     "shadercache_ogl.dat",
                     true);
      v22 = v21;
      memset(v48, 0, 12);
      if ( v21 != nullptr )
      {
        (*(void (__fastcall **)(int *, char *, int))(*v21 + 8))(v21, v43, 8);
        v42 = nullptr;
        v23 = ((char *)v48[1] - (char *)v48[0]) >> 2;
        if ( v44 <= v23 )
        {
          if ( v44 < v23 )
            v48[1] = (char *)v48[0] + 4 * v44;
        }
        else
        {
          std::vector<Ogre::CompiledShader *>::_M_fill_insert(v48, (char *)v48[1], v44 - v23, &v42);
        }
        for ( m = 0; ; ++m )
        {
          v25 = *v22;
          if ( m >= (int)v44 )
            break;
          (*(void (__fastcall **)(int *, int *, int))(v25 + 8))(v22, &v41, 4);
          v26 = (*(int (__fastcall **)(int, int))(*(_DWORD *)Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton + 20))(
                  Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton,
                  v41);
          v27 = (unsigned int *)(v26 + 24);
          v28 = v26;
          (*(void (__fastcall **)(int *, int, int))(*v22 + 8))(v22, v26 + 24, 4);
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v28 + 32))(v28, v22);
          (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 40))(v28);
          *((_DWORD *)v48[0] + m) = v28;
          *(_DWORD *)std::map<unsigned int,Ogre::CompiledShader *>::operator[]((_DWORD *)this + 6, v27) = v28;
        }
        (*(void (__fastcall **)(int *))(v25 + 4))(v22);
        for ( n = 0; n != -1431655765 * ((v37 - v34) >> 3); ++n )
        {
          v30 = std::map<Ogre::CompiledShaderKey,Ogre::CompiledShader *>::operator[](this, (int)&v34[24 * n]);
          v19 = v38;
          v31 = 4 * n;
          *v30 = *((_DWORD *)v48[0] + *(_DWORD *)&v38[v31]);
        }
        v4 = 1;
      }
      else
      {
        v4 = 0;
      }
      if ( v48[0] != nullptr )
        operator delete(v48[0]);
    }
    for ( ii = (Ogre::FixedString **)v34; v37 != (char *)ii; ii += 6 )
      Ogre::FixedString::~FixedString(ii + 4, v19);
    if ( v34 != nullptr )
      operator delete(v34);
    if ( v38 != nullptr )
      operator delete(v38);
    if ( v45 != nullptr )
      operator delete(v45);
  }
  return v4;
}

