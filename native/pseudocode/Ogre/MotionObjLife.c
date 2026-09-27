// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MotionObjLife

//======================================================================
// Ogre::MotionObjLife::~MotionObjLife()
// address: 0x0015FA28   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13MotionObjLifeD1Ev'
void __fastcall Ogre::MotionObjLife::~MotionObjLife(Ogre::MotionObjLife *this)
{
  *(_DWORD *)this = &off_456A88;
}


//======================================================================
// Ogre::MotionObjLife::OnRestart(Ogre::Entity *,float)
// address: 0x0015FA70   size: 0x58 (88 bytes)
//======================================================================
int __fastcall Ogre::MotionObjLife::OnRestart(Ogre::MotionObjLife *this, Ogre::Entity *a2, float a3)
{
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int v9; // r5

  v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 76))(*((_DWORD *)this + 1));
  v7 = *((_DWORD *)this + 1);
  if ( v6 == 2 )
  {
    (**(void (__fastcall ***)(int, Ogre::Entity *))v7)(v7, a2);
  }
  else
  {
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 76))(v7);
    v9 = *((_DWORD *)this + 1);
    if ( v8 == 1 )
    {
      if ( *((float *)this + 2) > 0.016 )
        (**(void (__fastcall ***)(_DWORD, Ogre::Entity *))v9)(*((_DWORD *)this + 1), a2);
    }
    else
    {
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v9 + 76))(*((_DWORD *)this + 1));
    }
  }
  return (*(int (__fastcall **)(_DWORD, Ogre::Entity *, _DWORD))(**((_DWORD **)this + 1) + 36))(
           *((_DWORD *)this + 1),
           a2,
           LODWORD(a3));
}


//======================================================================
// Ogre::MotionObjLife::Update(Ogre::Entity *,float)
// address: 0x0015FACC   size: 0x10A (266 bytes)
//======================================================================
__int64 __fastcall Ogre::MotionObjLife::Update(Ogre::MotionObjLife *this, Ogre::Entity *a2, float a3)
{
  float v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  LODWORD(v12) = this;
  HIDWORD(v12) = *((_DWORD *)this + 2);
  if ( *((_BYTE *)this + 12) == 0 )
    HIDWORD(v12) = 0;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 76))(*((_DWORD *)this + 1)) != 0 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 76))(*((_DWORD *)this + 1)) == 1 )
    {
      *((float *)&v12 + 1) = a3 - *((float *)&v12 + 1);
      (*(void (__fastcall **)(_DWORD, _DWORD, Ogre::Entity *))(**((_DWORD **)this + 1) + 20))(
        *((_DWORD *)this + 1),
        HIDWORD(v12),
        a2);
      if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 28))(*((_DWORD *)this + 1)) != 0 )
      {
        v9 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 28))(*((_DWORD *)this + 1));
        (*(void (__fastcall **)(int, _DWORD, _DWORD, Ogre::Entity *))(*(_DWORD *)v9 + 60))(
          v9,
          *((_DWORD *)this + 1),
          HIDWORD(v12),
          a2);
      }
      if ( a3 > *((float *)this + 4) && *((_BYTE *)this + 20) != 0 )
      {
        (*(void (__fastcall **)(_DWORD, Ogre::Entity *))(**((_DWORD **)this + 1) + 8))(*((_DWORD *)this + 1), a2);
        if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 28))(*((_DWORD *)this + 1)) != 0 )
        {
          v10 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 28))(*((_DWORD *)this + 1));
          (*(void (__fastcall **)(int, _DWORD, Ogre::Entity *))(*(_DWORD *)v10 + 52))(v10, *((_DWORD *)this + 1), a2);
        }
      }
    }
  }
  else if ( a3 > *((float *)this + 2) && *((_BYTE *)this + 12) != 0 )
  {
    (*(void (__fastcall **)(_DWORD, Ogre::Entity *))(**((_DWORD **)this + 1) + 4))(*((_DWORD *)this + 1), a2);
    v6 = a3 - *((float *)&v12 + 1);
    (*(void (__fastcall **)(_DWORD, float, Ogre::Entity *))(**((_DWORD **)this + 1) + 20))(
      *((_DWORD *)this + 1),
      COERCE_FLOAT(LODWORD(v6)),
      a2);
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 28))(*((_DWORD *)this + 1)) != 0 )
    {
      v7 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 28))(*((_DWORD *)this + 1));
      (*(void (__fastcall **)(int, _DWORD, Ogre::Entity *))(*(_DWORD *)v7 + 48))(v7, *((_DWORD *)this + 1), a2);
      v8 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 28))(*((_DWORD *)this + 1));
      (*(void (__fastcall **)(int, _DWORD, float, Ogre::Entity *))(*(_DWORD *)v8 + 60))(
        v8,
        *((_DWORD *)this + 1),
        COERCE_FLOAT(LODWORD(v6)),
        a2);
    }
  }
  return v12;
}


//======================================================================
// Ogre::MotionObjLife::~MotionObjLife()
// address: 0x0015FC38   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::MotionObjLife::~MotionObjLife(Ogre::MotionObjLife *this)
{
  *(_DWORD *)this = &off_456A88;
  operator delete(this);
}


//======================================================================
// Ogre::MotionObjLife::OnPlay(Ogre::Entity *)
// address: 0x0015FDE8   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::MotionObjLife::OnPlay(int result, int a2)
{
  int v2; // r4
  int v4; // r0

  v2 = result;
  if ( *(_BYTE *)(result + 12) == 0 )
  {
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(result + 4) + 4))(*(_DWORD *)(result + 4));
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v2 + 4) + 28))(*(_DWORD *)(v2 + 4));
    if ( result != 0 )
    {
      v4 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v2 + 4) + 28))(*(_DWORD *)(v2 + 4));
      return (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v4 + 48))(v4, *(_DWORD *)(v2 + 4), a2);
    }
  }
  return result;
}


//======================================================================
// Ogre::MotionObjLife::OnEnd(Ogre::Entity *)
// address: 0x0015FE1C   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::MotionObjLife::OnEnd(int a1, int a2)
{
  int result; // r0
  int v5; // r0

  result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 76))(*(_DWORD *)(a1 + 4));
  if ( result == 1 )
  {
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 8))(*(_DWORD *)(a1 + 4), a2);
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 28))(*(_DWORD *)(a1 + 4));
    if ( result != 0 )
    {
      v5 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 28))(*(_DWORD *)(a1 + 4));
      return (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v5 + 52))(v5, *(_DWORD *)(a1 + 4), a2);
    }
  }
  return result;
}


//======================================================================
// Ogre::MotionObjLife::OnStop(Ogre::Entity *)
// address: 0x0015FE58   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::MotionObjLife::OnStop(int a1, int a2)
{
  int result; // r0
  int v5; // r0

  result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 76))(*(_DWORD *)(a1 + 4));
  if ( result == 1 )
  {
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 12))(*(_DWORD *)(a1 + 4), a2);
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 28))(*(_DWORD *)(a1 + 4));
    if ( result != 0 )
    {
      v5 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 28))(*(_DWORD *)(a1 + 4));
      return (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v5 + 56))(v5, *(_DWORD *)(a1 + 4), a2);
    }
  }
  return result;
}


//======================================================================
// Ogre::MotionObjLife::OnDelayStop(Ogre::Entity *,float)
// address: 0x0015FE94   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::MotionObjLife::OnDelayStop(int a1, int a2, int a3)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 76))(*(_DWORD *)(a1 + 4));
  if ( result == 1 )
    return (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 4) + 16))(*(_DWORD *)(a1 + 4), a2, a3);
  return result;
}

