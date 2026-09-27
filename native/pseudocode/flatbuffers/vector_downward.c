// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: flatbuffers::vector_downward

//======================================================================
// flatbuffers::vector_downward::~vector_downward()
// address: 0x0029897C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN11flatbuffers15vector_downwardD1Ev'
void __fastcall flatbuffers::vector_downward::~vector_downward(flatbuffers::vector_downward *this)
{
  if ( *((_DWORD *)this + 1) != 0 )
    (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 12))(*((_DWORD *)this + 3));
}


//======================================================================
// flatbuffers::vector_downward::size(void)const
// address: 0x00298992   size: 0xC (12 bytes)
//======================================================================
int __fastcall flatbuffers::vector_downward::size(flatbuffers::vector_downward *this)
{
  return *((_DWORD *)this + 1) - *((_DWORD *)this + 2) + *(_DWORD *)this;
}


//======================================================================
// flatbuffers::vector_downward::make_space(unsigned int)
// address: 0x0029899E   size: 0x5E (94 bytes)
//======================================================================
char *__fastcall flatbuffers::vector_downward::make_space(const void **this, unsigned int a2)
{
  size_t v4; // r7
  unsigned int v5; // r3
  int v6; // r0
  char *v7; // r6
  int v8; // r0
  char *result; // r0
  int v10; // [sp+4h] [bp-8h]

  if ( a2 > (_BYTE *)*(this + 2) - (_BYTE *)*(this + 1) )
  {
    v4 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)this);
    v5 = ((unsigned int)*this >> 1) & 0x7FFFFFF8;
    if ( v5 < a2 )
      v5 = a2;
    v6 = (int)*(this + 3);
    *this = (const void *)(((unsigned int)*this + v5 + 7) & 0xFFFFFFF8);
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
    v7 = (char *)*this + v10 - v4;
    j_memcpy(v7, *(this + 2), v4);
    v8 = (int)*(this + 3);
    *(this + 2) = v7;
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v8 + 12))(v8, *(this + 1));
    *(this + 1) = (const void *)v10;
  }
  result = (char *)*(this + 2) - a2;
  *(this + 2) = result;
  return result;
}


//======================================================================
// flatbuffers::vector_downward::push(unsigned char const*,unsigned int)
// address: 0x002989FC   size: 0x1C (28 bytes)
//======================================================================
char *__fastcall flatbuffers::vector_downward::push(const void **this, const unsigned __int8 *a2, unsigned int a3)
{
  char *result; // r0
  int i; // r3

  result = flatbuffers::vector_downward::make_space(this, a3);
  for ( i = 0; i != a3; ++i )
    result[i] = a2[i];
  return result;
}


//======================================================================
// flatbuffers::vector_downward::fill(unsigned int)
// address: 0x00298A18   size: 0x18 (24 bytes)
//======================================================================
char *__fastcall flatbuffers::vector_downward::fill(const void **this, unsigned int a2)
{
  char *result; // r0
  char *v4; // r4

  result = flatbuffers::vector_downward::make_space(this, a2);
  v4 = &result[a2];
  while ( result != v4 )
    *result++ = 0;
  return result;
}

