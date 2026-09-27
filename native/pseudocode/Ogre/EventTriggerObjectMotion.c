// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::EventTriggerObjectMotion

//======================================================================
// Ogre::EventTriggerObjectMotion::StartObject(Ogre::Entity *)
// address: 0x00190E80   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::EventTriggerObjectMotion::StartObject(int this, Ogre::Entity *a2)
{
  *(_DWORD *)(this + 4) = 1;
  return this;
}


//======================================================================
// Ogre::EventTriggerObjectMotion::EndObject(Ogre::Entity *)
// address: 0x00190E86   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::EventTriggerObjectMotion::EndObject(Ogre::EventTriggerObjectMotion *this, Ogre::Entity *a2)
{
  int result; // r0

  result = (*(int (__fastcall **)(Ogre::EventTriggerObjectMotion *, _DWORD, Ogre::Entity *))(*(_DWORD *)this + 20))(
             this,
             *(_DWORD *)(*((_DWORD *)this + 2) + 16),
             a2);
  *((_DWORD *)this + 1) = 2;
  return result;
}


//======================================================================
// Ogre::EventTriggerObjectMotion::StopObject(Ogre::Entity *)
// address: 0x00190E9E   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::EventTriggerObjectMotion::StopObject(Ogre::EventTriggerObjectMotion *this, Ogre::Entity *a2)
{
  return (*(int (__fastcall **)(Ogre::EventTriggerObjectMotion *, Ogre::Entity *))(*(_DWORD *)this + 8))(this, a2);
}


//======================================================================
// Ogre::EventTriggerObjectMotion::DelayStopObject(Ogre::Entity *,float)
// address: 0x00190EA8   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::EventTriggerObjectMotion::DelayStopObject(
        Ogre::EventTriggerObjectMotion *this,
        Ogre::Entity *a2,
        float a3)
{
  return (*(int (__fastcall **)(Ogre::EventTriggerObjectMotion *, Ogre::Entity *, _DWORD))(*(_DWORD *)this + 8))(
           this,
           a2,
           LODWORD(a3));
}


//======================================================================
// Ogre::EventTriggerObjectMotion::OnRestartObject(Ogre::Entity *,float)
// address: 0x00190EB2   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::EventTriggerObjectMotion::OnRestartObject(
        Ogre::EventTriggerObjectMotion *this,
        Ogre::Entity *a2,
        float a3)
{
  int result; // r0

  result = (**(int (__fastcall ***)(Ogre::EventTriggerObjectMotion *, Ogre::Entity *, _DWORD))this)(
             this,
             a2,
             LODWORD(a3));
  *((_DWORD *)this + 1) = 1;
  return result;
}


//======================================================================
// Ogre::EventTriggerObjectMotion::UpdateData(float,Ogre::Entity *)
// address: 0x00190F44   size: 0x38 (56 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::EventTriggerObjectMotion::UpdateData(
        Ogre::EventTriggerObjectMotion *this,
        float a2,
        Ogre::Entity *a3)
{
  int ***i; // r5
  int **v6; // r4
  unsigned __int64 v8; // [sp+0h] [bp-Ch]

  v8 = __PAIR64__((unsigned int)a3, (unsigned int)this);
  for ( i = *((int ****)this + 15); i != *((int ****)this + 16); ++i )
  {
    v6 = *i;
    if ( *i != nullptr && *((_BYTE *)v6 + 16) == 0 && a2 > *((float *)v6 + 3) )
      Ogre::MotionEvent::TriggerMe(*i, (Ogre::Entity *)HIDWORD(v8));
  }
  return v8;
}


//======================================================================
// Ogre::EventTriggerObjectMotion::InitObject(Ogre::Entity *)
// address: 0x00190F82   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Ogre::EventTriggerObjectMotion::InitObject(int this, Ogre::Entity *a2)
{
  int *v2; // r4
  int v3; // r5
  int v4; // r0

  v2 = *(int **)(this + 60);
  v3 = this;
  *(_DWORD *)(this + 4) = 0;
  while ( v2 != *(int **)(v3 + 64) )
  {
    v4 = *v2++;
    this = Ogre::MotionEvent::Reset(v4);
  }
  return this;
}


//======================================================================
// Ogre::EventTriggerObjectMotion::Clear(void)
// address: 0x00190F9C   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall Ogre::EventTriggerObjectMotion::Clear(__int64 this)
{
  int v1; // r6
  int i; // r7
  int v3; // r3
  int v4; // r4
  void *v5; // r1
  Ogre::FixedString **v6; // r5
  __int64 v8; // [sp+0h] [bp-Ch]

  v8 = this;
  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(v1 + 60);
    if ( i >= (*(_DWORD *)(v1 + 64) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(4 * i + v3);
    if ( v4 != 0 )
    {
      v5 = *(void **)(v4 + 4);
      v6 = *(Ogre::FixedString ***)v4;
      HIDWORD(v8) = v5;
      while ( v6 != (Ogre::FixedString **)HIDWORD(v8) )
        Ogre::FixedString::~FixedString(v6++, v5);
      if ( *(_DWORD *)v4 != 0 )
        operator delete(*(void **)v4);
      operator delete((void *)v4);
    }
  }
  *(_DWORD *)(v1 + 64) = v3;
  return v8;
}


//======================================================================
// Ogre::EventTriggerObjectMotion::~EventTriggerObjectMotion()
// address: 0x00190FE4   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre24EventTriggerObjectMotionD1Ev'
void __fastcall Ogre::EventTriggerObjectMotion::~EventTriggerObjectMotion(__int64 this)
{
  Ogre::ObjectMotion *v1; // r4
  void *v2; // r0

  v1 = (Ogre::ObjectMotion *)this;
  *(_DWORD *)this = &off_458330;
  Ogre::EventTriggerObjectMotion::Clear(this);
  v2 = *((void **)v1 + 15);
  if ( v2 != nullptr )
    operator delete(v2);
  Ogre::ObjectMotion::~ObjectMotion(v1);
}


//======================================================================
// Ogre::EventTriggerObjectMotion::~EventTriggerObjectMotion()
// address: 0x00191010   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::EventTriggerObjectMotion::~EventTriggerObjectMotion(__int64 this)
{
  void *v1; // r4

  v1 = (void *)this;
  Ogre::EventTriggerObjectMotion::~EventTriggerObjectMotion(this);
  operator delete(v1);
}


//======================================================================
// Ogre::EventTriggerObjectMotion::LoadFromEventList(Ogre::MotionEventElementData *)
// address: 0x0019120C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall Ogre::EventTriggerObjectMotion::LoadFromEventList(__int64 this)
{
  __int64 v1; // kr00_8
  unsigned int i; // r6
  int v3; // r3
  int v4; // r0
  int v5; // r3
  int v7; // [sp+4h] [bp-10h]
  int v8; // [sp+Ch] [bp-8h] BYREF

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(HIDWORD(v1) + 44);
    if ( i >= (*(_DWORD *)(HIDWORD(v1) + 48) - v3) >> 2 )
      break;
    v7 = *(_DWORD *)(4 * i + v3);
    v4 = operator new(0x14u);
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 12) = -1082130432;
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    *(_BYTE *)(v4 + 16) = 0;
    v8 = v4;
    LODWORD(this) = std::vector<Ogre::FixedString>::operator=(v4, (int **)(v7 + 4));
    v5 = v8;
    HIDWORD(this) = *(_DWORD *)v7;
    *(_BYTE *)(v8 + 16) = 0;
    *(_DWORD *)(v5 + 12) = HIDWORD(this);
    HIDWORD(this) = *(_DWORD *)(v1 + 64);
    if ( HIDWORD(this) == *(_DWORD *)(v1 + 68) )
    {
      LODWORD(this) = v1 + 60;
      LODWORD(this) = std::vector<Ogre::MotionEvent *>::_M_insert_aux(this, &v8);
    }
    else
    {
      if ( HIDWORD(this) != 0 )
        *(_DWORD *)HIDWORD(this) = v5;
      *(_DWORD *)(v1 + 64) += 4;
    }
  }
  return this;
}

