// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PlantSource

//======================================================================
// Ogre::PlantSource::getRTTI(void)const
// address: 0x00194130   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::PlantSource::getRTTI(Ogre::PlantSource *this)
{
  return &Ogre::PlantSource::m_RTTI;
}


//======================================================================
// Ogre::PlantSource::PlantSource(void)
// address: 0x001941D4   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11PlantSourceC1Ev'
Ogre::PlantSource *__fastcall Ogre::PlantSource::PlantSource(Ogre::PlantSource *this)
{
  char *v1; // r6

  *((_DWORD *)this + 1) = 1;
  v1 = (char *)this + 20;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_4584F8;
  j_memset((char *)this + 20, 0, 0x10u);
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 7) = v1;
  *((_DWORD *)this + 8) = v1;
  return this;
}


//======================================================================
// Ogre::PlantSource::newObject(void)
// address: 0x00194208   size: 0x12 (18 bytes)
//======================================================================
Ogre::PlantSource *__fastcall Ogre::PlantSource::newObject(Ogre::PlantSource *this)
{
  Ogre::PlantSource *v1; // r4

  v1 = (Ogre::PlantSource *)operator new(0x28u);
  Ogre::PlantSource::PlantSource(v1);
  return v1;
}


//======================================================================
// Ogre::PlantSource::~PlantSource()
// address: 0x00194270   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11PlantSourceD1Ev'
void __fastcall Ogre::PlantSource::~PlantSource(Ogre::PlantSource *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  int v4; // r3
  void *v5; // r1

  v1 = *((_DWORD **)this + 7);
  *(_DWORD *)this = &off_4584F8;
  while ( v1 != (_DWORD *)((char *)this + 20) )
  {
    v3 = (_DWORD *)v1[14];
    if ( v3 != nullptr )
    {
      v4 = v3[1] - 1;
      v3[1] = v4;
      if ( v4 <= 0 )
        (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
      v1[14] = 0;
    }
    v1 = (_DWORD *)sub_391DDC(v1);
  }
  std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>>::_M_erase(
    (int)this + 16,
    *((_DWORD **)this + 6));
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v5);
}


//======================================================================
// Ogre::PlantSource::~PlantSource()
// address: 0x001942C4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::PlantSource::~PlantSource(Ogre::PlantSource *this)
{
  Ogre::PlantSource::~PlantSource(this);
  operator delete(this);
}


//======================================================================
// Ogre::PlantSource::_serialize(Ogre::Archive &,int)
// address: 0x00194670   size: 0x12C (300 bytes)
//======================================================================
int __fastcall Ogre::PlantSource::_serialize(Ogre::PlantSource *this, Ogre::Archive *a2, int a3)
{
  unsigned int v4; // r2
  int v6; // r0
  void (*v7)(void); // r3
  int v8; // r2
  unsigned int v9; // r3
  __int64 v10; // r0
  _DWORD *v11; // r6
  void *v12; // r1
  int *i; // r6
  unsigned int v15; // [sp+0h] [bp-3Ch]
  unsigned int v17; // [sp+8h] [bp-34h]
  Ogre::FixedString *v18; // [sp+Ch] [bp-30h] BYREF
  int v19; // [sp+10h] [bp-2Ch] BYREF
  int v20; // [sp+14h] [bp-28h]
  int v21; // [sp+18h] [bp-24h]
  int v22[3]; // [sp+1Ch] [bp-20h] BYREF
  int v23[3]; // [sp+28h] [bp-14h] BYREF
  int v24; // [sp+34h] [bp-8h]

  v4 = *((_DWORD *)this + 9);
  v6 = *((_DWORD *)a2 + 1);
  v17 = v4;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v7 = *(void (**)(void))(*(_DWORD *)v6 + 8);
  else
    v7 = *(void (**)(void))(*(_DWORD *)v6 + 12);
  v7();
  v8 = *((_DWORD *)a2 + 2);
  v9 = 0;
  v18 = nullptr;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  memset(v22, 0, sizeof(v22));
  memset(v23, 0, sizeof(v23));
  if ( v8 == 1 )
  {
    while ( 1 )
    {
      v15 = v9;
      if ( v9 >= v17 )
        break;
      Ogre::Archive::operator<<((int)a2, (const char **)&v18);
      Ogre::Archive::serializeRawArray<Ogre::Vector3>((int)a2, &v19);
      Ogre::Archive::serializeRawArray<float>((unsigned int)a2, v22);
      if ( a3 <= 100 )
      {
        LODWORD(v10) = v23;
        HIDWORD(v10) = -1431655765 * ((v20 - v19) >> 2);
        std::vector<unsigned int>::resize(v10, 0);
      }
      else
      {
        Ogre::Archive::serializeRawArray<unsigned int>((unsigned int)a2, v23);
      }
      v24 = Ogre::ResourceManager::blockLoad(
              (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
              &v18,
              0);
      v11 = std::map<Ogre::FixedString,Ogre::PlantVecInfo_T>::operator[]((_DWORD *)this + 4, &v18);
      std::vector<Ogre::Vector3>::operator=((int)v11, (int)&v19);
      std::vector<float>::operator=((int)(v11 + 3), (int)v22);
      std::vector<unsigned int>::operator=((int)(v11 + 6), (int)v23);
      v11[9] = v24;
      v9 = v15 + 1;
    }
  }
  else
  {
    for ( i = *((int **)this + 7); i != (int *)((char *)this + 20); i = (int *)sub_391DDC(i) )
    {
      Ogre::FixedString::operator=((int *)&v18, i + 4);
      Ogre::Archive::operator<<((int)a2, (const char **)&v18);
      Ogre::Archive::serializeRawArray<Ogre::Vector3>((int)a2, i + 5);
      Ogre::Archive::serializeRawArray<float>((unsigned int)a2, i + 8);
      Ogre::Archive::serializeRawArray<unsigned int>((unsigned int)a2, i + 11);
    }
  }
  Ogre::PlantVecInfo_T::~PlantVecInfo_T((Ogre::PlantVecInfo_T *)&v19);
  return Ogre::FixedString::release((int)v18, v12);
}

