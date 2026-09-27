// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_flatbuffers::FlatBufferBuilder::AddStruct

//======================================================================
// void flatbuffers::FlatBufferBuilder::AddStruct<FBSave::Coord3>(unsigned short,FBSave::Coord3 const*)
// address: 0x002A2F68   size: 0x2E (46 bytes)
//======================================================================
flatbuffers::FlatBufferBuilder *__fastcall flatbuffers::FlatBufferBuilder::AddStruct<FBSave::Coord3>(
        flatbuffers::FlatBufferBuilder *result,
        unsigned __int16 a2,
        const unsigned __int8 *a3)
{
  const void **v3; // r4
  unsigned int v6; // r0

  v3 = (const void **)result;
  if ( a3 != nullptr )
  {
    flatbuffers::FlatBufferBuilder::Align(result, 4u);
    flatbuffers::vector_downward::push(v3 + 1, a3, 0xCu);
    v6 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(v3 + 1));
    return (flatbuffers::FlatBufferBuilder *)flatbuffers::FlatBufferBuilder::TrackField(
                                               (flatbuffers::FlatBufferBuilder *)v3,
                                               a2,
                                               v6);
  }
  return result;
}

