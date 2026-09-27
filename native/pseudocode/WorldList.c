// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldList

//======================================================================
// WorldList::WorldList(void)
// address: 0x002F22C0   size: 0xA (10 bytes)
//======================================================================
// Alternative name is '_ZN9WorldListC2Ev'
void __fastcall WorldList::WorldList(WorldList *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
}


//======================================================================
// WorldList::updateMy(tagCSMyOWList const&)
// address: 0x002F22CC   size: 0xE4 (228 bytes)
//======================================================================
Ogre::Timer *__fastcall WorldList::updateMy(Ogre::Timer *result, _DWORD *a2)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r4
  _DWORD *v4; // r3
  __suseconds_t v5; // r1
  int v6; // r3
  int v7; // r2
  GameEventQue *v8; // r0
  unsigned int i; // [sp+Ch] [bp-10h]
  int j; // [sp+10h] [bp-Ch]

  v2 = result;
  for ( i = 0; i < (v2[1] - *v2) >> 2; ++i )
  {
    if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)(*v2 + 4 * i) + 36) - 2) <= 1 )
    {
      v3 = a2;
      for ( j = 0; j < *a2; ++j )
      {
        v4 = *(_DWORD **)(*v2 + 4 * i);
        if ( *v4 == v3[2] )
        {
          v4[16] = *((unsigned __int8 *)v3 + 713);
          *(_DWORD *)(*(_DWORD *)(*v2 + 4 * i) + 68) = *((unsigned __int8 *)v3 + 714);
          v5 = *(_DWORD *)(*v2 + 4 * i);
          result = (Ogre::Timer *)*((unsigned __int8 *)v3 + 178);
          v6 = *(_DWORD *)(v5 + 36);
          *(_DWORD *)(v5 + 36) = result;
          v7 = *((unsigned __int8 *)v3 + 178);
          if ( v7 == 1 )
          {
            v8 = (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton;
LABEL_18:
            result = (Ogre::Timer *)GameEventQue::postWorldListChange(v8, true, v7);
            goto LABEL_19;
          }
          if ( *((_BYTE *)v3 + 178) == 0 )
          {
            v7 = 2;
            v8 = (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton;
            goto LABEL_18;
          }
          if ( v7 == 2 )
          {
            if ( v6 == 3 )
              result = (Ogre::Timer *)GameEventQue::postWorldListChange(
                                        (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
                                        true,
                                        0);
            Ogre::Timer::getSystemTick(result, v5);
            result = (Ogre::Timer *)GameEventQue::postWorldOpenPush((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
          }
          else if ( v7 == 3 && v6 == 2 )
          {
            v7 = 0;
            v8 = (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton;
            goto LABEL_18;
          }
        }
LABEL_19:
        v3 += 196;
      }
    }
  }
  return result;
}


//======================================================================
// WorldList::findWorldDesc(int)
// address: 0x002F23C0   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall WorldList::findWorldDesc(WorldList *this, int a2)
{
  int v2; // r2
  int v3; // r4
  int i; // r3
  _DWORD *result; // r0

  v2 = *(_DWORD *)this;
  v3 = (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2;
  for ( i = 0; i != v3; ++i )
  {
    result = *(_DWORD **)(v2 + 4 * i);
    if ( *result == a2 )
      return result;
  }
  return nullptr;
}


//======================================================================
// WorldList::getNumOpenWorld(void)
// address: 0x002F23E0   size: 0x26 (38 bytes)
//======================================================================
int __fastcall WorldList::getNumOpenWorld(WorldList *this)
{
  int v1; // r2
  int v2; // r1
  int v3; // r3
  int result; // r0
  int v5; // r1
  int v6; // r4

  v1 = *(_DWORD *)this;
  v2 = *((_DWORD *)this + 1);
  v3 = 0;
  result = 0;
  v5 = (v2 - v1) >> 2;
  while ( v3 != v5 )
  {
    v6 = *(_DWORD *)(v1 + 4 * v3++);
    result += *(_DWORD *)(v6 + 36) == 1;
  }
  return result;
}


//======================================================================
// WorldList::getMyCreateWorldNum(void)
// address: 0x002F2406   size: 0x26 (38 bytes)
//======================================================================
int __fastcall WorldList::getMyCreateWorldNum(WorldList *this)
{
  int v1; // r3
  int v2; // r2
  int v3; // r4
  int result; // r0
  int v5; // r1

  v1 = 0;
  v2 = *(_DWORD *)this;
  v3 = (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2;
  result = 0;
  while ( v1 != v3 )
  {
    v5 = *(_DWORD *)(v2 + 4 * v1++);
    result += *(_DWORD *)(v5 + 16) == *(_DWORD *)(v5 + 12);
  }
  return result;
}


//======================================================================
// WorldList::getDownWorldNum(void)
// address: 0x002F242C   size: 0x2A (42 bytes)
//======================================================================
int __fastcall WorldList::getDownWorldNum(WorldList *this)
{
  int v1; // r3
  int v2; // r2
  int v3; // r5
  int result; // r0
  int v5; // r4
  int v6; // r1

  v1 = 0;
  v2 = *(_DWORD *)this;
  v3 = (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2;
  result = 0;
  while ( v1 != v3 )
  {
    v5 = *(_DWORD *)(v2 + 4 * v1);
    v6 = *(_DWORD *)(v5 + 16);
    if ( v6 != 0 )
      result += *(_DWORD *)(v5 + 12) != v6;
    ++v1;
  }
  return result;
}


//======================================================================
// WorldList::getNumWorld(void)
// address: 0x002F2456   size: 0xA (10 bytes)
//======================================================================
int __fastcall WorldList::getNumWorld(WorldList *this)
{
  return (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2;
}


//======================================================================
// WorldList::getWorldDesc(int)
// address: 0x002F2460   size: 0x8 (8 bytes)
//======================================================================
int __fastcall WorldList::getWorldDesc(WorldList *this, int a2)
{
  return *(_DWORD *)(4 * a2 + *(_DWORD *)this);
}


//======================================================================
// WorldList::deleteWorldDesc(int)
// address: 0x002F24B6   size: 0x38 (56 bytes)
//======================================================================
WorldDesc ***__fastcall WorldList::deleteWorldDesc(WorldDesc ***this, int a2)
{
  WorldDesc **v2; // r2
  WorldDesc **v3; // r3
  WorldDesc ***v4; // r4
  WorldDesc **v5; // r6
  WorldDesc *v6; // r5
  int v7; // r1

  v2 = *(this + 1);
  v3 = *this;
  v4 = this;
  while ( 1 )
  {
    v5 = v3;
    if ( v3 == v2 )
      break;
    v6 = *v3++;
    this = *(WorldDesc ****)v6;
    if ( *(_DWORD *)v6 == a2 )
    {
      WorldDesc::~WorldDesc(v6);
      operator delete(v6);
      v7 = (int)v4[1];
      this = (WorldDesc ***)(v5 + 1);
      if ( v5 + 1 != (WorldDesc **)v7 )
        this = (WorldDesc ***)std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<WorldDesc *>(
                                this,
                                v7,
                                v5);
      --v4[1];
      return this;
    }
  }
  return this;
}


//======================================================================
// WorldList::clear(void)
// address: 0x002F2578   size: 0x32 (50 bytes)
//======================================================================
void __fastcall WorldList::clear(WorldList *this)
{
  unsigned int i; // r4
  int v3; // r3
  unsigned int v4; // r2
  void *v5; // r6

  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)this;
    v4 = (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2;
    if ( i >= v4 )
      break;
    v5 = *(void **)(4 * i + v3);
    if ( v5 != nullptr )
    {
      WorldDesc::~WorldDesc(*(WorldDesc **)(4 * i + v3));
      operator delete(v5);
    }
  }
  if ( v4 != 0 )
    *((_DWORD *)this + 1) = v3;
}


//======================================================================
// WorldList::~WorldList()
// address: 0x002F25AA   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9WorldListD2Ev'
void __fastcall WorldList::~WorldList(WorldList *this)
{
  WorldList::clear(this);
  if ( *(_DWORD *)this != 0 )
    operator delete(*(void **)this);
}


//======================================================================
// WorldList::initMy(tagCSMyOWList const&)
// address: 0x002F263C   size: 0x4A (74 bytes)
//======================================================================
__int64 __fastcall WorldList::initMy(__int64 a1, int a2)
{
  _DWORD *v2; // r6
  void **v3; // r7
  int v4; // r5
  int v5; // r4
  _DWORD *v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+8h] [bp-4h]

  v8 = a1;
  v9 = a2;
  v2 = (_DWORD *)HIDWORD(a1);
  v3 = (void **)a1;
  WorldList::clear((WorldList *)a1);
  v4 = (int)(v2 + 2);
  v5 = 0;
  while ( v5 < *v2 )
  {
    v6 = (_DWORD *)operator new(0xB8u);
    HIDWORD(v8) = v6;
    ++v5;
    v6[2] = &byte_55FB88;
    v6[5] = &byte_55FB88;
    v6[15] = &byte_55FB88;
    v6[22] = &byte_55FB88;
    v6[24] = &byte_55FB88;
    sub_2F213C((int)v6, v4);
    std::vector<WorldDesc *>::push_back(v3, (_DWORD *)&v8 + 1);
    v4 += 784;
  }
  return v8;
}


//======================================================================
// WorldList::initOpen(tagCSOpenOWList const&)
// address: 0x002F268C   size: 0x4A (74 bytes)
//======================================================================
__int64 __fastcall WorldList::initOpen(__int64 a1, int a2)
{
  int v2; // r6
  void **v3; // r7
  int v4; // r5
  int v5; // r4
  _DWORD *v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+8h] [bp-4h]

  v8 = a1;
  v9 = a2;
  v2 = HIDWORD(a1);
  v3 = (void **)a1;
  WorldList::clear((WorldList *)a1);
  v4 = v2 + 8;
  v5 = 0;
  while ( v5 < *(__int16 *)(v2 + 6) )
  {
    v6 = (_DWORD *)operator new(0xB8u);
    HIDWORD(v8) = v6;
    ++v5;
    v6[2] = &byte_55FB88;
    v6[5] = &byte_55FB88;
    v6[15] = &byte_55FB88;
    v6[22] = &byte_55FB88;
    v6[24] = &byte_55FB88;
    sub_2F20DA(v6, v4);
    std::vector<WorldDesc *>::push_back(v3, (_DWORD *)&v8 + 1);
    v4 += 352;
  }
  return v8;
}


//======================================================================
// WorldList::addMyWorld(tagOWorld const&)
// address: 0x002F26DC   size: 0x3E (62 bytes)
//======================================================================
__int64 __fastcall WorldList::addMyWorld(__int64 a1, int a2)
{
  int v2; // r4
  void **v3; // r5
  _DWORD *v4; // r0
  __int64 v6; // [sp+0h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-4h]

  v6 = a1;
  v7 = a2;
  v2 = HIDWORD(a1);
  v3 = (void **)a1;
  HIDWORD(v6) = WorldList::findWorldDesc((WorldList *)a1, *(_DWORD *)HIDWORD(a1));
  if ( HIDWORD(v6) == 0 )
  {
    v4 = (_DWORD *)operator new(0xB8u);
    HIDWORD(v6) = v4;
    v4[2] = &byte_55FB88;
    v4[5] = &byte_55FB88;
    v4[15] = &byte_55FB88;
    v4[22] = &byte_55FB88;
    v4[24] = &byte_55FB88;
    std::vector<WorldDesc *>::push_back(v3, (_DWORD *)&v6 + 1);
  }
  sub_2F213C(SHIDWORD(v6), v2);
  return v6;
}


//======================================================================
// WorldList::addOpenWorld(tagOpenOWShow const&)
// address: 0x002F2720   size: 0x3E (62 bytes)
//======================================================================
__int64 __fastcall WorldList::addOpenWorld(__int64 a1, int a2)
{
  int v2; // r4
  void **v3; // r5
  _DWORD *v4; // r0
  __int64 v6; // [sp+0h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-4h]

  v6 = a1;
  v7 = a2;
  v2 = HIDWORD(a1);
  v3 = (void **)a1;
  HIDWORD(v6) = WorldList::findWorldDesc((WorldList *)a1, *(_DWORD *)HIDWORD(a1));
  if ( HIDWORD(v6) == 0 )
  {
    v4 = (_DWORD *)operator new(0xB8u);
    HIDWORD(v6) = v4;
    v4[2] = &byte_55FB88;
    v4[5] = &byte_55FB88;
    v4[15] = &byte_55FB88;
    v4[22] = &byte_55FB88;
    v4[24] = &byte_55FB88;
    std::vector<WorldDesc *>::push_back(v3, (_DWORD *)&v6 + 1);
  }
  sub_2F20DA((_DWORD *)HIDWORD(v6), v2);
  return v6;
}

