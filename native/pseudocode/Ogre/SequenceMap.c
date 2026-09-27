// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SequenceMap

//======================================================================
// Ogre::SequenceMap::findSequenceDesc(int)
// address: 0x001923FC   size: 0x36 (54 bytes)
//======================================================================
char *__fastcall Ogre::SequenceMap::findSequenceDesc(Ogre::SequenceMap *this, int a2)
{
  char *v2; // r0
  char *v3; // r3
  char *v4; // r2
  char *v5; // r4
  char *result; // r0

  v2 = (char *)this + 4;
  v3 = *((char **)v2 + 1);
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( *((_DWORD *)v3 + 4) < a2 )
    {
      v5 = *((char **)v3 + 3);
      v3 = v4;
    }
    else
    {
      v5 = *((char **)v3 + 2);
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 )
    return nullptr;
  result = nullptr;
  if ( a2 >= *((_DWORD *)v4 + 4) )
    return v4 + 20;
  return result;
}


//======================================================================
// Ogre::SequenceMap::~SequenceMap()
// address: 0x00192454   size: 0x18 (24 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11SequenceMapD2Ev'
void __fastcall Ogre::SequenceMap::~SequenceMap(Ogre::SequenceMap *this)
{
  std::_Rb_tree<int,std::pair<int const,Ogre::SequenceMap::SeqDesc>,std::_Select1st<std::pair<int const,Ogre::SequenceMap::SeqDesc>>,std::less<int>,std::allocator<std::pair<int const,Ogre::SequenceMap::SeqDesc>>>::_M_erase(
    (int)this,
    *((_DWORD **)this + 2));
  Ogre::Singleton<Ogre::SequenceMap>::ms_Singleton = 0;
}


//======================================================================
// Ogre::SequenceMap::SequenceMap(char const*)
// address: 0x0019260C   size: 0xEA (234 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11SequenceMapC2EPKc'
Ogre::SequenceMap *__fastcall Ogre::SequenceMap::SequenceMap(Ogre::SequenceMap *this, char *a2)
{
  char *v3; // r7
  int v5; // r6
  int v6; // r0
  int v7; // r3
  int (__fastcall *v8)(int, char *, int, int *); // r7
  int v9; // r7
  char *v10; // r0
  char *v11; // r0
  char *v12; // r0
  char *v13; // r0
  _DWORD *v14; // r0
  int v15; // r2
  int v16; // r7
  int v17; // r7
  int v19; // [sp+18h] [bp-41Ch] BYREF
  int v20; // [sp+1Ch] [bp-418h] BYREF
  int v21; // [sp+20h] [bp-414h] BYREF
  int v22; // [sp+24h] [bp-410h] BYREF
  int v23; // [sp+28h] [bp-40Ch] BYREF
  char v24[1032]; // [sp+2Ch] [bp-408h] BYREF

  v3 = (char *)this + 4;
  Ogre::Singleton<Ogre::SequenceMap>::ms_Singleton = (int)this;
  j_memset((char *)this + 4, 0, 0x10u);
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 3) = v3;
  *((_DWORD *)this + 4) = v3;
  v5 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, a2, 1);
  if ( v5 != 0 )
  {
    while ( 1 )
    {
      v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 44))(v5);
      v7 = *(_DWORD *)v5;
      if ( v6 != 0 )
        break;
      v8 = *(int (__fastcall **)(int, char *, int, int *))(v7 + 16);
      sub_3BF0BC((int)&v19, "\n");
      v9 = v8(v5, v24, 1024, &v19);
      sub_3BDF80(&v19);
      if ( v9 != 0 )
      {
        v24[1023] = 0;
        v19 = 0;
        v10 = sub_1923D0(v24, &v19);
        v11 = sub_1923D0(v10, &v20);
        v12 = sub_1923D0(v11, &v21);
        v13 = sub_1923D0(v12, &v22);
        sub_1923D0(v13, &v23);
        if ( v19 > 0 )
        {
          v14 = (_DWORD *)std::map<int,Ogre::SequenceMap::SeqDesc>::operator[](this, &v19);
          v15 = v20;
          v16 = v21;
          *v14 = v19;
          v14[1] = v15;
          v14[2] = v16;
          v17 = v23;
          v14[3] = v22;
          v14[4] = v17;
        }
      }
    }
    (*(void (__fastcall **)(int))(v7 + 4))(v5);
  }
  return this;
}

