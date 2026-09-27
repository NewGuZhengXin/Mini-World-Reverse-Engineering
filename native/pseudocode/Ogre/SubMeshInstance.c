// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SubMeshInstance

//======================================================================
// Ogre::SubMeshInstance::SubMeshInstance(Ogre::SubMeshData *)
// address: 0x00188A8E   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15SubMeshInstanceC1EPNS_11SubMeshDataE'
int __fastcall Ogre::SubMeshInstance::SubMeshInstance(int result, int a2)
{
  int v2; // r1

  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  v2 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 16) = v2;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 52) = 0;
  *(_BYTE *)(result + 53) = 0;
  *(_BYTE *)(result + 40) = 0;
  return result;
}


//======================================================================
// Ogre::SubMeshInstance::getIndexData(void)
// address: 0x00188AB6   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::SubMeshInstance::getIndexData(Ogre::SubMeshInstance *this)
{
  int v1; // r3

  v1 = *((_DWORD *)this + 2);
  if ( v1 == 0 )
    return *(_DWORD *)(*(_DWORD *)this + 28);
  return v1;
}


//======================================================================
// Ogre::SubMeshInstance::getVertexData(void)
// address: 0x00188AC6   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::SubMeshInstance::getVertexData(Ogre::SubMeshInstance *this)
{
  int v1; // r3

  v1 = *((_DWORD *)this + 3);
  if ( v1 == 0 )
    return *(_DWORD *)(*(_DWORD *)this + 32);
  return v1;
}


//======================================================================
// Ogre::SubMeshInstance::getMaterial(void)
// address: 0x00188AD6   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::SubMeshInstance::getMaterial(Ogre::SubMeshInstance *this)
{
  int v1; // r3

  v1 = *((_DWORD *)this + 1);
  if ( v1 == 0 )
    return *(_DWORD *)(*(_DWORD *)this + 36);
  return v1;
}


//======================================================================
// Ogre::SubMeshInstance::intersectRay(Ogre::IntersectType,Ogre::Ray const&,float *)
// address: 0x00188AE8   size: 0xCE (206 bytes)
//======================================================================
int __fastcall Ogre::SubMeshInstance::intersectRay(Ogre::SubMeshInstance *a1, int a2, Ogre::Ray *a3, float *a4)
{
  float v5; // r5
  int IndexData; // r4
  int v7; // r6
  unsigned __int16 *Position; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r2
  unsigned __int16 *v13; // r0
  int v14; // r3
  int v15; // r2
  int v16; // r0
  unsigned __int16 *v17; // r0
  int v18; // r2
  int v19; // r0
  unsigned int i; // [sp+10h] [bp-3Ch]
  Ogre::VertexData *VertexData; // [sp+14h] [bp-38h]
  float v25; // [sp+20h] [bp-2Ch] BYREF
  _DWORD v26[3]; // [sp+24h] [bp-28h] BYREF
  _DWORD v27[3]; // [sp+30h] [bp-1Ch] BYREF
  _DWORD v28[4]; // [sp+3Ch] [bp-10h] BYREF

  VertexData = (Ogre::VertexData *)Ogre::SubMeshInstance::getVertexData(a1);
  v5 = 3.4028e38;
  IndexData = Ogre::SubMeshInstance::getIndexData(a1);
  for ( i = 0; ; ++i )
  {
    v7 = *(_DWORD *)(IndexData + 24);
    if ( i >= ((*(_DWORD *)(IndexData + 28) - v7) >> 1) / 3u )
      break;
    Position = Ogre::VertexData::getPosition(VertexData, *(unsigned __int16 *)(v7 + 6 * i));
    v9 = *(_DWORD *)Position;
    v10 = *((_DWORD *)Position + 1);
    v11 = *((_DWORD *)Position + 2);
    v26[0] = v9;
    v12 = *(_DWORD *)(IndexData + 24);
    v26[1] = v10;
    v26[2] = v11;
    v13 = Ogre::VertexData::getPosition(VertexData, *(unsigned __int16 *)(v12 + 6 * i + 2));
    v27[0] = *(_DWORD *)v13;
    v14 = *((_DWORD *)v13 + 1);
    v15 = *(_DWORD *)(IndexData + 24);
    v16 = *((_DWORD *)v13 + 2);
    v27[1] = v14;
    v27[2] = v16;
    v17 = Ogre::VertexData::getPosition(VertexData, *(unsigned __int16 *)(v15 + 6 * i + 4));
    v28[0] = *(_DWORD *)v17;
    v18 = *((_DWORD *)v17 + 1);
    v19 = *((_DWORD *)v17 + 2);
    v28[1] = v18;
    v28[2] = v19;
    if ( Ogre::Ray::intersectTriangle(
           a3,
           (const Ogre::Vector3 *)v26,
           (const Ogre::Vector3 *)v27,
           (const Ogre::Vector3 *)v28,
           &v25) != 0
      && v25 < v5 )
    {
      v5 = v25;
    }
  }
  if ( v5 == 3.4028e38 )
    return 0;
  if ( a4 != nullptr )
    *a4 = v5;
  return 1;
}


//======================================================================
// Ogre::SubMeshInstance::prepareContext(Ogre::ShaderContext *,Ogre::Material *,Ogre::Model *)
// address: 0x00188F00   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall Ogre::SubMeshInstance::prepareContext(
        Ogre::SubMeshInstance *this,
        Ogre::ShaderContext *a2,
        Ogre::Material *a3,
        Ogre::Model *a4)
{
  Ogre::Material *v4; // r7
  Ogre::ShaderContext *v8; // r0
  Ogre::Material *v9; // r1
  int v10; // r2
  Ogre::Texture *ParamTexture; // r0
  void *v12; // r1
  void *v13; // r1
  _DWORD *v14; // r1
  Ogre::VertexData *v15; // r6
  int result; // r0
  Ogre::FixedString *v17; // [sp+10h] [bp-Ch] BYREF
  Ogre::FixedString *v18[2]; // [sp+14h] [bp-8h] BYREF

  v4 = *((Ogre::Material **)this + 1);
  if ( v4 == nullptr )
    v4 = *(Ogre::Material **)(*(_DWORD *)this + 36);
  v8 = a2;
  v9 = v4;
  if ( a3 != nullptr )
  {
    if ( *((_BYTE *)a3 + 29) != 0 )
    {
      Ogre::FixedString::FixedString((Ogre::FixedString *)v18, (Ogre::FixedString *)"g_DiffuseTex", (int)v18);
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v17, (Ogre::FixedString *)"g_DiffuseTex", v10);
      ParamTexture = (Ogre::Texture *)Ogre::Material::GetParamTexture(v4, &v17);
      Ogre::Material::setParamTexture(a3, (const Ogre::FixedString *)v18, ParamTexture, 0);
      Ogre::FixedString::~FixedString(&v17, v12);
      Ogre::FixedString::~FixedString(v18, v13);
    }
    v8 = a2;
    v9 = a3;
  }
  Ogre::ShaderContext::setMaterial(v8, v9);
  v14 = *((_DWORD **)this + 2);
  if ( v14 == nullptr )
    v14 = *(_DWORD **)(*(_DWORD *)this + 28);
  if ( *((_BYTE *)this + 52) != 0 )
  {
    v15 = *((Ogre::VertexData **)this + 8);
  }
  else
  {
    v15 = *((Ogre::VertexData **)this + 3);
    if ( v15 == nullptr )
      v15 = *(Ogre::VertexData **)(*(_DWORD *)this + 32);
  }
  Ogre::ShaderContext::setIB((int)a2, v14);
  Ogre::ShaderContext::setVB(a2, (int)v15);
  result = Ogre::VertexData::getVertexDecl(v15);
  *((_DWORD *)a2 + 7) = result;
  *((_DWORD *)a2 + 10) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(*(_DWORD *)this + 16);
  *((_BYTE *)a2 + 54) = *((_BYTE *)a2 + 54) & 0xE3 | (4 * (*(_BYTE *)(*(_DWORD *)this + 24) & 7));
  return result;
}


//======================================================================
// Ogre::SubMeshInstance::makeInstance(unsigned int)
// address: 0x00188FC8   size: 0x5E (94 bytes)
//======================================================================
Ogre::VertexData *__fastcall Ogre::SubMeshInstance::makeInstance(Ogre::VertexData *this, char a2)
{
  Ogre::VertexData *v2; // r4
  const Ogre::Material *v4; // r7
  Ogre::Material *v5; // r6
  Ogre::VertexData *v6; // r6
  Ogre::IndexData *v7; // r5

  v2 = this;
  if ( (a2 & 1) != 0 && *((_DWORD *)this + 1) == 0 )
  {
    v4 = *(const Ogre::Material **)(*(_DWORD *)this + 36);
    v5 = (Ogre::Material *)operator new(0x2Cu);
    this = (Ogre::VertexData *)Ogre::Material::Material(v5, v4);
    *((_DWORD *)v2 + 1) = v5;
  }
  if ( (a2 & 2) != 0 && *((_DWORD *)v2 + 3) == 0 )
  {
    v6 = (Ogre::VertexData *)operator new(0x50u);
    this = Ogre::VertexData::VertexData(v6, *(const Ogre::VertexData **)(*(_DWORD *)v2 + 32));
    *((_DWORD *)v2 + 3) = v6;
  }
  if ( (a2 & 4) != 0 && *((_DWORD *)v2 + 2) == 0 )
  {
    v7 = (Ogre::IndexData *)operator new(0x28u);
    this = Ogre::IndexData::IndexData(v7, *(const Ogre::IndexData **)(*(_DWORD *)v2 + 28));
    *((_DWORD *)v2 + 2) = v7;
  }
  return this;
}


//======================================================================
// Ogre::SubMeshInstance::makeBakeInstance(void)
// address: 0x00189026   size: 0x1A8 (424 bytes)
//======================================================================
void __fastcall Ogre::SubMeshInstance::makeBakeInstance(Ogre::SubMeshInstance *this)
{
  int *v1; // r6
  int v3; // r4
  Ogre::VertexData *v4; // r7
  unsigned __int16 *Position; // r7
  unsigned __int16 *v6; // r0
  unsigned __int16 *VertexElement; // r7
  unsigned __int16 *v8; // r0
  unsigned __int16 *v9; // r7
  unsigned __int16 *v10; // r0
  unsigned __int16 *v11; // r7
  unsigned __int16 *v12; // r0
  unsigned __int16 *v13; // r7
  signed int v14; // [sp+Ch] [bp-18h]
  void *v15[4]; // [sp+14h] [bp-10h] BYREF

  v1 = *((int **)this + 3);
  if ( v1 != nullptr || (v1 = *(int **)(*(_DWORD *)this + 32)) != nullptr )
  {
    v14 = v1[13];
    Ogre::VertexFormat::VertexFormat(v15);
    Ogre::VertexFormat::addElement((int *)v15, 2u, 1u, 0, 0, -1);
    Ogre::VertexFormat::addElement((int *)v15, 2u, 4u, 0, 0, -1);
    Ogre::VertexFormat::addElement((int *)v15, 4u, 5u, 0, 0, -1);
    if ( Ogre::VertexData::getVertexElement(v1, 0, 2) != nullptr )
      Ogre::VertexFormat::addElement((int *)v15, 4u, 2u, 0, 0, -1);
    if ( Ogre::VertexData::getVertexElement(v1, 0, 3) != nullptr )
      Ogre::VertexFormat::addElement((int *)v15, 4u, 3u, 0, 0, -1);
    v3 = 0;
    Ogre::VertexFormat::addElement((int *)v15, 1u, 7u, 0, 0, -1);
    v4 = (Ogre::VertexData *)operator new(0x50u);
    Ogre::VertexData::VertexData(v4, (const Ogre::VertexFormat *)v15, v14);
    *((_DWORD *)this + 8) = v4;
    while ( v3 < v14 )
    {
      Position = Ogre::VertexData::getPosition((Ogre::VertexData *)v1, v3);
      if ( Position != nullptr )
      {
        v6 = Ogre::VertexData::getPosition(*((Ogre::VertexData **)this + 8), v3);
        *(_DWORD *)v6 = *(_DWORD *)Position;
        *((_DWORD *)v6 + 1) = *((_DWORD *)Position + 1);
        *((_DWORD *)v6 + 2) = *((_DWORD *)Position + 2);
      }
      VertexElement = Ogre::VertexData::getVertexElement(v1, v3, 4);
      if ( VertexElement != nullptr )
      {
        v8 = Ogre::VertexData::getVertexElement(*((int **)this + 8), v3, 4);
        *(_DWORD *)v8 = *(_DWORD *)VertexElement;
        *((_DWORD *)v8 + 1) = *((_DWORD *)VertexElement + 1);
        *((_DWORD *)v8 + 2) = *((_DWORD *)VertexElement + 2);
      }
      if ( (*((_DWORD *)this + 6) - *((_DWORD *)this + 5)) >> 2 != 0 )
        *(_DWORD *)Ogre::VertexData::getVertexElement(*((int **)this + 8), v3, 5) = *(_DWORD *)(4 * v3
                                                                                              + *((_DWORD *)this + 5));
      v9 = Ogre::VertexData::getVertexElement(v1, v3, 2);
      if ( v9 != nullptr )
      {
        v10 = Ogre::VertexData::getVertexElement(*((int **)this + 8), v3, 2);
        *(_BYTE *)v10 = *(_BYTE *)v9;
        *((_BYTE *)v10 + 1) = *((_BYTE *)v9 + 1);
        *((_BYTE *)v10 + 2) = *((_BYTE *)v9 + 2);
        *((_BYTE *)v10 + 3) = *((_BYTE *)v9 + 3);
      }
      v11 = Ogre::VertexData::getVertexElement(v1, v3, 3);
      if ( v11 != nullptr )
      {
        v12 = Ogre::VertexData::getVertexElement(*((int **)this + 8), v3, 3);
        *(_BYTE *)v12 = *(_BYTE *)v11;
        *((_BYTE *)v12 + 1) = *((_BYTE *)v11 + 1);
        *((_BYTE *)v12 + 2) = *((_BYTE *)v11 + 2);
        *((_BYTE *)v12 + 3) = *((_BYTE *)v11 + 3);
      }
      v13 = Ogre::VertexData::getVertexElement(v1, v3, 7);
      if ( v13 != nullptr )
      {
        *(_DWORD *)Ogre::VertexData::getVertexElement(*((int **)this + 8), v3, 7) = *(_DWORD *)v13;
        *((_DWORD *)Ogre::VertexData::getVertexElement(*((int **)this + 8), v3, 7) + 1) = *((_DWORD *)v13 + 1);
      }
      ++v3;
    }
    Ogre::VertexFormat::~VertexFormat(v15);
  }
}


//======================================================================
// Ogre::SubMeshInstance::SwitchToStaticLight(bool)
// address: 0x001891CE   size: 0x58 (88 bytes)
//======================================================================
void __fastcall Ogre::SubMeshInstance::SwitchToStaticLight(Ogre::SubMeshInstance *this, int a2)
{
  int v3; // r5
  int v4; // r6
  unsigned __int16 *VertexElement; // r0

  if ( *((unsigned __int8 *)this + 52) == a2 )
  {
    if ( *((_DWORD *)this + 8) != 0 && *((_BYTE *)this + 52) != 0 )
    {
      v3 = 0;
      v4 = (*((_DWORD *)this + 6) - *((_DWORD *)this + 5)) >> 2;
      while ( v3 < v4 )
      {
        if ( (*((_DWORD *)this + 6) - *((_DWORD *)this + 5)) >> 2 != 0 )
        {
          VertexElement = Ogre::VertexData::getVertexElement(*((int **)this + 8), v3, 5);
          if ( VertexElement != nullptr )
            *(_DWORD *)VertexElement = *(_DWORD *)(4 * v3 + *((_DWORD *)this + 5));
        }
        ++v3;
      }
    }
  }
  else
  {
    *((_BYTE *)this + 52) = a2;
    if ( *((_DWORD *)this + 8) == 0 )
      Ogre::SubMeshInstance::makeBakeInstance(this);
  }
}


//======================================================================
// Ogre::SubMeshInstance::~SubMeshInstance()
// address: 0x00189EB2   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15SubMeshInstanceD1Ev'
void __fastcall Ogre::SubMeshInstance::~SubMeshInstance(Ogre::SubMeshInstance *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  v2 = *((_DWORD **)this + 1);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 1) = 0;
  }
  v3 = *((_DWORD **)this + 2);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 2) = 0;
  }
  v4 = *((_DWORD **)this + 3);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 3) = 0;
  }
  std::_Vector_base<unsigned int>::~_Vector_base((void **)this + 5);
}

