// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::DataOut

//======================================================================
// ozcollide::DataOut::~DataOut()
// address: 0x001D8320   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide7DataOutD2Ev'
void __fastcall ozcollide::DataOut::~DataOut(ozcollide::DataOut *this)
{
  *(_DWORD *)this = &off_459770;
}


//======================================================================
// ozcollide::DataOut::~DataOut()
// address: 0x001D8342   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ozcollide::DataOut::~DataOut(ozcollide::DataOut *this)
{
  ozcollide::DataOut::~DataOut(this);
  operator delete(this);
}


//======================================================================
// ozcollide::DataOut::DataOut(void)
// address: 0x001D85AC   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide7DataOutC2Ev'
_DWORD *__fastcall ozcollide::DataOut::DataOut(_DWORD *this)
{
  *this = &off_459770;
  *(this + 1) = 0;
  return this;
}


//======================================================================
// ozcollide::DataOut::open(char const*)
// address: 0x001D85C0   size: 0x1C (28 bytes)
//======================================================================
bool __fastcall ozcollide::DataOut::open(ozcollide::DataOut *this, const char *a2)
{
  char *v3; // r0
  FILE *v4; // r0

  v3 = j_strdup(a2);
  *((_DWORD *)this + 3) = v3;
  v4 = j_fopen(v3, "wb");
  *((_DWORD *)this + 1) = v4;
  return v4 != nullptr;
}


//======================================================================
// ozcollide::DataOut::close(void)
// address: 0x001D85E0   size: 0x1E (30 bytes)
//======================================================================
int __fastcall ozcollide::DataOut::close(ozcollide::DataOut *this)
{
  FILE *v2; // r0

  v2 = *((FILE **)this + 1);
  if ( v2 != nullptr && j_fclose(v2) != 0 )
    return 0;
  *((_DWORD *)this + 1) = 0;
  return 1;
}


//======================================================================
// ozcollide::DataOut::isOpen(void)const
// address: 0x001D85FE   size: 0x8 (8 bytes)
//======================================================================
bool __fastcall ozcollide::DataOut::isOpen(ozcollide::DataOut *this)
{
  return *((_DWORD *)this + 1) != 0;
}


//======================================================================
// ozcollide::DataOut::eof(void)const
// address: 0x001D8606   size: 0xA (10 bytes)
//======================================================================
unsigned int __fastcall ozcollide::DataOut::eof(ozcollide::DataOut *this)
{
  return (unsigned int)(*(unsigned __int16 *)(*((_DWORD *)this + 1) + 12) << 26) >> 31;
}


//======================================================================
// ozcollide::DataOut::getFileName(void)const
// address: 0x001D8610   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ozcollide::DataOut::getFileName(ozcollide::DataOut *this)
{
  return *((_DWORD *)this + 3);
}


//======================================================================
// ozcollide::DataOut::advance(int)
// address: 0x001D8614   size: 0x10 (16 bytes)
//======================================================================
bool __fastcall ozcollide::DataOut::advance(FILE **this, int a2)
{
  return j_fseek(*(this + 1), a2, 1) == 0;
}


//======================================================================
// ozcollide::DataOut::seek(int)
// address: 0x001D8624   size: 0x10 (16 bytes)
//======================================================================
bool __fastcall ozcollide::DataOut::seek(FILE **this, int a2)
{
  return j_fseek(*(this + 1), a2, 0) == 0;
}


//======================================================================
// ozcollide::DataOut::tell(void)const
// address: 0x001D8634   size: 0xA (10 bytes)
//======================================================================
int __fastcall ozcollide::DataOut::tell(FILE **this)
{
  return j_ftell(*(this + 1));
}


//======================================================================
// ozcollide::DataOut::write(void const*,int)
// address: 0x001D863E   size: 0xE (14 bytes)
//======================================================================
size_t __fastcall ozcollide::DataOut::write(FILE **this, const void *ptr, size_t a3)
{
  return j_fwrite(ptr, 1u, a3, *(this + 1));
}


//======================================================================
// ozcollide::DataOut::writeStr(char const*)
// address: 0x001D864C   size: 0x18 (24 bytes)
//======================================================================
size_t __fastcall ozcollide::DataOut::writeStr(FILE **this, const char *a2)
{
  size_t v4; // r0

  v4 = j_strlen(a2);
  return ozcollide::DataOut::write(this, a2, v4);
}


//======================================================================
// ozcollide::DataOut::writeStrZ(char const*)
// address: 0x001D8664   size: 0x26 (38 bytes)
//======================================================================
int __fastcall ozcollide::DataOut::writeStrZ(FILE **this, const char *a2)
{
  size_t v4; // r2

  v4 = j_strlen(a2);
  if ( v4 != 0 )
    j_fwrite(a2, 1u, v4, *(this + 1));
  return j_fputc(0, *(this + 1)) + 1;
}


//======================================================================
// ozcollide::DataOut::writeByte(char)
// address: 0x001D868A   size: 0x12 (18 bytes)
//======================================================================
size_t __fastcall ozcollide::DataOut::writeByte(FILE **this, char a2, int a3)
{
  _BYTE v4[5]; // [sp+7h] [bp-5h] BYREF

  *(_DWORD *)&v4[1] = a3;
  v4[0] = a2;
  return ozcollide::DataOut::write(this, v4, 1u);
}


//======================================================================
// ozcollide::DataOut::writeWord(short)
// address: 0x001D869C   size: 0x18 (24 bytes)
//======================================================================
size_t __fastcall ozcollide::DataOut::writeWord(FILE **this, unsigned __int16 a2, int a3)
{
  _WORD v4[3]; // [sp+6h] [bp-6h] BYREF

  *(_DWORD *)&v4[1] = a3;
  v4[0] = (a2 << 8) | HIBYTE(a2);
  return ozcollide::DataOut::write(this, v4, 2u);
}


//======================================================================
// ozcollide::DataOut::writeDword(int)
// address: 0x001D86B4   size: 0x2A (42 bytes)
//======================================================================
size_t __fastcall ozcollide::DataOut::writeDword(FILE **this, unsigned int a2, int a3)
{
  _DWORD ptr[2]; // [sp+4h] [bp-8h] BYREF

  ptr[1] = a3;
  ptr[0] = HIBYTE(a2) | (a2 << 24) | ((a2 & 0xFF00) << 8) | ((a2 & 0xFF0000) >> 8);
  return ozcollide::DataOut::write(this, ptr, 4u);
}


//======================================================================
// ozcollide::DataOut::writeFloat(float)
// address: 0x001D86DE   size: 0x2A (42 bytes)
//======================================================================
size_t __fastcall ozcollide::DataOut::writeFloat(FILE **this, float a2, int a3)
{
  _DWORD ptr[2]; // [sp+4h] [bp-8h] BYREF

  ptr[1] = a3;
  ptr[0] = HIBYTE(LODWORD(a2)) | (LODWORD(a2) << 24) | ((LOWORD(a2) & 0xFF00) << 8) | ((LODWORD(a2) & 0xFF0000u) >> 8);
  return ozcollide::DataOut::write(this, ptr, 4u);
}

