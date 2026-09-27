// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Section

//======================================================================
// Section::~Section()
// address: 0x0029B838   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN7SectionD1Ev'
void __fastcall Section::~Section(Section *this)
{
  unsigned int v2; // r5
  ClientActor **v3; // r0

  v2 = 0;
  *(_DWORD *)this = &off_45C3C0;
  while ( 1 )
  {
    v3 = *((ClientActor ***)this + 11);
    if ( v2 >= (*((_DWORD *)this + 12) - (int)v3) >> 2 )
      break;
    ClientActor::release(v3[v2++]);
  }
  if ( v3 != nullptr )
    operator delete(v3);
}


//======================================================================
// Section::~Section()
// address: 0x0029B870   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Section::~Section(Section *this)
{
  Section::~Section(this);
  operator delete(this);
}


//======================================================================
// Section::Section(Chunk *,int)
// address: 0x0029B884   size: 0x5A (90 bytes)
//======================================================================
// Alternative name is '_ZN7SectionC1EP5Chunki'
int __fastcall Section::Section(int a1, int a2, int a3)
{
  int v4; // r6
  int v6; // r3
  _DWORD v7[5]; // [sp+0h] [bp-20h] BYREF
  int v8[3]; // [sp+14h] [bp-Ch] BYREF

  *(_DWORD *)a1 = &off_45C3C0;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  v8[1] = 16 * a3;
  v8[0] = 0;
  v8[2] = 0;
  operator+(v7, (int *)(a2 + 276), v8);
  v4 = v7[2];
  *(_DWORD *)(a1 + 8) = v7[0];
  v6 = v7[1];
  *(_DWORD *)(a1 + 16) = v4;
  *(_WORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 12) = v6;
  *(_DWORD *)(a1 + 28) = 0;
  *(_WORD *)(a1 + 38) = 0;
  *(_WORD *)(a1 + 34) = 0;
  *(_WORD *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 41) = 0;
  *(_BYTE *)(a1 + 42) = 0;
  return a1;
}


//======================================================================
// Section::allocBlocks(void)
// address: 0x0029B8E4   size: 0x40 (64 bytes)
//======================================================================
int __fastcall Section::allocBlocks(Section *this)
{
  _WORD *v2; // r0
  _WORD *v3; // r3
  _BYTE *v4; // r2
  _BYTE *v5; // r3
  int result; // r0

  v2 = (_WORD *)operator new[](0x2000u);
  v3 = v2;
  do
    *v3++ = 0;
  while ( v3 != v2 + 4096 );
  *((_DWORD *)this + 5) = v2;
  v4 = (_BYTE *)operator new[](0x1000u);
  v5 = v4;
  result = 0;
  do
    *v5++ = 0;
  while ( v5 != v4 + 4096 );
  *((_DWORD *)this + 6) = v4;
  return result;
}


//======================================================================
// Section::getNeighborCoord(WCoord const&,DirectionType)
// address: 0x0029B924   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall Section::getNeighborCoord(_DWORD *a1, int *a2, int a3)
{
  operator+(a1, a2, &g_DirectionCoord[3 * a3]);
  return a1;
}


//======================================================================
// Section::getNeighborBlock(WCoord const&,DirectionType)
// address: 0x0029B940   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Section::getNeighborBlock(int a1, int *a2, int a3)
{
  _DWORD v6[3]; // [sp+0h] [bp-1Ch] BYREF
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  operator+(v7, a2, (int *)(a1 + 8));
  Section::getNeighborCoord(v6, v7, a3);
  return World::getBlock(*(World **)(*(_DWORD *)(a1 + 4) + 1432), (const WCoord *)v6);
}


//======================================================================
// Section::getNeighborLight(WCoord const&,DirectionType)
// address: 0x0029B970   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Section::getNeighborLight(int a1, int *a2, int a3)
{
  _DWORD v6[3]; // [sp+0h] [bp-1Ch] BYREF
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  operator+(v7, a2, (int *)(a1 + 8));
  Section::getNeighborCoord(v6, v7, a3);
  return World::getBlockLight(*(World **)(*(_DWORD *)(a1 + 4) + 1432), (const WCoord *)v6);
}


//======================================================================
// Section::getVertexNeighborBlock(WCoord const&,DirectionType,int)
// address: 0x0029B9A0   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall Section::getVertexNeighborBlock(_DWORD *a1, int a2, int *a3, int a4, int a5)
{
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = (int)a3;
  v8[2] = a4;
  operator+(v8, (int *)(a2 + 8), a3);
  operator+(a1, v8, &dword_513080[12 * a4 + 3 * a5]);
  return a1;
}


//======================================================================
// Section::getVertexCornerBlock(WCoord const&,DirectionType,int)
// address: 0x0029B9D4   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall Section::getVertexCornerBlock(_DWORD *a1, int a2, int *a3, int a4, int a5)
{
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = (int)a3;
  v8[2] = a4;
  operator+(v8, (int *)(a2 + 8), a3);
  operator+(a1, v8, &dword_5131A0[12 * a4 + 3 * a5]);
  return a1;
}


//======================================================================
// Section::calNoneEmptyBlocks(void)
// address: 0x0029BA0C   size: 0x50 (80 bytes)
//======================================================================
int __fastcall Section::calNoneEmptyBlocks(Section *this)
{
  int v1; // r6
  int v3; // r3
  __int16 *v4; // r3
  int v5; // r1
  int Material; // r0
  int result; // r0

  v1 = 0;
  *((_WORD *)this + 17) = 0;
  *((_WORD *)this + 18) = 0;
  do
  {
    v3 = *((_DWORD *)this + 5);
    if ( v3 != 0 )
      v4 = (__int16 *)(v3 + v1);
    else
      v4 = &Section::m_EmptyBlock;
    v5 = *v4 & 0xFFF;
    if ( v5 != 0 )
      ++*((_WORD *)this + 17);
    Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, v5);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)Material + 88))(Material);
    if ( result != 0 )
      ++*((_WORD *)this + 18);
    v1 += 2;
  }
  while ( v1 != 0x2000 );
  return result;
}


//======================================================================
// Section::genConnectGraph(void)
// address: 0x0029BBAC   size: 0x30A (778 bytes)
//======================================================================
void __fastcall Section::genConnectGraph(Section *this)
{
  unsigned int v1; // r1
  int v2; // r3
  int v3; // r0
  __int64 v4; // r0
  int v5; // r7
  char v6; // r6
  int v7; // r2
  int v8; // r7
  int v9; // r2
  int v10; // r6
  int v11; // r5
  int v12; // r5
  __int64 v13; // r0
  __int64 v14; // r0
  int v15; // r5
  __int64 v16; // r0
  _DWORD *j; // r5
  int v18; // r7
  int v19; // r0
  int v20; // r7
  int v21; // [sp+0h] [bp-1084h]
  int i; // [sp+4h] [bp-1080h]
  int v24; // [sp+Ch] [bp-1078h]
  int v25; // [sp+10h] [bp-1074h]
  int v26; // [sp+18h] [bp-106Ch]
  int v27; // [sp+24h] [bp-1060h] BYREF
  _BYTE v28[8]; // [sp+28h] [bp-105Ch] BYREF
  _BYTE v29[8]; // [sp+30h] [bp-1054h] BYREF
  _BYTE v30[8]; // [sp+38h] [bp-104Ch] BYREF
  _BYTE v31[8]; // [sp+40h] [bp-1044h] BYREF
  _DWORD v32[2]; // [sp+48h] [bp-103Ch] BYREF
  _DWORD v33[2]; // [sp+50h] [bp-1034h] BYREF
  void *v34; // [sp+58h] [bp-102Ch] BYREF
  char *v35; // [sp+5Ch] [bp-1028h]
  int v36; // [sp+60h] [bp-1024h]
  int v37; // [sp+64h] [bp-1020h] BYREF
  _DWORD *v38[4]; // [sp+68h] [bp-101Ch] BYREF
  int v39; // [sp+78h] [bp-100Ch]
  _BYTE v40[4104]; // [sp+7Ch] [bp-1008h] BYREF

  v1 = *((unsigned __int16 *)this + 17);
  v2 = 0;
  *((_WORD *)this + 16) = 0;
  if ( v1 <= 0xFF )
  {
    *((_WORD *)this + 16) = -1;
    *((_BYTE *)this + 42) = 0;
    return;
  }
  v3 = *((_DWORD *)this + 5);
  do
  {
    v40[v2] = BlockMaterial::m_IsOpaqueCube[*(_WORD *)(v3 + 2 * v2) & 0xFFF];
    ++v2;
  }
  while ( v2 != 4096 );
  j_memset(v38, 0, sizeof(v38));
  v39 = 0;
  v38[2] = v38;
  v38[3] = v38;
  for ( i = 0; i != 4096; ++i )
  {
    if ( v40[i] == 1 )
      continue;
    std::_Rb_tree<DirectionType,DirectionType,std::_Identity<DirectionType>,std::less<DirectionType>,std::allocator<DirectionType>>::_M_erase(
      (int)&v37,
      v38[1]);
    LODWORD(v4) = &v34;
    v38[2] = v38;
    v38[1] = nullptr;
    v38[3] = v38;
    v39 = 0;
    v27 = i;
    v34 = nullptr;
    v35 = nullptr;
    v36 = 0;
    HIDWORD(v4) = &v27;
LABEL_8:
    std::vector<int>::push_back(v4);
    while ( v34 != v35 )
    {
      ++g_count;
      v5 = *((_DWORD *)v35 - 1);
      v35 -= 4;
      if ( v40[v5] != 1 )
      {
        v6 = v5;
        ++g_count1;
        v7 = v5 >> 4;
        v8 = BYTE1(v5);
        v24 = v6 & 0xF;
        v9 = v7 & 0xF;
        v26 = 16 * v9;
        v25 = (16 * v9) | (v8 << 8);
        v10 = v24;
        v21 = v9;
        while ( v10 != 0 )
        {
          if ( v40[v25 | (v10 - 1)] == 1 )
            goto LABEL_16;
          --v10;
        }
        v32[0] = 0;
        std::set<DirectionType>::insert((int)v33, &v37, v32);
LABEL_16:
        v11 = v24;
        while ( ++v11 != 16 )
        {
          if ( v40[v25 | v11] == 1 )
            goto LABEL_20;
        }
        v33[0] = 1;
        std::set<DirectionType>::insert((int)v32, &v37, v33);
LABEL_20:
        while ( v10 < v11 )
          v40[v25 | v10++] = 1;
        v32[0] = v10;
        v12 = v26 | v24;
        if ( v8 == 0 )
        {
          v33[0] = 4;
          std::set<DirectionType>::insert((int)v31, &v37, v33);
LABEL_28:
          v32[0] = v12 | ((v8 + 1) << 8);
          if ( v40[v32[0]] == 0 )
          {
            LODWORD(v14) = &v34;
            HIDWORD(v14) = v32;
            std::vector<int>::push_back(v14);
          }
          goto LABEL_30;
        }
        v32[0] = ((v8 - 1) << 8) | v12;
        if ( v40[v32[0]] == 0 )
        {
          LODWORD(v13) = &v34;
          HIDWORD(v13) = v32;
          std::vector<int>::push_back(v13);
        }
        if ( v8 <= 14 )
          goto LABEL_28;
        v33[0] = 5;
        std::set<DirectionType>::insert((int)v30, &v37, v33);
LABEL_30:
        v15 = (v8 << 8) | v24;
        if ( v21 != 0 )
        {
          v32[0] = (16 * (v21 - 1)) | v15;
          if ( v40[v32[0]] == 0 )
          {
            LODWORD(v16) = &v34;
            HIDWORD(v16) = v32;
            std::vector<int>::push_back(v16);
          }
          if ( v21 != 15 )
            goto LABEL_36;
          v33[0] = 3;
          std::set<DirectionType>::insert((int)v28, &v37, v33);
        }
        else
        {
          v33[0] = 2;
          std::set<DirectionType>::insert((int)v29, &v37, v33);
LABEL_36:
          v32[0] = v15 | (16 * (v21 + 1));
          if ( v40[v32[0]] == 0 )
          {
            LODWORD(v4) = &v34;
            HIDWORD(v4) = v32;
            goto LABEL_8;
          }
        }
      }
    }
    if ( v34 != nullptr )
      operator delete(v34);
    if ( v39 != 0 )
    {
      for ( j = v38[2]; j != v38; j = (_DWORD *)sub_391E10(j) )
      {
        v18 = j[4];
        v19 = sub_391E10(j);
        v20 = 6 * v18;
        while ( (_DWORD **)v19 != v38 )
        {
          *((_WORD *)this + 16) |= 1 << Section::m_FaceConnMoveBits[v20 + *(_DWORD *)(v19 + 16)];
          v19 = sub_391E10(v19);
        }
      }
    }
  }
  *((_BYTE *)this + 42) = 0;
  std::_Rb_tree<DirectionType,DirectionType,std::_Identity<DirectionType>,std::less<DirectionType>,std::allocator<DirectionType>>::_M_erase(
    (int)&v37,
    v38[1]);
}


//======================================================================
// Section::removeActor(ClientActor *)
// address: 0x0029BFB8   size: 0x58 (88 bytes)
//======================================================================
void __fastcall Section::removeActor(Section *this, ClientActor *a2)
{
  int v2; // r2
  int v4; // r0
  int i; // r3
  int v6; // r5
  int v7; // r1
  unsigned int v8; // r2

  v2 = *((_DWORD *)this + 11);
  v4 = (*((_DWORD *)this + 12) - v2) >> 2;
  for ( i = 0; i != v4; ++i )
  {
    v6 = 4 * i;
    if ( *(ClientActor **)(v2 + 4 * i) == a2 )
    {
      ClientActor::release(a2);
      *(_DWORD *)(*((_DWORD *)this + 11) + v6) = *(_DWORD *)(*((_DWORD *)this + 12) - 4);
      v7 = *((_DWORD *)this + 11);
      v8 = (*((_DWORD *)this + 12) - v7) >> 2;
      if ( v8 - 1 < v8 )
        *((_DWORD *)this + 12) = v7 + 4 * (v8 - 1);
      else
        std::vector<ClientActor *>::_M_default_append((void **)this + 11, 0xFFFFFFFF);
      return;
    }
  }
}


//======================================================================
// Section::addActor(ClientActor *)
// address: 0x0029C010   size: 0x7A (122 bytes)
//======================================================================
void __fastcall Section::addActor(Section *this, ClientActor *a2)
{
  _DWORD *v4; // r3
  unsigned int v5; // r0
  int v6; // r7
  unsigned int v7; // r5
  _DWORD *v8; // r3
  int v9; // r6
  void *v10; // r0

  ClientActor::addRef(a2);
  v4 = *((_DWORD **)this + 12);
  if ( v4 == *((_DWORD **)this + 13) )
  {
    v5 = std::vector<ClientActor *>::_M_check_len((_DWORD *)this + 11, 1u, (int)"vector::_M_emplace_back_aux");
    v6 = 4 * v5;
    if ( v5 != 0 )
    {
      if ( v5 > 0x3FFFFFFF )
        sub_3BCEB4(v5);
      v5 = operator new(4 * v5);
    }
    v7 = v5;
    v8 = (_DWORD *)(v5 + 4 * ((*((_DWORD *)this + 12) - *((_DWORD *)this + 11)) >> 2));
    if ( v8 != nullptr )
      *v8 = a2;
    v9 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ClientActor *>(
           *((void **)this + 11),
           *((_DWORD *)this + 12),
           (void *)v5)
       + 4;
    v10 = *((void **)this + 11);
    if ( v10 != nullptr )
      operator delete(v10);
    *((_DWORD *)this + 11) = v7;
    *((_DWORD *)this + 12) = v9;
    *((_DWORD *)this + 13) = v7 + v6;
  }
  else
  {
    if ( v4 != nullptr )
      *v4 = a2;
    *((_DWORD *)this + 12) += 4;
  }
}

