// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FilePackage

//======================================================================
// Ogre::FilePackage::close(void)
// address: 0x00149D54   size: 0xCE (206 bytes)
//======================================================================
Ogre::FilePackage *__fastcall Ogre::FilePackage::close(Ogre::FilePackage *this, void *a2)
{
  int v2; // r2
  FILE *v4; // r0
  int v5; // r3
  unsigned int v6; // r3
  const char *v7; // r1
  unsigned int v8; // r3
  const char *v9; // r1
  FILE *v10; // r0
  unsigned int v11; // r5
  int v12; // r3
  int v13; // r0
  Ogre::LockSection *v16; // [sp+4h] [bp-4h] BYREF

  v2 = *((unsigned __int8 *)this + 17);
  if ( *((_BYTE *)this + 17) == 0 )
  {
    v4 = *((FILE **)this + 5);
    if ( v4 != nullptr )
    {
      v5 = *((_DWORD *)this + 8);
      if ( v5 > 0 )
      {
        *((_DWORD *)this + 9) = *((_DWORD *)this + 11) + *((_DWORD *)this + 12);
        *((_DWORD *)this + 10) = 24 * v5;
        j_fseek(v4, v2, v2);
        if ( j_fwrite((char *)this + 24, 0x1Cu, 1u, *((FILE **)this + 5)) != 1 )
        {
          Ogre::LogSetCurParam(
            (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageFile.cpp",
            (const char *)off_9C + 2,
            8,
            v6);
          Ogre::LogMessage((Ogre *)"write pkgfile error", v7);
        }
        j_fseek(*((FILE **)this + 5), *((_DWORD *)this + 9), 0);
        if ( j_fwrite(*((const void **)this + 13), *((_DWORD *)this + 10), 1u, *((FILE **)this + 5)) != 1 )
        {
          Ogre::LogSetCurParam(
            (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageFile.cpp",
            (const char *)&dword_A4,
            8,
            v8);
          Ogre::LogMessage((Ogre *)"write pkgfile error", v9);
        }
      }
    }
  }
  v10 = *((FILE **)this + 5);
  if ( v10 != nullptr )
  {
    j_fclose(v10);
    *((_DWORD *)this + 5) = 0;
  }
  Ogre::release(*((Ogre **)this + 26), a2);
  v11 = 0;
  *((_DWORD *)this + 26) = 0;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v16, (Ogre::FilePackage *)((char *)this + 128));
  while ( 1 )
  {
    v12 = *((_DWORD *)this + 27);
    if ( v11 >= (*((_DWORD *)this + 28) - v12) >> 2 )
      break;
    v13 = *(_DWORD *)(4 * v11 + v12);
    if ( v13 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    ++v11;
  }
  *((_DWORD *)this + 28) = v12;
  Ogre::LockFunctor::~LockFunctor(&v16);
  *((_DWORD *)this + 30) = 0;
  return this;
}


//======================================================================
// Ogre::FilePackage::readFile(void *,unsigned int,unsigned int)
// address: 0x00149E60   size: 0x3C (60 bytes)
//======================================================================
size_t __fastcall Ogre::FilePackage::readFile(FILE **this, void *a2, int a3, size_t a4)
{
  size_t v7; // r4
  Ogre::LockSection *v10[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v10, (Ogre::LockSection *)(this + 22));
  j_fseek(*(this + 5), a3, 0);
  v7 = j_fread(a2, 1u, a4, *(this + 5));
  Ogre::LockFunctor::~LockFunctor(v10);
  return v7;
}


//======================================================================
// Ogre::FilePackage::newBufferObject(void)
// address: 0x00149ED2   size: 0x66 (102 bytes)
//======================================================================
_DWORD *__fastcall Ogre::FilePackage::newBufferObject(Ogre::FilePackage *this, Ogre::LockSection *a2)
{
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  int v5; // r3
  _DWORD *v6; // r6
  _DWORD *v7; // r3
  _DWORD *v8; // r2
  Ogre::LockSection *v10; // [sp+4h] [bp-4h] BYREF

  v10 = a2;
  if ( *((_DWORD *)this + 27) == *((_DWORD *)this + 28) )
  {
    ++*((_DWORD *)this + 30);
    v3 = (_DWORD *)operator new(0x14u);
    Ogre::PackageDataStreamObject::PackageDataStreamObject(v3, (unsigned int)this, *((Ogre **)this + 24));
    return v3;
  }
  else
  {
    Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v10, (Ogre::FilePackage *)((char *)this + 128));
    v5 = *((_DWORD *)this + 28);
    if ( *((_DWORD *)this + 27) == v5 )
    {
      ++*((_DWORD *)this + 30);
      v6 = (_DWORD *)operator new(0x14u);
      Ogre::PackageDataStreamObject::PackageDataStreamObject(v6, (unsigned int)this, *((Ogre **)this + 24));
      v4 = v6;
    }
    else
    {
      v7 = (_DWORD *)(v5 - 4);
      v8 = (_DWORD *)*v7;
      *((_DWORD *)this + 28) = v7;
      v4 = v8;
    }
    Ogre::LockFunctor::~LockFunctor(&v10);
  }
  return v4;
}


//======================================================================
// Ogre::FilePackage::~FilePackage()
// address: 0x00149F58   size: 0x5A (90 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11FilePackageD1Ev'
void __fastcall Ogre::FilePackage::~FilePackage(Ogre::FilePackage *this, void *a2)
{
  void *v3; // r0
  void *v4; // r0

  *(_DWORD *)this = &off_455DB0;
  Ogre::FilePackage::close(this, a2);
  Ogre::LockSection::~LockSection((Ogre::FilePackage *)((char *)this + 128));
  Ogre::LockSection::~LockSection((Ogre::FilePackage *)((char *)this + 124));
  v3 = *((void **)this + 27);
  if ( v3 != nullptr )
    operator delete(v3);
  sub_3BDF80((char *)this + 92);
  Ogre::LockSection::~LockSection((Ogre::FilePackage *)((char *)this + 88));
  std::_Rb_tree<unsigned long long,std::pair<unsigned long long const,unsigned int>,std::_Select1st<std::pair<unsigned long long const,unsigned int>>,std::less<unsigned long long>,std::allocator<std::pair<unsigned long long const,unsigned int>>>::_M_erase(
    (int)this + 64,
    *((_DWORD **)this + 18));
  v4 = *((void **)this + 13);
  if ( v4 != nullptr )
    operator delete(v4);
  Ogre::FilePkgBase::~FilePkgBase(this);
}


//======================================================================
// Ogre::FilePackage::~FilePackage()
// address: 0x00149FB8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::FilePackage::~FilePackage(Ogre::FilePackage *this, void *a2)
{
  Ogre::FilePackage::~FilePackage(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::FilePackage::freeBufferObject(Ogre::PackageDataStreamObject *)
// address: 0x0014A144   size: 0x40 (64 bytes)
//======================================================================
void __fastcall Ogre::FilePackage::freeBufferObject(Ogre::FilePackage *this, Ogre::PackageDataStreamObject *a2)
{
  __int64 v3; // r0
  Ogre::PackageDataStreamObject *v4; // [sp+4h] [bp-10h] BYREF
  Ogre::LockSection *v5[2]; // [sp+Ch] [bp-8h] BYREF

  v4 = a2;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v5, (Ogre::FilePackage *)((char *)this + 128));
  HIDWORD(v3) = *((_DWORD *)this + 28);
  if ( HIDWORD(v3) == *((_DWORD *)this + 29) )
  {
    LODWORD(v3) = (char *)this + 108;
    std::vector<Ogre::PackageDataStreamObject *>::_M_insert_aux(v3, &v4);
  }
  else
  {
    if ( HIDWORD(v3) != 0 )
      *(_DWORD *)HIDWORD(v3) = v4;
    *((_DWORD *)this + 28) += 4;
  }
  Ogre::LockFunctor::~LockFunctor(v5);
}


//======================================================================
// Ogre::FilePackage::openFile(int)
// address: 0x0014A190   size: 0x104 (260 bytes)
//======================================================================
Ogre::ObjectDataStream *__fastcall Ogre::FilePackage::openFile(void **this, char *a2, int a3, unsigned int a4)
{
  unsigned int v6; // r4
  _DWORD *v7; // r6
  Ogre::DataStreamObject *v9; // r6
  unsigned int v10; // r3
  int v11; // r3
  int v12; // r0
  unsigned int v13; // r3
  int v14; // r3
  Ogre::ObjectDataStream *v15; // r4
  Ogre::LockSection *v16; // [sp+0h] [bp-Ch] BYREF
  char *v17; // [sp+4h] [bp-8h] BYREF
  int v18; // [sp+8h] [bp-4h]

  v16 = (Ogre::LockSection *)this;
  v17 = a2;
  v18 = a3;
  if ( (int)a2 < 0 || (a4 = (unsigned int)*(this + 13), (int)a2 > -1431655765 * ((int)((int)*(this + 14) - a4) >> 3)) )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageFile.cpp",
      (const char *)&dword_124 + 3,
      8,
      a4);
    Ogre::LogMessage((Ogre *)"openFile wrong file_number:%d", a2);
  }
  else
  {
    v6 = a4 + 24 * (_DWORD)a2;
    if ( (*(_DWORD *)(v6 + 20) & 1) == 0 )
    {
      v7 = (_DWORD *)operator new(0x1Cu);
      Ogre::PkgFileStream::PkgFileStream(v7, (int)this, (int)*(this + 11) + *(_DWORD *)(v6 + 8), *(_DWORD *)(v6 + 12));
      return (Ogre::ObjectDataStream *)v7;
    }
    v9 = (Ogre::DataStreamObject *)Ogre::FilePackage::newBufferObject(
                                     (Ogre::FilePackage *)this,
                                     (Ogre::LockSection *)0xAAAAAAAB);
    Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v16, (Ogre::LockSection *)(this + 31));
    if ( Ogre::FilePackage::readFile((FILE **)this, *(this + 26), *(_DWORD *)(v6 + 8), *(_DWORD *)(v6 + 16)) == *(_DWORD *)(v6 + 16) )
    {
      v17 = *(char **)(v6 + 12);
      v12 = (*(int (__fastcall **)(Ogre::DataStreamObject *))(*(_DWORD *)v9 + 12))(v9);
      if ( uncompress(v12, &v17, *(this + 26), *(_DWORD *)(v6 + 16)) == 0 && v17 == *(char **)(v6 + 12) )
      {
        (*(void (__fastcall **)(Ogre::DataStreamObject *))(*(_DWORD *)v9 + 28))(v9);
        Ogre::LockFunctor::~LockFunctor(&v16);
        v15 = (Ogre::ObjectDataStream *)operator new(0x14u);
        Ogre::ObjectDataStream::ObjectDataStream(v15, v9);
        return v15;
      }
      Ogre::LogSetCurParam((Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageFile.cpp", "ker", 8, v13);
      Ogre::LogMessage((Ogre *)"uncompress data error: %d, %d", v17, *(_DWORD *)(v6 + 12), v14, v16, v17, v18);
    }
    else
    {
      Ogre::LogSetCurParam((Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageFile.cpp", "bin/linker", 8, v10);
      Ogre::LogMessage(
        (Ogre *)"read pkgfile error: %d,%d",
        *(const char **)(v6 + 8),
        *(_DWORD *)(v6 + 16),
        v11,
        v16,
        v17,
        v18);
    }
    Ogre::LockFunctor::~LockFunctor(&v16);
    Ogre::FilePackage::freeBufferObject((Ogre::FilePackage *)this, v9);
  }
  return nullptr;
}


//======================================================================
// Ogre::FilePackage::openFile(char const*,bool)
// address: 0x0014A2B0   size: 0xB6 (182 bytes)
//======================================================================
Ogre::ObjectDataStream *__fastcall Ogre::FilePackage::openFile(Ogre::FilePackage *this, char *a2, bool a3)
{
  const char *v4; // r3
  int v5; // r3
  unsigned int v6; // r5
  int v7; // r3
  unsigned int v8; // r0
  char *v9; // r3
  char *v10; // r1
  char *v11; // r2
  char *v12; // r7
  unsigned int v13; // r3
  Ogre::ObjectDataStream *v14; // r5
  unsigned int v16; // [sp+10h] [bp+0h] BYREF
  _BYTE v17[256]; // [sp+14h] [bp+4h] BYREF

  sub_3BF0BC((int)&v16, a2);
  Ogre::StringUtil::trim(&v16, 1, 1);
  Ogre::ValidateFileName((Ogre *)v17, (char *)&dword_100, v16, v4);
  v6 = Ogre::StringUtil::hash((Ogre::StringUtil *)v17, (const char *)&dword_0 + 1, -((int)&dword_0 + 1), v5);
  v8 = Ogre::StringUtil::hash((Ogre::StringUtil *)v17, (const char *)&dword_0 + 2, 0xFFFFFFFF, v7);
  v9 = *((char **)this + 18);
  v10 = (char *)this + 68;
  v11 = (char *)this + 68;
  while ( v9 != nullptr )
  {
    if ( *((_QWORD *)v9 + 2) < __PAIR64__(v6, v8) )
    {
      v12 = *((char **)v9 + 3);
      v9 = v11;
    }
    else
    {
      v12 = *((char **)v9 + 2);
    }
    v11 = v9;
    v9 = v12;
  }
  if ( v11 == v10 )
  {
    v14 = nullptr;
  }
  else
  {
    v13 = *((_DWORD *)v11 + 5);
    if ( v13 > v6 || v13 == v6 && (v13 = *((_DWORD *)v11 + 4)) > v8 )
    {
      v14 = nullptr;
    }
    else
    {
      v14 = nullptr;
      if ( v11 != v10 )
        v14 = Ogre::FilePackage::openFile((void **)this, *((char **)v11 + 6), (int)v11, v13);
    }
  }
  sub_3BDF80(&v16);
  return v14;
}


//======================================================================
// Ogre::FilePackage::open(std::string const&,bool)
// address: 0x0014A524   size: 0x340 (832 bytes)
//======================================================================
int __fastcall Ogre::FilePackage::open(int a1, const char **a2, int a3)
{
  const char *v6; // r1
  FILE *v7; // r0
  unsigned int v8; // r3
  unsigned int v9; // r3
  FILE *v10; // r7
  unsigned int v11; // r3
  const char *v12; // r1
  FILE *v13; // r0
  unsigned int v14; // r3
  int v16; // r2
  Ogre *v17; // r0
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  int v21; // r7
  int v22; // r5
  int v23; // r3
  unsigned __int64 v24; // r2
  int v25; // r6
  int v26; // r0
  int v27; // r1
  int v28; // r0
  _BOOL4 v29; // r7
  unsigned int v30; // [sp+14h] [bp-50h]
  unsigned int v31; // [sp+14h] [bp-50h]
  size_t n; // [sp+18h] [bp-4Ch]
  unsigned int i; // [sp+20h] [bp-44h]
  int v34; // [sp+24h] [bp-40h]
  int v35; // [sp+28h] [bp-3Ch] BYREF
  int v36; // [sp+2Ch] [bp-38h]
  _QWORD v37[2]; // [sp+30h] [bp-34h] BYREF
  _DWORD ptr[8]; // [sp+44h] [bp-20h] BYREF

  *(_BYTE *)(a1 + 17) = a3;
  sub_3BEBBC(a1 + 92);
  if ( a3 != 0 )
    v6 = "rb";
  else
    v6 = "r+b";
  v7 = j_fopen(*a2, v6);
  *(_DWORD *)(a1 + 20) = v7;
  if ( v7 == nullptr )
  {
    if ( a3 != 0 )
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageFile.cpp",
        (const char *)&dword_60 + 1,
        8,
        v8);
      Ogre::LogMessage((Ogre *)"open pkgfile error: %s", *a2);
      return 0;
    }
    v10 = j_fopen(*a2, "wb");
    if ( v10 == nullptr )
      return 0;
    ptr[0] = 1450744508;
    ptr[1] = 100;
    ptr[2] = 0;
    ptr[3] = 28;
    ptr[4] = 0;
    ptr[5] = 28;
    ptr[6] = 0;
    if ( j_fwrite(ptr, 0x1Cu, 1u, v10) != 1 )
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageFile.cpp",
        (const char *)&dword_20,
        8,
        v11);
      Ogre::LogMessage((Ogre *)"write pkgfile error", v12);
      j_fclose(v10);
      return 0;
    }
    j_fclose(v10);
    v13 = j_fopen(*a2, "r+b");
    *(_DWORD *)(a1 + 20) = v13;
    if ( v13 == nullptr )
      return 0;
  }
  if ( j_fread((void *)(a1 + 24), 0x1Cu, 1u, *(FILE **)(a1 + 20)) != 1 )
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageFile.cpp",
      (const char *)&dword_70,
      8,
      v9);
    Ogre::LogMessage((Ogre *)"read pkgfile error: %s", *a2);
    return 0;
  }
  v30 = *(_DWORD *)(a1 + 32);
  j_memset(ptr, 0, 0x18u);
  std::vector<Ogre::PkgFileInfo>::resize((_DWORD *)(a1 + 52), v30, ptr[0], ptr[1], ptr[2], ptr[3], ptr[4], ptr[5]);
  if ( *(int *)(a1 + 32) > 0 )
  {
    j_fseek(*(FILE **)(a1 + 20), *(_DWORD *)(a1 + 36), 0);
    if ( j_fread(*(void **)(a1 + 52), 24 * *(_DWORD *)(a1 + 32), 1u, *(FILE **)(a1 + 20)) != 1 )
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageFile.cpp",
        (const char *)&dword_78 + 2,
        8,
        v14);
      Ogre::LogMessage((Ogre *)"read pkgfile error: %s", *a2);
      return 0;
    }
  }
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  for ( i = 0; ; ++i )
  {
    v16 = *(_DWORD *)(a1 + 52);
    v17 = *(Ogre **)(a1 + 100);
    if ( i >= -1431655765 * ((*(_DWORD *)(a1 + 56) - v16) >> 3) )
      break;
    v18 = (unsigned int *)(v16 + 24 * i);
    v19 = v18[3];
    if ( *(_DWORD *)(a1 + 96) < v19 )
      *(_DWORD *)(a1 + 96) = v19;
    v20 = v18[4];
    if ( (unsigned int)v17 < v20 )
      *(_DWORD *)(a1 + 100) = v20;
    v21 = *(_DWORD *)(a1 + 72);
    v31 = *v18;
    n = v18[1];
    v34 = a1 + 68;
    v22 = a1 + 68;
    while ( v21 != 0 )
    {
      if ( *(_QWORD *)(v21 + 16) < __PAIR64__(v31, n) )
      {
        v23 = *(_DWORD *)(v21 + 12);
        v21 = v22;
      }
      else
      {
        v23 = *(_DWORD *)(v21 + 8);
      }
      v22 = v21;
      v21 = v23;
    }
    if ( v22 == v34 || *(_QWORD *)(v22 + 16) > __PAIR64__(v31, n) )
    {
      v37[0] = __PAIR64__(v31, n);
      LODWORD(v37[1]) = 0;
      if ( v22 == v34 )
      {
        if ( *(_DWORD *)(a1 + 84) != 0 )
        {
          v25 = *(_DWORD *)(a1 + 80);
          if ( *(_QWORD *)(v25 + 16) < __PAIR64__(v31, n) )
            goto LABEL_56;
        }
        v27 = a1 + 64;
      }
      else
      {
        v24 = *(_QWORD *)(v22 + 16);
        if ( v24 <= __PAIR64__(v31, n) )
        {
          if ( __PAIR64__(v31, n) <= v24 )
            goto LABEL_35;
          if ( v22 != *(_DWORD *)(a1 + 80) )
          {
            v28 = sub_391DDC(v22);
            if ( *(_QWORD *)(v28 + 16) <= __PAIR64__(v31, n) )
            {
              std::_Rb_tree<unsigned long long,std::pair<unsigned long long const,unsigned int>,std::_Select1st<std::pair<unsigned long long const,unsigned int>>,std::less<unsigned long long>,std::allocator<std::pair<unsigned long long const,unsigned int>>>::_M_get_insert_unique_pos(
                &v35,
                a1 + 64,
                v37);
              v21 = v35;
              v22 = v36;
            }
            else if ( *(_DWORD *)(v22 + 12) != 0 )
            {
              v22 = v28;
              v21 = v28;
            }
          }
          v25 = v22;
          v22 = v21;
          goto LABEL_54;
        }
        if ( v22 == *(_DWORD *)(a1 + 76) )
          goto LABEL_46;
        v26 = sub_391E44(v22);
        v25 = v26;
        if ( *(_QWORD *)(v26 + 16) < __PAIR64__(v31, n) )
        {
          if ( *(_DWORD *)(v26 + 12) == 0 )
          {
            v22 = *(_DWORD *)(v26 + 12);
            goto LABEL_54;
          }
LABEL_46:
          v25 = v22;
LABEL_54:
          if ( v25 == 0 )
            goto LABEL_35;
          v29 = true;
          if ( v22 == 0 )
LABEL_56:
            v29 = v25 == v34 || *(_QWORD *)(v25 + 16) > __PAIR64__(v31, n);
          v22 = operator new(0x20u);
          if ( v22 != -16 )
            *(_OWORD *)(v22 + 16) = *(_OWORD *)v37;
          sub_391E64(v29, v22, v25, v34);
          ++*(_DWORD *)(a1 + 84);
          goto LABEL_35;
        }
        v27 = a1 + 64;
      }
      std::_Rb_tree<unsigned long long,std::pair<unsigned long long const,unsigned int>,std::_Select1st<std::pair<unsigned long long const,unsigned int>>,std::less<unsigned long long>,std::allocator<std::pair<unsigned long long const,unsigned int>>>::_M_get_insert_unique_pos(
        &v35,
        v27,
        v37);
      v22 = v35;
      v25 = v36;
      goto LABEL_54;
    }
LABEL_35:
    *(_DWORD *)(v22 + 24) = i;
  }
  *(_DWORD *)(a1 + 104) = Ogre::alloc(v17, 0xAAAAAAAB);
  return 1;
}


//======================================================================
// Ogre::FilePackage::appendOrReplaceFile(unsigned int,unsigned int,unsigned int,void const*,unsigned int,unsigned int)
// address: 0x0014A864   size: 0x148 (328 bytes)
//======================================================================
size_t __fastcall Ogre::FilePackage::appendOrReplaceFile(
        Ogre::FilePackage *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void *ptr,
        size_t a6,
        size_t a7)
{
  size_t v8; // r5
  void *v9; // r6
  unsigned int v10; // r3
  const char *v11; // r1
  size_t v12; // r0
  unsigned int v13; // r3
  size_t v14; // r7
  int v15; // r7
  _DWORD *v16; // r3
  int v17; // r6
  int v18; // r2
  _DWORD *v19; // r6
  int v21; // [sp+18h] [bp-34h]
  Ogre::LockSection *v25; // [sp+2Ch] [bp-20h] BYREF
  size_t size[7]; // [sp+30h] [bp-1Ch] BYREF

  v8 = a7;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v25, (Ogre::FilePackage *)((char *)this + 88));
  v21 = *((_DWORD *)this + 11) + *((_DWORD *)this + 12);
  j_fseek(*((FILE **)this + 5), v21, 0);
  if ( (a4 & 1) == 0 || a7 != 0 )
  {
    v14 = j_fwrite(ptr, a6, 1u, *((FILE **)this + 5));
    if ( a7 == 0 )
      v8 = a6;
  }
  else
  {
    size[0] = compressBound(a6);
    v9 = (void *)operator new[](size[0]);
    if ( compress(v9, size, ptr, a6) != 0 )
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageFile.cpp",
        (const char *)&stru_168.st_value + 1,
        8,
        v10);
      Ogre::LogMessage((Ogre *)"compress error", v11);
      goto LABEL_18;
    }
    v12 = j_fwrite(v9, size[0], 1u, *((FILE **)this + 5));
    v8 = size[0];
    v14 = v12;
    if ( v9 != nullptr )
      operator delete[](v9);
  }
  if ( v14 == 1 )
  {
    v15 = *((_DWORD *)this + 14);
    *((_DWORD *)this + 12) += v8;
    v16 = *((_DWORD **)this + 13);
    v17 = 0;
    v18 = -1431655765 * ((v15 - (int)v16) >> 3);
    while ( v17 != v18 )
    {
      if ( *v16 == a2 && v16[1] == a3 )
        goto LABEL_17;
      ++v17;
      v16 += 6;
    }
    j_memset(size, 0, 0x18u);
    std::vector<Ogre::PkgFileInfo>::resize(
      (_DWORD *)this + 13,
      v17 + 1,
      size[0],
      size[1],
      size[2],
      size[3],
      size[4],
      size[5],
      v17 + 1,
      size);
    ++*((_DWORD *)this + 8);
LABEL_17:
    v19 = (_DWORD *)(*((_DWORD *)this + 13) + 24 * v17);
    *v19 = a2;
    v19[4] = v8;
    v8 = 1;
    v19[1] = a3;
    v19[2] = v21;
    v19[3] = a6;
    v19[5] = a4;
  }
  else
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgrePackageFile.cpp",
      (const char *)&stru_178.st_size,
      8,
      v13);
    Ogre::LogMessage((Ogre *)"write pkgfile error: %d, %d", (const char *)v8, a6);
    v8 = 0;
  }
LABEL_18:
  Ogre::LockFunctor::~LockFunctor(&v25);
  return v8;
}


//======================================================================
// Ogre::FilePackage::appendOrReplaceFile(char const*,bool)
// address: 0x0014A9C0   size: 0x9C (156 bytes)
//======================================================================
FILE *__fastcall Ogre::FilePackage::appendOrReplaceFile(Ogre::FilePackage *this, char *filename, unsigned int a3)
{
  FILE *result; // r0
  FILE *v5; // r4
  unsigned int v6; // r7
  void *ptr; // r5
  int v8; // r3
  unsigned int v9; // r4
  int v10; // r3
  unsigned int v11; // r0
  size_t v12; // r4

  result = j_fopen(filename, "rb");
  v5 = result;
  if ( result != nullptr )
  {
    j_fseek(result, 0, 2);
    v6 = j_ftell(v5);
    ptr = (void *)operator new[](v6);
    j_fseek(v5, 0, 0);
    if ( j_fread(ptr, v6, 1u, v5) == 1 )
    {
      j_fclose(v5);
      v9 = Ogre::StringUtil::hash((Ogre::StringUtil *)filename, (_BYTE *)&dword_0 + 1, 0xFFFFFFFF, v8);
      v11 = Ogre::StringUtil::hash((Ogre::StringUtil *)filename, (const char *)&dword_0 + 2, 0xFFFFFFFF, v10);
      v12 = Ogre::FilePackage::appendOrReplaceFile(this, v9, v11, a3, ptr, v6, 0);
      if ( ptr != nullptr )
        operator delete[](ptr);
      return (FILE *)v12;
    }
    else
    {
      j_fclose(v5);
      return nullptr;
    }
  }
  return result;
}

