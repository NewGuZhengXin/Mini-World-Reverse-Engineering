// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorExpOrb

//======================================================================
// ActorExpOrb::getObjType(void)
// address: 0x002E9E7C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorExpOrb::getObjType(ActorExpOrb *this)
{
  return 8;
}


//======================================================================
// ActorExpOrb::canTriggerWalking(void)
// address: 0x002E9E80   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorExpOrb::canTriggerWalking(ActorExpOrb *this)
{
  return 0;
}


//======================================================================
// ActorExpOrb::~ActorExpOrb()
// address: 0x002E9E84   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN11ActorExpOrbD1Ev'
void __fastcall ActorExpOrb::~ActorExpOrb(ActorExpOrb *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  int v4; // r2

  v1 = (_DWORD *)((char *)this + 172);
  *(_DWORD *)this = &off_461CA8;
  v3 = *((_DWORD **)this + 43);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *v1 = 0;
  }
  ClientActor::~ClientActor(this);
}


//======================================================================
// ActorExpOrb::~ActorExpOrb()
// address: 0x002E9EC0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorExpOrb::~ActorExpOrb(ActorExpOrb *this)
{
  ActorExpOrb::~ActorExpOrb(this);
  operator delete(this);
}


//======================================================================
// ActorExpOrb::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x002E9ED2   size: 0x1C (28 bytes)
//======================================================================
void *__fastcall ActorExpOrb::onCull(Ogre::MovableObject ***this, Ogre::GameScene **a2, Ogre::CullFrustum *a3)
{
  void *v4; // [sp+0h] [bp-Ch]

  Ogre::CullResult::addRenderable((Ogre::CullResult *)a2, a2[137], *(this + 43), 2, nullptr);
  return v4;
}


//======================================================================
// ActorExpOrb::onCollideWithPlayer(ClientPlayer *)
// address: 0x002E9F1E   size: 0x3C (60 bytes)
//======================================================================
int __fastcall ActorExpOrb::onCollideWithPlayer(int this, ClientPlayer *a2)
{
  int *v2; // r4

  v2 = (int *)this;
  if ( *(int *)(this + 180) <= 0 )
  {
    if ( World::isCreativeMode(*(World **)(this + 52)) == 0 )
      PlayerAttrib::addExp(*((_DWORD *)a2 + 19), v2[44]);
    (*(void (__fastcall **)(ClientPlayer *, int *))(*(_DWORD *)a2 + 212))(a2, v2);
    return ClientActor::setNeedClear((ClientActor *)v2, 10);
  }
  return this;
}


//======================================================================
// ActorExpOrb::update(float)
// address: 0x002E9F5C   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall ActorExpOrb::update(ActorExpOrb *this, float a2)
{
  _DWORD *v3; // r6
  int v4; // r4
  int v5; // r7
  _DWORD *v6; // r5
  float v8; // [sp+4h] [bp-18h]
  int v10; // [sp+14h] [bp-8h]

  v3 = (_DWORD *)((char *)this + 172);
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 17) + 12))(*((_DWORD *)this + 17));
  v4 = *((_DWORD *)this + 17);
  v8 = *(float *)(v4 + 68) / 0.05;
  v10 = (int)(float)((float)((float)*(int *)(v4 + 60)
                           + (float)((float)((float)*(int *)(v4 + 36) - (float)*(int *)(v4 + 60)) * v8))
                   * 10.0);
  v5 = (int)(float)((float)((float)*(int *)(v4 + 64)
                          + (float)((float)((float)*(int *)(v4 + 40) - (float)*(int *)(v4 + 64)) * v8))
                  * 10.0);
  v6 = (_DWORD *)*v3;
  v6[2] = (int)(float)((float)((float)*(int *)(v4 + 56)
                             + (float)((float)((float)*(int *)(v4 + 32) - (float)*(int *)(v4 + 56)) * v8))
                     * 10.0);
  v6[4] = v5;
  v6[3] = v10;
  (*(void (__fastcall **)(_DWORD *))(*v6 + 64))(v6);
  return (*(int (__fastcall **)(_DWORD, unsigned int))(*(_DWORD *)*v3 + 40))(*v3, (unsigned int)(float)(a2 * 1000.0));
}


//======================================================================
// ActorExpOrb::load(void const*)
// address: 0x002EA040   size: 0x50 (80 bytes)
//======================================================================
int __fastcall ActorExpOrb::load(ActorExpOrb *this, flatbuffers::Table *a2)
{
  int OptionalFieldOffset; // r0
  flatbuffers::Table *v5; // r1
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r3

  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a2, 4u);
  if ( OptionalFieldOffset != 0 )
    v5 = (flatbuffers::Table *)((char *)a2 + OptionalFieldOffset + *(_DWORD *)((char *)a2 + OptionalFieldOffset));
  else
    v5 = nullptr;
  ClientActor::loadActorCommon((int)this, v5);
  v6 = flatbuffers::Table::GetOptionalFieldOffset(a2, 6u);
  v7 = 0;
  if ( v6 != 0 )
    v7 = *(_DWORD *)((char *)a2 + v6);
  *((_DWORD *)this + 44) = v7;
  v8 = flatbuffers::Table::GetOptionalFieldOffset(a2, 8u);
  v9 = 0;
  if ( v8 != 0 )
    v9 = *(_DWORD *)((char *)a2 + v8);
  *((_DWORD *)this + 45) = v9;
  return 1;
}


//======================================================================
// ActorExpOrb::ActorExpOrb(int)
// address: 0x002EA0B4   size: 0x68 (104 bytes)
//======================================================================
// Alternative name is '_ZN11ActorExpOrbC2Ei'
void __fastcall ActorExpOrb::ActorExpOrb(ActorExpOrb *this, int a2, Ogre::FixedString *a3)
{
  OrbLocoMotion *v5; // r5
  Ogre::Entity *v6; // r5
  int v7; // r2
  void *v8; // r1
  Ogre::FixedString *v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[1] = a3;
  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_461CA8;
  *((_DWORD *)this + 44) = a2;
  v5 = (OrbLocoMotion *)operator new(0x94u);
  OrbLocoMotion::OrbLocoMotion(v5, this);
  *((_DWORD *)this + 17) = v5;
  v6 = (Ogre::Entity *)operator new(0x210u);
  Ogre::Entity::Entity(v6);
  *((_DWORD *)this + 43) = v6;
  v9[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                 (Ogre::FixedString *)"particles/experience_star.ent",
                                 (const char *)0xFFFFFFFF,
                                 v7,
                                 (int)this + 172);
  Ogre::Entity::load(v6, v9, 1);
  Ogre::FixedString::release((int)v9[0], v8);
  *((_DWORD *)this + 45) = 10;
}


//======================================================================
// ActorExpOrb::SpawnExpOrb(World *,int,WCoord const&,WCoord const&)
// address: 0x002EA1AC   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall ActorExpOrb::SpawnExpOrb(ActorExpOrb *this, int a2, int *a3, const WCoord *a4, const WCoord *a5)
{
  int v6; // r5
  int v7; // r6
  int i; // r7
  int j; // r5
  int v10; // r6
  int k; // r5
  int result; // r0

  v6 = a2 / 1000;
  if ( a2 / 1000 > 0 )
  {
    v7 = a2 / 1000;
    if ( a2 / 1000 > 9 )
      v7 = 9;
    for ( i = 0; i < v7 - 1; ++i )
      sub_2EA140((int)this, 1000, a3, (unsigned int *)a4);
    sub_2EA140((int)this, 1000 * (v6 - v7 + 1), a3, (unsigned int *)a4);
  }
  for ( j = 0; j < a2 % 1000 / 100; ++j )
    sub_2EA140((int)this, 100, a3, (unsigned int *)a4);
  v10 = a2 % 1000 % 100;
  for ( k = 0; k < v10 / 10; ++k )
    sub_2EA140((int)this, 10, a3, (unsigned int *)a4);
  result = v10 / 10;
  if ( v10 % 10 > 0 )
    return sub_2EA140((int)this, v10 % 10, a3, (unsigned int *)a4);
  return result;
}


//======================================================================
// ActorExpOrb::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002EA26C   size: 0x6E (110 bytes)
//======================================================================
int __fastcall ActorExpOrb::save(ActorExpOrb *this, flatbuffers::FlatBufferBuilder *a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r0
  int v8; // [sp+0h] [bp-Ch]
  __int16 v9; // [sp+4h] [bp-8h]

  v4 = ClientActor::saveActorCommon(this, a2);
  v8 = *((_DWORD *)this + 44);
  v9 = flatbuffers::vector_downward::size((flatbuffers::FlatBufferBuilder *)((char *)a2 + 4));
  flatbuffers::FlatBufferBuilder::AddElement<int>(a2, 8u, *((_DWORD *)this + 45), 0);
  flatbuffers::FlatBufferBuilder::AddElement<int>(a2, 6u, v8, 0);
  if ( v4 != 0 )
  {
    flatbuffers::FlatBufferBuilder::Align(a2, 4u);
    v5 = flatbuffers::vector_downward::size((flatbuffers::FlatBufferBuilder *)((char *)a2 + 4));
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>(a2, 4u, 4 - v4 + v5, 0);
  }
  v6 = flatbuffers::FlatBufferBuilder::EndTable((char **)a2, v9, 3);
  return FBSave::CreateSectionActor(a2, 4u, v6);
}


//======================================================================
// ActorExpOrb::tick(void)
// address: 0x002EA354   size: 0x16 (22 bytes)
//======================================================================
int __fastcall ActorExpOrb::tick(ActorExpOrb *this)
{
  int *v1; // r4
  int result; // r0

  v1 = (int *)((char *)this + 180);
  result = ClientActor::tick(this);
  if ( *v1 > 0 )
    --*v1;
  return result;
}


//======================================================================
// ActorExpOrb::enterWorld(World *)
// address: 0x002EA36A   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ActorExpOrb::enterWorld(ActorExpOrb *this, World *a2)
{
  return ClientActor::enterWorld(this, a2);
}


//======================================================================
// ActorExpOrb::leaveWorld(bool)
// address: 0x002EA372   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ActorExpOrb::leaveWorld(ActorExpOrb *this, bool a2)
{
  return ClientActor::leaveWorld(this, a2);
}

