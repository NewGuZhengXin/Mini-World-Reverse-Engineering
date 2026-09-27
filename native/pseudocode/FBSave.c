// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FBSave

//======================================================================
// FBSave::CreateChunkSave(flatbuffers::FlatBufferBuilder &,flatbuffers::Offset<flatbuffers::Vector<unsigned char>>,flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FBSave::SectionSave>>>,flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FBSave::SectionActor>>>,flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FBSave::ChunkContainer>>>)
// address: 0x002994E2   size: 0x80 (128 bytes)
//======================================================================
int __fastcall FBSave::CreateChunkSave(int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v9; // r0
  unsigned int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r0
  __int16 v14; // [sp+4h] [bp-8h]

  v14 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 4));
  if ( a5 != 0 )
  {
    v9 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)a1, a5);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 0xAu, v9, 0);
  }
  if ( a4 != 0 )
  {
    v10 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)a1, a4);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 8u, v10, 0);
  }
  if ( a3 != 0 )
  {
    v11 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)a1, a3);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 6u, v11, 0);
  }
  if ( a2 != 0 )
  {
    v12 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)a1, a2);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 4u, v12, 0);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v14, 4);
}


//======================================================================
// FBSave::CreateActorLargeFireball(flatbuffers::FlatBufferBuilder &,flatbuffers::Offset<FBSave::ActorCommon>,FBSave::Vec3 const*,int,unsigned long long)
// address: 0x0029D650   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall FBSave::CreateActorLargeFireball(const void **a1, int a2, const unsigned __int8 *a3, int a4, __int64 a5)
{
  const void **v7; // r5
  unsigned int v9; // r0
  unsigned int v10; // r0
  unsigned int v11; // r0
  int v12; // r0
  __int16 v15; // [sp+Ch] [bp-10h]
  unsigned __int8 v16[12]; // [sp+10h] [bp-Ch] BYREF

  v7 = a1 + 1;
  v15 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 1));
  if ( a5 != 0 || *((_BYTE *)a1 + 48) != 0 )
  {
    *(_QWORD *)v16 = a5;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 8u);
    flatbuffers::vector_downward::push(v7, v16, 8u);
    v9 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v7);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 0xAu, v9);
  }
  if ( a4 != 0 || *((_BYTE *)a1 + 48) != 0 )
  {
    v10 = flatbuffers::FlatBufferBuilder::PushElement<int>((flatbuffers::FlatBufferBuilder *)a1, a4);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 8u, v10);
  }
  if ( a3 != nullptr )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    flatbuffers::vector_downward::push(v7, a3, 0xCu);
    v11 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v7);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 6u, v11);
  }
  if ( a2 != 0 )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    v12 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v7);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 4u, 4 - a2 + v12, 0);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v15, 4);
}


//======================================================================
// FBSave::CreateSectionActor(flatbuffers::FlatBufferBuilder &,FBSave::SectionActorUnion,flatbuffers::Offset<void>)
// address: 0x0029D722   size: 0x7A (122 bytes)
//======================================================================
int __fastcall FBSave::CreateSectionActor(_BYTE *a1, unsigned __int8 a2, int a3)
{
  flatbuffers::vector_downward *v3; // r5
  int v7; // r0
  unsigned int v8; // r0
  __int16 v10; // [sp+4h] [bp-10h]
  unsigned __int8 v11[5]; // [sp+Fh] [bp-5h] BYREF

  v3 = (flatbuffers::vector_downward *)(a1 + 4);
  v10 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 4));
  if ( a3 != 0 )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    v7 = flatbuffers::vector_downward::size(v3);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 6u, v7 - a3 + 4, 0);
  }
  if ( a2 != 0 || a1[48] != 0 )
  {
    v11[0] = a2;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 1u);
    flatbuffers::vector_downward::push((const void **)v3, v11, 1u);
    v8 = flatbuffers::vector_downward::size(v3);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 4u, v8);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v10, 2);
}


//======================================================================
// FBSave::CreateActorMob(flatbuffers::FlatBufferBuilder &,flatbuffers::Offset<FBSave::ActorCommon>,int,float,unsigned int,int,flatbuffers::Offset<flatbuffers::Vector<FBSave::ActorBuff const*>>,flatbuffers::Offset<flatbuffers::Vector<FBSave::AttribMod const*>>)
// address: 0x0029E82C   size: 0xCE (206 bytes)
//======================================================================
int __fastcall FBSave::CreateActorMob(
        const void **a1,
        unsigned int a2,
        int a3,
        float a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8)
{
  const void **v8; // r5
  unsigned int v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r0
  unsigned int v15; // r0
  __int16 v17; // [sp+0h] [bp-14h]
  unsigned __int8 v19[4]; // [sp+Ch] [bp-8h] BYREF

  v8 = a1 + 1;
  v17 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 1));
  if ( a8 != 0 )
  {
    v12 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)a1, a8);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 0x10u, v12, 0);
  }
  if ( a7 != 0 )
  {
    v13 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)a1, a7);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 0xEu, v13, 0);
  }
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a1, 0xCu, a6, 0);
  flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 0xAu, a5, 0);
  if ( a4 != 0.0 || *((_BYTE *)a1 + 48) != 0 )
  {
    *(float *)v19 = a4;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    flatbuffers::vector_downward::push(v8, v19, 4u);
    v14 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v8);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 8u, v14);
  }
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a1, 6u, a3, 0);
  if ( a2 != 0 )
  {
    v15 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)a1, a2);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 4u, v15, 0);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v17, 7);
}


//======================================================================
// FBSave::CreateActorArrow(flatbuffers::FlatBufferBuilder &,flatbuffers::Offset<FBSave::ActorCommon>,unsigned long long,int,FBSave::Coord3 const*,unsigned short,unsigned short,float,float,float,FBSave::Coord3 const*,signed char,signed char,int,int)
// address: 0x002A3044   size: 0x12E (302 bytes)
//======================================================================
int __fastcall FBSave::CreateActorArrow(
        const void **a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        const unsigned __int8 *a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        float a9,
        float a10,
        float a11,
        const unsigned __int8 *a12,
        char a13,
        char a14,
        int a15,
        int a16)
{
  unsigned __int64 v16; // r6
  const void **v17; // r5
  unsigned int v19; // r0
  int v20; // r0
  __int16 v23; // [sp+4h] [bp-20h]
  unsigned __int8 v24[4]; // [sp+18h] [bp-Ch] BYREF
  int v25; // [sp+1Ch] [bp-8h]

  v16 = __PAIR64__(a3, a4);
  v17 = a1 + 1;
  v23 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 1));
  if ( v16 != 0 || *((_BYTE *)a1 + 48) != 0 )
  {
    *(_DWORD *)v24 = HIDWORD(v16);
    v25 = v16;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 8u);
    flatbuffers::vector_downward::push(v17, v24, 8u);
    v19 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v17);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 6u, v19);
  }
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a1, 0x1Eu, a16, 0);
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a1, 0x1Cu, a15, 0);
  flatbuffers::FlatBufferBuilder::AddStruct<FBSave::Coord3>((flatbuffers::FlatBufferBuilder *)a1, 0x16u, a12);
  flatbuffers::FlatBufferBuilder::AddElement<float>((unsigned int)a1 | 0x1400000000LL, a11, 0.0);
  flatbuffers::FlatBufferBuilder::AddElement<float>((unsigned int)a1 | 0x1200000000LL, a10, 0.0);
  flatbuffers::FlatBufferBuilder::AddElement<float>((unsigned int)a1 | 0x1000000000LL, a9, 0.0);
  flatbuffers::FlatBufferBuilder::AddStruct<FBSave::Coord3>((flatbuffers::FlatBufferBuilder *)a1, 0xAu, a6);
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a1, 8u, a5, 0);
  if ( a2 != 0 )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    v20 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v17);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 4u, 4 - a2 + v20, 0);
  }
  flatbuffers::FlatBufferBuilder::AddElement<unsigned short>((flatbuffers::FlatBufferBuilder *)a1, 0xEu, a8, 0);
  flatbuffers::FlatBufferBuilder::AddElement<unsigned short>((flatbuffers::FlatBufferBuilder *)a1, 0xCu, a7, 0);
  flatbuffers::FlatBufferBuilder::AddElement<signed char>((unsigned int)a1 | 0x1A00000000LL, a14, 0);
  flatbuffers::FlatBufferBuilder::AddElement<signed char>((unsigned int)a1 | 0x1800000000LL, a13, 0);
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v23, 14);
}


//======================================================================
// FBSave::CreateActorTNT(flatbuffers::FlatBufferBuilder &,flatbuffers::Offset<FBSave::ActorCommon>,int)
// address: 0x002CCEA8   size: 0x5E (94 bytes)
//======================================================================
int __fastcall FBSave::CreateActorTNT(_BYTE *a1, int a2, int a3)
{
  flatbuffers::vector_downward *v3; // r6
  unsigned int v7; // r0
  int v8; // r0
  __int16 v10; // [sp+4h] [bp-8h]

  v3 = (flatbuffers::vector_downward *)(a1 + 4);
  v10 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 4));
  if ( a3 != 0 || a1[48] != 0 )
  {
    v7 = flatbuffers::FlatBufferBuilder::PushElement<int>((flatbuffers::FlatBufferBuilder *)a1, a3);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 6u, v7);
  }
  if ( a2 != 0 )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    v8 = flatbuffers::vector_downward::size(v3);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 4u, 4 - a2 + v8, 0);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v10, 2);
}


//======================================================================
// FBSave::CreateActorFlyBlock(flatbuffers::FlatBufferBuilder &,flatbuffers::Offset<FBSave::ActorCommon>,unsigned short,unsigned short,int,signed char,FBSave::Coord3 const*)
// address: 0x002D3312   size: 0xE4 (228 bytes)
//======================================================================
int __fastcall FBSave::CreateActorFlyBlock(
        const void **a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        unsigned __int8 *a7)
{
  const void **v7; // r5
  unsigned int v10; // r0
  unsigned int v11; // r0
  int v12; // r0
  unsigned int v13; // r0
  __int16 v15; // [sp+4h] [bp-18h]
  unsigned __int8 v18[5]; // [sp+17h] [bp-5h] BYREF

  v7 = a1 + 1;
  v15 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 1));
  if ( a7 != nullptr )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    flatbuffers::vector_downward::push(v7, a7, 0xCu);
    v10 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v7);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 0xEu, v10);
  }
  if ( a5 != 0 || *((_BYTE *)a1 + 48) != 0 )
  {
    v11 = flatbuffers::FlatBufferBuilder::PushElement<int>((flatbuffers::FlatBufferBuilder *)a1, a5);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 0xAu, v11);
  }
  if ( a2 != 0 )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    v12 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v7);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 4u, 4 - a2 + v12, 0);
  }
  flatbuffers::FlatBufferBuilder::AddElement<unsigned short>((flatbuffers::FlatBufferBuilder *)a1, 8u, a4, 0);
  flatbuffers::FlatBufferBuilder::AddElement<unsigned short>((flatbuffers::FlatBufferBuilder *)a1, 6u, a3, 0);
  if ( a6 != 0 || *((_BYTE *)a1 + 48) != 0 )
  {
    v18[0] = a6;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 1u);
    flatbuffers::vector_downward::push(v7, v18, 1u);
    v13 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v7);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 0xCu, v13);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v15, 6);
}


//======================================================================
// FBSave::CreateContainerPiston(flatbuffers::FlatBufferBuilder &,flatbuffers::Offset<FBSave::ContainerCommon>,unsigned short,unsigned short,signed char,signed char,signed char,float)
// address: 0x002D8A80   size: 0xDA (218 bytes)
//======================================================================
int __fastcall FBSave::CreateContainerPiston(
        const void **a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        float a8)
{
  const void **v8; // r5
  unsigned int v12; // r0
  int v13; // r0
  __int16 v15; // [sp+4h] [bp-20h]
  unsigned __int8 v17[4]; // [sp+1Ch] [bp-8h] BYREF

  v8 = a1 + 1;
  v15 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 1));
  if ( a8 != 0.0 || *((_BYTE *)a1 + 48) != 0 )
  {
    *(float *)v17 = a8;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    flatbuffers::vector_downward::push(v8, v17, 4u);
    v12 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v8);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 0x10u, v12);
  }
  if ( a2 != 0 )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    v13 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v8);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 4u, 4 - a2 + v13, 0);
  }
  flatbuffers::FlatBufferBuilder::AddElement<unsigned short>((flatbuffers::FlatBufferBuilder *)a1, 8u, a4, 0);
  flatbuffers::FlatBufferBuilder::AddElement<unsigned short>((flatbuffers::FlatBufferBuilder *)a1, 6u, a3, 0);
  flatbuffers::FlatBufferBuilder::AddElement<signed char>((unsigned int)a1 | 0xE00000000LL, a7, 0);
  flatbuffers::FlatBufferBuilder::AddElement<signed char>((unsigned int)a1 | 0xC00000000LL, a6, 0);
  flatbuffers::FlatBufferBuilder::AddElement<signed char>((unsigned int)a1 | 0xA00000000LL, a5, 0);
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v15, 7);
}


//======================================================================
// FBSave::CreateChunkContainer(flatbuffers::FlatBufferBuilder &,FBSave::ContainerUnion,flatbuffers::Offset<void>)
// address: 0x002D8B5A   size: 0x7A (122 bytes)
//======================================================================
int __fastcall FBSave::CreateChunkContainer(_BYTE *a1, unsigned __int8 a2, int a3)
{
  flatbuffers::vector_downward *v3; // r5
  int v7; // r0
  unsigned int v8; // r0
  __int16 v10; // [sp+4h] [bp-10h]
  unsigned __int8 v11[5]; // [sp+Fh] [bp-5h] BYREF

  v3 = (flatbuffers::vector_downward *)(a1 + 4);
  v10 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 4));
  if ( a3 != 0 )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    v7 = flatbuffers::vector_downward::size(v3);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 6u, v7 - a3 + 4, 0);
  }
  if ( a2 != 0 || a1[48] != 0 )
  {
    v11[0] = a2;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 1u);
    flatbuffers::vector_downward::push((const void **)v3, v11, 1u);
    v8 = flatbuffers::vector_downward::size(v3);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 4u, v8);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v10, 2);
}


//======================================================================
// FBSave::CreateActorMinecartEmpty(flatbuffers::FlatBufferBuilder &,flatbuffers::Offset<FBSave::ActorCommon>,int)
// address: 0x002DFBD4   size: 0x5E (94 bytes)
//======================================================================
int __fastcall FBSave::CreateActorMinecartEmpty(_BYTE *a1, int a2, int a3)
{
  flatbuffers::vector_downward *v3; // r6
  unsigned int v7; // r0
  int v8; // r0
  __int16 v10; // [sp+4h] [bp-8h]

  v3 = (flatbuffers::vector_downward *)(a1 + 4);
  v10 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 4));
  if ( a3 != 0 || a1[48] != 0 )
  {
    v7 = flatbuffers::FlatBufferBuilder::PushElement<int>((flatbuffers::FlatBufferBuilder *)a1, a3);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 6u, v7);
  }
  if ( a2 != 0 )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    v8 = flatbuffers::vector_downward::size(v3);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 4u, 4 - a2 + v8, 0);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v10, 2);
}


//======================================================================
// FBSave::CreateActorFallSand(flatbuffers::FlatBufferBuilder &,flatbuffers::Offset<FBSave::ActorCommon>,unsigned short,unsigned short,signed char)
// address: 0x002EC4BE   size: 0x98 (152 bytes)
//======================================================================
int __fastcall FBSave::CreateActorFallSand(_BYTE *a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  flatbuffers::vector_downward *v5; // r5
  int v8; // r0
  unsigned int v9; // r0
  __int16 v11; // [sp+4h] [bp-18h]
  unsigned __int8 v14[5]; // [sp+17h] [bp-5h] BYREF

  v5 = (flatbuffers::vector_downward *)(a1 + 4);
  v11 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 4));
  if ( a2 != 0 )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    v8 = flatbuffers::vector_downward::size(v5);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 4u, 4 - a2 + v8, 0);
  }
  flatbuffers::FlatBufferBuilder::AddElement<unsigned short>((flatbuffers::FlatBufferBuilder *)a1, 8u, a4, 0);
  flatbuffers::FlatBufferBuilder::AddElement<unsigned short>((flatbuffers::FlatBufferBuilder *)a1, 6u, a3, 0);
  if ( a5 != 0 || a1[48] != 0 )
  {
    v14[0] = a5;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 1u);
    flatbuffers::vector_downward::push((const void **)v5, v14, 1u);
    v9 = flatbuffers::vector_downward::size(v5);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 0xAu, v9);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v11, 4);
}


//======================================================================
// FBSave::CreateContainerCommon(flatbuffers::FlatBufferBuilder &,unsigned long long,FBSave::Coord3 const*,unsigned int)
// address: 0x002F9F0E   size: 0x8C (140 bytes)
//======================================================================
int __fastcall FBSave::CreateContainerCommon(
        const void **a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5,
        int a6)
{
  const void **v6; // r5
  unsigned __int64 v8; // r6
  unsigned int v9; // r0
  unsigned int v10; // r0
  __int16 v12; // [sp+4h] [bp-10h]
  unsigned __int8 v13[4]; // [sp+8h] [bp-Ch] BYREF
  int v14; // [sp+Ch] [bp-8h]

  v6 = a1 + 1;
  v8 = __PAIR64__(a3, a4);
  v12 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 1));
  if ( v8 != 0 || *((_BYTE *)a1 + 48) != 0 )
  {
    *(_DWORD *)v13 = HIDWORD(v8);
    v14 = v8;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 8u);
    flatbuffers::vector_downward::push(v6, v13, 8u);
    v9 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v6);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 4u, v9);
  }
  flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 8u, a6, 0);
  if ( a5 != nullptr )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    flatbuffers::vector_downward::push(v6, a5, 0xCu);
    v10 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v6);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 6u, v10);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v12, 3);
}


//======================================================================
// FBSave::CreateContainerFurnace(flatbuffers::FlatBufferBuilder &,flatbuffers::Offset<FBSave::ContainerCommon>,flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<FBSave::ItemGrid>>>,int,int,int,signed char)
// address: 0x002FA05E   size: 0x98 (152 bytes)
//======================================================================
int __fastcall FBSave::CreateContainerFurnace(
        const void **a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        unsigned __int8 a7)
{
  const void **v7; // r5
  unsigned int v10; // r0
  __int16 v12; // [sp+4h] [bp-18h]
  unsigned __int8 v15[5]; // [sp+17h] [bp-5h] BYREF

  v7 = a1 + 1;
  v12 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 1));
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a1, 0xCu, a6, 0);
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a1, 0xAu, a5, 0);
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a1, 8u, a4, 0);
  flatbuffers::FlatBufferBuilder::AddOffset<flatbuffers::Vector<flatbuffers::Offset<FBSave::ItemGrid>>>(
    (flatbuffers::FlatBufferBuilder *)a1,
    6u,
    a3);
  flatbuffers::FlatBufferBuilder::AddOffset<FBSave::ContainerCommon>((flatbuffers::FlatBufferBuilder *)a1, 4u, a2);
  if ( a7 != 0 || *((_BYTE *)a1 + 48) != 0 )
  {
    v15[0] = a7;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 1u);
    flatbuffers::vector_downward::push(v7, v15, 1u);
    v10 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v7);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 0xEu, v10);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v12, 6);
}


//======================================================================
// FBSave::CreateActorCommon(flatbuffers::FlatBufferBuilder &,unsigned long long,FBSave::Coord3 const*,FBSave::Vec3 const*,float,float,float,unsigned int,unsigned int)
// address: 0x002FE5A6   size: 0xE4 (228 bytes)
//======================================================================
int __fastcall FBSave::CreateActorCommon(
        unsigned int a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  const void **v10; // r5
  unsigned int v13; // r0
  unsigned int v14; // r0
  unsigned int v15; // r0
  __int16 v17; // [sp+4h] [bp-10h]
  unsigned __int8 v18[12]; // [sp+8h] [bp-Ch] BYREF

  v10 = (const void **)(a1 + 4);
  v17 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 4));
  if ( a2 != 0 || *(_BYTE *)(a1 + 48) != 0 )
  {
    *(_QWORD *)v18 = a2;
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 8u);
    flatbuffers::vector_downward::push(v10, v18, 8u);
    v13 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v10);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 4u, v13);
  }
  flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 0x12u, a9, 0);
  flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 0x10u, a8, 0);
  flatbuffers::FlatBufferBuilder::AddElement<float>(a1 | 0xE00000000LL, *(float *)&a7, 0.0);
  flatbuffers::FlatBufferBuilder::AddElement<float>(a1 | 0xC00000000LL, *(float *)&a6, 0.0);
  flatbuffers::FlatBufferBuilder::AddElement<float>(a1 | 0xA00000000LL, *(float *)&a5, 0.0);
  if ( a4 != nullptr )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    flatbuffers::vector_downward::push(v10, a4, 0xCu);
    v14 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v10);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 8u, v14);
  }
  if ( a3 != nullptr )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a1, 4u);
    flatbuffers::vector_downward::push(v10, a3, 0xCu);
    v15 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v10);
    flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a1, 6u, v15);
  }
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v17, 8);
}

