// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: flatbuffers::Offset

//======================================================================
// flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FBSave::ItemGrid>>> flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<FBSave::ItemGrid>>(flatbuffers::Offset<FBSave::ItemGrid> const*,unsigned int)
// address: 0x002F9C78   size: 0x36 (54 bytes)
//======================================================================
int __fastcall flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<FBSave::ItemGrid>>(
        flatbuffers::FlatBufferBuilder *a1,
        int a2,
        unsigned int a3)
{
  unsigned int v6; // r5
  unsigned int v7; // r0

  flatbuffers::FlatBufferBuilder::StartVector(a1, a3, 4u);
  v6 = a3;
  while ( v6 != 0 )
  {
    --v6;
    v7 = flatbuffers::FlatBufferBuilder::ReferTo(a1, *(_DWORD *)(a2 + 4 * v6));
    flatbuffers::FlatBufferBuilder::PushElement<unsigned int>(a1, v7);
  }
  return flatbuffers::FlatBufferBuilder::PushElement<unsigned int>(a1, a3);
}

