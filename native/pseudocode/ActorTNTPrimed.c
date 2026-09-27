// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorTNTPrimed

//======================================================================
// ActorTNTPrimed::getObjType(void)
// address: 0x002CCA8C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorTNTPrimed::getObjType(ActorTNTPrimed *this)
{
  return 10;
}


//======================================================================
// ActorTNTPrimed::canTriggerWalking(void)
// address: 0x002CCA90   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorTNTPrimed::canTriggerWalking(ActorTNTPrimed *this)
{
  return 0;
}


//======================================================================
// ActorTNTPrimed::canBeCollidedWith(void)
// address: 0x002CCA94   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ActorTNTPrimed::canBeCollidedWith(ActorTNTPrimed *this)
{
  return *((_DWORD *)this + 6) >> 31;
}


//======================================================================
// ActorTNTPrimed::~ActorTNTPrimed()
// address: 0x002CCA9C   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN14ActorTNTPrimedD1Ev'
void __fastcall ActorTNTPrimed::~ActorTNTPrimed(ActorTNTPrimed *this)
{
  _DWORD *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_45FAC0;
  v2 = *((_DWORD **)this + 45);
  v3 = v2[1] - 1;
  v2[1] = v3;
  if ( v3 <= 0 )
    (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
  ClientActor::~ClientActor(this);
}


//======================================================================
// ActorTNTPrimed::~ActorTNTPrimed()
// address: 0x002CCAD0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorTNTPrimed::~ActorTNTPrimed(ActorTNTPrimed *this)
{
  ActorTNTPrimed::~ActorTNTPrimed(this);
  operator delete(this);
}


//======================================================================
// ActorTNTPrimed::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x002CCAE2   size: 0x1C (28 bytes)
//======================================================================
void *__fastcall ActorTNTPrimed::onCull(Ogre::MovableObject ***this, Ogre::GameScene **a2, Ogre::CullFrustum *a3)
{
  void *v4; // [sp+0h] [bp-Ch]

  Ogre::CullResult::addRenderable((Ogre::CullResult *)a2, a2[137], *(this + 45), 2, nullptr);
  return v4;
}


//======================================================================
// ActorTNTPrimed::tick(void)
// address: 0x002CCB00   size: 0xD6 (214 bytes)
//======================================================================
char *__fastcall ActorTNTPrimed::tick(ActorTNTPrimed *this)
{
  int *v2; // r5
  int v3; // r3
  EffectParticle *v4; // r6
  BlockMesh **v5; // r4
  BlockMesh *v6; // r4
  Ogre::Texture *Texture; // r1
  BlockMesh *v8; // r0
  World *v10; // r7
  EffectManager *v11; // [sp+Ch] [bp-20h]
  _DWORD v12[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v13[4]; // [sp+1Ch] [bp-10h] BYREF

  v2 = (int *)((char *)this + 172);
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 17) + 8))(*((_DWORD *)this + 17));
  v3 = *v2 - 1;
  *v2 = v3;
  if ( v3 <= 0 && *((int *)this + 6) < 0 )
  {
    ClientActor::setNeedClear(this, 0);
    v10 = *((World **)this + 13);
    ClientActor::getPosition((ClientActor *)v13);
    World::createExplosion(v10, this, (const WCoord *)v13, 4, false, true);
  }
  else if ( *((_BYTE *)this + 184) == 0 )
  {
    *((_BYTE *)this + 184) = 1;
    ClientActor::getPosition((ClientActor *)v13);
    v12[2] = v13[2];
    v12[0] = v13[0];
    v12[1] = v13[1] + 50;
    v11 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
    v4 = (EffectParticle *)operator new(0x14u);
    EffectParticle::EffectParticle(
      v4,
      *((World **)this + 13),
      (Ogre::FixedString *)"particles/1020.ent",
      (const WCoord *)v12,
      *v2);
    EffectManager::addEffect(v11, v4);
  }
  v5 = (BlockMesh **)((char *)this + 180);
  if ( ((((unsigned int)*v2 >> 31) + *v2) & 2) != 0 )
  {
    v8 = *v5;
    Texture = nullptr;
  }
  else
  {
    v6 = *v5;
    Texture = (Ogre::Texture *)BlockTexElement::getTexture((BlockTexElement *)BlockTNT::m_ExplodeTex, 0);
    v8 = v6;
  }
  return BlockMesh::setReplaceTex(v8, Texture);
}


//======================================================================
// ActorTNTPrimed::update(float)
// address: 0x002CCC14   size: 0xE6 (230 bytes)
//======================================================================
int __fastcall ActorTNTPrimed::update(ActorTNTPrimed *this, float a2)
{
  _DWORD *v3; // r6
  int v4; // r4
  int v5; // r7
  _DWORD *v6; // r5
  float v8; // [sp+4h] [bp-18h]
  int v10; // [sp+14h] [bp-8h]

  v3 = (_DWORD *)((char *)this + 180);
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
// ActorTNTPrimed::load(void const*)
// address: 0x002CCD08   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ActorTNTPrimed::load(ActorTNTPrimed *this, char *a2)
{
  char *v4; // r3
  int v5; // r3
  char *v6; // r1
  flatbuffers::Table *v7; // r1
  char *v8; // r2
  int v9; // r3
  int v10; // r2

  v4 = &a2[-*(_DWORD *)a2];
  if ( *(unsigned __int16 *)v4 > 4u && (v5 = *((unsigned __int16 *)v4 + 2), v6 = &a2[v5], v5 != 0) )
    v7 = (flatbuffers::Table *)&v6[*(_DWORD *)v6];
  else
    v7 = nullptr;
  ClientActor::loadActorCommon((int)this, v7);
  v8 = &a2[-*(_DWORD *)a2];
  v9 = 0;
  if ( *(unsigned __int16 *)v8 > 6u )
  {
    v10 = *((unsigned __int16 *)v8 + 3);
    if ( v10 != 0 )
      v9 = *(_DWORD *)&a2[v10];
  }
  *((_DWORD *)this + 43) = v9;
  return 1;
}


//======================================================================
// ActorTNTPrimed::ActorTNTPrimed(void)
// address: 0x002CCD70   size: 0x46 (70 bytes)
//======================================================================
// Alternative name is '_ZN14ActorTNTPrimedC1Ev'
void __fastcall ActorTNTPrimed::ActorTNTPrimed(ActorTNTPrimed *this)
{
  TNTPrimedLocoMotion *v2; // r5
  float v3; // r3

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_45FAC0;
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 184) = 0;
  *((_DWORD *)this + 43) = 80;
  v2 = (TNTPrimedLocoMotion *)operator new(0x94u);
  TNTPrimedLocoMotion::TNTPrimedLocoMotion(v2, this);
  *((_DWORD *)this + 17) = v2;
  *((_DWORD *)this + 45) = ClientItem::createItemModel(
                             (ClientItem *)((char *)&stru_338.st_size + 2),
                             nullptr,
                             (const char *)0x40A00000,
                             v3);
}


//======================================================================
// ActorTNTPrimed::ActorTNTPrimed(WCoord const&,ClientActor *)
// address: 0x002CCDD4   size: 0xAA (170 bytes)
//======================================================================
// Alternative name is '_ZN14ActorTNTPrimedC1ERK6WCoordP11ClientActor'
void __fastcall ActorTNTPrimed::ActorTNTPrimed(ActorTNTPrimed *this, const WCoord *a2, ClientActor *a3)
{
  TNTPrimedLocoMotion *v6; // r4
  double v7; // r4
  float v8; // r0
  float v9; // r0

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_45FAC0;
  *((_DWORD *)this + 44) = a3;
  *((_DWORD *)this + 43) = 80;
  *((_BYTE *)this + 184) = 0;
  v6 = (TNTPrimedLocoMotion *)operator new(0x94u);
  TNTPrimedLocoMotion::TNTPrimedLocoMotion(v6, this);
  *((_DWORD *)this + 17) = v6;
  (*(void (__fastcall **)(TNTPrimedLocoMotion *, const WCoord *, _DWORD, _DWORD))(*(_DWORD *)v6 + 16))(v6, a2, 0, 0);
  v7 = (float)((float)(GenRandomFloat() * 360.0) * 0.017453);
  v8 = j_sin(v7);
  *(float *)(*((_DWORD *)this + 17) + 72) = COERCE_FLOAT(LODWORD(v8) + 0x80000000)
                                          + COERCE_FLOAT(LODWORD(v8) + 0x80000000);
  *(_DWORD *)(*((_DWORD *)this + 17) + 76) = 1101004800;
  v9 = j_cos(v7);
  *(float *)(*((_DWORD *)this + 17) + 80) = COERCE_FLOAT(LODWORD(v9) + 0x80000000)
                                          + COERCE_FLOAT(LODWORD(v9) + 0x80000000);
  *((_DWORD *)this + 45) = ClientItem::createItemModel(
                             (ClientItem *)((char *)&stru_338.st_size + 2),
                             nullptr,
                             (const char *)0x40A00000,
                             -0.0);
}


//======================================================================
// ActorTNTPrimed::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002CCF06   size: 0x22 (34 bytes)
//======================================================================
int __fastcall ActorTNTPrimed::save(ActorTNTPrimed *this, flatbuffers::FlatBufferBuilder *a2)
{
  int v4; // r0
  int ActorTNT; // r0

  v4 = ClientActor::saveActorCommon(this, a2);
  ActorTNT = FBSave::CreateActorTNT(a2, v4, *((_DWORD *)this + 43));
  return FBSave::CreateSectionActor(a2, 5u, ActorTNT);
}

