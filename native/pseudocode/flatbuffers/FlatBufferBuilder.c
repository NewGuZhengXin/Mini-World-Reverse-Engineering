// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: flatbuffers::FlatBufferBuilder

//======================================================================
// flatbuffers::FlatBufferBuilder::Align(unsigned int)
// address: 0x00298A30   size: 0x22 (34 bytes)
//======================================================================
char *__fastcall flatbuffers::FlatBufferBuilder::Align(flatbuffers::FlatBufferBuilder *this, unsigned int a2)
{
  const void **v3; // r5
  int v4; // r0

  if ( a2 > *((_DWORD *)this + 11) )
    *((_DWORD *)this + 11) = a2;
  v3 = (const void **)((char *)this + 4);
  v4 = flatbuffers::vector_downward::size((flatbuffers::FlatBufferBuilder *)((char *)this + 4));
  return flatbuffers::vector_downward::fill(v3, (a2 - 1) & -v4);
}


//======================================================================
// flatbuffers::FlatBufferBuilder::ReferTo(unsigned int)
// address: 0x00298A52   size: 0x18 (24 bytes)
//======================================================================
unsigned int __fastcall flatbuffers::FlatBufferBuilder::ReferTo(flatbuffers::FlatBufferBuilder *this, unsigned int a2)
{
  flatbuffers::FlatBufferBuilder::Align(this, 4u);
  return flatbuffers::vector_downward::size((flatbuffers::FlatBufferBuilder *)((char *)this + 4)) - a2 + 4;
}


//======================================================================
// flatbuffers::FlatBufferBuilder::PreAlign(unsigned int,unsigned int)
// address: 0x00298A6A   size: 0x1E (30 bytes)
//======================================================================
char *__fastcall flatbuffers::FlatBufferBuilder::PreAlign(
        flatbuffers::FlatBufferBuilder *this,
        unsigned int a2,
        unsigned int a3)
{
  const void **v3; // r4
  int v6; // r0

  v3 = (const void **)((char *)this + 4);
  v6 = flatbuffers::vector_downward::size((flatbuffers::FlatBufferBuilder *)((char *)this + 4));
  return flatbuffers::vector_downward::fill(v3, (a3 - 1) & -(v6 + a2));
}


//======================================================================
// flatbuffers::FlatBufferBuilder::StartVector(unsigned int,unsigned int)
// address: 0x00298A88   size: 0x1E (30 bytes)
//======================================================================
char *__fastcall flatbuffers::FlatBufferBuilder::StartVector(
        flatbuffers::FlatBufferBuilder *this,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int v3; // r5

  v3 = a3 * a2;
  flatbuffers::FlatBufferBuilder::PreAlign(this, a3 * a2, 4u);
  return flatbuffers::FlatBufferBuilder::PreAlign(this, v3, a3);
}


//======================================================================
// flatbuffers::FlatBufferBuilder::~FlatBufferBuilder()
// address: 0x00298AB8   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN11flatbuffers17FlatBufferBuilderD1Ev'
void __fastcall flatbuffers::FlatBufferBuilder::~FlatBufferBuilder(void **this)
{
  sub_298970(*(this + 8));
  sub_298964(*(this + 5));
  flatbuffers::vector_downward::~vector_downward((flatbuffers::vector_downward *)(this + 1));
  *this = &off_45C230;
}


//======================================================================
// flatbuffers::FlatBufferBuilder::TrackField(unsigned short,unsigned int)
// address: 0x00299244   size: 0x2E (46 bytes)
//======================================================================
int __fastcall flatbuffers::FlatBufferBuilder::TrackField(
        flatbuffers::FlatBufferBuilder *this,
        unsigned __int16 a2,
        unsigned int a3)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r3
  _DWORD v6[2]; // [sp+0h] [bp-8h] BYREF

  v6[0] = this;
  v3 = *((_DWORD **)this + 7);
  v4 = *((_DWORD **)this + 6);
  v6[0] = a3;
  if ( v4 == v3 )
  {
    std::vector<flatbuffers::FlatBufferBuilder::FieldLoc>::_M_emplace_back_aux<flatbuffers::FlatBufferBuilder::FieldLoc const&>(
      (int)this + 20,
      v6);
  }
  else
  {
    if ( v4 != nullptr )
    {
      *v4 = a3;
      v4[1] = v6[1];
    }
    *((_DWORD *)this + 6) += 8;
  }
  return v6[0];
}


//======================================================================
// flatbuffers::FlatBufferBuilder::FlatBufferBuilder(unsigned int,flatbuffers::simple_allocator const*)
// address: 0x002992B8   size: 0xBE (190 bytes)
//======================================================================
// Alternative name is '_ZN11flatbuffers17FlatBufferBuilderC1EjPKNS_16simple_allocatorE'
flatbuffers::FlatBufferBuilder *__fastcall flatbuffers::FlatBufferBuilder::FlatBufferBuilder(
        flatbuffers::FlatBufferBuilder *this,
        unsigned int a2,
        const flatbuffers::simple_allocator *a3)
{
  flatbuffers::FlatBufferBuilder *v4; // r6
  int v5; // r0
  int v6; // r2
  char *v7; // r6
  void *v8; // r6
  int v9; // r7
  char *v10; // r5

  v4 = a3;
  *(_DWORD *)this = &off_45C230;
  if ( a3 == nullptr )
    v4 = this;
  *((_DWORD *)this + 1) = a2;
  v5 = (*(int (__fastcall **)(flatbuffers::FlatBufferBuilder *))(*(_DWORD *)v4 + 8))(v4);
  v6 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = v5;
  *((_DWORD *)this + 11) = 1;
  *((_DWORD *)this + 3) = v5 + v6;
  *((_DWORD *)this + 4) = v4;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 48) = 0;
  v7 = (char *)operator new(0x80u);
  std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<flatbuffers::FlatBufferBuilder::FieldLoc>(
    nullptr,
    0,
    v7);
  sub_298964(*((void **)this + 5));
  *((_DWORD *)this + 5) = v7;
  *((_DWORD *)this + 6) = v7;
  *((_DWORD *)this + 7) = v7 + 128;
  v8 = *((void **)this + 8);
  if ( (unsigned int)(*((_DWORD *)this + 10) - (_DWORD)v8) <= 0x3F )
  {
    v9 = *((_DWORD *)this + 9);
    v10 = (char *)operator new(0x40u);
    std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<unsigned int>(v8, v9, v10);
    sub_298970(*((void **)this + 8));
    *((_DWORD *)this + 8) = v10;
    *((_DWORD *)this + 9) = &v10[4 * ((v9 - (int)v8) >> 2)];
    *((_DWORD *)this + 10) = v10 + 64;
  }
  return this;
}


//======================================================================
// flatbuffers::FlatBufferBuilder::EndTable(unsigned int,unsigned short)
// address: 0x002993EC   size: 0xF6 (246 bytes)
//======================================================================
int __fastcall flatbuffers::FlatBufferBuilder::EndTable(char **this, __int16 a2, int a3)
{
  const void **v4; // r5
  int v7; // r2
  int v8; // r2
  int *i; // r3
  char *v10; // r6
  int v11; // r0
  int v12; // r2
  int v13; // r0
  int *v14; // r7
  int *v15; // r6
  char *v16; // r0
  int v17; // r6
  char *v19; // [sp+0h] [bp-1Ch]
  int v20; // [sp+4h] [bp-18h]
  int v21; // [sp+8h] [bp-14h]
  size_t v22; // [sp+Ch] [bp-10h]
  unsigned __int8 v23[8]; // [sp+14h] [bp-8h] BYREF

  v4 = (const void **)(this + 1);
  *(_DWORD *)v23 = 0;
  flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)this, 4u);
  flatbuffers::vector_downward::push(v4, v23, 4u);
  v21 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v4);
  flatbuffers::vector_downward::fill(v4, 2 * a3);
  flatbuffers::FlatBufferBuilder::PushElement<unsigned short>((flatbuffers::FlatBufferBuilder *)this, v21 - a2, v7);
  flatbuffers::FlatBufferBuilder::PushElement<unsigned short>((flatbuffers::FlatBufferBuilder *)this, 2 * (a3 + 2), v8);
  for ( i = (int *)*(this + 5); ; i += 2 )
  {
    v10 = *(this + 3);
    v19 = v10;
    if ( i == (int *)*(this + 6) )
      break;
    v11 = *i;
    v12 = *((unsigned __int16 *)i + 2);
    *(_WORD *)&v10[v12] = v21 - v11;
  }
  *(this + 6) = *(this + 5);
  v22 = *(unsigned __int16 *)v10;
  v13 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v4);
  v14 = (int *)*(this + 9);
  v15 = (int *)*(this + 8);
  *(_DWORD *)v23 = v13;
  while ( v15 != v14 )
  {
    v20 = *v15;
    v16 = &(*(this + 1))[(_DWORD)*(this + 2) - *v15];
    if ( *(unsigned __int16 *)v16 == v22 && j_memcmp(v16, v19, v22) == 0 )
    {
      *(_DWORD *)v23 = v20;
      *(this + 3) = &v19[flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v4) - v21];
      break;
    }
    ++v15;
  }
  v17 = *(_DWORD *)v23;
  if ( v17 == flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v4) )
  {
    if ( v14 == (int *)*(this + 10) )
    {
      std::vector<unsigned int>::_M_emplace_back_aux<unsigned int const&>((int)(this + 8), v23);
    }
    else
    {
      if ( v14 != nullptr )
        *v14 = v17;
      *(this + 9) += 4;
    }
  }
  *(_DWORD *)&(*(this + 1))[(_DWORD)*(this + 2) - v21] = *(_DWORD *)v23 - v21;
  return v21;
}

