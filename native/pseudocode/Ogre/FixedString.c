// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FixedString

//======================================================================
// Ogre::FixedString::~FixedString()
// address: 0x0015952E   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11FixedStringD1Ev'
void __fastcall Ogre::FixedString::~FixedString(Ogre::FixedString **this, void *a2)
{
  Ogre::FixedString::release(*this, a2);
}


//======================================================================
// Ogre::FixedString::FixedString(char const*)
// address: 0x00160102   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11FixedStringC1EPKc'
Ogre::FixedString *__fastcall Ogre::FixedString::FixedString(Ogre::FixedString *this, Ogre::FixedString *a2, int a3)
{
  *(_DWORD *)this = Ogre::FixedString::insert(a2, (const char *)0xFFFFFFFF, a3);
  return this;
}


//======================================================================
// Ogre::FixedString::insert(char const*,int)
// address: 0x001675F4   size: 0xD4 (212 bytes)
//======================================================================
unsigned __int8 *__fastcall Ogre::FixedString::insert(Ogre::FixedString *this, const char *a2, int a3, int a4)
{
  const char *v5; // r5
  unsigned int v6; // r4
  unsigned __int8 *i; // r4
  unsigned __int8 *v8; // r7
  _DWORD *v9; // r0
  Ogre::LockSection *v11; // [sp+4h] [bp-10h]
  int v12; // [sp+8h] [bp-Ch]
  unsigned int v13; // [sp+Ch] [bp-8h]

  v5 = a2;
  if ( this == nullptr )
    return nullptr;
  if ( (int)a2 < 0 )
    v5 = (const char *)j_strlen((const char *)this);
  v6 = Ogre::StringUtil::hash(this, (const char *)&dword_0 + 3, (unsigned int)v5, a4) % 0x1433u;
  v11 = (Ogre::LockSection *)dword_476978[0];
  if ( dword_476978[0] != 0 )
    Ogre::LockSection::Lock((pthread_mutex_t *)dword_476978[0]);
  v13 = v6;
  v12 = dword_476978[v6 + 1];
  for ( i = (unsigned __int8 *)v12; i != nullptr; i = (unsigned __int8 *)((i[3] << 24) | (i[1] << 8) | *i | (i[2] << 16)) )
  {
    v8 = i + 8;
    if ( v5 == (const char *)j_strlen((const char *)i + 8)
      && j_strncmp((const char *)this, (const char *)i + 8, (size_t)v5) == 0 )
    {
      ++*((_DWORD *)i + 1);
      goto LABEL_13;
    }
  }
  v9 = j_malloc((size_t)&v5[-((unsigned int)(v5 + 9) & 3) + 13]);
  *v9 = v12;
  v8 = (unsigned __int8 *)(v9 + 2);
  dword_476978[v13 + 1] = (int)v9;
  v9[1] = 1;
  j_memcpy(v9 + 2, this, (size_t)v5);
  v5[(_DWORD)v8] = 0;
LABEL_13:
  if ( v11 != nullptr )
    Ogre::LockSection::Unlock((pthread_mutex_t *)v11);
  return v8;
}


//======================================================================
// Ogre::FixedString::addRef(void *)
// address: 0x001676D8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::FixedString::addRef(int this, void *a2)
{
  int v2; // r5

  v2 = this;
  if ( this != 0 )
  {
    Ogre::LockSection::Lock((pthread_mutex_t *)dword_47BA48);
    ++*(_DWORD *)(v2 - 4);
    return Ogre::LockSection::Unlock((pthread_mutex_t *)dword_47BA48);
  }
  return this;
}


//======================================================================
// Ogre::FixedString::release(void *)
// address: 0x00167700   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::FixedString::release(int this, void *a2)
{
  int v2; // r4
  pthread_mutex_t *v3; // r0

  if ( this != 0 )
  {
    v2 = this - 8;
    Ogre::LockSection::Lock((pthread_mutex_t *)dword_47BA48);
    v3 = (pthread_mutex_t *)dword_47BA48;
    --*(_DWORD *)(v2 + 4);
    return Ogre::LockSection::Unlock(v3);
  }
  return this;
}


//======================================================================
// Ogre::FixedString::sysInit(void)
// address: 0x00167728   size: 0x3A (58 bytes)
//======================================================================
int __fastcall Ogre::FixedString::sysInit(Ogre::FixedString *this)
{
  int i; // r3
  pthread_mutex_t *v2; // r5
  pthread_mutex_t *v3; // r4

  for ( i = 0; i != 20684; i += 4 )
    *(_DWORD *)((char *)&unk_47697C + i) = 0;
  v2 = (pthread_mutex_t *)operator new(4u);
  Ogre::LockSection::LockSection(v2);
  dword_476978[0] = (int)v2;
  v3 = (pthread_mutex_t *)operator new(4u);
  Ogre::LockSection::LockSection(v3);
  dword_47BA48 = (int)v3;
  return 0;
}


//======================================================================
// Ogre::FixedString::sysRelease(void)
// address: 0x00167770   size: 0x64 (100 bytes)
//======================================================================
int __fastcall Ogre::FixedString::sysRelease(Ogre::FixedString *this)
{
  int i; // r4
  unsigned __int8 *j; // r0
  int v3; // r5
  void *v4; // r4
  void *v5; // r4

  for ( i = 0; i != 20684; i += 4 )
  {
    for ( j = *(unsigned __int8 **)((char *)&unk_47697C + i); j != nullptr; j = (unsigned __int8 *)v3 )
    {
      v3 = (j[1] << 8) | *j | (j[2] << 16) | (j[3] << 24);
      j_free(j);
    }
  }
  v4 = (void *)dword_476978[0];
  if ( dword_476978[0] != 0 )
  {
    Ogre::LockSection::~LockSection((pthread_mutex_t *)dword_476978[0]);
    operator delete(v4);
  }
  v5 = (void *)dword_47BA48;
  if ( dword_47BA48 != 0 )
  {
    Ogre::LockSection::~LockSection((pthread_mutex_t *)dword_47BA48);
    operator delete(v5);
  }
  return 0;
}


//======================================================================
// Ogre::FixedString::operator=(Ogre::FixedString const&)
// address: 0x001677E4   size: 0x1A (26 bytes)
//======================================================================
int *__fastcall Ogre::FixedString::operator=(int *a1, int *a2)
{
  void *v4; // r1

  Ogre::FixedString::addRef(*a2, a2);
  Ogre::FixedString::release(*a1, v4);
  *a1 = *a2;
  return a1;
}


//======================================================================
// Ogre::FixedString::operator=(char const*)
// address: 0x001677FE   size: 0x1C (28 bytes)
//======================================================================
int *__fastcall Ogre::FixedString::operator=(int *a1, void *a2)
{
  int v4; // r2
  int v5; // r3

  Ogre::FixedString::release(*a1, a2);
  *a1 = (int)Ogre::FixedString::insert((Ogre::FixedString *)a2, (const char *)0xFFFFFFFF, v4, v5);
  return a1;
}


//======================================================================
// Ogre::FixedString::length(void)const
// address: 0x0016781A   size: 0xE (14 bytes)
//======================================================================
const char *__fastcall Ogre::FixedString::length(const char **this)
{
  const char *result; // r0

  result = *this;
  if ( result != nullptr )
    return (const char *)j_strlen(result);
  return result;
}


//======================================================================
// Ogre::FixedString::substr(unsigned int,unsigned int)const
// address: 0x00167828   size: 0x52 (82 bytes)
//======================================================================
Ogre::FixedString *__fastcall Ogre::FixedString::substr(Ogre::FixedString *this, char **a2, unsigned int a3, int a4)
{
  char *v4; // r1
  int v7; // r2
  int v8; // r3
  Ogre::FixedString *v11; // [sp+8h] [bp-Ch] BYREF
  _BYTE v12[8]; // [sp+Ch] [bp-8h] BYREF

  v4 = *a2;
  if ( v4 != nullptr )
  {
    sub_3BF0BC((int)&v11, v4);
    sub_3BED3C(v12, &v11, a3, a4);
    sub_3BEBBC(&v11);
    sub_3BDF80(v12);
    *(_DWORD *)this = Ogre::FixedString::insert(v11, (const char *)0xFFFFFFFF, v7, v8);
    sub_3BDF80(&v11);
  }
  else
  {
    *(_DWORD *)this = 0;
  }
  return this;
}

