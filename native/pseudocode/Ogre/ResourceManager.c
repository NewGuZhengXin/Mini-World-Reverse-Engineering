// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ResourceManager

//======================================================================
// Ogre::ResourceManager::ResourceManager(void)
// address: 0x0017DD70   size: 0xF4 (244 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15ResourceManagerC2Ev'
Ogre::ResourceManager *__fastcall Ogre::ResourceManager::ResourceManager(Ogre::ResourceManager *this)
{
  unsigned int v1; // r5
  void *v3; // r0
  int v4; // r3
  pthread_mutex_t *v5; // r6
  int v6; // r5
  int v7; // r2
  int v8; // r3
  void *v9; // r1
  void *v11; // [sp+Ch] [bp-38h]
  char *v12; // [sp+Ch] [bp-38h]
  Ogre::FixedString *v13; // [sp+14h] [bp-30h] BYREF
  size_t v14[3]; // [sp+18h] [bp-2Ch] BYREF
  _DWORD v15[2]; // [sp+24h] [bp-20h] BYREF
  unsigned int v16; // [sp+2Ch] [bp-18h]
  int v17; // [sp+34h] [bp-10h]
  int v18; // [sp+38h] [bp-Ch]

  v1 = 0;
  Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton = (int)this;
  *((_DWORD *)this + 4) = 2048;
  *((_DWORD *)this + 5) = 0;
  v3 = (void *)operator new[](0x2000u);
  v4 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 3) = v3;
  j_memset(v3, 0, 4 * v4);
  Ogre::LockSection::LockSection((pthread_mutex_t *)this + 1);
  Ogre::LockSection::LockSection((pthread_mutex_t *)((char *)this + 28));
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  Ogre::LockSection::LockSection((pthread_mutex_t *)((char *)this + 44));
  *((_DWORD *)this + 13) = 0;
  *((_BYTE *)this + 56) = 0;
  v5 = (pthread_mutex_t *)operator new(0x4Cu);
  Ogre::ResLoadThread::ResLoadThread(v5, this);
  *((_DWORD *)this + 1) = v5;
  Ogre::OSThread::start((Ogre::OSThread *)v5);
  v18 = 12;
  v16 = 4;
  v15[1] = 4;
  v17 = 1;
  v15[0] = 0;
  v11 = (void *)operator new(0x48u);
  Ogre::TextureData::TextureData(v11, v15, 1);
  *(_DWORD *)this = v11;
  v12 = (char *)(*(int (__fastcall **)(void *, _DWORD, _DWORD, _DWORD, size_t *))(*(_DWORD *)v11 + 36))(
                  v11,
                  0,
                  0,
                  0,
                  v14);
  while ( v1 < v16 )
  {
    j_memset(v12, 255, v14[1]);
    ++v1;
    v12 += v14[1];
  }
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)this + 40))(*(_DWORD *)this, 0, 0);
  v6 = *(_DWORD *)this;
  v13 = (Ogre::FixedString *)Ogre::FixedString::insert(
                               (Ogre::FixedString *)"whitetexture",
                               (const char *)0xFFFFFFFF,
                               v7,
                               v8);
  Ogre::FixedString::operator=((int *)(v6 + 8), (int *)&v13);
  Ogre::FixedString::~FixedString(&v13, v9);
  return this;
}


//======================================================================
// Ogre::ResourceManager::~ResourceManager()
// address: 0x0017DE6C   size: 0x8E (142 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15ResourceManagerD2Ev'
void __fastcall Ogre::ResourceManager::~ResourceManager(Ogre::ResourceManager *this)
{
  int v2; // r0
  void *v3; // r0
  void *v4; // r1
  unsigned int i; // r6
  _DWORD *v6; // r0
  int v7; // r7
  int j; // r5
  void *v9; // r1
  int v10; // [sp+4h] [bp-8h]

  Ogre::BaseObject::release(*(_DWORD **)this);
  Ogre::OSThread::shutdown(*((Ogre::OSThread **)this + 1));
  v2 = *((_DWORD *)this + 1);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  Ogre::LockSection::~LockSection((pthread_mutex_t *)((char *)this + 44));
  v3 = *((void **)this + 8);
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::LockSection::~LockSection((pthread_mutex_t *)((char *)this + 28));
  Ogre::LockSection::~LockSection((pthread_mutex_t *)this + 1);
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD **)this + 3);
    if ( i >= *((_DWORD *)this + 4) )
      break;
    v7 = 4 * i;
    for ( j = v6[i]; j != 0; j = v10 )
    {
      v10 = *(_DWORD *)(j + 28);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)(j + 8), v4);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)j, v9);
      operator delete((void *)j);
    }
    *(_DWORD *)(*((_DWORD *)this + 3) + v7) = 0;
  }
  *((_DWORD *)this + 5) = 0;
  if ( v6 != nullptr )
    operator delete[](v6);
  Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton = 0;
}


//======================================================================
// Ogre::ResourceManager::getResourceState(unsigned int)
// address: 0x0017DF00   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::ResourceManager::getResourceState(Ogre::ResourceManager *this, unsigned int a2)
{
  return *(_DWORD *)(a2 + 12);
}


//======================================================================
// Ogre::ResourceManager::clearResource(Ogre::Resource *)
// address: 0x0017DF04   size: 0x62 (98 bytes)
//======================================================================
__int64 __fastcall Ogre::ResourceManager::clearResource(Ogre::ResourceManager *this, Ogre::Resource *a2)
{
  int v2; // r4
  int v4; // r7
  int *v5; // r2
  int v6; // r3
  int v7; // r6
  void *v8; // r1
  int i; // r3
  __int64 v11; // [sp+0h] [bp-Ch]

  LODWORD(v11) = this;
  v2 = *((_DWORD *)a2 + 3);
  v4 = *(_DWORD *)(v2 + 4) % *((_DWORD *)this + 4);
  v5 = (int *)(*((_DWORD *)this + 3) + 4 * v4);
  v6 = *v5;
  HIDWORD(v11) = 4 * v4;
  v7 = *(_DWORD *)(v2 + 28);
  if ( *v5 == v2 )
  {
    *v5 = v7;
  }
  else
  {
    while ( *(_DWORD *)(v6 + 28) != v2 )
      v6 = *(_DWORD *)(v6 + 28);
    *(_DWORD *)(v6 + 28) = v7;
  }
  Ogre::FixedString::~FixedString((Ogre::FixedString **)(v2 + 8), (void *)(4 * v4));
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v2, v8);
  operator delete((void *)v2);
  --*((_DWORD *)this + 5);
  for ( i = 4 * v4; v7 == 0; v7 = *(_DWORD *)(*((_DWORD *)this + 3) + i) )
  {
    ++v4;
    i += 4;
    if ( v4 == *((_DWORD *)this + 4) )
      break;
  }
  return v11;
}


//======================================================================
// Ogre::ResourceManager::writeResourceFile(Ogre::FixedString const&,Ogre::Resource *)
// address: 0x0017DFA0   size: 0x58 (88 bytes)
//======================================================================
int __fastcall Ogre::ResourceManager::writeResourceFile(Ogre::ResourceManager *this, char **a2, Ogre::Resource *a3)
{
  int result; // r0
  int v4; // r4
  Ogre::BaseObject *v5; // [sp+4h] [bp-1Ch] BYREF
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v5 = a3;
  result = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, *a2, 0);
  v4 = result;
  if ( result != 0 )
  {
    v6[1] = result;
    v6[0] = &off_4579C0;
    v6[2] = 0;
    v6[5] = 1;
    v6[3] = 591751049;
    v6[4] = 100;
    Ogre::Archive::serializeRawType<Ogre::ResourceFileHeader>((int)v6);
    Ogre::Archive::operator<<<Ogre::Resource>((Ogre::Archive *)v6, &v5);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    return 1;
  }
  return result;
}


//======================================================================
// Ogre::ResourceManager::readResourceFile(Ogre::FixedString const&,int)
// address: 0x0017E004   size: 0x140 (320 bytes)
//======================================================================
int *__fastcall Ogre::ResourceManager::readResourceFile(Ogre::ResourceManager *this, char **a2, int a3)
{
  int v4; // r0
  int v5; // r6
  const char *v6; // r4
  int *v7; // r4
  int v8; // r0
  int v11; // [sp+8h] [bp-14h] BYREF
  Ogre::BaseObject *v12; // [sp+Ch] [bp-10h] BYREF
  _DWORD v13[3]; // [sp+10h] [bp-Ch] BYREF
  _BYTE v14[16]; // [sp+1Ch] [bp+0h] BYREF

  sub_3BF0BC((int)&v11, *a2);
  v4 = sub_3BD9F0(&v11, 46, -1);
  v5 = v4;
  if ( v4 != -1
    && (v6 = (const char *)(v11 + v4), v11 + v4 != 0)
    && (j_strcasecmp((const char *)(v11 + v4), ".dds") == 0
     || j_strcasecmp(v6, ".png") == 0
     || j_strcasecmp(v6, ".bmp") == 0
     || j_strcasecmp(v6, ".tga") == 0
     || j_strcasecmp(v6, ".jpg") == 0) )
  {
    v7 = (int *)operator new(0x48u);
    Ogre::TextureData::TextureData((Ogre::TextureData *)v7);
    sub_3BED3C(v14, &v11, 0, v5);
    sub_3BEB1C(v13, v14);
    sub_3BE948((int)v13, ".pvr");
    sub_3BDF80(v14);
    if ( Ogre::TextureData::loadFromImageFile(v7, v13, a3) != 0
      || Ogre::TextureData::loadFromImageFile(v7, &v11, a3) != 0 )
    {
      Ogre::FixedString::operator=(v7 + 2, (int *)a2);
    }
    else
    {
      Ogre::BaseObject::release(v7);
      v7 = nullptr;
    }
    sub_3BDF80(v13);
  }
  else
  {
    v8 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, *a2, 1);
    if ( v8 != 0 )
    {
      v12 = nullptr;
      v13[1] = v8;
      v13[2] = 1;
      v13[0] = &off_4579C0;
      Ogre::Archive::serializeRawType<Ogre::ResourceFileHeader>((int)v13);
      Ogre::Archive::operator<<<Ogre::Resource>((Ogre::Archive *)v13, &v12);
      Ogre::FixedString::operator=((int *)v12 + 2, (int *)a2);
      v7 = (int *)v12;
      v13[0] = &off_4579C0;
    }
    else
    {
      v7 = nullptr;
    }
  }
  sub_3BDF80(&v11);
  return v7;
}


//======================================================================
// Ogre::ResourceManager::atomicLoadRecord(Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::Element *)
// address: 0x0017E164   size: 0x58 (88 bytes)
//======================================================================
int __fastcall Ogre::ResourceManager::atomicLoadRecord(_DWORD *a1, int a2, Ogre::LockSection *a3)
{
  int v5; // r5
  unsigned int v6; // r1
  int *ResourceFile; // r0
  int v8; // r6
  Ogre::LockSection *v10[2]; // [sp+4h] [bp+0h] BYREF

  v10[0] = (Ogre::LockSection *)a2;
  v10[1] = a3;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v10, (Ogre::LockSection *)(a1 + 7));
  v5 = 0;
  if ( *(_DWORD *)(a2 + 20) <= 1u )
  {
    *(_DWORD *)(a2 + 20) = 2;
    v5 = 1;
  }
  Ogre::LockFunctor::~LockFunctor(v10);
  if ( v5 != 0 )
  {
    ResourceFile = Ogre::ResourceManager::readResourceFile(
                     (Ogre::ResourceManager *)a1,
                     (char **)(a2 + 8),
                     *(_DWORD *)(a2 + 12));
    *(_DWORD *)(a2 + 16) = ResourceFile;
    if ( ResourceFile != nullptr )
      ResourceFile[3] = a2;
    v8 = a1[12];
    *(_DWORD *)(a2 + 20) = 3;
    *(_DWORD *)(a2 + 24) = v8;
  }
  while ( *(_DWORD *)(a2 + 20) != 3 )
    Ogre::ThreadSleep((Ogre *)&byte_9[1], v6);
  return v5;
}


//======================================================================
// Ogre::ResourceManager::findResourceHandle(Ogre::FixedString const&)
// address: 0x0017E24C   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall Ogre::ResourceManager::findResourceHandle(Ogre::ResourceManager *this, const Ogre::FixedString *a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  Ogre::LockSection *v7; // [sp+4h] [bp-4h] BYREF

  v7 = a2;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v7, (Ogre::ResourceManager *)((char *)this + 24));
  v4 = Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::find((int)this + 8, a2);
  v5 = v4;
  if ( v4 != nullptr )
    v5 = v4 + 2;
  Ogre::LockFunctor::~LockFunctor(&v7);
  return v5;
}


//======================================================================
// Ogre::ResourceManager::atomicInsertRecord(Ogre::FixedString const&,int)
// address: 0x0017E31C   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall Ogre::ResourceManager::atomicInsertRecord(Ogre::ResourceManager *this, Ogre::FixedString **a2, int a3)
{
  _DWORD *v5; // r4
  int *v6; // r0
  int *v7; // r4
  Ogre::LockSection *v10[2]; // [sp+Ch] [bp-8h] BYREF

  v5 = (_DWORD *)((char *)this + 8);
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v10, (Ogre::ResourceManager *)((char *)this + 24));
  v6 = Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::find((int)v5, a2);
  if ( v6 != nullptr )
  {
    v7 = v6;
    v6[6] = *((_DWORD *)this + 12);
  }
  else
  {
    v7 = Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::insert(v5, a2);
    Ogre::FixedString::operator=(v7 + 2, (int *)a2);
    v7[4] = 0;
    v7[5] = 0;
    v7[3] = a3;
    v7[6] = *((_DWORD *)this + 12);
  }
  Ogre::LockFunctor::~LockFunctor(v10);
  return v7;
}


//======================================================================
// Ogre::ResourceManager::blockLoad(Ogre::FixedString const&,int)
// address: 0x0017E376   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::ResourceManager::blockLoad(Ogre::ResourceManager *this, Ogre::FixedString **a2, int a3)
{
  int *inserted; // r4
  Ogre::LockSection *v5; // r2
  int Record; // r0
  int v7; // r4

  inserted = Ogre::ResourceManager::atomicInsertRecord(this, a2, a3);
  Record = Ogre::ResourceManager::atomicLoadRecord(this, (int)inserted, v5);
  v7 = inserted[4];
  if ( Record == 0 && v7 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  return v7;
}


//======================================================================
// Ogre::ResourceManager::hasResource(Ogre::FixedString const&)
// address: 0x0017E39E   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall Ogre::ResourceManager::hasResource(Ogre::ResourceManager *this, Ogre::FixedString **a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)Ogre::ResourceManager::blockLoad(this, a2, 0);
  if ( result != nullptr )
  {
    Ogre::BaseObject::release(result);
    return &dword_0 + 1;
  }
  return result;
}


//======================================================================
// Ogre::ResourceManager::backgroundLoad(Ogre::FixedString const&,Ogre::LoadWrap *,int)
// address: 0x0017E4E8   size: 0x30 (48 bytes)
//======================================================================
int *__fastcall Ogre::ResourceManager::backgroundLoad(
        Ogre::ResourceManager *this,
        const Ogre::FixedString *a2,
        Ogre::LoadWrap *a3,
        int a4)
{
  int *inserted; // r4
  Ogre::LockSection *v7; // [sp+4h] [bp-4h] BYREF

  v7 = a2;
  inserted = Ogre::ResourceManager::atomicInsertRecord(this, (Ogre::FixedString **)a2, a4);
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v7, (Ogre::ResourceManager *)((char *)this + 28));
  if ( inserted[5] == 0 )
    Ogre::ResLoadThread::addRecord(*((_DWORD *)this + 1), (int)inserted);
  Ogre::LockFunctor::~LockFunctor(&v7);
  return inserted;
}

