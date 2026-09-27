// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldValueContainer

//======================================================================
// WorldValueContainer::getObjType(void)
// address: 0x002F8EF4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall WorldValueContainer::getObjType(WorldValueContainer *this)
{
  return 13;
}


//======================================================================
// WorldValueContainer::~WorldValueContainer()
// address: 0x002F8F9C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN19WorldValueContainerD1Ev'
void __fastcall WorldValueContainer::~WorldValueContainer(WorldValueContainer *this)
{
  *(_DWORD *)this = &off_45C248;
}


//======================================================================
// WorldValueContainer::~WorldValueContainer()
// address: 0x002F8FD0   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldValueContainer::~WorldValueContainer(WorldValueContainer *this)
{
  *(_DWORD *)this = &off_45C248;
  operator delete(this);
}


//======================================================================
// WorldValueContainer::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002FA0F6   size: 0x4E (78 bytes)
//======================================================================
int __fastcall WorldValueContainer::save(WorldValueContainer *this, const void **a2)
{
  unsigned int v4; // r6
  __int16 v5; // r0
  int v6; // r7
  int v7; // r0
  __int16 v9; // [sp+4h] [bp-8h]

  v4 = WorldContainer::saveContainerCommon(this, a2);
  v5 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a2 + 1));
  v6 = *((_DWORD *)this + 11);
  v9 = v5;
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a2, 8u, *((_DWORD *)this + 12), 0);
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a2, 6u, v6, 0);
  flatbuffers::FlatBufferBuilder::AddOffset<FBSave::ContainerCommon>((flatbuffers::FlatBufferBuilder *)a2, 4u, v4);
  v7 = flatbuffers::FlatBufferBuilder::EndTable((char **)a2, v9, 3);
  return FBSave::CreateChunkContainer(a2, 1u, v7);
}


//======================================================================
// WorldValueContainer::load(void const*)
// address: 0x002FA350   size: 0x32 (50 bytes)
//======================================================================
int __fastcall WorldValueContainer::load(WorldValueContainer *this, flatbuffers::Table *a2)
{
  flatbuffers::Table *v4; // r0

  v4 = (flatbuffers::Table *)flatbuffers::Table::GetPointer<FBSave::ContainerCommon const*>(a2, 4u);
  WorldContainer::loadContainerCommon(this, v4);
  *((_DWORD *)this + 11) = flatbuffers::Table::GetField<int>(a2, 6u, 0);
  *((_DWORD *)this + 12) = flatbuffers::Table::GetField<int>(a2, 8u, 0);
  return 1;
}

