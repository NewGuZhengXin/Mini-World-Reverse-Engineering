// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorBoss

//======================================================================
// ActorBoss::~ActorBoss()
// address: 0x002B2F58   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN9ActorBossD1Ev'
void __fastcall ActorBoss::~ActorBoss(ActorBoss *this)
{
  *(_DWORD *)this = &off_45E760;
  ChunkViewer::~ChunkViewer((ActorBoss *)((char *)this + 188));
  ActorLiving::~ActorLiving(this);
}


//======================================================================
// ActorBoss::~ActorBoss()
// address: 0x002B2F7C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorBoss::~ActorBoss(ActorBoss *this)
{
  ActorBoss::~ActorBoss(this);
  operator delete(this);
}


//======================================================================
// ActorBoss::updateChunkView(void)
// address: 0x002BB1DA   size: 0x20 (32 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ActorBoss::updateChunkView(ActorBoss *this, int a2, int a3, int a4)
{
  World *v5; // r6
  _DWORD v6[3]; // [sp+4h] [bp-Ch] BYREF

  v6[1] = a3;
  v6[2] = a4;
  v5 = *((World **)this + 13);
  ClientActor::getPosition((ClientActor *)v6);
  ChunkViewer::updateChunkView((ActorBoss *)((char *)this + 188), v5, (const WCoord *)v6, 1);
}


//======================================================================
// ActorBoss::enterWorld(World *)
// address: 0x002BB1FA   size: 0x24 (36 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ActorBoss::enterWorld(ActorBoss *this, World *a2, int a3, int a4)
{
  _DWORD v6[3]; // [sp+4h] [bp-Ch] BYREF

  v6[1] = a3;
  v6[2] = a4;
  ClientActor::enterWorld(this, a2);
  ClientActor::getPosition((ClientActor *)v6);
  ChunkViewer::enterWorld((ActorBoss *)((char *)this + 188), a2, (const WCoord *)v6, 1);
}


//======================================================================
// ActorBoss::leaveWorld(bool)
// address: 0x002BB21E   size: 0x18 (24 bytes)
//======================================================================
int __fastcall ActorBoss::leaveWorld(World **this, bool a2)
{
  ChunkViewer::leaveWorld((ChunkViewer *)(this + 47), *(this + 13));
  return ActorLiving::leaveWorld((ActorLiving *)this, a2);
}

