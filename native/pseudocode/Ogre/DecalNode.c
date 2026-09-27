// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DecalNode

//======================================================================
// Ogre::DecalNode::getRTTI(void)const
// address: 0x00168F8C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::DecalNode::getRTTI(Ogre::DecalNode *this)
{
  return &Ogre::DecalNode::m_RTTI;
}


//======================================================================
// Ogre::DecalNode::resetUpdate(bool,unsigned int)
// address: 0x00168F98   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::DecalNode::resetUpdate(int this, bool a2, unsigned int a3)
{
  *(_BYTE *)(this + 184) = a2;
  if ( a3 != -1 )
  {
    this += 252;
    *(_DWORD *)this = a3;
  }
  return this;
}


//======================================================================
// Ogre::DecalNode::attachToScene(Ogre::GameScene *,bool)
// address: 0x00168FAA   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::DecalNode::attachToScene(Ogre::DecalNode *this, Ogre::GameScene *a2, bool a3)
{
  return Ogre::MovableObject::attachToScene(this, a2, false);
}


//======================================================================
// Ogre::DecalNode::~DecalNode()
// address: 0x00168FB4   size: 0x4E (78 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9DecalNodeD1Ev'
void __fastcall Ogre::DecalNode::~DecalNode(void **this)
{
  void **v1; // r4
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  v1 = this + 63;
  *this = &off_456FA0;
  operator delete(*(this + 79));
  operator delete(v1[17]);
  v3 = v1[3];
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    v1[3] = nullptr;
  }
  v4 = v1[1];
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    v1[1] = nullptr;
  }
  Ogre::VertexFormat::~VertexFormat(this + 69);
  Ogre::RenderableObject::~RenderableObject((Ogre::RenderableObject *)this);
}


//======================================================================
// Ogre::DecalNode::~DecalNode()
// address: 0x00169008   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DecalNode::~DecalNode(void **this)
{
  Ogre::DecalNode::~DecalNode(this);
  operator delete(this);
}


//======================================================================
// Ogre::DecalNode::update(unsigned int)
// address: 0x001690F4   size: 0x58 (88 bytes)
//======================================================================
float __fastcall Ogre::DecalNode::update(Ogre::DecalNode *this, unsigned int a2)
{
  unsigned int *v4; // r4
  char *WorldMatrix; // r0
  float result; // r0
  _BYTE v7[64]; // [sp+0h] [bp-80h] BYREF
  float v8[16]; // [sp+40h] [bp-40h] BYREF

  Ogre::MovableObject::update(this, a2);
  v4 = (unsigned int *)((char *)this + 252);
  if ( *((_BYTE *)this + 184) == 0 )
    *v4 += a2;
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v7, (const Ogre::Matrix4 *)WorldMatrix);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v8);
  Ogre::Matrix4::getScale((Ogre::Matrix4 *)v7, (Ogre::Matrix4 *)v8);
  result = *((float *)this + 64);
  if ( result != 0.0 )
  {
    Ogre::DecalData::prepareData((Ogre::DecalData *)LODWORD(result), *v4);
    result = v8[0] * *((float *)this + 68);
    *((float *)this + 67) = result;
  }
  return result;
}


//======================================================================
// Ogre::DecalNode::updateWorldCache(void)
// address: 0x0016914C   size: 0x64 (100 bytes)
//======================================================================
float __fastcall Ogre::DecalNode::updateWorldCache(Ogre::DecalNode *this)
{
  char *WorldMatrix; // r0
  int v3; // r5
  int v4; // r1
  float v5; // r5
  float result; // r0

  Ogre::MovableObject::updateWorldCache(this);
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  v3 = *((_DWORD *)WorldMatrix + 12);
  v4 = *((_DWORD *)WorldMatrix + 13);
  *((_DWORD *)this + 37) = *((_DWORD *)WorldMatrix + 14);
  *((_DWORD *)this + 35) = v3;
  *((_DWORD *)this + 36) = v4;
  v5 = *((float *)this + 67);
  *((float *)this + 39) = v5;
  *((float *)this + 38) = v5 + 1000.0;
  *((float *)this + 40) = v5 + 1000.0;
  result = j_sqrt((float)((float)((float)((float)(v5 + 1000.0) * (float)(v5 + 1000.0)) + (float)(v5 * v5))
                        + (float)((float)(v5 + 1000.0) * (float)(v5 + 1000.0))));
  *((float *)this + 41) = result;
  return result;
}


//======================================================================
// Ogre::DecalNode::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x00169528   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::DecalNode::render(int this, Ogre::DynamicBufferPool **a2, const Ogre::ShaderEnvData *a3)
{
  if ( *(_DWORD *)(this + 304) != 0 )
    *(float *)&this = sub_1691B4(this, a2, (int)a3);
  return this;
}


//======================================================================
// Ogre::DecalNode::DecalNode(Ogre::DecalData *)
// address: 0x0016953C   size: 0x1FA (506 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9DecalNodeC2EPNS_9DecalDataE'
Ogre::DecalNode *__fastcall Ogre::DecalNode::DecalNode(Ogre::DecalNode *this, Ogre::DecalData *a2)
{
  int v3; // r3
  unsigned int v4; // r6
  int v5; // r4
  int v6; // r3
  float v7; // r5
  int v8; // r0
  int v9; // r2
  int v10; // r3
  Ogre::Material *v11; // r7
  void *v12; // r1
  int v13; // r2
  void *v14; // r1
  int v15; // r2
  void *v16; // r1
  int v17; // r2
  Ogre::Material *v18; // r7
  void *v19; // r1
  Ogre::Material *v20; // r7
  int v21; // r2
  void *v22; // r1
  Ogre::Material *v23; // r6
  int *v26; // [sp+10h] [bp-14h]
  int v27; // [sp+10h] [bp-14h]
  int v28; // [sp+14h] [bp-10h]
  Ogre::FixedString *v29[2]; // [sp+1Ch] [bp-8h] BYREF

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_456FA0;
  v26 = (int *)((char *)this + 276);
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 69);
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 64) = a2;
  if ( a2 != nullptr )
  {
    (*(void (__fastcall **)(Ogre::DecalData *))(*(_DWORD *)a2 + 4))(a2);
    v3 = *((_DWORD *)this + 64);
    *((_DWORD *)this + 68) = 0;
    v4 = 0;
    v28 = v3;
    v5 = v3 + 268;
    while ( 1 )
    {
      v6 = *(_DWORD *)(v28 + 268);
      if ( v4 >= (*(_DWORD *)(v5 + 4) - v6) >> 3 )
        break;
      LODWORD(v7) = (*(unsigned __int8 *)(v6 + 8 * v4 + 5) << 8)
                  | *(unsigned __int8 *)(v6 + 8 * v4 + 4)
                  | (*(unsigned __int8 *)(v6 + 8 * v4 + 6) << 16)
                  | (*(unsigned __int8 *)(v6 + 8 * v4 + 7) << 24);
      if ( *((float *)this + 68) < v7 )
        *((float *)this + 68) = v7;
      ++v4;
    }
  }
  else
  {
    *((_DWORD *)this + 68) = 1120403456;
  }
  *((_DWORD *)this + 67) = *((_DWORD *)this + 68);
  *((_BYTE *)this + 324) = 1;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 80) = 0;
  Ogre::VertexFormat::addElement(v26, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement(v26, 4u, 5u, 0, 0, -1);
  v8 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 36))(
         Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
         v26);
  v10 = *((_DWORD *)this + 64);
  *((_DWORD *)this + 65) = v8;
  if ( v10 == 0 )
  {
    Ogre::FixedString::FixedString((Ogre::FixedString *)v29, (Ogre::FixedString *)"decal", v9);
    v23 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v23, (const Ogre::FixedString *)v29);
    *((_DWORD *)this + 66) = v23;
    goto LABEL_12;
  }
  v27 = *(_DWORD *)(v10 + 48);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v29, (Ogre::FixedString *)"decal", v9);
  v11 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v11, (const Ogre::FixedString *)v29);
  Ogre::FixedString::~FixedString(v29, v12);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v29, (Ogre::FixedString *)"BLEND_MODE", v13);
  Ogre::Material::setParamMacro(v11, (const Ogre::FixedString *)v29, v27);
  Ogre::FixedString::~FixedString(v29, v14);
  *((_DWORD *)this + 66) = v11;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v29, (Ogre::FixedString *)"g_DiffuseTex", v15);
  Ogre::Material::setParamTexture(
    v11,
    (const Ogre::FixedString *)v29,
    *(Ogre::Texture **)(*((_DWORD *)this + 64) + 964),
    0);
  Ogre::FixedString::~FixedString(v29, v16);
  v17 = *((_DWORD *)this + 64);
  if ( *(_DWORD *)(v17 + 968) != 0 )
  {
    v18 = *((Ogre::Material **)this + 66);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v29, (Ogre::FixedString *)"MASK_TEXTURE", v17);
    Ogre::Material::setParamMacro(v18, (const Ogre::FixedString *)v29, 1);
    Ogre::FixedString::~FixedString(v29, v19);
    v20 = *((Ogre::Material **)this + 66);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v29, (Ogre::FixedString *)"g_MaskTex", v21);
    Ogre::Material::setParamTexture(
      v20,
      (const Ogre::FixedString *)v29,
      *(Ogre::Texture **)(*((_DWORD *)this + 64) + 968),
      0);
LABEL_12:
    Ogre::FixedString::~FixedString(v29, v22);
  }
  *((_DWORD *)this + 63) = 0;
  return this;
}


//======================================================================
// Ogre::DecalNode::newObject(void)
// address: 0x0016975C   size: 0x16 (22 bytes)
//======================================================================
Ogre::DecalNode *__fastcall Ogre::DecalNode::newObject(Ogre::DecalNode *this)
{
  Ogre::DecalNode *v1; // r4

  v1 = (Ogre::DecalNode *)operator new(0x148u);
  Ogre::DecalNode::DecalNode(v1, nullptr);
  return v1;
}


//======================================================================
// Ogre::DecalNode::GetWorldFatAabb(void)
// address: 0x00169774   size: 0x8E (142 bytes)
//======================================================================
Ogre::DecalNode *__fastcall Ogre::DecalNode::GetWorldFatAabb(Ogre::DecalNode *this, int a2)
{
  float v4; // r2
  float v5; // r7
  float v6; // r3
  float *v7; // r5
  float v8; // r6
  float v9; // r5
  float v11; // [sp+Ch] [bp-8h]

  if ( *(_BYTE *)(a2 + 180) != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 68))(a2);
  v4 = *(float *)(a2 + 144);
  v5 = *(float *)(a2 + 140);
  v6 = *(float *)(a2 + 148);
  v7 = (float *)(a2 + 152);
  v8 = *v7 + 1000.0;
  v11 = v7[1] + 1000.0;
  v9 = v7[2] + 1000.0;
  *(float *)this = v5 - v8;
  *((float *)this + 1) = v4 - v11;
  *((float *)this + 2) = v6 - v9;
  *((float *)this + 3) = v5 + v8;
  *((float *)this + 4) = v4 + v11;
  *((float *)this + 5) = v6 + v9;
  *((_BYTE *)this + 24) = 1;
  return this;
}


//======================================================================
// Ogre::DecalNode::shouldRebuild(void)
// address: 0x00169808   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::DecalNode::shouldRebuild(Ogre::DecalNode *this)
{
  return 1;
}


//======================================================================
// Ogre::DecalNode::buildMesh(Ogre::Vector3 *,unsigned short *,int,int)
// address: 0x0016980C   size: 0xAC (172 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::DecalNode::buildMesh(
        Ogre::DecalNode *this,
        Ogre::Vector3 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5)
{
  char *v5; // r4
  signed int v7; // r0
  void *v9; // r0
  unsigned int v10; // r0
  int v11; // r0
  void *v12; // r0
  unsigned int v13; // r0
  int v14; // r0
  char *WorldMatrix; // r0
  int v16; // r2
  int v17; // r1
  unsigned __int64 v19; // [sp+0h] [bp-Ch]

  v5 = (char *)this + 252;
  v7 = *((_DWORD *)this + 77);
  v19 = __PAIR64__((unsigned int)a3, (unsigned int)a2);
  *((_DWORD *)v5 + 12) = a4;
  *((_DWORD *)v5 + 13) = a5;
  if ( (int)a4 > v7 )
  {
    v9 = *((void **)v5 + 16);
    if ( v9 != nullptr )
      operator delete(v9);
    if ( a4 > 0xAA00000 )
      v10 = -1;
    else
      v10 = 12 * a4;
    v11 = operator new[](v10);
    *((_DWORD *)v5 + 14) = a4;
    *((_DWORD *)v5 + 16) = v11;
  }
  if ( a5 > *((_DWORD *)v5 + 15) )
  {
    v12 = *((void **)v5 + 17);
    if ( v12 != nullptr )
      operator delete(v12);
    if ( (unsigned int)(3 * a5) > 0x3F800000 )
      v13 = -1;
    else
      v13 = 6 * a5;
    v14 = operator new[](v13);
    *((_DWORD *)v5 + 15) = a5;
    *((_DWORD *)v5 + 17) = v14;
  }
  j_memcpy(*((void **)v5 + 16), (const void *)v19, 12 * *((_DWORD *)v5 + 12));
  j_memcpy(*((void **)v5 + 17), (const void *)HIDWORD(v19), 6 * *((_DWORD *)v5 + 13));
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  v16 = *((_DWORD *)WorldMatrix + 14);
  v17 = *((_DWORD *)WorldMatrix + 13);
  *((_DWORD *)this + 72) = *((_DWORD *)WorldMatrix + 12);
  *((_DWORD *)this + 74) = v16;
  *((_DWORD *)this + 73) = v17;
  *((_BYTE *)this + 324) = 0;
  return v19;
}


//======================================================================
// Ogre::DecalNode::BuildMesh(std::vector<Ogre::RenderableObject *,std::allocator<Ogre::RenderableObject *>> &)
// address: 0x001698B8   size: 0x130 (304 bytes)
//======================================================================
int __fastcall Ogre::DecalNode::BuildMesh(int a1, int *a2)
{
  unsigned int v2; // r5
  int v3; // r3
  int v4; // r4
  signed int v5; // r1
  unsigned int v6; // r0
  int v7; // r0
  unsigned int v8; // r0
  char *WorldMatrix; // r0
  int v10; // r2
  int v11; // r4
  int v12; // r1
  unsigned int v14; // [sp+10h] [bp-4Ch]
  int v15; // [sp+1Ch] [bp-40h]
  void (__fastcall *v18)(int, _BYTE *, char *, char *, unsigned int, int, int *, int *); // [sp+2Ch] [bp-30h]
  int v19; // [sp+34h] [bp-28h] BYREF
  int v20; // [sp+38h] [bp-24h] BYREF
  _BYTE v21[32]; // [sp+3Ch] [bp-20h] BYREF

  v14 = 0;
  v15 = 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = *a2;
    if ( v14 >= (a2[1] - *a2) >> 2 )
      break;
    v19 = 0;
    v20 = 0;
    if ( v15 > 5999 )
      break;
    v4 = *(_DWORD *)(4 * v14 + v3);
    v18 = *(void (__fastcall **)(int, _BYTE *, char *, char *, unsigned int, int, int *, int *))(*(_DWORD *)v4 + 84);
    Ogre::DecalNode::GetWorldFatAabb((Ogre::DecalNode *)v21, a1);
    v18(v4, v21, &Ogre::g_pBuildTempVB[12 * v2], &Ogre::g_pBuildTempIB[6 * v15], v2, 6000 - v15, &v19, &v20);
    v2 += v19;
    v15 += v20;
    ++v14;
  }
  v5 = *(_DWORD *)(a1 + 308);
  *(_DWORD *)(a1 + 300) = v2;
  *(_DWORD *)(a1 + 304) = v15;
  if ( (int)v2 > v5 )
  {
    operator delete(*(void **)(a1 + 316));
    if ( v2 > 0xAA00000 )
      v6 = -1;
    else
      v6 = 12 * v2;
    v7 = operator new[](v6);
    *(_DWORD *)(a1 + 308) = v2;
    *(_DWORD *)(a1 + 316) = v7;
  }
  if ( v15 > *(_DWORD *)(a1 + 312) )
  {
    operator delete(*(void **)(a1 + 320));
    if ( (unsigned int)(3 * v15) > 0x3F800000 )
      v8 = -1;
    else
      v8 = 6 * v15;
    *(_DWORD *)(a1 + 320) = operator new[](v8);
    *(_DWORD *)(a1 + 312) = v15;
  }
  j_memcpy(*(void **)(a1 + 316), Ogre::g_pBuildTempVB, 12 * *(_DWORD *)(a1 + 300));
  j_memcpy(*(void **)(a1 + 320), Ogre::g_pBuildTempIB, 6 * *(_DWORD *)(a1 + 304));
  WorldMatrix = Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)a1);
  v10 = *((_DWORD *)WorldMatrix + 14);
  v11 = *((_DWORD *)WorldMatrix + 12);
  v12 = *((_DWORD *)WorldMatrix + 13);
  *(_DWORD *)(a1 + 288) = v11;
  *(_DWORD *)(a1 + 296) = v10;
  *(_DWORD *)(a1 + 292) = v12;
  *(_BYTE *)(a1 + 324) = 0;
  return a1;
}

