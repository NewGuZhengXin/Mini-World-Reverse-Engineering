// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::IndexData

//======================================================================
// Ogre::IndexData::getRTTI(void)const
// address: 0x00163AEC   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::IndexData::getRTTI(Ogre::IndexData *this)
{
  return &Ogre::IndexData::m_RTTI;
}


//======================================================================
// Ogre::IndexData::getHBuf(void)
// address: 0x00163BF4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall Ogre::IndexData::getHBuf(Ogre::IndexData *this)
{
  unsigned int v2; // r3
  int v3; // r5
  _BYTE *v4; // r0

  if ( *((_DWORD *)this + 9) != 0
    || (v3 = (*(int (__fastcall **)(int, int))(*(_DWORD *)Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton + 12))(
               Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton,
               (*((_DWORD *)this + 7) - *((_DWORD *)this + 6)) >> 1),
        *((_DWORD *)this + 9) = v3,
        v3 != 0) )
  {
    v4 = *((_BYTE **)this + 9);
    if ( v4[12] != 0 )
    {
      (*(void (__fastcall **)(_BYTE *, _DWORD, int, _DWORD))(*(_DWORD *)v4 + 4))(
        v4,
        *((_DWORD *)this + 6),
        2 * ((*((_DWORD *)this + 7) - *((_DWORD *)this + 6)) >> 1),
        0);
      *(_BYTE *)(*((_DWORD *)this + 9) + 12) = 0;
    }
    return *((_DWORD *)this + 9);
  }
  else
  {
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreVertexIndexData.cpp",
      (const char *)&stru_198.st_value,
      4,
      v2);
    Ogre::LogMessage(
      (Ogre *)"create ib error: %d",
      (const char *)((*((_DWORD *)this + 7) - *((_DWORD *)this + 6)) >> 1));
  }
  return v3;
}


//======================================================================
// Ogre::IndexData::~IndexData()
// address: 0x00163D74   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9IndexDataD1Ev'
void __fastcall Ogre::IndexData::~IndexData(Ogre::IndexData *this, void *a2)
{
  void (__fastcall ***v3)(_DWORD); // r0
  void *v4; // r0

  *(_DWORD *)this = &off_456E18;
  v3 = *((void (__fastcall ****)(_DWORD))this + 9);
  if ( v3 != nullptr )
  {
    (**v3)(v3);
    *((_DWORD *)this + 9) = 0;
  }
  v4 = *((void **)this + 6);
  if ( v4 != nullptr )
    operator delete(v4);
  Ogre::IndexBuffer::~IndexBuffer((Ogre::FixedString **)this, a2);
}


//======================================================================
// Ogre::IndexData::~IndexData()
// address: 0x00163DAC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::IndexData::~IndexData(Ogre::IndexData *this, void *a2)
{
  Ogre::IndexData::~IndexData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::IndexData::IndexData(void)
// address: 0x00164040   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9IndexDataC1Ev'
_DWORD *__fastcall Ogre::IndexData::IndexData(_DWORD *this)
{
  *(this + 1) = 1;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *this = &off_456E18;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  return this;
}


//======================================================================
// Ogre::IndexData::newObject(void)
// address: 0x00164064   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::IndexData::newObject(Ogre::IndexData *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x28u);
  Ogre::IndexData::IndexData(v1);
  return v1;
}


//======================================================================
// Ogre::IndexData::lock(void)
// address: 0x00164076   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::IndexData::lock(Ogre::IndexData *this)
{
  return *((_DWORD *)this + 6);
}


//======================================================================
// Ogre::IndexData::unlock(void)
// address: 0x0016407A   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::IndexData::unlock(int this)
{
  int v1; // r3

  v1 = *(_DWORD *)(this + 36);
  if ( v1 != 0 )
    *(_BYTE *)(v1 + 12) = 1;
  return this;
}


//======================================================================
// Ogre::IndexData::IndexData(unsigned int)
// address: 0x00164104   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9IndexDataC1Ej'
Ogre::IndexData *__fastcall Ogre::IndexData::IndexData(Ogre::IndexData *this, int a2)
{
  int v3; // r6
  _WORD *v4; // r3
  int v5; // r3

  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_456E18;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  v3 = a2;
  std::_Vector_base<unsigned short>::_M_create_storage((_DWORD *)this + 6, a2);
  v4 = *((_WORD **)this + 6);
  while ( v3 != 0 )
  {
    *v4 = 0;
    --v3;
    ++v4;
  }
  v5 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 7) = v5;
  return this;
}


//======================================================================
// Ogre::IndexData::IndexData(unsigned int,Ogre::IndexData**,unsigned int *,Ogre::PrimitiveType)
// address: 0x00164990   size: 0x138 (312 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9IndexDataC1EjPPS0_PjNS_13PrimitiveTypeE'
_DWORD *__fastcall Ogre::IndexData::IndexData(_DWORD *a1, int a2, int *a3, int a4, int a5)
{
  int v5; // r4
  unsigned int i; // r6
  int *v8; // r3
  int *v9; // r1
  int v10; // r2
  unsigned int v11; // r1
  int v12; // r4
  __int64 v13; // r0
  _WORD *v14; // r4
  unsigned int v15; // r7
  int v16; // r6
  int v17; // r3
  unsigned int v18; // r3
  int v19; // r2
  unsigned int j; // r3
  int k; // r3
  _WORD *v23; // [sp+0h] [bp-1Ch]
  unsigned int v26; // [sp+Ch] [bp-10h]
  int v27; // [sp+10h] [bp-Ch]

  a1[1] = 1;
  v5 = 0;
  a1[2] = 0;
  a1[3] = 0;
  *a1 = &off_456E18;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  if ( a5 == 4 )
  {
    v8 = a3;
    v9 = &a3[a2];
    while ( v8 != v9 )
    {
      v10 = *v8++;
      v5 += (*(_DWORD *)(v10 + 28) - *(_DWORD *)(v10 + 24)) >> 1;
    }
  }
  else
  {
    for ( i = 0; i != a2; ++i )
    {
      v11 = (*(_DWORD *)(a3[i] + 28) - *(_DWORD *)(a3[i] + 24)) >> 1;
      v12 = v5 + v11;
      if ( i != 0 )
        v12 += (Ogre::nVertex2nPrimitive(a5, v11) & 1) + 1;
      v5 = v12 + (i < a2 - 1);
    }
  }
  HIDWORD(v13) = v5;
  LODWORD(v13) = a1 + 6;
  std::vector<unsigned short>::resize(v13, 0);
  v14 = (_WORD *)a1[6];
  v15 = 0;
  v16 = 0;
  while ( v15 != a2 )
  {
    v27 = 4 * v15;
    v17 = a3[v15];
    v23 = *(_WORD **)(v17 + 24);
    v18 = (*(_DWORD *)(v17 + 28) - (int)v23) >> 1;
    v26 = v18;
    if ( a5 == 4 )
    {
      v19 = 2 * v18;
      for ( j = 0; j != v19; j += 2 )
        v14[j / 2] = v16 + v23[j / 2];
      v14 = (_WORD *)((char *)v14 + j);
    }
    else
    {
      if ( v15 != 0 )
      {
        *v14 = v16 + *v23;
        if ( (Ogre::nVertex2nPrimitive(a5, v18) & 1) != 0 )
        {
          v14[1] = v16 + *v23;
          v14 += 2;
        }
        else
        {
          ++v14;
        }
      }
      for ( k = 0; k != v26; ++k )
        v14[k] = v16 + v23[k];
      v14 = (_WORD *)((char *)v14 + k * 2);
      if ( v15 < a2 - 1 )
      {
        *v14 = v16 + *(v14 - 1);
        ++v14;
      }
    }
    ++v15;
    v16 = (unsigned __int16)(v16 + *(_WORD *)(a4 + v27));
  }
  a1[4] = 0;
  a1[5] = v16;
  return a1;
}


//======================================================================
// Ogre::IndexData::_serialize(Ogre::Archive &,int)
// address: 0x00164ACC   size: 0x6E (110 bytes)
//======================================================================
__int64 __fastcall Ogre::IndexData::_serialize(__int64 this, int a2)
{
  __int64 v2; // r4
  __int64 v3; // r0
  __int64 v5; // [sp+0h] [bp-8h]

  v5 = this;
  v2 = this;
  LODWORD(this) = *(_DWORD *)(HIDWORD(this) + 4);
  if ( *(_DWORD *)(HIDWORD(this) + 8) == 1 )
  {
    sub_163C6C(this);
    LODWORD(v3) = v2 + 24;
    HIDWORD(v3) = HIDWORD(v5);
    std::vector<unsigned short>::resize(v3, 0);
    if ( HIDWORD(v5) != 0 )
      sub_163C6C(*(_DWORD *)(HIDWORD(v2) + 4));
  }
  else
  {
    HIDWORD(v5) = (*(_DWORD *)(v2 + 28) - *(_DWORD *)(v2 + 24)) >> 1;
    sub_163C76(this);
    if ( HIDWORD(v5) != 0 )
      sub_163C76(*(_DWORD *)(HIDWORD(v2) + 4));
  }
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(v2), (void *)(v2 + 16), 4u);
  Ogre::Archive::serialize((Ogre::Archive *)HIDWORD(v2), (void *)(v2 + 20), 4u);
  return v5;
}


//======================================================================
// Ogre::IndexData::IndexData(Ogre::IndexData const&)
// address: 0x00164B3C   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9IndexDataC1ERKS0_'
Ogre::IndexData *__fastcall Ogre::IndexData::IndexData(Ogre::IndexData *this, const Ogre::IndexData *a2)
{
  int v3; // r3
  int v4; // r2

  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_456E18;
  v3 = *((_DWORD *)a2 + 6);
  v4 = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  std::_Vector_base<unsigned short>::_M_create_storage((_DWORD *)this + 6, (v4 - v3) >> 1);
  *((_DWORD *)this + 7) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(
                            *((void **)a2 + 6),
                            *((_DWORD *)a2 + 7),
                            *((void **)this + 6));
  *((_DWORD *)this + 9) = 0;
  return this;
}

