// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BSPData

//======================================================================
// Ogre::BSPData::getRTTI(void)const
// address: 0x00192F64   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BSPData::getRTTI(Ogre::BSPData *this)
{
  return &Ogre::BSPData::m_RTTI;
}


//======================================================================
// Ogre::BSPData::~BSPData()
// address: 0x00192FFC   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7BSPDataD1Ev'
void __fastcall Ogre::BSPData::~BSPData(Ogre::BSPData *this, void *a2)
{
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  *(_DWORD *)this = &off_458498;
  v3 = *((void **)this + 10);
  if ( v3 != nullptr )
    operator delete(v3);
  v4 = *((void **)this + 7);
  if ( v4 != nullptr )
    operator delete(v4);
  v5 = *((void **)this + 4);
  if ( v5 != nullptr )
    operator delete(v5);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, a2);
}


//======================================================================
// Ogre::BSPData::~BSPData()
// address: 0x00193038   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BSPData::~BSPData(Ogre::BSPData *this, void *a2)
{
  Ogre::BSPData::~BSPData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::BSPData::newObject(void)
// address: 0x0019304C   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall Ogre::BSPData::newObject(Ogre::BSPData *this)
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(0x34u);
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  *result = &off_458498;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  result[12] = 0;
  return result;
}


//======================================================================
// Ogre::BSPData::BSPData(Ogre::BSPData const&)
// address: 0x0019398C   size: 0xF4 (244 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7BSPDataC1ERKS0_'
Ogre::BSPData *__fastcall Ogre::BSPData::BSPData(Ogre::BSPData *this, const Ogre::BSPData *a2)
{
  int v3; // r2
  int v4; // r1
  Ogre::BSPData *v5; // r4
  unsigned int v6; // r6
  _DWORD *v7; // r0
  char *v8; // r1
  char *v9; // r6
  _DWORD *v10; // r2
  char *i; // r3
  int v12; // r2
  int v13; // r6
  int v14; // r7
  int v15; // r1
  unsigned int v16; // r2
  int v17; // r6

  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_458498;
  v3 = *((_DWORD *)a2 + 4);
  v4 = *((_DWORD *)a2 + 5);
  v5 = this;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  v6 = -1431655765 * ((v4 - v3) >> 2);
  *((_DWORD *)this + 6) = 0;
  if ( v6 != 0 )
  {
    if ( v6 > 0x15555555 )
      goto LABEL_3;
    v7 = (_DWORD *)operator new(4 * ((v4 - v3) >> 2));
  }
  else
  {
    v7 = nullptr;
  }
  *((_DWORD *)v5 + 4) = v7;
  *((_DWORD *)v5 + 5) = v7;
  *((_DWORD *)v5 + 6) = &v7[3 * v6];
  v8 = *((char **)a2 + 4);
  v9 = *((char **)a2 + 5);
  v10 = v7;
  for ( i = v8; i != v9; i += 12 )
  {
    if ( v10 != nullptr )
    {
      *v10 = *(_DWORD *)i;
      v10[1] = *((_DWORD *)i + 1);
      v10[2] = *((_DWORD *)i + 2);
    }
    v10 += 3;
  }
  this = (Ogre::BSPData *)&v7[3 * ((-1431655764 * ((unsigned int)(i - v8) >> 2)) >> 2)];
  *((_DWORD *)v5 + 5) = this;
  v12 = (*((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 7)) >> 1;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 8) = 0;
  *((_DWORD *)v5 + 9) = 0;
  v13 = 2 * v12;
  if ( v12 != 0 )
  {
    if ( v12 < 0 )
      goto LABEL_3;
    v12 = operator new(2 * v12);
  }
  *((_DWORD *)v5 + 7) = v12;
  *((_DWORD *)v5 + 8) = v12;
  *((_DWORD *)v5 + 9) = v12 + v13;
  this = (Ogre::BSPData *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned short>(
                            *((void **)a2 + 7),
                            *((_DWORD *)a2 + 8),
                            (void *)v12);
  *((_DWORD *)v5 + 8) = this;
  v14 = *((_DWORD *)a2 + 11);
  v15 = *((_DWORD *)a2 + 10);
  *((_DWORD *)v5 + 10) = 0;
  v16 = (v14 - v15) >> 2;
  *((_DWORD *)v5 + 11) = 0;
  *((_DWORD *)v5 + 12) = 0;
  v17 = 4 * v16;
  if ( v16 != 0 )
  {
    if ( v16 <= 0x3FFFFFFF )
    {
      v16 = operator new(4 * v16);
      goto LABEL_17;
    }
LABEL_3:
    sub_3BCEB4(this);
  }
LABEL_17:
  *((_DWORD *)v5 + 12) = v16 + v17;
  *((_DWORD *)v5 + 10) = v16;
  *((_DWORD *)v5 + 11) = v16;
  *((_DWORD *)v5 + 11) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BSPData::SufaceMtl>(
                           *((void **)a2 + 10),
                           *((_DWORD *)a2 + 11),
                           (void *)v16);
  return v5;
}


//======================================================================
// Ogre::BSPData::_serialize(Ogre::Archive &,int)
// address: 0x00193A94   size: 0x26 (38 bytes)
//======================================================================
unsigned int __fastcall Ogre::BSPData::_serialize(Ogre::BSPData *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive::serializeRawArray<Ogre::Vector3>((int)a2, (_DWORD *)this + 4);
  Ogre::Archive::serializeRawArray<unsigned short>((int)a2, (_DWORD *)this + 7);
  return Ogre::Archive::serializeRawArray<Ogre::BSPData::SufaceMtl>((unsigned int)a2, (_DWORD *)this + 10);
}

