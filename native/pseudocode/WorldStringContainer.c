// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldStringContainer

//======================================================================
// WorldStringContainer::getObjType(void)
// address: 0x002F8EF8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall WorldStringContainer::getObjType(WorldStringContainer *this)
{
  return 14;
}


//======================================================================
// WorldStringContainer::~WorldStringContainer()
// address: 0x002F8F70   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN20WorldStringContainerD1Ev'
void __fastcall WorldStringContainer::~WorldStringContainer(WorldStringContainer *this)
{
  *(_DWORD *)this = &off_462838;
  sub_3BDF80((char *)this + 48);
  *(_DWORD *)this = &off_45C248;
}


//======================================================================
// WorldStringContainer::~WorldStringContainer()
// address: 0x002F8FEC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall WorldStringContainer::~WorldStringContainer(WorldStringContainer *this)
{
  WorldStringContainer::~WorldStringContainer(this);
  operator delete(this);
}


//======================================================================
// WorldStringContainer::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002FA144   size: 0x86 (134 bytes)
//======================================================================
int __fastcall WorldStringContainer::save(WorldStringContainer *this, const void **a2)
{
  int v4; // r0
  unsigned int v5; // r7
  unsigned int v6; // r0
  int v7; // r5
  __int16 v8; // r6
  unsigned int v9; // r0
  int v10; // r0
  unsigned __int8 *v12; // [sp+0h] [bp-Ch]
  unsigned int v13; // [sp+4h] [bp-8h]

  v4 = WorldContainer::saveContainerCommon(this, a2);
  v12 = *((unsigned __int8 **)this + 12);
  v5 = *((_DWORD *)v12 - 3);
  v13 = v4;
  flatbuffers::FlatBufferBuilder::PreAlign((flatbuffers::FlatBufferBuilder *)a2, v5 + 1, 4u);
  flatbuffers::vector_downward::fill(a2 + 1, 1u);
  flatbuffers::vector_downward::push(a2 + 1, v12, v5);
  flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a2, v5);
  v6 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a2 + 1));
  v7 = *((_DWORD *)this + 11);
  v8 = v6;
  if ( v6 != 0 )
  {
    v9 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)a2, v6);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a2, 8u, v9, 0);
  }
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a2, 6u, v7, 0);
  flatbuffers::FlatBufferBuilder::AddOffset<FBSave::ContainerCommon>((flatbuffers::FlatBufferBuilder *)a2, 4u, v13);
  v10 = flatbuffers::FlatBufferBuilder::EndTable((char **)a2, v8, 3);
  return FBSave::CreateChunkContainer(a2, 2u, v10);
}


//======================================================================
// WorldStringContainer::load(void const*)
// address: 0x002FA382   size: 0x46 (70 bytes)
//======================================================================
int __fastcall WorldStringContainer::load(WorldStringContainer *this, flatbuffers::Table *a2)
{
  flatbuffers::Table *v4; // r0
  int OptionalFieldOffset; // r0
  char *v6; // r5
  _DWORD *v7; // r4
  char *v8; // r3

  v4 = (flatbuffers::Table *)flatbuffers::Table::GetPointer<FBSave::ContainerCommon const*>(a2, 4u);
  WorldContainer::loadContainerCommon(this, v4);
  *((_DWORD *)this + 11) = flatbuffers::Table::GetField<int>(a2, 6u, 0);
  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a2, 8u);
  v6 = (char *)this + 48;
  v7 = (_DWORD *)((char *)a2 + OptionalFieldOffset);
  if ( OptionalFieldOffset != 0 )
    v8 = (char *)v7 + *v7;
  else
    v8 = nullptr;
  sub_3BE508((int)v6, v8 + 4);
  return 1;
}

