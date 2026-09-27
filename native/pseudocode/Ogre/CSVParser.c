// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CSVParser

//======================================================================
// Ogre::CSVParser::CSVParser(void)
// address: 0x00142C40   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9CSVParserC1Ev'
Ogre::CSVParser *__fastcall Ogre::CSVParser::CSVParser(Ogre::CSVParser *this)
{
  *(_DWORD *)this = &off_455AB8;
  *((_DWORD *)this + 2) = &byte_55FB88;
  Ogre::CSVParser::TableLine::TableLine((Ogre::CSVParser *)((char *)this + 24));
  *((_BYTE *)this + 4) = 44;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = this;
  *((_DWORD *)this + 7) = -1;
  return this;
}


//======================================================================
// Ogre::CSVParser::Clear(void)
// address: 0x00142C80   size: 0x38 (56 bytes)
//======================================================================
void __fastcall Ogre::CSVParser::Clear(Ogre::CSVParser *this)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = 0;
  v2 = *((void **)this + 3);
  if ( v2 != nullptr )
  {
    operator delete[](v2);
    v3 = *((void **)this + 4);
    *((_DWORD *)this + 3) = 0;
    if ( v3 != nullptr )
      operator delete[](v3);
    v4 = *((void **)this + 5);
    *((_DWORD *)this + 4) = 0;
    if ( v4 != nullptr )
      operator delete[](v4);
    *((_DWORD *)this + 5) = 0;
  }
}


//======================================================================
// Ogre::CSVParser::~CSVParser()
// address: 0x00142CB8   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9CSVParserD1Ev'
void __fastcall Ogre::CSVParser::~CSVParser(Ogre::CSVParser *this)
{
  *(_DWORD *)this = &off_455AB8;
  Ogre::CSVParser::Clear(this);
  sub_3BDF80((char *)this + 8);
}


//======================================================================
// Ogre::CSVParser::~CSVParser()
// address: 0x00142CDC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::CSVParser::~CSVParser(Ogre::CSVParser *this)
{
  Ogre::CSVParser::~CSVParser(this);
  operator delete(this);
}


//======================================================================
// Ogre::CSVParser::ParseTextTable(void)
// address: 0x00142CEE   size: 0x11E (286 bytes)
//======================================================================
int __fastcall Ogre::CSVParser::ParseTextTable(Ogre::CSVParser *this)
{
  unsigned __int8 *v1; // r4
  int v2; // r2
  unsigned __int8 *v3; // r3
  unsigned __int8 *v4; // r1
  int v5; // r7
  int v6; // r5
  int v7; // r5
  int v8; // r2
  int v9; // r2
  int v11; // [sp+4h] [bp-10h]
  int v12; // [sp+8h] [bp-Ch]

  v1 = *((unsigned __int8 **)this + 3);
  v2 = 0;
  v3 = v1;
  v4 = v1;
  v5 = 0;
  v11 = 0;
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 == 0 )
      break;
    if ( v11 != 0 )
    {
      if ( v6 == 34 )
      {
        v6 = v4[1];
        v11 = 0;
        if ( v6 != 34 )
          goto LABEL_36;
        ++v4;
        if ( *((_DWORD *)this + 4) != 0 )
        {
LABEL_31:
          if ( v4 != v3 )
            *v3 = v6;
          ++v3;
        }
        v11 = 1;
        goto LABEL_36;
      }
      if ( *((_DWORD *)this + 4) != 0 )
        goto LABEL_31;
LABEL_35:
      v11 = 1;
      goto LABEL_36;
    }
    if ( v6 == 34 )
      goto LABEL_35;
    v12 = *((_DWORD *)this + 4);
    if ( *((unsigned __int8 *)this + 4) == v6 )
    {
      if ( v12 != 0 )
      {
        *v3 = 0;
        *(_DWORD *)(4 * (*((_DWORD *)this + 9) * v5 + v2) + *((_DWORD *)this + 4)) = v1;
      }
      ++v2;
      v1 = v4 + 1;
      v3 = v4 + 1;
      if ( *((_DWORD *)this + 4) == 0 && *((_DWORD *)this + 9) < v2 )
        *((_DWORD *)this + 9) = v2;
    }
    else if ( v6 == 10 || v6 == 13 )
    {
      v7 = v4[1];
      if ( v7 == 10 || v7 == 13 )
        ++v4;
      if ( v12 != 0 )
      {
        *v3 = 0;
        *(_DWORD *)(4 * (*((_DWORD *)this + 9) * v5 + v2) + *((_DWORD *)this + 4)) = v1;
      }
      if ( *((_DWORD *)this + 4) == 0 )
      {
        v8 = v2 + 1;
        if ( *((_DWORD *)this + 9) < v8 )
          *((_DWORD *)this + 9) = v8;
      }
      v1 = v4 + 1;
      ++v5;
      v3 = v4 + 1;
      v2 = 0;
    }
    else if ( v12 != 0 )
    {
      if ( v4 != v3 )
        *v3 = v6;
      ++v3;
    }
LABEL_36:
    ++v4;
  }
  if ( v1 != v4 )
  {
    if ( *((_DWORD *)this + 4) != 0 )
    {
      *v3 = v6;
      *(_DWORD *)(4 * (*((_DWORD *)this + 9) * v5 + v2) + *((_DWORD *)this + 4)) = v1;
    }
    if ( *((_DWORD *)this + 4) == 0 )
    {
      v9 = v2 + 1;
      if ( *((_DWORD *)this + 9) < v9 )
        *((_DWORD *)this + 9) = v9;
    }
    ++v5;
  }
  *((_DWORD *)this + 8) = v5;
  return 1;
}


//======================================================================
// Ogre::CSVParser::Load(std::string const&)
// address: 0x00142E0C   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall Ogre::CSVParser::Load(Ogre::CSVParser *a1, const char **a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r6
  int v7; // r0
  unsigned int v8; // r0
  unsigned int v9; // r0
  void *v10; // r0
  int v11; // r1
  int v12; // r3
  unsigned int v13; // r6
  unsigned int v14; // r0
  unsigned int v15; // r6
  Ogre::CSVParser::TableLine *v16; // r7
  Ogre::CSVParser *v17; // r3
  Ogre::CSVParser **v18; // r2
  Ogre::CSVParser::TableLine *v20; // [sp+4h] [bp-8h]

  Ogre::CSVParser::Clear(a1);
  v4 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, *a2, true);
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 48))(v4);
    v7 = operator new[](v6 + 1);
    *((_DWORD *)a1 + 3) = v7;
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 8))(v5, v7, v6);
    *(_BYTE *)(*((_DWORD *)a1 + 3) + v6) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
    v5 = Ogre::CSVParser::ParseTextTable(a1);
    if ( v5 != 0 )
    {
      v8 = *((_DWORD *)a1 + 9) * *((_DWORD *)a1 + 8);
      if ( v8 > 0x1FC00000 )
        v9 = -1;
      else
        v9 = 4 * v8;
      v10 = (void *)operator new[](v9);
      v11 = *((_DWORD *)a1 + 9);
      v12 = *((_DWORD *)a1 + 8);
      *((_DWORD *)a1 + 4) = v10;
      j_memset(v10, 0, 4 * v11 * v12);
      v13 = *((_DWORD *)a1 + 8);
      v14 = 8 * v13;
      if ( v13 > 0xFE00000 )
        v14 = -1;
      v15 = v13 - 1;
      v20 = (Ogre::CSVParser::TableLine *)operator new[](v14);
      v16 = v20;
      while ( v15 != -1 )
      {
        Ogre::CSVParser::TableLine::TableLine(v16);
        v16 = (Ogre::CSVParser::TableLine *)((char *)v16 + 8);
        --v15;
      }
      v17 = nullptr;
      *((_DWORD *)a1 + 5) = v20;
      while ( (int)v17 < *((_DWORD *)a1 + 8) )
      {
        v18 = (Ogre::CSVParser **)(*((_DWORD *)a1 + 5) + 8 * (_DWORD)v17);
        v18[1] = v17;
        *v18 = a1;
        v17 = (Ogre::CSVParser *)((char *)v17 + 1);
      }
      Ogre::CSVParser::ParseTextTable(a1);
    }
    else
    {
      Ogre::CSVParser::Clear(a1);
    }
  }
  return v5;
}


//======================================================================
// Ogre::CSVParser::FindPosByString(char const*,int &,int &)
// address: 0x00142EE8   size: 0x58 (88 bytes)
//======================================================================
int __fastcall Ogre::CSVParser::FindPosByString(Ogre::CSVParser *this, const char *a2, int *a3, int *a4)
{
  int i; // r5
  int v6; // r7
  int j; // r4
  const char *v8; // r0
  int v10; // [sp+4h] [bp-18h]

  v10 = *((_DWORD *)this + 8);
  for ( i = 0; i < v10; ++i )
  {
    v6 = *((_DWORD *)this + 9);
    for ( j = 0; j < v6; ++j )
    {
      v8 = *(const char **)(4 * (j + v6 * i) + *((_DWORD *)this + 4));
      if ( v8 != nullptr && j_strcmp(v8, a2) == 0 )
      {
        *a3 = i;
        *a4 = j;
        return 1;
      }
    }
  }
  return 0;
}


//======================================================================
// Ogre::CSVParser::FindLineByString(char const*)
// address: 0x00142F40   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::CSVParser::FindLineByString(Ogre::CSVParser *this, const char *a2, int a3)
{
  Ogre::CSVParser *v4; // [sp+0h] [bp-Ch] BYREF
  int v5[2]; // [sp+4h] [bp-8h] BYREF

  v4 = this;
  v5[0] = (int)a2;
  v5[1] = a3;
  if ( Ogre::CSVParser::FindPosByString(this, a2, (int *)&v4, v5) != 0 )
    return (int)v4;
  else
    return -1;
}


//======================================================================
// Ogre::CSVParser::FindColByString(char const*)
// address: 0x00142F58   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::CSVParser::FindColByString(Ogre::CSVParser *this, const char *a2, int a3)
{
  Ogre::CSVParser *v4; // [sp+0h] [bp-Ch] BYREF
  int v5[2]; // [sp+4h] [bp-8h] BYREF

  v4 = this;
  v5[0] = (int)a2;
  v5[1] = a3;
  if ( Ogre::CSVParser::FindPosByString(this, a2, (int *)&v4, v5) != 0 )
    return v5[0];
  else
    return -1;
}


//======================================================================
// Ogre::CSVParser::operator[](char const*)const
// address: 0x00142F70   size: 0x3A (58 bytes)
//======================================================================
_DWORD *__fastcall Ogre::CSVParser::operator[](_DWORD *a1, char *a2)
{
  int v2; // r6
  int i; // r5

  v2 = a1[8];
  for ( i = 0; i < v2; ++i )
  {
    if ( j_strcmp(*(const char **)(4 * (a1[9] * i + a1[11]) + a1[4]), a2) == 0 )
      return (_DWORD *)(a1[5] + 8 * i);
  }
  return a1 + 6;
}


//======================================================================
// Ogre::CSVParser::HasColumn(char const*)const
// address: 0x00142FAA   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::CSVParser::HasColumn(Ogre::CSVParser *this, const char *a2)
{
  int v2; // r6
  int i; // r4

  v2 = *((_DWORD *)this + 9);
  for ( i = 0; ; ++i )
  {
    if ( i >= v2 )
      return 0;
    if ( j_strcmp(*(const char **)(4 * (*((_DWORD *)this + 10) * v2 + i) + *((_DWORD *)this + 4)), a2) == 0 )
      break;
  }
  return 1;
}


//======================================================================
// Ogre::CSVParser::GetString(int,char const*)const
// address: 0x00142FDC   size: 0x52 (82 bytes)
//======================================================================
void *__fastcall Ogre::CSVParser::GetString(Ogre::CSVParser *this, int a2, const char *a3)
{
  int v5; // r5
  int i; // r4
  void *result; // r0
  int v8; // [sp+0h] [bp-Ch]

  if ( a2 < 0 )
    return &unk_472510;
  v5 = *((_DWORD *)this + 9);
  for ( i = 0; ; ++i )
  {
    if ( i >= v5 )
      return &unk_472510;
    v8 = *((_DWORD *)this + 4);
    if ( j_strcmp(*(const char **)(4 * (*((_DWORD *)this + 10) * v5 + i) + v8), a3) == 0 )
      break;
  }
  result = *(void **)(4 * (v5 * a2 + i) + v8);
  if ( result == nullptr )
    return &unk_472510;
  return result;
}


//======================================================================
// Ogre::CSVParser::GetString(char const*,char const*)const
// address: 0x0014303C   size: 0x1E (30 bytes)
//======================================================================
char *__fastcall Ogre::CSVParser::GetString(Ogre::CSVParser *this, char *a2, const char *a3)
{
  Ogre::CSVParser **v4; // r0
  const char *String; // r0
  char *v7; // [sp+4h] [bp-4h] BYREF

  v7 = a2;
  v4 = (Ogre::CSVParser **)Ogre::CSVParser::operator[](this, a2);
  String = (const char *)Ogre::CSVParser::GetString(*v4, (int)v4[1], a3);
  Ogre::CSVParser::TableItem::TableItem(&v7, String);
  return v7;
}


//======================================================================
// Ogre::CSVParser::GetString(int,int)const
// address: 0x0014305C   size: 0x2E (46 bytes)
//======================================================================
void *__fastcall Ogre::CSVParser::GetString(Ogre::CSVParser *this, int a2, int a3)
{
  int v3; // r3
  void *result; // r0

  if ( a2 < 0 )
    return nullptr;
  if ( a2 >= *((_DWORD *)this + 8) )
    return nullptr;
  if ( a3 < 0 )
    return nullptr;
  v3 = *((_DWORD *)this + 9);
  if ( a3 >= v3 )
    return nullptr;
  result = *(void **)(4 * (a2 * v3 + a3) + *((_DWORD *)this + 4));
  if ( result == nullptr )
    return &unk_3FB8EA;
  return result;
}


//======================================================================
// Ogre::CSVParser::Char(unsigned int,unsigned int,char &)const
// address: 0x00143090   size: 0x1E (30 bytes)
//======================================================================
const char *__fastcall Ogre::CSVParser::Char(Ogre::CSVParser *this, unsigned int a2, unsigned int a3, char *a4)
{
  const char *result; // r0

  result = *(const char **)(4 * (a2 * *((_DWORD *)this + 9) + a3) + *((_DWORD *)this + 4));
  if ( result != nullptr )
  {
    *a4 = j_atoi(result);
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// Ogre::CSVParser::Byte(unsigned int,unsigned int,unsigned char &)const
// address: 0x001430AE   size: 0x1E (30 bytes)
//======================================================================
const char *__fastcall Ogre::CSVParser::Byte(
        Ogre::CSVParser *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  const char *result; // r0

  result = *(const char **)(4 * (a2 * *((_DWORD *)this + 9) + a3) + *((_DWORD *)this + 4));
  if ( result != nullptr )
  {
    *a4 = j_atoi(result);
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// Ogre::CSVParser::Short(unsigned int,unsigned int,short &)const
// address: 0x001430CC   size: 0x1E (30 bytes)
//======================================================================
const char *__fastcall Ogre::CSVParser::Short(Ogre::CSVParser *this, unsigned int a2, unsigned int a3, __int16 *a4)
{
  const char *result; // r0

  result = *(const char **)(4 * (a2 * *((_DWORD *)this + 9) + a3) + *((_DWORD *)this + 4));
  if ( result != nullptr )
  {
    *a4 = j_atoi(result);
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// Ogre::CSVParser::Word(unsigned int,unsigned int,unsigned short &)const
// address: 0x001430EA   size: 0x1E (30 bytes)
//======================================================================
const char *__fastcall Ogre::CSVParser::Word(
        Ogre::CSVParser *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4)
{
  const char *result; // r0

  result = *(const char **)(4 * (a2 * *((_DWORD *)this + 9) + a3) + *((_DWORD *)this + 4));
  if ( result != nullptr )
  {
    *a4 = j_atoi(result);
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// Ogre::CSVParser::Int(unsigned int,unsigned int,int &)const
// address: 0x00143108   size: 0x1E (30 bytes)
//======================================================================
const char *__fastcall Ogre::CSVParser::Int(Ogre::CSVParser *this, unsigned int a2, unsigned int a3, int *a4)
{
  const char *result; // r0

  result = *(const char **)(4 * (a2 * *((_DWORD *)this + 9) + a3) + *((_DWORD *)this + 4));
  if ( result != nullptr )
  {
    *a4 = j_atoi(result);
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// Ogre::CSVParser::UInt(unsigned int,unsigned int,unsigned int &)const
// address: 0x00143126   size: 0x1E (30 bytes)
//======================================================================
const char *__fastcall Ogre::CSVParser::UInt(Ogre::CSVParser *this, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  const char *result; // r0

  result = *(const char **)(4 * (a2 * *((_DWORD *)this + 9) + a3) + *((_DWORD *)this + 4));
  if ( result != nullptr )
  {
    *a4 = j_atoi(result);
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// Ogre::CSVParser::Long(unsigned int,unsigned int,long &)const
// address: 0x00143144   size: 0x1E (30 bytes)
//======================================================================
const char *__fastcall Ogre::CSVParser::Long(Ogre::CSVParser *this, unsigned int a2, unsigned int a3, int *a4)
{
  const char *result; // r0

  result = *(const char **)(4 * (a2 * *((_DWORD *)this + 9) + a3) + *((_DWORD *)this + 4));
  if ( result != nullptr )
  {
    *a4 = j_atol(result);
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// Ogre::CSVParser::DWord(unsigned int,unsigned int,unsigned long &)const
// address: 0x00143162   size: 0x1E (30 bytes)
//======================================================================
const char *__fastcall Ogre::CSVParser::DWord(
        Ogre::CSVParser *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4)
{
  const char *result; // r0

  result = *(const char **)(4 * (a2 * *((_DWORD *)this + 9) + a3) + *((_DWORD *)this + 4));
  if ( result != nullptr )
  {
    *a4 = j_atol(result);
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// Ogre::CSVParser::Float(unsigned int,unsigned int,float &)const
// address: 0x00143180   size: 0x24 (36 bytes)
//======================================================================
const char *__fastcall Ogre::CSVParser::Float(Ogre::CSVParser *this, unsigned int a2, unsigned int a3, float *a4)
{
  const char *result; // r0
  float v6; // r0

  result = *(const char **)(4 * (a2 * *((_DWORD *)this + 9) + a3) + *((_DWORD *)this + 4));
  if ( result != nullptr )
  {
    v6 = j_strtod(result, nullptr);
    *a4 = v6;
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// Ogre::CSVParser::Double(unsigned int,unsigned int,double &)const
// address: 0x001431A4   size: 0x22 (34 bytes)
//======================================================================
const char *__fastcall Ogre::CSVParser::Double(Ogre::CSVParser *this, unsigned int a2, unsigned int a3, double *a4)
{
  const char *result; // r0

  result = *(const char **)(4 * (a2 * *((_DWORD *)this + 9) + a3) + *((_DWORD *)this + 4));
  if ( result != nullptr )
  {
    *a4 = j_strtod(result, nullptr);
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}

