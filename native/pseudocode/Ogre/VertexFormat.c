// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::VertexFormat

//======================================================================
// Ogre::VertexFormat::VertexFormat(void)
// address: 0x00163DF0   size: 0xA (10 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12VertexFormatC2Ev'
_DWORD *__fastcall Ogre::VertexFormat::VertexFormat(_DWORD *this)
{
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// Ogre::VertexFormat::~VertexFormat()
// address: 0x00163E36   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12VertexFormatD2Ev'
void __fastcall Ogre::VertexFormat::~VertexFormat(void **this)
{
  sub_163C80(*this);
}


//======================================================================
// Ogre::VertexFormat::getStride(void)const
// address: 0x00163F00   size: 0x2A (42 bytes)
//======================================================================
int __fastcall Ogre::VertexFormat::getStride(Ogre::VertexFormat *this)
{
  unsigned int v1; // r4
  int v3; // r5
  int v4; // r0

  v1 = 0;
  v3 = 0;
  while ( v1 < (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2 )
  {
    v4 = *(_DWORD *)(4 * v1++ + *(_DWORD *)this);
    v3 += Ogre::VertexElement::getTypeSize((unsigned int)(v4 << 12) >> 24);
  }
  return v3;
}


//======================================================================
// Ogre::VertexFormat::getElementBySemantic(Ogre::VertexElementSemantic,int)const
// address: 0x00163F2A   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::VertexFormat::getElementBySemantic(int *a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r5
  int i; // r3
  int result; // r0

  v3 = *a1;
  v4 = (a1[1] - *a1) >> 2;
  for ( i = 0; i != v4; ++i )
  {
    result = v3 + 4 * i;
    if ( (unsigned int)(*(unsigned __int16 *)(result + 2) << 20) >> 24 == a2
      && (a3 < 0 || *(unsigned __int8 *)(result + 3) >> 4 == a3) )
    {
      return result;
    }
  }
  return 0;
}


//======================================================================
// Ogre::VertexFormat::hasElement(Ogre::VertexElementSemantic)
// address: 0x00163F5A   size: 0x2A (42 bytes)
//======================================================================
int __fastcall Ogre::VertexFormat::hasElement(int *a1, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r0

  v2 = *a1;
  v3 = 0;
  v4 = (a1[1] - *a1) >> 2;
  while ( 1 )
  {
    if ( v3 == v4 )
      return 0;
    if ( (unsigned int)(*(unsigned __int16 *)(v2 + 4 * v3 + 2) << 20) >> 24 == a2 )
      break;
    ++v3;
  }
  return 1;
}


//======================================================================
// Ogre::VertexFormat::operator==(Ogre::VertexFormat const&)const
// address: 0x00163F84   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::VertexFormat::operator==(int *a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3
  int result; // r0

  v2 = *a1;
  v3 = (a1[1] - *a1) >> 2;
  result = 0;
  if ( v3 == (a2[1] - *a2) >> 2 )
  {
    while ( 1 )
    {
      if ( result == v3 )
        return 1;
      if ( *(_DWORD *)(v2 + 4 * result) != *(_DWORD *)(*a2 + 4 * result) )
        break;
      ++result;
    }
    return 0;
  }
  return result;
}


//======================================================================
// Ogre::VertexFormat::operator=(Ogre::VertexFormat const&)
// address: 0x00164282   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::VertexFormat::operator=(int a1, int a2)
{
  std::vector<Ogre::VertexElement>::operator=(a1, a2);
  return a1;
}


//======================================================================
// Ogre::VertexFormat::VertexFormat(Ogre::VertexFormat const&)
// address: 0x001642B0   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12VertexFormatC1ERKS0_'
Ogre::VertexFormat *__fastcall Ogre::VertexFormat::VertexFormat(Ogre::VertexFormat *this, const Ogre::VertexFormat *a2)
{
  unsigned int v4; // r6
  char *v5; // r0

  v4 = (*((_DWORD *)a2 + 1) - *(_DWORD *)a2) >> 2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v5 = (char *)sub_163C8C(v4);
  *((_DWORD *)this + 2) = &v5[4 * v4];
  *(_DWORD *)this = v5;
  *((_DWORD *)this + 1) = v5;
  *((_DWORD *)this + 1) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexElement>(
                            *(void **)a2,
                            *((_DWORD *)a2 + 1),
                            v5);
  return this;
}


//======================================================================
// Ogre::VertexFormat::reserveElements(unsigned int)
// address: 0x001642E4   size: 0x52 (82 bytes)
//======================================================================
__int64 __fastcall Ogre::VertexFormat::reserveElements(__int64 this)
{
  int v1; // r4
  void *v2; // r7
  int v3; // r6
  char *v4; // r5
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  v1 = this;
  if ( HIDWORD(this) > 0x3FFFFFFF )
    sub_3BD058("vector::reserve");
  v2 = *(void **)this;
  if ( (unsigned int)((*(_DWORD *)(this + 8) - *(_DWORD *)this) >> 2) < HIDWORD(this) )
  {
    v3 = 4 * HIDWORD(this);
    HIDWORD(v6) = *(_DWORD *)(this + 4);
    v4 = (char *)sub_163C8C(HIDWORD(this));
    std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexElement>(v2, SHIDWORD(v6), v4);
    sub_163C80(*(void **)v1);
    *(_DWORD *)v1 = v4;
    *(_DWORD *)(v1 + 4) = &v4[4 * ((HIDWORD(v6) - (int)v2) >> 2)];
    *(_DWORD *)(v1 + 8) = &v4[v3];
  }
  return v6;
}


//======================================================================
// Ogre::VertexFormat::addElement(Ogre::VertexElementType,Ogre::VertexElementSemantic,unsigned int,unsigned int,unsigned int)
// address: 0x00164360   size: 0x120 (288 bytes)
//======================================================================
void __fastcall Ogre::VertexFormat::addElement(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        char a5,
        int a6)
{
  __int16 Stride; // r7
  char v10; // r6
  _BYTE *v11; // r5
  unsigned int v12; // r7
  int v13; // r6
  int v14; // r6
  char *v15; // r0
  char *v16; // r3
  unsigned int v17; // r1
  int v18; // r6
  int v19; // r0
  int v20; // r5
  char v21; // [sp+0h] [bp-1Ch]
  void *v22; // [sp+4h] [bp-18h]
  int v24; // [sp+Ch] [bp-10h]
  char v25; // [sp+10h] [bp-Ch]
  unsigned int v26; // [sp+14h] [bp-8h]

  v21 = a5 & 0xF;
  Stride = (unsigned __int8)a6;
  if ( a6 == -1 )
    Stride = (unsigned __int8)Ogre::VertexFormat::getStride((Ogre::VertexFormat *)a1);
  v24 = a3;
  v10 = a4 & 0xF;
  v11 = (_BYTE *)a1[1];
  v25 = v10;
  if ( v11 == (_BYTE *)a1[2] )
  {
    v26 = std::vector<Ogre::VertexElement>::_M_check_len(a1, 1u, (int)"vector::_M_insert_aux");
    v14 = (int)&v11[-*a1];
    v15 = (char *)sub_163C8C(v26);
    v16 = &v15[4 * (v14 >> 2)];
    v22 = v15;
    if ( v16 != nullptr )
    {
      *v16 = *v16 & 0xF0 | v21;
      *(_WORD *)v16 = *(_WORD *)v16 & 0xF00F | (16 * Stride);
      v17 = *(_DWORD *)v16 & 0xFFF00FFF | (a2 << 12);
      *(_DWORD *)v16 = v17;
      v18 = HIWORD(v17) & 0xF00F | (16 * v24);
      *((_WORD *)v16 + 1) = v18;
      v16[3] = BYTE1(v18) & 0xF | (16 * v25);
    }
    v19 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexElement>(
            (void *)*a1,
            (int)v11,
            v15);
    v20 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::VertexElement>(
            v11,
            a1[1],
            (void *)(v19 + 4));
    sub_163C80((void *)*a1);
    a1[1] = v20;
    *a1 = (int)v22;
    a1[2] = (int)v22 + 4 * v26;
  }
  else
  {
    if ( v11 != nullptr )
    {
      *v11 = *v11 & 0xF0 | v21;
      *(_WORD *)v11 = *(_WORD *)v11 & 0xF00F | (16 * Stride);
      v12 = *(_DWORD *)v11 & 0xFFF00FFF | (a2 << 12);
      *(_DWORD *)v11 = v12;
      v13 = HIWORD(v12) & 0xF00F | (16 * v24);
      *((_WORD *)v11 + 1) = v13;
      v11[3] = BYTE1(v13) & 0xF | (16 * v25);
    }
    a1[1] += 4;
  }
}

