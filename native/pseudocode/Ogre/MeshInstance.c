// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MeshInstance

//======================================================================
// Ogre::MeshInstance::getSubMesh(unsigned int)
// address: 0x00188A44   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::MeshInstance::getSubMesh(Ogre::MeshInstance *this, unsigned int a2)
{
  int v2; // r3

  v2 = *((_DWORD *)this + 2);
  if ( a2 >= (*((_DWORD *)this + 3) - v2) >> 2 )
    return 0;
  else
    return *(_DWORD *)(4 * a2 + v2);
}


//======================================================================
// Ogre::MeshInstance::mergeSubMeshVertex(Ogre::SubMeshInstance *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>> &,unsigned int,unsigned int,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int,std::vector&<unsigned int,std::allocator<unsigned int>>)
// address: 0x00189228   size: 0x1FE (510 bytes)
//======================================================================
int __fastcall Ogre::MeshInstance::mergeSubMeshVertex(
        int a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        int a5,
        _DWORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  Ogre::VertexData *v10; // r6
  int v11; // r3
  int v12; // r4
  int v13; // r5
  int v14; // r5
  unsigned int v15; // r3
  int v16; // r3
  int v17; // r0
  int v18; // r1
  int result; // r0
  int v20; // r3
  unsigned __int16 *Position; // [sp+28h] [bp-ACh]
  float v22; // [sp+2Ch] [bp-A8h]
  unsigned __int16 *VertexElement; // [sp+30h] [bp-A4h]
  unsigned __int16 *v24; // [sp+34h] [bp-A0h]
  float *v25; // [sp+38h] [bp-9Ch]
  unsigned int v26; // [sp+3Ch] [bp-98h]
  float *v27; // [sp+40h] [bp-94h]
  unsigned int i; // [sp+44h] [bp-90h]
  int v29; // [sp+48h] [bp-8Ch]
  unsigned __int16 *v30; // [sp+4Ch] [bp-88h]
  float v31; // [sp+50h] [bp-84h]
  int v33; // [sp+5Ch] [bp-78h]
  int v34; // [sp+60h] [bp-74h]
  float v35; // [sp+68h] [bp-6Ch]
  float v36; // [sp+6Ch] [bp-68h]
  _DWORD v37[6]; // [sp+74h] [bp-60h] BYREF
  char v38; // [sp+8Ch] [bp-48h]
  _BYTE v39[68]; // [sp+90h] [bp-44h] BYREF

  v33 = (a3[1] - *a3) >> 6;
  v10 = (Ogre::VertexData *)operator new(0x50u);
  Ogre::VertexData::VertexData(v10, (const Ogre::VertexFormat *)(*(_DWORD *)(*a2 + 32) + 16), a7);
  v11 = 0;
  v38 = 0;
  v34 = 4 * a4;
  v26 = 0;
  while ( 1 )
  {
    v29 = v11;
    if ( v11 == v33 )
      break;
    v12 = *a3 + (v11 << 6);
    v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v12 + 60) + 16) + v34) + 20) + 4 * a5);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v39);
    Ogre::Matrix4::makeSRTMatrix(
      (Ogre::Matrix4 *)v39,
      (const Ogre::Vector3 *)(v12 + 36),
      (const Ogre::Quaternion *)(v12 + 20),
      (const Ogre::Vector3 *)(v12 + 8));
    v31 = (float)*(int *)(v12 + 4) / 255.0;
    Position = Ogre::VertexData::getPosition(v10, v26);
    VertexElement = Ogre::VertexData::getVertexElement((int *)v10, v26, 4);
    v27 = (float *)Ogre::VertexData::getVertexElement((int *)v10, v26, 5);
    v24 = Ogre::VertexData::getPosition(*(Ogre::VertexData **)(v13 + 32), 0);
    v30 = Ogre::VertexData::getVertexElement(*(int **)(v13 + 32), 0, 4);
    v25 = (float *)Ogre::VertexData::getVertexElement(*(int **)(v13 + 32), 0, 5);
    v14 = *((_DWORD *)v10 + 14);
    j_memcpy(Position, v24, *(_DWORD *)(*a6 + 4 * v29) * v14);
    for ( i = 0; ; ++i )
    {
      v15 = *(_DWORD *)(*a6 + 4 * v29);
      if ( i >= v15 )
        break;
      *(_DWORD *)Position = *(_DWORD *)v24;
      *((_DWORD *)Position + 1) = *((_DWORD *)v24 + 1);
      *((_DWORD *)Position + 2) = *((_DWORD *)v24 + 2);
      *(_DWORD *)VertexElement = *(_DWORD *)v30;
      *((_DWORD *)VertexElement + 1) = *((_DWORD *)v30 + 1);
      *((_DWORD *)VertexElement + 2) = *((_DWORD *)v30 + 2);
      v16 = *(_DWORD *)(v12 + 48);
      if ( v16 != 0 )
        *((_DWORD *)Position + 1) = *(_DWORD *)(v16 + (i + *(_DWORD *)(*a8 + 4 * v29)) * *(_DWORD *)(v12 + 56));
      if ( *(_BYTE *)v12 != 0 )
      {
        Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)v39, (Ogre::Vector3 *)Position, (const Ogre::Vector3 *)Position);
        Ogre::Matrix4::transformNormal(
          (Ogre::Matrix4 *)v39,
          (Ogre::Vector3 *)VertexElement,
          (const Ogre::Vector3 *)VertexElement);
        VertexElement = (unsigned __int16 *)((char *)VertexElement + v14);
        v30 = (unsigned __int16 *)((char *)v30 + v14);
      }
      Ogre::BoxBound::operator+=((int)v37, (float *)Position);
      Position = (unsigned __int16 *)((char *)Position + v14);
      v24 = (unsigned __int16 *)((char *)v24 + v14);
      if ( *(_DWORD *)(v12 + 52) != 0 )
      {
        v22 = v31 * v25[1];
        v35 = v31 * v25[2];
        v36 = v31 * v25[3];
        *v27 = v31 * *v25;
        v27[1] = v22;
        v27[2] = v35;
        v27[3] = v36;
        v27 = (float *)((char *)v27 + v14);
        v25 = (float *)((char *)v25 + v14);
      }
    }
    v26 += v15;
    v11 = v29 + 1;
  }
  v17 = v37[1];
  v18 = v37[2];
  *((_DWORD *)v10 + 7) = v37[0];
  *((_DWORD *)v10 + 8) = v17;
  *((_DWORD *)v10 + 9) = v18;
  result = v37[4];
  v20 = v37[5];
  *((_DWORD *)v10 + 10) = v37[3];
  *((_DWORD *)v10 + 11) = result;
  *((_DWORD *)v10 + 12) = v20;
  a2[3] = v10;
  return result;
}


//======================================================================
// Ogre::MeshInstance::mergeSubMeshIndex(Ogre::SubMeshInstance *,std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>> &,unsigned int,unsigned int,std::vector&<unsigned int,std::allocator<unsigned int>>,unsigned int)
// address: 0x0018942C   size: 0xA6 (166 bytes)
//======================================================================
void __fastcall Ogre::MeshInstance::mergeSubMeshIndex(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int *a6)
{
  int v7; // r0
  unsigned int v9; // r5
  void *v10; // r4
  int v11; // r12
  int v12; // r3
  int v13; // r7
  _DWORD *v14; // r5
  int i; // [sp+Ch] [bp-8h]

  v7 = a3[1];
  v9 = (v7 - *a3) >> 6;
  if ( v9 != 0 )
  {
    if ( v9 > 0x3FFFFFFF )
      sub_3BCEB4(v7);
    v10 = (void *)operator new(4 * v9);
  }
  else
  {
    v10 = nullptr;
  }
  memset(v10, 0, 4 * v9);
  a2[4] = 0;
  v11 = 4 * a4;
  for ( i = 0; i != v9; ++i )
  {
    v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*a3 + (i << 6) + 60) + 16) + v11) + 20) + 4 * a5);
    *((_DWORD *)v10 + i) = *(_DWORD *)(v12 + 28);
    a2[4] += *(_DWORD *)(v12 + 20);
  }
  v13 = *a6;
  v14 = (_DWORD *)operator new(0x28u);
  Ogre::IndexData::IndexData(v14, i, (int *)v10, v13, *(_DWORD *)(*a2 + 16));
  a2[2] = v14;
  if ( v10 != nullptr )
    operator delete(v10);
}


//======================================================================
// Ogre::MeshInstance::getName(void)
// address: 0x001894D8   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::MeshInstance::getName(Ogre::MeshInstance *this)
{
  return *(_DWORD *)this + 16;
}


//======================================================================
// Ogre::MeshInstance::prepareContext(Ogre::ShaderContext *,Ogre::Material *,Ogre::Model *)
// address: 0x001894DE   size: 0x2 (2 bytes)
//======================================================================
void Ogre::MeshInstance::prepareContext()
{
  ;
}


//======================================================================
// Ogre::MeshInstance::setColorType(int)
// address: 0x001894E0   size: 0x26 (38 bytes)
//======================================================================
float __fastcall Ogre::MeshInstance::setColorType(float this, int a2)
{
  float v2; // r5
  int i; // r4
  int v4; // r3
  int v5; // r7

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v4 = *(_DWORD *)(LODWORD(v2) + 8);
    if ( i >= (*(_DWORD *)(LODWORD(v2) + 12) - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(4 * i + v4);
    this = (float)a2;
    *(float *)(v5 + 36) = (float)a2;
  }
  return this;
}


//======================================================================
// Ogre::MeshInstance::findSubMeshByMaterial(Ogre::FixedString const&)
// address: 0x00189506   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::MeshInstance::findSubMeshByMaterial(Ogre::MeshInstance *this, const Ogre::FixedString *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r5
  int result; // r0

  v2 = *((_DWORD *)this + 2);
  v3 = 0;
  v4 = (*((_DWORD *)this + 3) - v2) >> 2;
  while ( v3 != v4 )
  {
    result = *(_DWORD *)(v2 + 4 * v3);
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)result + 36) + 16) == *(_DWORD *)a2 )
      return result;
    ++v3;
  }
  return 0;
}


//======================================================================
// Ogre::MeshInstance::getNumVertex(void)
// address: 0x0018952E   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::MeshInstance::getNumVertex(Ogre::MeshInstance *this)
{
  int v1; // r2
  int v2; // r1
  int v3; // r3
  int result; // r0
  int v5; // r1
  int v6; // r4

  v1 = *((_DWORD *)this + 2);
  v2 = *((_DWORD *)this + 3);
  v3 = 0;
  result = 0;
  v5 = (v2 - v1) >> 2;
  while ( v3 != v5 )
  {
    v6 = *(_DWORD *)(v1 + 4 * v3++);
    result += *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v6 + 32) + 52);
  }
  return result;
}


//======================================================================
// Ogre::MeshInstance::makeInstance(unsigned int)
// address: 0x00189552   size: 0x24 (36 bytes)
//======================================================================
Ogre::VertexData *__fastcall Ogre::MeshInstance::makeInstance(Ogre::VertexData *this, char a2)
{
  Ogre::VertexData *v2; // r5
  unsigned int i; // r4
  int v5; // r3

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)v2 + 2);
    if ( i >= (*((_DWORD *)v2 + 3) - v5) >> 2 )
      break;
    this = Ogre::SubMeshInstance::makeInstance(*(Ogre::VertexData **)(4 * i + v5), a2);
  }
  return this;
}


//======================================================================
// Ogre::MeshInstance::getLocalBounds(Ogre::BoxBound &)
// address: 0x00189576   size: 0x38 (56 bytes)
//======================================================================
int __fastcall Ogre::MeshInstance::getLocalBounds(int this, Ogre::BoxBound *a2)
{
  int v2; // r5
  unsigned int i; // r4
  int v5; // r3
  int VertexData; // r7

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v2 + 8);
    if ( i >= (*(_DWORD *)(v2 + 12) - v5) >> 2 )
      break;
    VertexData = Ogre::SubMeshInstance::getVertexData(*(Ogre::SubMeshInstance **)(4 * i + v5));
    Ogre::BoxBound::operator+=((int)a2, (float *)(VertexData + 28));
    this = Ogre::BoxBound::operator+=((int)a2, (float *)(VertexData + 40));
  }
  return this;
}


//======================================================================
// Ogre::MeshInstance::setTexture(Ogre::FixedString const&,Ogre::Texture *)
// address: 0x001895AE   size: 0x4A (74 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::MeshInstance::setTexture(
        Ogre::MeshInstance *this,
        const Ogre::FixedString *a2,
        Ogre::Texture *a3)
{
  unsigned int i; // r4
  Ogre::Material **SubMesh; // r5
  Ogre::Material *v6; // r7
  unsigned __int64 v8; // [sp+0h] [bp-Ch]

  v8 = __PAIR64__((unsigned int)a3, (unsigned int)a2);
  for ( i = 0; i < (*((_DWORD *)this + 3) - *((_DWORD *)this + 2)) >> 2; ++i )
  {
    SubMesh = (Ogre::Material **)Ogre::MeshInstance::getSubMesh(this, i);
    if ( SubMesh[1] == nullptr )
    {
      v6 = (Ogre::Material *)operator new(0x2Cu);
      Ogre::Material::Material(v6, *((const Ogre::Material **)*SubMesh + 9));
      SubMesh[1] = v6;
    }
    Ogre::Material::setParamTexture(SubMesh[1], (const Ogre::FixedString *)v8, (Ogre::Texture *)HIDWORD(v8), 0);
  }
  return v8;
}


//======================================================================
// Ogre::MeshInstance::~MeshInstance()
// address: 0x00189EEC   size: 0x46 (70 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12MeshInstanceD1Ev'
void __fastcall Ogre::MeshInstance::~MeshInstance(Ogre::MeshInstance *this)
{
  unsigned int i; // r5
  int v3; // r3
  void *v4; // r6
  void *v5; // r0

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 2);
    if ( i >= (*((_DWORD *)this + 3) - v3) >> 2 )
      break;
    v4 = *(void **)(4 * i + v3);
    if ( v4 != nullptr )
    {
      Ogre::SubMeshInstance::~SubMeshInstance(*(Ogre::SubMeshInstance **)(4 * i + v3));
      operator delete(v4);
    }
  }
  if ( *(_DWORD *)this != 0 )
  {
    Ogre::BaseObject::release(*(_DWORD **)this);
    *(_DWORD *)this = 0;
  }
  v5 = *((void **)this + 2);
  if ( v5 != nullptr )
    operator delete(v5);
}


//======================================================================
// Ogre::MeshInstance::MeshInstance(Ogre::MeshData *)
// address: 0x0018ABD6   size: 0x54 (84 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12MeshInstanceC1EPNS_8MeshDataE'
Ogre::MeshInstance *__fastcall Ogre::MeshInstance::MeshInstance(Ogre::MeshInstance *this, Ogre::MeshData *a2)
{
  unsigned int v2; // r6
  int v5; // r3
  int v6; // r2
  int v7; // r7
  __int64 v8; // r0
  int v10; // [sp+4h] [bp-10h]
  int v11; // [sp+Ch] [bp-8h] BYREF

  v2 = 0;
  *(_DWORD *)this = a2;
  *((_BYTE *)this + 4) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  (*(void (__fastcall **)(Ogre::MeshData *))(*(_DWORD *)a2 + 4))(a2);
  while ( 1 )
  {
    v5 = *((_DWORD *)a2 + 5);
    if ( v2 >= (*((_DWORD *)a2 + 6) - v5) >> 2 )
      break;
    v6 = *(_DWORD *)(4 * v2++ + v5);
    v10 = v6;
    v7 = operator new(0x38u);
    Ogre::SubMeshInstance::SubMeshInstance(v7, v10);
    LODWORD(v8) = (char *)this + 8;
    HIDWORD(v8) = &v11;
    v11 = v7;
    std::vector<Ogre::SubMeshInstance *>::push_back(v8);
  }
  return this;
}


//======================================================================
// Ogre::MeshInstance::MeshInstance(std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>> &,unsigned int)
// address: 0x0018AC2A   size: 0x11E (286 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12MeshInstanceC1ERSt6vectorINS_17ModelInstanceDataESaIS2_EEj'
int __fastcall Ogre::MeshInstance::MeshInstance(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r2
  unsigned int i; // r7
  int j; // r3
  int v11; // r1
  int v12; // r0
  __int64 v13; // r0
  int k; // r3
  int v15; // r1
  _DWORD *v17; // [sp+14h] [bp-28h]
  int v18; // [sp+18h] [bp-24h]
  unsigned int v19; // [sp+1Ch] [bp-20h]
  int v21; // [sp+24h] [bp-18h]
  _DWORD *v22; // [sp+2Ch] [bp-10h] BYREF
  void *v23[3]; // [sp+30h] [bp-Ch] BYREF
  void *v24[4]; // [sp+3Ch] [bp+0h] BYREF

  v3 = 0;
  *(_BYTE *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v21 = 4 * a3;
  v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*a2 + 60) + 16) + 4 * a3);
  *(_DWORD *)a1 = v6;
  (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = a2[1];
  v8 = *a2;
  v24[0] = nullptr;
  v19 = (v7 - v8) >> 6;
  std::vector<unsigned int>::vector(v23, v19, (int *)v24);
  v22 = nullptr;
  std::vector<unsigned int>::vector(v24, v19, (int *)&v22);
  for ( i = 0; i < (*(_DWORD *)(*(_DWORD *)a1 + 24) - *(_DWORD *)(*(_DWORD *)a1 + 20)) >> 2; ++i )
  {
    for ( j = 0; j != v19; ++j )
    {
      v11 = 4 * j;
      v12 = *(_DWORD *)(*a2 + (j << 6) + 60);
      *(_DWORD *)((char *)v23[0] + v11) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v12 + 16) + v21)
                                                                                        + 20)
                                                                            + 4 * i)
                                                                + 32)
                                                    + 52);
      v3 += *(_DWORD *)((char *)v23[0] + v11);
    }
    v18 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 20) + 4 * i);
    v17 = (_DWORD *)operator new(0x38u);
    Ogre::SubMeshInstance::SubMeshInstance((int)v17, v18);
    v22 = v17;
    Ogre::MeshInstance::mergeSubMeshVertex(a1, v17, a2, a3, i, v23, v3, v24);
    Ogre::MeshInstance::mergeSubMeshIndex(a1, v22, a2, a3, i, (int *)v23);
    LODWORD(v13) = a1 + 8;
    HIDWORD(v13) = &v22;
    std::vector<Ogre::SubMeshInstance *>::push_back(v13);
    for ( k = 0; k != v19; ++k )
    {
      v15 = 4 * k;
      *(_DWORD *)((char *)v24[0] + v15) += *(_DWORD *)((char *)v23[0] + v15);
    }
  }
  std::_Vector_base<unsigned int>::~_Vector_base(v24);
  std::_Vector_base<unsigned int>::~_Vector_base(v23);
  return a1;
}

