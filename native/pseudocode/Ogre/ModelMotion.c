// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ModelMotion

//======================================================================
// Ogre::ModelMotion::~ModelMotion()
// address: 0x0017D2EC   size: 0x92 (146 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11ModelMotionD1Ev'
void __fastcall Ogre::ModelMotion::~ModelMotion(Ogre::ModelMotion *this)
{
  int v2; // r5
  int v3; // r3
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r3
  int v7; // r0
  void *v8; // r1
  void *v9; // r0

  v2 = 0;
  *(_DWORD *)this = &off_457978;
  *((_DWORD *)this + 2) = off_4579A0;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 6);
    if ( v2 >= (*((_DWORD *)this + 7) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(4 * v2 + v3);
    if ( v4 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 68))(v4);
    ++v2;
  }
  v5 = *((_DWORD **)this + 13);
  if ( v5 != nullptr )
  {
    v6 = v5[1] - 1;
    v5[1] = v6;
    if ( v6 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v5 + 24))(v5);
    *((_DWORD *)this + 13) = 0;
  }
  v7 = *((_DWORD *)this + 15);
  if ( v7 != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
    *((_DWORD *)this + 15) = 0;
  }
  v8 = *((void **)this + 14);
  if ( v8 != nullptr )
    Ogre::LoadWrap::breakLoad((Ogre::ModelMotion *)((char *)this + 8), (unsigned int)v8);
  Ogre::FixedString::release(*((_DWORD *)this + 10), v8);
  v9 = *((void **)this + 6);
  if ( v9 != nullptr )
    operator delete(v9);
  Ogre::LoadWrap::~LoadWrap((Ogre::ModelMotion *)((char *)this + 8));
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::ModelMotion::~ModelMotion()
// address: 0x0017D39C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ModelMotion::~ModelMotion(Ogre::ModelMotion *this)
{
  Ogre::ModelMotion::~ModelMotion(this);
  operator delete(this);
}


//======================================================================
// Ogre::ModelMotion::Pause(bool,Ogre::Entity *)
// address: 0x0017D3C4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall Ogre::ModelMotion::Pause(int result, char a2, int a3)
{
  int v3; // r4
  int i; // r5
  int v6; // r1
  int v7; // r0

  v3 = result;
  *(_BYTE *)(result + 13) = a2;
  for ( i = 0; ; ++i )
  {
    v6 = *(_DWORD *)(v3 + 24);
    if ( i >= (*(_DWORD *)(v3 + 28) - v6) >> 2 )
      break;
    v7 = *(_DWORD *)(4 * i + v6);
    result = (*(int (__fastcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)v7 + 24))(
               v7,
               *(unsigned __int8 *)(v3 + 13),
               *(_DWORD *)(v3 + 20),
               a3);
  }
  return result;
}


//======================================================================
// Ogre::ModelMotion::resetUpdate(bool,float,Ogre::Entity *)
// address: 0x0017D3F0   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::ModelMotion::resetUpdate(Ogre::ModelMotion *this, bool a2, float a3, Ogre::Entity *a4)
{
  int result; // r0
  unsigned int i; // r5
  int v8; // r3
  int v9; // r0

  *((_BYTE *)this + 13) = a2;
  result = a3 >= 0.0;
  if ( a3 >= 0.0 )
    *((float *)this + 5) = a3;
  for ( i = 0; ; ++i )
  {
    v8 = *((_DWORD *)this + 6);
    if ( i >= (*((_DWORD *)this + 7) - v8) >> 2 )
      break;
    v9 = *(_DWORD *)(4 * i + v8);
    result = (*(int (__fastcall **)(int, _DWORD, _DWORD, Ogre::Entity *))(*(_DWORD *)v9 + 24))(
               v9,
               *((unsigned __int8 *)this + 13),
               *((_DWORD *)this + 5),
               a4);
  }
  return result;
}


//======================================================================
// Ogre::ModelMotion::Update(float,Ogre::Entity *)
// address: 0x0017D42C   size: 0xDC (220 bytes)
//======================================================================
float __fastcall Ogre::ModelMotion::Update(float this, float a2, Ogre::Entity *a3)
{
  float v3; // r4
  int v5; // r1
  int i; // r5
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r3
  int j; // r5
  int v12; // r3
  int v13; // r0
  int v14; // r0
  int v15; // r5
  int v16; // r3
  int v17; // r0
  int v18; // r0

  v3 = this;
  if ( *(_BYTE *)(LODWORD(this) + 12) != 0 )
  {
    this = a2 + *(float *)(LODWORD(this) + 20);
    v5 = *(_DWORD *)(LODWORD(v3) + 52);
    *(float *)(LODWORD(v3) + 20) = this;
    if ( v5 != 0 )
    {
      if ( this <= *(float *)(LODWORD(v3) + 36) )
      {
        for ( i = 0; ; ++i )
        {
          v7 = *(_DWORD *)(LODWORD(v3) + 24);
          if ( i >= (*(_DWORD *)(LODWORD(v3) + 28) - v7) >> 2 )
            break;
          v8 = *(_DWORD *)(4 * i + v7);
          v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 72))(v8);
          (*(void (__fastcall **)(int, Ogre::Entity *, _DWORD))(*(_DWORD *)v9 + 28))(
            v9,
            a3,
            *(_DWORD *)(LODWORD(v3) + 20));
        }
      }
      LODWORD(this) = *(float *)(LODWORD(v3) + 20) > *(float *)(LODWORD(v3) + 36);
      if ( *(float *)(LODWORD(v3) + 20) > *(float *)(LODWORD(v3) + 36) )
      {
        v10 = *(_DWORD *)(LODWORD(v3) + 44);
        if ( v10 != 0 )
        {
          if ( v10 == 1 )
          {
            this = *(float *)(LODWORD(v3) + 20)
                 - (float)(*(float *)(LODWORD(v3) + 36)
                         * (float)(int)(float)(*(float *)(LODWORD(v3) + 20) / *(float *)(LODWORD(v3) + 36)));
            v15 = 0;
            *(float *)(LODWORD(v3) + 20) = this;
            while ( 1 )
            {
              v16 = *(_DWORD *)(LODWORD(v3) + 24);
              if ( v15 >= (*(_DWORD *)(LODWORD(v3) + 28) - v16) >> 2 )
                break;
              v17 = *(_DWORD *)(4 * v15++ + v16);
              v18 = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 72))(v17);
              this = COERCE_FLOAT(
                       (*(int (__fastcall **)(int, Ogre::Entity *, _DWORD))(*(_DWORD *)v18 + 24))(
                         v18,
                         a3,
                         *(_DWORD *)(LODWORD(v3) + 20)));
            }
          }
        }
        else
        {
          for ( j = 0; ; ++j )
          {
            v12 = *(_DWORD *)(LODWORD(v3) + 24);
            if ( j >= (*(_DWORD *)(LODWORD(v3) + 28) - v12) >> 2 )
              break;
            v13 = *(_DWORD *)(4 * j + v12);
            v14 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 72))(v13);
            this = COERCE_FLOAT((*(int (__fastcall **)(int, Ogre::Entity *))(*(_DWORD *)v14 + 12))(v14, a3));
          }
          *(_BYTE *)(LODWORD(v3) + 12) = 0;
        }
      }
    }
  }
  return this;
}


//======================================================================
// Ogre::ModelMotion::Stop(Ogre::Entity *)
// address: 0x0017D508   size: 0x40 (64 bytes)
//======================================================================
int __fastcall Ogre::ModelMotion::Stop(int a1, int a2)
{
  int i; // r5
  int v5; // r3
  int v6; // r0
  int v7; // r0
  int result; // r0

  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( i >= (*(_DWORD *)(a1 + 28) - v5) >> 2 )
      break;
    v6 = *(_DWORD *)(4 * i + v5);
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 72))(v6);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v7 + 16))(v7, a2);
  }
  result = *(_DWORD *)(a1 + 60);
  if ( result != 0 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
    *(_DWORD *)(a1 + 60) = 0;
  }
  *(_BYTE *)(a1 + 12) = 0;
  return result;
}


//======================================================================
// Ogre::ModelMotion::DelayStop(Ogre::Entity *,float)
// address: 0x0017D548   size: 0x44 (68 bytes)
//======================================================================
int __fastcall Ogre::ModelMotion::DelayStop(int a1, int a2, int a3)
{
  int i; // r5
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int result; // r0

  for ( i = 0; ; ++i )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( i >= (*(_DWORD *)(a1 + 28) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(4 * i + v7);
    v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 72))(v8);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 20))(v9, a2, a3);
  }
  result = *(_DWORD *)(a1 + 60);
  if ( result != 0 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
    *(_DWORD *)(a1 + 60) = 0;
  }
  *(_BYTE *)(a1 + 12) = 0;
  return result;
}


//======================================================================
// Ogre::ModelMotion::CreateObjMotionFromSrc(Ogre::MotionElementData *)
// address: 0x0017D58C   size: 0x156 (342 bytes)
//======================================================================
Ogre::BindOjbect2Motion *__fastcall Ogre::ModelMotion::CreateObjMotionFromSrc(
        Ogre::ModelMotion *this,
        Ogre::MotionElementData *a2)
{
  int v2; // r3
  Ogre::BindOjbect2Motion *v4; // r4
  _DWORD *v5; // r0
  int v6; // r0
  int v7; // r3
  _DWORD *v8; // r6
  int v9; // r2
  unsigned int v10; // r3
  bool v11; // r2

  v2 = *((_DWORD *)a2 + 4);
  if ( v2 == 5 )
  {
    v4 = (Ogre::BindOjbect2Motion *)operator new(0x4Cu);
    Ogre::BindOjbect2Motion::BindOjbect2Motion(v4);
    v5 = (_DWORD *)operator new(0x10u);
    *((_DWORD *)v4 + 15) = v5;
    *v5 = *((_DWORD *)a2 + 21);
    v6 = **((_DWORD **)v4 + 15);
    if ( v6 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
    *(_DWORD *)(*((_DWORD *)v4 + 15) + 8) = 0;
    *(_DWORD *)(*((_DWORD *)v4 + 15) + 4) = *((_DWORD *)a2 + 22);
    *(_DWORD *)(*((_DWORD *)v4 + 15) + 12) = *((_DWORD *)a2 + 32);
    sub_3BE508((int)v4 + 68, *((char **)a2 + 23));
    v7 = *((_DWORD *)a2 + 9);
    if ( v7 < 0 )
      *((_DWORD *)v4 + 18) = 0;
    else
      *((_DWORD *)v4 + 18) = *(_DWORD *)(4 * v7 + *((_DWORD *)this + 6));
    *((_DWORD *)v4 + 14) = *((_DWORD *)a2 + 8);
  }
  else if ( (unsigned int)(v2 - 1) > 1 )
  {
    if ( v2 == 4 )
    {
      v4 = (Ogre::BindOjbect2Motion *)operator new(0x4Cu);
      Ogre::ObjectMotion::ObjectMotion((int)v4);
      *((_DWORD *)v4 + 15) = off_456C74;
      *((_DWORD *)v4 + 16) = -1;
      *(_DWORD *)v4 = &off_456C18;
      *((_DWORD *)v4 + 18) = 0;
      *((_DWORD *)v4 + 14) = *((_DWORD *)a2 + 8);
    }
    else
    {
      v4 = nullptr;
      if ( v2 == 6 )
      {
        v4 = (Ogre::BindOjbect2Motion *)operator new(0x48u);
        j_memset(v4, 0, 0x48u);
        Ogre::ObjectMotion::ObjectMotion((int)v4);
        *(_DWORD *)v4 = &off_458330;
        *((_DWORD *)v4 + 15) = 0;
        *((_DWORD *)v4 + 16) = 0;
        *((_DWORD *)v4 + 17) = 0;
        if ( *((_DWORD *)a2 + 11) != *((_DWORD *)a2 + 12) )
          Ogre::EventTriggerObjectMotion::LoadFromEventList(v4, a2);
      }
    }
  }
  else
  {
    v4 = (Ogre::BindOjbect2Motion *)operator new(0x3Cu);
    j_memset(v4, 0, 0x3Cu);
    Ogre::ObjectMotion::ObjectMotion((int)v4);
    *(_DWORD *)v4 = &off_456BC0;
    *((_DWORD *)v4 + 14) = *((_DWORD *)a2 + 8);
  }
  v8 = (_DWORD *)operator new(0x18u);
  j_memset(v8, 0, 0x18u);
  *v8 = &off_456A88;
  v8[2] = *((_DWORD *)a2 + 6);
  v9 = *((_DWORD *)a2 + 7);
  v8[1] = v4;
  v8[4] = v9;
  v10 = *((_DWORD *)a2 + 5);
  v11 = true;
  *((_BYTE *)v8 + 12) = v10 <= 1;
  if ( v10 != 0 )
    v11 = v10 == 2;
  *((_BYTE *)v8 + 20) = v11;
  *((_DWORD *)v4 + 2) = v8;
  (*(void (__fastcall **)(Ogre::MotionElementData *))(*(_DWORD *)a2 + 4))(a2);
  *((_DWORD *)v4 + 4) = a2;
  *((_DWORD *)v4 + 3) = this;
  return v4;
}


//======================================================================
// Ogre::ModelMotion::PlayMotion(Ogre::Entity *)
// address: 0x0017D6FC   size: 0x94 (148 bytes)
//======================================================================
int __fastcall Ogre::ModelMotion::PlayMotion(int this, Ogre::Entity *a2)
{
  _DWORD *v3; // r4
  int v4; // r0
  _DWORD *v5; // r0
  int v6; // r5
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0

  v3 = (_DWORD *)this;
  if ( *(_DWORD *)(this + 56) != 0 )
  {
    v4 = *(_DWORD *)(this + 60);
    if ( v4 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
      v3[15] = 0;
    }
    v5 = (_DWORD *)operator new(8u);
    v5[1] = 0;
    *v5 = &off_457930;
    v3[15] = v5;
    return Ogre::ModelMotion::Player::setModel((int)v5, (int)a2);
  }
  else
  {
    v6 = *(unsigned __int8 *)(this + 12);
    if ( *(_BYTE *)(this + 12) == 0 )
    {
      *(_DWORD *)(this + 20) = 0;
      *(_BYTE *)(this + 12) = 1;
      while ( 1 )
      {
        v7 = v3[6];
        if ( v6 >= (v3[7] - v7) >> 2 )
          break;
        this = *(_DWORD *)(v7 + 4 * v6);
        if ( v3[12] >= *(_DWORD *)(this + 56) )
        {
          (**(void (__fastcall ***)(int, Ogre::Entity *))this)(this, a2);
          v8 = *(_DWORD *)(v3[6] + 4 * v6);
          v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 72))(v8);
          (*(void (__fastcall **)(int, Ogre::Entity *))(*(_DWORD *)v9 + 8))(v9, a2);
          v10 = *(_DWORD *)(v3[6] + 4 * v6);
          v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 72))(v10);
          this = (*(int (__fastcall **)(int, Ogre::Entity *, _DWORD))(*(_DWORD *)v11 + 28))(v11, a2, v3[5]);
        }
        ++v6;
      }
    }
  }
  return this;
}


//======================================================================
// Ogre::ModelMotion::PlayFlashChain(Ogre::Entity *,int,Ogre::Vector3)
// address: 0x0017D7D0   size: 0xF0 (240 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::ModelMotion::PlayFlashChain(unsigned int a1, int a2, unsigned int a3, _DWORD *a4)
{
  int v5; // r3
  int v8; // r0
  _DWORD *v9; // r6
  int v10; // r2
  int v11; // r2
  int v12; // r12
  int v13; // r1
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r3
  int v20; // r0
  int v21; // r0
  int v22; // r0
  unsigned __int64 v24; // [sp+0h] [bp-Ch]

  v24 = __PAIR64__(a3, a1);
  v5 = *(_DWORD *)(a1 + 56);
  if ( v5 != 0 )
  {
    v8 = *(_DWORD *)(a1 + 60);
    if ( v8 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
      *(_DWORD *)(a1 + 60) = 0;
    }
    v9 = (_DWORD *)operator new(0x18u);
    Ogre::ModelMotion::FlashChainPlayer::FlashChainPlayer(v9, SHIDWORD(v24), a4);
    *(_DWORD *)(a1 + 60) = v9;
    Ogre::ModelMotion::Player::setModel((int)v9, a2);
  }
  else
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(a1 + 24);
      if ( v5 >= (*(_DWORD *)(a1 + 28) - v10) >> 2 )
        break;
      v11 = *(_DWORD *)(4 * v5++ + v10);
      v12 = a4[1];
      v13 = a4[2];
      *(_DWORD *)(v11 + 24) = *a4;
      *(_DWORD *)(v11 + 32) = v13;
      *(_BYTE *)(v11 + 20) = 1;
      *(_DWORD *)(v11 + 28) = v12;
    }
    v14 = *(unsigned __int8 *)(a1 + 12);
    if ( *(_BYTE *)(a1 + 12) == 0 )
    {
      *(_DWORD *)(a1 + 20) = 0;
      *(_BYTE *)(a1 + 12) = 1;
      for ( LODWORD(v24) = v14; ; LODWORD(v24) = v24 + 1 )
      {
        v15 = *(_DWORD *)(a1 + 24);
        if ( (int)v24 >= (*(_DWORD *)(a1 + 28) - v15) >> 2 )
          break;
        if ( HIDWORD(v24) != -1 )
        {
          v16 = *(_DWORD *)(*(_DWORD *)(v15 + 4 * v24) + 16);
          if ( v16 != 0 )
            *(_DWORD *)(v16 + 44) = HIDWORD(v24);
        }
        v17 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 4 * v24);
        if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(v17 + 56) )
        {
          (**(void (__fastcall ***)(int, int))v17)(v17, a2);
          v18 = *a4;
          v19 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 4 * v24);
          v20 = a4[2];
          *(_DWORD *)(v19 + 28) = a4[1];
          *(_DWORD *)(v19 + 32) = v20;
          *(_BYTE *)(v19 + 20) = 1;
          *(_DWORD *)(v19 + 24) = v18;
          v21 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 24) + 4 * v24) + 72))(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 4 * v24));
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v21 + 8))(v21, a2);
          v22 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 24) + 4 * v24) + 72))(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 4 * v24));
          (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v22 + 28))(v22, a2, *(_DWORD *)(a1 + 20));
        }
      }
    }
  }
  return v24;
}


//======================================================================
// Ogre::ModelMotion::PlayForcePE(Ogre::Entity *,Ogre::Vector3,float)
// address: 0x0017D908   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall Ogre::ModelMotion::PlayForcePE(int a1, int a2, int *a3, int a4)
{
  int v5; // r2
  int v8; // r0
  _DWORD *v9; // r7
  int result; // r0
  int v11; // r3
  int v12; // r3
  int v13; // r0
  int v14; // r12
  int v15; // r3
  int v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r3
  int v20; // r0
  int v21; // r0
  int v22; // [sp+0h] [bp-14h]
  int v23; // [sp+4h] [bp-10h]
  int v24; // [sp+4h] [bp-10h]
  int i; // [sp+8h] [bp-Ch]

  v5 = *(_DWORD *)(a1 + 56);
  if ( v5 != 0 )
  {
    v8 = *(_DWORD *)(a1 + 60);
    if ( v8 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
      *(_DWORD *)(a1 + 60) = 0;
    }
    v9 = (_DWORD *)operator new(0x18u);
    Ogre::ModelMotion::ForcePEPlayer::ForcePEPlayer(v9, a3, a4);
    *(_DWORD *)(a1 + 60) = v9;
    return Ogre::ModelMotion::Player::setModel((int)v9, a2);
  }
  else
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(a1 + 24);
      result = *(_DWORD *)(a1 + 28);
      if ( v5 >= (result - v11) >> 2 )
        break;
      v12 = *(_DWORD *)(4 * v5 + v11);
      v13 = *a3;
      v14 = a3[2];
      v23 = a3[1];
      *(_BYTE *)(v12 + 36) = 1;
      *(_DWORD *)(v12 + 40) = v13;
      *(_DWORD *)(v12 + 44) = v23;
      *(_DWORD *)(v12 + 48) = v14;
      ++v5;
      *(_DWORD *)(v12 + 52) = a4;
    }
    v15 = *(unsigned __int8 *)(a1 + 12);
    if ( *(_BYTE *)(a1 + 12) == 0 )
    {
      *(_DWORD *)(a1 + 20) = 0;
      *(_BYTE *)(a1 + 12) = 1;
      for ( i = v15; ; ++i )
      {
        v16 = *(_DWORD *)(a1 + 24);
        result = *(_DWORD *)(a1 + 28);
        if ( i >= (result - v16) >> 2 )
          break;
        v17 = *(_DWORD *)(v16 + 4 * i);
        if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(v17 + 56) )
        {
          (**(void (__fastcall ***)(int, int))v17)(v17, a2);
          v18 = *a3;
          v19 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 4 * i);
          v22 = a3[1];
          v24 = a3[2];
          *(_BYTE *)(v19 + 36) = 1;
          *(_DWORD *)(v19 + 40) = v18;
          *(_DWORD *)(v19 + 52) = a4;
          *(_DWORD *)(v19 + 44) = v22;
          *(_DWORD *)(v19 + 48) = v24;
          v20 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 24) + 4 * i) + 72))(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 4 * i));
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v20 + 8))(v20, a2);
          v21 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 24) + 4 * i) + 72))(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 4 * i));
          (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v21 + 28))(v21, a2, *(_DWORD *)(a1 + 20));
        }
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::ModelMotion::LoadFromSource(Ogre::EntityMotionData *)
// address: 0x0017DAE8   size: 0x88 (136 bytes)
//======================================================================
__int64 __fastcall Ogre::ModelMotion::LoadFromSource(__int64 this, int a2)
{
  int v3; // r7
  unsigned int v4; // r6
  int v5; // r3
  int v6; // r3
  __int64 v7; // r0
  __int64 v9; // [sp+0h] [bp-Ch] BYREF
  int v10; // [sp+8h] [bp-4h]

  v9 = this;
  v10 = a2;
  *(_DWORD *)(this + 52) = HIDWORD(this);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(this) + 4))(HIDWORD(this));
  *(_DWORD *)(this + 36) = *(_DWORD *)(HIDWORD(this) + 16);
  Ogre::FixedString::operator=((int *)(this + 40), (int *)(HIDWORD(this) + 20));
  v3 = *(_DWORD *)(this + 24);
  v4 = 0;
  *(_DWORD *)(this + 44) = *(_DWORD *)(HIDWORD(this) + 24);
  v5 = *(_DWORD *)(HIDWORD(this) + 28);
  *(_DWORD *)(this + 28) = v3;
  *(_DWORD *)(this + 48) = v5;
  while ( 1 )
  {
    v6 = *(_DWORD *)(HIDWORD(this) + 32);
    if ( v4 >= (*(_DWORD *)(HIDWORD(this) + 36) - v6) >> 2 )
      break;
    HIDWORD(v9) = Ogre::ModelMotion::CreateObjMotionFromSrc(
                    (Ogre::ModelMotion *)this,
                    *(Ogre::MotionElementData **)(4 * v4 + v6));
    (*(void (**)(void))(*(_DWORD *)HIDWORD(v9) + 32))();
    HIDWORD(v7) = *(_DWORD *)(this + 28);
    if ( HIDWORD(v7) == *(_DWORD *)(this + 32) )
    {
      LODWORD(v7) = this + 24;
      std::vector<Ogre::ObjectMotion *>::_M_insert_aux(v7, (_DWORD *)&v9 + 1);
    }
    else
    {
      if ( HIDWORD(v7) != 0 )
        *(_DWORD *)HIDWORD(v7) = HIDWORD(v9);
      *(_DWORD *)(this + 28) += 4;
    }
    ++v4;
  }
  return v9;
}


//======================================================================
// Ogre::ModelMotion::LoadFromName(Ogre::FixedString const&,bool)
// address: 0x0017DB70   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall Ogre::ModelMotion::LoadFromName(Ogre::ModelMotion *this, const Ogre::FixedString *a2, int a3)
{
  __int64 v3; // r4
  unsigned int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r0
  Ogre::ResourceManager *v10; // r7
  void *v11; // r1
  int result; // r0
  int v13; // r2
  void *v14; // r1
  Ogre::FixedString *v15; // [sp+8h] [bp-10Ch] BYREF
  char s[256]; // [sp+Ch] [bp-108h] BYREF

  LODWORD(v3) = this;
  Ogre::FixedString::operator=((int *)this + 10, (int *)a2);
  v6 = *(_DWORD *)(v3 + 56);
  if ( v6 != 0 )
    Ogre::LoadWrap::breakLoad((Ogre::LoadWrap *)(v3 + 8), v6);
  j_sprintf(s, "particles/%s.emo", *(const char **)a2);
  if ( a3 != 0 )
  {
    v9 = *(_DWORD *)(v3 + 60);
    *(_DWORD *)(v3 + 56) = 0;
    if ( v9 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
      *(_DWORD *)(v3 + 60) = 0;
    }
    v10 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
    v15 = (Ogre::FixedString *)Ogre::FixedString::insert(
                                 (Ogre::FixedString *)s,
                                 (const char *)0xFFFFFFFF,
                                 v7,
                                 (int)&Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton);
    HIDWORD(v3) = Ogre::ResourceManager::blockLoad(v10, (const Ogre::FixedString *)&v15, 0);
    result = Ogre::FixedString::release((int)v15, v11);
    if ( HIDWORD(v3) != 0 )
      return Ogre::ModelMotion::LoadFromSource(v3, v13);
  }
  else
  {
    v15 = (Ogre::FixedString *)Ogre::FixedString::insert((Ogre::FixedString *)s, (const char *)0xFFFFFFFF, v7, v8);
    *(_DWORD *)(v3 + 56) = Ogre::LoadWrap::backgroundLoad((Ogre::LoadWrap *)(v3 + 8), (const Ogre::FixedString *)&v15);
    return Ogre::FixedString::release((int)v15, v14);
  }
  return result;
}


//======================================================================
// Ogre::ModelMotion::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x0017DC30   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::ModelMotion::ResourceLoaded(__int64 this, int a2)
{
  int v2; // r4

  v2 = this;
  if ( a2 == *(_DWORD *)(this + 56) )
  {
    *(_DWORD *)(this + 56) = 0;
    if ( HIDWORD(this) != 0 )
    {
      Ogre::ModelMotion::LoadFromSource(this, a2);
      LODWORD(this) = *(_DWORD *)(v2 + 60);
      if ( (_DWORD)this != 0 )
      {
        Ogre::ModelMotion::Player::play((_DWORD *)this, v2);
        LODWORD(this) = *(_DWORD *)(v2 + 60);
        if ( (_DWORD)this != 0 )
        {
          LODWORD(this) = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)this + 4))(this);
          *(_DWORD *)(v2 + 60) = 0;
        }
      }
    }
  }
  return this;
}


//======================================================================
// Ogre::ModelMotion::ModelMotion(void)
// address: 0x0018B760   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11ModelMotionC1Ev'
int __fastcall Ogre::ModelMotion::ModelMotion(int this)
{
  *(_DWORD *)(this + 4) = 1;
  *(_DWORD *)this = &off_457978;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 8) = off_4579A0;
  *(_BYTE *)(this + 12) = 0;
  *(_BYTE *)(this + 13) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 48) = 300;
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 56) = 0;
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 64) = 0;
  return this;
}


//======================================================================
// Ogre::ModelMotion::IsPlaying(void)
// address: 0x0018B7A0   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall Ogre::ModelMotion::IsPlaying(Ogre::ModelMotion *this)
{
  int v1; // r3

  v1 = 1;
  if ( *((_BYTE *)this + 12) == 0 )
    return *((_DWORD *)this + 15) != 0;
  return v1;
}

