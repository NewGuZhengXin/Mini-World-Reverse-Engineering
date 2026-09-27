// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlString

//======================================================================
// TiXmlString::operator=(char const*)
// address: 0x001CCE38   size: 0x18 (24 bytes)
//======================================================================
int __fastcall TiXmlString::operator=(TiXmlString *a1, char *a2)
{
  size_t v4; // r0

  v4 = j_strlen(a2);
  return TiXmlString::assign(a1, a2, v4);
}


//======================================================================
// TiXmlString::operator+=(char)
// address: 0x001D91AA   size: 0x12 (18 bytes)
//======================================================================
int __fastcall TiXmlString::operator+=(TiXmlString *a1, char a2, int a3)
{
  char v4[5]; // [sp+7h] [bp-5h] BYREF

  *(_DWORD *)&v4[1] = a3;
  v4[0] = a2;
  return TiXmlString::append(a1, v4, 1u);
}


//======================================================================
// TiXmlString::quit(void)
// address: 0x001D91BC   size: 0x18 (24 bytes)
//======================================================================
void __fastcall TiXmlString::quit(void **this)
{
  void *v1; // r0

  v1 = *this;
  if ( v1 != &TiXmlString::nullrep_ && v1 != nullptr )
    operator delete[](v1);
}


//======================================================================
// TiXmlString::operator=(TiXmlString const&)
// address: 0x001DA506   size: 0x10 (16 bytes)
//======================================================================
int __fastcall TiXmlString::operator=(TiXmlString *a1, size_t **a2)
{
  return TiXmlString::assign(a1, (const char *)*a2 + 8, **a2);
}


//======================================================================
// TiXmlString::operator+=(char const*)
// address: 0x001DA516   size: 0x18 (24 bytes)
//======================================================================
int __fastcall TiXmlString::operator+=(TiXmlString *a1, char *a2)
{
  size_t v4; // r0

  v4 = j_strlen(a2);
  return TiXmlString::append(a1, a2, v4);
}


//======================================================================
// TiXmlString::operator+=(TiXmlString const&)
// address: 0x001DA52E   size: 0x10 (16 bytes)
//======================================================================
int __fastcall TiXmlString::operator+=(TiXmlString *a1, size_t **a2)
{
  return TiXmlString::append(a1, (const char *)*a2 + 8, **a2);
}


//======================================================================
// TiXmlString::reserve(unsigned int)
// address: 0x001DBE0C   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall TiXmlString::reserve(__int64 this)
{
  int *v1; // r2
  int v3; // r6
  unsigned int v4; // r0
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int v7; // r3
  __int64 v9; // [sp+0h] [bp-8h] BYREF

  v9 = this;
  v1 = *(int **)this;
  if ( HIDWORD(this) > *(_DWORD *)(*(_DWORD *)this + 4) )
  {
    HIDWORD(v9) = &TiXmlString::nullrep_;
    v3 = *v1;
    if ( HIDWORD(this) != 0 )
    {
      v4 = (unsigned int)(HIDWORD(this) + 15) >> 2;
      if ( v4 > 0x1FC00000 )
        v5 = -1;
      else
        v5 = 4 * v4;
      v6 = (_DWORD *)operator new[](v5);
      HIDWORD(v9) = v6;
      *v6 = v3;
      *((_BYTE *)v6 + v3 + 8) = 0;
      *(_DWORD *)(HIDWORD(v9) + 4) = HIDWORD(this);
    }
    j_memcpy((void *)(HIDWORD(v9) + 8), (const void *)(*(_DWORD *)this + 8), **(_DWORD **)this);
    v7 = *(_DWORD *)this;
    *(_DWORD *)this = HIDWORD(v9);
    HIDWORD(v9) = v7;
    TiXmlString::quit((void **)&v9 + 1);
  }
  return v9;
}


//======================================================================
// TiXmlString::assign(char const*,unsigned int)
// address: 0x001DBE74   size: 0x80 (128 bytes)
//======================================================================
TiXmlString *__fastcall TiXmlString::assign(TiXmlString *this, const char *a2, size_t a3)
{
  _DWORD *v4; // r0
  size_t v7; // r3
  size_t v8; // r0
  unsigned int v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r3
  _DWORD *v12; // r3
  _DWORD *v14; // [sp+4h] [bp-4h] BYREF

  v14 = a2;
  v4 = *(_DWORD **)this;
  v7 = v4[1];
  if ( a3 <= v7 && v7 <= 3 * a3 + 24 )
  {
    j_memmove(v4 + 2, a2, a3);
    v12 = *(_DWORD **)this;
    *v12 = a3;
    *((_BYTE *)v12 + a3 + 8) = 0;
  }
  else
  {
    v14 = &TiXmlString::nullrep_;
    if ( a3 != 0 )
    {
      v8 = (a3 + 15) >> 2;
      if ( v8 > 0x1FC00000 )
        v9 = -1;
      else
        v9 = 4 * v8;
      v10 = (_DWORD *)operator new[](v9);
      v14 = v10;
      *v10 = a3;
      *((_BYTE *)v10 + a3 + 8) = 0;
      v14[1] = a3;
    }
    j_memcpy(v14 + 2, a2, a3);
    v11 = *(_DWORD **)this;
    *(_DWORD *)this = v14;
    v14 = v11;
    TiXmlString::quit((void **)&v14);
  }
  return this;
}


//======================================================================
// TiXmlString::append(char const*,unsigned int)
// address: 0x001DBEF8   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall TiXmlString::append(__int64 this, size_t a2)
{
  const void *v3; // r7
  _DWORD *v4; // r4
  size_t v5; // r5
  _DWORD *v6; // r3

  v3 = (const void *)HIDWORD(this);
  HIDWORD(this) = *(_DWORD *)(*(_DWORD *)this + 4);
  v4 = (_DWORD *)this;
  v5 = a2 + **(_DWORD **)this;
  if ( v5 > HIDWORD(this) )
  {
    HIDWORD(this) += v5;
    TiXmlString::reserve(this);
  }
  j_memmove((void *)(*v4 + *(_DWORD *)*v4 + 8), v3, a2);
  v6 = (_DWORD *)*v4;
  *v6 = v5;
  *((_BYTE *)v6 + v5 + 8) = 0;
  return v4;
}

