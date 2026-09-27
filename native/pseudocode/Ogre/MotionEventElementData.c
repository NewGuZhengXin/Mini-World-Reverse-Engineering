// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MotionEventElementData

//======================================================================
// Ogre::MotionEventElementData::getRTTI(void)const
// address: 0x001868B0   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::MotionEventElementData::getRTTI(Ogre::MotionEventElementData *this)
{
  return &Ogre::MotionEventElementData::m_RTTI;
}


//======================================================================
// Ogre::MotionEventElementData::~MotionEventElementData()
// address: 0x00186B3C   size: 0x62 (98 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre22MotionEventElementDataD1Ev'
void __fastcall Ogre::MotionEventElementData::~MotionEventElementData(Ogre::MotionEventElementData *this, void *a2)
{
  unsigned int v3; // r7
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  Ogre::FixedString **v6; // r6
  void *v7; // r0
  Ogre::FixedString **v8; // [sp+4h] [bp-8h]

  v3 = 0;
  *(_DWORD *)this = &off_457F20;
  while ( 1 )
  {
    v4 = *((_DWORD **)this + 11);
    if ( v3 >= (*((_DWORD *)this + 12) - (int)v4) >> 2 )
      break;
    v5 = (_DWORD *)v4[v3];
    if ( v5 != nullptr )
    {
      v6 = (Ogre::FixedString **)v5[1];
      v8 = (Ogre::FixedString **)v5[2];
      while ( v6 != v8 )
        Ogre::FixedString::~FixedString(v6++, a2);
      v7 = (void *)v5[1];
      if ( v7 != nullptr )
        operator delete(v7);
      operator delete(v5);
    }
    ++v3;
  }
  *((_DWORD *)this + 12) = v4;
  if ( v4 != nullptr )
    operator delete(v4);
  Ogre::MotionElementData::~MotionElementData((Ogre::FixedString **)this, a2);
}


//======================================================================
// Ogre::MotionEventElementData::~MotionEventElementData()
// address: 0x00186BA4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MotionEventElementData::~MotionEventElementData(Ogre::MotionEventElementData *this, void *a2)
{
  Ogre::MotionEventElementData::~MotionEventElementData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::MotionEventElementData::newObject(void)
// address: 0x00186CB8   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall Ogre::MotionEventElementData::newObject(Ogre::MotionEventElementData *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x38u);
  Ogre::MotionElementData::MotionElementData(v1);
  *v1 = &off_457F20;
  v1[11] = 0;
  v1[12] = 0;
  v1[13] = 0;
  return v1;
}


//======================================================================
// Ogre::MotionEventElementData::_serialize(Ogre::Archive &,int)
// address: 0x00187700   size: 0x100 (256 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::MotionEventElementData::_serialize(const char **this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive *result; // r0
  __int64 v6; // r0
  int v7; // r2
  void *v8; // r5
  int *v9; // r0
  int *v10; // r1
  unsigned int v11; // r2
  Ogre::FixedString **j; // r6
  unsigned int k; // r6
  int *v14; // [sp+4h] [bp-20h]
  unsigned int i; // [sp+8h] [bp-1Ch]
  Ogre::FixedString **v16; // [sp+Ch] [bp-18h]
  unsigned int v17; // [sp+10h] [bp-14h] BYREF
  void *v18; // [sp+14h] [bp-10h] BYREF
  unsigned int v19; // [sp+18h] [bp-Ch] BYREF
  Ogre::FixedString *v20[2]; // [sp+1Ch] [bp-8h] BYREF

  Ogre::MotionElementData::_serialize(this, a2, a3);
  v17 = (*(this + 12) - *(this + 11)) >> 2;
  result = Ogre::Archive::serialize(a2, &v17, 4u);
  for ( i = 0; i < v17; ++i )
  {
    if ( *((_DWORD *)a2 + 2) == 1 )
    {
      LODWORD(v6) = operator new(0x10u);
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 12) = 0;
      HIDWORD(v6) = *(this + 12);
      v7 = (int)*(this + 13);
      v18 = (void *)v6;
      if ( HIDWORD(v6) == v7 )
      {
        LODWORD(v6) = this + 11;
        std::vector<Ogre::EVENT_ITEM *>::_M_insert_aux(v6, &v18);
      }
      else
      {
        if ( HIDWORD(v6) != 0 )
          *(_DWORD *)HIDWORD(v6) = v6;
        *(this + 12) += 4;
      }
    }
    else
    {
      v18 = *(void **)&(*(this + 11))[4 * i];
    }
    Ogre::Archive::serialize(a2, v18, 4u);
    v8 = v18;
    v19 = (*((_DWORD *)v18 + 2) - *((_DWORD *)v18 + 1)) >> 2;
    Ogre::Archive::serialize(a2, &v19, 4u);
    if ( *((_DWORD *)a2 + 2) == 1 )
    {
      v9 = *((int **)v8 + 2);
      v10 = *((int **)v8 + 1);
      v20[0] = nullptr;
      v14 = v9;
      v11 = v9 - v10;
      if ( v19 <= v11 )
      {
        if ( v19 < v11 )
        {
          v16 = (Ogre::FixedString **)&v10[v19];
          for ( j = v16; ; ++j )
          {
            v10 = v14;
            if ( j == (Ogre::FixedString **)v14 )
              break;
            Ogre::FixedString::~FixedString(j, v14);
          }
          *((_DWORD *)v8 + 2) = v16;
        }
      }
      else
      {
        std::vector<Ogre::FixedString>::_M_fill_insert((int)v8 + 4, v9, v19 - v11, (int *)v20);
      }
      Ogre::FixedString::~FixedString(v20, v10);
    }
    for ( k = 0; ; ++k )
    {
      result = (Ogre::Archive *)v19;
      if ( k >= v19 )
        break;
      Ogre::Archive::operator<<((int)a2, (const char **)(*((_DWORD *)v8 + 1) + 4 * k));
    }
  }
  return result;
}

