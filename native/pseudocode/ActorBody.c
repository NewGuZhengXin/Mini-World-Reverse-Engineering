// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorBody

//======================================================================
// ActorBody::ActorBody(ClientActor *)
// address: 0x002A3420   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN9ActorBodyC2EP11ClientActor'
void __fastcall ActorBody::ActorBody(ActorBody *this, ClientActor *a2)
{
  *((_DWORD *)this + 13) = a2;
  *((_DWORD *)this + 2) = -1082130432;
  *((_DWORD *)this + 5) = -1082130432;
  *((_DWORD *)this + 19) = &byte_55FB88;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 84) = 0;
  *((_BYTE *)this + 85) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 22) = -1;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
}


//======================================================================
// ActorBody::~ActorBody()
// address: 0x002A346C   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN9ActorBodyD1Ev'
void __fastcall ActorBody::~ActorBody(ActorBody *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  v2 = *((_DWORD **)this + 16);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 16) = 0;
  }
  v3 = *((_DWORD **)this + 18);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 18) = 0;
  }
  v4 = *((_DWORD **)this + 17);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 17) = 0;
  }
  sub_3BDF80((char *)this + 76);
}


//======================================================================
// ActorBody::setBodyColor(int,bool)
// address: 0x002A34A8   size: 0x11A (282 bytes)
//======================================================================
void __fastcall ActorBody::setBodyColor(Ogre::Model **this, int a2, int a3)
{
  int BlockDef; // r0
  int v5; // r2
  void *v6; // r1
  int v7; // r2
  Ogre::ResourceManager *v8; // r5
  Ogre::Texture *v9; // r5
  void *v10; // r1
  int v11; // r6
  int v12; // r2
  void *v13; // r1
  Ogre::BaseObject *v14; // [sp+4h] [bp-128h]
  Ogre::BaseObject *v15; // [sp+4h] [bp-128h]
  Ogre::FixedString *v17; // [sp+10h] [bp-11Ch] BYREF
  Ogre::FixedString *v18[4]; // [sp+14h] [bp-118h] BYREF
  char s[256]; // [sp+24h] [bp-108h] BYREF

  if ( a2 <= 0 )
  {
    Ogre::Model::setOverlayMask(*(this + 16), nullptr, nullptr);
  }
  else
  {
    v18[0] = (Ogre::FixedString *)1065353216;
    v18[1] = (Ogre::FixedString *)1065353216;
    v18[2] = (Ogre::FixedString *)1065353216;
    v18[3] = (Ogre::FixedString *)1065353216;
    BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a2 + 600);
    Ogre::ColourValue::setAsABGR((Ogre::ColourValue *)v18, *(_DWORD *)(BlockDef + 112));
    if ( a3 != 0 )
      j_sprintf(s, "%s/yanse1.png", "entity/110007");
    else
      j_sprintf(s, "%s/yanse.png", "entity/110007");
    v14 = (Ogre::BaseObject *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v17, (Ogre::FixedString *)s, v5);
    v15 = (Ogre::BaseObject *)Ogre::ResourceManager::blockLoad(v14, &v17, 0);
    Ogre::FixedString::~FixedString(&v17, v6);
    Ogre::Model::setOverlayMask(*(this + 16), v15, (Ogre::ColourValue *)v18);
    Ogre::BaseObject::release(v15);
  }
  if ( a3 != 0 )
    j_sprintf(s, "%s/male1.png", "entity/110007");
  else
    j_sprintf(s, "%s/male.png", "entity/110007");
  v8 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)s, v7);
  v9 = (Ogre::Texture *)Ogre::ResourceManager::blockLoad(v8, v18, 0);
  Ogre::FixedString::~FixedString(v18, v10);
  v11 = (int)*(this + 16);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"g_DiffuseTex", v12);
  Ogre::Model::setTexture(v11, (const Ogre::FixedString *)v18, v9);
  Ogre::FixedString::~FixedString(v18, v13);
}


//======================================================================
// ActorBody::setLookAt(WCoord const&,float,float)
// address: 0x002A35F4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall ActorBody::setLookAt(int result, _DWORD *a2, int a3, int a4)
{
  int v4; // r1

  *(_BYTE *)(result + 84) = 1;
  *(_DWORD *)(result + 24) = *a2;
  *(_DWORD *)(result + 28) = a2[1];
  v4 = a2[2];
  *(_DWORD *)(result + 40) = a4;
  *(_DWORD *)(result + 36) = a3;
  *(_DWORD *)(result + 32) = v4;
  return result;
}


//======================================================================
// ActorBody::updateLookAt(void)
// address: 0x002A3610   size: 0xF8 (248 bytes)
//======================================================================
_DWORD *__fastcall ActorBody::updateLookAt(ActorBody *this)
{
  int v2; // r6
  int v3; // r7
  __int64 v4; // r0
  float v5; // r0
  float v6; // r1
  float v7; // r2
  float updated; // r0
  int v9; // r3
  NavigationPath *v10; // r0
  float v11; // r7
  float v12; // r0
  float v13; // r1
  float v14; // r0
  int v16; // [sp+4h] [bp-20h]
  float v17; // [sp+8h] [bp-1Ch] BYREF
  float v18; // [sp+Ch] [bp-18h] BYREF
  float v19; // [sp+10h] [bp-14h] BYREF
  float v20; // [sp+14h] [bp-10h]
  float v21; // [sp+18h] [bp-Ch]
  int v22; // [sp+1Ch] [bp-8h]

  v2 = *(_DWORD *)(*((_DWORD *)this + 13) + 68);
  if ( *((_BYTE *)this + 84) != 0 )
  {
    *((_BYTE *)this + 84) = 0;
    ClientActor::getEyePosition((ClientActor *)&v19);
    v3 = *((_DWORD *)this + 7) - LODWORD(v20);
    v16 = *((_DWORD *)this + 8) - LODWORD(v21);
    v19 = (float)(*((_DWORD *)this + 6) - LODWORD(v19));
    v20 = (float)v3;
    HIDWORD(v4) = &v18;
    v21 = (float)v16;
    LODWORD(v4) = &v17;
    Direction2PitchYaw(v4, (const Ogre::Vector3 *)&v19);
    *(float *)(v2 + 8) = UpdateRotation(*(float *)(v2 + 8), v18, *((float *)this + 10));
    v5 = *((float *)this + 11);
    v6 = v17;
    v7 = *((float *)this + 9);
  }
  else
  {
    v5 = *((float *)this + 11);
    v6 = *((float *)this + 12);
    v7 = 10.0;
  }
  updated = UpdateRotation(v5, v6, v7);
  v9 = *((_DWORD *)this + 13);
  *((float *)this + 11) = updated;
  v10 = *(NavigationPath **)(v9 + 136);
  if ( v10 != nullptr && NavigationPath::noPath(v10) == 0 )
  {
    v11 = COERCE_FLOAT(WrapAngleTo180(*((float *)this + 11) - *((float *)this + 12)));
    if ( v11 >= -75.0 )
    {
      if ( v11 <= 75.0 )
        goto LABEL_9;
      v12 = *((float *)this + 12) + 75.0;
    }
    else
    {
      v12 = *((float *)this + 12) - 75.0;
    }
    *((float *)this + 11) = v12;
  }
LABEL_9:
  v13 = *((float *)this + 12);
  v14 = *((float *)this + 11);
  v22 = 1065353216;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  Ogre::Quaternion::setEulerAngle(
    (Ogre::Quaternion *)&v19,
    v14 - v13,
    COERCE_FLOAT(*(_DWORD *)(v2 + 8) + 0x80000000),
    0.0);
  return Ogre::SkeletonInstance::setBoneRotate(*(_DWORD **)(*((_DWORD *)this + 16) + 260), *((_DWORD *)this + 24), &v19);
}


//======================================================================
// ActorBody::updateRenderYawOffset(void)
// address: 0x002A3714   size: 0x10C (268 bytes)
//======================================================================
__int64 __fastcall ActorBody::updateRenderYawOffset(__int64 this)
{
  int v1; // r4
  int v2; // r3
  float v3; // r6
  float v4; // r0
  int v5; // r0
  float v6; // r5
  float v7; // r5
  float v8; // r7
  float v9; // r6
  float v10; // r5
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = this;
  v1 = this;
  v2 = *(_DWORD *)(*(_DWORD *)(this + 52) + 68);
  if ( *(_QWORD *)(v2 + 32) == *(_QWORD *)(v2 + 56) && *(_DWORD *)(v2 + 40) == *(_DWORD *)(v2 + 64) )
  {
    v3 = *(float *)(this + 44);
    if ( (float)(v3 - *(float *)(this + 100)) >= 0.0 )
      v4 = *(float *)(this + 44) - *(float *)(this + 100);
    else
      LODWORD(v4) = COERCE_INT(*(float *)(this + 44) - *(float *)(this + 100)) + 0x80000000;
    if ( v4 <= 15.0 )
    {
      v5 = *(_DWORD *)(v1 + 104);
      *(_DWORD *)(v1 + 104) = v5 + 1;
      if ( v5 + 1 > 10 )
      {
        v6 = 1.0 - (float)((float)(v5 - 9) / 10.0);
        if ( v6 <= 0.0 )
          v6 = 0.0;
        v7 = v6 * 75.0;
        goto LABEL_12;
      }
    }
    else
    {
      *(_DWORD *)(v1 + 104) = 0;
      *(float *)(v1 + 100) = v3;
    }
    v7 = 75.0;
LABEL_12:
    HIDWORD(v12) = LODWORD(v7) + 0x80000000;
    v8 = COERCE_FLOAT(WrapAngleTo180(v3 - *(float *)(v1 + 48)));
    if ( v8 < COERCE_FLOAT(LODWORD(v7) + 0x80000000) )
    {
      LODWORD(v7) += 0x80000000;
    }
    else if ( v8 <= v7 )
    {
      v7 = v8;
    }
    *(float *)(v1 + 48) = v3 - v7;
    return v12;
  }
  v9 = *(float *)(v2 + 4);
  HIDWORD(this) = *(_DWORD *)(this + 44);
  *(float *)(this + 48) = v9;
  v10 = COERCE_FLOAT(WrapAngleTo180(v9 - *((float *)&this + 1)));
  if ( v10 < -75.0 )
  {
    v10 = -75.0;
  }
  else if ( v10 > 75.0 )
  {
    v10 = 75.0;
  }
  *(float *)(v1 + 44) = v9 - v10;
  *(float *)(v1 + 100) = v9 - v10;
  *(_DWORD *)(v1 + 104) = 0;
  return v12;
}


//======================================================================
// ActorBody::playLookAt(Ogre::Vector3 const&)
// address: 0x002A3830   size: 0x80 (128 bytes)
//======================================================================
_DWORD *__fastcall ActorBody::playLookAt(ActorBody *this, const Ogre::Vector3 *a2)
{
  _BYTE *v3; // r5
  _BYTE v5[12]; // [sp+0h] [bp-68h] BYREF
  _DWORD v6[3]; // [sp+Ch] [bp-5Ch] BYREF
  _DWORD v7[4]; // [sp+18h] [bp-50h] BYREF
  _BYTE v8[64]; // [sp+28h] [bp-40h] BYREF

  *((_DWORD *)this + 3) = *(_DWORD *)a2;
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 2);
  *((_BYTE *)this + 84) = 1;
  v3 = *((_BYTE **)this + 16);
  if ( v3[180] != 0 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 68))(*((_DWORD *)this + 16));
  Ogre::Matrix4::Matrix4((int)v8, (const Ogre::Matrix4 *)(v3 + 48));
  Ogre::Matrix4::quickInverse((Ogre::Matrix4 *)v8);
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v8, (Ogre::Vector3 *)v5, (ActorBody *)((char *)this + 12));
  memset(v7, 0, 12);
  v6[0] = 0;
  v6[1] = 0;
  v7[3] = 1065353216;
  v6[2] = -1082130432;
  Ogre::Quaternion::setRotateArc((Ogre::Quaternion *)v7, (const Ogre::Vector3 *)v6, (const Ogre::Vector3 *)v5);
  return Ogre::SkeletonInstance::setBoneRotate(*(_DWORD **)(*((_DWORD *)this + 16) + 260), *((_DWORD *)this + 24), v7);
}


//======================================================================
// ActorBody::stopLookAt(void)
// address: 0x002A38B4   size: 0x8 (8 bytes)
//======================================================================
_BYTE *__fastcall ActorBody::stopLookAt(ActorBody *this)
{
  _BYTE *result; // r0

  result = (char *)this + 84;
  *result = 0;
  return result;
}


//======================================================================
// ActorBody::playAnim(int)
// address: 0x002A38BC   size: 0x24 (36 bytes)
//======================================================================
Ogre::Model *__fastcall ActorBody::playAnim(ActorBody *this, int a2)
{
  Ogre::Model *result; // r0
  int v4; // r4

  result = *((Ogre::Model **)this + 16);
  if ( result != nullptr )
  {
    v4 = s_SeqIDs[a2];
    Ogre::Model::hasAnim(result, v4);
    return Ogre::Entity::playAnim(*((Ogre::Entity **)this + 18), v4);
  }
  return result;
}


//======================================================================
// ActorBody::onMoveChange(ActorEvent const&)
// address: 0x002A38E4   size: 0x58 (88 bytes)
//======================================================================
ActorBody *__fastcall ActorBody::onMoveChange(ActorBody *result, int a2)
{
  int v2; // r3
  ActorBody *v4; // r5
  int v5; // r1
  float v6; // r0

  v2 = *(_DWORD *)(a2 + 4);
  v4 = result;
  v5 = 4;
  if ( v2 == 5 )
    return ActorBody::playAnim(result, v5);
  if ( (v2 & 0xFFFFFFFD) == 0 )
  {
    v5 = 1;
    return ActorBody::playAnim(result, v5);
  }
  if ( v2 == 4 )
  {
    v6 = *(float *)(a2 + 20);
LABEL_6:
    result = (ActorBody *)(v6 == 0.0);
    if ( result == nullptr )
      return result;
    result = v4;
    v5 = 0;
    return ActorBody::playAnim(result, v5);
  }
  if ( (v2 & 0xFFFFFFFD) == 1 )
  {
    result = (ActorBody *)(*(float *)(a2 + 20) == 0.0);
    if ( *(float *)(a2 + 20) == 0.0 )
    {
      result = (ActorBody *)(*(float *)(a2 + 8) == 0.0);
      if ( *(float *)(a2 + 8) == 0.0 )
      {
        v6 = *(float *)(a2 + 12);
        goto LABEL_6;
      }
    }
  }
  return result;
}


//======================================================================
// ActorBody::playStand(void)
// address: 0x002A393C   size: 0xA (10 bytes)
//======================================================================
Ogre::Model *__fastcall ActorBody::playStand(ActorBody *this)
{
  return ActorBody::playAnim(this, 0);
}


//======================================================================
// ActorBody::playAttack(void)
// address: 0x002A3946   size: 0xA (10 bytes)
//======================================================================
Ogre::Model *__fastcall ActorBody::playAttack(ActorBody *this)
{
  return ActorBody::playAnim(this, 2);
}


//======================================================================
// ActorBody::playBeHit(void)
// address: 0x002A3950   size: 0xA (10 bytes)
//======================================================================
Ogre::Model *__fastcall ActorBody::playBeHit(ActorBody *this)
{
  return ActorBody::playAnim(this, 6);
}


//======================================================================
// ActorBody::updatePlayAnim(bool)
// address: 0x002A395C   size: 0xD4 (212 bytes)
//======================================================================
__int64 __fastcall ActorBody::updatePlayAnim(__int64 this)
{
  int v1; // r5
  int v2; // r4
  int v3; // r6
  _DWORD *v4; // r0
  int v5; // r6
  int v6; // r3

  v1 = this;
  v2 = 3;
  if ( ClientActor::isDead(*(ClientActor **)(this + 52)) != 0 )
    goto LABEL_11;
  v3 = *(_DWORD *)(v1 + 52);
  if ( v3 != 0 )
  {
    v4 = _dynamic_cast(
           *(const void **)(v1 + 52),
           (const struct __class_type_info *)&`typeinfo for'ClientActor,
           (const struct __class_type_info *)&`typeinfo for'ClientPlayer,
           0);
    if ( v4 != nullptr )
    {
      v2 = 7;
      if ( (v4[15] & 0x100) != 0 )
        goto LABEL_11;
    }
  }
  v2 = 8;
  if ( *(_BYTE *)(v3 + 121) != 0 )
    goto LABEL_11;
  v5 = *(_DWORD *)(v3 + 68);
  v2 = 4 * (*(_BYTE *)(v5 + 124) == 0);
  if ( *(float *)(v5 + 148) != 0.0 || *(float *)(v5 + 152) != 0.0 )
  {
    if ( *(_BYTE *)(v5 + 125) != 0 )
    {
      v2 = 9;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v5 + 124) != 0 )
    {
      v2 = 1;
      if ( HIDWORD(this) != 0 )
        v2 = 11;
LABEL_11:
      if ( v2 != *(_DWORD *)(v1 + 88) )
      {
        ActorBody::playAnim((ActorBody *)v1, v2);
        *(_DWORD *)(v1 + 88) = v2;
      }
      return this;
    }
  }
  if ( v2 != 0 )
    goto LABEL_11;
  if ( *(_BYTE *)(v1 + 85) != 0 )
  {
    v2 = 12;
    goto LABEL_11;
  }
  v6 = *(_DWORD *)(v1 + 88);
  if ( v6 != 0 )
  {
    if ( v6 != 5 || GenRandomInt(0x28u) == 0 )
      goto LABEL_11;
  }
  else if ( GenRandomInt(0xC8u) != 0 )
  {
    goto LABEL_11;
  }
  v2 = 5;
  goto LABEL_11;
}


//======================================================================
// ActorBody::stopAnim(int)
// address: 0x002A3A38   size: 0x1A (26 bytes)
//======================================================================
Ogre::Model *__fastcall ActorBody::stopAnim(Ogre::Model *this, int a2)
{
  if ( *((_DWORD *)this + 16) != 0 )
    return Ogre::Entity::stopAnim(*((Ogre::Entity **)this + 18), s_SeqIDs[a2]);
  return this;
}


//======================================================================
// ActorBody::setPosition(Ogre::WorldPos const&)
// address: 0x002A3A58   size: 0x1C (28 bytes)
//======================================================================
int *__fastcall ActorBody::setPosition(int a1, int *a2)
{
  int *result; // r0
  int v3; // r3

  result = *(int **)(a1 + 72);
  if ( result != nullptr )
  {
    result[2] = *a2;
    result[3] = a2[1];
    v3 = *result;
    result[4] = a2[2];
    return (int *)(*(int (**)(void))(v3 + 64))();
  }
  return result;
}


//======================================================================
// ActorBody::getPosition(void)
// address: 0x002A3A74   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ActorBody::getPosition(ActorBody *this)
{
  return *((_DWORD *)this + 18) + 8;
}


//======================================================================
// ActorBody::getRotation(void)
// address: 0x002A3A7A   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ActorBody::getRotation(ActorBody *this)
{
  return *((_DWORD *)this + 18) + 20;
}


//======================================================================
// ActorBody::getWorldMatrix(void)
// address: 0x002A3A80   size: 0x1C (28 bytes)
//======================================================================
_BYTE *__fastcall ActorBody::getWorldMatrix(ActorBody *this)
{
  _BYTE *v1; // r4

  v1 = *((_BYTE **)this + 18);
  if ( v1[180] != 0 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 68))(*((_DWORD *)this + 18));
  return v1 + 48;
}


//======================================================================
// ActorBody::playRotate(Ogre::Vector3 const&)
// address: 0x002A3A9C   size: 0x2 (2 bytes)
//======================================================================
void ActorBody::playRotate()
{
  ;
}


//======================================================================
// ActorBody::tick(void)
// address: 0x002A3AA0   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall ActorBody::tick(ActorBody *this)
{
  int v1; // r7
  int v3; // r5
  float v4; // r0
  int v5; // r1
  _BOOL4 v6; // r7
  __int64 v7; // r0
  int v8; // r3
  int v9; // r1
  World *v10; // r2
  int v11; // r6
  unsigned int v12; // r6
  unsigned int v13; // r0
  int result; // r0
  int v15; // r3
  int v16; // r1
  int v17; // r7
  float v18; // [sp+8h] [bp-2Ch]
  World *v19; // [sp+8h] [bp-2Ch]
  unsigned int v20; // [sp+Ch] [bp-28h]
  _DWORD v21[3]; // [sp+14h] [bp-20h] BYREF
  float v22; // [sp+20h] [bp-14h] BYREF
  float v23; // [sp+24h] [bp-10h] BYREF
  int v24; // [sp+28h] [bp-Ch]
  int v25; // [sp+2Ch] [bp-8h]

  v1 = *((_DWORD *)this + 13);
  v3 = *(_DWORD *)(v1 + 68);
  v18 = *(float *)(v3 + 152);
  if ( v18 <= 0.0 )
  {
    if ( v18 >= 0.0 )
      goto LABEL_6;
    v4 = *(float *)(v3 + 4) - 45.0;
  }
  else
  {
    v4 = *(float *)(v3 + 4) + 45.0;
  }
  *((float *)this + 12) = v4;
LABEL_6:
  v5 = *(_DWORD *)(v1 + 136);
  v6 = v5 != 0 && *(float *)(v5 + 4) > 1.0;
  ActorBody::updateLookAt(this);
  LODWORD(v7) = this;
  ActorBody::updateRenderYawOffset(v7);
  ActorBody::updatePlayAnim(__SPAIR64__(v6, (unsigned int)this));
  v8 = *(_DWORD *)(v3 + 24);
  v9 = *(_DWORD *)(v3 + 36);
  v10 = *((World **)this + 14);
  v22 = 0.0;
  v23 = 0.0;
  v24 = 0;
  v25 = 0;
  v11 = v8 / 2 + v9;
  v19 = v10;
  v20 = CoordDivBlock(*(_DWORD *)(v3 + 32));
  v12 = CoordDivBlock(v11);
  v13 = CoordDivBlock(*(_DWORD *)(v3 + 40));
  v21[0] = v20;
  v21[1] = v12;
  v21[2] = v13;
  result = World::getBlockLightValue2(v19, &v22, &v23, (const WCoord *)v21, true);
  v15 = *((_DWORD *)this + 16);
  *(float *)(v15 + 432) = v22;
  v16 = v24;
  v17 = v25;
  v15 += 432;
  *(float *)(v15 + 4) = v23;
  *(_DWORD *)(v15 + 8) = v16;
  *(_DWORD *)(v15 + 12) = v17;
  return result;
}


//======================================================================
// ActorBody::update(float)
// address: 0x002A3B7C   size: 0xFA (250 bytes)
//======================================================================
unsigned int __fastcall ActorBody::update(ActorBody *this, float a2)
{
  unsigned int result; // r0
  _DWORD *v4; // r5
  int v5; // r3
  int v6; // r4
  int v7; // r7
  int v8; // r4
  float v9; // [sp+4h] [bp-18h]
  unsigned int v10; // [sp+10h] [bp-Ch]
  int v11; // [sp+14h] [bp-8h]

  result = (unsigned int)(float)(a2 * 1000.0);
  v4 = *((_DWORD **)this + 18);
  v10 = result;
  if ( v4 != nullptr )
  {
    v5 = *((_DWORD *)this + 13);
    if ( v5 != 0 )
    {
      v6 = *(_DWORD *)(v5 + 68);
      v9 = *(float *)(v6 + 68) / 0.05;
      v11 = (int)(float)((float)((float)((float)*(int *)(v6 + 60)
                                       + (float)((float)((float)*(int *)(v6 + 36) - (float)*(int *)(v6 + 60)) * v9))
                               - (float)*(int *)(v6 + 28))
                       * 10.0);
      v7 = (int)(float)((float)((float)*(int *)(v6 + 64)
                              + (float)((float)((float)*(int *)(v6 + 40) - (float)*(int *)(v6 + 64)) * v9))
                      * 10.0);
      v4[2] = (int)(float)((float)((float)*(int *)(v6 + 56)
                                 + (float)((float)((float)*(int *)(v6 + 32) - (float)*(int *)(v6 + 56)) * v9))
                         * 10.0);
      v4[4] = v7;
      v4[3] = v11;
      (*(void (__fastcall **)(_DWORD *))(*v4 + 64))(v4);
    }
    v8 = *((_DWORD *)this + 18);
    Ogre::Quaternion::setEulerAngle((Ogre::Quaternion *)(v8 + 20), *((float *)this + 12), 0.0, 0.0);
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 64))(v8);
    return (*(int (__fastcall **)(_DWORD, unsigned int))(**((_DWORD **)this + 18) + 40))(*((_DWORD *)this + 18), v10);
  }
  return result;
}


//======================================================================
// ActorBody::onEnterWorld(World *)
// address: 0x002A3C84   size: 0x26 (38 bytes)
//======================================================================
void *__fastcall ActorBody::onEnterWorld(int a1, void *lpsrc)
{
  void *result; // r0

  if ( lpsrc != nullptr )
    result = _dynamic_cast(
               lpsrc,
               (const struct __class_type_info *)&`typeinfo for'World,
               (const struct __class_type_info *)&`typeinfo for'ClientWorld,
               0);
  else
    result = nullptr;
  *(_DWORD *)(a1 + 56) = result;
  return result;
}


//======================================================================
// ActorBody::onLeaveWorld(void)
// address: 0x002A3CB4   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ActorBody::onLeaveWorld(int this)
{
  *(_DWORD *)(this + 56) = 0;
  return this;
}


//======================================================================
// ActorBody::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x002A3CBA   size: 0x1E (30 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ActorBody::onCull(ActorBody *this, Ogre::GameScene **a2, Ogre::CullFrustum *a3)
{
  Ogre::MovableObject **v3; // r2

  v3 = *((Ogre::MovableObject ***)this + 18);
  if ( v3 != nullptr )
    Ogre::CullResult::addRenderable((Ogre::CullResult *)a2, a2[137], v3, 2, nullptr);
}


//======================================================================
// ActorBody::show(bool)
// address: 0x002A3CD8   size: 0x2C (44 bytes)
//======================================================================
__int64 __fastcall ActorBody::show(__int64 this)
{
  int v1; // r3
  __int64 v3; // r0
  __int64 v4; // r0
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  v1 = *(_DWORD *)(this + 64);
  if ( v1 != 0 )
    *(_BYTE *)(v1 + 183) = BYTE4(this);
  LODWORD(v3) = *(_DWORD *)(this + 72);
  HIDWORD(v3) = *(_DWORD *)(this + 68);
  Ogre::Entity::unbindObject(v3);
  if ( HIDWORD(this) != 0 )
  {
    LODWORD(v4) = *(_DWORD *)(this + 72);
    HIDWORD(v4) = 101;
    Ogre::Entity::bindObject(v4, *(Ogre::MovableObject **)(this + 68), 0, 0);
  }
  return v6;
}


//======================================================================
// ActorBody::revive(void)
// address: 0x002A3D04   size: 0x26 (38 bytes)
//======================================================================
__int64 __fastcall ActorBody::revive(unsigned int this)
{
  Ogre::Entity::stopMotion(*(_DWORD *)(this + 72), 0);
  Ogre::Model::setOverlayColor(*(Ogre::Model **)(this + 64), nullptr);
  ActorBody::stopAnim((Ogre::Model *)this, 3);
  return ActorBody::show(this | 0x100000000LL);
}


//======================================================================
// ActorBody::setEquipItem(EQUIP_SLOT_TYPE,int)
// address: 0x002A3D2C   size: 0x1A4 (420 bytes)
//======================================================================
void __fastcall ActorBody::setEquipItem(__int64 a1, ClientItem *a2)
{
  void *v2; // r3
  int v4; // r4
  Ogre::MovableObject *v5; // r2
  Ogre::MovableObject *ItemModel; // r0
  int v7; // r3
  __int64 v8; // r0
  Ogre::Model *v9; // r5
  void *v10; // r1
  int v11; // r7
  int v12; // r2
  void *v13; // r1
  int v14; // r2
  int v15; // r2
  void *v16; // r1
  Ogre::Model *v17; // r5
  int v18; // [sp+8h] [bp-164h]
  int v19; // [sp+Ch] [bp-160h]
  Ogre::Model *v20; // [sp+10h] [bp-15Ch]
  const char *v21; // [sp+14h] [bp-158h]
  Ogre::Model *v22; // [sp+18h] [bp-154h]
  Ogre::FixedString *v23; // [sp+20h] [bp-14Ch] BYREF
  char s[64]; // [sp+24h] [bp-148h] BYREF
  char v25[256]; // [sp+64h] [bp-108h] BYREF

  v2 = &_stack_chk_guard;
  v18 = HIDWORD(a1);
  v4 = a1;
  if ( *(_DWORD *)(a1 + 64) == 0 )
    return;
  v5 = (Ogre::MovableObject *)HIDWORD(a1);
  if ( HIDWORD(a1) == 5 )
  {
    HIDWORD(a1) = *(_DWORD *)(a1 + 68);
    if ( HIDWORD(a1) != 0 )
    {
      LODWORD(a1) = *(_DWORD *)(a1 + 72);
      Ogre::Entity::unbindObject(a1);
      Ogre::BaseObject::release(*(_DWORD **)(v4 + 68));
      v2 = nullptr;
      *(_DWORD *)(v4 + 68) = 0;
    }
    if ( (int)a2 > 0 )
    {
      ItemModel = (Ogre::MovableObject *)ClientItem::createItemModel(a2, 0, (const char *)0x40000000, *(float *)&v2);
      v7 = *(_DWORD *)(v4 + 64);
      *(_DWORD *)(v4 + 68) = ItemModel;
      v5 = ItemModel;
      if ( *(_BYTE *)(v7 + 183) != 0 )
      {
        LODWORD(v8) = *(_DWORD *)(v4 + 72);
        HIDWORD(v8) = 101;
        Ogre::Entity::bindObject(v8, v5, 0, 0);
      }
    }
    v9 = *(Ogre::Model **)(v4 + 64);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v23, (Ogre::FixedString *)"dao1", (int)v5);
    Ogre::Model::showSkin(v9, (const Ogre::FixedString *)&v23, a2 == nullptr);
LABEL_25:
    Ogre::FixedString::~FixedString(&v23, v10);
    return;
  }
  v19 = 0;
  if ( a2 != nullptr )
    v19 = dword_445EF8[(int)a2 % 100 / 10];
  v11 = 0;
  v21 = off_4536C4[HIDWORD(a1)];
  do
  {
    j_sprintf(s, "%s%.2d", v21, v11);
    v22 = *(Ogre::Model **)(v4 + 64);
    if ( v19 == v11 )
    {
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v23, (Ogre::FixedString *)s, v12);
      Ogre::Model::showSkin(v22, (const Ogre::FixedString *)&v23, true);
      Ogre::FixedString::~FixedString(&v23, v13);
      if ( v19 == 0 )
        goto LABEL_22;
      v14 = *(_DWORD *)(v4 + 80);
      if ( v14 <= 0 || (s_PlayerSex[v14 - 1] & 0xFFFFFFFD) != 1 || v18 == 4 )
        j_sprintf(v25, "entity/player/share/%s/%d.png", v21, a2);
      else
        j_sprintf(v25, "entity/player/share/women/%s/%d.png", v21, a2);
      v20 = *(Ogre::Model **)(v4 + 64);
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v23, (Ogre::FixedString *)s, v15);
      Ogre::Model::setSkinTexture(v20, (const Ogre::FixedString *)&v23, (Ogre::FixedString *)v25);
    }
    else
    {
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v23, (Ogre::FixedString *)s, v12);
      Ogre::Model::showSkin(v22, (const Ogre::FixedString *)&v23, false);
    }
    Ogre::FixedString::~FixedString(&v23, v16);
LABEL_22:
    ++v11;
  }
  while ( v11 != 4 );
  if ( v18 == 4 )
  {
    v17 = *(Ogre::Model **)(v4 + 64);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v23, (Ogre::FixedString *)"pifeng", 4);
    Ogre::Model::showSkin(v17, (const Ogre::FixedString *)&v23, false);
    goto LABEL_25;
  }
}


//======================================================================
// ActorBody::clearEquipItems(void)
// address: 0x002A3EF4   size: 0x18 (24 bytes)
//======================================================================
void __fastcall ActorBody::clearEquipItems(ActorBody *this)
{
  unsigned int i; // r4
  __int64 v3; // r0

  for ( i = 0; i != 6; ++i )
  {
    v3 = __PAIR64__(i, (unsigned int)this);
    ActorBody::setEquipItem(v3, nullptr);
  }
}


//======================================================================
// ActorBody::onEvent(ActorEvent const&)
// address: 0x002A3F0C   size: 0x6C (108 bytes)
//======================================================================
__int64 __fastcall ActorBody::onEvent(__int64 this, int a2, int a3)
{
  int v3; // r3
  __int64 v4; // kr00_8
  int v5; // r4
  _BYTE v7[12]; // [sp+0h] [bp-10h] BYREF
  int v8; // [sp+Ch] [bp-4h]

  *(_QWORD *)v7 = this;
  *(_DWORD *)&v7[8] = a2;
  v8 = a3;
  v3 = *(_DWORD *)HIDWORD(this);
  v4 = this;
  if ( *(_DWORD *)HIDWORD(this) == 4 )
  {
    if ( *(_BYTE *)(HIDWORD(this) + 4) != 0 )
      ActorBody::playAnim((ActorBody *)this, 2);
    else
      ActorBody::stopAnim((Ogre::Model *)this, 2);
  }
  else
  {
    switch ( v3 )
    {
      case 7:
        ActorBody::onMoveChange((ActorBody *)this, SHIDWORD(this));
        break;
      case 5:
        if ( *(_BYTE *)(HIDWORD(this) + 16) != 0 )
        {
          *(_QWORD *)&v7[4] = *(_QWORD *)(HIDWORD(this) + 4);
          v8 = *(_DWORD *)(HIDWORD(this) + 12);
          ActorBody::playRotate();
        }
        *(_DWORD *)&v7[8] = *(_DWORD *)(HIDWORD(v4) + 8);
        v5 = *(_DWORD *)(HIDWORD(v4) + 4);
        v8 = *(_DWORD *)(HIDWORD(v4) + 12);
        *(_DWORD *)&v7[4] = v5;
        ActorBody::playLookAt((ActorBody *)v4, (const Ogre::Vector3 *)&v7[4]);
        break;
      case 9:
        HIDWORD(this) = *(_DWORD *)(HIDWORD(this) + 4);
        ActorBody::setEquipItem(this, *(ClientItem **)(HIDWORD(v4) + 8));
        break;
      default:
        break;
    }
  }
  return *(_QWORD *)v7;
}


//======================================================================
// ActorBody::playEffect(ACTORBODY_EFFECT)
// address: 0x002A3F78   size: 0xA2 (162 bytes)
//======================================================================
void __fastcall ActorBody::playEffect(int a1, int a2, int a3)
{
  Ogre::Model *v3; // r4
  Ogre::Entity *v5; // r5
  void *v6; // r1
  _DWORD v7[4]; // [sp+8h] [bp-10h] BYREF

  v3 = *(Ogre::Model **)(a1 + 64);
  if ( v3 != nullptr )
  {
    if ( a2 != 0 )
    {
      if ( a2 == 1 )
      {
        v7[0] = *((_DWORD *)v3 + 2) / 10;
        v7[1] = *((_DWORD *)v3 + 3) / 10;
        v7[2] = *((_DWORD *)v3 + 4) / 10;
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD *, _DWORD, int))ClientWorld::addParticleEffect)(
          *(_DWORD *)(a1 + 56),
          0,
          v7,
          0,
          40);
      }
      else if ( a2 == 2 )
      {
        v5 = *(Ogre::Entity **)(a1 + 72);
        Ogre::FixedString::FixedString((Ogre::FixedString *)v7, (Ogre::FixedString *)"BUFF_FIRE_1", a3);
        Ogre::Entity::playMotion(v5, (char **)v7, 0, 0);
        Ogre::FixedString::~FixedString((Ogre::FixedString **)v7, v6);
      }
    }
    else
    {
      v7[0] = 1056964608;
      v7[1] = 0;
      v7[2] = 0;
      v7[3] = 1065353216;
      Ogre::Model::setOverlayColor(v3, (Ogre::ColourValue *)v7);
      Ogre::Model::playAnim(*(Ogre::Model **)(a1 + 64), 6, 1.0, 1.0);
    }
  }
}


//======================================================================
// ActorBody::stopEffect(ACTORBODY_EFFECT)
// address: 0x002A4020   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ActorBody::stopEffect(int a1, int a2, Ogre::FixedString *a3)
{
  Ogre::Model *v4; // r0
  int v5; // r5
  void *v6; // r1
  Ogre::FixedString *v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[1] = a3;
  v4 = *(Ogre::Model **)(a1 + 64);
  if ( v4 != nullptr )
  {
    if ( a2 != 0 )
    {
      if ( a2 == 2 )
      {
        v5 = *(_DWORD *)(a1 + 72);
        Ogre::FixedString::FixedString((Ogre::FixedString *)v9, (Ogre::FixedString *)"BUFF_FIRE_1", (int)a3);
        Ogre::Entity::stopMotion(v5, (const Ogre::FixedString *)v9);
        Ogre::FixedString::~FixedString(v9, v6);
      }
    }
    else
    {
      Ogre::Model::setOverlayColor(v4, nullptr);
    }
  }
  return a1;
}


//======================================================================
// ActorBody::playMotion(char const*,int)
// address: 0x002A4068   size: 0x22 (34 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ActorBody::playMotion(ActorBody *this, Ogre::FixedString *a2, int a3)
{
  Ogre::Entity *v3; // r6
  void *v5; // r1
  char *v6; // [sp+4h] [bp-4h] BYREF

  v3 = *((Ogre::Entity **)this + 18);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v6, a2, a3);
  Ogre::Entity::playMotion(v3, &v6, 0, a3);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v6, v5);
}


//======================================================================
// ActorBody::stopMotion(char const*)
// address: 0x002A4094   size: 0x1C (28 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ActorBody::stopMotion(
        ActorBody *this,
        Ogre::FixedString *a2,
        Ogre::FixedString *a3)
{
  int v3; // r5
  void *v4; // r1
  Ogre::FixedString *v5[2]; // [sp+4h] [bp-8h] BYREF

  v5[1] = a3;
  v3 = *((_DWORD *)this + 18);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v5, a2, (int)a3);
  Ogre::Entity::stopMotion(v3, (const Ogre::FixedString *)v5);
  Ogre::FixedString::~FixedString(v5, v4);
}


//======================================================================
// ActorBody::stopMotion(int)
// address: 0x002A40BA   size: 0xA (10 bytes)
//======================================================================
int __fastcall ActorBody::stopMotion(ActorBody *this, int a2)
{
  return Ogre::Entity::stopMotion(*((_DWORD *)this + 18), a2);
}


//======================================================================
// ActorBody::attachToScene(Ogre::GameScene *)
// address: 0x002A40C4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall ActorBody::attachToScene(ActorBody *this, Ogre::GameScene *a2)
{
  int result; // r0

  *((_DWORD *)this + 15) = a2;
  result = *((_DWORD *)this + 18);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 48))(result);
  return result;
}


//======================================================================
// ActorBody::attachUIModelView(ModelView *,int)
// address: 0x002A40D8   size: 0x22 (34 bytes)
//======================================================================
unsigned __int64 __fastcall ActorBody::attachUIModelView(ActorBody *this, ModelView *a2, unsigned int a3)
{
  Ogre::GameScene *Scene; // r0

  Scene = (Ogre::GameScene *)ModelView::getScene(a2);
  ActorBody::attachToScene(this, Scene);
  return ModelView::setRootNode(a2, (Ogre::MovableObject *)*((_DWORD *)this + 18), a3);
}


//======================================================================
// ActorBody::detachFromScene(void)
// address: 0x002A40FA   size: 0x16 (22 bytes)
//======================================================================
int __fastcall ActorBody::detachFromScene(ActorBody *this)
{
  int result; // r0

  result = *((_DWORD *)this + 18);
  if ( result != 0 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 52))(result);
  *((_DWORD *)this + 15) = 0;
  return result;
}


//======================================================================
// ActorBody::detachUIModelView(ModelView *,int)
// address: 0x002A4110   size: 0x14 (20 bytes)
//======================================================================
int __fastcall ActorBody::detachUIModelView(ActorBody *this, ModelView *a2, unsigned int a3)
{
  ModelView::setRootNode(a2, nullptr, a3);
  return ActorBody::detachFromScene(this);
}


//======================================================================
// ActorBody::initPlayer(int)
// address: 0x002A4124   size: 0xFE (254 bytes)
//======================================================================
int __fastcall ActorBody::initPlayer(Ogre::Model **this, const char *a2)
{
  _DWORD *v4; // r0
  int v5; // r3
  const char *v6; // r2
  int v7; // r2
  void *v8; // r1
  Ogre::Entity *v9; // r5
  Ogre::Model *v10; // r1
  unsigned int v11; // r3
  int v13; // [sp+4h] [bp-110h]
  Ogre::FixedString *v14; // [sp+8h] [bp-10Ch] BYREF
  char s[256]; // [sp+Ch] [bp-108h] BYREF

  if ( *(this + 14) != nullptr )
    ActorBody::detachFromScene((ActorBody *)this);
  v4 = *(this + 16);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *(this + 16) = nullptr;
  }
  *(this + 20) = (Ogre::Model *)a2;
  sub_3BE1FC(this + 19);
  j_sprintf(s, "entity/player/player%.2d/body.omod", a2);
  v5 = s_PlayerSex[(_DWORD)(a2 - 1)];
  switch ( v5 )
  {
    case 1:
      v6 = "entity/player/fbody.oanim";
      break;
    case 2:
      v6 = "entity/player/body01.oanim";
      break;
    case 3:
      v6 = "entity/player/fbody01.oanim";
      break;
    default:
      v6 = "entity/player/body.oanim";
      break;
  }
  *(this + 16) = (Ogre::Model *)BlockMaterialMgr::getModel(
                                  (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                  s,
                                  v6);
  ActorBody::clearEquipItems((ActorBody *)this);
  v13 = *((_DWORD *)*(this + 16) + 65);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v14, (Ogre::FixedString *)"head", v7);
  *(this + 24) = (Ogre::Model *)Ogre::SkeletonInstance::findBoneID(v13, &v14);
  Ogre::FixedString::~FixedString(&v14, v8);
  v9 = (Ogre::Entity *)operator new(0x210u);
  Ogre::Entity::Entity(v9);
  v10 = *(this + 16);
  *(this + 18) = v9;
  Ogre::Entity::load((int)v9, v10);
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ActorBody.cpp", (const char *)&dword_84 + 2, 2, v11);
  Ogre::LogMessage((Ogre *)"ActorBody::initPlayer Ok: %d", a2);
  return 1;
}


//======================================================================
// ActorBody::initMonster(char const*,float,bool,char const*,char const*)
// address: 0x002A4250   size: 0x1CA (458 bytes)
//======================================================================
int __fastcall ActorBody::initMonster(
        Ogre::Model **this,
        char *a2,
        float a3,
        int a4,
        Ogre::FixedString *a5,
        Ogre::FixedString *a6)
{
  _DWORD *v8; // r0
  int v9; // r2
  Ogre::ModelData *v10; // r4
  void *v11; // r1
  unsigned int v12; // r3
  Ogre::Model *v14; // r5
  _DWORD *v15; // r3
  float *v16; // r0
  float v17; // r3
  int v18; // r2
  Ogre::ResourceManager *v19; // r5
  void *v20; // r1
  int v21; // r7
  int v22; // r2
  void *v23; // r1
  Ogre::Entity *v24; // r4
  int v25; // r2
  Ogre::Entity *v26; // r5
  void *v27; // r1
  int v28; // r5
  void *v29; // r1
  Ogre::Texture *v31; // [sp+4h] [bp-128h]
  Ogre::ResourceManager *v32; // [sp+Ch] [bp-120h]
  char *v34; // [sp+20h] [bp-10Ch] BYREF
  char s[256]; // [sp+24h] [bp-108h] BYREF

  if ( *(this + 14) != nullptr )
    ActorBody::detachFromScene((ActorBody *)this);
  v8 = *(this + 16);
  if ( v8 != nullptr )
  {
    Ogre::BaseObject::release(v8);
    *(this + 16) = nullptr;
  }
  *(this + 20) = (Ogre::Model *)-1;
  sub_3BE508((int)(this + 19), a2);
  j_sprintf(s, "entity/%s/body.omod", a2);
  v32 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v34, (Ogre::FixedString *)s, v9);
  v10 = (Ogre::ModelData *)Ogre::ResourceManager::blockLoad(v32, (Ogre::FixedString **)&v34, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v34, v11);
  if ( v10 != nullptr )
  {
    v14 = (Ogre::Model *)operator new(0x1C8u);
    Ogre::Model::Model(v14, v10);
    *(this + 16) = v14;
    Ogre::BaseObject::release(v10);
    v15 = *(this + 16);
    v15[104] = 1045220557;
    v15[105] = 1045220557;
    v15[106] = 1045220557;
    v15[107] = 1065353216;
    v16 = (float *)*(this + 16);
    v17 = *v16;
    v16[9] = a3;
    v16[10] = a3;
    v16[11] = a3;
    (*(void (**)(void))(LODWORD(v17) + 64))();
    if ( a6 != nullptr )
    {
      v19 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v34, a6, v18);
      v31 = (Ogre::Texture *)Ogre::ResourceManager::blockLoad(v19, (Ogre::FixedString **)&v34, 0);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)&v34, v20);
      v21 = (int)*(this + 16);
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v34, (Ogre::FixedString *)"g_DiffuseTex", v22);
      Ogre::Model::setTexture(v21, (const Ogre::FixedString *)&v34, v31);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)&v34, v23);
    }
    if ( a4 != 0 )
      ActorBody::clearEquipItems((ActorBody *)this);
    v24 = (Ogre::Entity *)operator new(0x210u);
    Ogre::Entity::Entity(v24);
    *(this + 18) = v24;
    Ogre::Entity::load((int)v24, *(this + 16));
    if ( a5 != nullptr && *(_BYTE *)a5 != 0 )
    {
      v26 = *(this + 18);
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v34, a5, v25);
      Ogre::Entity::playMotion(v26, &v34, 1, 0);
      Ogre::FixedString::~FixedString((Ogre::FixedString **)&v34, v27);
    }
    v28 = *((_DWORD *)*(this + 16) + 65);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v34, (Ogre::FixedString *)"Head", v25);
    *(this + 24) = (Ogre::Model *)Ogre::SkeletonInstance::findBoneID(v28, &v34);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v34, v29);
    return 1;
  }
  else
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ActorBody.cpp", (const char *)&dword_98, 2, v12);
    Ogre::LogMessage((Ogre *)"Load %s failed", s);
    return 0;
  }
}

