// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorFallingSand

//======================================================================
// ActorFallingSand::getObjType(void)
// address: 0x002EC174   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorFallingSand::getObjType(ActorFallingSand *this)
{
  return 11;
}


//======================================================================
// ActorFallingSand::canTriggerWalking(void)
// address: 0x002EC178   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorFallingSand::canTriggerWalking(ActorFallingSand *this)
{
  return 0;
}


//======================================================================
// ActorFallingSand::canBeCollidedWith(void)
// address: 0x002EC17C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ActorFallingSand::canBeCollidedWith(ActorFallingSand *this)
{
  return *((_DWORD *)this + 6) >> 31;
}


//======================================================================
// ActorFallingSand::tick(void)
// address: 0x002EC182   size: 0x1C (28 bytes)
//======================================================================
int __fastcall ActorFallingSand::tick(ActorFallingSand *this)
{
  if ( *((_DWORD *)this + 44) == 0 )
    ClientActor::setNeedClear(this, 0);
  return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 17) + 8))(*((_DWORD *)this + 17));
}


//======================================================================
// ActorFallingSand::~ActorFallingSand()
// address: 0x002EC1A0   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN16ActorFallingSandD1Ev'
void __fastcall ActorFallingSand::~ActorFallingSand(ActorFallingSand *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_462050;
  v2 = *((_DWORD **)this + 43);
  v3 = v2[1] - 1;
  v2[1] = v3;
  if ( v3 <= 0 )
    (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
  ClientActor::~ClientActor(this);
}


//======================================================================
// ActorFallingSand::~ActorFallingSand()
// address: 0x002EC1D4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorFallingSand::~ActorFallingSand(ActorFallingSand *this)
{
  ActorFallingSand::~ActorFallingSand(this);
  operator delete(this);
}


//======================================================================
// ActorFallingSand::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x002EC1E6   size: 0x1C (28 bytes)
//======================================================================
void *__fastcall ActorFallingSand::onCull(Ogre::MovableObject ***this, Ogre::GameScene **a2, Ogre::CullFrustum *a3)
{
  void *v4; // [sp+0h] [bp-Ch]

  Ogre::CullResult::addRenderable((Ogre::CullResult *)a2, a2[137], *(this + 43), 2, nullptr);
  return v4;
}


//======================================================================
// ActorFallingSand::update(float)
// address: 0x002EC234   size: 0xE6 (230 bytes)
//======================================================================
int __fastcall ActorFallingSand::update(ActorFallingSand *this, float a2)
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
  v10 = (int)(float)((float)((float)((float)*(int *)(v4 + 60)
                                   + (float)((float)((float)*(int *)(v4 + 36) - (float)*(int *)(v4 + 60)) * v8))
                           - (float)*(int *)(v4 + 28))
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
// ActorFallingSand::load(void const*)
// address: 0x002EC328   size: 0x6A (106 bytes)
//======================================================================
int __fastcall ActorFallingSand::load(ActorFallingSand *this, flatbuffers::Table *a2)
{
  int OptionalFieldOffset; // r0
  flatbuffers::Table *v5; // r1
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r3

  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a2, 4u);
  if ( OptionalFieldOffset != 0 )
    v5 = (flatbuffers::Table *)((char *)a2 + OptionalFieldOffset + *(_DWORD *)((char *)a2 + OptionalFieldOffset));
  else
    v5 = nullptr;
  ClientActor::loadActorCommon((int)this, v5);
  v6 = flatbuffers::Table::GetOptionalFieldOffset(a2, 6u);
  v7 = 0;
  if ( v6 != 0 )
    v7 = *(unsigned __int16 *)((char *)a2 + v6);
  *((_DWORD *)this + 44) = v7;
  v8 = flatbuffers::Table::GetOptionalFieldOffset(a2, 8u);
  v9 = 0;
  if ( v8 != 0 )
    v9 = *(unsigned __int16 *)((char *)a2 + v8);
  *((_DWORD *)this + 45) = v9;
  v10 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xAu);
  v11 = 0;
  if ( v10 != 0 )
    v11 = *((unsigned __int8 *)a2 + v10);
  *((_BYTE *)this + 184) = v11 != 0;
  return 1;
}


//======================================================================
// ActorFallingSand::ActorFallingSand(void)
// address: 0x002EC3C0   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN16ActorFallingSandC2Ev'
void __fastcall ActorFallingSand::ActorFallingSand(ActorFallingSand *this)
{
  FallingLocoMotion *v2; // r5
  float v3; // r3

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_462050;
  v2 = (FallingLocoMotion *)operator new(0x98u);
  FallingLocoMotion::FallingLocoMotion(v2, this);
  *((_DWORD *)this + 17) = v2;
  *((_DWORD *)this + 43) = ClientItem::createItemModel(
                             (ClientItem *)((char *)&dword_68 + 2),
                             nullptr,
                             (const char *)0x40A00000,
                             v3);
}


//======================================================================
// ActorFallingSand::ActorFallingSand(World *,WCoord const&,int,int)
// address: 0x002EC410   size: 0x78 (120 bytes)
//======================================================================
// Alternative name is '_ZN16ActorFallingSandC2EP5WorldRK6WCoordii'
void __fastcall ActorFallingSand::ActorFallingSand(ActorFallingSand *this, World *a2, const WCoord *a3, int a4, int a5)
{
  FallingLocoMotion *v8; // r5
  void (__fastcall *v9)(FallingLocoMotion *, _DWORD *, _DWORD, _DWORD); // r7
  int v10; // r0
  int v11; // r3
  float v12; // r3
  _DWORD v13[4]; // [sp+4h] [bp-10h] BYREF

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_462050;
  *((_DWORD *)this + 44) = a4;
  *((_BYTE *)this + 184) = 1;
  *((_DWORD *)this + 45) = a5;
  v8 = (FallingLocoMotion *)operator new(0x98u);
  FallingLocoMotion::FallingLocoMotion(v8, this);
  *((_DWORD *)this + 17) = v8;
  v9 = *(void (__fastcall **)(FallingLocoMotion *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v8 + 16);
  v10 = 100 * *((_DWORD *)a3 + 1) + 50;
  v11 = 100 * *(_DWORD *)a3;
  v13[2] = 100 * *((_DWORD *)a3 + 2) + 50;
  v13[0] = v11 + 50;
  v13[1] = v10;
  v9(v8, v13, 0, 0);
  *((_DWORD *)this + 43) = ClientItem::createItemModel(
                             (ClientItem *)((char *)&dword_68 + 2),
                             nullptr,
                             (const char *)0x40A00000,
                             v12);
}


//======================================================================
// ActorFallingSand::dropItems(void)
// address: 0x002EC4A4   size: 0x1A (26 bytes)
//======================================================================
int __fastcall ActorFallingSand::dropItems(int this)
{
  if ( *(_BYTE *)(this + 184) != 0 )
    return ClientActor::dropItem((ClientActor *)this, *(_DWORD *)(this + 176), 1);
  return this;
}


//======================================================================
// ActorFallingSand::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002EC556   size: 0x2E (46 bytes)
//======================================================================
int __fastcall ActorFallingSand::save(ActorFallingSand *this, flatbuffers::FlatBufferBuilder *a2)
{
  int v4; // r0
  int ActorFallSand; // r0

  v4 = ClientActor::saveActorCommon(this, a2);
  ActorFallSand = FBSave::CreateActorFallSand(
                    a2,
                    v4,
                    *((unsigned __int16 *)this + 88),
                    *((unsigned __int16 *)this + 90),
                    *((_BYTE *)this + 184));
  return FBSave::CreateSectionActor(a2, 6u, ActorFallSand);
}


//======================================================================
// ActorFallingSand::enterWorld(World *)
// address: 0x002EC71C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ActorFallingSand::enterWorld(ActorFallingSand *this, World *a2)
{
  return ClientActor::enterWorld(this, a2);
}


//======================================================================
// ActorFallingSand::leaveWorld(bool)
// address: 0x002EC724   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ActorFallingSand::leaveWorld(ActorFallingSand *this, bool a2)
{
  return ClientActor::leaveWorld(this, a2);
}

