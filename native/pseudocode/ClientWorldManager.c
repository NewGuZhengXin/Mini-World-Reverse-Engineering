// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientWorldManager

//======================================================================
// ClientWorldManager::newWorld(void)
// address: 0x002F09D0   size: 0x14 (20 bytes)
//======================================================================
ClientWorld *__fastcall ClientWorldManager::newWorld(ClientWorldManager *this)
{
  ClientWorld *v1; // r4

  v1 = (ClientWorld *)operator new(0x138u);
  ClientWorld::ClientWorld(v1);
  return v1;
}


//======================================================================
// ClientWorldManager::update(float)
// address: 0x002F0B38   size: 0x26 (38 bytes)
//======================================================================
__int64 __fastcall ClientWorldManager::update(__int64 this, int a2)
{
  __int64 v4; // [sp+0h] [bp-Ch] BYREF
  int v5; // [sp+8h] [bp-4h]

  v4 = this;
  v5 = a2;
  HIDWORD(v4) = *(_DWORD *)(this + 40);
  while ( HIDWORD(v4) != (_DWORD)this + 32 )
  {
    ClientWorld::update(*(ClientActorMgr ***)(HIDWORD(v4) + 20), *((float *)&this + 1));
    sub_2F09EE((_DWORD *)&v4 + 1);
  }
  return v4;
}


//======================================================================
// ClientWorldManager::ClientWorldManager(WorldDesc *)
// address: 0x002F0C18   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN18ClientWorldManagerC1EP9WorldDesc'
void __fastcall ClientWorldManager::ClientWorldManager(ClientWorldManager *this, WorldDesc *a2)
{
  ParticleManager *v3; // r5

  WorldManager::WorldManager(this, (int)a2);
  *(_DWORD *)this = &off_462340;
  v3 = (ParticleManager *)operator new(0x20u);
  ParticleManager::ParticleManager(v3);
  *((_DWORD *)this + 22) = v3;
}


//======================================================================
// ClientWorldManager::~ClientWorldManager()
// address: 0x002F0C54   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN18ClientWorldManagerD1Ev'
void __fastcall ClientWorldManager::~ClientWorldManager(ClientWorldManager *this, _DWORD *a2)
{
  ParticleManager *v2; // r5

  v2 = *((ParticleManager **)this + 22);
  *(_DWORD *)this = &off_462340;
  if ( v2 != nullptr )
  {
    ParticleManager::~ParticleManager(v2);
    operator delete(v2);
  }
  WorldManager::~WorldManager(this, a2);
}


//======================================================================
// ClientWorldManager::~ClientWorldManager()
// address: 0x002F0C84   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ClientWorldManager::~ClientWorldManager(ClientWorldManager *this, _DWORD *a2)
{
  ClientWorldManager::~ClientWorldManager(this, a2);
  operator delete(this);
}

