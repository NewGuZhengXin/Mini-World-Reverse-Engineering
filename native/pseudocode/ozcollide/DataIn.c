// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::DataIn

//======================================================================
// ozcollide::DataIn::~DataIn()
// address: 0x001D8310   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide6DataInD2Ev'
void __fastcall ozcollide::DataIn::~DataIn(ozcollide::DataIn *this)
{
  *(_DWORD *)this = &off_459760;
}


//======================================================================
// ozcollide::DataIn::~DataIn()
// address: 0x001D8330   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ozcollide::DataIn::~DataIn(ozcollide::DataIn *this)
{
  ozcollide::DataIn::~DataIn(this);
  operator delete(this);
}


//======================================================================
// ozcollide::DataIn::DataIn(void)
// address: 0x001D8354   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide6DataInC2Ev'
_DWORD *__fastcall ozcollide::DataIn::DataIn(_DWORD *this)
{
  *this = &off_459760;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  return this;
}


//======================================================================
// ozcollide::DataIn::open(char const*)
// address: 0x001D8370   size: 0x24 (36 bytes)
//======================================================================
FILE *__fastcall ozcollide::DataIn::open(ozcollide::DataIn *this, const char *a2)
{
  char *v3; // r0
  FILE *result; // r0

  *((_DWORD *)this + 1) = 0;
  v3 = j_strdup(a2);
  *((_DWORD *)this + 6) = v3;
  result = j_fopen(v3, "rb");
  *((_DWORD *)this + 2) = result;
  if ( result != nullptr )
  {
    *((_DWORD *)this + 5) = 0;
    return (FILE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// ozcollide::DataIn::open(void *,int)
// address: 0x001D8398   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall ozcollide::DataIn::open(_DWORD *this, void *a2, int a3)
{
  *(this + 1) = 1;
  *(this + 3) = a2;
  *(this + 4) = a3;
  return this;
}


//======================================================================
// ozcollide::DataIn::getSourceType(void)const
// address: 0x001D83A2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ozcollide::DataIn::getSourceType(ozcollide::DataIn *this)
{
  return *((_DWORD *)this + 1);
}


//======================================================================
// ozcollide::DataIn::close(void)
// address: 0x001D83A6   size: 0x22 (34 bytes)
//======================================================================
int __fastcall ozcollide::DataIn::close(ozcollide::DataIn *this)
{
  int v1; // r5
  FILE *v3; // r0

  v1 = *((_DWORD *)this + 1);
  if ( v1 != 0 || (v3 = *((FILE **)this + 2)) == nullptr || j_fclose(v3) == 0 )
  {
    *((_DWORD *)this + 2) = 0;
    return 1;
  }
  return v1;
}


//======================================================================
// ozcollide::DataIn::isOpen(void)const
// address: 0x001D83C8   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall ozcollide::DataIn::isOpen(ozcollide::DataIn *this)
{
  int v1; // r3

  v1 = 1;
  if ( *((_DWORD *)this + 1) == 0 )
    return *((_DWORD *)this + 2) != 0;
  return v1;
}


//======================================================================
// ozcollide::DataIn::error(void)const
// address: 0x001D83DC   size: 0x16 (22 bytes)
//======================================================================
unsigned int __fastcall ozcollide::DataIn::error(ozcollide::DataIn *this)
{
  int v2; // r2
  unsigned int result; // r0

  v2 = *((_DWORD *)this + 1);
  result = 0;
  if ( v2 == 0 )
    return (unsigned int)(*(unsigned __int16 *)(*((_DWORD *)this + 2) + 12) << 25) >> 31;
  return result;
}


//======================================================================
// ozcollide::DataIn::getFileName(void)const
// address: 0x001D83F2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ozcollide::DataIn::getFileName(ozcollide::DataIn *this)
{
  return *((_DWORD *)this + 6);
}


//======================================================================
// ozcollide::DataIn::advance(int)
// address: 0x001D83F6   size: 0x20 (32 bytes)
//======================================================================
bool __fastcall ozcollide::DataIn::advance(FILE **this, int a2)
{
  if ( *(this + 1) == nullptr )
    return j_fseek(*(this + 2), a2, 1) != 0;
  *(this + 5) = (FILE *)((char *)*(this + 5) + a2);
  return true;
}


//======================================================================
// ozcollide::DataIn::seek(int)
// address: 0x001D8416   size: 0x2A (42 bytes)
//======================================================================
bool __fastcall ozcollide::DataIn::seek(FILE **this, FILE *a2)
{
  _BOOL4 result; // r0
  int v4; // r2

  if ( *(this + 1) == nullptr )
    return j_fseek(*(this + 2), (int)a2, 0) == 0;
  v4 = (int)*(this + 5);
  result = false;
  if ( v4 >= 0 && v4 <= (int)*(this + 4) )
  {
    *(this + 5) = a2;
    return true;
  }
  return result;
}


//======================================================================
// ozcollide::DataIn::tell(void)const
// address: 0x001D8440   size: 0x14 (20 bytes)
//======================================================================
int __fastcall ozcollide::DataIn::tell(ozcollide::DataIn *this)
{
  if ( *((_DWORD *)this + 1) != 0 )
    return *((_DWORD *)this + 5);
  else
    return j_ftell(*((FILE **)this + 2));
}


//======================================================================
// ozcollide::DataIn::getSize(void)const
// address: 0x001D8454   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ozcollide::DataIn::getSize(ozcollide::DataIn *this)
{
  int v2; // r7
  int v3; // r6

  if ( *((_DWORD *)this + 1) != 0 )
    return *((_DWORD *)this + 4);
  v2 = j_ftell(*((FILE **)this + 2));
  j_fseek(*((FILE **)this + 2), 0, 2);
  v3 = j_ftell(*((FILE **)this + 2));
  j_fseek(*((FILE **)this + 2), v2, 0);
  return v3;
}


//======================================================================
// ozcollide::DataIn::eof(void)const
// address: 0x001D848A   size: 0x26 (38 bytes)
//======================================================================
unsigned int __fastcall ozcollide::DataIn::eof(ozcollide::DataIn *this)
{
  int v2; // r4
  int Size; // r0

  if ( *((_DWORD *)this + 1) == 0 )
    return (unsigned int)(*(unsigned __int16 *)(*((_DWORD *)this + 2) + 12) << 26) >> 31;
  v2 = *((_DWORD *)this + 5);
  Size = ozcollide::DataIn::getSize(this);
  return (unsigned __int8)((Size < 0) + (v2 >= (unsigned int)Size) + (v2 >> 31));
}


//======================================================================
// ozcollide::DataIn::read(void *,int)
// address: 0x001D84B0   size: 0x42 (66 bytes)
//======================================================================
size_t __fastcall ozcollide::DataIn::read(FILE **this, void *a2, size_t a3)
{
  int v4; // r3
  int v5; // r6
  signed int v6; // r3
  size_t v7; // r5

  if ( *(this + 1) == nullptr )
    return j_fread(a2, 1u, a3, *(this + 2));
  v5 = (int)*(this + 5);
  v6 = (signed int)*(this + 4);
  v7 = v6 - v5;
  if ( (int)(v5 + a3) <= v6 )
    v7 = a3;
  v4 = 0;
  if ( v7 != 0 )
  {
    j_memcpy(a2, (char *)*(this + 3) + v5, v7);
    *(this + 5) = (FILE *)((char *)*(this + 5) + v7);
    return v7;
  }
  return v4;
}


//======================================================================
// ozcollide::DataIn::readByte(void)
// address: 0x001D84F2   size: 0x16 (22 bytes)
//======================================================================
int __fastcall ozcollide::DataIn::readByte(FILE **this)
{
  unsigned __int8 v2; // [sp+7h] [bp-1h] BYREF

  v2 = 0;
  ozcollide::DataIn::read(this, &v2, 1u);
  return v2;
}


//======================================================================
// ozcollide::DataIn::readStrZ(char *)
// address: 0x001D8508   size: 0x30 (48 bytes)
//======================================================================
int __fastcall ozcollide::DataIn::readStrZ(ozcollide::DataIn *this, char *a2)
{
  int v4; // r4
  int Byte; // r0

  v4 = 0;
  do
  {
    if ( ozcollide::DataIn::eof(this) != 0 )
      break;
    if ( (*(_WORD *)(*((_DWORD *)this + 2) + 12) & 0x40) != 0 )
      break;
    Byte = ozcollide::DataIn::readByte((FILE **)this);
    a2[v4++] = Byte;
  }
  while ( Byte != 0 );
  return v4;
}


//======================================================================
// ozcollide::DataIn::readWord(void)
// address: 0x001D8538   size: 0x20 (32 bytes)
//======================================================================
int __fastcall ozcollide::DataIn::readWord(FILE **this)
{
  unsigned __int16 v2; // [sp+6h] [bp-2h] BYREF

  v2 = 0;
  ozcollide::DataIn::read(this, &v2, 2u);
  return (__int16)((v2 << 8) | HIBYTE(v2));
}


//======================================================================
// ozcollide::DataIn::readDword(void)
// address: 0x001D8558   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall ozcollide::DataIn::readDword(FILE **this, int a2, int a3)
{
  _DWORD v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[1] = a3;
  v4[0] = 0;
  ozcollide::DataIn::read(this, v4, 4u);
  return HIBYTE(v4[0]) | (v4[0] << 24) | ((v4[0] & 0xFF00) << 8) | ((v4[0] & 0xFF0000u) >> 8);
}


//======================================================================
// ozcollide::DataIn::readFloat(void)
// address: 0x001D8584   size: 0x28 (40 bytes)
//======================================================================
unsigned int __fastcall ozcollide::DataIn::readFloat(FILE **this, int a2, int a3)
{
  _DWORD v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[0] = a2;
  v4[1] = a3;
  ozcollide::DataIn::read(this, v4, 4u);
  return HIBYTE(v4[0]) | (v4[0] << 24) | ((v4[0] & 0xFF00) << 8) | ((v4[0] & 0xFF0000u) >> 8);
}

