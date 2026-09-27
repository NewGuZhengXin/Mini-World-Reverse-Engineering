// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::AnimationPlayer

//======================================================================
// Ogre::AnimationPlayer::AnimationPlayer(Ogre::Model *)
// address: 0x0019281C   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15AnimationPlayerC2EPNS_5ModelE'
_DWORD *__fastcall Ogre::AnimationPlayer::AnimationPlayer(_DWORD *this, Ogre::Model *a2)
{
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 1045220557;
  *(this + 4) = 1045220557;
  *(this + 5) = 0;
  *(this + 6) = a2;
  return this;
}


//======================================================================
// Ogre::AnimationPlayer::~AnimationPlayer()
// address: 0x00192834   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15AnimationPlayerD2Ev'
void __fastcall Ogre::AnimationPlayer::~AnimationPlayer(void ***this)
{
  unsigned int i; // r5
  void **v3; // r0

  for ( i = 0; ; ++i )
  {
    v3 = *this;
    if ( i >= *(this + 1) - *this )
      break;
    operator delete(v3[i]);
  }
  *(this + 1) = v3;
  if ( v3 != nullptr )
    operator delete(v3);
}


//======================================================================
// Ogre::AnimationPlayer::setAnimDelayInOut(float,float)
// address: 0x00192860   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::AnimationPlayer::setAnimDelayInOut(int this, float a2, float a3)
{
  *(float *)(this + 12) = a2;
  *(float *)(this + 16) = a3;
  return this;
}


//======================================================================
// Ogre::AnimationPlayer::findPlayTrack(int)
// address: 0x00192866   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::AnimationPlayer::findPlayTrack(Ogre::AnimationPlayer *this, int a2)
{
  int v2; // r2
  int v3; // r4
  int i; // r3
  int result; // r0

  v2 = *(_DWORD *)this;
  v3 = (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2;
  for ( i = 0; i != v3; ++i )
  {
    result = *(_DWORD *)(v2 + 4 * i);
    if ( *(_DWORD *)(result + 16) != 0 && *(_DWORD *)(result + 12) == a2 )
      return result;
  }
  return 0;
}


//======================================================================
// Ogre::AnimationPlayer::stop(Ogre::AnimPlayTrack *)
// address: 0x0019288C   size: 0x6 (6 bytes)
//======================================================================
void __fastcall Ogre::AnimationPlayer::stop(int a1, int a2)
{
  *(_DWORD *)(a2 + 16) = 0;
}


//======================================================================
// Ogre::AnimationPlayer::stopAll(void)
// address: 0x00192892   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall Ogre::AnimationPlayer::stopAll(_DWORD *this)
{
  unsigned int i; // r3
  int v2; // r2

  for ( i = 0; i < (*(this + 1) - *this) >> 2; ++i )
  {
    v2 = *(_DWORD *)(4 * i + *this);
    *(_DWORD *)(v2 + 16) = 0;
  }
  return this;
}


//======================================================================
// Ogre::AnimationPlayer::pause(Ogre::AnimPlayTrack *)
// address: 0x001928B0   size: 0x6 (6 bytes)
//======================================================================
void __fastcall Ogre::AnimationPlayer::pause(int a1, int a2)
{
  *(_DWORD *)(a2 + 44) = 0;
}


//======================================================================
// Ogre::AnimationPlayer::resume(Ogre::AnimPlayTrack *)
// address: 0x001928B6   size: 0x8 (8 bytes)
//======================================================================
void __fastcall Ogre::AnimationPlayer::resume(int a1, int a2)
{
  *(_DWORD *)(a2 + 44) = 1065353216;
}


//======================================================================
// Ogre::AnimationPlayer::update(unsigned int)
// address: 0x00192B54   size: 0x6C (108 bytes)
//======================================================================
float __fastcall Ogre::AnimationPlayer::update(Ogre::AnimationPlayer *this, unsigned int a2)
{
  unsigned int i; // r4
  int v5; // r3
  unsigned int v6; // r2
  Ogre::AnimPlayTrack *v7; // r0
  int v8; // r1
  unsigned int v9; // r4
  __int64 v10; // r0
  Ogre::AnimPlayTrack *v12[16]; // [sp+0h] [bp-40h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)this;
    v6 = (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2;
    if ( i >= v6 )
      break;
    v7 = *(Ogre::AnimPlayTrack **)(4 * i + v5);
    if ( *((_DWORD *)v7 + 4) != 0 )
      Ogre::AnimPlayTrack::update(v7, a2);
  }
  v8 = v5 + 4 * v6;
  v9 = 0;
  while ( v5 != v8 )
  {
    if ( *(_DWORD *)(*(_DWORD *)v5 + 16) != 0 )
      v12[v9++] = *(Ogre::AnimPlayTrack **)v5;
    v5 += 4;
  }
  if ( v9 > 1 )
  {
    HIDWORD(v10) = &v12[v9];
    LODWORD(v10) = v12;
    std::sort<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
      v10,
      (int (__fastcall *)(int, int))Ogre::AnimPlayTrackPred);
  }
  return Ogre::Model::applyAnimation(*((Ogre::Model **)this + 6), v12, v9);
}


//======================================================================
// Ogre::AnimationPlayer::resetUpdate(unsigned int)
// address: 0x00192BC4   size: 0x5C (92 bytes)
//======================================================================
float __fastcall Ogre::AnimationPlayer::resetUpdate(Ogre::AnimationPlayer *this, unsigned int a2)
{
  unsigned int v2; // r5
  unsigned int v4; // r4
  Ogre::AnimPlayTrack *v5; // r0
  unsigned int v6; // r2
  __int64 v7; // r0
  Ogre::AnimPlayTrack *v10[17]; // [sp+8h] [bp-44h] BYREF

  v2 = 0;
  v4 = 0;
  while ( v2 < (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2 )
  {
    v5 = *(Ogre::AnimPlayTrack **)(*(_DWORD *)this + 4 * v2);
    if ( *((_DWORD *)v5 + 4) != 0 )
    {
      Ogre::AnimPlayTrack::resetUpdate(v5, a2);
      v6 = v4++;
      v10[v6] = *(Ogre::AnimPlayTrack **)(*(_DWORD *)this + 4 * v2);
    }
    ++v2;
  }
  if ( v4 > 1 )
  {
    HIDWORD(v7) = &v10[v4];
    LODWORD(v7) = v10;
    std::sort<Ogre::AnimPlayTrack **,bool (*)(Ogre::AnimPlayTrack *,Ogre::AnimPlayTrack *)>(
      v7,
      (int (__fastcall *)(int, int))Ogre::AnimPlayTrackPred);
  }
  return Ogre::Model::applyAnimation(*((Ogre::Model **)this + 6), v10, v4);
}


//======================================================================
// Ogre::AnimationPlayer::play(int,Ogre::BaseAnimationData *,float,float)
// address: 0x00192D08   size: 0x120 (288 bytes)
//======================================================================
float *__fastcall Ogre::AnimationPlayer::play(
        Ogre::AnimationPlayer *this,
        int a2,
        Ogre::BaseAnimationData *a3,
        float a4,
        float a5)
{
  float *Sequence; // r7
  char *SequenceDesc; // r0
  _DWORD *v9; // r4
  int v10; // r3
  _DWORD *v11; // r4
  float *v12; // r4
  int v13; // r3
  int v15; // r7
  _DWORD *v16; // [sp+0h] [bp-24h]
  unsigned int i; // [sp+4h] [bp-20h]
  int v19; // [sp+Ch] [bp-18h]
  int v20; // [sp+10h] [bp-14h]
  int SequenceIndex; // [sp+14h] [bp-10h]
  _DWORD *v22; // [sp+1Ch] [bp-8h] BYREF

  SequenceIndex = Ogre::BaseAnimationData::getSequenceIndex(a3, a2);
  Sequence = (float *)Ogre::BaseAnimationData::getSequence(a3, SequenceIndex);
  SequenceDesc = Ogre::SequenceMap::findSequenceDesc(
                   (Ogre::SequenceMap *)Ogre::Singleton<Ogre::SequenceMap>::ms_Singleton,
                   a2);
  if ( SequenceDesc != nullptr )
  {
    v19 = *((_DWORD *)SequenceDesc + 2);
    v20 = *((_DWORD *)SequenceDesc + 1);
  }
  else
  {
    v20 = *((_DWORD *)Sequence + 3);
    v19 = 0;
  }
  v22 = nullptr;
  v16 = nullptr;
  for ( i = 0; i < (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2; ++i )
  {
    v9 = *(_DWORD **)(4 * i + *(_DWORD *)this);
    if ( (unsigned int)(v9[4] - 1) <= 1 && v9[10] == v19 )
    {
      v10 = 0;
      if ( *((float *)this + 4) != 0.0 )
        v10 = 3;
      v9[4] = v10;
    }
    if ( v9[4] != 0 )
    {
      if ( v9[3] == a2 )
        v22 = v9;
    }
    else
    {
      v16 = v9;
    }
  }
  if ( v22 == nullptr )
  {
    if ( v16 != nullptr )
    {
      v22 = v16;
    }
    else
    {
      v22 = (_DWORD *)operator new(0x38u);
      v22[4] = 0;
      std::vector<Ogre::AnimPlayTrack *>::push_back(__SPAIR64__(&v22, (unsigned int)this));
    }
  }
  v11 = v22;
  *v11 = (*(int (__fastcall **)(Ogre::BaseAnimationData *))(*(_DWORD *)a3 + 28))(a3);
  v12 = (float *)v22;
  v22[3] = a2;
  *((_DWORD *)v12 + 2) = SequenceIndex;
  *((_DWORD *)v12 + 10) = v19;
  *((_DWORD *)v12 + 1) = a3;
  *((_DWORD *)v12 + 4) = (*((float *)this + 3) == 0.0) + 1;
  v13 = 0;
  if ( *((float *)this + 3) == 0.0 )
    v13 = 1065353216;
  *((_DWORD *)v12 + 5) = v13;
  v12[6] = Sequence[1];
  v12[7] = Sequence[1];
  v15 = *((_DWORD *)Sequence + 2);
  *((_DWORD *)v12 + 9) = v20;
  v12[11] = a5;
  *((_DWORD *)v12 + 8) = v15;
  v12[12] = *((float *)this + 3);
  v12[13] = *((float *)this + 4);
  return v12;
}


//======================================================================
// Ogre::AnimationPlayer::play(Ogre::AnimGroupPlayInfo const&)
// address: 0x00192E2C   size: 0x138 (312 bytes)
//======================================================================
int __fastcall Ogre::AnimationPlayer::play(float *a1, _DWORD *a2)
{
  unsigned int i; // r4
  int v4; // r6
  int v5; // r3
  int result; // r0
  float v7; // r2
  int v8; // r4
  int v9; // r1
  int k; // r3
  _DWORD *v11; // r6
  int m; // r3
  _DWORD *v13; // r0
  _DWORD *v14; // r7
  Ogre::BaseAnimationData *v15; // r4
  _DWORD *v16; // r7
  int SequenceIndex; // r0
  _DWORD *v18; // r3
  _DWORD *Sequence; // r0
  _DWORD *v20; // r4
  int v21; // r7
  int v22; // [sp+8h] [bp-1Ch]
  _DWORD *v23; // [sp+Ch] [bp-18h]
  int j; // [sp+10h] [bp-14h]
  _DWORD *v26; // [sp+1Ch] [bp-8h] BYREF

  for ( i = 0; i < (*((_DWORD *)a1 + 1) - *(_DWORD *)a1) >> 2; ++i )
  {
    v4 = *(_DWORD *)(4 * i + *(_DWORD *)a1);
    if ( *(_DWORD *)(v4 + 16) == 2 )
    {
      v5 = 0;
      if ( a1[4] != 0.0 )
        v5 = 3;
      *(_DWORD *)(v4 + 16) = v5;
      *(_DWORD *)(v4 + 40) += 100;
    }
  }
  v23 = a2;
  for ( j = 0; ; ++j )
  {
    result = *a2;
    if ( j >= *a2 )
      break;
    v7 = *a1;
    v8 = v23[1];
    v9 = (*((_DWORD *)a1 + 1) - *(_DWORD *)a1) >> 2;
    v26 = nullptr;
    v22 = v8;
    for ( k = v9 - 1; k >= 0; --k )
    {
      v11 = *(_DWORD **)(LODWORD(v7) + 4 * k);
      if ( v11[4] != 0 && v11[3] == v8 && v11[9] == 0 )
        goto LABEL_17;
    }
    v11 = nullptr;
LABEL_17:
    for ( m = 0; m < v9; ++m )
    {
      if ( *(_DWORD *)(*(_DWORD *)(LODWORD(v7) + 4 * m) + 16) == 0 )
      {
        v26 = *(_DWORD **)(LODWORD(v7) + 4 * m);
        break;
      }
    }
    if ( v26 == nullptr )
    {
      v13 = (_DWORD *)operator new(0x38u);
      v13[4] = 0;
      v26 = v13;
      std::vector<Ogre::AnimPlayTrack *>::push_back(__SPAIR64__(&v26, (unsigned int)a1));
    }
    v14 = v26;
    v15 = (Ogre::BaseAnimationData *)v23[9];
    *v14 = (*(int (__fastcall **)(Ogre::BaseAnimationData *))(*(_DWORD *)v15 + 28))(v15);
    v16 = v26;
    v26[1] = v15;
    SequenceIndex = Ogre::BaseAnimationData::getSequenceIndex(v15, v22);
    v18 = v26;
    v16[2] = SequenceIndex;
    v18[3] = v22;
    Sequence = (_DWORD *)Ogre::BaseAnimationData::getSequence(v15, v18[2]);
    v20 = v26;
    v26[10] = v23[5];
    v20[4] = (a1[3] == 0.0) + 1;
    v20[5] = 1065353216;
    if ( v11 != nullptr )
      v20[6] = v11[6];
    else
      v20[6] = Sequence[1];
    v20[7] = Sequence[1];
    v20[8] = Sequence[2];
    v21 = Sequence[3];
    v20[11] = 1065353216;
    v20[9] = v21;
    v20[12] = *((_DWORD *)a1 + 3);
    v20[13] = *((_DWORD *)a1 + 4);
    ++v23;
  }
  return result;
}

