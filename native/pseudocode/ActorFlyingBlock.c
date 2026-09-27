// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorFlyingBlock

//======================================================================
// ActorFlyingBlock::getObjType(void)
// address: 0x002D2FA0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorFlyingBlock::getObjType(ActorFlyingBlock *this)
{
  return 12;
}


//======================================================================
// ActorFlyingBlock::canTriggerWalking(void)
// address: 0x002D2FA4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorFlyingBlock::canTriggerWalking(ActorFlyingBlock *this)
{
  return 0;
}


//======================================================================
// ActorFlyingBlock::tick(void)
// address: 0x002D2FA8   size: 0x1C (28 bytes)
//======================================================================
int __fastcall ActorFlyingBlock::tick(ActorFlyingBlock *this)
{
  if ( *((_DWORD *)this + 44) == 0 )
    ClientActor::setNeedClear(this, 0);
  return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 17) + 8))(*((_DWORD *)this + 17));
}


//======================================================================
// ActorFlyingBlock::~ActorFlyingBlock()
// address: 0x002D2FC4   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN16ActorFlyingBlockD1Ev'
void __fastcall ActorFlyingBlock::~ActorFlyingBlock(ActorFlyingBlock *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_460510;
  v2 = *((_DWORD **)this + 43);
  v3 = v2[1] - 1;
  v2[1] = v3;
  if ( v3 <= 0 )
    (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
  ClientActor::~ClientActor(this);
}


//======================================================================
// ActorFlyingBlock::~ActorFlyingBlock()
// address: 0x002D2FF8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorFlyingBlock::~ActorFlyingBlock(ActorFlyingBlock *this)
{
  ActorFlyingBlock::~ActorFlyingBlock(this);
  operator delete(this);
}


//======================================================================
// ActorFlyingBlock::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x002D300A   size: 0x1C (28 bytes)
//======================================================================
void *__fastcall ActorFlyingBlock::onCull(Ogre::MovableObject ***this, Ogre::GameScene **a2, Ogre::CullFrustum *a3)
{
  void *v4; // [sp+0h] [bp-Ch]

  Ogre::CullResult::addRenderable((Ogre::CullResult *)a2, a2[137], *(this + 43), 2, nullptr);
  return v4;
}


//======================================================================
// ActorFlyingBlock::update(float)
// address: 0x002D3058   size: 0xE6 (230 bytes)
//======================================================================
int __fastcall ActorFlyingBlock::update(ActorFlyingBlock *this, float a2)
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
// ActorFlyingBlock::load(void const*)
// address: 0x002D314C   size: 0x9E (158 bytes)
//======================================================================
int __fastcall ActorFlyingBlock::load(ActorFlyingBlock *this, flatbuffers::Table *a2)
{
  int OptionalFieldOffset; // r0
  flatbuffers::Table *v5; // r1
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r3
  int *v12; // r0
  int v13; // r2
  int v14; // r6
  int v15; // r0
  int v16; // r3

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
    v11 = *(_DWORD *)((char *)a2 + v10);
  *((_DWORD *)this + 46) = v11;
  v12 = (int *)flatbuffers::Table::GetOptionalFieldOffset(a2, 0xEu);
  if ( v12 != nullptr )
    v12 = (int *)((char *)v12 + (_DWORD)a2);
  v13 = v12[2];
  v14 = *v12;
  *((_DWORD *)this + 48) = v12[1];
  *((_DWORD *)this + 47) = v14;
  *((_DWORD *)this + 49) = v13;
  v15 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xCu);
  v16 = 0;
  if ( v15 != 0 )
    v16 = *((unsigned __int8 *)a2 + v15);
  *((_BYTE *)this + 200) = v16 != 0;
  return 1;
}


//======================================================================
// ActorFlyingBlock::ActorFlyingBlock(void)
// address: 0x002D3210   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN16ActorFlyingBlockC2Ev'
void __fastcall ActorFlyingBlock::ActorFlyingBlock(ActorFlyingBlock *this)
{
  FlyingLocoMotion *v2; // r5

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_460510;
  v2 = (FlyingLocoMotion *)operator new(0x94u);
  FlyingLocoMotion::FlyingLocoMotion(v2, this);
  *((_DWORD *)this + 17) = v2;
  *((_DWORD *)this + 43) = 0;
}


//======================================================================
// ActorFlyingBlock::ActorFlyingBlock(World *,WCoord const&,int,int,int)
// address: 0x002D3254   size: 0x8A (138 bytes)
//======================================================================
// Alternative name is '_ZN16ActorFlyingBlockC2EP5WorldRK6WCoordiii'
void __fastcall ActorFlyingBlock::ActorFlyingBlock(
        ActorFlyingBlock *this,
        World *a2,
        const WCoord *a3,
        ClientItem *a4,
        int a5,
        int a6)
{
  int v9; // r1
  FlyingLocoMotion *v10; // r6
  void (__fastcall *v11)(FlyingLocoMotion *, _DWORD *, _DWORD, _DWORD); // r12
  int v12; // r0
  int v13; // r3
  float v14; // r3
  _DWORD v15[4]; // [sp+4h] [bp-10h] BYREF

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_460510;
  *((_DWORD *)this + 44) = a4;
  *((_DWORD *)this + 45) = a5;
  *((_DWORD *)this + 46) = a6;
  *((_DWORD *)this + 47) = *(_DWORD *)a3;
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  *((_BYTE *)this + 200) = 1;
  *((_DWORD *)this + 49) = v9;
  v10 = (FlyingLocoMotion *)operator new(0x94u);
  FlyingLocoMotion::FlyingLocoMotion(v10, this);
  *((_DWORD *)this + 17) = v10;
  v11 = *(void (__fastcall **)(FlyingLocoMotion *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v10 + 16);
  v12 = 100 * *((_DWORD *)a3 + 1) + 50;
  v13 = 100 * *(_DWORD *)a3;
  v15[2] = 100 * *((_DWORD *)a3 + 2) + 50;
  v15[0] = v13 + 50;
  v15[1] = v12;
  v11(v10, v15, 0, 0);
  *((_DWORD *)this + 43) = ClientItem::createItemModel(a4, nullptr, (const char *)0x40A00000, v14);
}


//======================================================================
// ActorFlyingBlock::dropItems(void)
// address: 0x002D32F8   size: 0x1A (26 bytes)
//======================================================================
int __fastcall ActorFlyingBlock::dropItems(int this)
{
  if ( *(_BYTE *)(this + 200) != 0 )
    return ClientActor::dropItem((ClientActor *)this, *(_DWORD *)(this + 176), 1);
  return this;
}


//======================================================================
// ActorFlyingBlock::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002D33F6   size: 0x4E (78 bytes)
//======================================================================
int __fastcall ActorFlyingBlock::save(ActorFlyingBlock *this, flatbuffers::FlatBufferBuilder *a2)
{
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int ActorFlyBlock; // r0
  unsigned __int8 v10[4]; // [sp+14h] [bp-Ch] BYREF
  int v11; // [sp+18h] [bp-8h]
  int v12; // [sp+1Ch] [bp-4h]

  v4 = ClientActor::saveActorCommon(this, a2);
  v5 = *((_DWORD *)this + 49);
  v6 = *((_DWORD *)this + 47);
  v11 = *((_DWORD *)this + 48);
  v7 = *((_DWORD *)this + 46);
  *(_DWORD *)v10 = v6;
  v12 = v5;
  ActorFlyBlock = FBSave::CreateActorFlyBlock(
                    (const void **)a2,
                    v4,
                    *((unsigned __int16 *)this + 88),
                    *((unsigned __int16 *)this + 90),
                    v7,
                    *((_BYTE *)this + 200),
                    v10);
  return FBSave::CreateSectionActor(a2, 7u, ActorFlyBlock);
}

