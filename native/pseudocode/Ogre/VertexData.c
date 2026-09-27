// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::VertexData

//======================================================================
// Ogre::VertexData::getRTTI(void)const
// address: 0x00163AE0   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::VertexData::getRTTI(Ogre::VertexData *this)
{
  return &Ogre::VertexData::m_RTTI;
}


//======================================================================
// Ogre::VertexData::getHBuf(void)
// address: 0x00163B80   size: 0x66 (102 bytes)
//======================================================================
int __fastcall Ogre::VertexData::getHBuf(Ogre::VertexData *this)
{
  unsigned int v2; // r3
  int v3; // r5
  _BYTE *v4; // r0

  if ( *((_DWORD *)this + 18) != 0
    || (v3 = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton
                                                     + 8))(
               Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton,
               *((_DWORD *)this + 16) - *((_DWORD *)this + 15),
               *((_DWORD *)this + 14)),
        *((_DWORD *)this + 18) = v3,
        v3 != 0) )
  {
    v4 = *((_BYTE **)this + 18);
    if ( v4[12] != 0 )
    {
      (*(void (__fastcall **)(_BYTE *, _DWORD, int, _DWORD))(*(_DWORD *)v4 + 4))(
        v4,
        *((_DWORD *)this + 15),
        *((_DWORD *)this + 16) - *((_DWORD *)this + 15),
        0);
      *(_BYTE *)(*((_DWORD *)this + 18) + 12) = 0;
    }
    return *((_DWORD *)this + 18);
  }
  else
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreVertexIndexData.cpp",
      (const char *)&dword_EC,
      4,
      v2);
    Ogre::LogMessage(
      (Ogre *)"create vb error: %d, %d",
      (const char *)(*((_DWORD *)this + 16) - *((_DWORD *)this + 15)),
      *((_DWORD *)this + 14));
  }
  return v3;
}


//======================================================================
// Ogre::VertexData::~VertexData()
// address: 0x00163E7C   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10VertexDataD1Ev'
void __fastcall Ogre::VertexData::~VertexData(Ogre::VertexData *this)
{
  void (__fastcall ***v2)(_DWORD); // r0
  void *v3; // r0
  void *v4; // r1

  *(_DWORD *)this = &off_456DF0;
  v2 = *((void (__fastcall ****)(_DWORD))this + 18);
  if ( v2 != nullptr )
  {
    (**v2)(v2);
    *((_DWORD *)this + 18) = 0;
  }
  v3 = *((void **)this + 15);
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::VertexFormat::~VertexFormat((void **)this + 4);
  Ogre::VertexBuffer::~VertexBuffer((Ogre::FixedString **)this, v4);
}


//======================================================================
// Ogre::VertexData::~VertexData()
// address: 0x00163EBC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::VertexData::~VertexData(Ogre::VertexData *this)
{
  Ogre::VertexData::~VertexData(this);
  operator delete(this);
}


//======================================================================
// Ogre::VertexData::VertexData(void)
// address: 0x00163FB4   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10VertexDataC1Ev'
Ogre::VertexData *__fastcall Ogre::VertexData::VertexData(Ogre::VertexData *this)
{
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_456DF0;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 4);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  return this;
}


//======================================================================
// Ogre::VertexData::newObject(void)
// address: 0x00163FE4   size: 0x12 (18 bytes)
//======================================================================
Ogre::VertexData *__fastcall Ogre::VertexData::newObject(Ogre::VertexData *this)
{
  Ogre::VertexData *v1; // r4

  v1 = (Ogre::VertexData *)operator new(0x50u);
  Ogre::VertexData::VertexData(v1);
  return v1;
}


//======================================================================
// Ogre::VertexData::getVertexDecl(void)
// address: 0x00163FF8   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::VertexData::getVertexDecl(Ogre::VertexData *this)
{
  if ( *((_DWORD *)this + 19) == 0 )
    *((_DWORD *)this + 19) = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                                + 36))(
                               Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                               (char *)this + 16);
  return *((_DWORD *)this + 19);
}


//======================================================================
// Ogre::VertexData::lock(void)
// address: 0x00164020   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::VertexData::lock(Ogre::VertexData *this)
{
  return *((_DWORD *)this + 15) != *((_DWORD *)this + 16) ? *((_DWORD *)this + 15) : 0;
}


//======================================================================
// Ogre::VertexData::unlock(void)
// address: 0x00164030   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::VertexData::unlock(int this)
{
  int v1; // r3

  v1 = *(_DWORD *)(this + 72);
  if ( v1 != 0 )
    *(_BYTE *)(v1 + 12) = 1;
  return this;
}


//======================================================================
// Ogre::VertexData::VertexData(Ogre::VertexFormat const&,unsigned int)
// address: 0x00164624   size: 0x4A (74 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10VertexDataC1ERKNS_12VertexFormatEj'
Ogre::VertexData *__fastcall Ogre::VertexData::VertexData(
        Ogre::VertexData *this,
        const Ogre::VertexFormat *a2,
        unsigned int a3)
{
  Ogre::VertexFormat *v3; // r7
  int Stride; // r0
  __int64 v7; // r0

  *((_DWORD *)this + 1) = 1;
  v3 = (Ogre::VertexData *)((char *)this + 16);
  *(_DWORD *)this = &off_456DF0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  Ogre::VertexFormat::VertexFormat((Ogre::VertexData *)((char *)this + 16), a2);
  *((_DWORD *)this + 13) = a3;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  Stride = Ogre::VertexFormat::getStride(v3);
  *((_DWORD *)this + 14) = Stride;
  HIDWORD(v7) = Stride * a3;
  LODWORD(v7) = (char *)this + 60;
  std::vector<char>::resize(v7, 0);
  return this;
}


//======================================================================
// Ogre::VertexData::init(Ogre::VertexFormat const&,unsigned int)
// address: 0x00164674   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall Ogre::VertexData::init(Ogre::VertexData *this, const Ogre::VertexFormat *a2, unsigned int a3)
{
  Ogre::VertexFormat *v3; // r6
  int Stride; // r0
  __int64 v7; // r0
  __int64 result; // r0

  v3 = (Ogre::VertexData *)((char *)this + 16);
  Ogre::VertexFormat::operator=((int)this + 16, (int)a2);
  Stride = Ogre::VertexFormat::getStride(v3);
  *((_DWORD *)this + 14) = Stride;
  HIDWORD(v7) = Stride * a3;
  LODWORD(v7) = (char *)this + 60;
  result = std::vector<char>::resize(v7, 0);
  *((_DWORD *)this + 13) = a3;
  *((_DWORD *)this + 19) = 0;
  return result;
}


//======================================================================
// Ogre::VertexData::_serialize(Ogre::Archive &,int)
// address: 0x001646A4   size: 0xEA (234 bytes)
//======================================================================
__int64 __fastcall Ogre::VertexData::_serialize(__int64 this, int a2)
{
  Ogre::VertexFormat *v2; // r6
  __int64 v3; // r4
  int v4; // r0
  __int64 v5; // r0
  unsigned int Stride; // r0
  int v7; // r3
  int v8; // r7
  unsigned int v9; // r2
  int v10; // r3
  unsigned __int16 *v11; // r3
  _BYTE *v12; // r3
  unsigned int v13; // r1
  __int64 v15; // [sp+0h] [bp-Ch]

  v15 = this;
  v2 = (Ogre::VertexFormat *)(this + 16);
  v3 = this;
  Ogre::operator<<(HIDWORD(this), this + 16);
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(v3), (void *)(v3 + 28), 0xCu);
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(v3), (void *)(v3 + 40), 0xCu);
  v4 = *(_DWORD *)(HIDWORD(v3) + 4);
  if ( *(_DWORD *)(HIDWORD(v3) + 8) == 1 )
  {
    sub_163C6C(v4);
    LODWORD(v5) = v3 + 60;
    HIDWORD(v5) = HIDWORD(v15);
    std::vector<char>::resize(v5, 0);
    if ( HIDWORD(v15) != 0 )
      sub_163C6C(*(_DWORD *)(HIDWORD(v3) + 4));
  }
  else
  {
    HIDWORD(v15) = *(_DWORD *)(v3 + 64) - *(_DWORD *)(v3 + 60);
    sub_163C76(v4);
    if ( HIDWORD(v15) != 0 )
      sub_163C76(*(_DWORD *)(HIDWORD(v3) + 4));
  }
  if ( *(_DWORD *)(HIDWORD(v3) + 8) == 1 )
  {
    Stride = Ogre::VertexFormat::getStride(v2);
    v7 = *(_DWORD *)(v3 + 64);
    v8 = *(_DWORD *)(v3 + 60);
    *(_DWORD *)(v3 + 56) = Stride;
    *(_DWORD *)(v3 + 52) = (v7 - v8) / Stride;
    v9 = 0;
    if ( *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 64) == 2 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v3 + 16);
        if ( v9 >= (*(_DWORD *)(v3 + 20) - v10) >> 2 )
          break;
        v11 = (unsigned __int16 *)(v10 + 4 * v9);
        if ( *(_DWORD *)v11 << 12 >> 24 == 4 && (unsigned int)(v11[1] << 20) >> 24 != 3 )
        {
          v12 = (_BYTE *)(*(_DWORD *)(v3 + 60) + ((unsigned int)(*v11 << 20) >> 24));
          v13 = 0;
          while ( v13 < *(_DWORD *)(v3 + 52) )
          {
            BYTE4(v3) = v12[2];
            ++v13;
            v12[2] = *v12;
            *v12 = BYTE4(v3);
            v12 += *(_DWORD *)(v3 + 56);
          }
        }
        ++v9;
      }
    }
  }
  return v15;
}


//======================================================================
// Ogre::VertexData::VertexData(Ogre::VertexData const&)
// address: 0x00164794   size: 0x7C (124 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10VertexDataC1ERKS0_'
Ogre::VertexData *__fastcall Ogre::VertexData::VertexData(Ogre::VertexData *this, const Ogre::VertexData *a2)
{
  int v4; // r2
  int v5; // r3
  int v6; // r7
  char *v7; // r2

  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &off_456DF0;
  *((_DWORD *)this + 3) = 0;
  Ogre::VertexFormat::VertexFormat((Ogre::VertexData *)((char *)this + 16), (const Ogre::VertexData *)((char *)a2 + 16));
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  v4 = *((_DWORD *)a2 + 16);
  v5 = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  v6 = v4 - v5;
  *((_DWORD *)this + 17) = 0;
  if ( v4 == v5 )
    v7 = (char *)(v4 - v5);
  else
    v7 = (char *)operator new(v4 - v5);
  *((_DWORD *)this + 17) = &v7[v6];
  *((_DWORD *)this + 15) = v7;
  *((_DWORD *)this + 16) = v7;
  *((_DWORD *)this + 16) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<char>(
                             *((_BYTE **)a2 + 15),
                             *((_BYTE **)a2 + 16),
                             v7);
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  return this;
}


//======================================================================
// Ogre::VertexData::getVertexElement(unsigned int,Ogre::VertexElementSemantic)
// address: 0x00188A5C   size: 0x28 (40 bytes)
//======================================================================
unsigned __int16 *__fastcall Ogre::VertexData::getVertexElement(int *a1, int a2, int a3)
{
  unsigned __int16 *result; // r0

  result = (unsigned __int16 *)Ogre::VertexFormat::getElementBySemantic(a1 + 4, a3, -1);
  if ( result != nullptr )
    return (unsigned __int16 *)(a1[15] + a2 * a1[14] + ((unsigned int)(*result << 20) >> 24));
  return result;
}


//======================================================================
// Ogre::VertexData::getPosition(unsigned int)
// address: 0x00188A84   size: 0xA (10 bytes)
//======================================================================
unsigned __int16 *__fastcall Ogre::VertexData::getPosition(Ogre::VertexData *this, int a2)
{
  return Ogre::VertexData::getVertexElement((int *)this, a2, 1);
}

