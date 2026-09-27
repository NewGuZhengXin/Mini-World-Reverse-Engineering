// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientWorld

//======================================================================
// ClientWorld::newSection(Chunk *,int)
// address: 0x002B1B2A   size: 0x1A (26 bytes)
//======================================================================
ClientSection *__fastcall ClientWorld::newSection(ClientWorld *this, Chunk *a2, int a3)
{
  ClientSection *v5; // r4

  v5 = (ClientSection *)operator new(0x40u);
  ClientSection::ClientSection(v5, a2, a3);
  return v5;
}


//======================================================================
// ClientWorld::doBlockRandomEffects(WCoord const&)
// address: 0x002B1B50   size: 0x76 (118 bytes)
//======================================================================
int __fastcall ClientWorld::doBlockRandomEffects(ClientWorld *this, const WCoord *a2)
{
  int i; // r6
  int v4; // r4
  int v5; // r7
  int v6; // r7
  int v7; // r7
  int v8; // r7
  int v9; // r7
  int result; // r0
  int Material; // r0
  _DWORD v13[4]; // [sp+Ch] [bp-10h] BYREF

  for ( i = 1000; i != 0; --i )
  {
    v4 = *(_DWORD *)a2;
    v5 = v4 + GenRandomInt(0x10u);
    v13[0] = v5 - GenRandomInt(0x10u);
    v6 = *((_DWORD *)a2 + 1);
    v7 = v6 + GenRandomInt(0x10u);
    v13[1] = v7 - GenRandomInt(0x10u);
    v8 = *((_DWORD *)a2 + 2);
    v9 = v8 + GenRandomInt(0x10u);
    v13[2] = v9 - GenRandomInt(0x10u);
    result = World::getBlockID(this, (const WCoord *)v13);
    if ( result > 0 )
    {
      Material = BlockMaterialMgr::getMaterial(
                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                   result);
      result = (*(int (__fastcall **)(int, ClientWorld *, _DWORD *))(*(_DWORD *)Material + 96))(Material, this, v13);
    }
  }
  return result;
}


//======================================================================
// ClientWorld::setWireBlockPos(WCoord const&)
// address: 0x002B1BCC   size: 0x1C (28 bytes)
//======================================================================
void __fastcall ClientWorld::setWireBlockPos(ClientWorld *this, const WCoord *a2)
{
  DecalBlock **v3; // r0

  v3 = (DecalBlock **)((char *)this + 244);
  *((_BYTE *)*v3 + 183) = 1;
  DecalBlock::setBlock(*v3, this, a2, 0);
}


//======================================================================
// ClientWorld::clearWireBlock(void)
// address: 0x002B1BE8   size: 0xC (12 bytes)
//======================================================================
char *__fastcall ClientWorld::clearWireBlock(ClientWorld *this)
{
  char *result; // r0

  result = (char *)this + 244;
  *(_BYTE *)(*(_DWORD *)result + 183) = 0;
  return result;
}


//======================================================================
// ClientWorld::spawnItem(int,int,int,int,int)
// address: 0x002B1BF4   size: 0x3C (60 bytes)
//======================================================================
int __fastcall ClientWorld::spawnItem(ClientWorld *this, int a2, int a3, int a4, int a5, int a6)
{
  ClientActorMgr *v6; // r0
  _DWORD v8[4]; // [sp+14h] [bp-10h] BYREF

  v6 = *((ClientActorMgr **)this + 33);
  v8[0] = 100 * a2 + 50;
  v8[1] = 100 * a3 + 50;
  v8[2] = 100 * a4 + 50;
  return ClientActorMgr::spawnItem(v6, (const WCoord *)v8, a5, a6, -1, true, 0, nullptr);
}


//======================================================================
// ClientWorld::ClientWorld(void)
// address: 0x002B1C90   size: 0xB4 (180 bytes)
//======================================================================
// Alternative name is '_ZN11ClientWorldC1Ev'
void __fastcall ClientWorld::ClientWorld(ClientWorld *this)
{
  int v2; // r0
  int *v3; // r5
  int v4; // r2
  int v5; // r3
  int v6; // r3

  World::World(this);
  *(_DWORD *)this = &off_45DDA0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  j_memset((char *)this + 252, 0, 0x10u);
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 65) = (char *)this + 252;
  *((_DWORD *)this + 66) = (char *)this + 252;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 69) = 8;
  v2 = operator new(0x20u);
  *((_DWORD *)this + 68) = v2;
  v3 = (int *)(v2 + 4 * ((unsigned int)(*((_DWORD *)this + 69) - 1) >> 1));
  *v3 = operator new(0x200u);
  *((_DWORD *)this + 73) = v3;
  v4 = *v3;
  v5 = *v3 + 512;
  *((_DWORD *)this + 71) = *v3;
  *((_DWORD *)this + 72) = v5;
  *((_DWORD *)this + 77) = v3;
  v6 = *v3;
  *((_DWORD *)this + 76) = *v3 + 512;
  *((_DWORD *)this + 75) = v6;
  *((_DWORD *)this + 70) = v4;
  *((_DWORD *)this + 74) = v6;
}


//======================================================================
// ClientWorld::updateParticleEffect(unsigned int)
// address: 0x002B1DCC   size: 0x84 (132 bytes)
//======================================================================
_DWORD *__fastcall ClientWorld::updateParticleEffect(ClientWorld *this, unsigned int a2)
{
  _DWORD **v3; // r5
  _DWORD *result; // r0
  _DWORD v6[4]; // [sp+8h] [bp-20h] BYREF
  int v7[4]; // [sp+18h] [bp-10h] BYREF
  _DWORD v8[5]; // [sp+28h] [bp+0h] BYREF

  while ( *((_DWORD *)this + 74) != *((_DWORD *)this + 70) )
  {
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v8,
      (_DWORD *)this + 70);
    v3 = (_DWORD **)v8[0];
    if ( *(_DWORD *)(v8[0] + 4) > *((_DWORD *)this + 1) )
      break;
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)v8[0] + 52))(*(_DWORD *)v8[0]);
    Ogre::BaseObject::release(*v3);
    std::deque<ClientWorld::ParticleEffect>::pop_front((int)this + 272);
  }
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v7,
    (_DWORD *)this + 70);
  while ( 1 )
  {
    result = std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
               v8,
               (_DWORD *)this + 74);
    if ( v7[0] == v8[0] )
      break;
    (*(void (__fastcall **)(_DWORD, unsigned int))(**(_DWORD **)v7[0] + 40))(*(_DWORD *)v7[0], a2);
    sub_2B1DB8(v6, v7);
  }
  return result;
}


//======================================================================
// ClientWorld::update(float)
// address: 0x002B1E50   size: 0x92 (146 bytes)
//======================================================================
int __fastcall ClientWorld::update(ClientActorMgr **this, float a2)
{
  ClientActorMgr **v2; // r5
  unsigned int v3; // r4
  ClientActorMgr *v4; // r0
  ClientActorMgr *v5; // r7
  void (__fastcall *v7)(ClientActorMgr *); // [sp+Ch] [bp-20h]
  _DWORD v8[7]; // [sp+10h] [bp-1Ch] BYREF

  v2 = this;
  v3 = (unsigned int)(float)(a2 * 1000.0);
  ClientActorMgr::update(*(this + 33), a2);
  ClientWorld::updateParticleEffect((ClientWorld *)v2, v3);
  BlockMaterialMgr::update((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, v3);
  v4 = v2[7];
  v2 += 60;
  (*(void (__fastcall **)(ClientActorMgr *, unsigned int))(*(_DWORD *)v4 + 12))(v4, v3);
  v5 = *v2;
  v7 = *(void (__fastcall **)(ClientActorMgr *))(*(_DWORD *)*v2 + 80);
  PlayerControl::getPosition((PlayerControl *)v8);
  v8[4] = 10 * v8[1];
  v8[3] = 10 * v8[0];
  v8[5] = 10 * v8[2];
  v7(v5);
  (*(void (__fastcall **)(ClientActorMgr *, unsigned int))(*(_DWORD *)*v2 + 28))(*v2, v3);
  return BlockScene::beginOneFrame(*v2);
}


//======================================================================
// ClientWorld::destroyParticleEffect(void)
// address: 0x002B1EF0   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall ClientWorld::destroyParticleEffect(ClientWorld *this)
{
  char *v1; // r7
  int i; // r4
  _DWORD *v4; // r6
  _DWORD *v5; // r7
  void **v6; // r6
  unsigned int v7; // r5
  void *v8; // r0
  __int64 v9; // r0
  _DWORD v11[4]; // [sp+8h] [bp-54h] BYREF
  int v12[4]; // [sp+18h] [bp-44h] BYREF
  __int128 v13; // [sp+28h] [bp-34h] BYREF
  _DWORD v14[4]; // [sp+38h] [bp-24h] BYREF
  _DWORD v15[5]; // [sp+48h] [bp-14h] BYREF

  v1 = (char *)this + 252;
  for ( i = *((_DWORD *)this + 65); (char *)i != v1; i = sub_391DDC(i) )
  {
    v4 = *(_DWORD **)(i + 24);
    (*(void (__fastcall **)(_DWORD *))(*v4 + 52))(v4);
    Ogre::BaseObject::release(v4);
  }
  std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_erase(
    (int)this + 248,
    *(_DWORD **)(i + 4));
  *(_DWORD *)(i + 8) = i;
  *(_DWORD *)(i + 4) = 0;
  *(_DWORD *)(i + 12) = i;
  *((_DWORD *)this + 67) = 0;
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v12,
    (_DWORD *)this + 70);
  while ( 1 )
  {
    v5 = (_DWORD *)((char *)this + 296);
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v15,
      (_DWORD *)this + 74);
    if ( v12[0] == v15[0] )
      break;
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)v12[0] + 52))(*(_DWORD *)v12[0]);
    Ogre::BaseObject::release(*(_DWORD **)v12[0]);
    sub_2B1DB8(v11, v12);
  }
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    &v13,
    (_DWORD *)this + 70);
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v15,
    &v13);
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v14,
    v5);
  v6 = (void **)(HIDWORD(v13) + 4);
  v7 = *((_DWORD *)this + 77) + 4;
  while ( (unsigned int)v6 < v7 )
  {
    v8 = *v6++;
    operator delete(v8);
  }
  v9 = v13;
  *(_OWORD *)v5 = v13;
  return v9;
}


//======================================================================
// ClientWorld::~ClientWorld()
// address: 0x002B1FB4   size: 0x92 (146 bytes)
//======================================================================
// Alternative name is '_ZN11ClientWorldD1Ev'
void __fastcall ClientWorld::~ClientWorld(void **this)
{
  _DWORD **v2; // r5
  _DWORD *v3; // r0
  void **v4; // r5
  unsigned int v5; // r7
  void *v6; // r0
  _DWORD v7[4]; // [sp+0h] [bp-24h] BYREF
  _DWORD v8[5]; // [sp+10h] [bp-14h] BYREF

  *this = &off_45DDA0;
  v2 = (_DWORD **)(this + 61);
  ClientWorld::destroyParticleEffect((ClientWorld *)this);
  if ( *v2 != nullptr )
  {
    Ogre::BaseObject::release(*v2);
    *v2 = nullptr;
  }
  v3 = *(this + 60);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *(this + 60) = nullptr;
  }
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v8,
    this + 70);
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v7,
    this + 74);
  if ( *(this + 68) != nullptr )
  {
    v4 = (void **)*(this + 73);
    v5 = (unsigned int)*(this + 77) + 4;
    while ( (unsigned int)v4 < v5 )
    {
      v6 = *v4++;
      operator delete(v6);
    }
    operator delete(*(this + 68));
  }
  std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_erase(
    (int)(this + 62),
    *(this + 64));
  World::~World((World *)this);
}


//======================================================================
// ClientWorld::~ClientWorld()
// address: 0x002B204C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ClientWorld::~ClientWorld(void **this)
{
  ClientWorld::~ClientWorld(this);
  operator delete(this);
}


//======================================================================
// ClientWorld::destroyBlockInWorldPartially(long long,WCoord const&,int)
// address: 0x002B22A8   size: 0x130 (304 bytes)
//======================================================================
void __fastcall ClientWorld::destroyBlockInWorldPartially(ClientWorld *this, __int64 a2, const WCoord *a3, int a4)
{
  char *v5; // r5
  char *v7; // r4
  int v8; // r0
  _DWORD *v9; // r7
  void *v10; // r0
  DecalBlock *v11; // r7
  char *v12; // r3
  char *v13; // r1
  char *v14; // r5
  __int64 v15; // [sp+8h] [bp-24h] BYREF
  __int64 *v16; // [sp+18h] [bp-14h] BYREF
  _BYTE v17[16]; // [sp+1Ch] [bp-10h] BYREF

  v15 = a2;
  v5 = (char *)this + 252;
  HIDWORD(a2) = *((_DWORD *)this + 64);
  v7 = (char *)this + 252;
  while ( HIDWORD(a2) != 0 )
  {
    if ( *(_QWORD *)(HIDWORD(a2) + 16) < __SPAIR64__(HIDWORD(v15), a2) )
    {
      v8 = *(_DWORD *)(HIDWORD(a2) + 12);
      HIDWORD(a2) = v7;
    }
    else
    {
      v8 = *(_DWORD *)(HIDWORD(a2) + 8);
    }
    v7 = (char *)HIDWORD(a2);
    HIDWORD(a2) = v8;
  }
  if ( v7 == v5 || *((_QWORD *)v7 + 2) > __SPAIR64__(HIDWORD(v15), a2) )
  {
    if ( a4 < 0 )
      return;
    v7 = v5;
  }
  else if ( a4 < 0 )
  {
    if ( v7 != v5 )
    {
      v9 = *((_DWORD **)v7 + 6);
      (*(void (__fastcall **)(_DWORD *))(*v9 + 52))(v9);
      Ogre::BaseObject::release(v9);
      v10 = (void *)sub_391F50(v7, v5);
      operator delete(v10);
      --*((_DWORD *)this + 67);
    }
    return;
  }
  CoordDivBlock((const WCoord *)v17, (int *)a3);
  if ( v7 == v5 )
  {
    v11 = (DecalBlock *)operator new(0x134u);
    DecalBlock::DecalBlock(v11, (Ogre::FixedString *)"destroy", 4);
    (*(void (__fastcall **)(DecalBlock *, _DWORD, _DWORD))(*(_DWORD *)v11 + 48))(v11, *((_DWORD *)this + 60), 0);
    DecalBlock::setBlock(v11, this, (const WCoord *)v17, a4);
    v12 = *((char **)v5 + 1);
    v13 = v7;
    while ( v12 != nullptr )
    {
      if ( *((_QWORD *)v12 + 2) < v15 )
      {
        v14 = *((char **)v12 + 3);
        v12 = v13;
      }
      else
      {
        v14 = *((char **)v12 + 2);
      }
      v13 = v12;
      v12 = v14;
    }
    if ( v13 == v7 || *((_QWORD *)v13 + 2) > v15 )
    {
      v16 = &v15;
      v13 = (char *)std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<long long const&>,std::tuple<>>(
                      (_DWORD *)this + 62,
                      (int)v13,
                      (int)&unk_446220,
                      (_DWORD **)&v16);
    }
    *((_DWORD *)v13 + 6) = v11;
  }
  else
  {
    DecalBlock::setBlock(*((DecalBlock **)v7 + 6), this, (const WCoord *)v17, a4);
  }
}


//======================================================================
// ClientWorld::removeParticleEffect(ParticleNode *)
// address: 0x002B26CC   size: 0x6E (110 bytes)
//======================================================================
_DWORD *__fastcall ClientWorld::removeParticleEffect(ClientWorld *this, ParticleNode *a2)
{
  _DWORD *result; // r0
  _DWORD v5[4]; // [sp+8h] [bp-34h] BYREF
  int v6[4]; // [sp+18h] [bp-24h] BYREF
  _DWORD v7[5]; // [sp+28h] [bp-14h] BYREF

  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v6,
    (_DWORD *)this + 70);
  while ( 1 )
  {
    result = std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
               v7,
               (_DWORD *)this + 74);
    if ( v6[0] == v7[0] )
      break;
    if ( *(ParticleNode **)v6[0] == a2 )
    {
      std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
        v7,
        v6);
      std::deque<ClientWorld::ParticleEffect>::erase(v5, (_DWORD *)this + 68, v7);
      (*(void (__fastcall **)(ParticleNode *))(*(_DWORD *)a2 + 52))(a2);
      return Ogre::BaseObject::release(a2);
    }
    sub_2B1DB8(v5, v6);
  }
  return result;
}


//======================================================================
// ClientWorld::insertParticleEffect(ParticleNode *,unsigned int)
// address: 0x002B2B74   size: 0x78 (120 bytes)
//======================================================================
int __fastcall ClientWorld::insertParticleEffect(ClientWorld *this, ParticleNode *a2, unsigned int a3)
{
  _DWORD v7[4]; // [sp+10h] [bp-3Ch] BYREF
  int v8[2]; // [sp+20h] [bp-2Ch] BYREF
  int v9[4]; // [sp+28h] [bp-24h] BYREF
  int *v10[5]; // [sp+38h] [bp-14h] BYREF

  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v9,
    (_DWORD *)this + 70);
  while ( 1 )
  {
    std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
      v10,
      (_DWORD *)this + 74);
    if ( (int *)v9[0] == v10[0] || a3 <= *(_DWORD *)(v9[0] + 4) )
      break;
    sub_2B1DB8(v7, v9);
  }
  v8[1] = a3;
  v8[0] = (int)a2;
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    v10,
    v9);
  std::deque<ClientWorld::ParticleEffect>::insert(v7, (_DWORD *)this + 68, v10, v8);
  return (*(int (__fastcall **)(ParticleNode *, _DWORD, _DWORD))(*(_DWORD *)a2 + 48))(a2, *((_DWORD *)this + 60), 0);
}


//======================================================================
// ClientWorld::addParticleEffect(PARTICLE_EFFECT,WCoord const&,DirectionType,unsigned int)
// address: 0x002B2BEC   size: 0x208 (520 bytes)
//======================================================================
ParticleNode *__fastcall ClientWorld::addParticleEffect(World *a1, int a2, int *a3, int a4, unsigned int a5)
{
  _WORD *Block; // r7
  int Material; // r0
  Ogre::Texture *v9; // r7
  ParticleNode *v10; // r4
  int v11; // r1
  int v12; // r7
  int v13; // r1
  int v14; // r2
  int v15; // r2
  int v16; // r3
  _WORD *v17; // r7
  int v18; // r0
  Ogre::Texture *v20; // r7
  float v21; // r1
  float v22; // r1
  int v23; // r2
  int v24; // r0
  int v25; // r3
  int v26; // r1
  int v27; // r7
  ParticleTemplate *Template; // [sp+4h] [bp-38h]
  ParticleTemplate *v30; // [sp+8h] [bp-34h]
  int v32; // [sp+14h] [bp-28h] BYREF
  char v33; // [sp+18h] [bp-24h]
  _BYTE v34[12]; // [sp+1Ch] [bp-20h] BYREF
  int v35; // [sp+28h] [bp-14h] BYREF
  int v36; // [sp+2Ch] [bp-10h]
  int v37; // [sp+30h] [bp-Ch]
  int v38; // [sp+34h] [bp-8h]

  if ( a5 != -1 )
    a5 += *((_DWORD *)a1 + 1);
  v33 = 0;
  v32 = 0;
  CoordDivBlock((const WCoord *)v34, a3);
  if ( (a2 & 0xFFFFFFFD) == 0 )
  {
    Block = (_WORD *)World::getBlock(a1, (const WCoord *)v34);
    Material = BlockMaterialMgr::getMaterial(
                 (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                 *Block & 0xFFF);
    if ( Material != 0 )
    {
      v9 = (Ogre::Texture *)(*(int (__fastcall **)(int, _WORD *, int *))(*(_DWORD *)Material + 32))(
                              Material,
                              Block,
                              &v32);
      if ( v9 != nullptr )
      {
        Template = (ParticleTemplate *)ParticleManager::getTemplate(
                                         (ParticleManager *)Ogre::Singleton<ParticleManager>::ms_Singleton,
                                         "block_destroyed");
        v10 = (ParticleNode *)operator new(0x2B8u);
        ParticleNode::ParticleNode(v10, Template);
        ParticleNode::setTexture(v10, v9);
        if ( v33 != 0 )
        {
          *((_DWORD *)v10 + 99) = 1045220557;
          *((_DWORD *)v10 + 100) = 1058642330;
          *((_DWORD *)v10 + 101) = 1045220557;
          *((_DWORD *)v10 + 102) = 1065353216;
          v11 = *((_DWORD *)v10 + 100);
          v12 = *((_DWORD *)v10 + 101);
          *((_DWORD *)v10 + 95) = *((_DWORD *)v10 + 99);
          *((_DWORD *)v10 + 96) = v11;
          *((_DWORD *)v10 + 97) = v12;
          *((_DWORD *)v10 + 98) = 1065353216;
          v13 = *((_DWORD *)v10 + 96);
          v14 = *((_DWORD *)v10 + 97);
          *((_DWORD *)v10 + 91) = *((_DWORD *)v10 + 95);
          *((_DWORD *)v10 + 92) = v13;
          *((_DWORD *)v10 + 93) = v14;
          *((_DWORD *)v10 + 94) = 1065353216;
        }
        v15 = 10 * a3[2];
        v16 = 10 * *a3;
        *((_DWORD *)v10 + 3) = 10 * a3[1];
        *((_DWORD *)v10 + 2) = v16;
        *((_DWORD *)v10 + 4) = v15;
        goto LABEL_27;
      }
    }
    return nullptr;
  }
  if ( a2 != 1 )
    return nullptr;
  v17 = (_WORD *)World::getBlock(a1, (const WCoord *)v34);
  v18 = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, *v17 & 0xFFF);
  if ( v18 == 0 )
    return nullptr;
  v20 = (Ogre::Texture *)(*(int (__fastcall **)(int, _WORD *, int *))(*(_DWORD *)v18 + 32))(v18, v17, &v32);
  if ( v20 == nullptr )
    return nullptr;
  v30 = (ParticleTemplate *)ParticleManager::getTemplate(
                              (ParticleManager *)Ogre::Singleton<ParticleManager>::ms_Singleton,
                              "block_destroying");
  v10 = (ParticleNode *)operator new(0x2B8u);
  ParticleNode::ParticleNode(v10, v30);
  ParticleNode::setTexture(v10, v20);
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 1065353216;
  if ( a4 != 0 )
  {
    if ( a4 != 1 )
    {
      switch ( a4 )
      {
        case 4:
          v22 = 180.0;
          break;
        case 5:
          goto LABEL_26;
        case 2:
          v22 = -90.0;
          break;
        case 3:
          v22 = 90.0;
          break;
        default:
          goto LABEL_26;
      }
      Ogre::Quaternion::setAxisAngleX((Ogre::Quaternion *)&v35, v22);
      goto LABEL_26;
    }
    v21 = -90.0;
  }
  else
  {
    v21 = 90.0;
  }
  Ogre::Quaternion::setAxisAngleZ((Ogre::Quaternion *)&v35, v21);
LABEL_26:
  v23 = 10 * a3[2];
  v24 = *a3;
  *((_DWORD *)v10 + 3) = 10 * a3[1];
  *((_DWORD *)v10 + 4) = v23;
  *((_DWORD *)v10 + 2) = 10 * v24;
  (*(void (__fastcall **)(ParticleNode *))(*(_DWORD *)v10 + 64))(v10);
  v25 = v37;
  v26 = v35;
  v27 = v38;
  *((_DWORD *)v10 + 6) = v36;
  *((_DWORD *)v10 + 5) = v26;
  *((_DWORD *)v10 + 7) = v25;
  *((_DWORD *)v10 + 8) = v27;
LABEL_27:
  (*(void (__fastcall **)(ParticleNode *))(*(_DWORD *)v10 + 64))(v10);
  ClientWorld::insertParticleEffect(a1, v10, a5);
  return v10;
}


//======================================================================
// ClientWorld::create(unsigned int,unsigned int,int,int,int,int,int)
// address: 0x002B2E1C   size: 0x90 (144 bytes)
//======================================================================
__int64 __fastcall ClientWorld::create(
        BlockScene **this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  BlockScene *v9; // r5
  unsigned int v10; // r3
  const char *v11; // r1
  DecalBlock *v12; // r5
  EnvironmentMgr *v13; // r5
  unsigned int v14; // r3
  const char *v15; // r1
  __int64 v17; // [sp+0h] [bp-10h]

  World::create((World *)this, a2, a3, a4, a5, a6, a7, a8);
  v9 = (BlockScene *)operator new(0x84u);
  BlockScene::BlockScene(v9, (World *)this);
  *(this + 60) = v9;
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientWorld.cpp", (const char *)&word_2E, 2, v10);
  Ogre::LogMessage((Ogre *)"BlockScene OK", v11);
  v12 = (DecalBlock *)operator new(0x134u);
  DecalBlock::DecalBlock(v12, (Ogre::FixedString *)"highlight", 0);
  *(this + 61) = v12;
  (*(void (__fastcall **)(DecalBlock *, _DWORD, _DWORD))(*(_DWORD *)v12 + 48))(v12, *(this + 60), 0);
  v13 = (EnvironmentMgr *)operator new(0x80u);
  EnvironmentMgr::EnvironmentMgr(v13, (World *)this, *(this + 60));
  *(this + 7) = v13;
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ClientWorld.cpp", (const char *)&dword_34, 2, v14);
  Ogre::LogMessage((Ogre *)"EnvironmentMgr OK", v15);
  return v17;
}


//======================================================================
// ClientWorld::tick(void)
// address: 0x002B2ED0   size: 0x2E (46 bytes)
//======================================================================
int __fastcall ClientWorld::tick(ClientWorld *this)
{
  _BYTE v3[12]; // [sp+0h] [bp-18h] BYREF
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  World::tick(this);
  PlayerControl::getPosition((PlayerControl *)v4);
  CoordDivBlock((const WCoord *)v3, v4);
  return ClientWorld::doBlockRandomEffects(this, (const WCoord *)v3);
}

