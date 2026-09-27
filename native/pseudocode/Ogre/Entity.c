// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Entity

//======================================================================
// Ogre::Entity::getRTTI(void)const
// address: 0x0018B274   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Entity::getRTTI(Ogre::Entity *this)
{
  return &Ogre::Entity::m_RTTI;
}


//======================================================================
// Ogre::Entity::enableUVMask(bool,bool)
// address: 0x0018B294   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::Entity::enableUVMask(Ogre::Entity *this, bool a2, bool a3)
{
  int result; // r0

  *((_BYTE *)this + 376) = a2;
  result = *((_DWORD *)this + 91);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 28))(result);
  return result;
}


//======================================================================
// Ogre::Entity::setLiuGuangTexture(Ogre::TextureData *)
// address: 0x0018B2AC   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::Entity::setLiuGuangTexture(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 364);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 32))(result);
  return result;
}


//======================================================================
// Ogre::Entity::addRenderUsageBits(Ogre::RenderUsage)
// address: 0x0018B2BE   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::Entity::addRenderUsageBits(int a1, char a2)
{
  int result; // r0

  *(_DWORD *)(a1 + 244) |= 1 << a2;
  result = *(_DWORD *)(a1 + 364);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 88))(result);
  return result;
}


//======================================================================
// Ogre::Entity::clearRenderUsageBits(Ogre::RenderUsage)
// address: 0x0018B2DE   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::Entity::clearRenderUsageBits(int a1, int a2)
{
  int v2; // r5
  int result; // r0

  v2 = a1 + 252;
  Ogre::RenderableObject::clearRenderUsageBits(a1, a2);
  result = *(_DWORD *)(v2 + 112);
  if ( result != 0 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)result + 92))(result, a2);
  return result;
}


//======================================================================
// Ogre::Entity::attachToScene(Ogre::GameScene *,bool)
// address: 0x0018B2FA   size: 0x5A (90 bytes)
//======================================================================
Ogre::GameScene **__fastcall Ogre::Entity::attachToScene(Ogre::GameScene **this, Ogre::GameScene *a2, int a3)
{
  Ogre::GameScene *v3; // r3
  int v4; // r4
  int v7; // r5
  int v8; // r7
  int v9; // r3

  v3 = *(this + 48);
  v4 = (int)this;
  if ( v3 != nullptr )
  {
    if ( v3 == a2 )
      return this;
    (*((void (__fastcall **)(Ogre::GameScene **))*this + 13))(this);
  }
  this = (Ogre::GameScene **)Ogre::MovableObject::attachToScene(v4, a2, a3);
  v7 = 0;
  v8 = (*(_DWORD *)(v4 + 296) - *(_DWORD *)(v4 + 292)) >> 2;
  while ( v7 != v8 )
  {
    v9 = *(_DWORD *)(4 * v7++ + *(_DWORD *)(v4 + 292));
    this = (Ogre::GameScene **)(*(int (__fastcall **)(_DWORD, Ogre::GameScene *, int))(**(_DWORD **)(v9 + 12) + 48))(
                                 *(_DWORD *)(v9 + 12),
                                 a2,
                                 1);
  }
  return this;
}


//======================================================================
// Ogre::Entity::detachFromScene(void)
// address: 0x0018B354   size: 0x46 (70 bytes)
//======================================================================
Ogre::MovableObject *__fastcall Ogre::Entity::detachFromScene(Ogre::MovableObject *this)
{
  Ogre::MovableObject *v1; // r4
  int v2; // r5
  int v3; // r6

  v1 = this;
  if ( *((_DWORD *)this + 48) != 0 )
  {
    this = (Ogre::MovableObject *)Ogre::MovableObject::detachFromScene(this);
    v2 = 0;
    v3 = (*((_DWORD *)v1 + 74) - *((_DWORD *)v1 + 73)) >> 2;
    while ( v2 != v3 )
    {
      this = *(Ogre::MovableObject **)(*(_DWORD *)(4 * v2 + *((_DWORD *)v1 + 73)) + 12);
      if ( this != nullptr )
        this = (Ogre::MovableObject *)(*(int (__fastcall **)(Ogre::MovableObject *))(*(_DWORD *)this + 52))(this);
      ++v2;
    }
  }
  return this;
}


//======================================================================
// Ogre::Entity::intersectRay(Ogre::IntersectType,Ogre::Ray const&,float *)
// address: 0x0018B39A   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::Entity::intersectRay(int a1, int a2, Ogre::Ray *a3)
{
  int v3; // r4

  v3 = *(_DWORD *)(a1 + 364);
  if ( v3 != 0 )
    return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 56))(*(_DWORD *)(a1 + 364));
  else
    return Ogre::MovableObject::intersectRay(a1, a2, a3);
}


//======================================================================
// Ogre::Entity::invalidWorldCache(void)
// address: 0x0018B3B6   size: 0x44 (68 bytes)
//======================================================================
int __fastcall Ogre::Entity::invalidWorldCache(Ogre::Entity *this)
{
  char *v2; // r5
  int result; // r0
  int v4; // r6
  int v5; // r3
  int v6; // r4
  int v7; // r6
  int v8; // r3
  int v9; // r0

  v2 = (char *)this + 252;
  Ogre::MovableObject::invalidWorldCache(this);
  result = *((_DWORD *)v2 + 28);
  if ( result != 0 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 64))(result);
  v4 = *((_DWORD *)this + 74);
  v5 = *((_DWORD *)this + 73);
  v6 = 0;
  v7 = (v4 - v5) >> 2;
  while ( v6 != v7 )
  {
    v8 = 4 * v6++;
    v9 = *(_DWORD *)(*(_DWORD *)(v8 + *((_DWORD *)v2 + 10)) + 12);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 64))(v9);
  }
  return result;
}


//======================================================================
// Ogre::Entity::setCanSel(bool)
// address: 0x0018B3FA   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::Entity::setCanSel(Ogre::Entity *this, _BOOL4 a2)
{
  char *v2; // r5
  int result; // r0

  v2 = (char *)this + 252;
  Ogre::RenderableObject::setCanSel(this, a2);
  result = *((_DWORD *)v2 + 28);
  if ( result != 0 )
    return (*(int (__fastcall **)(int, _BOOL4))(*(_DWORD *)result + 76))(result, a2);
  return result;
}


//======================================================================
// Ogre::Entity::getRenderPassRequired(Ogre::RenderPassDesc &)
// address: 0x0018B418   size: 0x5A (90 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::getRenderPassRequired(_DWORD *a1, int a2)
{
  _DWORD *v2; // r7
  int v4; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r4
  Ogre::BaseObject *v9; // r5
  __int64 v11; // [sp+0h] [bp-Ch]

  LODWORD(v11) = a1;
  v2 = a1 + 63;
  v4 = a1[91];
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 96))(v4);
  v6 = a1[74];
  v7 = a1[73];
  v8 = 0;
  HIDWORD(v11) = (v6 - v7) >> 2;
  while ( v8 != HIDWORD(v11) )
  {
    v9 = *(Ogre::BaseObject **)(*(_DWORD *)(4 * v8 + v2[10]) + 12);
    if ( Ogre::BaseObject::isKindOf(v9, (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI) != nullptr )
      (*(void (__fastcall **)(Ogre::BaseObject *, int))(*(_DWORD *)v9 + 96))(v9, a2);
    ++v8;
  }
  return v11;
}


//======================================================================
// Ogre::Entity::resetUpdate(bool,unsigned int)
// address: 0x0018B478   size: 0x9A (154 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::resetUpdate(Ogre::Entity *this, _BOOL4 a2, unsigned int a3)
{
  int v4; // r0
  int v7; // r7
  int v8; // r3
  float v9; // r7
  int v10; // r6
  __int64 v12; // [sp+0h] [bp-Ch]
  int v13; // [sp+4h] [bp-8h]

  LODWORD(v12) = this;
  *((_BYTE *)this + 184) = a2;
  v4 = *((_DWORD *)this + 91);
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4);
  v7 = 0;
  v13 = (*((_DWORD *)this + 74) - *((_DWORD *)this + 73)) >> 2;
  while ( v7 != v13 )
  {
    v8 = *(_DWORD *)(4 * v7++ + *((_DWORD *)this + 73));
    (*(void (__fastcall **)(_DWORD, _BOOL4, unsigned int))(**(_DWORD **)(v8 + 12) + 44))(*(_DWORD *)(v8 + 12), a2, a3);
  }
  if ( a3 == -1 )
    v9 = -1.0;
  else
    v9 = (float)a3 / 1000.0;
  v10 = 0;
  HIDWORD(v12) = (*((_DWORD *)this + 101) - *((_DWORD *)this + 100)) >> 2;
  while ( v10 != HIDWORD(v12) )
    Ogre::ModelMotion::resetUpdate(*(Ogre::ModelMotion **)(4 * v10++ + *((_DWORD *)this + 100)), a2, v9, this);
  return v12;
}


//======================================================================
// Ogre::Entity::getAnchorWorldMatrix(int)
// address: 0x0018B540   size: 0x16 (22 bytes)
//======================================================================
Ogre::Entity *__fastcall Ogre::Entity::getAnchorWorldMatrix(Ogre::Entity *this, Ogre::MovableObject *a2)
{
  char *WorldMatrix; // r0

  WorldMatrix = Ogre::MovableObject::getWorldMatrix(a2);
  Ogre::Matrix4::Matrix4((int)this, (const Ogre::Matrix4 *)WorldMatrix);
  return this;
}


//======================================================================
// Ogre::Entity::updateWorldCache(void)
// address: 0x0018B558   size: 0x1CA (458 bytes)
//======================================================================
float __fastcall Ogre::Entity::updateWorldCache(Ogre::Entity *this)
{
  float result; // r0
  int v3; // r5
  _DWORD *v4; // r6
  Ogre::Vector3 *v5; // r7
  _DWORD *v6; // r3
  int v7; // r2
  _DWORD *v8; // r5
  char *WorldMatrix; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r6
  int v13; // r5
  int v14; // r3
  float v15; // r2
  float *v16; // r5
  float v17; // r6
  float *v18; // r5
  float *v19; // r4
  float v20; // [sp+0h] [bp-4Ch]
  float v21; // [sp+0h] [bp-4Ch]
  float v22; // [sp+4h] [bp-48h]
  float v23; // [sp+4h] [bp-48h]
  float v24; // [sp+8h] [bp-44h]
  float v25; // [sp+8h] [bp-44h]
  float v26; // [sp+Ch] [bp-40h]
  float v27; // [sp+Ch] [bp-40h]
  float v28; // [sp+10h] [bp-3Ch]
  float v29; // [sp+10h] [bp-3Ch]
  float v30; // [sp+14h] [bp-38h]
  int v31; // [sp+1Ch] [bp-30h]
  float v32[3]; // [sp+20h] [bp-2Ch] BYREF
  float v33[3]; // [sp+2Ch] [bp-20h] BYREF
  float v34; // [sp+38h] [bp-14h]
  float v35; // [sp+3Ch] [bp-10h]
  float v36; // [sp+40h] [bp-Ch]
  char v37; // [sp+44h] [bp-8h]

  result = Ogre::MovableObject::updateWorldCache(this);
  v3 = *((_DWORD *)this + 91);
  v4 = (_DWORD *)((char *)this + 140);
  v5 = (Ogre::Entity *)((char *)this + 152);
  if ( v3 != 0 )
  {
    if ( *(_BYTE *)(v3 + 180) != 0 )
      result = COERCE_FLOAT((*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 68))(*((_DWORD *)this + 91)));
    v6 = (_DWORD *)(v3 + 140);
    v7 = *(_DWORD *)(v3 + 140);
    v8 = (_DWORD *)(v3 + 152);
    *v4 = v7;
    *((_DWORD *)this + 36) = v6[1];
    *((_DWORD *)this + 37) = v6[2];
    *(_DWORD *)v5 = *v8;
    *((_DWORD *)this + 39) = v8[1];
    *((_DWORD *)this + 40) = v8[2];
    *((_DWORD *)this + 41) = v6[6];
  }
  else
  {
    *(_DWORD *)v5 = 1128792064;
    *((_DWORD *)this + 39) = 1128792064;
    *((_DWORD *)this + 40) = 1128792064;
    *((float *)this + 41) = Ogre::Vector3::length((Ogre::Entity *)((char *)this + 152));
    WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
    v10 = *((_DWORD *)WorldMatrix + 12);
    v11 = *((_DWORD *)WorldMatrix + 13);
    result = *((float *)WorldMatrix + 14);
    *v4 = v10;
    *((_DWORD *)this + 36) = v11;
    *((float *)this + 37) = result;
    v37 = 0;
    v12 = 0;
    v31 = (*((_DWORD *)this + 74) - *((_DWORD *)this + 73)) >> 2;
    while ( v12 != v31 )
    {
      v13 = *(_DWORD *)(*(_DWORD *)(4 * v12 + *((_DWORD *)this + 73)) + 12);
      if ( v13 != 0 )
      {
        if ( *(_BYTE *)(v13 + 180) != 0 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v13 + 68))(*(_DWORD *)(*(_DWORD *)(4 * v12 + *((_DWORD *)this + 73))
                                                                           + 12));
        v14 = v13 + 140;
        v15 = *(float *)(v13 + 140);
        v16 = (float *)(v13 + 152);
        v20 = v15;
        v22 = *(float *)(v14 + 4);
        v24 = *(float *)(v14 + 8);
        v28 = v16[1];
        v30 = v16[2];
        v26 = *v16;
        v32[0] = v15 - *v16;
        v32[1] = v22 - v28;
        v32[2] = v24 - v30;
        Ogre::BoxBound::operator+=((int)v33, v32);
        v32[0] = v20 + v26;
        v32[1] = v22 + v28;
        v32[2] = v24 + v30;
        result = COERCE_FLOAT(Ogre::BoxBound::operator+=((int)v33, v32));
      }
      ++v12;
    }
    if ( v37 != 0 )
    {
      v17 = v34;
      v21 = v33[0];
      v23 = v33[1];
      v29 = v36;
      v25 = v35;
      v18 = (float *)((char *)this + 140);
      v19 = (float *)((char *)this + 152);
      v27 = v33[2];
      *v18 = (float)(v33[0] + v34) * 0.5;
      v18[1] = (float)(v23 + v25) * 0.5;
      v18[2] = (float)(v27 + v29) * 0.5;
      *v19 = (float)(v17 - v21) * 0.5;
      v19[1] = (float)(v25 - v23) * 0.5;
      v19[2] = (float)(v29 - v27) * 0.5;
      result = Ogre::Vector3::length(v5);
      v18[6] = result;
    }
  }
  return result;
}


//======================================================================
// Ogre::Entity::setLiuGuangTexture(char const*)
// address: 0x0018B728   size: 0x32 (50 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::Entity::setLiuGuangTexture(
        Ogre::Entity *this,
        Ogre::FixedString *a2,
        int a3)
{
  Ogre::ResourceManager *v4; // r6
  int v5; // r6
  void *v6; // r1
  Ogre::FixedString *v7; // [sp+4h] [bp-4h] BYREF

  v4 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v7, a2, a3);
  v5 = Ogre::ResourceManager::blockLoad(v4, &v7, 0);
  Ogre::FixedString::~FixedString(&v7, v6);
  (*(void (__fastcall **)(Ogre::Entity *, int))(*(_DWORD *)this + 32))(this, v5);
}


//======================================================================
// Ogre::Entity::Entity(void)
// address: 0x0018B7B4   size: 0x1A6 (422 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre6EntityC2Ev'
Ogre::Entity *__fastcall Ogre::Entity::Entity(Ogre::Entity *this)
{
  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_458100;
  *((_DWORD *)this + 63) = off_458170;
  j_memset((char *)this + 260, 0, 0x10u);
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 67) = (char *)this + 260;
  *((_DWORD *)this + 68) = (char *)this + 260;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 0;
  *((_DWORD *)this + 82) = 0;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 100) = 0;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  *((_BYTE *)this + 440) = 0;
  *((_BYTE *)this + 441) = 0;
  *((_DWORD *)this + 111) = -1;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 113) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 117) = 0;
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 128) = &byte_55FB88;
  *((_DWORD *)this + 129) = 0;
  *((_DWORD *)this + 130) = 0;
  *((_DWORD *)this + 131) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 122) = 1065353216;
  *((_DWORD *)this + 119) = 1042536202;
  *((_DWORD *)this + 120) = 1065185444;
  *((_DWORD *)this + 121) = 1065185444;
  *((_BYTE *)this + 504) = 0;
  *((_BYTE *)this + 368) = 0;
  *((_BYTE *)this + 376) = 0;
  *((_DWORD *)this + 93) = 1065353216;
  *((_DWORD *)this + 127) = 0;
  *((_DWORD *)this + 95) = 1053609165;
  *((_DWORD *)this + 96) = 1053609165;
  *((_DWORD *)this + 97) = 1065353216;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 0;
  return this;
}


//======================================================================
// Ogre::Entity::newObject(void)
// address: 0x0018B970   size: 0x14 (20 bytes)
//======================================================================
Ogre::Entity *__fastcall Ogre::Entity::newObject(Ogre::Entity *this)
{
  Ogre::Entity *v1; // r4

  v1 = (Ogre::Entity *)operator new(0x210u);
  Ogre::Entity::Entity(v1);
  return v1;
}


//======================================================================
// Ogre::Entity::setBoreder(Ogre::Material *)
// address: 0x0018B984   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Entity::setBoreder(int result, int a2)
{
  *(_DWORD *)(result + 472) = a2;
  return result;
}


//======================================================================
// Ogre::Entity::getBoreder(void)
// address: 0x0018B98C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Entity::getBoreder(Ogre::Entity *this)
{
  return *((_DWORD *)this + 118);
}


//======================================================================
// Ogre::Entity::enableDeadEffect(bool)
// address: 0x0018B994   size: 0x4C (76 bytes)
//======================================================================
int __fastcall Ogre::Entity::enableDeadEffect(Ogre::Entity *this, bool a2)
{
  int result; // r0
  int v3; // r3
  int v4; // r2
  int v5; // r5
  unsigned int i; // r2
  int v7; // r4
  int v8; // r4

  *((_BYTE *)this + 368) = a2;
  result = *((_DWORD *)this + 91);
  v3 = 0;
  if ( result != 0 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(result + 264);
      if ( v3 >= (*(_DWORD *)(result + 268) - v4) >> 2 )
        break;
      v5 = *(_DWORD *)(4 * v3 + v4);
      for ( i = 0; ; ++i )
      {
        v7 = *(_DWORD *)(v5 + 8);
        if ( i >= (*(_DWORD *)(v5 + 12) - v7) >> 2 )
          break;
        v8 = *(_DWORD *)(4 * i + v7);
        *(_BYTE *)(v8 + 40) = a2;
      }
      ++v3;
    }
  }
  return result;
}


//======================================================================
// Ogre::Entity::isDeadEffectEnabled(void)
// address: 0x0018B9E0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Entity::isDeadEffectEnabled(Ogre::Entity *this)
{
  return *((unsigned __int8 *)this + 368);
}


//======================================================================
// Ogre::Entity::setDeadScale(float)
// address: 0x0018B9E8   size: 0x46 (70 bytes)
//======================================================================
int __fastcall Ogre::Entity::setDeadScale(Ogre::Entity *this, float a2)
{
  float *v2; // r0
  int result; // r0
  int v4; // r3
  int v5; // r2
  int v6; // r5
  unsigned int i; // r2
  int v8; // r4
  int v9; // r4

  v2 = (float *)((char *)this + 252);
  v2[30] = a2;
  result = *((_DWORD *)v2 + 28);
  v4 = 0;
  if ( result != 0 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(result + 264);
      if ( v4 >= (*(_DWORD *)(result + 268) - v5) >> 2 )
        break;
      v6 = *(_DWORD *)(4 * v4 + v5);
      for ( i = 0; ; ++i )
      {
        v8 = *(_DWORD *)(v6 + 8);
        if ( i >= (*(_DWORD *)(v6 + 12) - v8) >> 2 )
          break;
        v9 = *(_DWORD *)(4 * i + v8);
        *(float *)(v9 + 44) = a2;
      }
      ++v4;
    }
  }
  return result;
}


//======================================================================
// Ogre::Entity::isUVMaskEnabled(void)
// address: 0x0018BA2E   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Entity::isUVMaskEnabled(Ogre::Entity *this)
{
  return *((unsigned __int8 *)this + 376);
}


//======================================================================
// Ogre::Entity::setUVMaskSpeed(Ogre::Vector2)
// address: 0x0018BA36   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::Entity::setUVMaskSpeed(int a1)
{
  int result; // r0
  int vars0; // [sp+0h] [bp+0h]
  int vars4; // [sp+4h] [bp+4h]

  *(_DWORD *)(a1 + 380) = vars0;
  result = a1 + 380;
  *(_DWORD *)(result + 4) = vars4;
  return result;
}


//======================================================================
// Ogre::Entity::getUVMaskSpeed(void)
// address: 0x0018BA52   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Entity::getUVMaskSpeed(_DWORD *this, int a2)
{
  int v2; // r3
  int v3; // r1

  v2 = *(_DWORD *)(a2 + 380);
  v3 = *(_DWORD *)(a2 + 384);
  *this = v2;
  *(this + 1) = v3;
  return this;
}


//======================================================================
// Ogre::Entity::setUVMaskColor(Ogre::Vector3)
// address: 0x0018BA64   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::Entity::setUVMaskColor(int a1, _DWORD *a2)
{
  int result; // r0

  *(_DWORD *)(a1 + 388) = *a2;
  result = a1 + 388;
  *(_DWORD *)(result + 4) = a2[1];
  *(_DWORD *)(result + 8) = a2[2];
  return result;
}


//======================================================================
// Ogre::Entity::setModePlayRadio(float)
// address: 0x0018BA7A   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Entity::setModePlayRadio(int this, float a2)
{
  *(float *)(this + 488) = a2;
  return this;
}


//======================================================================
// Ogre::Entity::getModelPlayRadio(void)
// address: 0x0018BA82   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Entity::getModelPlayRadio(Ogre::Entity *this)
{
  return *((_DWORD *)this + 122);
}


//======================================================================
// Ogre::Entity::getNumMotion(void)
// address: 0x0018BA8A   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::Entity::getNumMotion(Ogre::Entity *this)
{
  return (*((_DWORD *)this + 101) - *((_DWORD *)this + 100)) >> 2;
}


//======================================================================
// Ogre::Entity::getIthMotion(unsigned int)
// address: 0x0018BA9E   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::Entity::getIthMotion(Ogre::Entity *this, unsigned int a2)
{
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 100));
}


//======================================================================
// Ogre::Entity::stopMotion(Ogre::FixedString const&)
// address: 0x0018BAAA   size: 0x44 (68 bytes)
//======================================================================
int __fastcall Ogre::Entity::stopMotion(int this, const Ogre::FixedString *a2)
{
  int v2; // r5
  unsigned int i; // r4
  int v5; // r3
  Ogre::ModelMotion *v6; // r6

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v2 + 400);
    if ( i >= (*(_DWORD *)(v2 + 404) - v5) >> 2 )
      break;
    v6 = *(Ogre::ModelMotion **)(4 * i + v5);
    this = Ogre::ModelMotion::IsPlaying(v6);
    if ( this != 0 && *(_DWORD *)a2 == *((_DWORD *)v6 + 10) )
      this = Ogre::ModelMotion::Stop((int)v6, v2);
  }
  return this;
}


//======================================================================
// Ogre::Entity::delayStopMotion(Ogre::FixedString const&,float)
// address: 0x0018BAEE   size: 0x48 (72 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::Entity::delayStopMotion(
        Ogre::Entity *this,
        const Ogre::FixedString *a2,
        unsigned int a3)
{
  unsigned int i; // r4
  int v6; // r3
  Ogre::ModelMotion *v7; // r6
  unsigned __int64 v9; // [sp+0h] [bp-Ch]

  v9 = __PAIR64__(a3, (unsigned int)this);
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 100);
    if ( i >= (*((_DWORD *)this + 101) - v6) >> 2 )
      break;
    v7 = *(Ogre::ModelMotion **)(4 * i + v6);
    if ( Ogre::ModelMotion::IsPlaying(v7) && *(_DWORD *)a2 == *((_DWORD *)v7 + 10) )
      Ogre::ModelMotion::DelayStop((int)v7, (int)this, SHIDWORD(v9));
  }
  return v9;
}


//======================================================================
// Ogre::Entity::stopMotion(void)
// address: 0x0018BB36   size: 0x38 (56 bytes)
//======================================================================
int __fastcall Ogre::Entity::stopMotion(int this)
{
  int v1; // r5
  unsigned int i; // r4
  int v3; // r3
  Ogre::ModelMotion *v4; // r6

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(v1 + 400);
    if ( i >= (*(_DWORD *)(v1 + 404) - v3) >> 2 )
      break;
    v4 = *(Ogre::ModelMotion **)(4 * i + v3);
    this = Ogre::ModelMotion::IsPlaying(v4);
    if ( this != 0 )
      this = Ogre::ModelMotion::Stop((int)v4, v1);
  }
  return this;
}


//======================================================================
// Ogre::Entity::stopMotion(int)
// address: 0x0018BB6E   size: 0x42 (66 bytes)
//======================================================================
int __fastcall Ogre::Entity::stopMotion(int this, int a2)
{
  int v2; // r5
  unsigned int i; // r4
  int v5; // r3
  Ogre::ModelMotion *v6; // r6

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v2 + 400);
    if ( i >= (*(_DWORD *)(v2 + 404) - v5) >> 2 )
      break;
    v6 = *(Ogre::ModelMotion **)(4 * i + v5);
    this = Ogre::ModelMotion::IsPlaying(v6);
    if ( this != 0 && *((_DWORD *)v6 + 16) == a2 )
      this = Ogre::ModelMotion::Stop((int)v6, v2);
  }
  return this;
}


//======================================================================
// Ogre::Entity::delayStopMotion(int,float)
// address: 0x0018BBB0   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::delayStopMotion(__int64 this, int a2)
{
  int v2; // r5
  unsigned int i; // r4
  int v5; // r3
  Ogre::ModelMotion *v6; // r6

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v2 + 400);
    if ( i >= (*(_DWORD *)(v2 + 404) - v5) >> 2 )
      break;
    v6 = *(Ogre::ModelMotion **)(4 * i + v5);
    if ( Ogre::ModelMotion::IsPlaying(v6) && *((_DWORD *)v6 + 16) == HIDWORD(this) )
      Ogre::ModelMotion::DelayStop((int)v6, v2, a2);
  }
  return this;
}


//======================================================================
// Ogre::Entity::playMotion(int,bool,int)
// address: 0x0018BBF8   size: 0x34 (52 bytes)
//======================================================================
int __fastcall Ogre::Entity::playMotion(Ogre::Entity *this, int a2, int a3, int a4)
{
  int v7; // r5

  if ( a3 != 0 )
    Ogre::Entity::stopMotion((int)this, a4);
  v7 = *(_DWORD *)(4 * a2 + *((_DWORD *)this + 100));
  sub_3BE508((int)this + 512, *(char **)(v7 + 40));
  *(_DWORD *)(v7 + 64) = a4;
  return Ogre::ModelMotion::PlayMotion(v7, this);
}


//======================================================================
// Ogre::Entity::playAnim(int)
// address: 0x0018BC2C   size: 0x1C (28 bytes)
//======================================================================
Ogre::Model *__fastcall Ogre::Entity::playAnim(Ogre::Entity *this, int a2)
{
  Ogre::Model *result; // r0

  *((_DWORD *)this + 111) = a2;
  result = *((Ogre::Model **)this + 91);
  if ( result != nullptr )
    return (Ogre::Model *)Ogre::Model::playAnim(result, a2, 1.0, 1.0);
  return result;
}


//======================================================================
// Ogre::Entity::getCurAnimID(void)
// address: 0x0018BC48   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Entity::getCurAnimID(Ogre::Entity *this)
{
  return *((_DWORD *)this + 111);
}


//======================================================================
// Ogre::Entity::hasAnimPlaying(int)
// address: 0x0018BC50   size: 0x10 (16 bytes)
//======================================================================
Ogre::Model *__fastcall Ogre::Entity::hasAnimPlaying(Ogre::Entity *this, int a2)
{
  Ogre::Model *result; // r0

  result = *((Ogre::Model **)this + 91);
  if ( result != nullptr )
    return Ogre::Model::hasAnimPlaying(result, a2);
  return result;
}


//======================================================================
// Ogre::Entity::findMotion(Ogre::FixedString const&)
// address: 0x0018BC60   size: 0x2C (44 bytes)
//======================================================================
int __fastcall Ogre::Entity::findMotion(Ogre::Entity *this, const Ogre::FixedString *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r4
  int result; // r0

  v2 = *((_DWORD *)this + 100);
  v3 = 0;
  v4 = (*((_DWORD *)this + 101) - v2) >> 2;
  while ( v3 != v4 )
  {
    result = *(_DWORD *)(v2 + 4 * v3);
    if ( *(_DWORD *)(result + 40) == *(_DWORD *)a2 )
      return result;
    ++v3;
  }
  return 0;
}


//======================================================================
// Ogre::Entity::IsPlaying(void)
// address: 0x0018BC8C   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::Entity::IsPlaying(Ogre::Entity *this)
{
  int v1; // r4
  int v2; // r3
  int v3; // r5
  int v4; // r6

  v1 = *((_DWORD *)this + 89);
  v2 = 1;
  if ( v1 == 0 )
  {
    v3 = *((_DWORD *)this + 100);
    v4 = (*((_DWORD *)this + 101) - v3) >> 2;
    while ( 1 )
    {
      if ( v1 == v4 )
        return 0;
      if ( Ogre::ModelMotion::IsPlaying(*(Ogre::ModelMotion **)(v3 + 4 * v1)) )
        break;
      ++v1;
    }
    return 1;
  }
  return v2;
}


//======================================================================
// Ogre::Entity::playBindAnim(int,int)
// address: 0x0018BCC8   size: 0x7A (122 bytes)
//======================================================================
int __fastcall Ogre::Entity::playBindAnim(Ogre::Entity *this, int a2, int a3)
{
  unsigned int v3; // r4
  int v6; // r3
  int v7; // r3
  Ogre::Entity *v8; // r5
  Ogre::Model *v9; // r0
  int v11; // [sp+0h] [bp-Ch]

  v3 = 0;
  v11 = 0;
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 73);
    if ( v3 >= (*((_DWORD *)this + 74) - v6) >> 2 )
      return v11;
    v7 = *(_DWORD *)(4 * v3 + v6);
    if ( *(_DWORD *)(v7 + 4) == a2 )
    {
      v8 = *(Ogre::Entity **)(v7 + 12);
      if ( Ogre::BaseObject::isKindOf(v8, (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI) != nullptr )
      {
        v9 = Ogre::Entity::playAnim(v8, a3);
      }
      else
      {
        if ( Ogre::BaseObject::isKindOf(v8, (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI) == nullptr )
          goto LABEL_10;
        v9 = (Ogre::Model *)Ogre::Model::playAnim(v8, a3, 1.0, 1.0);
      }
      if ( v9 != nullptr )
        v11 = 1;
    }
LABEL_10:
    ++v3;
  }
}


//======================================================================
// Ogre::Entity::getAnchors(std::vector<int,std::allocator<int>> &,bool)
// address: 0x0018BD4C   size: 0x80 (128 bytes)
//======================================================================
int __fastcall Ogre::Entity::getAnchors(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r7
  int v5; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r5
  Ogre::BaseObject *v12; // r6
  int v13; // [sp+4h] [bp-8h]

  v3 = a1 + 63;
  v5 = a1[91];
  if ( v5 != 0 )
    Ogre::Model::getAnchors(v5, a2);
  if ( a3 != 0 )
  {
    v9 = a1[74];
    v10 = a1[73];
    v11 = 0;
    v13 = (v9 - v10) >> 2;
    while ( v11 != v13 )
    {
      v12 = *(Ogre::BaseObject **)(*(_DWORD *)(4 * v11 + v3[10]) + 12);
      if ( Ogre::BaseObject::isKindOf(v12, (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI) != nullptr )
      {
        Ogre::Entity::getAnchors(v12, a2, 1);
      }
      else if ( Ogre::BaseObject::isKindOf(v12, (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI) != nullptr )
      {
        Ogre::Model::getAnchors((int)v12, a2);
      }
      ++v11;
    }
  }
  return (a2[1] - *a2) >> 2;
}


//======================================================================
// Ogre::Entity::releaseChildObject(Ogre::MovableObject *)
// address: 0x0018BDD4   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Entity::releaseChildObject(Ogre::Entity *this, Ogre::MovableObject *a2)
{
  Ogre::MovableObject::setSRTFather(a2, nullptr, 0);
  *((_DWORD *)a2 + 44) = 0;
  if ( *((_DWORD *)this + 48) != 0 )
    (*(void (__fastcall **)(Ogre::MovableObject *))(*(_DWORD *)a2 + 52))(a2);
  return Ogre::BaseObject::release(a2);
}


//======================================================================
// Ogre::Entity::findAnchorOwnerModel(int,Ogre::MovableObject *)
// address: 0x0018BE04   size: 0x136 (310 bytes)
//======================================================================
Ogre::Entity *__fastcall Ogre::Entity::findAnchorOwnerModel(Ogre::Entity *this, int a2, Ogre::MovableObject *a3)
{
  char *v3; // r4
  Ogre::Model *v5; // r0
  int v6; // r6
  _DWORD *v7; // r3
  Ogre::Entity *AnchorOwnerModel; // r4
  int v9; // r6
  int v10; // r7
  int v12; // [sp+4h] [bp-18h]

  v3 = (char *)this + 252;
  v5 = *((Ogre::Model **)this + 91);
  if ( v5 != nullptr && Ogre::Model::hasAnchor(v5, a2) != 0 )
    return *((Ogre::Entity **)v3 + 28);
  if ( a2 != 300 )
  {
LABEL_16:
    v9 = 0;
    v10 = (*((_DWORD *)this + 74) - *((_DWORD *)this + 73)) >> 2;
    while ( 1 )
    {
      if ( v9 == v10 )
        return nullptr;
      AnchorOwnerModel = *(Ogre::Entity **)(*(_DWORD *)(4 * v9 + *((_DWORD *)this + 73)) + 12);
      if ( AnchorOwnerModel != a3 )
      {
        if ( Ogre::BaseObject::isKindOf(
               *(Ogre::BaseObject **)(*(_DWORD *)(4 * v9 + *((_DWORD *)this + 73)) + 12),
               (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI) != nullptr )
        {
          AnchorOwnerModel = (Ogre::Entity *)Ogre::Entity::findAnchorOwnerModel(AnchorOwnerModel, a2, a3);
        }
        else if ( Ogre::BaseObject::isKindOf(AnchorOwnerModel, (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI) == nullptr
               || Ogre::Model::hasAnchor(AnchorOwnerModel, a2) == 0 )
        {
          goto LABEL_24;
        }
        if ( AnchorOwnerModel != nullptr )
          return AnchorOwnerModel;
      }
LABEL_24:
      ++v9;
    }
  }
  v6 = 0;
  v12 = (*((_DWORD *)this + 74) - *((_DWORD *)this + 73)) >> 2;
  while ( 1 )
  {
    if ( v6 == v12 )
      goto LABEL_16;
    v7 = *(_DWORD **)(4 * v6 + *((_DWORD *)this + 73));
    if ( (unsigned int)(*v7 - 100) <= 1 || *v7 == 114 )
    {
      AnchorOwnerModel = (Ogre::Entity *)v7[3];
      if ( AnchorOwnerModel == a3 )
        goto LABEL_15;
      if ( Ogre::BaseObject::isKindOf(AnchorOwnerModel, (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI) != nullptr )
        break;
      if ( Ogre::BaseObject::isKindOf(AnchorOwnerModel, (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI) != nullptr
        && Ogre::Model::hasAnchor(AnchorOwnerModel, 300) != 0 )
      {
        goto LABEL_14;
      }
    }
LABEL_15:
    ++v6;
  }
  AnchorOwnerModel = (Ogre::Entity *)Ogre::Entity::findAnchorOwnerModel(AnchorOwnerModel, 300, a3);
LABEL_14:
  if ( AnchorOwnerModel == nullptr )
    goto LABEL_15;
  return AnchorOwnerModel;
}


//======================================================================
// Ogre::Entity::getAnchorWorldTM(int)
// address: 0x0018BF48   size: 0x34 (52 bytes)
//======================================================================
Ogre::Entity *__fastcall Ogre::Entity::getAnchorWorldTM(Ogre::Entity *this, Ogre::Entity *a2, int a3)
{
  Ogre::Entity *AnchorOwnerModel; // r0
  char *WorldMatrix; // r0

  AnchorOwnerModel = Ogre::Entity::findAnchorOwnerModel(a2, a3, nullptr);
  if ( AnchorOwnerModel != nullptr )
  {
    (*(void (__fastcall **)(Ogre::Entity *, Ogre::Entity *, int))(*(_DWORD *)AnchorOwnerModel + 60))(
      this,
      AnchorOwnerModel,
      a3);
  }
  else
  {
    WorldMatrix = Ogre::MovableObject::getWorldMatrix(a2);
    Ogre::Matrix4::Matrix4((int)this, (const Ogre::Matrix4 *)WorldMatrix);
  }
  return this;
}


//======================================================================
// Ogre::Entity::getAnchorWorldPos(unsigned int)
// address: 0x0018BF7C   size: 0x20 (32 bytes)
//======================================================================
Ogre::Entity *__fastcall Ogre::Entity::getAnchorWorldPos(Ogre::Entity *this, Ogre::Entity *a2, int a3)
{
  int v5; // r5
  _DWORD v6[17]; // [sp+0h] [bp-44h] BYREF

  Ogre::Entity::getAnchorWorldTM((Ogre::Entity *)v6, a2, a3);
  *((_DWORD *)this + 1) = v6[13];
  v5 = v6[12];
  *((_DWORD *)this + 2) = v6[14];
  *(_DWORD *)this = v5;
  return this;
}


//======================================================================
// Ogre::Entity::updateEffect(unsigned int)
// address: 0x0018BF9C   size: 0xAA (170 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::updateEffect(Ogre::Entity *this, unsigned int a2)
{
  unsigned int i; // r5
  int v5; // r3
  Ogre::ModelMotion *v6; // r6
  int v7; // r6
  int *v8; // r3
  int v9; // r5
  __int64 v11; // [sp+0h] [bp-Ch]

  LODWORD(v11) = this;
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 100);
    if ( i >= (*((_DWORD *)this + 101) - v5) >> 2 )
      break;
    v6 = *(Ogre::ModelMotion **)(4 * i + v5);
    if ( Ogre::ModelMotion::IsPlaying(v6) )
      Ogre::ModelMotion::Update(*(float *)&v6, (float)a2 / 1000.0, this);
  }
  v7 = 0;
  HIDWORD(v11) = (*((_DWORD *)this + 74) - *((_DWORD *)this + 73)) >> 2;
  while ( v7 != HIDWORD(v11) )
  {
    v8 = *(int **)(4 * v7 + *((_DWORD *)this + 73));
    v9 = v8[3];
    LODWORD(v11) = v9 + 183;
    *(_BYTE *)v11 = *v8 == 0 || Ogre::Entity::findAnchorOwnerModel(this, *v8, nullptr) != nullptr;
    ++v7;
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 64))(v9);
    (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v9 + 40))(v9, a2);
  }
  return v11;
}


//======================================================================
// Ogre::Entity::updateNoBindFather(void)
// address: 0x0018C04C   size: 0x62 (98 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::updateNoBindFather(Ogre::Entity *this)
{
  int v2; // r5
  int *v3; // r7
  Ogre::MovableObject *AnchorOwnerModel; // r1
  Ogre::Entity *v6; // [sp+0h] [bp-Ch]
  int v7; // [sp+4h] [bp-8h]

  v6 = this;
  v7 = (*((_DWORD *)this + 77) - *((_DWORD *)this + 76)) >> 2;
  v2 = 4 * (v7 + 0x3FFFFFFF);
  while ( v7 != 0 )
  {
    v3 = *(int **)(*((_DWORD *)this + 73) + v2);
    --v7;
    v6 = (Ogre::Entity *)v3[3];
    AnchorOwnerModel = Ogre::Entity::findAnchorOwnerModel(this, *v3, v6);
    if ( AnchorOwnerModel != nullptr )
    {
      Ogre::MovableObject::setSRTFather(v6, AnchorOwnerModel, *v3);
      *(_DWORD *)(*((_DWORD *)this + 76) + v2) = *(_DWORD *)(*((_DWORD *)this + 77) - 4);
      *((_DWORD *)this + 77) -= 4;
    }
    v2 -= 4;
  }
  return (unsigned int)v6;
}


//======================================================================
// Ogre::Entity::stopAnim(int)
// address: 0x0018C0B4   size: 0x10 (16 bytes)
//======================================================================
Ogre::Model *__fastcall Ogre::Entity::stopAnim(Ogre::Entity *this, int a2)
{
  Ogre::Model *result; // r0

  result = *((Ogre::Model **)this + 91);
  if ( result != nullptr )
    return Ogre::Model::stopAnim(result, a2);
  return result;
}


//======================================================================
// Ogre::Entity::stopAnim(void)
// address: 0x0018C0C4   size: 0x10 (16 bytes)
//======================================================================
Ogre::Model *__fastcall Ogre::Entity::stopAnim(Ogre::Entity *this)
{
  Ogre::Model *result; // r0

  result = *((Ogre::Model **)this + 91);
  if ( result != nullptr )
    return Ogre::Model::stopAnim(result);
  return result;
}


//======================================================================
// Ogre::Entity::setInstanceAmbient(Ogre::ColourValue const&)
// address: 0x0018C0D4   size: 0x8A (138 bytes)
//======================================================================
const Ogre::RuntimeClass *__fastcall Ogre::Entity::setInstanceAmbient(_DWORD *a1, const Ogre::RuntimeClass **a2)
{
  const Ogre::RuntimeClass *v4; // r6
  const Ogre::RuntimeClass *v5; // r7
  const Ogre::RuntimeClass **v6; // r3
  const Ogre::RuntimeClass *result; // r0
  int v8; // r3
  const Ogre::RuntimeClass **v9; // r3
  const Ogre::RuntimeClass *v10; // r6
  const Ogre::RuntimeClass *v11; // r7
  unsigned int i; // r6
  int v13; // r3
  Ogre::BaseObject *v14; // r7
  const Ogre::RuntimeClass **v15; // r3
  const Ogre::RuntimeClass *v16; // r1
  const Ogre::RuntimeClass *v17; // r7

  v4 = a2[1];
  v5 = a2[2];
  a1[106] = *a2;
  a1[107] = v4;
  a1[108] = v5;
  v6 = (const Ogre::RuntimeClass **)(a1 + 109);
  result = a2[3];
  *v6 = result;
  v8 = (int)*(v6 - 18);
  if ( v8 != 0 )
  {
    v9 = (const Ogre::RuntimeClass **)(v8 + 416);
    result = *a2;
    v10 = a2[1];
    v11 = a2[2];
    *v9 = *a2;
    v9[1] = v10;
    v9[2] = v11;
    v9[3] = a2[3];
  }
  for ( i = 0; ; ++i )
  {
    v13 = a1[73];
    if ( i >= (a1[74] - v13) >> 2 )
      break;
    v14 = *(Ogre::BaseObject **)(*(_DWORD *)(4 * i + v13) + 12);
    if ( Ogre::BaseObject::isKindOf(v14, (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI) != nullptr )
    {
      v15 = (const Ogre::RuntimeClass **)((char *)v14 + 416);
      result = *a2;
      v16 = a2[1];
      v17 = a2[2];
      *v15 = *a2;
      v15[1] = v16;
      v15[2] = v17;
      v15[3] = a2[3];
    }
    else
    {
      result = Ogre::BaseObject::isKindOf(v14, (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI);
      if ( result != nullptr )
        result = (const Ogre::RuntimeClass *)Ogre::Entity::setInstanceAmbient(v14, (const Ogre::ColourValue *)a2);
    }
  }
  return result;
}


//======================================================================
// Ogre::Entity::calRenderUsageBits(void)
// address: 0x0018C168   size: 0x5E (94 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::calRenderUsageBits(Ogre::Entity *this)
{
  _DWORD *v1; // r5
  char *v2; // r6
  int v3; // r3
  int v4; // r4
  Ogre::BaseObject *v5; // r7
  __int64 v7; // [sp+0h] [bp-Ch]

  LODWORD(v7) = this;
  v1 = (_DWORD *)((char *)this + 244);
  *((_DWORD *)this + 61) = 0;
  v2 = (char *)this + 252;
  v3 = *((_DWORD *)this + 91);
  if ( v3 != 0 )
    *v1 = *(_DWORD *)(v3 + 244);
  v4 = 0;
  HIDWORD(v7) = (*((_DWORD *)this + 74) - *((_DWORD *)this + 73)) >> 2;
  while ( v4 != HIDWORD(v7) )
  {
    v5 = *(Ogre::BaseObject **)(*(_DWORD *)(4 * v4 + *((_DWORD *)v2 + 10)) + 12);
    if ( Ogre::BaseObject::isKindOf(v5, (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI) != nullptr )
      *v1 |= *((_DWORD *)v5 + 61);
    ++v4;
  }
  return v7;
}


//======================================================================
// Ogre::Entity::setPostSceneRenderer(Ogre::SceneRenderer *)
// address: 0x0018C1CC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Entity::setPostSceneRenderer(int this, Ogre::SceneRenderer *a2)
{
  *(_DWORD *)(this + 456) = a2;
  return this;
}


//======================================================================
// Ogre::Entity::getPostSceneRenderer(void)
// address: 0x0018C1D4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::Entity::getPostSceneRenderer(Ogre::Entity *this)
{
  return *((_DWORD *)this + 114);
}


//======================================================================
// Ogre::Entity::setPublicMotionDir(char const*)
// address: 0x0018C1DC   size: 0xC (12 bytes)
//======================================================================
int *__fastcall Ogre::Entity::setPublicMotionDir(Ogre::Entity *this, char *a2)
{
  return Ogre::FixedString::operator=((int *)this + 112, a2);
}


//======================================================================
// Ogre::Entity::clearAllOverlayMaterial(void)
// address: 0x0018C1E8   size: 0x3A (58 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Entity::clearAllOverlayMaterial(_DWORD *this)
{
  _DWORD *v1; // r4
  int i; // r5
  int v3; // r3

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = v1[115];
    if ( i >= (v1[116] - v3) >> 3 )
      break;
    this = *(_DWORD **)(v3 + 8 * i);
    if ( this != nullptr )
    {
      this = Ogre::BaseObject::release(this);
      *(_DWORD *)(v1[115] + 8 * i) = 0;
    }
  }
  v1[116] = v3;
  return this;
}


//======================================================================
// Ogre::Entity::playCurAnim(void)
// address: 0x0018C222   size: 0x1E (30 bytes)
//======================================================================
Ogre::Model *__fastcall Ogre::Entity::playCurAnim(Ogre::Model *this)
{
  int v1; // r1
  Ogre::Model *v2; // r4

  v1 = *((_DWORD *)this + 111);
  v2 = this;
  if ( v1 >= 0 )
  {
    this = Ogre::Entity::playAnim(this, v1);
    if ( this != nullptr )
      *((_DWORD *)v2 + 111) = -1;
  }
  return this;
}


//======================================================================
// Ogre::Entity::isLoading(void)
// address: 0x0018C240   size: 0xA (10 bytes)
//======================================================================
bool __fastcall Ogre::Entity::isLoading(Ogre::Entity *this)
{
  return *((_DWORD *)this + 89) != 0;
}


//======================================================================
// Ogre::Entity::isMotionPlaying(char const*,int)
// address: 0x0018C24A   size: 0x50 (80 bytes)
//======================================================================
bool __fastcall Ogre::Entity::isMotionPlaying(Ogre::Entity *this, const char *a2, int a3)
{
  unsigned int i; // r4
  int v6; // r3
  int v7; // r5
  _BOOL4 result; // r0

  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 100);
    if ( i >= (*((_DWORD *)this + 101) - v6) >> 2 )
      break;
    v7 = *(_DWORD *)(4 * i + v6);
    if ( *(_DWORD *)(v7 + 64) == a3 && Ogre::ModelMotion::IsPlaying(*(Ogre::ModelMotion **)(4 * i + v6)) )
    {
      result = Ogre::operator==((const char **)(v7 + 40), a2);
      if ( result )
        return result;
    }
  }
  return false;
}


//======================================================================
// Ogre::Entity::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x0018C2BC   size: 0x21A (538 bytes)
//======================================================================
Ogre::Material *__fastcall Ogre::Entity::render(
        Ogre::Entity *this,
        Ogre::SceneRenderer *a2,
        const Ogre::ShaderEnvData *a3)
{
  char *v4; // r5
  Ogre::Material *result; // r0
  int v7; // r3
  Ogre::Material *i; // r3
  int v9; // r5
  Ogre::Material *v10; // r6
  void *v12; // r1
  Ogre::Material *v13; // [sp+4h] [bp-538h]
  Ogre::Material *v14; // [sp+8h] [bp-534h]
  float v15; // [sp+8h] [bp-534h]
  Ogre::Material *v16; // [sp+8h] [bp-534h]
  int v18; // [sp+14h] [bp-528h]
  float v19; // [sp+18h] [bp-524h]
  int v20; // [sp+1Ch] [bp-520h]
  Ogre::FixedString *v21; // [sp+24h] [bp-518h] BYREF
  _BYTE v22[1300]; // [sp+28h] [bp-514h] BYREF

  v4 = (char *)this + 252;
  result = *((Ogre::Material **)this + 91);
  v18 = 1 << *((_DWORD *)a2 + 3);
  if ( result != nullptr && *((_BYTE *)result + 183) != 0 && (*((_DWORD *)result + 61) & v18) != 0 )
  {
    v7 = *((_DWORD *)this + 118);
    if ( v7 != 0 )
    {
      *(_BYTE *)(v7 + 29) = 1;
      Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v22, a3);
      Ogre::ShaderEnvData::clearFlags((Ogre::ShaderEnvData *)v22);
      if ( Ogre::operator==((const char **)(*(_DWORD *)(*((_DWORD *)this + 118) + 24) + 12), "border1") )
      {
        v16 = *((Ogre::Material **)this + 118);
        Ogre::FixedString::FixedString((Ogre::FixedString *)&v21, (Ogre::FixedString *)"g_color", (int)v16);
        Ogre::Material::setParamValue(v16, (const Ogre::FixedString *)&v21, (char *)this + 476);
        Ogre::FixedString::~FixedString(&v21, v12);
      }
      result = Ogre::Model::render(
                 *((Ogre::Material **)this + 91),
                 a2,
                 (const Ogre::ShaderEnvData *)v22,
                 *((Ogre::Material **)this + 118));
      *(_BYTE *)(*((_DWORD *)this + 118) + 29) = 0;
    }
    else
    {
      (*(void (__fastcall **)(Ogre::Material *, Ogre::SceneRenderer *, const Ogre::ShaderEnvData *))(*(_DWORD *)result + 72))(
        result,
        a2,
        a3);
      result = (Ogre::Entity *)((char *)this + 460);
      if ( (*((_DWORD *)this + 116) - *((_DWORD *)this + 115)) >> 3 != 0 )
      {
        result = (Ogre::Material *)std::vector<std::pair<Ogre::Material *,float>>::back((int)result);
        v10 = *(Ogre::Material **)result;
        if ( *(_DWORD *)result != 0 )
        {
          v15 = *(float *)(*((_DWORD *)v4 + 28) + 188);
          *(float *)(*((_DWORD *)v4 + 28) + 188) = v15 * *((float *)result + 1);
          result = Ogre::Model::render(*((Ogre::Material **)v4 + 28), a2, a3, v10);
          *(float *)(*((_DWORD *)v4 + 28) + 188) = v15;
        }
      }
    }
  }
  if ( Ogre::Entity::ms_bShowBindObject != 0 )
  {
    v20 = (*((_DWORD *)this + 80) - *((_DWORD *)this + 79)) >> 2;
    for ( i = nullptr; ; i = (Ogre::Material *)((char *)v14 + 1) )
    {
      v14 = i;
      if ( i == (Ogre::Material *)v20 )
        break;
      v9 = *(_DWORD *)(*(_DWORD *)(4 * (_DWORD)i + *((_DWORD *)this + 79)) + 12);
      if ( *(_BYTE *)(v9 + 182) == 0 )
      {
        result = Ogre::BaseObject::isKindOf(
                   *(Ogre::BaseObject **)(*(_DWORD *)(4 * (_DWORD)i + *((_DWORD *)this + 79)) + 12),
                   (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI);
        if ( result != nullptr && *(_BYTE *)(v9 + 183) != 0 && (*(_DWORD *)(v9 + 244) & v18) != 0 )
        {
          if ( *((_DWORD *)this + 118) != 0 )
          {
            result = Ogre::BaseObject::isKindOf(
                       (Ogre::BaseObject *)v9,
                       (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI);
            if ( result != nullptr )
            {
              *(_BYTE *)(*((_DWORD *)this + 118) + 29) = 1;
              result = Ogre::Model::render((Ogre::Material *)v9, a2, a3, *((Ogre::Material **)this + 118));
            }
          }
          else
          {
            result = (Ogre::Material *)(*(int (__fastcall **)(int, Ogre::SceneRenderer *, const Ogre::ShaderEnvData *))(*(_DWORD *)v9 + 72))(
                                         v9,
                                         a2,
                                         a3);
            if ( (*((_DWORD *)this + 116) - *((_DWORD *)this + 115)) >> 3 != 0 )
            {
              result = Ogre::BaseObject::isKindOf(
                         (Ogre::BaseObject *)v9,
                         (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI);
              if ( result != nullptr )
              {
                result = (Ogre::Material *)std::vector<std::pair<Ogre::Material *,float>>::back((int)this + 460);
                v13 = *(Ogre::Material **)result;
                if ( *(_DWORD *)result != 0 )
                {
                  v19 = *(float *)(v9 + 188);
                  *(float *)(v9 + 188) = v19 * *((float *)result + 1);
                  result = Ogre::Model::render((Ogre::Material *)v9, a2, a3, v13);
                  *(float *)(v9 + 188) = v19;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::Entity::clearTopMaterial(void)
// address: 0x0018C4F8   size: 0x3E (62 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Entity::clearTopMaterial(_DWORD *this)
{
  int v1; // r5
  _DWORD *v2; // r4

  v1 = (int)(this + 115);
  v2 = this;
  if ( (*(this + 116) - *(this + 115)) >> 3 != 0 )
  {
    this = *(_DWORD **)std::vector<std::pair<Ogre::Material *,float>>::back((int)(this + 115));
    if ( this != nullptr )
    {
      Ogre::BaseObject::release(this);
      this = (_DWORD *)std::vector<std::pair<Ogre::Material *,float>>::back(v1);
      *this = 0;
    }
    v2[116] -= 8;
  }
  return this;
}


//======================================================================
// Ogre::Entity::getActionList(std::vector<Ogre::ACTION_INFO,std::allocator<Ogre::ACTION_INFO>> &)
// address: 0x0018C748   size: 0x12C (300 bytes)
//======================================================================
void __fastcall Ogre::Entity::getActionList(Ogre::Entity *a1, Ogre::FixedString ***a2)
{
  Ogre::FixedString **v2; // r7
  Ogre::FixedString **v4; // r1
  Ogre::FixedString **i; // r4
  unsigned int v7; // r7
  int v8; // r3
  void *v9; // r1
  int v10; // r3
  unsigned int j; // r7
  int v12; // r2
  void *v13; // r1
  void *v14; // r1
  Ogre::FixedString **v15; // [sp+4h] [bp-138h]
  int v16; // [sp+4h] [bp-138h]
  Ogre::FixedString *v17; // [sp+14h] [bp-128h] BYREF
  void *v18; // [sp+18h] [bp-124h]
  int v19; // [sp+1Ch] [bp-120h]
  int v20; // [sp+20h] [bp-11Ch]
  Ogre::FixedString *v21; // [sp+24h] [bp-118h] BYREF
  int v22; // [sp+28h] [bp-114h]
  bool v23; // [sp+2Ch] [bp-110h]
  int v24; // [sp+30h] [bp-10Ch]
  char s[256]; // [sp+34h] [bp-108h] BYREF

  v2 = *a2;
  v4 = a2[1];
  v15 = v4;
  for ( i = v2; i != v15; i += 4 )
    Ogre::FixedString::~FixedString(i, v4);
  a2[1] = v2;
  v7 = 0;
  while ( 1 )
  {
    v8 = *((_DWORD *)a1 + 100);
    if ( v7 >= (*((_DWORD *)a1 + 101) - v8) >> 2 )
      break;
    v21 = nullptr;
    v22 = 1;
    v16 = 4 * v7;
    Ogre::FixedString::operator=((int *)&v21, (int *)(*(_DWORD *)(v8 + 4 * v7++) + 40));
    v23 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 100) + v16) + 44) != 0;
    v24 = 0;
    std::vector<Ogre::ACTION_INFO>::push_back((int)a2, (int *)&v21);
    Ogre::FixedString::~FixedString(&v21, v9);
  }
  v10 = *((_DWORD *)a1 + 91);
  if ( v10 != 0 && *(_DWORD *)(v10 + 256) != 0 )
  {
    v19 = 0;
    v20 = 0;
    v18 = nullptr;
    Ogre::ModelData::getAllSequence();
    for ( j = 0; j < (v19 - (int)v18) >> 4; ++j )
    {
      j_sprintf(s, "%d", *((_DWORD *)v18 + 4 * j));
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v17, (Ogre::FixedString *)s, v12);
      if ( Ogre::Entity::findMotion(a1, (const Ogre::FixedString *)&v17) == 0 )
      {
        v21 = nullptr;
        v22 = 0;
        Ogre::FixedString::operator=((int *)&v21, (int *)&v17);
        v23 = *((_DWORD *)v18 + 4 * j + 3) == 0;
        v24 = 0;
        std::vector<Ogre::ACTION_INFO>::push_back((int)a2, (int *)&v21);
        Ogre::FixedString::~FixedString(&v21, v14);
      }
      Ogre::FixedString::~FixedString(&v17, v13);
    }
    if ( v18 != nullptr )
      operator delete(v18);
  }
}


//======================================================================
// Ogre::Entity::getActionInfo(Ogre::FixedString const&,Ogre::ACTION_INFO &)
// address: 0x0018C87C   size: 0x58 (88 bytes)
//======================================================================
Ogre::FixedString ***__fastcall Ogre::Entity::getActionInfo(Ogre::Entity *a1, _DWORD *a2, int a3)
{
  int *v5; // r2
  int v6; // r3
  int v7; // r1
  int *v8; // r5
  Ogre::FixedString **v10; // [sp+4h] [bp-10h] BYREF
  int v11; // [sp+8h] [bp-Ch]
  int v12; // [sp+Ch] [bp-8h]

  v10 = nullptr;
  v11 = 0;
  v12 = 0;
  Ogre::Entity::getActionList(a1, &v10);
  v5 = (int *)v10;
  v6 = 0;
  v7 = (v11 - (int)v10) >> 4;
  while ( v6 != (v11 - (int)v10) >> 4 )
  {
    v8 = v5;
    v7 = *v5;
    v5 += 4;
    if ( v7 == *a2 )
    {
      Ogre::FixedString::operator=((int *)a3, v8);
      v7 = v8[1];
      *(_DWORD *)(a3 + 4) = v7;
      *(_BYTE *)(a3 + 8) = *((_BYTE *)v8 + 8);
      *(_DWORD *)(a3 + 12) = v8[3];
      return std::vector<Ogre::ACTION_INFO>::~vector(&v10, (void *)v7);
    }
    ++v6;
  }
  return std::vector<Ogre::ACTION_INFO>::~vector(&v10, (void *)v7);
}


//======================================================================
// Ogre::Entity::getEventHandler(Ogre::FixedString)
// address: 0x0018C906   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Entity::getEventHandler(int a1, _DWORD *a2)
{
  _DWORD *v3; // r0

  v3 = std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>>::find(
         a1 + 256,
         a2);
  if ( v3 == (_DWORD *)(a1 + 260) )
    return nullptr;
  else
    return v3 + 5;
}


//======================================================================
// Ogre::Entity::addOverlayMaterial(Ogre::Material *,float)
// address: 0x0018CA24   size: 0x42 (66 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::Entity::addOverlayMaterial(unsigned __int64 this, unsigned int a2)
{
  unsigned int v2; // r4
  int v3; // r5
  __int64 v5; // r0
  int v6; // r3
  unsigned __int64 v8; // [sp+0h] [bp-8h] BYREF

  v8 = this;
  v2 = HIDWORD(this);
  v3 = this;
  if ( HIDWORD(this) != 0 )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(this) + 4))(HIDWORD(this));
    LODWORD(v5) = v3 + 460;
    HIDWORD(v5) = *(_DWORD *)(v3 + 464);
    v6 = *(_DWORD *)(v3 + 468);
    v8 = __PAIR64__(a2, v2);
    if ( HIDWORD(v5) == v6 )
    {
      std::vector<std::pair<Ogre::Material *,float>>::_M_insert_aux(v5, (int *)&v8);
    }
    else
    {
      if ( HIDWORD(v5) != 0 )
      {
        *(_DWORD *)HIDWORD(v5) = v2;
        *(_DWORD *)(HIDWORD(v5) + 4) = HIDWORD(v8);
      }
      *(_DWORD *)(v3 + 464) += 8;
    }
  }
  return v8;
}


//======================================================================
// Ogre::Entity::setTextureByID(int,char const*)
// address: 0x0018CBA8   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::setTextureByID(__int64 this, Ogre::FixedString *a2)
{
  Ogre::Entity *v2; // r4
  int v3; // r6
  int v5; // r2
  char *v6; // r4
  int v7; // r1
  int v8; // r0
  __int64 v10; // [sp+0h] [bp-Ch] BYREF
  Ogre::FixedString *v11; // [sp+8h] [bp-4h]

  v10 = this;
  v11 = a2;
  v2 = (Ogre::Entity *)this;
  LODWORD(this) = *(_DWORD *)(this + 364);
  v3 = HIDWORD(this);
  if ( (_DWORD)this != 0 )
  {
    Ogre::Model::setTextureByID((Ogre::Model *)this, SHIDWORD(this), a2);
  }
  else if ( Ogre::Entity::isLoading(v2) )
  {
    LODWORD(v10) = v3;
    Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v10 + 4), a2, v5);
    v6 = (char *)v2 + 516;
    v7 = *((_DWORD *)v6 + 1);
    if ( v7 == *((_DWORD *)v6 + 2) )
    {
      std::vector<std::pair<int,Ogre::FixedString>>::_M_insert_aux(
        (Ogre::FixedString ***)v6,
        (Ogre::FixedString **)v7,
        (Ogre::FixedString **)&v10);
    }
    else
    {
      if ( v7 != 0 )
      {
        *(_DWORD *)v7 = v10;
        v8 = HIDWORD(v10);
        *(_DWORD *)(v7 + 4) = HIDWORD(v10);
        Ogre::FixedString::addRef(v8, (void *)v7);
      }
      *((_DWORD *)v6 + 1) += 8;
    }
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v10 + 1, (void *)v7);
  }
  return v10;
}


//======================================================================
// Ogre::Entity::unregisterEvent(Ogre::FixedString,Ogre::MotionEventHandler *)
// address: 0x0018CD9A   size: 0x3E (62 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Entity::unregisterEvent(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // r0
  _DWORD *v6; // r4
  int v7; // r1
  _DWORD *v8; // r3
  _DWORD *v9; // r2

  result = std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>>::find(
             a1 + 256,
             a2);
  v6 = result;
  if ( result != (_DWORD *)(a1 + 260) )
  {
    v7 = result[6];
    v8 = (_DWORD *)result[5];
    while ( 1 )
    {
      v9 = v8;
      if ( v8 == (_DWORD *)v7 )
        break;
      result = (_DWORD *)*v8++;
      if ( result == a3 )
      {
        result = v9 + 1;
        if ( v9 + 1 != (_DWORD *)v7 )
          result = (_DWORD *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MotionEventHandler *>(
                               result,
                               v7,
                               v9);
        v6[6] -= 4;
        return result;
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::Entity::registerEvent(Ogre::FixedString,Ogre::MotionEventHandler *)
// address: 0x0018D098   size: 0x6C (108 bytes)
//======================================================================
void __fastcall Ogre::Entity::registerEvent(int a1, Ogre::FixedString **a2, int a3)
{
  _DWORD *v3; // r6
  _DWORD *v6; // r4
  _DWORD *v7; // r0
  _DWORD *v8; // r1
  int v9; // [sp+4h] [bp-18h] BYREF
  void *v10[4]; // [sp+Ch] [bp-10h] BYREF

  v3 = (_DWORD *)(a1 + 256);
  v9 = a3;
  v6 = std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>>::find(
         a1 + 256,
         a2);
  if ( v6 == (_DWORD *)(a1 + 260) )
  {
    memset(v10, 0, 12);
    v7 = std::map<Ogre::FixedString,std::vector<Ogre::MotionEventHandler *>>::operator[](v3, a2);
    std::vector<Ogre::MotionEventHandler *>::operator=((int)v7, (int)v10);
    v6 = std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>>::find(
           (int)v3,
           a2);
    sub_18B51C(v10[0]);
  }
  v8 = (_DWORD *)v6[6];
  if ( v8 == (_DWORD *)v6[7] )
  {
    std::vector<Ogre::MotionEventHandler *>::_M_insert_aux((int)(v6 + 5), v8, &v9);
  }
  else
  {
    if ( v8 != nullptr )
      *v8 = v9;
    v6[6] += 4;
  }
}


//======================================================================
// Ogre::Entity::updateBindFather(void)
// address: 0x0018D1E6   size: 0x96 (150 bytes)
//======================================================================
int __fastcall Ogre::Entity::updateBindFather(Ogre::Entity *this)
{
  char *v1; // r7
  int i; // r6
  int *v4; // r3
  int v5; // r5
  int v6; // r2
  Ogre::MovableObject *v7; // r1
  Ogre::MovableObject *v8; // r0
  Ogre::Entity *AnchorOwnerModel; // r3
  __int64 v10; // r0
  int v12; // [sp+4h] [bp-10h]
  int *v13; // [sp+Ch] [bp-8h] BYREF

  v1 = (char *)this + 252;
  *((_DWORD *)this + 77) = *((_DWORD *)this + 76);
  v12 = (*((_DWORD *)this + 74) - *((_DWORD *)this + 73)) >> 2;
  for ( i = 0; i != v12; ++i )
  {
    v4 = *(int **)(4 * i + *((_DWORD *)v1 + 10));
    v5 = v4[3];
    v13 = v4;
    *(_BYTE *)(v5 + 183) = 1;
    if ( *v4 == 0 )
    {
      v6 = *(_DWORD *)(v5 + 168);
      if ( v6 != 0 )
        continue;
      v7 = *(Ogre::MovableObject **)(v5 + 176);
      v8 = (Ogre::MovableObject *)v5;
      goto LABEL_8;
    }
    AnchorOwnerModel = Ogre::Entity::findAnchorOwnerModel(this, *v4, (Ogre::MovableObject *)v5);
    if ( AnchorOwnerModel != nullptr )
    {
      v8 = (Ogre::MovableObject *)v5;
      v7 = AnchorOwnerModel;
      v6 = *v13;
LABEL_8:
      Ogre::MovableObject::setSRTFather(v8, v7, v6);
      continue;
    }
    Ogre::MovableObject::setSRTFather((Ogre::MovableObject *)v5, this, 0);
    LODWORD(v10) = (char *)this + 304;
    HIDWORD(v10) = &v13;
    std::vector<Ogre::Entity::BindObj *>::push_back(v10);
  }
  return (*(int (__fastcall **)(Ogre::Entity *))(*(_DWORD *)this + 64))(this);
}


//======================================================================
// Ogre::Entity::load(Ogre::Model *)
// address: 0x0018D27C   size: 0x8C (140 bytes)
//======================================================================
int __fastcall Ogre::Entity::load(int this, Ogre::Model *a2)
{
  int v2; // r4
  int v4; // r5
  _DWORD *v5; // r0
  int v6; // r0
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // r6
  int v10; // r5
  void (__fastcall *v11)(int, int); // r6
  int CanSel; // r0

  v2 = this;
  if ( a2 != nullptr )
  {
    v4 = this + 252;
    v5 = *(_DWORD **)(this + 364);
    if ( v5 != nullptr )
    {
      Ogre::BaseObject::release(v5);
      *(_DWORD *)(v4 + 112) = 0;
    }
    v6 = *((_DWORD *)a2 + 64);
    *(_DWORD *)(v2 + 508) = v6;
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
    *(_DWORD *)(v4 + 112) = a2;
    (*(void (__fastcall **)(Ogre::Model *))(*(_DWORD *)a2 + 4))(a2);
    Ogre::MovableObject::setSRTFather(*(Ogre::MovableObject **)(v4 + 112), (Ogre::MovableObject *)v2, 0);
    *(_DWORD *)(*(_DWORD *)(v4 + 112) + 176) = v2;
    v7 = (_DWORD *)(*(_DWORD *)(v4 + 112) + 416);
    v8 = *(_DWORD *)(v2 + 428);
    v9 = *(_DWORD *)(v2 + 432);
    *v7 = *(_DWORD *)(v2 + 424);
    v7[1] = v8;
    v7[2] = v9;
    v7[3] = *(_DWORD *)(v2 + 436);
    v10 = *(_DWORD *)(v4 + 112);
    v11 = *(void (__fastcall **)(int, int))(*(_DWORD *)v10 + 76);
    CanSel = Ogre::RenderableObject::getCanSel((Ogre::RenderableObject *)v2);
    v11(v10, CanSel);
    *(_BYTE *)(v2 + 181) = 1;
    *(_BYTE *)(v2 + 180) = 1;
    Ogre::Entity::calRenderUsageBits((Ogre::Entity *)v2);
    Ogre::Entity::playCurAnim((Ogre::Model *)v2);
    return Ogre::Entity::updateBindFather((Ogre::Entity *)v2);
  }
  return this;
}


//======================================================================
// Ogre::Entity::eraseBindObj(Ogre::Entity::BindObj *)
// address: 0x0018D500   size: 0x90 (144 bytes)
//======================================================================
int __fastcall Ogre::Entity::eraseBindObj(int result, int a2)
{
  int v2; // r4
  char *v3; // r2
  char *v4; // r5
  int i; // r6
  char *v6; // r3
  char *v7; // r1
  int v8; // r6

  v2 = result + 252;
  v3 = *(char **)(result + 316);
  v4 = *(char **)(result + 320);
  for ( i = (v4 - v3) >> 4; ; --i )
  {
    v6 = v3;
    if ( i <= 0 )
      break;
    if ( *(_DWORD *)v3 == a2 )
      goto LABEL_21;
    if ( *((_DWORD *)v3 + 1) == a2 )
    {
      v7 = v3 + 4;
      goto LABEL_23;
    }
    if ( *((_DWORD *)v3 + 2) == a2 )
    {
      v7 = v3 + 8;
      goto LABEL_23;
    }
    v3 += 16;
    if ( *((_DWORD *)v3 - 1) == a2 )
    {
      v7 = v6 + 12;
      goto LABEL_23;
    }
  }
  v8 = (v4 - v3) >> 2;
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
    {
      if ( v8 != 1 )
        return result;
LABEL_19:
      if ( *(_DWORD *)v6 != a2 )
        return result;
      goto LABEL_22;
    }
    if ( *(_DWORD *)v3 == a2 )
    {
LABEL_21:
      v7 = v3;
      goto LABEL_23;
    }
    v6 = v3 + 4;
  }
  if ( *(_DWORD *)v6 != a2 )
  {
    v6 += 4;
    goto LABEL_19;
  }
LABEL_22:
  v7 = v6;
LABEL_23:
  if ( v7 != v4 )
  {
    std::vector<Ogre::Entity::BindObj *>::erase(result + 316, v7);
    return std::sort<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
             *(_QWORD *)(v2 + 64),
             (int (__fastcall *)(int, int))Ogre::BindObjLessThan);
  }
  return result;
}


//======================================================================
// Ogre::Entity::unbindObject(Ogre::MovableObject *)
// address: 0x0018D594   size: 0x6E (110 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::unbindObject(__int64 this)
{
  Ogre::Entity *v1; // r4
  int v2; // r3
  _DWORD *v3; // r6
  int *v4; // r7
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  v1 = (Ogre::Entity *)this;
  if ( HIDWORD(this) != 0 )
  {
    for ( LODWORD(v6) = 0; ; LODWORD(v6) = v6 + 1 )
    {
      v2 = *((_DWORD *)v1 + 73);
      if ( (unsigned int)v6 >= (*((_DWORD *)v1 + 74) - v2) >> 2 )
        break;
      v3 = *(_DWORD **)(v2 + 4 * v6);
      if ( v3[3] == HIDWORD(v6) )
      {
        Ogre::Entity::releaseChildObject(v1, (Ogre::MovableObject *)HIDWORD(v6));
        v4 = (int *)(*((_DWORD *)v1 + 73) + 4 * v6);
        Ogre::Entity::eraseBindObj((int)v1, *v4);
        std::vector<Ogre::Entity::BindObj *>::erase((int)v1 + 292, (char *)v4);
        operator delete(v3);
      }
    }
    Ogre::Entity::calRenderUsageBits(v1);
    Ogre::Entity::updateBindFather(v1);
  }
  return v6;
}


//======================================================================
// Ogre::Entity::clearDelayDeleteObject(float)
// address: 0x0018D604   size: 0xDC (220 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::clearDelayDeleteObject(__int64 this)
{
  int v1; // r5
  int **v2; // r4
  float v3; // r6
  int *v4; // r3
  __int64 v5; // r0
  int **v6; // r2
  _BYTE *v7; // r1
  int v8; // r2
  int *v9; // r3
  Ogre::MovableObject **v10; // r7

  v1 = this + 252;
  v2 = *(int ***)(this + 340);
  while ( v2 != *(int ***)(v1 + 92) )
  {
    v3 = *((float *)*v2 + 1) - *((float *)&this + 1);
    if ( Ogre::BaseObject::isKindOf(
           (Ogre::BaseObject *)**v2,
           (const Ogre::RuntimeClass *)&Ogre::ParticleEmitter::m_RTTI) != nullptr )
      Ogre::ParticleEmitter::forceStopEmit(**v2, true);
    if ( Ogre::BaseObject::isKindOf((Ogre::BaseObject *)**v2, (const Ogre::RuntimeClass *)&Ogre::SoundNode::m_RTTI) != nullptr )
      Ogre::SoundNode::setVolume((Ogre::SoundNode *)**v2, 0.0);
    v4 = *v2;
    if ( v3 >= 0.0 )
    {
      *((float *)v4 + 1) = v3;
      v9 = *v2++;
      v10 = (Ogre::MovableObject **)*v9;
      *((float *)v10 + 47) = (float)(Ogre::MovableObject::getTransparent((Ogre::MovableObject **)*v9) * v3) / 5.0;
    }
    else
    {
      v4[1] = 0;
      LODWORD(v5) = this;
      HIDWORD(v5) = **v2;
      Ogre::Entity::unbindObject(v5);
      Ogre::MovableObject::setSRTFather((Ogre::MovableObject *)**v2, nullptr, 0);
      *(_DWORD *)(**v2 + 176) = 0;
      Ogre::BaseObject::release((_DWORD *)**v2);
      if ( *v2 != nullptr )
        operator delete(*v2);
      v6 = *(int ***)(v1 + 92);
      v7 = v2 + 1;
      if ( v2 + 1 != v6 )
      {
        v8 = ((char *)v6 - v7) >> 2;
        if ( v8 != 0 )
          j_memmove(v2, v7, 4 * v8);
      }
      *(_DWORD *)(this + 344) -= 4;
    }
  }
  return this;
}


//======================================================================
// Ogre::Entity::unbindAll(int)
// address: 0x0018D6EC   size: 0x58 (88 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::unbindAll(__int64 this)
{
  int v1; // r7
  int *v2; // r4
  Ogre::Entity *v3; // r5
  int v4; // r6

  v1 = this + 252;
  v2 = *(int **)(this + 292);
  v3 = (Ogre::Entity *)this;
  while ( v2 != *(int **)(v1 + 44) )
  {
    v4 = *v2;
    if ( this < 0 || *(_DWORD *)(v4 + 4) == HIDWORD(this) )
    {
      Ogre::Entity::releaseChildObject(v3, *(Ogre::MovableObject **)(v4 + 12));
      Ogre::Entity::eraseBindObj((int)v3, *v2);
      v2 = (int *)std::vector<Ogre::Entity::BindObj *>::erase((int)v3 + 292, (char *)v2);
      operator delete((void *)v4);
    }
    else
    {
      ++v2;
    }
  }
  Ogre::Entity::calRenderUsageBits(v3);
  Ogre::Entity::updateBindFather(v3);
  return this;
}


//======================================================================
// Ogre::Entity::unbindRange(int,int)
// address: 0x0018D744   size: 0x5C (92 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::Entity::unbindRange(Ogre::Entity *this, unsigned int a2, unsigned int a3)
{
  int **v3; // r7
  int *v4; // r4
  Ogre::MovableObject **v6; // r6
  int v7; // r3
  unsigned __int64 v9; // [sp+0h] [bp-Ch]

  v3 = (int **)((char *)this + 252);
  v4 = *((int **)this + 73);
  v9 = __PAIR64__(a3, a2);
  while ( v4 != v3[11] )
  {
    v6 = (Ogre::MovableObject **)*v4;
    v7 = *(_DWORD *)(*v4 + 4);
    if ( v7 < (int)v9 || v7 > SHIDWORD(v9) )
    {
      ++v4;
    }
    else
    {
      Ogre::Entity::releaseChildObject(this, v6[3]);
      Ogre::Entity::eraseBindObj((int)this, *v4);
      v4 = (int *)std::vector<Ogre::Entity::BindObj *>::erase((int)this + 292, (char *)v4);
      operator delete(v6);
    }
  }
  Ogre::Entity::calRenderUsageBits(this);
  Ogre::Entity::updateBindFather(this);
  return v9;
}


//======================================================================
// Ogre::Entity::addNewBindObj(Ogre::Entity::BindObj *)
// address: 0x0018D7A0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::Entity::addNewBindObj(int a1)
{
  __int64 v2; // r0
  int v5; // [sp+4h] [bp-4h] BYREF

  HIDWORD(v2) = &v5;
  LODWORD(v2) = a1 + 316;
  std::vector<Ogre::Entity::BindObj *>::push_back(v2);
  std::sort<__gnu_cxx::__normal_iterator<Ogre::Entity::BindObj **,std::vector<Ogre::Entity::BindObj *>>,bool (*)(Ogre::Entity::BindObj const*,Ogre::Entity::BindObj const*)>(
    *(_QWORD *)(a1 + 316),
    (int (__fastcall *)(int, int))Ogre::BindObjLessThan);
  return a1;
}


//======================================================================
// Ogre::Entity::bindObject(unsigned int,Ogre::MovableObject *,int,int)
// address: 0x0018D7C8   size: 0xA6 (166 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::bindObject(__int64 this, Ogre::MovableObject *a2, int a3, int a4)
{
  int v7; // r2
  __int64 v8; // r0
  int v9; // r1
  int v10; // r6
  int v11; // r1
  __int64 v13; // [sp+0h] [bp-Ch] BYREF
  Ogre::MovableObject *v14; // [sp+8h] [bp-4h]

  v13 = this;
  v14 = a2;
  if ( a2 != nullptr )
  {
    *((_DWORD *)a2 + 44) = this;
    (*(void (__fastcall **)(Ogre::MovableObject *))(*(_DWORD *)a2 + 4))(a2);
    HIDWORD(v13) = operator new(0x10u);
    *(_DWORD *)HIDWORD(v13) = HIDWORD(this);
    v7 = HIDWORD(v13);
    *(_DWORD *)(HIDWORD(v13) + 8) = a4;
    *(_DWORD *)(v7 + 12) = a2;
    LODWORD(v8) = this + 292;
    *(_DWORD *)(v7 + 4) = a3;
    HIDWORD(v8) = (char *)&v13 + 4;
    std::vector<Ogre::Entity::BindObj *>::push_back(v8);
    Ogre::Entity::addNewBindObj(this);
    if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI) != nullptr )
    {
      Ogre::Entity::setInstanceAmbient(a2, (const Ogre::RuntimeClass **)(this + 424));
    }
    else if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI) != nullptr )
    {
      v9 = *(_DWORD *)(this + 428);
      v10 = *(_DWORD *)(this + 432);
      *((_DWORD *)a2 + 104) = *(_DWORD *)(this + 424);
      *((_DWORD *)a2 + 105) = v9;
      *((_DWORD *)a2 + 106) = v10;
      *((_DWORD *)a2 + 107) = *(_DWORD *)(this + 436);
    }
    Ogre::Entity::calRenderUsageBits((Ogre::Entity *)this);
    Ogre::Entity::updateBindFather((Ogre::Entity *)this);
    v11 = *(_DWORD *)(this + 192);
    if ( v11 != 0 )
      (*(void (__fastcall **)(Ogre::MovableObject *, int, int))(*(_DWORD *)a2 + 48))(a2, v11, 1);
  }
  return v13;
}


//======================================================================
// Ogre::Entity::addMotion(Ogre::ModelMotion *)
// address: 0x0018D898   size: 0xB0 (176 bytes)
//======================================================================
void __fastcall Ogre::Entity::addMotion(Ogre::Entity *this, Ogre::ModelMotion *a2)
{
  _DWORD *v3; // r5
  unsigned int v4; // r0
  unsigned int v5; // r7
  _DWORD *v6; // r3
  int v7; // r0
  int v8; // r5
  void *v9; // r0
  int v11; // [sp+8h] [bp-Ch]
  int byte_count; // [sp+Ch] [bp-8h]

  (*(void (__fastcall **)(Ogre::ModelMotion *))(*(_DWORD *)a2 + 4))(a2);
  v3 = *((_DWORD **)this + 101);
  if ( v3 == *((_DWORD **)this + 102) )
  {
    v4 = std::vector<Ogre::ModelMotion *>::_M_check_len((_DWORD *)this + 100, 1u, (int)"vector::_M_insert_aux");
    byte_count = 4 * v4;
    v11 = *((_DWORD *)this + 100);
    if ( v4 != 0 )
    {
      if ( v4 > 0x3FFFFFFF )
        sub_3BCEB4(v4);
      v4 = operator new(byte_count);
    }
    v5 = v4;
    v6 = (_DWORD *)(v4 + 4 * (((int)v3 - v11) >> 2));
    if ( v6 != nullptr )
      *v6 = a2;
    v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ModelMotion *>(
           *((void **)this + 100),
           (int)v3,
           (void *)v4);
    v8 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::ModelMotion *>(
           v3,
           *((_DWORD *)this + 101),
           (void *)(v7 + 4));
    v9 = *((void **)this + 100);
    if ( v9 != nullptr )
      operator delete(v9);
    *((_DWORD *)this + 100) = v5;
    *((_DWORD *)this + 101) = v8;
    *((_DWORD *)this + 102) = v5 + byte_count;
  }
  else
  {
    if ( v3 != nullptr )
      *v3 = a2;
    *((_DWORD *)this + 101) += 4;
  }
}


//======================================================================
// Ogre::Entity::load(Ogre::EntityData *)
// address: 0x0018D950   size: 0x16C (364 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::load(Ogre::Entity *this, Ogre::ModelData **a2)
{
  char *v3; // r6
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  Ogre::Model *v7; // r7
  _DWORD *v8; // r3
  int v9; // r1
  int v10; // r7
  int v11; // r6
  void (__fastcall *v12)(int, int); // r7
  int CanSel; // r0
  int v14; // r6
  Ogre::ModelMotion *v15; // r7
  int v16; // r2
  __int64 v17; // r0
  unsigned int i; // r7
  Ogre::ModelMotion *v19; // r7
  int v20; // r2
  __int64 v21; // r0
  __int64 v23; // [sp+0h] [bp-Ch]
  unsigned int v24; // [sp+4h] [bp-8h]

  LODWORD(v23) = this;
  v3 = (char *)this + 252;
  (*((void (__fastcall **)(Ogre::ModelData **))*a2 + 1))(a2);
  v5 = *((_DWORD **)v3 + 25);
  if ( v5 != nullptr )
    Ogre::BaseObject::release(v5);
  *((_DWORD *)v3 + 25) = a2;
  if ( a2[4] != nullptr )
  {
    v6 = *((_DWORD **)v3 + 28);
    if ( v6 != nullptr )
    {
      Ogre::BaseObject::release(v6);
      *((_DWORD *)v3 + 28) = 0;
    }
    v7 = (Ogre::Model *)operator new(0x1C8u);
    Ogre::Model::Model(v7, a2[4]);
    *((_DWORD *)v3 + 28) = v7;
    Ogre::MovableObject::setSRTFather(v7, this, 0);
    *(_DWORD *)(*((_DWORD *)v3 + 28) + 176) = this;
    v8 = (_DWORD *)(*((_DWORD *)v3 + 28) + 416);
    v9 = *((_DWORD *)this + 107);
    v10 = *((_DWORD *)this + 108);
    *v8 = *((_DWORD *)this + 106);
    v8[1] = v9;
    v8[2] = v10;
    v8[3] = *((_DWORD *)this + 109);
    v11 = *((_DWORD *)v3 + 28);
    v12 = *(void (__fastcall **)(int, int))(*(_DWORD *)v11 + 76);
    CanSel = Ogre::RenderableObject::getCanSel(this);
    v12(v11, CanSel);
  }
  v24 = 0;
  v14 = -1;
  while ( v24 < (a2[6] - a2[5]) >> 2 )
  {
    v15 = (Ogre::ModelMotion *)operator new(0x44u);
    Ogre::ModelMotion::ModelMotion((int)v15);
    v16 = (int)a2[5];
    HIDWORD(v17) = *(_DWORD *)(4 * v24 + v16);
    LODWORD(v17) = v15;
    Ogre::ModelMotion::LoadFromSource(v17, v16);
    Ogre::Entity::addMotion(this, v15);
    Ogre::BaseObject::release(v15);
    if ( v14 == -1 )
      v14 = ((*((_DWORD *)this + 101) - *((_DWORD *)this + 100)) >> 2) - 1;
    ++v24;
  }
  for ( i = 0; ; i = HIDWORD(v23) + 1 )
  {
    HIDWORD(v23) = i;
    if ( i >= (a2[9] - a2[8]) >> 2 )
      break;
    v19 = (Ogre::ModelMotion *)operator new(0x44u);
    Ogre::ModelMotion::ModelMotion((int)v19);
    v20 = (int)a2[8];
    HIDWORD(v21) = *(_DWORD *)(4 * HIDWORD(v23) + v20);
    LODWORD(v21) = v19;
    Ogre::ModelMotion::LoadFromSource(v21, v20);
    Ogre::Entity::addMotion(this, v19);
    Ogre::BaseObject::release(v19);
    if ( v14 == -1 )
      v14 = ((*((_DWORD *)this + 101) - *((_DWORD *)this + 100)) >> 2) - 1;
  }
  if ( *((_DWORD *)this + 100) != *((_DWORD *)this + 101) && v14 >= 0 )
    Ogre::Entity::playMotion(this, v14, 1, 211111);
  *((_BYTE *)this + 181) = 1;
  *((_BYTE *)this + 180) = 1;
  Ogre::Entity::calRenderUsageBits(this);
  Ogre::Entity::playCurAnim(this);
  return v23;
}


//======================================================================
// Ogre::Entity::load(Ogre::Resource *)
// address: 0x0018DAC0   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall Ogre::Entity::load(int this, Ogre::ModelData **a2)
{
  int v2; // r4
  _DWORD *v4; // r0
  Ogre::Model *v5; // r7
  _DWORD *v6; // r3
  int v7; // r1
  int v8; // r5
  int v9; // r5
  void (__fastcall *v10)(int, int); // r6
  int CanSel; // r0

  v2 = this;
  if ( a2 != nullptr )
  {
    *(_DWORD *)(this + 508) = a2;
    (*((void (__fastcall **)(Ogre::ModelData **))*a2 + 1))(a2);
    if ( Ogre::BaseObject::isKindOf((Ogre::BaseObject *)a2, (const Ogre::RuntimeClass *)&Ogre::EntityData::m_RTTI) != nullptr )
    {
      Ogre::Entity::load((Ogre::Entity *)v2, a2);
    }
    else if ( Ogre::BaseObject::isKindOf((Ogre::BaseObject *)a2, (const Ogre::RuntimeClass *)&Ogre::ModelData::m_RTTI) != nullptr )
    {
      v4 = *(_DWORD **)(v2 + 364);
      if ( v4 != nullptr )
      {
        Ogre::BaseObject::release(v4);
        *(_DWORD *)(v2 + 364) = 0;
      }
      v5 = (Ogre::Model *)operator new(0x1C8u);
      Ogre::Model::Model(v5, (Ogre::ModelData *)a2);
      *(_DWORD *)(v2 + 364) = v5;
      Ogre::MovableObject::setSRTFather(v5, (Ogre::MovableObject *)v2, 0);
      *(_DWORD *)(*(_DWORD *)(v2 + 364) + 176) = v2;
      v6 = (_DWORD *)(*(_DWORD *)(v2 + 364) + 416);
      v7 = *(_DWORD *)(v2 + 428);
      v8 = *(_DWORD *)(v2 + 432);
      *v6 = *(_DWORD *)(v2 + 424);
      v6[1] = v7;
      v6[2] = v8;
      v6[3] = *(_DWORD *)(v2 + 436);
      v9 = *(_DWORD *)(v2 + 364);
      v10 = *(void (__fastcall **)(int, int))(*(_DWORD *)v9 + 76);
      CanSel = Ogre::RenderableObject::getCanSel((Ogre::RenderableObject *)v2);
      v10(v9, CanSel);
      *(_BYTE *)(v2 + 181) = 1;
      *(_BYTE *)(v2 + 180) = 1;
      Ogre::Entity::calRenderUsageBits((Ogre::Entity *)v2);
      Ogre::Entity::playCurAnim((Ogre::Model *)v2);
    }
    return Ogre::Entity::updateBindFather((Ogre::Entity *)v2);
  }
  return this;
}


//======================================================================
// Ogre::Entity::Entity(Ogre::Entity&)
// address: 0x0018DB80   size: 0x25E (606 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre6EntityC1ERS0_'
const Ogre::RuntimeClass **__fastcall Ogre::Entity::Entity(const Ogre::RuntimeClass **this, Ogre::ModelData ***a2)
{
  float *WorldMatrix; // r0
  int v5; // r6
  const Ogre::RuntimeClass *v6; // r2
  const Ogre::RuntimeClass *v7; // r3
  const Ogre::RuntimeClass *v8; // r0
  int v10; // [sp+0h] [bp-Ch]

  Ogre::MovableObject::MovableObject((Ogre::MovableObject *)this);
  *(this + 59) = (const Ogre::RuntimeClass *)(&dword_0 + 2);
  *(this + 60) = nullptr;
  *((_BYTE *)this + 248) = 0;
  *(this + 53) = nullptr;
  *(this + 61) = (const Ogre::RuntimeClass *)(&dword_0 + 3);
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *this = (const Ogre::RuntimeClass *)&off_458100;
  *(this + 63) = (const Ogre::RuntimeClass *)off_458170;
  j_memset(this + 65, 0, 0x10u);
  *(this + 69) = nullptr;
  *(this + 67) = (const Ogre::RuntimeClass *)(this + 65);
  *(this + 68) = (const Ogre::RuntimeClass *)(this + 65);
  *(this + 70) = nullptr;
  *(this + 71) = nullptr;
  *(this + 72) = nullptr;
  *(this + 73) = nullptr;
  *(this + 74) = nullptr;
  *(this + 75) = nullptr;
  *(this + 76) = nullptr;
  *(this + 77) = nullptr;
  *(this + 78) = nullptr;
  *(this + 79) = nullptr;
  *(this + 80) = nullptr;
  *(this + 81) = nullptr;
  *(this + 82) = nullptr;
  *(this + 83) = nullptr;
  *(this + 84) = nullptr;
  *(this + 85) = nullptr;
  *(this + 86) = nullptr;
  *(this + 87) = nullptr;
  *(this + 88) = nullptr;
  *(this + 91) = nullptr;
  *(this + 100) = nullptr;
  *(this + 101) = nullptr;
  *(this + 102) = nullptr;
  *(this + 103) = nullptr;
  *(this + 104) = nullptr;
  *(this + 105) = nullptr;
  *(this + 106) = nullptr;
  *(this + 107) = nullptr;
  *(this + 108) = nullptr;
  *(this + 109) = nullptr;
  *((_BYTE *)this + 440) = 0;
  *((_BYTE *)this + 441) = 0;
  *(this + 111) = (const Ogre::RuntimeClass *)-1;
  *(this + 112) = nullptr;
  *(this + 113) = nullptr;
  *(this + 114) = nullptr;
  *(this + 115) = nullptr;
  *(this + 116) = nullptr;
  *(this + 117) = nullptr;
  *(this + 118) = nullptr;
  *(this + 128) = (const Ogre::RuntimeClass *)&byte_55FB88;
  *(this + 129) = nullptr;
  *(this + 130) = nullptr;
  *(this + 131) = nullptr;
  *(this + 48) = nullptr;
  *(this + 122) = (const Ogre::RuntimeClass *)1065353216;
  *(this + 119) = (const Ogre::RuntimeClass *)1042536202;
  *(this + 120) = (const Ogre::RuntimeClass *)1065185444;
  *(this + 121) = (const Ogre::RuntimeClass *)1065185444;
  *((_BYTE *)this + 504) = 0;
  *((_BYTE *)this + 368) = 0;
  *(this + 93) = (const Ogre::RuntimeClass *)1065353216;
  *(this + 127) = nullptr;
  Ogre::Entity::load((int)this, a2[127]);
  sub_3BEBBC(this + 128);
  *(this + 106) = (const Ogre::RuntimeClass *)1055286886;
  *(this + 107) = (const Ogre::RuntimeClass *)1055286886;
  *(this + 108) = (const Ogre::RuntimeClass *)1055286886;
  *(this + 109) = (const Ogre::RuntimeClass *)1065353216;
  Ogre::Entity::setInstanceAmbient(this, this + 106);
  *(this + 9) = (const Ogre::RuntimeClass *)a2[9];
  *(this + 10) = (const Ogre::RuntimeClass *)a2[10];
  *(this + 11) = (const Ogre::RuntimeClass *)a2[11];
  Ogre::Entity::invalidWorldCache((Ogre::Entity *)this);
  WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)a2);
  v10 = (int)(float)(WorldMatrix[13] * 10.0);
  v5 = (int)(float)(WorldMatrix[14] * 10.0);
  *(this + 2) = (const Ogre::RuntimeClass *)(int)(float)(WorldMatrix[12] * 10.0);
  *(this + 4) = (const Ogre::RuntimeClass *)v5;
  *(this + 3) = (const Ogre::RuntimeClass *)v10;
  Ogre::Entity::invalidWorldCache((Ogre::Entity *)this);
  v6 = (const Ogre::RuntimeClass *)a2[7];
  v7 = (const Ogre::RuntimeClass *)a2[8];
  v8 = (const Ogre::RuntimeClass *)a2[5];
  *(this + 6) = (const Ogre::RuntimeClass *)a2[6];
  *(this + 7) = v6;
  *(this + 8) = v7;
  *(this + 5) = v8;
  Ogre::Entity::invalidWorldCache((Ogre::Entity *)this);
  *((float *)this + 47) = Ogre::MovableObject::getTransparent((Ogre::MovableObject **)a2);
  *(this + 95) = (const Ogre::RuntimeClass *)1053609165;
  *(this + 96) = (const Ogre::RuntimeClass *)1053609165;
  *(this + 97) = (const Ogre::RuntimeClass *)1065353216;
  *(this + 98) = nullptr;
  *(this + 99) = nullptr;
  return this;
}


//======================================================================
// Ogre::Entity::load(Ogre::FixedString const&,bool)
// address: 0x0018DDFC   size: 0xAC (172 bytes)
//======================================================================
int __fastcall Ogre::Entity::load(Ogre::Entity *this, Ogre::FixedString **a2, int a3)
{
  Ogre::LoadWrap *v3; // r4
  unsigned int v5; // r1
  void *v8; // r1
  unsigned int v9; // r3
  Ogre::ModelData **v10; // r4
  int *v12; // r0
  __suseconds_t v13; // r1
  _DWORD v14[2]; // [sp+4h] [bp-8h] BYREF

  v14[0] = a2;
  v14[1] = a3;
  v3 = (Ogre::Entity *)((char *)this + 252);
  v5 = *((_DWORD *)this + 89);
  if ( v5 != 0 )
  {
    Ogre::LoadWrap::breakLoad((Ogre::Entity *)((char *)this + 252), v5);
    *((_DWORD *)v3 + 26) = 0;
    std::vector<std::pair<int,Ogre::FixedString>>::clear((int *)this + 129, v8);
  }
  if ( a3 != 0 )
  {
    v10 = (Ogre::ModelData **)Ogre::ResourceManager::blockLoad(
                                (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
                                a2,
                                0);
    if ( v10 == nullptr )
    {
      Ogre::LogSetCurParam(
        (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreEntity.cpp",
        (const char *)&stru_178.st_size,
        4,
        v9);
      Ogre::LogMessage((Ogre *)"load entity failed: %s", (const char *)*a2);
      return 0;
    }
    Ogre::Entity::load((int)this, v10);
    Ogre::BaseObject::release(v10);
  }
  else
  {
    sub_3BF0BC((int)v14, (char *)*a2);
    if ( sub_3BD93C((int)v14, ".ent") == -1 )
      sub_3BD93C((int)v14, ".emo");
    v12 = Ogre::LoadWrap::backgroundLoad(v3, (const Ogre::FixedString *)a2);
    *((_DWORD *)v3 + 26) = v12;
    *((_DWORD *)v3 + 27) = Ogre::Timer::getSystemTick((Ogre::Timer *)v12, v13);
    sub_3BDF80(v14);
  }
  return 1;
}


//======================================================================
// Ogre::Entity::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x0018DEBC   size: 0x78 (120 bytes)
//======================================================================
void __fastcall Ogre::Entity::ResourceLoaded(Ogre::Entity *this, Ogre::ModelData **a2, unsigned int a3)
{
  char *v3; // r4
  Ogre::Timer *v5; // r0
  __suseconds_t v6; // r1
  unsigned int SystemTick; // r0
  unsigned int v8; // r3
  unsigned int i; // r6
  int v10; // r3
  void *v11; // r1

  v3 = (char *)this + 252;
  if ( *((_DWORD *)this + 89) == a3 )
  {
    *((_DWORD *)this + 89) = 0;
    if ( a2 != nullptr )
    {
      v5 = (Ogre::Timer *)Ogre::Entity::load((int)this, a2);
      v6 = *((_DWORD *)v3 + 28);
      if ( v6 != 0 )
      {
        SystemTick = Ogre::Timer::getSystemTick(v5, v6);
        v8 = *((_DWORD *)v3 + 27);
        if ( SystemTick > v8 )
          (*(void (__fastcall **)(_DWORD, unsigned int))(**((_DWORD **)v3 + 28) + 40))(
            *((_DWORD *)v3 + 28),
            (unsigned int)(float)((float)(SystemTick - v8) * *((float *)this + 122)));
        for ( i = 0; ; ++i )
        {
          v10 = *((_DWORD *)this + 129);
          v11 = *((void **)this + 130);
          if ( i >= ((int)v11 - v10) >> 3 )
            break;
          Ogre::Model::setTextureByID(
            *((Ogre::Model **)v3 + 28),
            *(_DWORD *)(v10 + 8 * i),
            *(Ogre::FixedString **)(v10 + 8 * i + 4));
        }
        std::vector<std::pair<int,Ogre::FixedString>>::clear((int *)this + 129, v11);
      }
    }
  }
}


//======================================================================
// Ogre::Entity::playMotion(Ogre::FixedString const&,bool,int)
// address: 0x0018DF48   size: 0x62 (98 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Entity::playMotion(Ogre::Entity *this, char **a2, int a3, int a4)
{
  Ogre::ModelMotion *Motion; // r4
  _DWORD *result; // r0

  sub_3BE508((int)this + 512, *a2);
  if ( a3 != 0 )
    Ogre::Entity::stopMotion((int)this, a4);
  Motion = (Ogre::ModelMotion *)Ogre::Entity::findMotion(this, (const Ogre::FixedString *)a2);
  if ( Motion != nullptr
    || (Motion = (Ogre::ModelMotion *)operator new(0x44u),
        Ogre::ModelMotion::ModelMotion((int)Motion),
        Ogre::ModelMotion::LoadFromName(Motion, (const Ogre::FixedString *)a2, 1),
        Ogre::Entity::addMotion(this, Motion),
        result = Ogre::BaseObject::release(Motion),
        Motion != nullptr) )
  {
    *((_DWORD *)Motion + 16) = a4;
    return (_DWORD *)Ogre::ModelMotion::PlayMotion((int)Motion, this);
  }
  return result;
}


//======================================================================
// Ogre::Entity::playMotion(int,char const**,int,int)
// address: 0x0018DFAC   size: 0xB6 (182 bytes)
//======================================================================
Ogre::Model *__fastcall Ogre::Entity::playMotion(__int64 this, char **a2, int a3, int a4)
{
  int v5; // r7
  Ogre::Entity *v6; // r4
  Ogre::Model *result; // r0
  int v8; // r2
  int i; // r7
  void *v10; // r1
  size_t v11; // r2
  _BOOL4 v12; // [sp+0h] [bp-1Ch]
  void *v14; // [sp+10h] [bp-Ch] BYREF
  void *v15[2]; // [sp+14h] [bp-8h] BYREF

  v5 = HIDWORD(this);
  v6 = (Ogre::Entity *)this;
  HIDWORD(this) = a4;
  if ( *(_BYTE *)(this + 504) != 0 )
    Ogre::Entity::delayStopMotion(this, 1084227584);
  else
    Ogre::Entity::stopMotion(this, a4);
  *((_BYTE *)v6 + 504) = 0;
  result = Ogre::Entity::playAnim(v6, v5);
  for ( i = 0; i < a3; ++i )
  {
    Ogre::FixedString::FixedString((Ogre::FixedString *)v15, (Ogre::FixedString *)a2[i], v8);
    Ogre::Entity::playMotion(v6, (char **)v15, 0, a4);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)v15, v10);
    sub_3BF0BC((int)&v14, *a2);
    sub_3BF0BC((int)v15, "412200_4");
    v11 = *((_DWORD *)v14 - 3);
    v12 = false;
    if ( v11 == *((_DWORD *)v15[0] - 3) )
      v12 = j_memcmp(v14, v15[0], v11) == 0;
    sub_3BDF80(v15);
    result = (Ogre::Model *)sub_3BDF80(&v14);
    if ( v12 )
    {
      v8 = 504;
      *((_BYTE *)v6 + 504) = 1;
    }
  }
  return result;
}


//======================================================================
// Ogre::Entity::playFlashChain(Ogre::FixedString const&,Ogre::Vector3,int,int)
// address: 0x0018E06C   size: 0x5C (92 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Entity::playFlashChain(
        Ogre::Entity *a1,
        const Ogre::FixedString *a2,
        _DWORD *a3,
        int a4,
        unsigned int a5)
{
  Ogre::ModelMotion *Motion; // r4
  _DWORD *result; // r0
  int v10; // r2
  int v11; // r6
  _DWORD v13[4]; // [sp+Ch] [bp-10h] BYREF

  Motion = (Ogre::ModelMotion *)Ogre::Entity::findMotion(a1, a2);
  if ( Motion != nullptr
    || (Motion = (Ogre::ModelMotion *)operator new(0x44u),
        Ogre::ModelMotion::ModelMotion((int)Motion),
        Ogre::ModelMotion::LoadFromName(Motion, a2, 0),
        Ogre::Entity::addMotion(a1, Motion),
        result = Ogre::BaseObject::release(Motion),
        Motion != nullptr) )
  {
    *((_DWORD *)Motion + 16) = a4;
    v13[0] = *a3;
    v10 = a3[1];
    v11 = a3[2];
    v13[1] = v10;
    v13[2] = v11;
    return (_DWORD *)Ogre::ModelMotion::PlayFlashChain((unsigned int)Motion, (int)a1, a5, v13);
  }
  return result;
}


//======================================================================
// Ogre::Entity::playParticleEmitter(Ogre::FixedString const&,Ogre::Vector3,float)
// address: 0x0018E0C8   size: 0x58 (88 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Entity::playParticleEmitter(Ogre::Entity *a1, const Ogre::FixedString *a2, int *a3, int a4)
{
  Ogre::ModelMotion *Motion; // r4
  _DWORD *result; // r0
  int v9; // r3
  int v10; // r6
  int v12[4]; // [sp+Ch] [bp-10h] BYREF

  Motion = (Ogre::ModelMotion *)Ogre::Entity::findMotion(a1, a2);
  if ( Motion != nullptr
    || (Motion = (Ogre::ModelMotion *)operator new(0x44u),
        Ogre::ModelMotion::ModelMotion((int)Motion),
        Ogre::ModelMotion::LoadFromName(Motion, a2, 0),
        Ogre::Entity::addMotion(a1, Motion),
        result = Ogre::BaseObject::release(Motion),
        Motion != nullptr) )
  {
    v12[0] = *a3;
    v9 = a3[1];
    v10 = a3[2];
    v12[1] = v9;
    v12[2] = v10;
    return (_DWORD *)Ogre::ModelMotion::PlayForcePE((int)Motion, (int)a1, v12, a4);
  }
  return result;
}


//======================================================================
// Ogre::Entity::clearMotions(void)
// address: 0x0018E22C   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Entity::clearMotions(_DWORD *this)
{
  _DWORD *v1; // r5
  unsigned int i; // r4
  int v3; // r3
  unsigned int v4; // r2

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = v1[100];
    v4 = (v1[101] - v3) >> 2;
    if ( i >= v4 )
      break;
    this = Ogre::BaseObject::release(*(_DWORD **)(4 * i + v3));
  }
  if ( v4 != 0 )
    v1[101] = v3;
  return this;
}


//======================================================================
// Ogre::Entity::clearDeleteObjs(void)
// address: 0x0018E388   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Entity::clearDeleteObjs(_DWORD *this)
{
  _DWORD *v1; // r4
  unsigned int v2; // r5
  int v3; // r3
  unsigned int v4; // r2
  Ogre::MovableObject *v5; // r6

  v1 = this;
  v2 = 0;
  while ( 1 )
  {
    v3 = v1[82];
    v4 = (v1[83] - v3) >> 2;
    if ( v2 >= v4 )
      break;
    v5 = *(Ogre::MovableObject **)(4 * v2++ + v3);
    Ogre::Entity::unbindObject(__SPAIR64__((unsigned int)v5, (unsigned int)v1));
    Ogre::MovableObject::setSRTFather(v5, nullptr, 0);
    *((_DWORD *)v5 + 44) = 0;
    this = Ogre::BaseObject::release(v5);
  }
  if ( v4 != 0 )
    v1[83] = v3;
  return this;
}


//======================================================================
// Ogre::Entity::~Entity()
// address: 0x0018E3D8   size: 0x1E2 (482 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre6EntityD1Ev'
void __fastcall Ogre::Entity::~Entity(int this)
{
  int *v1; // r5
  unsigned int v3; // r6
  int v4; // r3
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  int i; // r6
  int v9; // r3
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  void *v12; // r1
  void **v13; // r7
  void **j; // r6
  int v15; // r6
  void *v16; // r0
  void *v17; // r1
  void *v18; // r0
  void *v19; // r0
  void *v20; // r0
  void *v21; // r0
  void *v22; // r0
  void *v23; // r0
  int v24; // [sp+4h] [bp-8h]

  v1 = (int *)(this + 252);
  *(_DWORD *)this = &off_458100;
  *(_DWORD *)(this + 252) = off_458170;
  Ogre::Entity::stopMotion(this);
  Ogre::Entity::clearMotions((_DWORD *)this);
  v3 = 0;
  *(_DWORD *)(this + 192) = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(this + 400);
    if ( v3 >= (*(_DWORD *)(this + 404) - v4) >> 2 )
      break;
    v5 = *(_DWORD **)(v4 + 4 * v3);
    if ( v5 != nullptr )
    {
      Ogre::BaseObject::release(v5);
      *(_DWORD *)(*(_DWORD *)(this + 400) + 4 * v3) = 0;
    }
    ++v3;
  }
  Ogre::Entity::clearDeleteObjs((_DWORD *)this);
  Ogre::Entity::clearDelayDeleteObject((unsigned int)this | 0x447A000000000000LL);
  Ogre::Entity::unbindAll((unsigned int)this | 0xFFFFFFFF00000000LL);
  v6 = (_DWORD *)v1[28];
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    v1[28] = 0;
  }
  v7 = (_DWORD *)v1[25];
  if ( v7 != nullptr )
  {
    Ogre::BaseObject::release(v7);
    v1[25] = 0;
  }
  for ( i = 0; ; ++i )
  {
    v9 = *(_DWORD *)(this + 460);
    if ( i >= (*(_DWORD *)(this + 464) - v9) >> 3 )
      break;
    v10 = *(_DWORD **)(v9 + 8 * i);
    if ( v10 != nullptr )
    {
      Ogre::BaseObject::release(v10);
      *(_DWORD *)(*(_DWORD *)(this + 460) + 8 * i) = 0;
    }
  }
  v11 = *(_DWORD **)(this + 508);
  if ( v11 != nullptr )
    Ogre::BaseObject::release(v11);
  if ( Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton != 0 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton + 36))(
      Ogre::Singleton<Ogre::BorderGameScene>::ms_Singleton,
      this);
  if ( Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton != 0 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton + 36))(
      Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton,
      this);
  v12 = (void *)v1[26];
  if ( v12 != nullptr )
    Ogre::LoadWrap::breakLoad((Ogre::LoadWrap *)v1, (unsigned int)v12);
  v13 = (void **)v1[11];
  for ( j = (void **)v1[10]; j != v13; ++j )
  {
    if ( *j != nullptr )
      operator delete(*j);
  }
  v15 = *(_DWORD *)(this + 516);
  v24 = *(_DWORD *)(this + 520);
  while ( v15 != v24 )
  {
    Ogre::FixedString::~FixedString((Ogre::FixedString **)(v15 + 4), v12);
    v15 += 8;
  }
  v16 = *(void **)(this + 516);
  if ( v16 != nullptr )
    operator delete(v16);
  sub_3BDF80(this + 512);
  v17 = &stru_1C8 + 4;
  v18 = *(void **)(this + 460);
  if ( v18 != nullptr )
    operator delete(v18);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)(this + 448), v17);
  v19 = *(void **)(this + 412);
  if ( v19 != nullptr )
    operator delete(v19);
  v20 = *(void **)(this + 400);
  if ( v20 != nullptr )
    operator delete(v20);
  v21 = *(void **)(this + 340);
  if ( v21 != nullptr )
    operator delete(v21);
  v22 = *(void **)(this + 328);
  if ( v22 != nullptr )
    operator delete(v22);
  std::_Vector_base<Ogre::Entity::BindObj *>::~_Vector_base((void **)(this + 316));
  std::_Vector_base<Ogre::Entity::BindObj *>::~_Vector_base((void **)(this + 304));
  std::_Vector_base<Ogre::Entity::BindObj *>::~_Vector_base((void **)(this + 292));
  v23 = *(void **)(this + 280);
  if ( v23 != nullptr )
    operator delete(v23);
  std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>>::_M_erase(
    this + 256,
    v1[3]);
  Ogre::LoadWrap::~LoadWrap((Ogre::LoadWrap *)v1);
  Ogre::RenderableObject::~RenderableObject((Ogre::RenderableObject *)this);
}


//======================================================================
// Ogre::Entity::~Entity()
// address: 0x0018E5E0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Entity::~Entity(Ogre::Entity *this)
{
  Ogre::Entity::~Entity((int)this);
  operator delete(this);
}


//======================================================================
// Ogre::Entity::update(unsigned int)
// address: 0x0018E608   size: 0xEC (236 bytes)
//======================================================================
__int64 __fastcall Ogre::Entity::update(Ogre::Entity *this, unsigned int a2)
{
  char *v3; // r7
  int v5; // r6
  unsigned int i; // r6
  int v7; // r3
  __int64 v8; // r0
  int j; // r3
  int v10; // r6
  Ogre::ModelMotion *v12; // [sp+0h] [bp-Ch]
  __int64 v13; // [sp+0h] [bp-Ch]

  v3 = (char *)this + 252;
  Ogre::Entity::updateNoBindFather(this);
  v5 = *((_DWORD *)v3 + 28);
  if ( v5 != 0 )
    (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v5 + 40))(
      v5,
      (unsigned int)(float)((float)a2 * *((float *)this + 122)));
  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD *)this + 100);
    if ( i >= (*((_DWORD *)this + 101) - v7) >> 2 )
      break;
    v12 = *(Ogre::ModelMotion **)(4 * i + v7);
    if ( Ogre::ModelMotion::IsPlaying(v12) )
      Ogre::ModelMotion::Update(*(float *)&v12, (float)a2 / 1000.0, this);
  }
  Ogre::Entity::clearDeleteObjs(this);
  *((float *)&v8 + 1) = (float)a2 / 1000.0;
  LODWORD(v8) = this;
  Ogre::Entity::clearDelayDeleteObject(v8);
  HIDWORD(v13) = (*((_DWORD *)this + 74) - *((_DWORD *)this + 73)) >> 2;
  for ( j = 0; ; j = v13 + 1 )
  {
    LODWORD(v13) = j;
    if ( j == HIDWORD(v13) )
      break;
    v10 = *(_DWORD *)(*(_DWORD *)(4 * j + *((_DWORD *)v3 + 10)) + 12);
    (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 64))(v10);
    (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v10 + 40))(v10, a2);
  }
  if ( *((_DWORD *)v3 + 28) == 0 )
    (*(void (__fastcall **)(Ogre::Entity *))(*(_DWORD *)this + 64))(this);
  Ogre::MovableObject::update((int)this, a2);
  return v13;
}

