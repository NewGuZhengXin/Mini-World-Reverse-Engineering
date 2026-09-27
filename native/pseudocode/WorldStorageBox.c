// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldStorageBox

//======================================================================
// WorldStorageBox::getObjType(void)
// address: 0x002F8EF0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall WorldStorageBox::getObjType(WorldStorageBox *this)
{
  return 1;
}


//======================================================================
// WorldStorageBox::~WorldStorageBox()
// address: 0x002F8F30   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15WorldStorageBoxD1Ev'
void __fastcall WorldStorageBox::~WorldStorageBox(WorldStorageBox *this)
{
  *(_DWORD *)this = &off_45C248;
}


//======================================================================
// WorldStorageBox::index2Grid(int)
// address: 0x002F8F40   size: 0x24 (36 bytes)
//======================================================================
char *__fastcall WorldStorageBox::index2Grid(WorldStorageBox *this, int a2)
{
  int v2; // r3

  if ( a2 - 3000 > 29 )
  {
    this = *((WorldStorageBox **)this + 402);
    v2 = 52 * (a2 - 3030) + 48;
  }
  else
  {
    v2 = 52 * (a2 - 3000) + 48;
  }
  return (char *)this + v2;
}


//======================================================================
// WorldStorageBox::canPutItem(int)
// address: 0x002F8F6C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall WorldStorageBox::canPutItem(WorldStorageBox *this, int a2)
{
  return 1;
}


//======================================================================
// WorldStorageBox::~WorldStorageBox()
// address: 0x002F8FBE   size: 0x12 (18 bytes)
//======================================================================
void __fastcall WorldStorageBox::~WorldStorageBox(WorldStorageBox *this)
{
  WorldStorageBox::~WorldStorageBox(this);
  operator delete(this);
}


//======================================================================
// WorldStorageBox::onAttachUI(void)
// address: 0x002F9000   size: 0x42 (66 bytes)
//======================================================================
int __fastcall WorldStorageBox::onAttachUI(WorldStorageBox *this)
{
  int v1; // r5
  int result; // r0
  int v4; // r3

  v1 = 3000;
  *((_BYTE *)this + 8) = 1;
  do
    result = GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, v1++);
  while ( v1 != 3030 );
  v4 = *((_DWORD *)this + 402);
  if ( v4 != 0 )
  {
    *(_BYTE *)(v4 + 8) = 1;
    do
      result = GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, v1++);
    while ( v1 != 3060 );
  }
  return result;
}


//======================================================================
// WorldStorageBox::onDetachUI(void)
// address: 0x002F90E8   size: 0x24 (36 bytes)
//======================================================================
__int64 __fastcall WorldStorageBox::onDetachUI(__int64 this, int a2, int a3)
{
  int v3; // r4
  __int64 result; // r0
  int v5; // r2

  v3 = this;
  *(_BYTE *)(this + 8) = 0;
  LODWORD(this) = this + 16;
  result = sub_2F9090(this, a2, a3);
  v5 = *(_DWORD *)(v3 + 1608);
  if ( v5 != 0 )
  {
    *(_BYTE *)(v5 + 8) = 0;
    LODWORD(result) = *(_DWORD *)(v3 + 1608) + 16;
    return sub_2F9090(result, v5, 1608);
  }
  return result;
}


//======================================================================
// WorldStorageBox::afterChangeGrid(int)
// address: 0x002F910C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall WorldStorageBox::afterChangeGrid(int this, int a2)
{
  _BYTE *v2; // r4

  if ( *(_BYTE *)(this + 8) != 0 )
  {
    v2 = (_BYTE *)(this + 40);
    this = GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, a2);
    *v2 = 1;
  }
  return this;
}


//======================================================================
// WorldStorageBox::dropItems(void)
// address: 0x002F93DE   size: 0x1E (30 bytes)
//======================================================================
float __fastcall WorldStorageBox::dropItems(WorldStorageBox *this)
{
  BackPackGrid *v2; // r4
  BackPackGrid *v3; // r6
  BackPackGrid *v4; // r1
  float result; // r0

  v2 = (WorldStorageBox *)((char *)this + 48);
  v3 = (WorldStorageBox *)((char *)this + 1608);
  do
  {
    v4 = v2;
    v2 = (BackPackGrid *)((char *)v2 + 52);
    result = WorldContainer::dropOneItem(*(float *)&this, v4);
  }
  while ( v2 != v3 );
  return result;
}


//======================================================================
// WorldStorageBox::WorldStorageBox(void)
// address: 0x002F9438   size: 0x62 (98 bytes)
//======================================================================
// Alternative name is '_ZN15WorldStorageBoxC2Ev'
void __fastcall WorldStorageBox::WorldStorageBox(WorldStorageBox *this)
{
  int v1; // r5
  BackPackGrid *v3; // r6

  *((_DWORD *)this + 1) = 3000;
  v1 = 0;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_BYTE *)this + 40) = 0;
  *(_DWORD *)this = &off_4628A8;
  *((_DWORD *)this + 402) = 0;
  *((_DWORD *)this + 403) = 0;
  v3 = (WorldStorageBox *)((char *)this + 48);
  do
  {
    *(_DWORD *)v3 = *((_DWORD *)this + 1) + v1;
    SetBackPackGrid(v3, 0, 0, -1, nullptr, 1, 0);
    ++v1;
    v3 = (BackPackGrid *)((char *)v3 + 52);
  }
  while ( v1 != 30 );
  *((_DWORD *)this + 11) = 0;
}


//======================================================================
// WorldStorageBox::WorldStorageBox(WCoord const&)
// address: 0x002F94B4   size: 0x76 (118 bytes)
//======================================================================
// Alternative name is '_ZN15WorldStorageBoxC2ERK6WCoord'
void __fastcall WorldStorageBox::WorldStorageBox(WorldStorageBox *this, const WCoord *a2)
{
  int v2; // r5
  BackPackGrid *v4; // r6

  *((_DWORD *)this + 1) = 3000;
  v2 = 0;
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_45C270;
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 2);
  *((_BYTE *)this + 40) = 0;
  v4 = (WorldStorageBox *)((char *)this + 48);
  *(_DWORD *)this = &off_4628A8;
  *((_DWORD *)this + 402) = 0;
  *((_DWORD *)this + 403) = 0;
  do
  {
    *(_DWORD *)v4 = *((_DWORD *)this + 1) + v2;
    SetBackPackGrid(v4, 0, 0, -1, nullptr, 1, 0);
    ++v2;
    v4 = (BackPackGrid *)((char *)v4 + 52);
  }
  while ( v2 != 30 );
  *((_DWORD *)this + 11) = 0;
}


//======================================================================
// WorldStorageBox::append(WorldStorageBox*)
// address: 0x002F9548   size: 0x1E (30 bytes)
//======================================================================
int __fastcall WorldStorageBox::append(int this, WorldStorageBox *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(this + 1608);
  if ( v2 != 0 )
    *(_DWORD *)(v2 + 1612) = 0;
  *(_DWORD *)(this + 1608) = a2;
  if ( a2 != nullptr )
    *((_DWORD *)a2 + 403) = this;
  return this;
}


//======================================================================
// WorldStorageBox::checkEmptyGrid(int)
// address: 0x002F956C   size: 0x48 (72 bytes)
//======================================================================
int __fastcall WorldStorageBox::checkEmptyGrid(WorldStorageBox *this, int a2)
{
  int v2; // r3
  _DWORD *v3; // r2
  int result; // r0
  int v5; // r3
  _DWORD *v6; // r2

  v2 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD **)((char *)this + v2 + 52);
    if ( v3 == nullptr )
      break;
    v2 += 52;
    if ( *v3 == a2 )
      break;
    if ( v2 == 1560 )
    {
      result = *((_DWORD *)this + 402);
      v5 = 0;
      if ( result == 0 )
        return result;
      while ( 1 )
      {
        v6 = *(_DWORD **)(result + v5 + 52);
        if ( v6 == nullptr )
          break;
        v5 += 52;
        if ( *v6 == a2 )
          break;
        if ( v5 == 1560 )
          return 0;
      }
      return 1;
    }
  }
  return 1;
}


//======================================================================
// WorldStorageBox::setItem(int,int,int)
// address: 0x002F95B4   size: 0x34 (52 bytes)
//======================================================================
int __fastcall WorldStorageBox::setItem(WorldStorageBox *this, int a2, int a3, int a4)
{
  BackPackGrid *v5; // r5

  v5 = (WorldStorageBox *)((char *)this + 52 * a2 + 48);
  SetBackPackGrid(v5, a3, a4, -1, nullptr, 1, 0);
  return (*(int (__fastcall **)(WorldStorageBox *, _DWORD))(*(_DWORD *)this + 12))(this, *(_DWORD *)v5);
}


//======================================================================
// WorldStorageBox::addItem(int,int,int,int,int *)
// address: 0x002F95E8   size: 0x208 (520 bytes)
//======================================================================
int __fastcall WorldStorageBox::addItem(WorldStorageBox *this, int a2, int a3, int a4, int a5, int *a6)
{
  char *v7; // r5
  char *v8; // r7
  _DWORD *v9; // r3
  int v10; // r6
  int v12; // r7
  BackPackGrid *i; // r5
  _DWORD *v14; // r5
  _DWORD *v15; // r3
  int v16; // r6
  int v17; // r6
  int v18; // r0
  int v19; // r3
  int v20; // r6
  BackPackGrid *v21; // r5
  int v22; // r7
  int v23; // r0
  int v24; // r3
  int v26; // [sp+24h] [bp-18h]
  BackPackGrid *v27; // [sp+28h] [bp-14h]

  v27 = (WorldStorageBox *)((char *)this + 48);
  v7 = (char *)this + 52;
  v8 = (char *)this + 1612;
  v26 = 0;
  while ( v7 != v8 )
  {
    v9 = *(_DWORD **)v7;
    if ( *(_DWORD *)v7 != 0 && *v9 == a2 )
    {
      v10 = v9[110] - *((_DWORD *)v7 + 1);
      if ( v10 > a3 )
      {
        v10 = a3;
      }
      else if ( WorldStorageBox::checkEmptyGrid(this, a2) == 0 )
      {
        return 0;
      }
      if ( v10 > 0 )
      {
        *((_DWORD *)v7 + 1) += v10;
        a3 -= v10;
        v26 += v10;
        (*(void (__fastcall **)(WorldStorageBox *, _DWORD))(*(_DWORD *)this + 12))(this, *((_DWORD *)v7 - 1));
        GameEventQue::postStorageboxUpdatePoint(
          (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
          *((_DWORD *)v7 - 1));
      }
      if ( a3 == 0 )
        return v26;
    }
    v7 += 52;
  }
  v12 = 0;
  if ( *((_DWORD *)this + 402) != 0 )
  {
    while ( 1 )
    {
      v14 = (_DWORD *)(*((_DWORD *)this + 402) + 52 * v12 + 48);
      v15 = (_DWORD *)v14[1];
      if ( v15 != nullptr && *v15 == a2 )
      {
        v16 = v15[110] - v14[2];
        if ( v16 > a3 )
        {
          v16 = a3;
        }
        else if ( WorldStorageBox::checkEmptyGrid(this, a2) == 0 )
        {
          return 0;
        }
        if ( v16 > 0 )
        {
          v14[2] += v16;
          v26 += v16;
          a3 -= v16;
          (*(void (__fastcall **)(WorldStorageBox *, _DWORD))(*(_DWORD *)this + 12))(this, *v14);
          GameEventQue::postStorageboxUpdatePoint(
            (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
            *v14 + 30);
        }
        if ( a3 == 0 )
          break;
      }
      if ( ++v12 == 30 )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    for ( i = v27; i != (WorldStorageBox *)((char *)this + 1608); i = (BackPackGrid *)((char *)i + 52) )
    {
      v17 = *((_DWORD *)i + 1);
      if ( v17 == 0 )
      {
        v18 = SetBackPackGrid(i, a2, a3, a4, nullptr, 1, 0);
        a3 -= v18;
        v26 += v18;
        *((_DWORD *)i + 7) = a5;
        while ( v17 < a5 )
        {
          v19 = v17++;
          *(_DWORD *)((char *)i + v19 * 4 + 32) = a6[v19];
        }
        (*(void (__fastcall **)(WorldStorageBox *, _DWORD))(*(_DWORD *)this + 12))(this, *(_DWORD *)i);
        GameEventQue::postStorageboxUpdatePoint(
          (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
          *(_DWORD *)i);
        if ( a3 == 0 )
          return v26;
      }
    }
    v20 = 0;
    if ( *((_DWORD *)this + 402) != 0 )
    {
      do
      {
        v21 = (BackPackGrid *)(*((_DWORD *)this + 402) + 52 * v20 + 48);
        v22 = *((_DWORD *)v21 + 1);
        if ( v22 == 0 )
        {
          v23 = SetBackPackGrid(v21, a2, a3, a4, nullptr, 1, 0);
          a3 -= v23;
          v26 += v23;
          *((_DWORD *)v21 + 7) = a5;
          while ( v22 < a5 )
          {
            v24 = v22++;
            *(_DWORD *)((char *)v21 + v24 * 4 + 32) = a6[v24];
          }
          (*(void (__fastcall **)(WorldStorageBox *, _DWORD))(*(_DWORD *)this + 12))(this, *(_DWORD *)v21);
          GameEventQue::postStorageboxUpdatePoint(
            (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
            *(_DWORD *)v21 + 30);
          if ( a3 == 0 )
            break;
        }
        ++v20;
      }
      while ( v20 != 30 );
    }
  }
  return v26;
}


//======================================================================
// WorldStorageBox::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002FA244   size: 0xF2 (242 bytes)
//======================================================================
int __fastcall WorldStorageBox::save(WorldStorageBox *this, const void **a2)
{
  int v3; // r0
  int v4; // r3
  int v5; // r7
  unsigned int v6; // r5
  char *v7; // r6
  unsigned int v8; // r7
  int v9; // r2
  unsigned int i; // r6
  unsigned int v11; // r5
  unsigned int v12; // r0
  int v13; // r0
  __int16 v15; // [sp+0h] [bp-B4h]
  unsigned int v17; // [sp+8h] [bp-ACh]
  _BYTE v18[152]; // [sp+14h] [bp-A0h] BYREF

  v3 = WorldContainer::saveContainerCommon(this, a2);
  v4 = 0;
  v17 = v3;
  do
  {
    *(_DWORD *)&v18[v4] = 0;
    v4 += 4;
  }
  while ( v4 != 120 );
  v5 = 0;
  v6 = 0;
  v7 = (char *)this + 48;
  do
  {
    if ( *((_DWORD *)v7 + 1) != 0 )
    {
      *(_DWORD *)&v18[4 * v6] = sub_2F9FC0((unsigned int)a2, (int)v7);
      v18[v6++ + 120] = v5;
    }
    ++v5;
    v7 += 52;
  }
  while ( v5 != 30 );
  v8 = flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<FBSave::ItemGrid>>(
         (flatbuffers::FlatBufferBuilder *)a2,
         (int)v18,
         v6);
  flatbuffers::FlatBufferBuilder::StartVector((flatbuffers::FlatBufferBuilder *)a2, v6, 1u);
  for ( i = v6;
        i != 0;
        flatbuffers::FlatBufferBuilder::PushElement<unsigned char>(
          (flatbuffers::FlatBufferBuilder *)a2,
          v18[i + 120],
          v9) )
  {
    --i;
  }
  v11 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a2, v6);
  v15 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a2 + 1));
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a2, 0xAu, *((_DWORD *)this + 11), 0);
  if ( v11 != 0 )
  {
    v12 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)a2, v11);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a2, 8u, v12, 0);
  }
  flatbuffers::FlatBufferBuilder::AddOffset<flatbuffers::Vector<flatbuffers::Offset<FBSave::ItemGrid>>>(
    (flatbuffers::FlatBufferBuilder *)a2,
    6u,
    v8);
  flatbuffers::FlatBufferBuilder::AddOffset<FBSave::ContainerCommon>((flatbuffers::FlatBufferBuilder *)a2, 4u, v17);
  v13 = flatbuffers::FlatBufferBuilder::EndTable((char **)a2, v15, 4);
  return FBSave::CreateChunkContainer(a2, 4u, v13);
}


//======================================================================
// WorldStorageBox::load(void const*)
// address: 0x002FA460   size: 0x82 (130 bytes)
//======================================================================
int __fastcall WorldStorageBox::load(WorldStorageBox *this, flatbuffers::Table *a2)
{
  flatbuffers::Table *v4; // r0
  int OptionalFieldOffset; // r0
  unsigned int *v6; // r7
  int v7; // r0
  _DWORD *v8; // r5
  unsigned int v9; // r3
  char *v11; // [sp+0h] [bp-Ch]
  char *v12; // [sp+4h] [bp-8h]

  v4 = (flatbuffers::Table *)flatbuffers::Table::GetPointer<FBSave::ContainerCommon const*>(a2, 4u);
  WorldContainer::loadContainerCommon(this, v4);
  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a2, 6u);
  if ( OptionalFieldOffset != 0 )
    v6 = (unsigned int *)((char *)a2 + OptionalFieldOffset + *(_DWORD *)((char *)a2 + OptionalFieldOffset));
  else
    v6 = nullptr;
  v7 = flatbuffers::Table::GetOptionalFieldOffset(a2, 8u);
  if ( v7 != 0 )
    v12 = (char *)a2 + v7 + *(_DWORD *)((char *)a2 + v7);
  else
    v12 = nullptr;
  v8 = v6 + 1;
  v11 = v12;
  while ( 1 )
  {
    v9 = v11 - v12;
    ++v11;
    if ( v9 >= *v6 )
      break;
    sub_2F98C4((_DWORD *)this + 13 * (unsigned __int8)v11[3] + 12, (flatbuffers::Table *)((char *)v8 + *v8));
    ++v8;
  }
  *((_DWORD *)this + 11) = flatbuffers::Table::GetField<int>(a2, 0xAu, 0);
  return 1;
}

