// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PlantVecInfo_T

//======================================================================
// Ogre::PlantVecInfo_T::~PlantVecInfo_T()
// address: 0x0019421A   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14PlantVecInfo_TD1Ev'
void __fastcall Ogre::PlantVecInfo_T::~PlantVecInfo_T(Ogre::PlantVecInfo_T *this)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *((void **)this + 6);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 3);
  if ( v3 != nullptr )
    operator delete(v3);
  if ( *(_DWORD *)this != 0 )
    operator delete(*(void **)this);
}


//======================================================================
// Ogre::PlantVecInfo_T::PlantVecInfo_T(Ogre::PlantVecInfo_T const&)
// address: 0x00194460   size: 0xB0 (176 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14PlantVecInfo_TC1ERKS0_'
Ogre::PlantVecInfo_T *__fastcall Ogre::PlantVecInfo_T::PlantVecInfo_T(
        Ogre::PlantVecInfo_T *this,
        const Ogre::PlantVecInfo_T *a2)
{
  unsigned int v4; // r6
  _DWORD *v5; // r2
  unsigned int v6; // r6
  char *v7; // r2
  unsigned int v8; // r6
  char *v9; // r2

  v4 = -1431655765 * ((*((_DWORD *)a2 + 1) - *(_DWORD *)a2) >> 2);
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  if ( v4 != 0 )
    v5 = (_DWORD *)sub_194150(v4);
  else
    v5 = nullptr;
  *(_DWORD *)this = v5;
  *((_DWORD *)this + 1) = v5;
  *((_DWORD *)this + 2) = &v5[3 * v4];
  *((_DWORD *)this + 1) = sub_19419C(*(char **)a2, *((char **)a2 + 1), v5);
  v6 = (*((_DWORD *)a2 + 4) - *((_DWORD *)a2 + 3)) >> 2;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  if ( v6 != 0 )
    v7 = (char *)sub_19416C(v6);
  else
    v7 = nullptr;
  *((_DWORD *)this + 3) = v7;
  *((_DWORD *)this + 4) = v7;
  *((_DWORD *)this + 5) = &v7[4 * v6];
  *((_DWORD *)this + 4) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<float>(
                            *((void **)a2 + 3),
                            *((_DWORD *)a2 + 4),
                            v7);
  v8 = (*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6)) >> 2;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  if ( v8 != 0 )
    v9 = (char *)sub_194184(v8);
  else
    v9 = nullptr;
  *((_DWORD *)this + 8) = &v9[4 * v8];
  *((_DWORD *)this + 6) = v9;
  *((_DWORD *)this + 7) = v9;
  *((_DWORD *)this + 7) = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned int>(
                            *((void **)a2 + 6),
                            *((_DWORD *)a2 + 7),
                            v9);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  return this;
}

