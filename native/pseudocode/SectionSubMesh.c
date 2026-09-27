// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SectionSubMesh

//======================================================================
// SectionSubMesh::SectionSubMesh(void)
// address: 0x002CD8DE   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN14SectionSubMeshC1Ev'
void __fastcall SectionSubMesh::SectionSubMesh(SectionSubMesh *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_BYTE *)this + 36) = 0;
  *((_BYTE *)this + 37) = 0;
}


//======================================================================
// SectionSubMesh::~SectionSubMesh()
// address: 0x002CD8FC   size: 0x46 (70 bytes)
//======================================================================
// Alternative name is '_ZN14SectionSubMeshD1Ev'
void __fastcall SectionSubMesh::~SectionSubMesh(SectionSubMesh *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  void *v5; // r0

  v2 = *((_DWORD **)this + 7);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 7) = 0;
  }
  v3 = *((_DWORD **)this + 6);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 6) = 0;
  }
  v4 = *((_DWORD **)this + 8);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 8) = 0;
  }
  v5 = *((void **)this + 3);
  if ( v5 != nullptr )
    operator delete(v5);
  if ( *(_DWORD *)this != 0 )
    operator delete(*(void **)this);
}


//======================================================================
// SectionSubMesh::onCreate(void)
// address: 0x002CD9A8   size: 0xF0 (240 bytes)
//======================================================================
__int64 __fastcall SectionSubMesh::onCreate(__int64 this, int a2)
{
  int v2; // r4
  Ogre::VertexData *v3; // r0
  void *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r3
  void *v8; // r1
  void *v9; // r0
  int v10; // r7
  Ogre::IndexData *v11; // r5
  void *v12; // r0
  int v13; // r3
  int v14; // r6
  __int64 v16; // [sp+0h] [bp-Ch] BYREF
  int v17; // [sp+8h] [bp-4h]

  v16 = this;
  v17 = a2;
  v2 = this;
  if ( *(_DWORD *)this != *(_DWORD *)(this + 4) )
  {
    v3 = *(Ogre::VertexData **)(this + 24);
    if ( v3 != nullptr )
    {
      v4 = (void *)Ogre::VertexData::lock(v3);
      j_memcpy(v4, *(const void **)v2, 4 * ((*(_DWORD *)(v2 + 4) - *(_DWORD *)v2) >> 2));
      Ogre::VertexData::unlock(*(_DWORD *)(v2 + 24));
    }
    else
    {
      v5 = (int *)operator new(0x50u);
      Ogre::VertexData::VertexData((Ogre::VertexData *)v5);
      *(_DWORD *)(v2 + 24) = v5;
      HIDWORD(v16) = Ogre::FixedString::insert((Ogre::FixedString *)"sectionsubmesh", (const char *)0xFFFFFFFF, v6, v7);
      Ogre::FixedString::operator=(v5 + 2, (int *)&v16 + 1);
      Ogre::FixedString::release(SHIDWORD(v16), v8);
      Ogre::VertexData::init(
        *(Ogre::VertexData **)(v2 + 24),
        (const Ogre::VertexFormat *)SectionMesh::m_VertFmt,
        -858993459 * ((*(_DWORD *)(v2 + 4) - *(_DWORD *)v2) >> 2));
      v9 = (void *)Ogre::VertexData::lock(*(Ogre::VertexData **)(v2 + 24));
      j_memcpy(v9, *(const void **)v2, 4 * ((*(_DWORD *)(v2 + 4) - *(_DWORD *)v2) >> 2));
      Ogre::VertexData::unlock(*(_DWORD *)(v2 + 24));
      v10 = *(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 12);
      v11 = (Ogre::IndexData *)operator new(0x28u);
      Ogre::IndexData::IndexData(v11, v10 >> 1);
      *(_DWORD *)(v2 + 28) = v11;
      v12 = (void *)Ogre::IndexData::lock(v11);
      j_memcpy(v12, *(const void **)(v2 + 12), 2 * ((*(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 12)) >> 1));
      Ogre::IndexData::unlock(*(_DWORD *)(v2 + 28));
      v13 = *(_DWORD *)(v2 + 28);
      v14 = -858993459 * ((*(_DWORD *)(v2 + 4) - *(_DWORD *)v2) >> 2);
      *(_DWORD *)(v13 + 16) = 0;
      *(_DWORD *)(v13 + 20) = v14;
    }
  }
  return v16;
}


//======================================================================
// SectionSubMesh::reset(bool)
// address: 0x002CDF7C   size: 0x36 (54 bytes)
//======================================================================
void __fastcall SectionSubMesh::reset(SectionSubMesh *this, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r0

  std::vector<BlockGeomVert>::resize((int)this, 0);
  std::vector<unsigned short>::resize((int)this + 12, 0);
  if ( a2 == 0 )
  {
    v4 = *((_DWORD **)this + 6);
    if ( v4 != nullptr )
    {
      Ogre::BaseObject::release(v4);
      *((_DWORD *)this + 6) = 0;
    }
    v5 = *((_DWORD **)this + 7);
    if ( v5 != nullptr )
    {
      Ogre::BaseObject::release(v5);
      *((_DWORD *)this + 7) = 0;
    }
  }
}


//======================================================================
// SectionSubMesh::addTriangleList(BlockGeomVert const*,unsigned int,unsigned short const*,unsigned int,WCoord const*)
// address: 0x002CDFDC   size: 0xC6 (198 bytes)
//======================================================================
void *__fastcall SectionSubMesh::addTriangleList(_DWORD *a1, const void *a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v7; // r3
  int v8; // r7
  _DWORD *v9; // r5
  void *result; // r0
  int v11; // r2
  int v12; // r3
  _WORD *v13; // r3
  int i; // r3
  int v16; // [sp+Ch] [bp-20h]
  _DWORD v19[4]; // [sp+1Ch] [bp-10h] BYREF

  v7 = (a1[1] - *a1) >> 2;
  v8 = -858993459 * v7;
  v9 = a6;
  std::vector<BlockGeomVert>::resize((int)a1, a3 - 858993459 * v7);
  v16 = (a1[4] - a1[3]) >> 1;
  std::vector<unsigned short>::resize((int)(a1 + 3), a5 + v16);
  memset(v19, 0, 12);
  if ( a6 == nullptr )
    v9 = v19;
  result = j_memcpy((void *)(*a1 + 20 * v8), a2, 20 * a3);
  v11 = 0;
  while ( v11 != a3 )
  {
    v12 = 20 * (v11 + v8);
    ++v11;
    v13 = (_WORD *)(*a1 + v12);
    *v13 += 100 * *v9;
    v13[1] += 100 * v9[1];
    result = (void *)(100 * v9[2] + (unsigned __int16)v13[2]);
    v13[2] = (_WORD)result;
  }
  for ( i = 2 * v16; i != 2 * (a5 + v16); i += 2 )
  {
    result = (void *)(*(unsigned __int16 *)(a4 - 2 * v16 + i) + v8);
    *(_WORD *)(a1[3] + i) = (_WORD)result;
  }
  return result;
}


//======================================================================
// SectionSubMesh::addGeomFaceLight(BlockGeomMeshInfo &,WCoord const*,float *,BlockVector const*)
// address: 0x002CE0A8   size: 0xC0 (192 bytes)
//======================================================================
void *__fastcall SectionSubMesh::addGeomFaceLight(_DWORD *a1, int *a2, _DWORD *a3, int a4, _DWORD *a5)
{
  char *v5; // r4
  int v6; // r6
  int v7; // r7
  unsigned int i; // [sp+8h] [bp-141Ch]
  unsigned __int8 v10; // [sp+Ch] [bp-1418h]
  float v11; // [sp+10h] [bp-1414h]
  _BYTE v12[12]; // [sp+20h] [bp-1404h] BYREF
  char v13; // [sp+2Ch] [bp-13F8h] BYREF

  v5 = &v13;
  for ( i = 0; i < *a2; ++i )
  {
    v6 = a2[2] + 20 * i;
    *(_QWORD *)(v5 - 12) = *(_QWORD *)v6;
    *((_DWORD *)v5 - 1) = *(_DWORD *)(v6 + 8);
    v5[4] = *(_BYTE *)(v6 + 16);
    v5[5] = *(_BYTE *)(v6 + 17);
    v10 = *(_BYTE *)(v6 + 15);
    v7 = 8 * (i & 3);
    v11 = (float)v10;
    v5[6] = (unsigned int)(float)(v11 * *(float *)(a4 + v7));
    v5[7] = (unsigned int)(float)(v11 * *(float *)(a4 + v7 + 4));
    if ( a5 != nullptr )
    {
      *(_DWORD *)v5 = *a5;
      v5[3] = v10;
    }
    else
    {
      *(_DWORD *)v5 = *(_DWORD *)(v6 + 12);
    }
    v5 += 20;
  }
  return SectionSubMesh::addTriangleList(a1, v12, *a2, a2[3], a2[1], a3);
}


//======================================================================
// SectionSubMesh::addGeomBlockLight(BlockGeomMeshInfo &,WCoord const*,float *,BlockVector const*)
// address: 0x002CE174   size: 0xAE (174 bytes)
//======================================================================
void *__fastcall SectionSubMesh::addGeomBlockLight(_DWORD *a1, int *a2, _DWORD *a3, float *a4, _DWORD *a5)
{
  unsigned int v5; // r7
  char *v6; // r4
  int v7; // r5
  unsigned __int8 v9; // [sp+Ch] [bp-A018h]
  float v10; // [sp+10h] [bp-A014h]
  _BYTE v11[12]; // [sp+20h] [bp-A004h] BYREF
  char v12; // [sp+2Ch] [bp-9FF8h] BYREF

  v5 = 0;
  v6 = &v12;
  while ( v5 < *a2 )
  {
    v7 = a2[2] + 20 * v5;
    *(_QWORD *)(v6 - 12) = *(_QWORD *)v7;
    *((_DWORD *)v6 - 1) = *(_DWORD *)(v7 + 8);
    v6[4] = *(_BYTE *)(v7 + 16);
    v6[5] = *(_BYTE *)(v7 + 17);
    v9 = *(_BYTE *)(v7 + 15);
    v10 = (float)v9;
    v6[6] = (unsigned int)(float)(v10 * *a4);
    v6[7] = (unsigned int)(float)(v10 * a4[1]);
    if ( a5 != nullptr )
    {
      *(_DWORD *)v6 = *a5;
      v6[3] = v9;
    }
    else
    {
      *(_DWORD *)v6 = *(_DWORD *)(v7 + 12);
    }
    ++v5;
    v6 += 20;
  }
  return SectionSubMesh::addTriangleList(a1, v11, *a2, a2[3], a2[1], a3);
}

