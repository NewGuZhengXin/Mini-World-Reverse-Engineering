// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: EffectManager

//======================================================================
// EffectManager::EffectManager(void)
// address: 0x003008F0   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN13EffectManagerC2Ev'
void __fastcall EffectManager::EffectManager(EffectManager *this)
{
  Ogre::Singleton<EffectManager>::ms_Singleton = (int)this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
}


//======================================================================
// EffectManager::~EffectManager()
// address: 0x00300910   size: 0x6A (106 bytes)
//======================================================================
// Alternative name is '_ZN13EffectManagerD2Ev'
void __fastcall EffectManager::~EffectManager(EffectManager *this)
{
  unsigned int i; // r5
  int v3; // r3
  int v4; // r0
  unsigned int j; // r5
  _DWORD *v6; // r0
  void *v7; // r6
  void *v8; // r0

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 1);
    if ( i >= (*((_DWORD *)this + 2) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(4 * i + v3);
    if ( v4 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  for ( j = 0; ; ++j )
  {
    v6 = *((_DWORD **)this + 4);
    if ( j >= (*((_DWORD *)this + 5) - (int)v6) >> 2 )
      break;
    v7 = (void *)v6[j];
    if ( v7 != nullptr )
    {
      sub_3BDF80(v6[j]);
      operator delete(v7);
    }
  }
  if ( v6 != nullptr )
    operator delete(v6);
  v8 = *((void **)this + 1);
  if ( v8 != nullptr )
    operator delete(v8);
  Ogre::Singleton<EffectManager>::ms_Singleton = 0;
}


//======================================================================
// EffectManager::update(float)
// address: 0x00300980   size: 0xFA (250 bytes)
//======================================================================
int __fastcall EffectManager::update(EffectManager *this, float a2)
{
  unsigned int i; // r4
  int v5; // r3
  int v6; // r0
  int v7; // r4
  float v8; // r0
  float v9; // r0
  __int64 v10; // r0
  float v12; // [sp+10h] [bp-34h]
  float v13; // [sp+14h] [bp-30h]
  float v14[3]; // [sp+1Ch] [bp-28h] BYREF
  _BYTE v15[12]; // [sp+28h] [bp-1Ch] BYREF
  _DWORD v16[4]; // [sp+34h] [bp-10h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 1);
    if ( i >= (*((_DWORD *)this + 2) - v5) >> 2 )
      break;
    v6 = *(_DWORD *)(4 * i + v5);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v6 + 12))(v6, LODWORD(a2));
  }
  v7 = *(_DWORD *)(g_pPlayerCtrl + 68);
  v8 = *(float *)(v7 + 68) / 0.05;
  v13 = (float)*(int *)(v7 + 60) + (float)((float)((float)*(int *)(v7 + 36) - (float)*(int *)(v7 + 60)) * v8);
  v12 = (float)*(int *)(v7 + 64) + (float)((float)((float)*(int *)(v7 + 40) - (float)*(int *)(v7 + 64)) * v8);
  v9 = (float)*(int *)(v7 + 56) + (float)((float)((float)*(int *)(v7 + 32) - (float)*(int *)(v7 + 56)) * v8);
  v14[1] = v13;
  v14[0] = v9;
  v14[2] = v12;
  v14[1] = v13 + (float)(*(int (__fastcall **)(int))(*(_DWORD *)g_pPlayerCtrl + 124))(g_pPlayerCtrl);
  HIDWORD(v10) = *(_DWORD *)(v7 + 4);
  LODWORD(v10) = v15;
  PitchYaw2Direction(v10, *(float *)(v7 + 8));
  v16[1] = 1065353216;
  v16[0] = 0;
  v16[2] = 0;
  return (*(int (__fastcall **)(int, float *, _DWORD, _BYTE *, _DWORD *))(*(_DWORD *)Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton
                                                                        + 44))(
           Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton,
           v14,
           0,
           v15,
           v16);
}


//======================================================================
// EffectManager::addEffect(BaseEffect *)
// address: 0x00300B18   size: 0x24 (36 bytes)
//======================================================================
__int64 __fastcall EffectManager::addEffect(__int64 this, int a2)
{
  _DWORD *v2; // r3
  __int64 v4; // [sp+0h] [bp-Ch] BYREF
  int v5; // [sp+8h] [bp-4h]

  v4 = this;
  v5 = a2;
  v2 = *(_DWORD **)(this + 8);
  if ( v2 == *(_DWORD **)(this + 12) )
  {
    std::vector<BaseEffect *>::_M_emplace_back_aux<BaseEffect * const&>(this + 4, (_DWORD *)&v4 + 1);
  }
  else
  {
    if ( v2 != nullptr )
      *v2 = HIDWORD(this);
    *(_DWORD *)(this + 8) += 4;
  }
  return v4;
}


//======================================================================
// EffectManager::tick(void)
// address: 0x00300B5C   size: 0xBA (186 bytes)
//======================================================================
_DWORD *__fastcall EffectManager::tick(_DWORD *this)
{
  int **v1; // r6
  _DWORD *v2; // r4
  int v3; // r3
  int v4; // r1
  int **v5; // r6
  int *v6; // r5
  float v7; // r7
  float v8; // r0
  int v9; // r1
  int v10; // r3
  int v11; // r1
  int v12; // [sp+10h] [bp-1Ch]
  float v13[4]; // [sp+1Ch] [bp-10h] BYREF

  v1 = (int **)*(this + 1);
  v2 = this;
  ++*this;
  while ( v1 != (int **)v2[2] )
  {
    v3 = **v1;
    if ( *((_BYTE *)*v1 + 4) != 0 )
    {
      this = (_DWORD *)(*(int (**)(void))(v3 + 4))();
      v4 = v2[2];
      if ( v1 + 1 != (int **)v4 )
        this = (_DWORD *)std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<BaseEffect *>(
                           v1 + 1,
                           v4,
                           v1);
      v2[2] -= 4;
    }
    else
    {
      this = (_DWORD *)(*(int (**)(void))(v3 + 8))();
      ++v1;
    }
  }
  v5 = (int **)v2[4];
  while ( v5 != (int **)v2[5] )
  {
    v6 = *v5;
    if ( (*v5)[1] > *v2 )
    {
      ++v5;
    }
    else
    {
      v12 = *v6;
      v7 = (float)v6[3];
      v8 = (float)v6[2];
      v9 = v6[6];
      v13[2] = (float)v6[4];
      v13[1] = v7;
      v10 = v6[5];
      v13[0] = v8;
      Ogre::SoundSystem::playSound(Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton, v12, (int *)v13, v10, v9);
      sub_3BDF80(v6);
      operator delete(v6);
      v11 = v2[5];
      this = v5 + 1;
      if ( v5 + 1 != (int **)v11 )
        this = (_DWORD *)std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ScheduleSound *>(
                           this,
                           v11,
                           v5);
      v2[5] -= 4;
    }
  }
  return this;
}


//======================================================================
// EffectManager::playSound(WCoord const&,char const*,float,float,bool)
// address: 0x00300C8C   size: 0x1DC (476 bytes)
//======================================================================
void __fastcall EffectManager::playSound(
        EffectManager *this,
        const WCoord *a2,
        const char *a3,
        float a4,
        int a5,
        bool a6)
{
  size_t v8; // r0
  const char *v9; // r5
  int v10; // r2
  float v11; // r0
  float v12; // r6
  float v13; // r0
  float v14; // r5
  int v15; // r4
  float *v16; // r3
  float v17; // r7
  float v18; // r0
  float v19; // [sp+Ch] [bp-138h]
  float v22; // [sp+30h] [bp-114h] BYREF
  float v23; // [sp+34h] [bp-110h]
  float v24; // [sp+38h] [bp-10Ch]
  char v25[256]; // [sp+3Ch] [bp-108h] BYREF

  j_strcpy(v25, "sounds/");
  v8 = j_strlen(v25);
  v9 = &a3[-v8];
  while ( 1 )
  {
    v10 = (unsigned __int8)v9[v8];
    if ( v9[v8] == 0 )
      break;
    if ( v10 == 46 )
      v25[v8] = 47;
    else
      v25[v8] = v10;
    ++v8;
  }
  j_strcpy(&v25[v8], ".ogg");
  if ( a4 <= 1.0 )
    v19 = 1600.0;
  else
    v19 = a4 * 1600.0;
  ClientActor::getEyePosition((ClientActor *)&v22, (_DWORD *)g_pPlayerCtrl);
  v11 = j_sqrt(
          (double)(LODWORD(v22) - *(_DWORD *)a2) * (double)(LODWORD(v22) - *(_DWORD *)a2)
        + (double)(LODWORD(v23) - *((_DWORD *)a2 + 1)) * (double)(LODWORD(v23) - *((_DWORD *)a2 + 1))
        + (double)(LODWORD(v24) - *((_DWORD *)a2 + 2)) * (double)(LODWORD(v24) - *((_DWORD *)a2 + 2)));
  v12 = v11;
  if ( v11 < v19 )
  {
    if ( a6 && v11 > 1000.0 )
    {
      v13 = COERCE_FLOAT(operator new(0x1Cu));
      *(_DWORD *)LODWORD(v13) = &byte_55FB88;
      v22 = v13;
      sub_3BE508(SLODWORD(v13), v25);
      v14 = v22;
      *(_DWORD *)(LODWORD(v22) + 4) = *(_DWORD *)this + (int)(float)((float)((float)(v12 / 100.0) * 0.5) + 0.5);
      *(_DWORD *)(LODWORD(v14) + 8) = *(_DWORD *)a2;
      *(_DWORD *)(LODWORD(v14) + 12) = *((_DWORD *)a2 + 1);
      v15 = *((_DWORD *)a2 + 2);
      *(float *)(LODWORD(v14) + 20) = a4;
      *(float *)(LODWORD(v14) + 24) = *(float *)&a5;
      *(_DWORD *)(LODWORD(v14) + 16) = v15;
      v16 = *((float **)this + 5);
      if ( v16 == *((float **)this + 6) )
      {
        std::vector<ScheduleSound *>::_M_emplace_back_aux<ScheduleSound * const&>((int)this + 16, &v22);
      }
      else
      {
        if ( v16 != nullptr )
          *v16 = v14;
        *((_DWORD *)this + 5) += 4;
      }
    }
    else
    {
      v17 = (float)*((int *)a2 + 1);
      v18 = (float)*((int *)a2 + 2);
      v22 = (float)*(int *)a2;
      v23 = v17;
      v24 = v18;
      Ogre::SoundSystem::playSound(
        Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton,
        (int)v25,
        (int *)&v22,
        SLODWORD(a4),
        a5);
    }
  }
}


//======================================================================
// EffectManager::playSoundAtActor(ClientActor *,char const*,float,float)
// address: 0x00300E8C   size: 0x28 (40 bytes)
//======================================================================
void __fastcall EffectManager::playSoundAtActor(EffectManager *this, ClientActor *a2, const char *a3, float a4, int a5)
{
  _DWORD *v5; // r4
  int v6; // r6
  int v7; // r5
  int v8; // r4
  _DWORD v9[3]; // [sp+Ch] [bp-Ch] BYREF

  v5 = *((_DWORD **)a2 + 17);
  v6 = v5[10];
  v9[0] = v5[8];
  v7 = v5[9];
  v8 = v5[7];
  v9[2] = v6;
  v9[1] = v7 - v8;
  EffectManager::playSound(this, (const WCoord *)v9, a3, a4, a5, true);
}

