// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockLine

//======================================================================
// BlockLine::updateWorldCache(void)
// address: 0x002FEF18   size: 0x136 (310 bytes)
//======================================================================
float __fastcall BlockLine::updateWorldCache(BlockLine *this)
{
  BlockLine *v1; // r4
  float v2; // r0
  float v3; // r7
  float v4; // r0
  float v5; // r6
  float v6; // r0
  float v7; // r7
  float v8; // r6
  float v9; // r0
  float result; // r0
  float *v11; // [sp+0h] [bp-14h]

  v1 = this;
  Ogre::MovableObject::updateWorldCache(this);
  v2 = (double)(*((_DWORD *)v1 + 2) - Ogre::WorldPos::m_Origin) / 10.0;
  v3 = v2;
  v4 = (double)(*((_DWORD *)v1 + 3) - dword_4C6B7C) / 10.0;
  v5 = v4;
  v6 = (double)(*((_DWORD *)v1 + 4) - dword_4C6B80) / 10.0;
  v11 = (float *)((char *)v1 + 140);
  v1 = (BlockLine *)((char *)v1 + 152);
  *v11 = (float)(v3 + (float)(v3 + 100.0)) * 0.5;
  v11[1] = (float)(v5 + (float)(v5 + 100.0)) * 0.5;
  v11[2] = (float)(v6 + (float)(v6 + 100.0)) * 0.5;
  v7 = (float)((float)(v3 + 100.0) - v3) * 0.5;
  v8 = (float)((float)(v5 + 100.0) - v5) * 0.5;
  v9 = (float)((float)(v6 + 100.0) - v6) * 0.5;
  *(float *)v1 = v7;
  *((float *)v1 + 1) = v8;
  *((float *)v1 + 2) = v9;
  result = j_sqrt((float)((float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v9 * v9)));
  v11[6] = result;
  return result;
}


//======================================================================
// BlockLine::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002FF060   size: 0xE6 (230 bytes)
//======================================================================
int __fastcall BlockLine::render(BlockLine *this, Ogre::SceneRenderer *a2, const Ogre::ShaderEnvData *a3)
{
  Ogre::VertexBuffer **v3; // r5
  int VertexDecl; // r0
  float *v8; // r4
  int v9; // r7
  float *v10; // r5
  float v11; // r6
  float v12; // r0
  int v13; // r2
  Ogre::Material *v15; // [sp+1Ch] [bp-68h]
  int v16; // [sp+1Ch] [bp-68h]
  Ogre::ShaderContext *v17; // [sp+24h] [bp-60h]
  float v18; // [sp+28h] [bp-5Ch]
  float v19; // [sp+2Ch] [bp-58h]
  float v20; // [sp+30h] [bp-54h]
  float v21; // [sp+34h] [bp-50h]
  float *v22; // [sp+3Ch] [bp-48h]
  _BYTE v23[68]; // [sp+40h] [bp-44h] BYREF

  v3 = (Ogre::VertexBuffer **)((char *)this + 252);
  v15 = *((Ogre::Material **)this + 64);
  VertexDecl = Ogre::VertexData::getVertexDecl(*((Ogre::VertexData **)this + 63));
  v17 = Ogre::SceneRenderer::newContext((int)a2, 2, a3, v15, VertexDecl, *v3, nullptr, 2, 12, 1);
  if ( *((_BYTE *)this + 180) != 0 )
    (*(void (__fastcall **)(BlockLine *))(*(_DWORD *)this + 68))(this);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v23);
  v8 = (float *)((char *)this + 48);
  v9 = 0;
  v22 = (float *)((char *)a3 + 1084);
  do
  {
    v10 = v22;
    v18 = *v8;
    v19 = v8[1];
    v20 = v8[2];
    v21 = v8[3];
    v16 = 0;
    do
    {
      v11 = (float)((float)(v18 * *v10) + (float)(v19 * v10[4])) + (float)(v20 * v10[8]);
      v12 = v21 * v10[12];
      v13 = v16;
      ++v10;
      *(float *)&v23[v9 + v16] = v11 + v12;
      v16 += 4;
    }
    while ( v13 != 12 );
    v9 += 16;
    v8 += 4;
  }
  while ( v9 != 64 );
  return Ogre::ShaderContext::addValueParam((int)v17, 2, v23, 7, 1);
}


//======================================================================
// BlockLine::~BlockLine()
// address: 0x002FF14C   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN9BlockLineD1Ev'
void __fastcall BlockLine::~BlockLine(BlockLine *this)
{
  char *v1; // r5

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_462C80;
  Ogre::BaseObject::release(*((_DWORD **)this + 63));
  Ogre::BaseObject::release(*((_DWORD **)v1 + 1));
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// BlockLine::~BlockLine()
// address: 0x002FF178   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockLine::~BlockLine(BlockLine *this)
{
  BlockLine::~BlockLine(this);
  operator delete(this);
}


//======================================================================
// BlockLine::BlockLine(void)
// address: 0x002FF18C   size: 0x198 (408 bytes)
//======================================================================
// Alternative name is '_ZN9BlockLineC1Ev'
void __fastcall BlockLine::BlockLine(BlockLine *this)
{
  Ogre::Material *v1; // r6
  void *v2; // r1
  Ogre::Material *v3; // r6
  int v4; // r2
  int v5; // r3
  void *v6; // r1
  int *v7; // r6
  int v8; // r2
  int v9; // r3
  void *v10; // r1
  int v11; // r4
  int v12; // r7
  int v13; // r2
  float *v14; // r6
  float v16; // [sp+14h] [bp-20h]
  float v17; // [sp+18h] [bp-1Ch]
  Ogre::FixedString *v18; // [sp+20h] [bp-14h] BYREF
  void *v19[4]; // [sp+24h] [bp-10h] BYREF

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_462C80;
  v19[0] = Ogre::FixedString::insert((Ogre::FixedString *)"line", (const char *)0xFFFFFFFF, (int)this, (int)&off_462C80);
  v1 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v1, (const Ogre::FixedString *)v19);
  *((_DWORD *)this + 64) = v1;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v19, v2);
  v3 = *((Ogre::Material **)this + 64);
  v19[0] = Ogre::FixedString::insert((Ogre::FixedString *)"DEPTH_TEST", (const char *)0xFFFFFFFF, v4, v5);
  v6 = (void *)(Ogre::Material::setParamMacro(v3, (const Ogre::FixedString *)v19, 1u) >> 32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v19, v6);
  Ogre::VertexFormat::VertexFormat(v19);
  Ogre::VertexFormat::addElement((int *)v19, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v19, 4u, 5u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v19, 1u, 7u, 0, 0, -1);
  v7 = (int *)operator new(0x50u);
  Ogre::VertexData::VertexData((Ogre::VertexData *)v7);
  *((_DWORD *)this + 63) = v7;
  v18 = (Ogre::FixedString *)Ogre::FixedString::insert(
                               (Ogre::FixedString *)"blockline",
                               (const char *)0xFFFFFFFF,
                               v8,
                               v9);
  Ogre::FixedString::operator=(v7 + 2, (int *)&v18);
  Ogre::FixedString::~FixedString(&v18, v10);
  Ogre::VertexData::init(*((Ogre::VertexData **)this + 63), (const Ogre::VertexFormat *)v19, 0x18u);
  v11 = Ogre::VertexData::lock(*((Ogre::VertexData **)this + 63));
  v12 = 0;
  do
  {
    v13 = *(_DWORD *)((char *)&unk_446FC0 + v12);
    v12 += 4;
    v14 = (float *)&s_RawPos[3 * v13];
    v16 = (float)(v14[1] * 50.1) + 50.0;
    v17 = (float)(v14[2] * 50.1) + 50.0;
    *(float *)v11 = (float)(*v14 * 50.1) + 50.0;
    *(float *)(v11 + 4) = v16;
    *(_BYTE *)(v11 + 12) = 0;
    *(_BYTE *)(v11 + 13) = 0;
    *(_BYTE *)(v11 + 14) = 0;
    *(float *)(v11 + 8) = v17;
    *(_BYTE *)(v11 + 15) = -1;
    *(_DWORD *)(v11 + 16) = 0;
    *(_DWORD *)(v11 + 20) = 0;
    v11 += 24;
  }
  while ( v12 != 96 );
  Ogre::VertexData::unlock(*((_DWORD *)this + 63));
  Ogre::VertexFormat::~VertexFormat(v19);
}


//======================================================================
// BlockLine::setBox(WCoord const&,WCoord const&)
// address: 0x002FF378   size: 0x80 (128 bytes)
//======================================================================
__int64 __fastcall BlockLine::setBox(BlockLine *this, const WCoord *a2, const WCoord *a3)
{
  float v5; // r7
  int v6; // r2
  int v7; // r0
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  v5 = (float)((float)(*((_DWORD *)a3 + 1) - *((_DWORD *)a2 + 1)) / 100.0) / 0.9;
  *((float *)&v9 + 1) = (float)((float)(*((_DWORD *)a3 + 2) - *((_DWORD *)a2 + 2)) / 100.0) / 0.9;
  *((float *)this + 9) = (float)((float)(*(_DWORD *)a3 - *(_DWORD *)a2) / 100.0) / 0.9;
  *((float *)this + 10) = v5;
  *((_DWORD *)this + 11) = HIDWORD(v9);
  (*(void (__fastcall **)(BlockLine *))(*(_DWORD *)this + 64))(this);
  v6 = 10 * *((_DWORD *)a2 + 2);
  v7 = *(_DWORD *)a2;
  *((_DWORD *)this + 3) = 10 * *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 4) = v6;
  *((_DWORD *)this + 2) = 10 * v7;
  (*(void (__fastcall **)(BlockLine *))(*(_DWORD *)this + 64))(this);
  return v9;
}

