// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DataStream

//======================================================================
// Ogre::DataStream::size(void)const
// address: 0x00149B8E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::DataStream::size(Ogre::DataStream *this)
{
  return *((_DWORD *)this + 2);
}


//======================================================================
// Ogre::DataStream::~DataStream()
// address: 0x00149C00   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10DataStreamD1Ev'
void __fastcall Ogre::DataStream::~DataStream(Ogre::DataStream *this)
{
  *(_DWORD *)this = &off_457450;
  sub_3BDF80((char *)this + 4);
}


//======================================================================
// Ogre::DataStream::~DataStream()
// address: 0x00149C5C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DataStream::~DataStream(Ogre::DataStream *this)
{
  Ogre::DataStream::~DataStream(this);
  operator delete(this);
}


//======================================================================
// Ogre::DataStream::getLine(bool)
// address: 0x00170530   size: 0xB4 (180 bytes)
//======================================================================
Ogre::DataStream *__fastcall Ogre::DataStream::getLine(Ogre::DataStream *this, int a2, int a3)
{
  char *v5; // r0
  char *v6; // r7
  int v7; // r5
  int v9; // [sp+4h] [bp-98h]
  char v11[128]; // [sp+14h] [bp-88h] BYREF

  *(_DWORD *)this = &byte_55FB88;
  while ( 1 )
  {
    v9 = (*(int (__fastcall **)(int, char *, int))(*(_DWORD *)a2 + 8))(a2, v11, 127);
    if ( v9 == 0 )
      break;
    v11[v9] = 0;
    v5 = j_strchr(v11, 10);
    v6 = v5;
    if ( v5 != nullptr )
    {
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 32))(a2, v5 + 1 - v11 - v9);
      *v6 = 0;
    }
    sub_3BE96C((int)this, v11);
    if ( v6 != nullptr )
    {
      v7 = *(_DWORD *)(*(_DWORD *)this - 12);
      if ( v7 != 0 )
      {
        sub_3BE0DC(this);
        if ( *(_BYTE *)(*(_DWORD *)this + v7 - 1) == 13 )
          sub_3BE210(this, *(_DWORD *)(*(_DWORD *)this - 12) - 1, 1);
      }
      break;
    }
  }
  if ( a3 != 0 )
    Ogre::StringUtil::trim(this, 1, 1);
  return this;
}


//======================================================================
// Ogre::DataStream::skipLine(std::string const&)
// address: 0x001705EC   size: 0x6A (106 bytes)
//======================================================================
int __fastcall Ogre::DataStream::skipLine(int a1, const char **a2)
{
  int i; // r4
  int v5; // r0
  size_t v6; // r5
  size_t v7; // r0
  size_t v9; // [sp+0h] [bp-94h]
  char v10[128]; // [sp+Ch] [bp-88h] BYREF

  for ( i = 0; ; i += v6 )
  {
    v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v6 = v5;
    if ( v5 == 0 )
      break;
    v10[v5] = 0;
    v7 = j_strcspn(v10, *a2);
    v9 = v7;
    if ( v7 < v6 )
    {
      (*(void (__fastcall **)(int, size_t))(*(_DWORD *)a1 + 32))(a1, v7 + 1 - v6);
      i += v9 + 1;
      return i;
    }
  }
  return i;
}


//======================================================================
// Ogre::DataStream::readLine(char *,unsigned int,std::string const&)
// address: 0x001707D4   size: 0xBA (186 bytes)
//======================================================================
int __fastcall Ogre::DataStream::readLine(int a1, int a2, unsigned int a3, const char **a4)
{
  int v5; // r0
  int v6; // r2
  int v7; // r4
  int v8; // r0
  unsigned int v9; // r5
  size_t v10; // r0
  size_t v11; // r6
  int v16; // [sp+10h] [bp-94h]
  char v17[128]; // [sp+1Ch] [bp-88h] BYREF

  v5 = sub_3BD958(a4, 10, 0);
  v6 = a3;
  v16 = v5;
  if ( a3 > 0x7F )
    v6 = 127;
  v7 = 0;
LABEL_4:
  if ( v6 != 0 )
  {
    while ( 1 )
    {
      v8 = (*(int (__fastcall **)(int, char *))(*(_DWORD *)a1 + 8))(a1, v17);
      v9 = v8;
      if ( v8 == 0 )
        break;
      v17[v8] = 0;
      v10 = j_strcspn(v17, *a4);
      v11 = v10;
      if ( v10 < v9 )
        (*(void (__fastcall **)(int, size_t))(*(_DWORD *)a1 + 32))(a1, v10 - v9 + 1);
      if ( a2 != 0 )
        j_memcpy((void *)(a2 + v7), v17, v11);
      v7 += v11;
      if ( v11 < v9 )
      {
        if ( v16 != -1 && v7 != 0 && *(_BYTE *)(a2 + v7 - 1) == 13 )
          --v7;
        break;
      }
      v6 = a3 - v7;
      if ( a3 - v7 <= 0x7F )
        goto LABEL_4;
    }
  }
  *(_BYTE *)(a2 + v7) = 0;
  return v7;
}


//======================================================================
// Ogre::DataStream::getAsString(void)
// address: 0x00170894   size: 0x4E (78 bytes)
//======================================================================
Ogre::DataStream *__fastcall Ogre::DataStream::getAsString(Ogre::DataStream *this, _DWORD *a2)
{
  _BYTE *v4; // r5

  v4 = (_BYTE *)operator new[](a2[2] + 1);
  (*(void (__fastcall **)(_DWORD *, _DWORD))(*a2 + 36))(a2, 0);
  (*(void (__fastcall **)(_DWORD *, _BYTE *, _DWORD))(*a2 + 8))(a2, v4, a2[2]);
  v4[a2[2]] = 0;
  *(_DWORD *)this = &byte_55FB88;
  sub_3BE520(this, 0, v4, a2[2]);
  if ( v4 != nullptr )
    operator delete[](v4);
  return this;
}


//======================================================================
// Ogre::DataStream::DataStream(std::string const&)
// address: 0x00170B64   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10DataStreamC1ERKSs'
_DWORD *__fastcall Ogre::DataStream::DataStream(_DWORD *a1, int a2)
{
  *a1 = &off_457450;
  sub_3BEB1C(a1 + 1, a2);
  a1[2] = 0;
  return a1;
}

