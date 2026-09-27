// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BindOjbect2Motion

//======================================================================
// Ogre::BindOjbect2Motion::GetParent(void)
// address: 0x0015FA68   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::GetParent(Ogre::BindOjbect2Motion *this)
{
  return *((_DWORD *)this + 18);
}


//======================================================================
// Ogre::BindOjbect2Motion::StopObject(Ogre::Entity *)
// address: 0x0015FBD6   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::StopObject(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// Ogre::BindOjbect2Motion::SetParent(Ogre::ObjectMotion *)
// address: 0x0015FBE0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::SetParent(int this, Ogre::ObjectMotion *a2)
{
  *(_DWORD *)(this + 72) = a2;
  return this;
}


//======================================================================
// Ogre::BindOjbect2Motion::OnChildEnd(Ogre::ObjectMotion *,Ogre::Entity *)
// address: 0x0015FBE4   size: 0x2 (2 bytes)
//======================================================================
void Ogre::BindOjbect2Motion::OnChildEnd()
{
  ;
}


//======================================================================
// Ogre::BindOjbect2Motion::OnChildStop(Ogre::ObjectMotion *,Ogre::Entity *)
// address: 0x0015FBE6   size: 0x2 (2 bytes)
//======================================================================
void Ogre::BindOjbect2Motion::OnChildStop()
{
  ;
}


//======================================================================
// Ogre::BindOjbect2Motion::SetNodePause(Ogre::MovableObject *,bool,float)
// address: 0x0015FBE8   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::SetNodePause(
        Ogre::BindOjbect2Motion *this,
        Ogre::MovableObject *a2,
        bool a3,
        float a4)
{
  return (*(int (__fastcall **)(Ogre::MovableObject *, bool, unsigned int))(*(_DWORD *)a2 + 44))(
           a2,
           a3,
           (unsigned int)(float)(a4 * 1000.0));
}


//======================================================================
// Ogre::BindOjbect2Motion::OnRestartObject(Ogre::Entity *,float)
// address: 0x0015FC54   size: 0x52 (82 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::OnRestartObject(int this, Ogre::Entity *a2, float a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r3
  int v6; // r1

  v3 = this;
  v4 = *(_DWORD *)(*(_DWORD *)(this + 60) + 8);
  if ( v4 != 0 )
  {
    (*(void (__fastcall **)(_DWORD, _DWORD, unsigned int))(*(_DWORD *)v4 + 44))(
      *(_DWORD *)(*(_DWORD *)(this + 60) + 8),
      0,
      (unsigned int)(float)(a3 * 1000.0));
    this = Ogre::BaseObject::isKindOf(
             *(Ogre::BaseObject **)(*(_DWORD *)(v3 + 60) + 8),
             (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI);
    if ( this != 0 )
    {
      v5 = *(_DWORD *)(v3 + 60);
      if ( *(_DWORD *)(v5 + 4) == 0 )
      {
        v6 = *(_DWORD *)(v3 + 64);
        if ( v6 >= 0 )
          return Ogre::Model::playAnim(*(Ogre::Model **)(v5 + 8), v6, 1.0, 1.0);
      }
    }
  }
  return this;
}


//======================================================================
// Ogre::BindOjbect2Motion::OnPause(bool,float,Ogre::Entity *)
// address: 0x0015FEB6   size: 0x38 (56 bytes)
//======================================================================
__int64 __fastcall Ogre::BindOjbect2Motion::OnPause(__int64 this, float a2, Ogre::Entity *a3)
{
  int v4; // r5
  float v5; // r3
  __int64 v7; // [sp+0h] [bp-Ch]

  v7 = this;
  if ( *(_DWORD *)(this + 4) == 1 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this + 60) + 8);
    if ( v4 != 0 )
    {
      HIDWORD(v7) = *(_DWORD *)(*(_DWORD *)this + 80);
      v5 = a2 - *(float *)((*(int (__fastcall **)(_DWORD))(*(_DWORD *)this + 72))(this) + 8);
      ((void (__fastcall *)(_DWORD, int, _DWORD, _DWORD))HIDWORD(v7))(this, v4, HIDWORD(this), LODWORD(v5));
    }
  }
  return v7;
}


//======================================================================
// Ogre::BindOjbect2Motion::OnChildUpdate(Ogre::ObjectMotion *,float,Ogre::Entity *)
// address: 0x0015FEEE   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::OnChildUpdate(int result, int a2, int a3, int a4)
{
  if ( *(_DWORD *)(result + 4) != 1 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 8))(a2, a4);
  return result;
}


//======================================================================
// Ogre::BindOjbect2Motion::OnChildStart(Ogre::ObjectMotion *,Ogre::Entity *)
// address: 0x0015FF04   size: 0x2C (44 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::OnChildStart(int this, Ogre::ObjectMotion *a2, Ogre::Entity *a3)
{
  Ogre::MovableObject *v4; // r1

  if ( *(_DWORD *)(this + 4) != 1 )
    return (*(int (__fastcall **)(Ogre::ObjectMotion *, Ogre::Entity *))(*(_DWORD *)a2 + 8))(a2, a3);
  v4 = *(Ogre::MovableObject **)(*(_DWORD *)(this + 60) + 8);
  if ( v4 != nullptr )
    return Ogre::MovableObject::setSRTFather(
             *(Ogre::MovableObject **)(*((_DWORD *)a2 + 15) + 8),
             v4,
             *(_DWORD *)(*((_DWORD *)a2 + 4) + 44));
  return this;
}


//======================================================================
// Ogre::BindOjbect2Motion::~BindOjbect2Motion()
// address: 0x0016009C   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17BindOjbect2MotionD1Ev'
void __fastcall Ogre::BindOjbect2Motion::~BindOjbect2Motion(Ogre::BindOjbect2Motion *this)
{
  char *v2; // r5
  _DWORD **v3; // r3
  _DWORD *v4; // r0

  v2 = (char *)this + 68;
  *(_DWORD *)this = &off_456B60;
  v3 = *((_DWORD ***)this + 15);
  if ( v3 != nullptr )
  {
    if ( *v3 != nullptr )
    {
      Ogre::BaseObject::release(*v3);
      **((_DWORD **)this + 15) = 0;
    }
    v4 = *(_DWORD **)(*((_DWORD *)this + 15) + 8);
    if ( v4 != nullptr )
    {
      Ogre::BaseObject::release(v4);
      *(_DWORD *)(*((_DWORD *)this + 15) + 8) = 0;
    }
    operator delete(*((void **)this + 15));
  }
  sub_3BDF80(v2);
  Ogre::ObjectMotion::~ObjectMotion(this);
}


//======================================================================
// Ogre::BindOjbect2Motion::~BindOjbect2Motion()
// address: 0x001600F0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BindOjbect2Motion::~BindOjbect2Motion(Ogre::BindOjbect2Motion *this)
{
  Ogre::BindOjbect2Motion::~BindOjbect2Motion(this);
  operator delete(this);
}


//======================================================================
// Ogre::BindOjbect2Motion::StartObject(Ogre::Entity *)
// address: 0x001601C4   size: 0x10C (268 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::StartObject(int this, Ogre::Entity *a2)
{
  int v2; // r4
  Ogre::BaseObject *ObjectFromResource; // r0
  Ogre::Entity *v5; // r5
  int v6; // r1
  int v7; // r3
  int v8; // r2
  void *v9; // r1
  Ogre::FixedString *v10[2]; // [sp+14h] [bp-8h] BYREF

  v2 = this;
  if ( *(_DWORD *)(this + 4) == 0 )
  {
    ObjectFromResource = (Ogre::BaseObject *)Ogre::createObjectFromResource(**(Ogre ***)(this + 60), a2);
    v5 = ObjectFromResource;
    if ( ObjectFromResource != nullptr )
    {
      if ( Ogre::BaseObject::isKindOf(ObjectFromResource, (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI) == 0
        || *(_DWORD *)(*(_DWORD *)(v2 + 60) + 4) != 0
        || (v6 = *(_DWORD *)(v2 + 64)) < 0 )
      {
        if ( Ogre::BaseObject::isKindOf(v5, (const Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI) != 0 )
        {
          (*(void (__fastcall **)(int, _DWORD, Ogre::Entity *))(*(_DWORD *)v2 + 20))(v2, 0, a2);
          if ( *(_DWORD *)(*(_DWORD *)(v2 + 60) + 4) == 0 && sub_3BDD5C(v2 + 68, (char *)&unk_3FB8EA) != 0 )
          {
            Ogre::FixedString::FixedString((Ogre::FixedString *)v10, *(Ogre::FixedString **)(v2 + 68), v8);
            Ogre::Entity::playMotion(v5, (const Ogre::FixedString *)v10, true, 0);
            Ogre::FixedString::~FixedString(v10, v9);
          }
        }
        else if ( Ogre::BaseObject::isKindOf(v5, (const Ogre::RuntimeClass *)&Ogre::SoundNode::m_RTTI) != 0 )
        {
          Ogre::SoundNode::setDistance(v5, 0.0, 2000.0);
          Ogre::SoundNode::setSoundFullRange((int)v5, 0.0);
          Ogre::SoundNode::setRandomTime0(v5, 0.0);
          Ogre::SoundNode::setRandomTime1(v5, 0.0);
        }
      }
      else
      {
        Ogre::Model::playAnim(v5, v6, 1.0, 1.0);
      }
      Ogre::Entity::bindObject(
        a2,
        *(_DWORD *)(*(_DWORD *)(v2 + 16) + 44),
        v5,
        1,
        *(_DWORD *)(*(_DWORD *)(v2 + 60) + 12));
      v7 = *(_DWORD *)(v2 + 72);
      if ( v7 != 0 )
        Ogre::MovableObject::setSRTFather(v5, *(Ogre::MovableObject **)(*(_DWORD *)(v7 + 60) + 8), 0);
      *(_DWORD *)(*(_DWORD *)(v2 + 60) + 8) = v5;
    }
    this = (*(int (__fastcall **)(int, _DWORD, Ogre::Entity *))(*(_DWORD *)v2 + 20))(v2, 0, a2);
    *(_DWORD *)(v2 + 4) = 1;
  }
  return this;
}


//======================================================================
// Ogre::BindOjbect2Motion::BindOjbect2Motion(void)
// address: 0x001603C8   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17BindOjbect2MotionC1Ev'
Ogre::BindOjbect2Motion *__fastcall Ogre::BindOjbect2Motion::BindOjbect2Motion(Ogre::BindOjbect2Motion *this)
{
  Ogre::ObjectMotion::ObjectMotion((int)this);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *(_DWORD *)this = &off_456B60;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 17) = &byte_55FB88;
  return this;
}


//======================================================================
// Ogre::BindOjbect2Motion::GetDataOnTime(float,Ogre::FRAME_DATA &)
// address: 0x001603F8   size: 0x224 (548 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::GetDataOnTime(int a1, float a2, _DWORD *a3)
{
  _DWORD *v3; // r4
  unsigned int v5; // r5
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int v9; // r1
  unsigned __int8 *v10; // r3
  _DWORD *v11; // r3
  int v12; // r3
  int v13; // r3
  _DWORD *v14; // r3
  float *v15; // r3
  float v16; // r5
  float v17; // r1
  float v18; // r3
  Ogre::Quaternion *v19; // r0
  int v20; // r7
  float v22; // [sp+14h] [bp-190h] BYREF
  float v23; // [sp+18h] [bp-18Ch]
  float v24; // [sp+1Ch] [bp-188h]
  _BYTE v25[64]; // [sp+20h] [bp-184h] BYREF
  float v26[16]; // [sp+60h] [bp-144h] BYREF
  float v27[16]; // [sp+A0h] [bp-104h] BYREF
  float v28[16]; // [sp+E0h] [bp-C4h] BYREF
  float v29[16]; // [sp+120h] [bp-84h] BYREF
  _BYTE v30[68]; // [sp+160h] [bp-44h] BYREF

  v3 = *(_DWORD **)(a1 + 16);
  v5 = (unsigned int)(float)(a2 * 1000.0);
  v6 = v3[39];
  v7 = (v3[40] - v6) >> 4;
  if ( v7 <= 0 )
    return 0;
  v8 = v7 - 1;
  v9 = 16 * v8;
  v10 = (unsigned __int8 *)(v6 + 16 * v8);
  if ( v5 <= ((v10[1] << 8) | *v10 | (v10[2] << 16) | (v10[3] << 24)) )
  {
    Ogre::KeyFrameArray<Ogre::Vector3>::getValue(v3 + 33, 0, v5, *(float *)&a3, 1);
    Ogre::KeyFrameArray<Ogre::Vector3>::getValue(v3 + 57, 0, v5, COERCE_FLOAT(a3 + 3), 1);
    if ( (v3[90] - v3[89]) >> 3 != 0 )
      Ogre::KeyFrameArray<float>::getValue((int)(v3 + 83), 0, v5, a3 + 10, 1);
    else
      a3[10] = 1065353216;
    v20 = (int)(a3 + 6);
    if ( v3[69] == 0 )
    {
      Ogre::KeyFrameArray<Ogre::Quaternion>::getValue(v3 + 45, 0, v5, v20, 1);
      return 1;
    }
    Ogre::KeyFrameArray<Ogre::Vector3>::getValue(v3 + 70, 0, v5, COERCE_FLOAT(&v22), 1);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v25);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v26);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v27);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v28);
    Ogre::Matrix4::makeRotateX((Ogre::Matrix4 *)v26, v22);
    Ogre::Matrix4::makeRotateY((Ogre::Matrix4 *)v27, v23);
    Ogre::Matrix4::makeRotateZ((Ogre::Matrix4 *)v28, v24);
    Ogre::operator*((Ogre::Matrix4 *)v29, v28, v27);
    Ogre::operator*((Ogre::Matrix4 *)v30, v29, v26);
    Ogre::Matrix4::operator=(v25, v30);
    v19 = (Ogre::Quaternion *)v20;
LABEL_17:
    Ogre::Quaternion::setMatrix(v19, (const Ogre::Matrix4 *)v25);
    return 1;
  }
  *a3 = *((_DWORD *)v10 + 1);
  a3[1] = *((_DWORD *)v10 + 2);
  a3[2] = *((_DWORD *)v10 + 3);
  v11 = (_DWORD *)(v3[63] + v9);
  a3[3] = v11[1];
  a3[4] = v11[2];
  a3[5] = v11[3];
  v12 = v3[89];
  if ( (v3[90] - v12) >> 3 != 0 )
    v13 = (*(unsigned __int8 *)(v12 + 8 * v8 + 5) << 8)
        | *(unsigned __int8 *)(v12 + 8 * v8 + 4)
        | (*(unsigned __int8 *)(v12 + 8 * v8 + 6) << 16)
        | (*(unsigned __int8 *)(v12 + 8 * v8 + 7) << 24);
  else
    v13 = 1065353216;
  a3[10] = v13;
  if ( v3[69] != 0 )
  {
    v15 = (float *)(v3[76] + v9);
    v16 = v15[1];
    v17 = v15[2];
    v18 = v15[3];
    v22 = v16;
    v23 = v17;
    v24 = v18;
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v25);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v26);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v27);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v28);
    Ogre::Matrix4::makeRotateX((Ogre::Matrix4 *)v26, v16);
    Ogre::Matrix4::makeRotateY((Ogre::Matrix4 *)v27, v23);
    Ogre::Matrix4::makeRotateZ((Ogre::Matrix4 *)v28, v24);
    Ogre::operator*((Ogre::Matrix4 *)v29, v28, v27);
    Ogre::operator*((Ogre::Matrix4 *)v30, v29, v26);
    Ogre::Matrix4::operator=(v25, v30);
    v19 = (Ogre::Quaternion *)(a3 + 6);
    goto LABEL_17;
  }
  v14 = (_DWORD *)(v3[51] + 20 * v8);
  a3[6] = v14[1];
  a3[7] = v14[2];
  a3[8] = v14[3];
  a3[9] = v14[4];
  return 1;
}


//======================================================================
// Ogre::BindOjbect2Motion::UpdateData(float,Ogre::Entity *)
// address: 0x00160620   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::UpdateData(Ogre::BindOjbect2Motion *this, float a2, Ogre::Entity *a3)
{
  Ogre::BaseObject *v4; // r0
  _DWORD *v6; // r0
  float v7; // r2
  int result; // r0
  _DWORD *v9; // r6
  int v10; // r7
  int *v11; // r0
  int v12; // r3
  int v13; // [sp+4h] [bp-38h]
  float v14; // [sp+Ch] [bp-30h] BYREF
  float v15; // [sp+10h] [bp-2Ch]
  float v16; // [sp+14h] [bp-28h]
  int v17; // [sp+18h] [bp-24h]
  int v18; // [sp+1Ch] [bp-20h]
  int v19; // [sp+20h] [bp-1Ch]
  int v20[6]; // [sp+24h] [bp-18h] BYREF

  v4 = *(Ogre::BaseObject **)(*((_DWORD *)this + 15) + 8);
  if ( v4 != nullptr
    && Ogre::BaseObject::isKindOf(v4, (const Ogre::RuntimeClass *)&Ogre::BeamEmitter::m_RTTI) != 0
    && *((_BYTE *)this + 20) != 0 )
  {
    v6 = *(_DWORD **)(*((_DWORD *)this + 15) + 8);
    v14 = *((float *)this + 6);
    v7 = *((float *)this + 8);
    v15 = *((float *)this + 7);
    v16 = v7;
    Ogre::BeamEmitter::SetTargetPos(v6, &v14);
  }
  memset(v20, 0, 12);
  v20[3] = 1065353216;
  result = Ogre::BindOjbect2Motion::GetDataOnTime((int)this, a2, &v14);
  if ( result != 0 )
  {
    v9 = *(_DWORD **)(*((_DWORD *)this + 15) + 8);
    if ( v9 != nullptr )
    {
      v10 = (int)(float)(v15 * 10.0);
      v13 = (int)(float)(v16 * 10.0);
      v9[2] = (int)(float)(v14 * 10.0);
      v9[3] = v10;
      v9[4] = v13;
      (*(void (__fastcall **)(_DWORD *))(*v9 + 64))(v9);
      Ogre::MovableObject::setRotation(*(int **)(*((_DWORD *)this + 15) + 8), v20);
      v11 = *(int **)(*((_DWORD *)this + 15) + 8);
      v11[9] = v17;
      v11[10] = v18;
      v12 = *v11;
      v11[11] = v19;
      result = (*(int (**)(void))(v12 + 64))();
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 15) + 8) + 188) = v20[4];
    }
  }
  return result;
}


//======================================================================
// Ogre::BindOjbect2Motion::InitObject(Ogre::Entity *)
// address: 0x00160D20   size: 0x54 (84 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::InitObject(Ogre::BindOjbect2Motion *this, Ogre::Entity *a2)
{
  int v3; // r3
  __int64 v4; // r0
  int result; // r0

  if ( *((_DWORD *)this + 1) == 1 )
  {
    v3 = *((_DWORD *)this + 15);
    if ( *(_DWORD *)(v3 + 8) != 0 )
    {
      LODWORD(v4) = (char *)a2 + 328;
      HIDWORD(v4) = v3 + 8;
      std::vector<Ogre::MovableObject *>::push_back(v4);
      *(_DWORD *)(*((_DWORD *)this + 15) + 8) = 0;
    }
  }
  result = sub_3BDD5C((int)this + 68, (char *)&unk_3FB8EA);
  if ( result == 0 || *(_DWORD *)(*((_DWORD *)this + 15) + 4) != 0 )
  {
    *((_DWORD *)this + 16) = -1;
  }
  else
  {
    result = j_atoi(*((const char **)this + 17));
    *((_DWORD *)this + 16) = result;
  }
  *((_DWORD *)this + 1) = 0;
  return result;
}


//======================================================================
// Ogre::BindOjbect2Motion::EndObject(Ogre::Entity *)
// address: 0x00160D78   size: 0x2C (44 bytes)
//======================================================================
int __fastcall Ogre::BindOjbect2Motion::EndObject(int this, Ogre::Entity *a2)
{
  int v2; // r4
  int v3; // r3
  __int64 v4; // r0

  v2 = this;
  if ( *(_DWORD *)(this + 4) == 1 )
  {
    v3 = *(_DWORD *)(this + 60);
    if ( *(_DWORD *)(v3 + 8) != 0 )
    {
      LODWORD(v4) = (char *)a2 + 328;
      HIDWORD(v4) = v3 + 8;
      this = std::vector<Ogre::MovableObject *>::push_back(v4);
      *(_DWORD *)(*(_DWORD *)(v2 + 60) + 8) = 0;
    }
    *(_DWORD *)(v2 + 4) = 2;
  }
  return this;
}


//======================================================================
// Ogre::BindOjbect2Motion::DelayStopObject(Ogre::Entity *,float)
// address: 0x00160E70   size: 0x5E (94 bytes)
//======================================================================
__int64 __fastcall Ogre::BindOjbect2Motion::DelayStopObject(__int64 this, float a2)
{
  _DWORD *v4; // r0
  int v5; // r3
  __int64 v6; // r0
  __int64 v8; // [sp+0h] [bp-8h] BYREF

  v8 = this;
  if ( *(_DWORD *)(this + 4) == 1 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(this + 60) + 8) != 0 )
    {
      v4 = (_DWORD *)operator new(8u);
      *v4 = 0;
      HIDWORD(v8) = v4;
      v4[1] = 1084227584;
      *v4 = *(_DWORD *)(*(_DWORD *)(this + 60) + 8);
      v5 = HIDWORD(v8);
      LODWORD(v6) = HIDWORD(this) + 340;
      *(float *)(HIDWORD(v8) + 4) = a2;
      HIDWORD(v6) = *(_DWORD *)(HIDWORD(this) + 344);
      if ( HIDWORD(v6) == *(_DWORD *)(HIDWORD(this) + 348) )
      {
        std::vector<Ogre::DelayDeleteObject *>::_M_insert_aux(v6, (_DWORD *)&v8 + 1);
      }
      else
      {
        if ( HIDWORD(v6) != 0 )
          *(_DWORD *)HIDWORD(v6) = v5;
        *(_DWORD *)(HIDWORD(this) + 344) += 4;
      }
      *(_DWORD *)(*(_DWORD *)(this + 60) + 8) = 0;
    }
    *(_DWORD *)(this + 4) = 2;
  }
  return v8;
}

