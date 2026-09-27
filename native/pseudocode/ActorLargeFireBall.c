// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorLargeFireBall

//======================================================================
// ActorLargeFireBall::~ActorLargeFireBall()
// address: 0x0029D28C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18ActorLargeFireBallD1Ev'
void __fastcall ActorLargeFireBall::~ActorLargeFireBall(ActorLargeFireBall *this)
{
  *(_DWORD *)this = &off_45C5D8;
  ActorFireBall::~ActorFireBall(this);
}


//======================================================================
// ActorLargeFireBall::~ActorLargeFireBall()
// address: 0x0029D2A8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorLargeFireBall::~ActorLargeFireBall(ActorLargeFireBall *this)
{
  ActorLargeFireBall::~ActorLargeFireBall(this);
  operator delete(this);
}


//======================================================================
// ActorLargeFireBall::onImpact(IntersectResult *)
// address: 0x0029D2D6   size: 0x5E (94 bytes)
//======================================================================
int __fastcall ActorLargeFireBall::onImpact(int a1, int a2)
{
  int v4; // r0
  float v6[7]; // [sp+Ch] [bp-1Ch] BYREF

  if ( *(_BYTE *)(a2 + 1) != 0 )
  {
    j_memset(v6, 0, sizeof(v6));
    v6[1] = (float)*(int *)(a1 + 212);
    v4 = *(_DWORD *)(a2 + 20);
    LODWORD(v6[0]) = 3;
    (*(void (__fastcall **)(int, float *, _DWORD))(*(_DWORD *)v4 + 68))(v4, v6, *(_DWORD *)(a1 + 184));
  }
  World::createExplosion(
    *(World **)(a1 + 52),
    nullptr,
    (const WCoord *)(*(_DWORD *)(a1 + 68) + 32),
    *(_DWORD *)(a1 + 208),
    true,
    true);
  return ClientActor::setNeedClear((ClientActor *)a1, 0);
}


//======================================================================
// ActorLargeFireBall::load(void const*)
// address: 0x0029D334   size: 0x7A (122 bytes)
//======================================================================
int __fastcall ActorLargeFireBall::load(ActorLargeFireBall *this, flatbuffers::Table *a2)
{
  int OptionalFieldOffset; // r0
  flatbuffers::Table *v5; // r1
  int v6; // r0
  int v7; // r2
  int v8; // r3
  int *v9; // r0
  int v10; // r0
  int v11; // r3
  int v12; // r0
  _DWORD *v13; // r4
  int v14; // r2
  int v15; // r3
  _DWORD *v16; // r5

  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a2, 4u);
  if ( OptionalFieldOffset != 0 )
    v5 = (flatbuffers::Table *)((char *)a2 + OptionalFieldOffset + *(_DWORD *)((char *)a2 + OptionalFieldOffset));
  else
    v5 = nullptr;
  ClientActor::loadActorCommon((int)this, v5);
  v6 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xAu);
  v7 = 0;
  v8 = 0;
  if ( v6 != 0 )
  {
    v9 = (int *)((char *)a2 + v6);
    v7 = *v9;
    v8 = v9[1];
  }
  *((_DWORD *)this + 48) = v7;
  *((_DWORD *)this + 49) = v8;
  v10 = flatbuffers::Table::GetOptionalFieldOffset(a2, 8u);
  v11 = 0;
  if ( v10 != 0 )
    v11 = *(_DWORD *)((char *)a2 + v10);
  *((_DWORD *)this + 50) = v11;
  v12 = flatbuffers::Table::GetOptionalFieldOffset(a2, 6u);
  if ( v12 != 0 )
    v13 = (_DWORD *)((char *)a2 + v12);
  else
    v13 = nullptr;
  v14 = v13[1];
  v15 = v13[2];
  v16 = (_DWORD *)((char *)this + 172);
  *v16 = *v13;
  v16[1] = v14;
  v16[2] = v15;
  return 1;
}


//======================================================================
// ActorLargeFireBall::save(flatbuffers::FlatBufferBuilder &)
// address: 0x0029D79C   size: 0x4C (76 bytes)
//======================================================================
int __fastcall ActorLargeFireBall::save(ActorLargeFireBall *this, flatbuffers::FlatBufferBuilder *a2)
{
  int v4; // r1
  int v5; // r0
  int v6; // r3
  int ActorLargeFireball; // r0
  _DWORD v9[4]; // [sp+Ch] [bp-10h] BYREF

  v4 = ClientActor::saveActorCommon(this, a2);
  v5 = *((_DWORD *)this + 44);
  v6 = *((_DWORD *)this + 45);
  v9[0] = *((_DWORD *)this + 43);
  v9[2] = v6;
  v9[1] = v5;
  ActorLargeFireball = FBSave::CreateActorLargeFireball(
                         (const void **)a2,
                         v4,
                         (const unsigned __int8 *)v9,
                         *((_DWORD *)this + 50),
                         *(_QWORD *)(*((_DWORD *)this + 46) + 40));
  return FBSave::CreateSectionActor(a2, 9u, ActorLargeFireball);
}

