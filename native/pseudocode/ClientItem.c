// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientItem

//======================================================================
// ClientItem::canAttackWithItem(void)
// address: 0x002BF8F0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientItem::canAttackWithItem(ClientItem *this)
{
  return 0;
}


//======================================================================
// ClientItem::getObjType(void)
// address: 0x002BF8F4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientItem::getObjType(ClientItem *this)
{
  return 2;
}


//======================================================================
// ClientItem::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x002BF8F8   size: 0x34 (52 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientItem::onCull(
        ClientItem *this,
        Ogre::GameScene **a2,
        Ogre::CullFrustum *a3)
{
  unsigned int i; // r4
  int v6; // r3

  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 56);
    if ( i >= (*((_DWORD *)this + 57) - v6) >> 2 )
      break;
    Ogre::CullResult::addRenderable((Ogre::CullResult *)a2, a2[137], *(Ogre::MovableObject ***)(4 * i + v6), 2, nullptr);
  }
}


//======================================================================
// ClientItem::update(float)
// address: 0x002BF95C   size: 0x176 (374 bytes)
//======================================================================
unsigned int __fastcall ClientItem::update(ClientItem *this, float a2)
{
  int v3; // r5
  float v4; // r0
  float v5; // r7
  float v6; // r6
  int *v7; // r0
  int v8; // r2
  int v9; // r1
  int v10; // r5
  int v11; // r3
  float v12; // r0
  int *v13; // r5
  int v14; // r3
  unsigned int result; // r0
  unsigned int i; // r5
  int v17; // r3
  int v18; // r7
  int v19; // r0
  float v20; // [sp+4h] [bp-20h]
  float v22; // [sp+Ch] [bp-18h]
  int v23; // [sp+10h] [bp-14h] BYREF
  int v24; // [sp+14h] [bp-10h]
  int v25; // [sp+18h] [bp-Ch]
  int v26; // [sp+1Ch] [bp-8h]

  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 17) + 12))(*((_DWORD *)this + 17));
  v3 = *((_DWORD *)this + 17);
  v4 = *(float *)(v3 + 68) / 0.05;
  v22 = (float)*(int *)(v3 + 56) + (float)((float)((float)*(int *)(v3 + 32) - (float)*(int *)(v3 + 56)) * v4);
  v5 = (float)*(int *)(v3 + 60) + (float)((float)((float)*(int *)(v3 + 36) - (float)*(int *)(v3 + 60)) * v4);
  v20 = (float)*(int *)(v3 + 64) + (float)((float)((float)*(int *)(v3 + 40) - (float)*(int *)(v3 + 64)) * v4);
  if ( *((int *)this + 6) < 0 )
  {
    v6 = (float)((float)*((int *)this + 1) * 60.0) * 0.05;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 1065353216;
    Ogre::Quaternion::setAxisAngleY((Ogre::Quaternion *)&v23, v6);
    v7 = *((int **)this + 59);
    v8 = v23;
    v9 = v25;
    v10 = v26;
    v7[6] = v24;
    v11 = *v7;
    v7[5] = v8;
    v7[7] = v9;
    v7[8] = v10;
    (*(void (**)(void))(v11 + 64))();
    v12 = j_sin((float)(v6 * 0.017453));
    v5 = v5 + (float)((float)(v12 + 2.5) * 10.0);
  }
  v13 = *((int **)this + 59);
  v13[2] = (int)(float)(v22 * 10.0);
  v13[3] = (int)(float)(v5 * 10.0);
  v14 = *v13;
  v13[4] = (int)(float)(v20 * 10.0);
  (*(void (__fastcall **)(int *))(v14 + 64))(v13);
  result = (unsigned int)(float)(a2 * 1000.0);
  for ( i = 0; ; ++i )
  {
    v17 = *((_DWORD *)this + 56);
    if ( i >= (*((_DWORD *)this + 57) - v17) >> 2 )
      break;
    v18 = 4 * i;
    v19 = *(_DWORD *)(v17 + 4 * i);
    (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v19 + 40))(v19, (unsigned int)(float)(a2 * 1000.0));
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 56) + v18) + 68))(*(_DWORD *)(*((_DWORD *)this + 56) + v18));
  }
  return result;
}


//======================================================================
// ClientItem::load(void const*)
// address: 0x002BFAEC   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall ClientItem::load(ClientItem *this, flatbuffers::Table *a2)
{
  int OptionalFieldOffset; // r0
  flatbuffers::Table *v5; // r1
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r3
  int *v12; // r0
  int v13; // r7
  int i; // r6
  int v15; // r0
  int v16; // r0
  int v17; // r3

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
  v8 = flatbuffers::Table::GetOptionalFieldOffset(a2, 8u);
  v9 = 0;
  if ( v8 != 0 )
    v9 = *(_DWORD *)((char *)a2 + v8);
  v10 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xAu);
  v11 = 0;
  if ( v10 != 0 )
    v11 = *(_DWORD *)((char *)a2 + v10);
  SetBackPackGrid((ClientItem *)((char *)this + 172), v7, v9, v11, nullptr, 1, 0);
  v12 = (int *)flatbuffers::Table::GetOptionalFieldOffset(a2, 0xEu);
  if ( v12 != nullptr )
    v12 = (int *)((char *)v12 + (_DWORD)a2 + *(int *)((char *)v12 + (_DWORD)a2));
  v13 = *v12;
  *((_DWORD *)this + 50) = *v12;
  for ( i = 0; i < v13; ++i )
  {
    v15 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xEu);
    if ( v15 != 0 )
      v15 += (int)a2 + *(_DWORD *)((char *)a2 + v15);
    *((_DWORD *)this + i + 51) = *(_DWORD *)(v15 + 4 * i + 4);
  }
  v16 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xCu);
  v17 = 0;
  if ( v16 != 0 )
    v17 = *(_DWORD *)((char *)a2 + v16);
  *((_DWORD *)this + 60) = v17;
  return 1;
}


//======================================================================
// ClientItem::getItemID(void)
// address: 0x002BFBE8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ClientItem::getItemID(ClientItem *this)
{
  return **((_DWORD **)this + 44);
}


//======================================================================
// ClientItem::getItemNum(void)
// address: 0x002BFBF0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientItem::getItemNum(ClientItem *this)
{
  return *((_DWORD *)this + 45);
}


//======================================================================
// ClientItem::onCollideWithPlayer(ClientPlayer *)
// address: 0x002BFBF6   size: 0xF6 (246 bytes)
//======================================================================
int __fastcall ClientItem::onCollideWithPlayer(int this, ClientPlayer *a2)
{
  int v2; // r4
  int ItemID; // r6
  int ItemNum; // r0
  _DWORD *v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r6
  int v11; // r0
  BackPack *BackPack; // [sp+18h] [bp-24h]
  BackPack *v13; // [sp+18h] [bp-24h]
  ClientActorMgr *v14; // [sp+1Ch] [bp-20h]
  _DWORD v15[4]; // [sp+2Ch] [bp-10h] BYREF

  v2 = this;
  if ( *(int *)(this + 240) <= 0 )
  {
    if ( World::isCreativeMode(*(World **)(this + 52)) != 0 )
    {
      (*(void (__fastcall **)(ClientPlayer *, int))(*(_DWORD *)a2 + 212))(a2, v2);
      return ClientActor::setNeedClear((ClientActor *)v2, 10);
    }
    else
    {
      BackPack = (BackPack *)ClientPlayer::getBackPack(a2);
      ItemID = ClientItem::getItemID((ClientItem *)v2);
      ItemNum = ClientItem::getItemNum((ClientItem *)v2);
      this = BackPack::addItemWithPickUp(
               BackPack,
               ItemID,
               ItemNum,
               *(_DWORD *)(v2 + 184),
               *(_DWORD *)(v2 + 200),
               (int *)(v2 + 204));
      v13 = (BackPack *)this;
      if ( this != 0 )
      {
        (*(void (__fastcall **)(ClientPlayer *, int, int, _DWORD, int))(*(_DWORD *)a2 + 208))(
          a2,
          1,
          1,
          **(_DWORD **)(v2 + 176),
          this);
        (*(void (__fastcall **)(ClientPlayer *, int))(*(_DWORD *)a2 + 212))(a2, v2);
        ClientActor::setNeedClear((ClientActor *)v2, 10);
        this = ClientItem::getItemNum((ClientItem *)v2);
        if ( (int)v13 < this )
        {
          v14 = *(ClientActorMgr **)(*(_DWORD *)(v2 + 52) + 132);
          v6 = *(_DWORD **)(v2 + 68);
          v7 = v6[8];
          v8 = v6[9];
          v9 = v6[10];
          v15[0] = v7;
          v15[1] = v8;
          v15[2] = v9;
          v10 = **(_DWORD **)(v2 + 176);
          v11 = ClientItem::getItemNum((ClientItem *)v2);
          return ClientActorMgr::spawnItem(
                   v14,
                   (const WCoord *)v15,
                   v10,
                   v11 - (_DWORD)v13,
                   *(_DWORD *)(v2 + 184),
                   true,
                   *(_DWORD *)(v2 + 200),
                   (int *)(v2 + 204));
        }
      }
    }
  }
  return this;
}


//======================================================================
// ClientItem::clearRenderObjs(void)
// address: 0x002BFCEC   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall ClientItem::clearRenderObjs(_DWORD *this)
{
  _DWORD *v1; // r5
  unsigned int i; // r4
  int v3; // r3

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = v1[56];
    if ( i >= (v1[57] - v3) >> 2 )
      break;
    this = Ogre::BaseObject::release(*(_DWORD **)(4 * i + v3));
  }
  v1[57] = v3;
  return this;
}


//======================================================================
// ClientItem::createItemModel(int,char const*,float)
// address: 0x002BFD14   size: 0x108 (264 bytes)
//======================================================================
BlockMesh *__fastcall ClientItem::createItemModel(ClientItem *this, const char *a2, const char *a3, float a4)
{
  int ItemDef; // r0
  BlockMesh *v8; // r5
  BlockMaterial *Material; // r5
  SectionMesh *BlockProtoMesh; // r7
  const char *v11; // r0
  float v12; // r1
  Ogre::FixedString *v13; // r7
  unsigned int v15; // [sp+0h] [bp-11Ch]
  float v16[3]; // [sp+8h] [bp-114h] BYREF
  char s[256]; // [sp+14h] [bp-108h] BYREF

  ItemDef = DefManager::getItemDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, (int)this);
  if ( a2 == nullptr )
    a2 = (const char *)(ItemDef + 304);
  if ( *a2 != 0 || (int)this > 999 )
  {
    j_sprintf(s, "items/%s.png", a2);
    v8 = (BlockMesh *)operator new(0x130u);
    ImageMesh::ImageMesh((int)v8, (Ogre::FixedString *)s, 0xFFFFFFFF);
LABEL_9:
    v11 = a3;
    v12 = 0.03125;
    goto LABEL_10;
  }
  Material = (BlockMaterial *)BlockMaterialMgr::getMaterial(
                                (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                (int)this);
  BlockProtoMesh = (SectionMesh *)BlockMaterial::getBlockProtoMesh(Material);
  if ( BlockProtoMesh == nullptr )
  {
    v13 = *(Ogre::FixedString **)(*((_DWORD *)Material + 2) + 8);
    v15 = *((_DWORD *)Material + 7);
    v8 = (BlockMesh *)operator new(0x130u);
    ImageMesh::ImageMesh((int)v8, v13, v15);
    goto LABEL_9;
  }
  v8 = (BlockMesh *)operator new(0x144u);
  BlockMesh::BlockMesh(v8, BlockProtoMesh);
  v16[0] = 50.0;
  v16[1] = 0.0;
  v16[2] = 50.0;
  BlockMesh::setCenter(v8, (const Ogre::Vector3 *)v16);
  v16[0] = 1.0;
  v16[1] = -1.0;
  v16[2] = 1.0;
  BlockMesh::setLightDir(v8, (const Ogre::Vector3 *)v16);
  v11 = a3;
  v12 = 0.2;
LABEL_10:
  v16[0] = *(float *)&v11 * v12;
  v16[1] = *(float *)&v11 * v12;
  v16[2] = *(float *)&v11 * v12;
  Ogre::MovableObject::setScale((int *)v8, (int *)v16);
  return v8;
}


//======================================================================
// ClientItem::getItemArmorPosition(void)
// address: 0x002BFE3C   size: 0x4E (78 bytes)
//======================================================================
int __fastcall ClientItem::getItemArmorPosition(ClientItem *this)
{
  char *ToolDef; // r0
  int v2; // r3
  int result; // r0

  ToolDef = DefManager::getToolDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, **((_DWORD **)this + 44));
  if ( ToolDef == nullptr )
    return 6;
  v2 = *((_DWORD *)ToolDef + 9);
  if ( v2 == 8 )
    return 0;
  if ( v2 == 9 )
    return 1;
  result = 2;
  if ( v2 != 10 )
  {
    result = 3;
    if ( v2 != 11 )
    {
      result = 4;
      if ( v2 != 16 )
        return 6 - (v2 == 6);
    }
  }
  return result;
}


//======================================================================
// ClientItem::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002BFE90   size: 0x112 (274 bytes)
//======================================================================
int __fastcall ClientItem::save(ClientItem *this, flatbuffers::FlatBufferBuilder *a2)
{
  unsigned int v4; // r0
  int v5; // r7
  int v6; // r0
  int v7; // r0
  int v8; // r3
  unsigned int v9; // r7
  int v10; // r3
  int v11; // r5
  __int16 v12; // r6
  unsigned int v13; // r0
  unsigned int v14; // r0
  int v15; // r0
  int i; // [sp+4h] [bp-18h]
  int v18; // [sp+8h] [bp-14h]
  unsigned int v19; // [sp+Ch] [bp-10h]
  int v20; // [sp+10h] [bp-Ch]
  int v21; // [sp+14h] [bp-8h]

  v4 = ClientActor::saveActorCommon(this, a2);
  v5 = *((_DWORD *)this + 50);
  v19 = v4;
  v6 = flatbuffers::vector_downward::size((flatbuffers::FlatBufferBuilder *)((char *)a2 + 4));
  flatbuffers::vector_downward::fill((const void **)a2 + 1, -(v6 + 4 * v5) & 3);
  v7 = flatbuffers::vector_downward::size((flatbuffers::FlatBufferBuilder *)((char *)a2 + 4));
  flatbuffers::vector_downward::fill((const void **)a2 + 1, -(v7 + 4 * v5) & 3);
  for ( i = v5; i != 0; --i )
  {
    v8 = 4 * (i - 1);
    flatbuffers::FlatBufferBuilder::PushElement<int>(a2, *(_DWORD *)((char *)this + v8 + 204));
  }
  v9 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>(a2, v5);
  v18 = **((_DWORD **)this + 44);
  v20 = *((_DWORD *)this + 45);
  v10 = *((_DWORD *)this + 46);
  v11 = *((_DWORD *)this + 60);
  v21 = v10;
  v12 = flatbuffers::vector_downward::size((flatbuffers::FlatBufferBuilder *)((char *)a2 + 4));
  if ( v9 != 0 )
  {
    v13 = flatbuffers::FlatBufferBuilder::ReferTo(a2, v9);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>(a2, 0xEu, v13, 0);
  }
  flatbuffers::FlatBufferBuilder::AddElement<int>(a2, 0xCu, v11, 0);
  flatbuffers::FlatBufferBuilder::AddElement<int>(a2, 0xAu, v21, 0);
  flatbuffers::FlatBufferBuilder::AddElement<int>(a2, 8u, v20, 0);
  flatbuffers::FlatBufferBuilder::AddElement<int>(a2, 6u, v18, 0);
  if ( v19 != 0 )
  {
    v14 = flatbuffers::FlatBufferBuilder::ReferTo(a2, v19);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>(a2, 4u, v14, 0);
  }
  v15 = flatbuffers::FlatBufferBuilder::EndTable((char **)a2, v12, 6);
  return FBSave::CreateSectionActor(a2, 3u, v15);
}


//======================================================================
// ClientItem::~ClientItem()
// address: 0x002BFFB4   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN10ClientItemD1Ev'
void __fastcall ClientItem::~ClientItem(ClientItem *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0

  v1 = (_DWORD *)((char *)this + 236);
  *(_DWORD *)this = &off_45F208;
  v3 = *((_DWORD **)this + 59);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *v1 = 0;
  }
  ClientItem::clearRenderObjs(this);
  std::_Vector_base<BaseItemMesh *>::~_Vector_base((void **)this + 56);
  ClientActor::~ClientActor(this);
}


//======================================================================
// ClientItem::~ClientItem()
// address: 0x002BFFF0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ClientItem::~ClientItem(ClientItem *this)
{
  ClientItem::~ClientItem(this);
  operator delete(this);
}


//======================================================================
// ClientItem::ClientItem(void)
// address: 0x002C0004   size: 0x6E (110 bytes)
//======================================================================
// Alternative name is '_ZN10ClientItemC2Ev'
void __fastcall ClientItem::ClientItem(ClientItem *this)
{
  Ogre::MovableObject *v2; // r6
  ItemLocoMotion *v3; // r6
  int v4; // r6

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_45F208;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  SetBackPackGrid((ClientItem *)((char *)this + 172), 0, 0, -1, nullptr, 1, 0);
  v2 = (Ogre::MovableObject *)operator new(0xD4u);
  Ogre::MovableObject::MovableObject(v2);
  *((_DWORD *)this + 59) = v2;
  v3 = (ItemLocoMotion *)operator new(0x94u);
  ItemLocoMotion::ItemLocoMotion(v3, this);
  *((_DWORD *)this + 17) = v3;
  v4 = operator new(0x20u);
  ActorAttrib::ActorAttrib(v4, (int)this);
  *((_DWORD *)this + 19) = v4;
  *(_DWORD *)(v4 + 8) = 1084227584;
}


//======================================================================
// ClientItem::ClientItem(int,int,int,int,int *)
// address: 0x002C0098   size: 0x9A (154 bytes)
//======================================================================
// Alternative name is '_ZN10ClientItemC1EiiiiPi'
void __fastcall ClientItem::ClientItem(ClientItem *this, int a2, int a3, int a4, int a5, int *a6)
{
  int i; // r3
  int v9; // r2
  Ogre::MovableObject *v10; // r7
  ItemLocoMotion *v11; // r6
  int v12; // r6

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_45F208;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 0;
  SetBackPackGrid((ClientItem *)((char *)this + 172), a2, a3, a4, nullptr, 1, 0);
  *((_DWORD *)this + 50) = a5;
  for ( i = 0; i < a5; ++i )
  {
    v9 = i;
    *(_DWORD *)((char *)this + v9 * 4 + 204) = a6[v9];
  }
  v10 = (Ogre::MovableObject *)operator new(0xD4u);
  Ogre::MovableObject::MovableObject(v10);
  *((_DWORD *)this + 59) = v10;
  v11 = (ItemLocoMotion *)operator new(0x94u);
  ItemLocoMotion::ItemLocoMotion(v11, this);
  *((_DWORD *)this + 17) = v11;
  v12 = operator new(0x20u);
  ActorAttrib::ActorAttrib(v12, (int)this);
  *((_DWORD *)this + 19) = v12;
  *(_DWORD *)(v12 + 8) = 1084227584;
}


//======================================================================
// ClientItem::createRenderObjs(void)
// address: 0x002C01D8   size: 0x16E (366 bytes)
//======================================================================
int __fastcall ClientItem::createRenderObjs(Ogre::MovableObject **this)
{
  int ItemNum; // r0
  int v2; // r7
  int v3; // r5
  int v4; // r6
  ClientItem *ItemID; // r0
  float v6; // r3
  Ogre::MovableObject *v7; // r3
  float v8; // r4
  float *v9; // r5
  float v10; // r6
  float v11; // r0
  float *v12; // r4
  int v13; // r6
  int v14; // r2
  int *v15; // r5
  int v16; // r3
  int result; // r0
  int v18; // [sp+0h] [bp-24h]
  float v19; // [sp+0h] [bp-24h]
  float v20; // [sp+4h] [bp-20h]
  float v21; // [sp+4h] [bp-20h]
  int v23; // [sp+Ch] [bp-18h]
  float v24; // [sp+10h] [bp-14h]
  int v25; // [sp+14h] [bp-10h]
  Ogre::MovableObject *ItemModel; // [sp+1Ch] [bp-8h] BYREF

  ItemNum = ClientItem::getItemNum((ClientItem *)this);
  v2 = ItemNum;
  if ( ItemNum != 1 )
  {
    if ( ItemNum <= 5 )
    {
      v2 = 2;
    }
    else if ( ItemNum <= 20 )
    {
      v2 = 3;
    }
    else if ( ItemNum > 42 )
    {
      v2 = 5;
    }
    else
    {
      v2 = 4;
    }
  }
  v3 = 0;
  v4 = v2 - ((*(this + 57) - *(this + 56)) >> 2);
  while ( v3 < v4 )
  {
    ItemID = (ClientItem *)ClientItem::getItemID((ClientItem *)this);
    ItemModel = ClientItem::createItemModel(ItemID, nullptr, (const char *)0x3F800000, v6);
    Ogre::MovableObject::setSRTFather(ItemModel, *(this + 59), 0);
    if ( (int)*(this + 50) > 0 )
      (*(void (__fastcall **)(Ogre::MovableObject *, _DWORD))(*(_DWORD *)ItemModel + 100))(ItemModel, 0);
    v7 = *(this + 57);
    if ( v7 == *(this + 58) )
    {
      std::vector<BaseItemMesh *>::_M_emplace_back_aux<BaseItemMesh * const&>((int)(this + 56), &ItemModel);
    }
    else
    {
      if ( v7 != nullptr )
        *(_DWORD *)v7 = ItemModel;
      *(this + 57) = (Ogre::MovableObject *)((char *)*(this + 57) + 4);
    }
    ++v3;
  }
  v8 = 0.0;
  v9 = (float *)&dword_5164E8;
  v20 = 0.0;
  v10 = 0.0;
  v18 = 0;
  do
  {
    v10 = v10 + *v9;
    v20 = v20 + v9[1];
    v8 = v8 + v9[2];
    v9 += 3;
    ++v18;
  }
  while ( v18 < v2 );
  v19 = v10 / (float)v2;
  v21 = v20 / (float)v2;
  v11 = v8 / (float)v2;
  v12 = (float *)&dword_5164E8;
  v24 = v11;
  v13 = 0;
  do
  {
    v14 = 4 * v13++;
    v15 = *(int **)((char *)*(this + 56) + v14);
    v23 = (int)(float)((float)((float)(v12[1] - v21) * 0.2) * 10.0);
    v25 = (int)(float)((float)((float)(v12[2] - v24) * 0.2) * 10.0);
    v15[2] = (int)(float)((float)((float)(*v12 - v19) * 0.2) * 10.0);
    v15[4] = v25;
    v16 = *v15;
    v15[3] = v23;
    result = (*(int (__fastcall **)(int *))(v16 + 64))(v15);
    v12 += 3;
  }
  while ( v13 < v2 );
  return result;
}


//======================================================================
// ClientItem::mergeItem(ClientItem*)
// address: 0x002C0354   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall ClientItem::mergeItem(ClientItem *this, ClientItem *a2)
{
  int ItemID; // r6
  int ItemNum; // r6
  int v7; // r6
  ClientItem *v8; // r3
  int v9; // r2
  int v10; // r3

  while ( 1 )
  {
    if ( *((int *)this + 6) >= 0 )
      return 0;
    if ( *((int *)a2 + 6) >= 0 )
      return 0;
    ItemID = ClientItem::getItemID(this);
    if ( ItemID != ClientItem::getItemID(a2) )
      return 0;
    ItemNum = ClientItem::getItemNum(this);
    if ( ItemNum + ClientItem::getItemNum(a2) > *(_DWORD *)(*((_DWORD *)this + 44) + 440) )
      return 0;
    v7 = ClientItem::getItemNum(this);
    if ( v7 >= ClientItem::getItemNum(a2) )
      break;
    v8 = a2;
    a2 = this;
    this = v8;
  }
  *((_DWORD *)this + 45) += *((_DWORD *)a2 + 45);
  v9 = *((_DWORD *)a2 + 60);
  if ( v9 > *((_DWORD *)this + 60) )
    *((_DWORD *)this + 60) = v9;
  v10 = *((_DWORD *)a2 + 1);
  if ( v10 < *((_DWORD *)this + 1) )
    *((_DWORD *)this + 1) = v10;
  ClientActor::setNeedClear(a2, 0);
  ClientItem::createRenderObjs((Ogre::MovableObject **)this);
  return 1;
}


//======================================================================
// ClientItem::searchForOtherItemsNearby(void)
// address: 0x002C03F4   size: 0x7A (122 bytes)
//======================================================================
void __fastcall ClientItem::searchForOtherItemsNearby(ClientItem *this)
{
  ActorLocoMotion *v2; // r0
  int v3; // r0
  unsigned int i; // r4
  ClientItem *v5; // r1
  void *v6; // [sp+4h] [bp-24h] BYREF
  int v7; // [sp+8h] [bp-20h]
  int v8; // [sp+Ch] [bp-1Ch]
  _DWORD v9[2]; // [sp+10h] [bp-18h] BYREF
  int v10; // [sp+18h] [bp-10h]
  int v11; // [sp+1Ch] [bp-Ch]
  int v12; // [sp+24h] [bp-4h]

  v2 = *((ActorLocoMotion **)this + 17);
  v6 = nullptr;
  v7 = 0;
  v8 = 0;
  ActorLocoMotion::getCollideBox(v2, (CollideAABB *)v9);
  v3 = *((_DWORD *)this + 13);
  v9[0] -= 50;
  v10 -= 50;
  v11 += 100;
  v12 += 100;
  World::getActorsOfTypeInBox(v3, &v6, v9, 2);
  for ( i = 0; i < (v7 - (int)v6) >> 2; ++i )
  {
    v5 = *((ClientItem **)v6 + i);
    if ( v5 != this )
      ClientItem::mergeItem(this, v5);
  }
  if ( v6 != nullptr )
    operator delete(v6);
}


//======================================================================
// ClientItem::enterWorld(World *)
// address: 0x002C05F4   size: 0x20 (32 bytes)
//======================================================================
int __fastcall ClientItem::enterWorld(ClientItem *this, World *a2)
{
  int v3; // r3

  ClientActor::enterWorld(this, a2);
  *((_DWORD *)this + 60) = 10;
  v3 = *((_DWORD *)this + 17);
  *(_DWORD *)(v3 + 24) = 25;
  *(_DWORD *)(v3 + 20) = 25;
  return ClientItem::createRenderObjs((Ogre::MovableObject **)this);
}


//======================================================================
// ClientItem::leaveWorld(bool)
// address: 0x002C0614   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ClientItem::leaveWorld(ClientItem *this, bool a2)
{
  return ClientActor::leaveWorld(this, a2);
}


//======================================================================
// ClientItem::tick(void)
// address: 0x002C061C   size: 0xEA (234 bytes)
//======================================================================
bool __fastcall ClientItem::tick(ClientItem *this)
{
  int v2; // r2
  int v3; // r6
  void (__fastcall *v4)(float *, int, float *); // r7
  int v5; // r7
  float v6; // r7
  _BOOL4 result; // r0
  unsigned int v8; // r2
  _DWORD *v9; // r4
  _DWORD *v10; // r3
  float v11; // [sp+8h] [bp-4Ch]
  float v12; // [sp+8h] [bp-4Ch]
  float v13; // [sp+Ch] [bp-48h]
  float v14; // [sp+10h] [bp-44h]
  void (__fastcall *v15)(float *, int); // [sp+14h] [bp-40h]
  float v16; // [sp+14h] [bp-40h]
  _DWORD v17[6]; // [sp+18h] [bp-3Ch] BYREF
  float v18; // [sp+30h] [bp-24h] BYREF
  float v19; // [sp+34h] [bp-20h]
  float v20; // [sp+38h] [bp-1Ch]
  int v21; // [sp+3Ch] [bp-18h]
  float v22[5]; // [sp+40h] [bp-14h] BYREF

  ClientActor::tick(this);
  v2 = *((_DWORD *)this + 60);
  if ( v2 > 0 )
    *((_DWORD *)this + 60) = v2 - 1;
  if ( *((int *)this + 1) > 5999 )
    ClientActor::setNeedClear(this, 0);
  v3 = *(_DWORD *)(*((_DWORD *)this + 13) + 28);
  v4 = *(void (__fastcall **)(float *, int, float *))(*(_DWORD *)v3 + 16);
  ClientActor::getPosition((ClientActor *)v22);
  v4(&v18, v3, v22);
  v5 = *(_DWORD *)(*((_DWORD *)this + 13) + 28);
  v11 = v18;
  v13 = v19;
  v14 = v20;
  v15 = *(void (__fastcall **)(float *, int))(*(_DWORD *)v5 + 16);
  ClientActor::getPosition((ClientActor *)v17);
  v17[3] = v17[0];
  v17[4] = v17[1] + 20;
  v17[5] = v17[2];
  v15(v22, v5);
  v16 = v22[0];
  if ( v11 >= v22[0] )
    v16 = v11;
  v6 = v22[1];
  if ( v13 >= v22[1] )
    v6 = v13;
  v12 = v22[2];
  result = v14 < v22[2];
  if ( v14 >= v22[2] )
    v12 = v14;
  v8 = 0;
  v9 = (_DWORD *)((char *)this + 224);
  while ( v8 < (v9[1] - *v9) >> 2 )
  {
    v10 = (_DWORD *)(*(_DWORD *)(4 * v8 + *v9) + 17);
    v18 = v16;
    v19 = v6;
    v20 = v12;
    v10 = (_DWORD *)((char *)v10 + 255);
    result = LODWORD(v16);
    *(float *)v10 = v16;
    *((float *)v10 + 1) = v6;
    *((float *)v10 + 2) = v12;
    ++v8;
    v10[3] = v21;
  }
  return result;
}

