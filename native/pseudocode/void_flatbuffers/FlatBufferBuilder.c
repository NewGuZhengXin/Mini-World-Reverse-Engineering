// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_flatbuffers::FlatBufferBuilder

//======================================================================
// void flatbuffers::FlatBufferBuilder::AddElement<unsigned int>(unsigned short,unsigned int,unsigned int)
// address: 0x00299272   size: 0x28 (40 bytes)
//======================================================================
flatbuffers::FlatBufferBuilder *__fastcall flatbuffers::FlatBufferBuilder::AddElement<unsigned int>(
        flatbuffers::FlatBufferBuilder *result,
        unsigned __int16 a2,
        int a3,
        int a4)
{
  flatbuffers::FlatBufferBuilder *v4; // r4
  unsigned int v6; // r0

  v4 = result;
  if ( a3 != a4 || *((_BYTE *)result + 48) != 0 )
  {
    v6 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>(result, a3);
    return (flatbuffers::FlatBufferBuilder *)flatbuffers::FlatBufferBuilder::TrackField(v4, a2, v6);
  }
  return result;
}


//======================================================================
// void flatbuffers::FlatBufferBuilder::AddElement<int>(unsigned short,int,int)
// address: 0x0029E804   size: 0x28 (40 bytes)
//======================================================================
flatbuffers::FlatBufferBuilder *__fastcall flatbuffers::FlatBufferBuilder::AddElement<int>(
        flatbuffers::FlatBufferBuilder *result,
        unsigned __int16 a2,
        int a3,
        int a4)
{
  flatbuffers::FlatBufferBuilder *v4; // r4
  unsigned int v6; // r0

  v4 = result;
  if ( a3 != a4 || *((_BYTE *)result + 48) != 0 )
  {
    v6 = flatbuffers::FlatBufferBuilder::PushElement<int>(result, a3);
    return (flatbuffers::FlatBufferBuilder *)flatbuffers::FlatBufferBuilder::TrackField(v4, a2, v6);
  }
  return result;
}


//======================================================================
// void flatbuffers::FlatBufferBuilder::AddElement<float>(unsigned short,float,float)
// address: 0x002A2F96   size: 0x46 (70 bytes)
//======================================================================
__int64 __fastcall flatbuffers::FlatBufferBuilder::AddElement<float>(__int64 a1, float a2, float a3)
{
  const void **v3; // r4
  unsigned __int16 v4; // r6
  unsigned int v5; // r0
  __int64 v7; // [sp+0h] [bp-8h] BYREF

  v7 = a1;
  v3 = (const void **)a1;
  v4 = WORD2(a1);
  if ( a2 != a3 || *(_BYTE *)(a1 + 48) != 0 )
  {
    *((float *)&v7 + 1) = a2;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    flatbuffers::vector_downward::push(v3 + 1, (const unsigned __int8 *)&v7 + 4, 4u);
    v5 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(v3 + 1));
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)v3, v4, v5);
  }
  return v7;
}


//======================================================================
// void flatbuffers::FlatBufferBuilder::AddElement<unsigned short>(unsigned short,unsigned short,unsigned short)
// address: 0x002A2FDC   size: 0x28 (40 bytes)
//======================================================================
flatbuffers::FlatBufferBuilder *__fastcall flatbuffers::FlatBufferBuilder::AddElement<unsigned short>(
        flatbuffers::FlatBufferBuilder *result,
        unsigned __int16 a2,
        int a3,
        int a4)
{
  flatbuffers::FlatBufferBuilder *v4; // r4
  unsigned int v6; // r0

  v4 = result;
  if ( a3 != a4 || *((_BYTE *)result + 48) != 0 )
  {
    v6 = flatbuffers::FlatBufferBuilder::PushElement<unsigned short>(result, a3, a3);
    return (flatbuffers::FlatBufferBuilder *)flatbuffers::FlatBufferBuilder::TrackField(v4, a2, v6);
  }
  return result;
}


//======================================================================
// void flatbuffers::FlatBufferBuilder::AddElement<signed char>(unsigned short,signed char,signed char)
// address: 0x002A3004   size: 0x40 (64 bytes)
//======================================================================
__int64 __fastcall flatbuffers::FlatBufferBuilder::AddElement<signed char>(__int64 this, int a2, int a3)
{
  const void **v3; // r4
  unsigned __int16 v4; // r7
  unsigned int v5; // r0
  __int64 v7; // [sp+0h] [bp-Ch] BYREF
  int v8; // [sp+8h] [bp-4h]

  v7 = this;
  v8 = a2;
  v3 = (const void **)this;
  v4 = WORD2(this);
  if ( a2 != a3 || *(_BYTE *)(this + 48) != 0 )
  {
    HIBYTE(v7) = a2;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)this, 1u);
    flatbuffers::vector_downward::push(v3 + 1, (const unsigned __int8 *)&v7 + 7, 1u);
    v5 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(v3 + 1));
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)v3, v4, v5);
  }
  return v7;
}


//======================================================================
// void flatbuffers::FlatBufferBuilder::AddElement<short>(unsigned short,short,short)
// address: 0x002F9ECE   size: 0x40 (64 bytes)
//======================================================================
__int64 __fastcall flatbuffers::FlatBufferBuilder::AddElement<short>(__int64 this, int a2, int a3)
{
  const void **v3; // r4
  unsigned __int16 v4; // r7
  unsigned int v5; // r0
  __int64 v7; // [sp+0h] [bp-Ch] BYREF
  int v8; // [sp+8h] [bp-4h]

  v7 = this;
  v8 = a2;
  v3 = (const void **)this;
  v4 = WORD2(this);
  if ( a2 != a3 || *(_BYTE *)(this + 48) != 0 )
  {
    HIWORD(v7) = a2;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)this, 2u);
    flatbuffers::vector_downward::push(v3 + 1, (const unsigned __int8 *)&v7 + 6, 2u);
    v5 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(v3 + 1));
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)v3, v4, v5);
  }
  return v7;
}

