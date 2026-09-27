// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SoundNode

//======================================================================
// Ogre::SoundNode::getRTTI(void)const
// address: 0x0014D4E0   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::SoundNode::getRTTI(Ogre::SoundNode *this)
{
  return &Ogre::SoundNode::m_RTTI;
}


//======================================================================
// Ogre::SoundNode::newObject(void)
// address: 0x0014D4EC   size: 0x26 (38 bytes)
//======================================================================
Ogre::MovableObject *__fastcall Ogre::SoundNode::newObject(Ogre::SoundNode *this)
{
  Ogre::MovableObject *v1; // r4

  v1 = (Ogre::MovableObject *)operator new(0x230u);
  Ogre::MovableObject::MovableObject(v1);
  *(_DWORD *)v1 = &off_455F60;
  *((_DWORD *)v1 + 138) = 0;
  return v1;
}


//======================================================================
// Ogre::SoundNode::~SoundNode()
// address: 0x0014D528   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9SoundNodeD1Ev'
void __fastcall Ogre::SoundNode::~SoundNode(Ogre::SoundNode *this)
{
  int v2; // r0

  *(_DWORD *)this = &off_455F60;
  v2 = *((_DWORD *)this + 132);
  if ( v2 != 0 )
  {
    Ogre::ISound::release(v2);
    *((_DWORD *)this + 132) = 0;
  }
  Ogre::MovableObject::~MovableObject(this);
}


//======================================================================
// Ogre::SoundNode::~SoundNode()
// address: 0x0014D558   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::SoundNode::~SoundNode(Ogre::SoundNode *this)
{
  Ogre::SoundNode::~SoundNode(this);
  operator delete(this);
}


//======================================================================
// Ogre::SoundNode::SoundNode(Ogre::SoundData *,bool)
// address: 0x0014D56C   size: 0x136 (310 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9SoundNodeC1EPNS_9SoundDataEb'
Ogre::SoundNode *__fastcall Ogre::SoundNode::SoundNode(Ogre::SoundNode *this, Ogre::SoundData *a2, bool a3)
{
  bool v5; // r3
  int v6; // r0
  float v7; // r5
  float v8; // r7

  Ogre::MovableObject::MovableObject(this);
  *(_DWORD *)this = &off_455F60;
  *((_DWORD *)this + 138) = 0;
  *((_DWORD *)this + 53) = Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton;
  *((_DWORD *)this + 118) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 119) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 120) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 121) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 122) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 123) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 124) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 125) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 126) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 127) = *((_DWORD *)a2 + 14);
  *((_BYTE *)this + 512) = *((_BYTE *)a2 + 60);
  *((_DWORD *)this + 129) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 130) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 131) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 133) = *((_DWORD *)a2 + 19);
  j_strncpy((char *)this + 216, *((const char **)a2 + 4), 0x100u);
  *((_DWORD *)this + 132) = 0;
  *((_BYTE *)this + 536) = 0;
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 20);
  v5 = *((float *)this + 129) > 0.0 && *((float *)this + 130) > 0.0;
  *((_BYTE *)this + 556) = v5;
  Ogre::RandomGenerator::reset((Ogre::SoundNode *)((char *)this + 552));
  v6 = 214013 * *((_DWORD *)this + 138) + 2531011;
  v7 = *((float *)this + 129);
  v8 = *((float *)this + 130);
  *((_DWORD *)this + 138) = v6;
  *((float *)this + 137) = (float)((float)((float)((unsigned int)(2 * v6) >> 17) * 0.000030519) * (float)(v8 - v7)) + v7;
  *((_DWORD *)this + 136) = 0;
  return this;
}


//======================================================================
// Ogre::SoundNode::SoundNode(char const*,Ogre::SoundCreateInfo3D const&)
// address: 0x0014D6B8   size: 0x11A (282 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9SoundNodeC1EPKcRKNS_17SoundCreateInfo3DE'
int __fastcall Ogre::SoundNode::SoundNode(int a1, const char *a2, int a3)
{
  float v5; // r5
  float v6; // r7
  int v7; // r0

  Ogre::MovableObject::MovableObject((Ogre::MovableObject *)a1);
  *(_DWORD *)a1 = &off_455F60;
  *(_DWORD *)(a1 + 552) = 0;
  *(_DWORD *)(a1 + 212) = Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton;
  *(_DWORD *)(a1 + 472) = *(_DWORD *)a3;
  *(_DWORD *)(a1 + 476) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(a1 + 480) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 484) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(a1 + 488) = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(a1 + 492) = *(_DWORD *)(a3 + 20);
  *(_DWORD *)(a1 + 496) = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(a1 + 500) = *(_DWORD *)(a3 + 28);
  *(_DWORD *)(a1 + 504) = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(a1 + 508) = *(_DWORD *)(a3 + 36);
  *(_BYTE *)(a1 + 512) = *(_BYTE *)(a3 + 40);
  *(_DWORD *)(a1 + 516) = *(_DWORD *)(a3 + 44);
  *(_DWORD *)(a1 + 520) = *(_DWORD *)(a3 + 48);
  *(_DWORD *)(a1 + 524) = *(_DWORD *)(a3 + 52);
  j_strncpy((char *)(a1 + 216), a2, 0x100u);
  *(_DWORD *)(a1 + 528) = 0;
  v5 = *(float *)(a1 + 516);
  if ( v5 <= 0.0 || (v6 = *(float *)(a1 + 520)) <= 0.0 )
  {
    *(_BYTE *)(a1 + 556) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 556) = 1;
    v7 = 214013 * *(_DWORD *)(a1 + 552) + 2531011;
    *(_DWORD *)(a1 + 552) = v7;
    *(float *)(a1 + 548) = (float)((float)((float)((unsigned int)(2 * v7) >> 17) * 0.000030519) * (float)(v6 - v5)) + v5;
  }
  *(_DWORD *)(a1 + 544) = 0;
  return a1;
}


//======================================================================
// Ogre::SoundNode::play(void)
// address: 0x0014D7E8   size: 0x106 (262 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::play(Ogre::SoundNode *this)
{
  int v2; // r0
  char *WorldMatrix; // r0
  int v4; // r2
  int v5; // r3
  float v6; // r5
  int result; // r0
  float v8; // [sp+Ch] [bp-20h]
  float v9[3]; // [sp+10h] [bp-1Ch] BYREF
  float v10[4]; // [sp+1Ch] [bp-10h] BYREF

  v2 = *((_DWORD *)this + 132);
  if ( v2 != 0 )
  {
    Ogre::ISound::release(v2);
    *((_DWORD *)this + 132) = 0;
  }
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  v4 = *((_DWORD *)WorldMatrix + 13);
  v5 = *((_DWORD *)WorldMatrix + 14);
  *((_DWORD *)this + 122) = *((_DWORD *)WorldMatrix + 12);
  *((_DWORD *)this + 124) = v5;
  *((_DWORD *)this + 123) = v4;
  (*(void (__fastcall **)(float *))(*(_DWORD *)Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton + 48))(v9);
  v8 = *((float *)this + 123) - v9[1];
  v6 = *((float *)this + 124) - v9[2];
  v10[0] = *((float *)this + 122) - v9[0];
  v10[1] = v8;
  v10[2] = v6;
  Ogre::Vector3::length((Ogre::Vector3 *)v10);
  result = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 53) + 36))(*((_DWORD *)this + 53));
  *((_DWORD *)this + 132) = result;
  return result;
}


//======================================================================
// Ogre::SoundNode::isPlaying(void)
// address: 0x0014D8F4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::isPlaying(Ogre::SoundNode *this)
{
  int result; // r0

  result = *((_DWORD *)this + 132);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 8))(result);
  return result;
}


//======================================================================
// Ogre::SoundNode::setVolume(float)
// address: 0x0014D908   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::setVolume(Ogre::SoundNode *this, float a2)
{
  int result; // r0

  *((float *)this + 120) = a2;
  result = *((_DWORD *)this + 132);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
  return result;
}


//======================================================================
// Ogre::SoundNode::pause(bool)
// address: 0x0014D922   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::pause(Ogre::SoundNode *this, bool a2)
{
  int result; // r0

  result = *((_DWORD *)this + 132);
  if ( result != 0 )
    return (*(int (__fastcall **)(int, bool))(*(_DWORD *)result + 16))(result, a2);
  return result;
}


//======================================================================
// Ogre::SoundNode::stop(void)
// address: 0x0014D936   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::stop(Ogre::SoundNode *this)
{
  int result; // r0

  result = *((_DWORD *)this + 132);
  if ( result != 0 )
  {
    result = Ogre::ISound::release(result);
    *((_DWORD *)this + 132) = 0;
  }
  return result;
}


//======================================================================
// Ogre::SoundNode::update(unsigned int)
// address: 0x0014D950   size: 0x17A (378 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::update(int this, unsigned int a2)
{
  int v2; // r4
  float *WorldMatrix; // r0
  float v4; // r2
  float v5; // r7
  float v6; // r0
  float v7; // r7
  float v8; // r0
  int v9; // r6
  float v10; // r0
  float v11; // r7
  float v12; // [sp+4h] [bp-38h]
  float v14[3]; // [sp+14h] [bp-28h] BYREF
  float v15[3]; // [sp+20h] [bp-1Ch] BYREF
  float v16[4]; // [sp+2Ch] [bp-10h] BYREF

  v2 = this;
  if ( Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton != 0 )
  {
    (*(void (__fastcall **)(float *))(*(_DWORD *)Ogre::Singleton<Ogre::SoundSystem>::ms_Singleton + 48))(v14);
    WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)v2);
    v4 = WorldMatrix[12];
    v5 = WorldMatrix[14];
    v6 = WorldMatrix[13];
    v15[0] = v4;
    v15[2] = v5;
    v15[1] = v6;
    v16[0] = v4 - v14[0];
    v16[1] = v6 - v14[1];
    v16[2] = v5 - v14[2];
    v7 = Ogre::Vector3::length((Ogre::Vector3 *)v16);
    this = v7 < *(float *)(v2 + 476);
    if ( v7 >= *(float *)(v2 + 476) )
    {
      if ( *(_BYTE *)(v2 + 536) != 0 )
      {
        *(_DWORD *)(v2 + 544) = 0;
        *(_BYTE *)(v2 + 536) = 0;
        return Ogre::SoundNode::stop((Ogre::SoundNode *)v2);
      }
    }
    else if ( *(_BYTE *)(v2 + 536) != 0 )
    {
      if ( *(_BYTE *)(v2 + 556) != 0 )
      {
        this = Ogre::SoundNode::isPlaying((Ogre::SoundNode *)v2);
        if ( this == 0 )
        {
          v8 = (float)((float)a2 / 1000.0) + *(float *)(v2 + 544);
          *(float *)(v2 + 544) = v8;
          this = v8 > *(float *)(v2 + 548);
          if ( this != 0 )
          {
            this = Ogre::SoundNode::play((Ogre::SoundNode *)v2);
            *(_DWORD *)(v2 + 544) = 0;
          }
        }
      }
      v9 = *(_DWORD *)(v2 + 528);
      if ( v9 != 0 )
      {
        v12 = *(float *)(v2 + 524);
        v10 = v7 - v12;
        v11 = 1.0 - (float)((float)(v7 - v12) / (float)(*(float *)(v2 + 476) - v12));
        if ( (float)(1.0 - (float)(v10 / (float)(*(float *)(v2 + 476) - v12))) > 1.0 )
        {
          v11 = 1.0;
        }
        else if ( v11 < 0.0 )
        {
          v11 = 0.0;
        }
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v9 + 12))(v9, v11 * *(float *)(v2 + 480));
        return (*(int (__fastcall **)(_DWORD, float *))(**(_DWORD **)(v2 + 528) + 24))(*(_DWORD *)(v2 + 528), v15);
      }
    }
    else
    {
      this = Ogre::SoundNode::isPlaying((Ogre::SoundNode *)v2);
      if ( this == 0 )
      {
        *(_DWORD *)(v2 + 544) = 0;
        *(_BYTE *)(v2 + 536) = 1;
        return Ogre::SoundNode::play((Ogre::SoundNode *)v2);
      }
    }
  }
  return this;
}


//======================================================================
// Ogre::SoundNode::setVelocity(Ogre::Vector3 const&)
// address: 0x0014DAD4   size: 0x2A (42 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::setVelocity(_DWORD *a1, _DWORD *a2)
{
  int result; // r0

  a1[125] = *a2;
  a1[126] = a2[1];
  a1[127] = a2[2];
  result = a1[132];
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 28))(result);
  return result;
}


//======================================================================
// Ogre::SoundNode::setDistance(float,float)
// address: 0x0014DAFE   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::setDistance(Ogre::SoundNode *this, float a2, float a3)
{
  int result; // r0

  *((float *)this + 118) = a2;
  *((float *)this + 119) = a3;
  result = *((_DWORD *)this + 132);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 32))(result);
  return result;
}


//======================================================================
// Ogre::SoundNode::setSoundFile(char const*)
// address: 0x0014DB1E   size: 0x26 (38 bytes)
//======================================================================
char *__fastcall Ogre::SoundNode::setSoundFile(Ogre::SoundNode *this, const char *a2)
{
  int isPlaying; // r5
  char *result; // r0

  isPlaying = Ogre::SoundNode::isPlaying(this);
  result = j_strncpy((char *)this + 216, a2, 0x100u);
  if ( isPlaying != 0 )
    return (char *)Ogre::SoundNode::play(this);
  return result;
}


//======================================================================
// Ogre::SoundNode::setRandomTime0(float)
// address: 0x0014DB44   size: 0x76 (118 bytes)
//======================================================================
float __fastcall Ogre::SoundNode::setRandomTime0(Ogre::SoundNode *this, float a2)
{
  float result; // r0
  float v4; // r7
  int v5; // r0

  *((float *)this + 129) = a2;
  LODWORD(result) = a2 > 0.0;
  if ( a2 <= 0.0 || (v4 = *((float *)this + 130), LODWORD(result) = v4 > 0.0, v4 <= 0.0) )
  {
    *((_BYTE *)this + 556) = 0;
  }
  else
  {
    *((_BYTE *)this + 556) = 1;
    v5 = 214013 * *((_DWORD *)this + 138) + 2531011;
    *((_DWORD *)this + 138) = v5;
    result = (float)((float)((float)((unsigned int)(2 * v5) >> 17) * 0.000030519) * (float)(v4 - a2)) + a2;
    *((float *)this + 137) = result;
  }
  return result;
}


//======================================================================
// Ogre::SoundNode::setRandomTime1(float)
// address: 0x0014DBC8   size: 0x76 (118 bytes)
//======================================================================
float __fastcall Ogre::SoundNode::setRandomTime1(Ogre::SoundNode *this, float a2)
{
  float v3; // r5
  float result; // r0
  int v5; // r0

  *((float *)this + 130) = a2;
  v3 = *((float *)this + 129);
  LODWORD(result) = v3 > 0.0;
  if ( v3 <= 0.0 || (LODWORD(result) = a2 > 0.0, a2 <= 0.0) )
  {
    *((_BYTE *)this + 556) = 0;
  }
  else
  {
    *((_BYTE *)this + 556) = 1;
    v5 = 214013 * *((_DWORD *)this + 138) + 2531011;
    *((_DWORD *)this + 138) = v5;
    result = (float)((float)((float)((unsigned int)(2 * v5) >> 17) * 0.000030519) * (float)(a2 - v3)) + v3;
    *((float *)this + 137) = result;
  }
  return result;
}


//======================================================================
// Ogre::SoundNode::setSoundFullRange(float)
// address: 0x0014DC4C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::setSoundFullRange(int this, float a2)
{
  *(float *)(this + 524) = a2;
  return this;
}


//======================================================================
// Ogre::SoundNode::setIsLoop(bool)
// address: 0x0014DC54   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::setIsLoop(int this, bool a2)
{
  *(_BYTE *)(this + 512) = a2;
  return this;
}


//======================================================================
// Ogre::SoundNode::attachToScene(Ogre::GameScene *,bool)
// address: 0x0014DC5C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::attachToScene(Ogre::SoundNode *this, Ogre::GameScene *a2, bool a3)
{
  return Ogre::MovableObject::attachToScene(this, a2, a3);
}


//======================================================================
// Ogre::SoundNode::detachFromScene(void)
// address: 0x0014DC64   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::SoundNode::detachFromScene(Ogre::SoundNode *this)
{
  Ogre::SoundNode::stop(this);
  return Ogre::MovableObject::detachFromScene(this);
}

