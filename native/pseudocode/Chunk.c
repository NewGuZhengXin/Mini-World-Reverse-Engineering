// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Chunk

//======================================================================
// Chunk::loadFromBuffer(tagChunkSaveDB *)
// address: 0x00298CD8   size: 0x4B4 (1204 bytes)
//======================================================================
int __fastcall Chunk::loadFromBuffer(int a1, int a2)
{
  _DWORD *v3; // r6
  int v4; // r1
  unsigned int v5; // r3
  const char *v6; // r1
  int result; // r0
  double v8; // r0
  int OptionalFieldOffset; // r0
  int v10; // r0
  _DWORD *v11; // r6
  int v12; // r0
  int v13; // r3
  int v14; // r4
  int v15; // r0
  int v16; // r1
  _DWORD *Material; // r5
  int v18; // r0
  int v19; // r2
  int v20; // r2
  int *v21; // r3
  int v22; // r0
  _DWORD *v23; // r6
  _DWORD *v24; // r5
  int v25; // r0
  ClientMob *v26; // r4
  int v27; // r0
  int v28; // r1
  int v29; // r0
  int v30; // r1
  _DWORD *v31; // r6
  _DWORD *v32; // r5
  int v33; // r0
  WorldFurnace *v34; // r4
  int v35; // r0
  int v36; // r1
  double v37; // r0
  double v38; // r4
  unsigned int v39; // r3
  float v40; // r0
  double v41; // r0
  int v42; // r3
  unsigned int v43; // [sp+0h] [bp-4Ch]
  flatbuffers::Table *v44; // [sp+18h] [bp-34h]
  flatbuffers::Table *v45; // [sp+18h] [bp-34h]
  flatbuffers::Table *j; // [sp+18h] [bp-34h]
  flatbuffers::Table *v47; // [sp+1Ch] [bp-30h]
  flatbuffers::Table *v48; // [sp+1Ch] [bp-30h]
  flatbuffers::Table *v49; // [sp+20h] [bp-2Ch]
  flatbuffers::Table *i; // [sp+20h] [bp-2Ch]
  flatbuffers::Table *v51; // [sp+20h] [bp-2Ch]
  unsigned int v53; // [sp+2Ch] [bp-20h]
  int (__fastcall *v54)(ClientMob *, int); // [sp+2Ch] [bp-20h]
  unsigned int *v55; // [sp+34h] [bp-18h]
  double ElapsedTime; // [sp+38h] [bp-14h]
  unsigned int v57; // [sp+40h] [bp-Ch] BYREF
  int v58; // [sp+44h] [bp-8h] BYREF

  profiny::Timer::start((profiny::Timer *)&s_Timer, (int)&GLOBAL_OFFSET_TABLE_);
  v57 = *(_DWORD *)(a2 + 24);
  v3 = (_DWORD *)operator new[](v57);
  if ( uncompress(v3, &v57, a2 + 32, *(_DWORD *)(a2 + 28)) != 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/chunksave.cpp", (const char *)&dword_A4 + 1, 8, v5);
    Ogre::LogMessage((Ogre *)"uncompress chunk save blob failed", v6);
    result = (int)v3;
    if ( v3 != nullptr )
    {
      operator delete[](v3);
      return 0;
    }
  }
  else
  {
    v8 = profiny::Timer::stop((profiny::Timer *)&s_Timer, v4);
    ElapsedTime = profiny::Timer::getElapsedTime((profiny::Timer *)&s_Timer, SHIDWORD(v8));
    profiny::Timer::start((profiny::Timer *)&s_Timer, SHIDWORD(ElapsedTime));
    v47 = (flatbuffers::Table *)((char *)v3 + *v3);
    OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(v47, 4u);
    if ( OptionalFieldOffset != 0 )
      OptionalFieldOffset += (int)v47 + *(_DWORD *)((char *)v47 + OptionalFieldOffset);
    j_memcpy((void *)(a1 + 1060), (const void *)(OptionalFieldOffset + 4), 0x100u);
    v10 = flatbuffers::Table::GetOptionalFieldOffset(v47, 6u);
    if ( v10 != 0 )
      v55 = (unsigned int *)((char *)v47 + v10 + *(_DWORD *)((char *)v47 + v10));
    else
      v55 = nullptr;
    v53 = 0;
    v11 = v55 + 1;
    while ( v53 < *v55 )
    {
      v49 = (flatbuffers::Table *)((char *)v11 + *v11);
      v12 = flatbuffers::Table::GetOptionalFieldOffset(v49, 4u);
      v13 = 0;
      if ( v12 != 0 )
        v13 = *((unsigned __int8 *)v49 + v12);
      v14 = *(_DWORD *)(4 * (v13 + 342) + a1);
      Section::allocBlocks((Section *)v14);
      v15 = flatbuffers::Table::GetOptionalFieldOffset(v49, 6u);
      if ( v15 != 0 )
        v15 += (int)v49 + *(_DWORD *)((char *)v49 + v15);
      j_memcpy(*(void **)(v14 + 20), (const void *)(v15 + 4), 0x2000u);
      *(_WORD *)(v14 + 34) = 0;
      *(_WORD *)(v14 + 36) = 0;
      v44 = nullptr;
      do
      {
        v16 = *(_WORD *)(2 * (_DWORD)v44 + *(_DWORD *)(v14 + 20)) & 0xFFF;
        if ( (*(_WORD *)(2 * (_DWORD)v44 + *(_DWORD *)(v14 + 20)) & 0xFFF) != 0 )
        {
          ++*(_WORD *)(v14 + 34);
          Material = (_DWORD *)BlockMaterialMgr::getMaterial(
                                 (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                 v16);
          if ( (*(int (__fastcall **)(_DWORD *))(*Material + 88))(Material) != 0 )
            ++*(_WORD *)(v14 + 36);
          if ( *(int *)(Material[9] + 68) > 0 )
          {
            v18 = flatbuffers::Table::GetOptionalFieldOffset(v49, 4u);
            v19 = 0;
            if ( v18 != 0 )
              v19 = *((unsigned __int8 *)v49 + v18);
            v20 = ((16 * v19 + ((int)v44 >> 8)) << 8) | (unsigned __int8)v44;
            v58 = v20;
            v21 = *(int **)(a1 + 1360);
            if ( v21 == *(int **)(a1 + 1364) )
            {
              std::vector<int>::_M_emplace_back_aux<int>(a1 + 1356, &v58);
            }
            else
            {
              if ( v21 != nullptr )
                *v21 = v20;
              *(_DWORD *)(a1 + 1360) += 4;
            }
          }
        }
        v44 = (flatbuffers::Table *)((char *)v44 + 1);
      }
      while ( v44 != (flatbuffers::Table *)&stru_FF8.st_size );
      if ( *(_WORD *)(v14 + 34) != 0 )
      {
        *(_BYTE *)(v14 + 40) = 1;
        *(_BYTE *)(v14 + 41) = 1;
        *(_BYTE *)(v14 + 42) = 1;
      }
      ++v11;
      ++v53;
    }
    Chunk::generateSkylightMap((Chunk *)a1);
    *(_BYTE *)(a1 + 269) = 1;
    v22 = flatbuffers::Table::GetOptionalFieldOffset(v47, 8u);
    if ( v22 != 0 )
      v23 = (_DWORD *)((char *)v47 + v22 + *(_DWORD *)((char *)v47 + v22));
    else
      v23 = nullptr;
    v24 = v23 + 1;
    for ( i = nullptr; (unsigned int)i < *v23; i = (flatbuffers::Table *)((char *)i + 1) )
    {
      v45 = (flatbuffers::Table *)((char *)v24 + *v24);
      v25 = flatbuffers::Table::GetOptionalFieldOffset(v45, 4u);
      if ( v25 != 0 )
      {
        switch ( *((_BYTE *)v45 + v25) )
        {
          case 1:
            v26 = (ClientMob *)operator new(0xE8u);
            ClientMob::ClientMob(v26);
            break;
          case 2:
            v26 = (ClientMob *)operator new(0xD8u);
            ClientActorArrow::ClientActorArrow(v26);
            break;
          case 3:
            v26 = (ClientMob *)operator new(0xF8u);
            ClientItem::ClientItem(v26);
            break;
          case 4:
            v26 = (ClientMob *)operator new(0xB8u);
            ActorExpOrb::ActorExpOrb(v26, 0);
            break;
          case 6:
            v26 = (ClientMob *)operator new(0xC0u);
            ActorFallingSand::ActorFallingSand(v26);
            break;
          case 7:
            v26 = (ClientMob *)operator new(0xD0u);
            ActorFlyingBlock::ActorFlyingBlock(v26);
            break;
          case 8:
            v26 = (ClientMob *)operator new(0xB8u);
            ActorMinecartEmpty::ActorMinecartEmpty(v26, 0);
            break;
          case 9:
            v26 = (ClientMob *)operator new(0xD8u);
            ActorFireBall::ActorFireBall(v26);
            *(_DWORD *)v26 = &off_45C5D8;
            *((_DWORD *)v26 + 52) = 1;
            break;
          case 0xA:
            v26 = (ClientMob *)operator new(0x100u);
            ActorEnderman::ActorEnderman(v26);
            break;
          default:
            v26 = nullptr;
            break;
        }
      }
      else
      {
        v26 = nullptr;
      }
      v54 = *(int (__fastcall **)(ClientMob *, int))(*(_DWORD *)v26 + 4);
      v27 = flatbuffers::Table::GetOptionalFieldOffset(v45, 6u);
      if ( v27 != 0 )
        v28 = (int)v45 + v27 + *(_DWORD *)((char *)v45 + v27);
      else
        v28 = 0;
      if ( v54(v26, v28) != 0 )
        Chunk::addActor((Chunk *)a1, v26);
      else
        ClientActor::release(v26);
      ++v24;
    }
    v29 = flatbuffers::Table::GetOptionalFieldOffset(v47, 0xAu);
    v30 = (int)v47;
    if ( v29 != 0 )
      v31 = (_DWORD *)((char *)v47 + v29 + *(_DWORD *)((char *)v47 + v29));
    else
      v31 = nullptr;
    v32 = v31 + 1;
    for ( j = nullptr; (unsigned int)j < *v31; j = (flatbuffers::Table *)((char *)j + 1) )
    {
      v48 = (flatbuffers::Table *)((char *)v32 + *v32);
      v33 = flatbuffers::Table::GetOptionalFieldOffset(v48, 4u);
      if ( v33 != 0 )
      {
        switch ( *((_BYTE *)v48 + v33) )
        {
          case 1:
            v33 = operator new(0x38u);
            *(_DWORD *)(v33 + 4) = 0;
            *(_BYTE *)(v33 + 8) = 0;
            *(_DWORD *)(v33 + 12) = 0;
            *(_BYTE *)(v33 + 40) = 0;
            *(_DWORD *)v33 = &off_462800;
            goto LABEL_70;
          case 2:
            v33 = operator new(0x38u);
            *(_DWORD *)(v33 + 4) = 0;
            *(_BYTE *)(v33 + 8) = 0;
            *(_DWORD *)(v33 + 12) = 0;
            *(_BYTE *)(v33 + 40) = 0;
            *(_DWORD *)v33 = &off_462838;
            *(_DWORD *)(v33 + 48) = &byte_55FB88;
            goto LABEL_70;
          case 3:
            v34 = (WorldFurnace *)operator new(0xD8u);
            WorldFurnace::WorldFurnace(v34);
            break;
          case 4:
            v34 = (WorldFurnace *)operator new(0x650u);
            WorldStorageBox::WorldStorageBox(v34);
            break;
          case 5:
            v34 = (WorldFurnace *)operator new(0x50u);
            WorldPiston::WorldPiston(v34);
            break;
          default:
            v34 = nullptr;
            break;
        }
      }
      else
      {
LABEL_70:
        v34 = (WorldFurnace *)v33;
      }
      v51 = *(flatbuffers::Table **)(*(_DWORD *)v34 + 36);
      v35 = flatbuffers::Table::GetOptionalFieldOffset(v48, 6u);
      if ( v35 != 0 )
        v36 = (int)v48 + v35 + *(_DWORD *)((char *)v48 + v35);
      else
        v36 = 0;
      if ( ((int (__fastcall *)(WorldFurnace *, int))v51)(v34, v36) != 0 )
        Chunk::addContainer((Chunk *)a1, v34);
      else
        (*(void (__fastcall **)(WorldFurnace *))(*(_DWORD *)v34 + 4))(v34);
      ++v32;
      v30 = (int)j + 1;
    }
    v37 = profiny::Timer::stop((profiny::Timer *)&s_Timer, v30);
    v38 = profiny::Timer::getElapsedTime((profiny::Timer *)&s_Timer, SHIDWORD(v37));
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/chunksave.cpp", (const char *)&dword_F8 + 1, 2, v39);
    v40 = v38 * 1000.0;
    v41 = v40;
    v43 = LODWORD(v41);
    *(float *)&v41 = ElapsedTime * 1000.0;
    Ogre::LogMessage(
      (Ogre *)"Chunk::loadFromBuffer: x=%d, z=%d, read=%.2f, uncompress=%.2f",
      *(const char **)(a2 + 8),
      *(_DWORD *)(a2 + 12),
      v42,
      __PAIR64__(HIDWORD(v41), v43),
      *(float *)&v41);
    return 1;
  }
  return result;
}


//======================================================================
// Chunk::saveToBuffer(void)
// address: 0x00299568   size: 0x416 (1046 bytes)
//======================================================================
void *__fastcall Chunk::saveToBuffer(Chunk *this, int a2)
{
  int v2; // r2
  int i; // r5
  int v4; // r0
  int v5; // r3
  unsigned int v6; // r7
  int v7; // r4
  unsigned int j; // r5
  int v9; // r0
  void *v10; // r0
  int v11; // r6
  int v12; // r2
  int k; // r4
  unsigned int v14; // r5
  int v15; // r2
  __int16 v16; // r6
  unsigned int v17; // r0
  unsigned int v18; // r0
  unsigned int v19; // r5
  unsigned int v20; // r0
  int v21; // r0
  _DWORD *v22; // r6
  int v23; // r5
  int v24; // r4
  unsigned int v25; // r0
  int v26; // r0
  unsigned int v27; // r6
  size_t v28; // r6
  char *v29; // r5
  unsigned int m; // r4
  int v31; // r3
  unsigned int v32; // r0
  _DWORD *v33; // r7
  int v34; // r6
  int v35; // r5
  unsigned int v36; // r0
  unsigned int v37; // r0
  unsigned int ChunkSave; // r5
  unsigned int v39; // r0
  unsigned int v40; // r0
  int v41; // r7
  int v42; // r6
  void *v43; // r4
  int v44; // r3
  double v45; // r0
  int v46; // r1
  double v47; // r0
  unsigned int v48; // r3
  float v49; // r0
  double v50; // r0
  int v51; // r3
  unsigned int v53; // [sp+0h] [bp-C4h]
  int v54; // [sp+18h] [bp-ACh]
  unsigned int v55; // [sp+18h] [bp-ACh]
  double v56; // [sp+18h] [bp-ACh]
  double ElapsedTime; // [sp+20h] [bp-A4h]
  Chunk *v59; // [sp+28h] [bp-9Ch]
  unsigned int v60; // [sp+28h] [bp-9Ch]
  unsigned int v61; // [sp+2Ch] [bp-98h]
  unsigned int v62; // [sp+30h] [bp-94h] BYREF
  void *v63; // [sp+34h] [bp-90h] BYREF
  char *v64; // [sp+38h] [bp-8Ch]
  char *v65; // [sp+3Ch] [bp-88h]
  void *v66; // [sp+40h] [bp-84h] BYREF
  unsigned int *v67; // [sp+44h] [bp-80h]
  unsigned int *v68; // [sp+48h] [bp-7Ch]
  void *v69; // [sp+4Ch] [bp-78h] BYREF
  _BYTE v70[8]; // [sp+50h] [bp-74h] BYREF
  int v71; // [sp+58h] [bp-6Ch]
  unsigned int v72; // [sp+78h] [bp-4Ch]
  char v73; // [sp+7Ch] [bp-48h]
  _DWORD v74[17]; // [sp+80h] [bp-44h] BYREF

  profiny::Timer::start((profiny::Timer *)&s_Timer, a2);
  flatbuffers::FlatBufferBuilder::FlatBufferBuilder((flatbuffers::FlatBufferBuilder *)&v69, 0x400u, nullptr);
  flatbuffers::FlatBufferBuilder::StartVector((flatbuffers::FlatBufferBuilder *)&v69, 0x100u, 1u);
  for ( i = 256;
        i != 0;
        flatbuffers::FlatBufferBuilder::PushElement<unsigned char>(
          (flatbuffers::FlatBufferBuilder *)&v69,
          *((_BYTE *)this + i + 1060),
          v2) )
  {
    --i;
  }
  v4 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v69, 256);
  v5 = 0;
  v61 = v4;
  do
    v74[v5++] = 0;
  while ( v5 != 16 );
  v63 = nullptr;
  v64 = nullptr;
  v65 = nullptr;
  v59 = this;
  v54 = 0;
  v6 = 0;
  do
  {
    v7 = *((_DWORD *)v59 + 342);
    for ( j = 0; j < (*(_DWORD *)(v7 + 48) - *(_DWORD *)(v7 + 44)) >> 2; ++j )
    {
      v9 = *(_DWORD *)(4 * j + *(_DWORD *)(*((_DWORD *)v59 + 342) + 44));
      if ( *(int *)(v9 + 24) < 0 )
      {
        v10 = (void *)(**(int (__fastcall ***)(int, void **))v9)(v9, &v69);
        v66 = v10;
        if ( v10 != nullptr )
        {
          if ( v64 == v65 )
          {
            std::vector<flatbuffers::Offset<FBSave::SectionActor>>::_M_emplace_back_aux<flatbuffers::Offset<FBSave::SectionActor> const&>(
              (int *)&v63,
              &v66);
          }
          else
          {
            if ( v64 != nullptr )
              *(_DWORD *)v64 = v10;
            v64 += 4;
          }
        }
      }
    }
    if ( *(_WORD *)(v7 + 34) != 0 )
    {
      v11 = *(_DWORD *)(v7 + 20);
      flatbuffers::FlatBufferBuilder::StartVector((flatbuffers::FlatBufferBuilder *)&v69, 0x1000u, 2u);
      for ( k = 4096;
            k != 0;
            flatbuffers::FlatBufferBuilder::PushElement<unsigned short>(
              (flatbuffers::FlatBufferBuilder *)&v69,
              *(_WORD *)(v11 + 2 * k),
              v12) )
      {
        --k;
      }
      v14 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v69, 4096);
      v16 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v70);
      if ( v14 != 0 )
      {
        v17 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)&v69, v14);
        flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v69, 6u, v17, 0);
      }
      if ( (_BYTE)v54 != 0 || v73 != 0 )
      {
        v18 = flatbuffers::FlatBufferBuilder::PushElement<unsigned char>(
                (flatbuffers::FlatBufferBuilder *)&v69,
                v54,
                v15);
        flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)&v69, 4u, v18);
      }
      v74[v6++] = flatbuffers::FlatBufferBuilder::EndTable((char **)&v69, v16, 2);
    }
    ++v54;
    v59 = (Chunk *)((char *)v59 + 4);
  }
  while ( v54 != 16 );
  flatbuffers::FlatBufferBuilder::StartVector((flatbuffers::FlatBufferBuilder *)&v69, v6, 4u);
  v19 = v6;
  while ( v19 != 0 )
  {
    v20 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)&v69, v74[--v19]);
    flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v69, v20);
  }
  v21 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v69, v6);
  v22 = v63;
  v55 = v21;
  v23 = (v64 - (_BYTE *)v63) >> 2;
  flatbuffers::FlatBufferBuilder::StartVector((flatbuffers::FlatBufferBuilder *)&v69, v23, 4u);
  v24 = v23;
  while ( v24 != 0 )
  {
    v25 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)&v69, v22[--v24]);
    flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v69, v25);
  }
  v26 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v69, v23);
  v66 = nullptr;
  v67 = nullptr;
  v68 = nullptr;
  v60 = v26;
  v27 = (*((_DWORD *)this + 332) - *((_DWORD *)this + 331)) >> 2;
  if ( v27 > 0x3FFFFFFF )
    sub_3BD058("vector::reserve");
  if ( v27 != 0 )
  {
    v28 = 4 * v27;
    v29 = (char *)operator new(v28);
    if ( v66 != nullptr )
      operator delete(v66);
    v66 = v29;
    v67 = (unsigned int *)v29;
    v68 = (unsigned int *)&v29[v28];
  }
  for ( m = 0; ; ++m )
  {
    v31 = *((_DWORD *)this + 331);
    if ( m >= (*((_DWORD *)this + 332) - v31) >> 2 )
      break;
    v32 = (*(int (__fastcall **)(_DWORD, void **))(**(_DWORD **)(4 * m + v31) + 32))(*(_DWORD *)(4 * m + v31), &v69);
    v62 = v32;
    if ( v67 == v68 )
    {
      std::vector<flatbuffers::Offset<FBSave::ChunkContainer>>::_M_emplace_back_aux<flatbuffers::Offset<FBSave::ChunkContainer>>(
        (int *)&v66,
        &v62);
    }
    else
    {
      if ( v67 != nullptr )
        *v67 = v32;
      ++v67;
    }
  }
  v33 = v66;
  v34 = ((char *)v67 - (_BYTE *)v66) >> 2;
  flatbuffers::FlatBufferBuilder::StartVector((flatbuffers::FlatBufferBuilder *)&v69, v34, 4u);
  v35 = v34;
  while ( v35 != 0 )
  {
    v36 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)&v69, v33[--v35]);
    flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v69, v36);
  }
  v37 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v69, v34);
  ChunkSave = FBSave::CreateChunkSave((int)&v69, v61, v55, v60, v37);
  flatbuffers::FlatBufferBuilder::PreAlign((flatbuffers::FlatBufferBuilder *)&v69, 4u, v72);
  v39 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)&v69, ChunkSave);
  flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v69, v39);
  v40 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v70);
  v41 = v71;
  v42 = v40;
  v62 = compressBound(v40);
  v43 = j_malloc(v62 + 40);
  *(_DWORD *)v43 = *(_DWORD *)(*((_DWORD *)this + 358) + 24);
  *((_WORD *)v43 + 2) = *((_WORD *)this + 668);
  *((_DWORD *)v43 + 2) = *((_DWORD *)this + 69) / 16 - ((unsigned int)(*((_DWORD *)this + 69) % 16) >> 31);
  v44 = *((_DWORD *)this + 71);
  *((_DWORD *)v43 + 3) = v44 / 16 - ((unsigned int)(v44 % 16) >> 31);
  v45 = profiny::Timer::stop((profiny::Timer *)&s_Timer, 16 * (v44 / 16));
  ElapsedTime = profiny::Timer::getElapsedTime((profiny::Timer *)&s_Timer, SHIDWORD(v45));
  profiny::Timer::start((profiny::Timer *)&s_Timer, SHIDWORD(ElapsedTime));
  if ( compress((int)v43 + 32, (int *)&v62, v41, v42) != 0 )
  {
    j_free(v43);
    v43 = nullptr;
  }
  else
  {
    v47 = profiny::Timer::stop((profiny::Timer *)&s_Timer, v46);
    v56 = profiny::Timer::getElapsedTime((profiny::Timer *)&s_Timer, SHIDWORD(v47));
    v48 = v62;
    *((_DWORD *)v43 + 6) = v42;
    *((_DWORD *)v43 + 7) = v48;
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/chunksave.cpp", (const char *)&dword_98, 2, v48);
    v49 = ElapsedTime * 1000.0;
    v50 = v49;
    v53 = LODWORD(v50);
    *(float *)&v50 = v56 * 1000.0;
    Ogre::LogMessage(
      (Ogre *)"Chunk::saveToBuffer: x=%d, z=%d, write=%.2f, compress=%.2f",
      *((const char **)v43 + 2),
      *((_DWORD *)v43 + 3),
      v51,
      __PAIR64__(HIDWORD(v50), v53),
      *(float *)&v50);
  }
  if ( v66 != nullptr )
    operator delete(v66);
  if ( v63 != nullptr )
    operator delete(v63);
  flatbuffers::FlatBufferBuilder::~FlatBufferBuilder(&v69);
  return v43;
}


//======================================================================
// Chunk::getBlock(WCoord const&)
// address: 0x002C85D2   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Chunk::getBlock(Chunk *this, const WCoord *a2)
{
  return Chunk::getBlock(this, *(_DWORD *)a2, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2));
}


//======================================================================
// Chunk::genMesh(WCoord const&)
// address: 0x002CF8FC   size: 0xDA (218 bytes)
//======================================================================
Ogre::Timer *__fastcall Chunk::genMesh(Chunk *this, const WCoord *a2)
{
  signed int v3; // r0
  int v4; // r6
  int v5; // r5
  __suseconds_t v6; // r1
  unsigned int v7; // r3
  int v8; // r2
  int v9; // r7
  Ogre::Timer *result; // r0
  SectionMergeObject *v11; // r5
  void **v12; // r0
  __suseconds_t v13; // r1
  unsigned int v14; // [sp+4h] [bp-58h]
  int i; // [sp+8h] [bp-54h]
  _DWORD v16[2]; // [sp+10h] [bp-4Ch]
  ClientSection *v17[17]; // [sp+18h] [bp-44h] BYREF

  v3 = CoordDivSection(*((_DWORD *)a2 + 1));
  v4 = v3;
  if ( v3 < 0 )
  {
    v4 = 0;
  }
  else if ( v3 > 15 )
  {
    v4 = 15;
  }
  v5 = 0;
  v14 = 0;
  do
  {
    v16[0] = v5;
    v16[1] = ~v5;
    for ( i = 0; i != 2; ++i )
    {
      v6 = i * 4;
      v7 = v4 + v16[i];
      if ( v7 <= 0xF )
      {
        v8 = *((int *)this + 335) >> v7;
        v6 = v8 << 31;
        if ( (v8 & 1) != 0 )
        {
          v9 = *((_DWORD *)this + v7 + 342);
          if ( *(_BYTE *)(v9 + 40) != 0 )
          {
            result = (Ogre::Timer *)ClientSection::createRawMesh((ClientSection *)v9);
            if ( *(_DWORD *)(v9 + 56) != 0 )
              return result;
          }
          if ( *(_DWORD *)(v9 + 56) != 0 )
          {
            v6 = v14 + 1;
            v17[v14++] = (ClientSection *)v9;
          }
        }
      }
    }
    ++v5;
  }
  while ( v5 != 17 );
  result = *((Ogre::Timer **)this + 337);
  if ( result != nullptr )
  {
    result = (Ogre::Timer *)Ogre::BaseObject::release(result);
    *((_DWORD *)this + 337) = 0;
  }
  if ( v14 != 0 )
  {
    Ogre::Timer::getSystemTick(result, v6);
    v11 = (SectionMergeObject *)operator new(0x124u);
    SectionMergeObject::SectionMergeObject(v11);
    v12 = SectionMergeObject::mergeSections(v11, v17, v14);
    result = (Ogre::Timer *)Ogre::Timer::getSystemTick((Ogre::Timer *)v12, v13);
    *((_DWORD *)this + 337) = v11;
    *((_DWORD *)this + 336) = *((_DWORD *)this + 335);
  }
  return result;
}


//======================================================================
// Chunk::~Chunk()
// address: 0x002DA964   size: 0x5E (94 bytes)
//======================================================================
// Alternative name is '_ZN5ChunkD1Ev'
void __fastcall Chunk::~Chunk(Chunk *this)
{
  _DWORD *v2; // r0
  int v3; // r3
  int i; // r5
  int v5; // r0
  void *v6; // r0
  void *v7; // r0

  *(_DWORD *)this = &off_461088;
  v2 = *((_DWORD **)this + 337);
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
  }
  for ( i = 0; i != 64; i += 4 )
  {
    v5 = *(_DWORD *)((char *)this + i + 1368);
    if ( v5 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  }
  v6 = *((void **)this + 339);
  if ( v6 != nullptr )
    operator delete(v6);
  v7 = *((void **)this + 331);
  if ( v7 != nullptr )
    operator delete(v7);
}


//======================================================================
// Chunk::~Chunk()
// address: 0x002DA9D4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Chunk::~Chunk(Chunk *this)
{
  Chunk::~Chunk(this);
  operator delete(this);
}


//======================================================================
// Chunk::_init(World *,int,int)
// address: 0x002DAA10   size: 0xBE (190 bytes)
//======================================================================
int __fastcall Chunk::_init(Chunk *this, World *a2, int a3, int a4)
{
  int v5; // r5
  char *v6; // r0
  __int64 ChunkSeed; // r0
  int v8; // r3
  int v9; // r0
  int *v10; // r3
  int result; // r0
  int i; // r3
  _WORD *v13; // r1

  *((_DWORD *)this + 358) = a2;
  v5 = 0;
  *((_DWORD *)this + 335) = 0;
  *((_DWORD *)this + 336) = 0;
  *((_DWORD *)this + 337) = 0;
  v6 = (char *)this + 255;
  v6[13] = 0;
  v6[14] = 0;
  *((_DWORD *)this + 68) = -1;
  *((_DWORD *)this + 69) = 16 * a3;
  *((_DWORD *)this + 71) = 16 * a4;
  *((_DWORD *)this + 70) = 0;
  ChunkSeed = World::getChunkSeed(a2, a3, a4);
  ChunkRandGen::setSeed64((int)this + 262, ChunkSeed);
  v8 = *((_DWORD *)this + 358);
  *((_DWORD *)this + 329) = *(_DWORD *)(v8 + 4);
  *((_BYTE *)this + 1338) = 0;
  *((_BYTE *)this + 1339) = 0;
  *((_WORD *)this + 668) = *(_WORD *)(v8 + 60);
  *((_DWORD *)this + 330) = 0;
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 338) = 4096;
  j_memset((char *)this + 292, 0, 0x100u);
  do
  {
    v9 = (*(int (__fastcall **)(_DWORD, Chunk *, int))(**((_DWORD **)this + 358) + 20))(
           *((_DWORD *)this + 358),
           this,
           v5);
    v10 = (int *)((char *)this + 4 * v5++ + 1368);
    *v10 = v9;
  }
  while ( v5 != 16 );
  result = -5678;
  for ( i = 0; i != 512; i += 2 )
  {
    v13 = (_WORD *)((char *)this + i + 548);
    *v13 = -5678;
  }
  return result;
}


//======================================================================
// Chunk::Chunk(World *,int,int,unsigned short *)
// address: 0x002DAAE8   size: 0x116 (278 bytes)
//======================================================================
// Alternative name is '_ZN5ChunkC2EP5WorldiiPt'
void __fastcall Chunk::Chunk(Chunk *this, World *a2, int a3, int a4, unsigned __int16 *a5)
{
  int v8; // r6
  int k; // r5
  __int16 v10; // r7
  int v11; // r5
  int Material; // r0
  int j; // [sp+0h] [bp-1Ch]
  int i; // [sp+4h] [bp-18h]

  *(_DWORD *)this = &off_461088;
  ChunkRandGen::ChunkRandGen((Chunk *)((char *)this + 262));
  *((_DWORD *)this + 331) = 0;
  *((_DWORD *)this + 332) = 0;
  *((_DWORD *)this + 333) = 0;
  *((_DWORD *)this + 339) = 0;
  *((_DWORD *)this + 340) = 0;
  *((_DWORD *)this + 341) = 0;
  Chunk::_init(this, a2, a3, a4);
  v8 = 0;
  if ( a5 != nullptr )
  {
    do
    {
      v11 = *((_DWORD *)this + (v8 >> 4) + 342);
      for ( i = 0; i != 16; ++i )
      {
        for ( j = 0; j != 16; ++j )
        {
          v10 = a5[j | (v8 << 8) | (16 * i)];
          if ( v10 != 0 )
          {
            if ( *(_DWORD *)(v11 + 20) == 0 )
              Section::allocBlocks((Section *)v11);
            Block::setAllData((_WORD *)(*(_DWORD *)(v11 + 20) + 2 * (j | ((v8 & 0xF) << 8) | (16 * i))), v10);
            ++*(_WORD *)(v11 + 34);
            Material = BlockMaterialMgr::getMaterial(
                         (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                         v10 & 0xFFF);
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)Material + 88))(Material) != 0 )
              ++*(_WORD *)(v11 + 36);
            *(_BYTE *)(v11 + 40) = 1;
            *(_BYTE *)(v11 + 41) = 1;
            *(_BYTE *)(v11 + 42) = 1;
          }
        }
      }
      ++v8;
    }
    while ( v8 != 128 );
  }
  for ( k = 0; k != 64; k += 4 )
    Section::genConnectGraph(*(Section **)((char *)this + k + 1368));
}


//======================================================================
// Chunk::onChunkLoaded(void)
// address: 0x002DAC2C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Chunk::onChunkLoaded(Chunk *this)
{
  ;
}


//======================================================================
// Chunk::saveActors(void)
// address: 0x002DAC2E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Chunk::saveActors(Chunk *this)
{
  ;
}


//======================================================================
// Chunk::saveContainers(void)
// address: 0x002DAC30   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Chunk::saveContainers(Chunk *this)
{
  ;
}


//======================================================================
// Chunk::needSave(bool)
// address: 0x002DAC34   size: 0xDC (220 bytes)
//======================================================================
int __fastcall Chunk::needSave(Chunk *this, int a2)
{
  int v2; // r5
  char *v4; // r6
  int v5; // r3
  unsigned int v6; // r3
  unsigned int v7; // r0
  unsigned int v8; // r3
  const char *v9; // r4
  unsigned int v10; // r0
  char *v12; // [sp+Ch] [bp-8h]

  v2 = *((unsigned __int8 *)this + 269);
  if ( *((_BYTE *)this + 269) == 0 )
    return v2;
  v4 = (char *)this + 252;
  if ( *((int *)this + 68) < 0 )
    return 0;
  v5 = *((_DWORD *)this + 330);
  if ( a2 == 0 )
  {
    if ( v5 > 0 )
    {
      v6 = *(_DWORD *)(*((_DWORD *)this + 358) + 4);
      if ( v6 > *((_DWORD *)this + 329) + 1200 )
      {
        Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/chunk.cpp", (_BYTE *)&stru_228.st_name + 1, 2, v6);
        v12 = (char *)BlockDivSection(*((_DWORD *)v4 + 6));
        v7 = BlockDivSection(*((_DWORD *)v4 + 8));
        Ogre::LogMessage(
          (Ogre *)"Chunk::needSave: x=%d, z=%d, lastsavetick=%d, worldtick=%d",
          v12,
          v7,
          *((_DWORD *)this + 329),
          *(_DWORD *)(*((_DWORD *)this + 358) + 4));
        return v2;
      }
    }
    v2 = *((unsigned __int8 *)this + 1339);
    if ( *((_BYTE *)this + 1339) == 0 )
      return v2;
    v8 = *((_DWORD *)this + 329) + 1200;
    if ( *(_DWORD *)(*((_DWORD *)this + 358) + 4) > v8 )
    {
      Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/chunk.cpp", (const char *)&stru_228.st_size, 2, v8);
      v9 = (const char *)BlockDivSection(*((_DWORD *)v4 + 6));
      v10 = BlockDivSection(*((_DWORD *)v4 + 8));
      Ogre::LogMessage((Ogre *)"Chunk::needSave_dirty: x=%d, z=%d", v9, v10);
      return v2;
    }
    return 0;
  }
  if ( v5 <= 0 || *(_DWORD *)(*((_DWORD *)this + 358) + 4) == *((_DWORD *)this + 329) )
    return *((unsigned __int8 *)this + 1339);
  return v2;
}


//======================================================================
// Chunk::addActor(ClientActor *)
// address: 0x002DAD2C   size: 0x7E (126 bytes)
//======================================================================
int __fastcall Chunk::addActor(Chunk *this, ClientActor *a2)
{
  signed int v4; // r4
  unsigned int v5; // r0
  int result; // r0
  unsigned int v7; // [sp+4h] [bp-18h]
  _DWORD v8[4]; // [sp+Ch] [bp-10h] BYREF

  ClientActor::getPosition((ClientActor *)v8);
  v4 = v8[1] / 1600 - ((unsigned int)(v8[1] % 1600) >> 31);
  if ( v4 < 0 )
  {
    v4 = 0;
  }
  else if ( v4 > 15 )
  {
    v4 = 15;
  }
  *((_BYTE *)a2 + 8) = 1;
  v7 = BlockDivSection(*((_DWORD *)this + 69));
  v5 = BlockDivSection(*((_DWORD *)this + 71));
  *((_DWORD *)a2 + 4) = v4;
  *((_DWORD *)a2 + 3) = v7;
  *((_DWORD *)a2 + 5) = v5;
  Section::addActor(*((Section **)this + v4 + 342), a2);
  result = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 24))(a2);
  if ( result != 5 )
    ++*((_DWORD *)this + 330);
  *((_BYTE *)this + 1339) = 1;
  return result;
}


//======================================================================
// Chunk::removeActor(ClientActor *)
// address: 0x002DADB4   size: 0x36 (54 bytes)
//======================================================================
int __fastcall Chunk::removeActor(Section **this, ClientActor *a2)
{
  int result; // r0

  Section::removeActor(*(this + *((_DWORD *)a2 + 4) + 342), a2);
  *((_BYTE *)a2 + 8) = 0;
  result = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 24))(a2);
  if ( result != 5 )
    *(this + 330) = (Section *)((char *)*(this + 330) - 1);
  *((_BYTE *)this + 1339) = 1;
  return result;
}


//======================================================================
// Chunk::onEnterWorld(World *)
// address: 0x002DADF0   size: 0x86 (134 bytes)
//======================================================================
int __fastcall Chunk::onEnterWorld(int this, World *a2)
{
  _DWORD *v2; // r4
  int v3; // r7
  unsigned int j; // r5
  int v5; // r3
  ClientActor *v6; // r6
  unsigned int k; // r5
  int v8; // r3
  int i; // [sp+8h] [bp-Ch]
  ClientActorMgr *v10; // [sp+Ch] [bp-8h]

  *(_DWORD *)(this + 1432) = a2;
  v2 = (_DWORD *)this;
  v10 = *((ClientActorMgr **)a2 + 33);
  for ( i = 0; i != 16; ++i )
  {
    v3 = v2[i + 342];
    for ( j = 0; ; ++j )
    {
      v5 = *(_DWORD *)(v3 + 44);
      if ( j >= (*(_DWORD *)(v3 + 48) - v5) >> 2 )
        break;
      v6 = *(ClientActor **)(4 * j + v5);
      this = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)v6 + 64))(v6);
      if ( this != 0 )
      {
        this = (int)v10;
        ClientActorMgr::addActorByChunk(v10, v6);
      }
    }
  }
  for ( k = 0; ; ++k )
  {
    v8 = v2[331];
    if ( k >= (v2[332] - v8) >> 2 )
      break;
    this = WorldContainerMgr::addContainerByChunk(
             *(WorldContainerMgr **)(v2[358] + 128),
             *(WorldContainer **)(4 * k + v8));
  }
  return this;
}


//======================================================================
// Chunk::onLeaveWorld(void)
// address: 0x002DAE7C   size: 0x8E (142 bytes)
//======================================================================
int __fastcall Chunk::onLeaveWorld(int this)
{
  _DWORD *v1; // r4
  int v2; // r7
  unsigned int i; // r5
  int v4; // r3
  ClientActor *v5; // r6
  unsigned int j; // r5
  int v7; // r3
  int v8; // [sp+8h] [bp-Ch]
  ClientActorMgr *v9; // [sp+Ch] [bp-8h]

  v1 = (_DWORD *)this;
  v8 = 0;
  v9 = *(ClientActorMgr **)(*(_DWORD *)(this + 1432) + 132);
  do
  {
    v2 = v1[v8 + 342];
    for ( i = 0; ; ++i )
    {
      v4 = *(_DWORD *)(v2 + 44);
      if ( i >= (*(_DWORD *)(v2 + 48) - v4) >> 2 )
        break;
      v5 = *(ClientActor **)(4 * i + v4);
      this = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)v5 + 64))(v5);
      if ( this != 0 )
        this = ClientActorMgr::removeActorByChunk(v9, v5);
    }
    ++v8;
  }
  while ( v8 != 16 );
  for ( j = 0; ; ++j )
  {
    v7 = v1[331];
    if ( j >= (v1[332] - v7) >> 2 )
      break;
    this = WorldContainerMgr::removeContainerByChunk(
             *(WorldContainerMgr **)(v1[358] + 128),
             *(WorldContainer **)(4 * j + v7));
  }
  v1[358] = 0;
  return this;
}


//======================================================================
// Chunk::getTopFilledSegment(void)
// address: 0x002DAF10   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Chunk::getTopFilledSegment(Chunk *this)
{
  int v1; // r3
  int v2; // r2

  v1 = 15;
  do
  {
    v2 = *(unsigned __int16 *)(*((_DWORD *)this + v1 + 342) + 34);
    if ( *(_WORD *)(*((_DWORD *)this + v1 + 342) + 34) != 0 )
      return 16 * v1;
  }
  while ( v1-- != 0 );
  return v2;
}


//======================================================================
// Chunk::updateSkylightNeighborHeight(int,int,int,int)
// address: 0x002DAF32   size: 0x68 (104 bytes)
//======================================================================
int __fastcall Chunk::updateSkylightNeighborHeight(int this, int a2, int a3, int a4, int a5)
{
  int v5; // r5
  int v6; // r6
  World *v7; // r0
  World *v8; // r0
  _DWORD v11[3]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v12[4]; // [sp+14h] [bp-10h] BYREF

  v5 = a4;
  v6 = this;
  if ( a5 > a4 )
  {
    v11[0] = a2 - 16;
    v11[1] = -16;
    v11[2] = a3 - 16;
    v12[0] = a2 + 16;
    v12[1] = 16;
    v7 = *(World **)(this + 1432);
    v12[2] = a3 + 16;
    this = World::checkChunksExist(v7, (const WCoord *)v11, (const WCoord *)v12);
    if ( this != 0 )
    {
      do
      {
        v8 = *(World **)(v6 + 1432);
        v12[0] = a2;
        v12[1] = v5;
        v12[2] = a3;
        this = World::blockLightingChange(v8, 0, (const WCoord *)v12);
        ++v5;
      }
      while ( v5 != a5 );
    }
  }
  return this;
}


//======================================================================
// Chunk::checkSkylightNeighborHeight(int,int,int)
// address: 0x002DAF9A   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall Chunk::checkSkylightNeighborHeight(__int64 this, int a2, int a3)
{
  _DWORD *TopHeight; // r0
  __int64 v8; // [sp+0h] [bp-Ch]

  v8 = this;
  TopHeight = World::getTopHeight(*(World **)(this + 1432), SHIDWORD(this), a2);
  if ( (int)TopHeight <= a3 )
  {
    if ( (int)TopHeight < a3 )
      Chunk::updateSkylightNeighborHeight(this, SHIDWORD(this), a2, (int)TopHeight, a3 + 1);
  }
  else
  {
    Chunk::updateSkylightNeighborHeight(this, SHIDWORD(this), a2, a3, (int)TopHeight + 1);
  }
  return v8;
}


//======================================================================
// Chunk::updateSkylight_do(void)
// address: 0x002DAFD6   size: 0x124 (292 bytes)
//======================================================================
int __fastcall Chunk::updateSkylight_do(Chunk *this)
{
  int v1; // r6
  char *v2; // r3
  __int64 v3; // r4
  int v4; // r0
  int v5; // r3
  World *v6; // r0
  int result; // r0
  int v8; // r3
  int v9; // r6
  int v10; // r0
  int v11; // r3
  int j; // [sp+0h] [bp-44h]
  int i; // [sp+4h] [bp-40h]
  int v14; // [sp+8h] [bp-3Ch]
  int ChunkHeightMapMinimum; // [sp+10h] [bp-34h]
  int v16; // [sp+18h] [bp-2Ch]
  int v17; // [sp+24h] [bp-20h]
  _DWORD v18[3]; // [sp+28h] [bp-1Ch] BYREF
  _DWORD v19[4]; // [sp+34h] [bp-10h] BYREF

  v1 = *((_DWORD *)this + 69);
  v2 = (char *)this + 276;
  LODWORD(v3) = this;
  v4 = *((_DWORD *)this + 70);
  v5 = *((_DWORD *)v2 + 2);
  v18[0] = v1 - 8;
  v18[1] = v4 - 8;
  v18[2] = v5 - 8;
  v19[1] = v4 + 24;
  v6 = *(World **)(v3 + 1432);
  v19[0] = v1 + 24;
  v19[2] = v5 + 24;
  result = World::checkChunksExist(v6, (const WCoord *)v18, (const WCoord *)v19);
  if ( result != 0 )
  {
    for ( i = 0; i != 16; ++i )
    {
      for ( j = 0; j != 16; ++j )
      {
        v8 = v3 + ((16 * j) | i);
        if ( *(_BYTE *)(v8 + 5) != 0 )
        {
          *(_BYTE *)(v8 + 5) = 0;
          v14 = *(unsigned __int8 *)(v8 + 292);
          HIDWORD(v3) = i + *(_DWORD *)(v3 + 276);
          v9 = j + *(_DWORD *)(v3 + 284);
          ChunkHeightMapMinimum = World::getChunkHeightMapMinimum(*(World **)(v3 + 1432), HIDWORD(v3) - 1, v9);
          v17 = World::getChunkHeightMapMinimum(*(World **)(v3 + 1432), HIDWORD(v3) + 1, v9);
          v16 = World::getChunkHeightMapMinimum(*(World **)(v3 + 1432), SHIDWORD(v3), v9 - 1);
          v10 = World::getChunkHeightMapMinimum(*(World **)(v3 + 1432), SHIDWORD(v3), v9 + 1);
          v11 = v17;
          if ( v17 > ChunkHeightMapMinimum )
            v11 = ChunkHeightMapMinimum;
          if ( v11 > v16 )
            v11 = v16;
          if ( v11 > v10 )
            v11 = v10;
          Chunk::checkSkylightNeighborHeight(v3, v9, v11);
          Chunk::checkSkylightNeighborHeight(__SPAIR64__(HIDWORD(v3) - 1, v3), v9, v14);
          Chunk::checkSkylightNeighborHeight(__SPAIR64__(HIDWORD(v3) + 1, v3), v9, v14);
          Chunk::checkSkylightNeighborHeight(v3, v9 - 1, v14);
          result = Chunk::checkSkylightNeighborHeight(v3, v9 + 1, v14);
        }
      }
    }
    *(_BYTE *)(v3 + 4) = 0;
  }
  return result;
}


//======================================================================
// Chunk::updateSkylight(void)
// address: 0x002DB0FA   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Chunk::updateSkylight(int this)
{
  Chunk *v1; // r4

  v1 = (Chunk *)this;
  if ( *(_BYTE *)(this + 4) != 0 )
  {
    this = World::hasSky(*(World **)(this + 1432));
    if ( this != 0 )
      return Chunk::updateSkylight_do(v1);
  }
  return this;
}


//======================================================================
// Chunk::setBlockData(int,int,int,int)
// address: 0x002DB11C   size: 0x68 (104 bytes)
//======================================================================
int __fastcall Chunk::setBlockData(Chunk *this, int a2, int a3, int a4, int a5)
{
  unsigned int v9; // r0
  int v10; // r3
  int v11; // r3
  _WORD *v12; // r0

  v9 = BlockDivSection(a3);
  if ( v9 > 0xF )
    v10 = 0;
  else
    v10 = *((_DWORD *)this + v9 + 342);
  v11 = *(_DWORD *)(v10 + 20);
  if ( v11 != 0 )
  {
    v12 = (_WORD *)(v11 + 2 * ((16 * a4) | a2 | ((a3 % 16) << 8)));
    v11 = 0;
    if ( (int)(unsigned __int16)*v12 >> 12 != a5 )
    {
      Block::setData(v12, a5);
      v11 = 1;
      if ( g_ChunkSetDirty != 0 )
        *((_BYTE *)this + 1339) = 1;
    }
  }
  return v11;
}


//======================================================================
// Chunk::getBiome(int,int)
// address: 0x002DB190   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Chunk::getBiome(Chunk *this, int a2, int a3)
{
  return DefManager::getBiomeDef(
           (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
           *((unsigned __int8 *)this + 16 * a3 + a2 + 1060));
}


//======================================================================
// Chunk::getBiomeGen(int,int)
// address: 0x002DB1B4   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Chunk::getBiomeGen(Chunk *this, int a2, int a3)
{
  int v4; // r0

  v4 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 358) + 124) + 24);
  return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v4 + 16))(
           v4,
           *((unsigned __int8 *)this + (a2 | (16 * a3)) + 1060));
}


//======================================================================
// Chunk::setEmptyBlockLight(int)
// address: 0x002DB1D8   size: 0x8 (8 bytes)
//======================================================================
char __fastcall Chunk::setEmptyBlockLight(char this, int a2)
{
  byte_5173C8 = this;
  return this;
}


//======================================================================
// Chunk::getBlock(int,int,int)
// address: 0x002DB1E4   size: 0x44 (68 bytes)
//======================================================================
__int16 *__fastcall Chunk::getBlock(Chunk *this, int a2, unsigned int a3, int a4)
{
  int v4; // r4
  int v5; // r4
  int v6; // r2

  if ( a3 > 0xFF )
    return &word_5173CA;
  v4 = *((_DWORD *)this + ((int)a3 >> 4) + 342);
  if ( *(_WORD *)(v4 + 34) == 0 )
    return &word_5173CA;
  v5 = *(_DWORD *)(v4 + 20);
  v6 = a3 & 0xF;
  if ( v5 != 0 )
    return (__int16 *)(v5 + 2 * (a2 | (16 * a4) | (v6 << 8)));
  else
    return &Section::m_EmptyBlock;
}


//======================================================================
// Chunk::calTopHeight(int,int)
// address: 0x002DB234   size: 0x40 (64 bytes)
//======================================================================
__int16 *__fastcall Chunk::calTopHeight(Chunk *this, int a2, int a3)
{
  unsigned int v6; // r4
  __int16 *result; // r0

  v6 = 255;
  do
  {
    result = Chunk::getBlock(this, a2, v6, a3);
    if ( (*result & 0xFFF) != 0 )
    {
      *((_BYTE *)this + (a2 | (16 * a3)) + 292) = v6 + 1;
      return result;
    }
  }
  while ( v6-- != 0 );
  *((_BYTE *)this + (a2 | (16 * a3)) + 292) = 0;
  return result;
}


//======================================================================
// Chunk::getPrecipitationHeight(int,int)
// address: 0x002DB274   size: 0x6A (106 bytes)
//======================================================================
int __fastcall Chunk::getPrecipitationHeight(Chunk *this, int a2, int a3)
{
  int result; // r0
  signed int i; // r4
  int v8; // r1
  char *v9; // [sp+4h] [bp-8h]

  v9 = (char *)this + 2 * ((16 * a3) | a2);
  result = *((__int16 *)v9 + 274);
  if ( result == -5678 )
  {
    for ( i = Chunk::getTopFilledSegment(this) + 15; i > 0; --i )
    {
      v8 = *Chunk::getBlock(this, a2, i, a3) & 0xFFF;
      if ( v8 != 0
        && *(_DWORD *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v8) + 12) != 0 )
      {
        result = i + 1;
        goto LABEL_9;
      }
    }
    result = -1;
LABEL_9:
    *((_WORD *)v9 + 274) = result;
  }
  return result;
}


//======================================================================
// Chunk::getBlockLightOpacity(int,int,int)
// address: 0x002DB2E8   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Chunk::getBlockLightOpacity(Chunk *this, int a2, unsigned int a3, int a4)
{
  return (unsigned __int8)BlockMaterial::m_LightOpacity[*Chunk::getBlock(this, a2, a3, a4) & 0xFFF];
}


//======================================================================
// Chunk::relightBlock(int,int,int)
// address: 0x002DB304   size: 0x234 (564 bytes)
//======================================================================
int __fastcall Chunk::relightBlock(int this, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r6
  int v6; // r5
  int v7; // r5
  int v8; // r3
  int v9; // r7
  int v10; // r7
  int v11; // r2
  int v12; // r2
  char *v13; // r3
  World *v14; // r3
  int v15; // r7
  int v16; // r2
  int v17; // r2
  char *v18; // r3
  World *v19; // r3
  int BlockLightOpacity; // r0
  int v21; // r2
  int v22; // r2
  char *v23; // r3
  int v24; // r3
  int v25; // [sp+14h] [bp-30h]
  int v27; // [sp+1Ch] [bp-28h]
  int v29; // [sp+24h] [bp-20h]
  int v30; // [sp+24h] [bp-20h]
  int v31; // [sp+2Ch] [bp-18h]
  _DWORD v32[4]; // [sp+34h] [bp-10h] BYREF

  v4 = this;
  v31 = 16 * a4 + a2;
  v5 = *(unsigned __int8 *)(this + v31 + 292);
  v6 = v5;
  if ( v5 < a3 )
    v6 = a3;
  while ( v6 != 0 )
  {
    this = Chunk::getBlockLightOpacity((Chunk *)v4, a2, v6 - 1, a4);
    if ( this != 0 )
      break;
    --v6;
  }
  if ( v6 != v5 )
  {
    v25 = a2 + *(_DWORD *)(v4 + 276);
    v27 = a4 + *(_DWORD *)(v4 + 284);
    World::markBlocksDirtyVertical(*(World **)(v4 + 1432), v25, v27, v6, v5);
    *(_BYTE *)(v4 + v31 + 292) = v6;
    if ( World::hasSky(*(World **)(v4 + 1432)) != 0 )
    {
      v8 = 16 * a4;
      if ( v6 < v5 )
      {
        v10 = v6;
        v30 = a2 | v8;
        do
        {
          v11 = *(_DWORD *)(4 * ((v10 >> 4) + 342) + v4);
          if ( *(_DWORD *)(v11 + 20) != 0 )
          {
            v12 = *(_DWORD *)(v11 + 24);
            if ( v12 != 0 )
              v13 = (char *)(v12 + (((v10 & 0xF) << 8) | v30));
            else
              v13 = &Section::m_EmptyBlockLight;
            *v13 = *v13 & 0xF0 | 0xF;
            v14 = *(World **)(v4 + 1432);
            v32[0] = v25;
            v32[1] = v10;
            v32[2] = v27;
            World::markBlockForUpdate(v14, (const WCoord *)v32);
          }
          ++v10;
        }
        while ( v10 < v5 );
      }
      else
      {
        v9 = v5;
        v29 = a2 | v8;
        while ( v9 < v6 )
        {
          v16 = *(_DWORD *)(4 * ((v9 >> 4) + 342) + v4);
          if ( *(_DWORD *)(v16 + 20) != 0 )
          {
            v17 = *(_DWORD *)(v16 + 24);
            if ( v17 != 0 )
              v18 = (char *)(v17 + (((v9 & 0xF) << 8) | v29));
            else
              v18 = &Section::m_EmptyBlockLight;
            *v18 &= 0xF0u;
            v19 = *(World **)(v4 + 1432);
            v32[0] = v25;
            v32[1] = v9;
            v32[2] = v27;
            World::markBlockForUpdate(v19, (const WCoord *)v32);
          }
          ++v9;
        }
      }
      v15 = 15;
      while ( v6 > 0 && v15 != 0 )
      {
        BlockLightOpacity = Chunk::getBlockLightOpacity((Chunk *)v4, a2, --v6, a4);
        if ( BlockLightOpacity <= 0 )
          BlockLightOpacity = 1;
        v15 = (v15 - BlockLightOpacity) & (~(v15 - BlockLightOpacity) >> 31);
        v21 = *(_DWORD *)(4 * ((v6 >> 4) + 342) + v4);
        if ( *(_DWORD *)(v21 + 20) != 0 )
        {
          v22 = *(_DWORD *)(v21 + 24);
          if ( v22 != 0 )
            v23 = (char *)(v22 + (((v6 & 0xF) << 8) | a2 | (16 * a4)));
          else
            v23 = &Section::m_EmptyBlockLight;
          *v23 = *v23 & 0xF0 | v15;
        }
      }
    }
    v7 = *(unsigned __int8 *)(v4 + v31 + 292);
    if ( v7 < *(_DWORD *)(v4 + 288) )
      *(_DWORD *)(v4 + 288) = v7;
    if ( v7 >= v5 )
    {
      v24 = v7;
      v7 = v5;
      v5 = v24;
    }
    this = World::hasSky(*(World **)(v4 + 1432));
    if ( this != 0 )
    {
      Chunk::updateSkylightNeighborHeight(v4, v25 - 1, v27, v7, v5);
      Chunk::updateSkylightNeighborHeight(v4, v25 + 1, v27, v7, v5);
      Chunk::updateSkylightNeighborHeight(v4, v25, v27 - 1, v7, v5);
      Chunk::updateSkylightNeighborHeight(v4, v25, v27 + 1, v7, v5);
      return Chunk::updateSkylightNeighborHeight(v4, v25, v27, v7, v5);
    }
  }
  return this;
}


//======================================================================
// Chunk::getBlockLight(int,int,int)
// address: 0x002DB540   size: 0x36 (54 bytes)
//======================================================================
char *__fastcall Chunk::getBlockLight(Chunk *this, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r4
  int v6; // r2

  v4 = *((_DWORD *)this + (a3 >> 4) + 342);
  if ( *(_WORD *)(v4 + 34) == 0 )
    return &byte_5173C8;
  v5 = *(_DWORD *)(v4 + 24);
  v6 = a3 & 0xF;
  if ( v5 != 0 )
    return (char *)(v5 + (a2 | (16 * a4) | (v6 << 8)));
  else
    return &Section::m_EmptyBlockLight;
}


//======================================================================
// Chunk::generateSkylightMap(void)
// address: 0x002DB580   size: 0x136 (310 bytes)
//======================================================================
int __fastcall Chunk::generateSkylightMap(Chunk *this)
{
  int v2; // r7
  int v3; // r6
  int j; // r5
  int v5; // r5
  char *BlockLight; // r0
  World *v7; // r0
  int v8; // r2
  int v9; // r3
  char *v10; // r0
  int result; // r0
  int k; // r3
  int m; // r2
  char *v14; // r6
  int i; // [sp+8h] [bp-24h]
  int v16; // [sp+10h] [bp-1Ch]
  int TopFilledSegment; // [sp+14h] [bp-18h]
  _DWORD v18[4]; // [sp+1Ch] [bp-10h] BYREF

  *((_DWORD *)this + 72) = 999999;
  v2 = 0;
  TopFilledSegment = Chunk::getTopFilledSegment(this);
  do
  {
    for ( i = 0; i != 16; ++i )
    {
      v16 = (16 * i) | v2;
      *((_WORD *)this + v16 + 274) = -5678;
      v3 = TopFilledSegment + 15;
      for ( j = TopFilledSegment + 15; j > 0 && Chunk::getBlockLightOpacity(this, v2, j - 1, i) == 0; --j )
        ;
      *((_BYTE *)this + v16 + 292) = j;
      if ( j < *((_DWORD *)this + 72) )
        *((_DWORD *)this + 72) = j;
      if ( World::hasSky(*((World **)this + 358)) != 0 )
      {
        v5 = 15;
        do
        {
          v5 -= Chunk::getBlockLightOpacity(this, v2, v3, i);
          BlockLight = Chunk::getBlockLight(this, v2, v3, i);
          if ( v5 <= 0 )
          {
            *BlockLight &= 0xF0u;
          }
          else
          {
            *BlockLight = *BlockLight & 0xF0 | v5;
            v7 = *((World **)this + 358);
            v8 = v3 + *((_DWORD *)this + 70);
            v9 = i + *((_DWORD *)this + 71);
            v18[0] = v2 + *((_DWORD *)this + 69);
            v18[1] = v8;
            v18[2] = v9;
            World::markBlockForUpdate(v7, (const WCoord *)v18);
          }
          --v3;
        }
        while ( v3 > 0 && v5 > 0 );
        while ( v3 >= 0 )
        {
          v10 = Chunk::getBlockLight(this, v2, v3--, i);
          *v10 &= 0xF0u;
        }
      }
    }
    ++v2;
  }
  while ( v2 != 16 );
  result = 1;
  for ( k = 0; k != 16; ++k )
  {
    for ( m = 0; m != 256; m += 16 )
    {
      v14 = (char *)this + k + m;
      v14[5] = 1;
    }
  }
  *((_BYTE *)this + 4) = 1;
  return result;
}


//======================================================================
// Chunk::setBlockAll(int,int,int,int,int)
// address: 0x002DB6C0   size: 0x1EE (494 bytes)
//======================================================================
int __fastcall Chunk::setBlockAll(Chunk *this, int a2, int a3, int a4, int a5, int a6)
{
  char *v8; // r2
  unsigned int v9; // r0
  int v10; // r5
  int v11; // r6
  int v12; // r3
  __int16 *v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r3
  int Material; // r6
  int v18; // r6
  int v19; // r2
  Chunk *v20; // r0
  int v21; // r1
  int result; // r0
  int v23; // [sp+10h] [bp-34h]
  int v26; // [sp+20h] [bp-24h]
  int v27; // [sp+24h] [bp-20h]
  int v28; // [sp+28h] [bp-1Ch]
  int v29; // [sp+2Ch] [bp-18h]
  _DWORD v30[4]; // [sp+34h] [bp-10h] BYREF

  v28 = 16 * a4 + a2;
  v8 = (char *)this + 2 * v28;
  if ( a3 >= *((__int16 *)v8 + 274) - 1 )
    *((_WORD *)v8 + 274) = -5678;
  v27 = *((unsigned __int8 *)this + v28 + 292);
  v9 = BlockDivSection(a3);
  if ( v9 > 0xF )
    v10 = 0;
  else
    v10 = *((_DWORD *)this + v9 + 342);
  v11 = a3 % 16;
  v12 = *(_DWORD *)(v10 + 20);
  if ( v12 != 0 )
    v13 = (__int16 *)(v12 + 2 * ((v11 << 8) | a2 | (16 * a4)));
  else
    v13 = &Section::m_EmptyBlock;
  v14 = (unsigned __int16)*v13;
  v29 = v14 >> 12;
  v23 = v14 & 0xFFF;
  if ( v23 != a5 || v29 != a6 )
  {
    v26 = 0;
    if ( v12 != 0 )
      goto LABEL_14;
    if ( a5 != 0 )
    {
      Section::allocBlocks((Section *)v10);
      v26 = (unsigned __int8)((v27 < 0) + (a3 >= (unsigned int)v27) + (a3 >> 31));
LABEL_14:
      Block::setAll((_WORD *)(*(_DWORD *)(v10 + 20) + 2 * ((v11 << 8) | a2 | (16 * a4))), a5, a6);
      v15 = *((_DWORD *)this + 71);
      v30[1] = a3 + *((_DWORD *)this + 70);
      v16 = *((_DWORD *)this + 69);
      v30[2] = a4 + v15;
      v30[0] = a2 + v16;
      if ( v23 != 0 )
      {
        --*(_WORD *)(v10 + 34);
        Material = BlockMaterialMgr::getMaterial(
                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                     v23);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)Material + 88))(Material) != 0 )
          --*(_WORD *)(v10 + 36);
        (*(void (__fastcall **)(int, _DWORD, _DWORD *, int, int))(*(_DWORD *)Material + 112))(
          Material,
          *((_DWORD *)this + 358),
          v30,
          v23,
          v29);
      }
      v18 = 0;
      if ( a5 > 0 )
      {
        ++*(_WORD *)(v10 + 34);
        v18 = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a5);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 88))(v18) != 0 )
          ++*(_WORD *)(v10 + 36);
      }
      if ( a5 != v23 )
        *(_BYTE *)(v10 + 42) = 1;
      if ( v26 == 0 )
      {
        if ( BlockMaterial::m_LightOpacity[a5] != 0 )
        {
          if ( a3 >= v27 )
          {
            v19 = a3 + 1;
            v20 = this;
            v21 = a2;
LABEL_30:
            Chunk::relightBlock((int)v20, v21, v19, a4);
          }
        }
        else if ( a3 == v27 - 1 )
        {
          v21 = a2;
          v20 = this;
          v19 = a3;
          goto LABEL_30;
        }
        *((_BYTE *)this + v28 + 5) = 1;
        *((_BYTE *)this + 4) = 1;
        goto LABEL_32;
      }
      Chunk::generateSkylightMap(this);
LABEL_32:
      if ( v18 != 0 )
        (*(void (__fastcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v18 + 108))(v18, *((_DWORD *)this + 358), v30);
      result = 1;
      if ( g_ChunkSetDirty != 0 )
        *((_BYTE *)this + 1339) = 1;
      return result;
    }
  }
  return 0;
}


//======================================================================
// Chunk::resetRelightChecks(void)
// address: 0x002DB8D0   size: 0xA (10 bytes)
//======================================================================
int __fastcall Chunk::resetRelightChecks(int this)
{
  *(_DWORD *)(this + 1352) = 0;
  return this;
}


//======================================================================
// Chunk::updateRelightChecks(void)
// address: 0x002DB8DC   size: 0x142 (322 bytes)
//======================================================================
int __fastcall Chunk::updateRelightChecks(Chunk *this)
{
  int result; // r0
  int v3; // r2
  int v4; // r5
  int v5; // r7
  int v6; // r3
  int v7; // r3
  int *v8; // r4
  int v9; // r3
  int v10; // r12
  World *v11; // r2
  int BlockID; // r0
  int v13; // [sp+8h] [bp-3Ch]
  int i; // [sp+Ch] [bp-38h]
  int v15; // [sp+10h] [bp-34h]
  int v16; // [sp+14h] [bp-30h]
  int v17; // [sp+18h] [bp-2Ch]
  int v18; // [sp+1Ch] [bp-28h]
  int v19; // [sp+24h] [bp-20h]
  int v20; // [sp+28h] [bp-1Ch] BYREF
  int v21; // [sp+2Ch] [bp-18h]
  int v22; // [sp+30h] [bp-14h]
  _DWORD v23[4]; // [sp+34h] [bp-10h] BYREF

  result = 8;
  for ( i = 8; i != 0; --i )
  {
    v3 = *((_DWORD *)this + 338);
    if ( v3 > 4095 )
      return result;
    v4 = v3 / 16 % 16;
    *((_DWORD *)this + 338) = v3 + 1;
    v16 = v3 / 256 + *((_DWORD *)this + 71);
    v18 = (16 * (v3 / 256)) | v4;
    v13 = v3 / 256;
    v15 = v4 + *((_DWORD *)this + 69);
    v17 = 16 * (v3 % 16);
    v5 = 0;
    v19 = 4 * (v3 % 16 + 342);
    do
    {
      result = v19;
      v6 = *(_DWORD *)((char *)this + v19);
      if ( *(_WORD *)(v6 + 34) != 0 )
      {
        v7 = *(_DWORD *)(v6 + 20);
        if ( v7 != 0 )
        {
          result = v18;
          if ( *(unsigned __int16 *)(2 * ((v5 << 8) | v18) + v7) << 20 != 0 )
            goto LABEL_19;
        }
      }
      else if ( v5 != 0 && v5 != 15 && v4 != 0 && v4 != 15 && v13 != 0 && v13 != 15 )
      {
        goto LABEL_19;
      }
      v8 = g_DirectionCoord;
      v21 = v5 + v17;
      v20 = v15;
      v22 = v16;
      do
      {
        v9 = v22 + v8[2];
        v10 = v21 + v8[1];
        v11 = *((World **)this + 358);
        v23[0] = v20 + *v8;
        v23[1] = v10;
        v23[2] = v9;
        BlockID = World::getBlockID(v11, (const WCoord *)v23, (int)v11, v9);
        if ( *(int *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID) + 68) > 0 )
          World::blockLightingChange(*((World **)this + 358), (const WCoord *)v23);
        v8 += 3;
      }
      while ( v8 != (int *)&slotelements );
      result = World::blockLightingChange(*((World **)this + 358), (const WCoord *)&v20);
LABEL_19:
      ++v5;
    }
    while ( v5 != 16 );
  }
  return result;
}


//======================================================================
// Chunk::calBlockNum(int)
// address: 0x002DBA30   size: 0x50 (80 bytes)
//======================================================================
int __fastcall Chunk::calBlockNum(Chunk *this, int a2)
{
  signed int v2; // r4
  int v3; // r7
  int i; // r5
  int j; // r6
  __int16 *Block; // r0
  int v9; // [sp+8h] [bp-Ch]

  v2 = 0;
  v9 = Chunk::getTopFilledSegment(this) + 255;
  v3 = 0;
  while ( v2 < v9 )
  {
    for ( i = 0; i != 16; ++i )
    {
      for ( j = 0; j != 16; ++j )
      {
        Block = Chunk::getBlock(this, i, v2, j);
        v3 += (*Block & 0xFFF) == a2;
      }
    }
    ++v2;
  }
  return v3;
}


//======================================================================
// Chunk::removeContainer(WorldContainer *)
// address: 0x002DBB58   size: 0x5C (92 bytes)
//======================================================================
__int64 __fastcall Chunk::removeContainer(Chunk *this, WorldContainer *a2)
{
  char *v3; // r0
  int v4; // r5
  _DWORD *v5; // r2
  int i; // r4
  _DWORD *v7; // r7
  int v8; // r4
  unsigned int v9; // r1
  __int64 v11; // [sp+0h] [bp-Ch]

  LODWORD(v11) = this;
  v3 = (char *)this + 1324;
  v4 = *((_DWORD *)v3 + 1);
  v5 = *((_DWORD **)this + 331);
  HIDWORD(v11) = (v4 - (int)v5) >> 2;
  for ( i = 0; i != HIDWORD(v11); ++i )
  {
    v7 = v5++;
    if ( (WorldContainer *)*(v5 - 1) == a2 )
    {
      *v7 = *(_DWORD *)(v4 - 4);
      v8 = *((_DWORD *)this + 331);
      v9 = (*((_DWORD *)v3 + 1) - v8) >> 2;
      if ( v9 - 1 < v9 )
        *((_DWORD *)this + 332) = v8 + 4 * (v9 - 1);
      else
        std::vector<WorldContainer *>::_M_default_append((void **)v3, 0xFFFFFFFF);
      return v11;
    }
  }
  return v11;
}


//======================================================================
// Chunk::addContainer(WorldContainer *)
// address: 0x002DBBB8   size: 0x86 (134 bytes)
//======================================================================
__int64 __fastcall Chunk::addContainer(__int64 this)
{
  __int64 v1; // r6
  _DWORD *v2; // r3
  unsigned int v3; // r0
  unsigned int v4; // r5
  _DWORD *v5; // r3
  void *v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch]

  v8 = this;
  v1 = this;
  v2 = *(_DWORD **)(this + 1328);
  if ( v2 == *(_DWORD **)(this + 1332) )
  {
    v3 = std::vector<WorldContainer *>::_M_check_len((_DWORD *)(this + 1324), 1u, (int)"vector::_M_emplace_back_aux");
    HIDWORD(v8) = 4 * v3;
    if ( v3 != 0 )
    {
      if ( v3 > 0x3FFFFFFF )
        sub_3BCEB4(v3);
      v3 = operator new(HIDWORD(v8));
    }
    v4 = v3;
    v5 = (_DWORD *)(v3 + 4 * ((*(_DWORD *)(v1 + 1328) - *(_DWORD *)(v1 + 1324)) >> 2));
    if ( v5 != nullptr )
      *v5 = HIDWORD(v1);
    LODWORD(v8) = *(_DWORD *)(v1 + 1324);
    HIDWORD(v1) = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<WorldContainer *>(
                    (void *)v8,
                    *(_DWORD *)(v1 + 1328),
                    (void *)v3)
                + 4;
    v6 = *(void **)(v1 + 1324);
    if ( v6 != nullptr )
      operator delete(v6);
    *(_DWORD *)(v1 + 1324) = v4;
    *(_DWORD *)(v1 + 1328) = HIDWORD(v1);
    *(_DWORD *)(v1 + 1332) = v4 + HIDWORD(v8);
  }
  else
  {
    if ( v2 != nullptr )
      *v2 = HIDWORD(this);
    *(_DWORD *)(this + 1328) += 4;
  }
  return v8;
}


//======================================================================
// Chunk::placeOneTree(WCoord const&,int,bool)
// address: 0x002FBB40   size: 0x2F0 (752 bytes)
//======================================================================
void __fastcall Chunk::placeOneTree(Chunk *this, const WCoord *a2, int a3, int a4)
{
  char *TreeDef; // r0
  char *v6; // r4
  int v7; // r5
  int v8; // r6
  int v9; // r1
  int v10; // r5
  int v11; // r6
  unsigned int v12; // r1
  int v13; // r3
  int v14; // r5
  int i; // r3
  int v16; // r6
  int j; // r5
  int v18; // r0
  char *v19; // r3
  unsigned int v20; // r0
  char *v21; // r5
  _DWORD *v22; // r6
  int v23; // r0
  _BYTE *v24; // r3
  char *v25; // r6
  int m; // r5
  char *v27; // r3
  int v28; // r0
  int v29; // r5
  int v30; // r6
  int v31; // r3
  int v32; // r1
  int n; // r5
  int v34; // kr00_4
  int ii; // r4
  int v36; // r4
  int v37; // r6
  signed int v38; // r2
  Section **v39; // r6
  int k; // [sp+8h] [bp-7Ch]
  signed int v41; // [sp+8h] [bp-7Ch]
  int v42; // [sp+Ch] [bp-78h]
  unsigned int v43; // [sp+Ch] [bp-78h]
  __int16 *Block; // [sp+10h] [bp-74h]
  char v45; // [sp+10h] [bp-74h]
  ChunkRandGen *v46; // [sp+14h] [bp-70h]
  unsigned int v47; // [sp+14h] [bp-70h]
  int v48; // [sp+18h] [bp-6Ch]
  int v50; // [sp+20h] [bp-64h]
  int v51; // [sp+24h] [bp-60h]
  int v52; // [sp+28h] [bp-5Ch]
  int v54; // [sp+38h] [bp-4Ch] BYREF
  int v55; // [sp+3Ch] [bp-48h]
  void *v56; // [sp+40h] [bp-44h] BYREF
  char *v57; // [sp+44h] [bp-40h]
  char *v58; // [sp+48h] [bp-3Ch]
  _BYTE v59[56]; // [sp+4Ch] [bp-38h] BYREF

  TreeDef = DefManager::getTreeDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a3);
  v6 = TreeDef;
  if ( TreeDef != nullptr )
  {
    v7 = *((_DWORD *)TreeDef + 17);
    v8 = *((_DWORD *)TreeDef + 18) - v7;
    v46 = (Chunk *)((char *)this + 262);
    v9 = ChunkRandGen::get((Chunk *)((char *)this + 262)) % (unsigned int)(v8 + 1) + v7;
    v10 = *((_DWORD *)v6 + 21);
    v48 = v9;
    v11 = *((_DWORD *)v6 + 22) - v10;
    v12 = ChunkRandGen::get((Chunk *)((char *)this + 262)) % (unsigned int)(v11 + 1);
    v13 = v48;
    v14 = v12 + v10;
    if ( v48 > v14 )
      v13 = v14;
    v50 = v13;
    if ( v13 > 5 )
      v50 = 5;
    Block = Chunk::getBlock(this, *(_DWORD *)a2, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2));
    for ( i = 0; ; i = v42 + 1 )
    {
      v42 = i;
      if ( i >= v48 )
        break;
      if ( i >= v48 - v50 )
      {
        v52 = SelectFromOddsArray((const int *)v6 + 23, 5, v46, -1);
        v16 = 0;
        v56 = nullptr;
        v57 = nullptr;
        v58 = nullptr;
        do
        {
          for ( j = 0; j != 7; ++j )
          {
            v18 = (unsigned __int8)v6[49 * v48 + 143 + 7 * v16 + j + -49 * v42];
            if ( v18 == 3 )
            {
              v19 = v57;
              v54 = j;
              v55 = v16;
              if ( v57 == v58 )
              {
                std::vector<IndexXZ>::_M_emplace_back_aux<IndexXZ>((int *)&v56, &v54);
              }
              else
              {
                if ( v57 != nullptr )
                {
                  *(_DWORD *)v57 = j;
                  *((_DWORD *)v19 + 1) = v55;
                }
                v57 += 8;
              }
              LOBYTE(v18) = 0;
            }
            else if ( v18 == 4 )
            {
              LOBYTE(v18) = 2 - ((ChunkRandGen::get(v46) & 1) == 0);
            }
            v59[7 * v16 + j] = v18;
          }
          ++v16;
        }
        while ( v16 != 7 );
        for ( k = 0; k < v52 && (v57 - (_BYTE *)v56) >> 3 != 0; ++k )
        {
          v20 = ChunkRandGen::get(v46);
          v21 = v57;
          v22 = (char *)v56 + 8 * (v20 % ((v57 - (_BYTE *)v56) >> 3));
          v23 = *v22;
          v24 = &v59[7 * v22[1]];
          v25 = (char *)(v22 + 2);
          v24[v23] = 2;
          if ( v25 != v21 )
          {
            for ( m = (v21 - v25) >> 3; m > 0; --m )
            {
              v27 = v25 - 8;
              *(_DWORD *)v27 = *(_DWORD *)v25;
              v28 = *((_DWORD *)v25 + 1);
              v25 += 8;
              *((_DWORD *)v27 + 1) = v28;
            }
          }
          v57 -= 8;
          if ( (v57 - (_BYTE *)v56) >> 3 == 0 )
            break;
        }
        if ( v56 != nullptr )
          operator delete(v56);
        v29 = 0;
        while ( (unsigned int)(v29 + *((_DWORD *)a2 + 2) - 3) > 0xF )
        {
LABEL_38:
          if ( ++v29 == 7 )
            goto LABEL_46;
        }
        v30 = 0;
        while ( 2 )
        {
          if ( (unsigned int)(v30 + *(_DWORD *)a2 - 3) <= 0xF )
          {
            v31 = (unsigned __int8)v59[7 * v29 + v30];
            if ( v31 == 2 )
            {
              v32 = *((_DWORD *)v6 + 19);
            }
            else
            {
              if ( v31 != 1 )
                goto LABEL_37;
              v32 = *((_DWORD *)v6 + 20);
            }
            Block::setAll(&Block[16 * v29 - 3 - 48 + v30], v32, 0);
          }
LABEL_37:
          if ( ++v30 == 7 )
            goto LABEL_38;
          continue;
        }
      }
      Block::setAll(Block, *((_DWORD *)v6 + 20), 0);
LABEL_46:
      Block += 256;
    }
    if ( a4 == 0 )
    {
      for ( n = 0; n != 7; ++n )
      {
        v43 = n + *((_DWORD *)a2 + 2) - 3;
        if ( v43 <= 0xF )
        {
          v36 = 0;
          v51 = 16 * v43;
          do
          {
            v47 = v36 + *(_DWORD *)a2 - 3;
            if ( v47 <= 0xF )
            {
              v37 = v48;
              v41 = *((unsigned __int8 *)this + (v47 | v51) + 292);
              while ( --v37 >= 0 )
              {
                v38 = v37 + *((_DWORD *)a2 + 1);
                v45 = v37 + *((_BYTE *)a2 + 4);
                if ( v38 < v41 )
                  break;
                if ( (unsigned __int16)*Chunk::getBlock(this, v47, v38, v43) << 20 != 0 )
                  *((_BYTE *)this + (v47 | v51) + 292) = v45 + 1;
              }
            }
            ++v36;
          }
          while ( v36 != 7 );
        }
      }
      v34 = *((_DWORD *)a2 + 1);
      for ( ii = v34 / 16; ii <= (v34 + v48 - 1) / 16; ++ii )
      {
        v39 = (Section **)((char *)this + 4 * ii + 1368);
        Section::calNoneEmptyBlocks(*v39);
        Section::genConnectGraph(*v39);
      }
    }
  }
}

