// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_flatbuffers::FlatBufferBuilder::AddOffset

//======================================================================
// void flatbuffers::FlatBufferBuilder::AddOffset<FBSave::ContainerCommon>(unsigned short,flatbuffers::Offset<FBSave::ContainerCommon>)
// address: 0x002F9E92   size: 0x1E (30 bytes)
//======================================================================
flatbuffers::FlatBufferBuilder *__fastcall flatbuffers::FlatBufferBuilder::AddOffset<FBSave::ContainerCommon>(
        flatbuffers::FlatBufferBuilder *result,
        unsigned __int16 a2,
        unsigned int a3)
{
  flatbuffers::FlatBufferBuilder *v3; // r4
  unsigned int v5; // r0

  v3 = result;
  if ( a3 != 0 )
  {
    v5 = flatbuffers::FlatBufferBuilder::ReferTo(result, a3);
    return flatbuffers::FlatBufferBuilder::AddElement<unsigned int>(v3, a2, v5, 0);
  }
  return result;
}


//======================================================================
// void flatbuffers::FlatBufferBuilder::AddOffset<flatbuffers::Vector<flatbuffers::Offset<FBSave::ItemGrid>>>(unsigned short,flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FBSave::ItemGrid>>>)
// address: 0x002F9EB0   size: 0x1E (30 bytes)
//======================================================================
flatbuffers::FlatBufferBuilder *__fastcall flatbuffers::FlatBufferBuilder::AddOffset<flatbuffers::Vector<flatbuffers::Offset<FBSave::ItemGrid>>>(
        flatbuffers::FlatBufferBuilder *result,
        unsigned __int16 a2,
        unsigned int a3)
{
  flatbuffers::FlatBufferBuilder *v3; // r4
  unsigned int v5; // r0

  v3 = result;
  if ( a3 != 0 )
  {
    v5 = flatbuffers::FlatBufferBuilder::ReferTo(result, a3);
    return flatbuffers::FlatBufferBuilder::AddElement<unsigned int>(v3, a2, v5, 0);
  }
  return result;
}

