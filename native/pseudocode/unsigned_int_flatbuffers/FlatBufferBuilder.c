// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unsigned_int_flatbuffers::FlatBufferBuilder

//======================================================================
// unsigned int flatbuffers::FlatBufferBuilder::PushElement<unsigned short>(unsigned short)
// address: 0x00298AE0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall flatbuffers::FlatBufferBuilder::PushElement<unsigned short>(
        flatbuffers::FlatBufferBuilder *a1,
        __int16 a2,
        int a3)
{
  const void **v3; // r4
  unsigned __int8 v5[6]; // [sp+6h] [bp-6h] BYREF

  *(_DWORD *)&v5[2] = a3;
  *(_WORD *)v5 = a2;
  v3 = (const void **)((char *)a1 + 4);
  flatbuffers::FlatBufferBuilder::Align(a1, 2u);
  flatbuffers::vector_downward::push(v3, v5, 2u);
  return flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v3);
}


//======================================================================
// unsigned int flatbuffers::FlatBufferBuilder::PushElement<unsigned int>(unsigned int)
// address: 0x00298B04   size: 0x20 (32 bytes)
//======================================================================
int __fastcall flatbuffers::FlatBufferBuilder::PushElement<unsigned int>(flatbuffers::FlatBufferBuilder *a1, int a2)
{
  const void **v2; // r4
  unsigned __int8 v4[4]; // [sp+4h] [bp-4h] BYREF

  *(_DWORD *)v4 = a2;
  v2 = (const void **)((char *)a1 + 4);
  flatbuffers::FlatBufferBuilder::Align(a1, 4u);
  flatbuffers::vector_downward::push(v2, v4, 4u);
  return flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v2);
}


//======================================================================
// unsigned int flatbuffers::FlatBufferBuilder::PushElement<unsigned char>(unsigned char)
// address: 0x00298B24   size: 0x24 (36 bytes)
//======================================================================
int __fastcall flatbuffers::FlatBufferBuilder::PushElement<unsigned char>(
        flatbuffers::FlatBufferBuilder *a1,
        unsigned __int8 a2,
        int a3)
{
  const void **v3; // r4
  unsigned __int8 v5[5]; // [sp+7h] [bp-5h] BYREF

  *(_DWORD *)&v5[1] = a3;
  v5[0] = a2;
  v3 = (const void **)((char *)a1 + 4);
  flatbuffers::FlatBufferBuilder::Align(a1, 1u);
  flatbuffers::vector_downward::push(v3, v5, 1u);
  return flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v3);
}


//======================================================================
// unsigned int flatbuffers::FlatBufferBuilder::PushElement<int>(int)
// address: 0x0029D630   size: 0x20 (32 bytes)
//======================================================================
int __fastcall flatbuffers::FlatBufferBuilder::PushElement<int>(flatbuffers::FlatBufferBuilder *a1, int a2)
{
  const void **v2; // r4
  unsigned __int8 v4[4]; // [sp+4h] [bp-4h] BYREF

  *(_DWORD *)v4 = a2;
  v2 = (const void **)((char *)a1 + 4);
  flatbuffers::FlatBufferBuilder::Align(a1, 4u);
  flatbuffers::vector_downward::push(v2, v4, 4u);
  return flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v2);
}

