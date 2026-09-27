// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TerrainBlock

//======================================================================
// Ogre::TerrainBlock::getRTTI(void)const
// address: 0x0017F96C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::TerrainBlock::getRTTI(Ogre::TerrainBlock *this)
{
  return &Ogre::TerrainBlock::m_RTTI;
}


//======================================================================
// Ogre::TerrainBlock::update(unsigned int)
// address: 0x0017F978   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::TerrainBlock::update(Ogre::TerrainBlock *this, unsigned int a2)
{
  int result; // r0

  result = *((_DWORD *)this + 66);
  if ( result != 0 )
    return (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)result + 40))(result, a2);
  return result;
}


//======================================================================
// Ogre::TerrainBlock::~TerrainBlock()
// address: 0x0017F98C   size: 0xA8 (168 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12TerrainBlockD1Ev'
void __fastcall Ogre::TerrainBlock::~TerrainBlock(Ogre::TerrainBlock *this)
{
  char *v1; // r4
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_457A30;
  v3 = *((_DWORD **)this + 75);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)v1 + 12) = 0;
  }
  v4 = *((_DWORD **)v1 + 3);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)v1 + 3) = 0;
  }
  if ( *(_DWORD *)v1 != 0 )
  {
    Ogre::BaseObject::release(*(_DWORD **)v1);
    *(_DWORD *)v1 = 0;
  }
  v5 = *((_DWORD **)v1 + 4);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)v1 + 4) = 0;
  }
  v6 = *((_DWORD **)v1 + 5);
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    *((_DWORD *)v1 + 5) = 0;
  }
  v7 = *((_DWORD **)v1 + 6);
  if ( v7 != nullptr )
  {
    Ogre::BaseObject::release(v7);
    *((_DWORD *)v1 + 6) = 0;
  }
  v8 = *((_DWORD **)v1 + 7);
  if ( v8 != nullptr )
  {
    Ogre::BaseObject::release(v8);
    *((_DWORD *)v1 + 7) = 0;
  }
  v9 = *((_DWORD **)v1 + 8);
  if ( v9 != nullptr )
  {
    Ogre::BaseObject::release(v9);
    *((_DWORD *)v1 + 8) = 0;
  }
  v10 = *((_DWORD **)v1 + 9);
  if ( v10 != nullptr )
  {
    Ogre::BaseObject::release(v10);
    *((_DWORD *)v1 + 9) = 0;
  }
  v11 = *((_DWORD **)v1 + 10);
  if ( v11 != nullptr )
  {
    Ogre::BaseObject::release(v11);
    *((_DWORD *)v1 + 10) = 0;
  }
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::TerrainBlock::~TerrainBlock()
// address: 0x0017FA38   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::TerrainBlock::~TerrainBlock(Ogre::TerrainBlock *this)
{
  Ogre::TerrainBlock::~TerrainBlock(this);
  operator delete(this);
}


//======================================================================
// Ogre::TerrainBlock::BuildDecalMesh(Ogre::BoxBound const&,Ogre::Vector3 *,unsigned short *,int,int,int &,int &)
// address: 0x0017FA4C   size: 0x2E0 (736 bytes)
//======================================================================
int __fastcall Ogre::TerrainBlock::BuildDecalMesh(
        Ogre::TerrainBlock *this,
        const Ogre::BoxBound *a2,
        Ogre::Vector3 *a3,
        unsigned __int16 *a4,
        int a5,
        int a6,
        int *a7,
        int *a8)
{
  float v8; // r7
  int v9; // r4
  int result; // r0
  int i; // r3
  float *v12; // r5
  float v13; // r0
  float v14; // r5
  int v15; // r5
  int *v16; // r4
  int j; // r3
  int v18; // r2
  _DWORD *v19; // r3
  _DWORD *v20; // r2
  int v21; // r3
  unsigned __int16 v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // [sp+Ch] [bp-68h]
  int v26; // [sp+Ch] [bp-68h]
  int v27; // [sp+Ch] [bp-68h]
  int v28; // [sp+14h] [bp-60h]
  float v29; // [sp+18h] [bp-5Ch]
  int v30; // [sp+18h] [bp-5Ch]
  int v31; // [sp+1Ch] [bp-58h]
  float v32; // [sp+20h] [bp-54h]
  int v33; // [sp+20h] [bp-54h]
  float v35; // [sp+28h] [bp-4Ch]
  int v36; // [sp+28h] [bp-4Ch]
  float v37; // [sp+2Ch] [bp-48h]
  int v38; // [sp+2Ch] [bp-48h]
  int v39; // [sp+30h] [bp-44h]
  int v41; // [sp+3Ch] [bp-38h]
  int v43; // [sp+48h] [bp-2Ch]
  int v44; // [sp+58h] [bp-1Ch]
  _DWORD v45[5]; // [sp+60h] [bp-14h] BYREF

  *a7 = 0;
  *a8 = 0;
  v8 = *(float *)a2;
  v9 = *((_DWORD *)this + 63);
  v32 = *((float *)a2 + 2);
  v37 = *((float *)a2 + 5);
  v35 = *((float *)a2 + 3);
  result = *(float *)a2 > *(float *)(v9 + 76);
  if ( *(float *)a2 <= *(float *)(v9 + 76) )
  {
    result = v35 < *(float *)(v9 + 64);
    if ( v35 >= *(float *)(v9 + 64) )
    {
      result = v32 > *(float *)(v9 + 84);
      if ( v32 <= *(float *)(v9 + 84) )
      {
        result = v37 < *(float *)(v9 + 72);
        if ( v37 >= *(float *)(v9 + 72) )
        {
          v25 = 954437177 * ((*(_DWORD *)(v9 + 128) - *(_DWORD *)(v9 + 124)) >> 2);
          for ( i = 0; i != v25 && i != 2000; ++i )
            dword_4B9668[i] = -1;
          v28 = (int)Ogre::Sqrt(COERCE_OGRE_((float)*(int *)(v9 + 40)), COERCE_FLOAT(2000));
          v12 = *((float **)this + 63);
          v26 = v28 - 1;
          v13 = v12[11] / (float)(v28 - 1);
          v29 = v12[16];
          v39 = 0;
          if ( v8 >= v29 )
            v39 = (int)(float)((float)(v8 - v29) / v13);
          v14 = v12[18];
          v31 = 0;
          if ( v32 >= v14 )
            v31 = (int)(float)((float)(v32 - v14) / v13);
          v33 = (int)(float)((float)((float)(v35 - v29) + (float)(v13 * 0.99)) / v13);
          if ( v26 <= v33 )
            v33 = v28 - 2;
          v36 = (int)(float)((float)((float)(v37 - v14) + (float)(v13 * 0.99)) / v13);
          if ( v26 <= v36 )
            v36 = v28 - 2;
          v15 = v28 * v31;
          v38 = (v31 + 1) * -4 * v28;
          v30 = v31 * 4 * v28;
          v44 = (v31 + 1) * v28 - v28 * v31 + v39 + 1;
          while ( 1 )
          {
            result = v36;
            if ( v31 > v36 )
              break;
            v16 = &dword_4B9668[v44 + v15];
            for ( j = v39 + v15; j - v15 <= v33; j = v41 )
            {
              v41 = j + 1;
              v45[1] = j + 1;
              v45[0] = j;
              v45[2] = v28 + 1 + j;
              v27 = 0;
              v45[3] = v28 + j;
              do
              {
                v18 = v45[v27];
                v43 = v18;
                if ( dword_4B9668[v18] == -1 )
                {
                  v19 = (_DWORD *)((char *)a3 + 12 * *a7);
                  v20 = (_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 63) + 124) + 36 * v18);
                  *v19 = *v20;
                  v19[1] = v20[1];
                  v19[2] = v20[2];
                  *((float *)a3 + 3 * *a7 + 1) = *((float *)a3 + 3 * *a7 + 1) + 5.0;
                  v21 = *a7 + 1;
                  dword_4B9668[v43] = a5 + *a7;
                  *a7 = v21;
                }
                ++v27;
              }
              while ( v27 != 4 );
              a4[3 * *a8] = *(int *)((char *)v16 + v38 + v30 - 4);
              result = *(unsigned __int16 *)((char *)v16 + v38 + v30);
              a4[3 * *a8 + 1] = result;
              v22 = *((_WORD *)v16 - 2);
              a4[3 * *a8 + 2] = v22;
              v23 = *a8 + 1;
              *a8 = v23;
              if ( v23 >= a6 )
                return result;
              a4[3 * v23] = result;
              result = *v16++;
              a4[3 * *a8 + 1] = result;
              a4[3 * *a8 + 2] = v22;
              v24 = *a8 + 1;
              *a8 = v24;
              if ( v24 >= a6 )
                return result;
            }
            v15 += v28;
            ++v31;
            v38 -= 4 * v28;
            v30 += 4 * v28;
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::TerrainBlock::getRenderPassRequired(Ogre::RenderPassDesc &)
// address: 0x0017FD88   size: 0x8A (138 bytes)
//======================================================================
int __fastcall Ogre::TerrainBlock::getRenderPassRequired(int result, int a2)
{
  _DWORD *v2; // r5
  float v4; // r6
  int v5; // r3
  float v6[4]; // [sp+Ch] [bp-10h] BYREF

  v2 = (_DWORD *)(result + 252);
  if ( *(_DWORD *)(result + 264) != 0 )
  {
    *(_DWORD *)a2 |= 4u;
    Ogre::BoxBound::getCenter((Ogre::BoxBound *)v6, (float *)(*v2 + 484));
    v4 = (float)((float)((float)(v6[0] - *(float *)(a2 + 12)) * (float)(v6[0] - *(float *)(a2 + 12)))
               + (float)((float)(v6[1] - *(float *)(a2 + 16)) * (float)(v6[1] - *(float *)(a2 + 16))))
       + (float)((float)(v6[2] - *(float *)(a2 + 20)) * (float)(v6[2] - *(float *)(a2 + 20)));
    result = v4 < *(float *)(a2 + 8);
    if ( v4 < *(float *)(a2 + 8) )
    {
      v5 = *(_DWORD *)(v2[3] + 372);
      *(float *)(a2 + 8) = v4;
      *(_DWORD *)(a2 + 4) = v5;
    }
  }
  return result;
}


//======================================================================
// Ogre::TerrainBlock::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x0017FE14   size: 0x126 (294 bytes)
//======================================================================
Ogre::IndexBuffer *__fastcall Ogre::TerrainBlock::render(
        Ogre::TerrainBlock *this,
        Ogre::SceneRenderer *a2,
        const Ogre::ShaderEnvData *a3)
{
  char *v4; // r4
  Ogre::Material *v5; // r7
  Ogre::Material *v6; // r0
  int v7; // r2
  int v8; // r2
  void *v9; // r1
  int v10; // r2
  Ogre::Material *v11; // r7
  void *v12; // r1
  Ogre::IndexBuffer *result; // r0
  int v14; // r3
  int v15; // r2
  Ogre::ShaderContext *v16; // r0
  int v17; // [sp+18h] [bp-1Ch]
  Ogre::Material *v20; // [sp+24h] [bp-10h]
  Ogre::FixedString *v21[2]; // [sp+2Ch] [bp-8h] BYREF

  v4 = (char *)this + 252;
  v17 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 76);
  switch ( v17 )
  {
    case 0:
      v5 = *((Ogre::Material **)this + 75);
LABEL_5:
      Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"USE_STATICLIGHT", (int)a3);
      v6 = v5;
      v7 = v17;
LABEL_11:
      Ogre::Material::setParamMacro(v6, (const Ogre::FixedString *)v21, v7);
      goto LABEL_12;
    case 1:
      v5 = *((Ogre::Material **)this + 75);
      goto LABEL_5;
    case 2:
      v8 = *((_DWORD *)this + 75);
      v20 = (Ogre::Material *)v8;
      if ( *((_DWORD *)this + 85) == 0 )
      {
        Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"USE_STATICLIGHT", v8);
        v6 = v20;
        v7 = 0;
        goto LABEL_11;
      }
      Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"USE_STATICLIGHT", v8);
      Ogre::Material::setParamMacro(v20, (const Ogre::FixedString *)v21, 2);
      Ogre::FixedString::~FixedString(v21, v9);
      if ( *((_DWORD *)v4 + 22) != 0 )
      {
        v11 = *((Ogre::Material **)v4 + 12);
        Ogre::FixedString::FixedString((Ogre::FixedString *)v21, (Ogre::FixedString *)"g_LightMap", v10);
        Ogre::Material::setParamTexture(v11, (const Ogre::FixedString *)v21, *((Ogre::Texture **)v4 + 22), 0);
LABEL_12:
        Ogre::FixedString::~FixedString(v21, v12);
      }
      break;
    default:
      break;
  }
  result = *((Ogre::IndexBuffer **)v4 + 3);
  if ( result != nullptr && (*((_DWORD *)result + 61) & (1 << *((_DWORD *)a2 + 3))) != 0 )
    result = (Ogre::IndexBuffer *)(*(int (__fastcall **)(Ogre::IndexBuffer *, Ogre::SceneRenderer *, const Ogre::ShaderEnvData *))(*(_DWORD *)result + 72))(
                                    result,
                                    a2,
                                    a3);
  v14 = *((_DWORD *)v4 + 13);
  if ( v14 != 0 )
  {
    if ( v14 != 1 )
      return result;
    result = *((Ogre::IndexBuffer **)this + *((_DWORD *)v4 + 23) + 68);
    v15 = *((_DWORD *)this + *((_DWORD *)v4 + 23) + 78);
  }
  else
  {
    result = *((Ogre::IndexBuffer **)v4 + 5);
    v15 = *((_DWORD *)v4 + 15);
  }
  if ( v15 > 2 )
  {
    v16 = Ogre::SceneRenderer::newContext(
            (int)a2,
            *((_DWORD *)this + 59),
            a3,
            *((Ogre::Material **)v4 + 12),
            *((_DWORD *)v4 + 11),
            *((Ogre::VertexBuffer **)v4 + 4),
            result,
            5,
            v15 - 2,
            0);
    return (Ogre::IndexBuffer *)Ogre::ShaderContext::setInstanceEnvData(v16, a2, nullptr, a3, nullptr);
  }
  return result;
}


//======================================================================
// Ogre::TerrainBlock::TerrainBlock(void)
// address: 0x0017FF70   size: 0x56 (86 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12TerrainBlockC1Ev'
Ogre::TerrainBlock *__fastcall Ogre::TerrainBlock::TerrainBlock(Ogre::TerrainBlock *this)
{
  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 59) = 2;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_457A30;
  *((_DWORD *)this + 63) = 0;
  j_memset((char *)this + 256, 0, 8u);
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_BYTE *)this + 336) = 1;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = -1;
  return this;
}


//======================================================================
// Ogre::TerrainBlock::newObject(void)
// address: 0x0017FFCC   size: 0x14 (20 bytes)
//======================================================================
Ogre::TerrainBlock *__fastcall Ogre::TerrainBlock::newObject(Ogre::TerrainBlock *this)
{
  Ogre::TerrainBlock *v1; // r4

  v1 = (Ogre::TerrainBlock *)operator new(0x15Cu);
  Ogre::TerrainBlock::TerrainBlock(v1);
  return v1;
}


//======================================================================
// Ogre::TerrainBlock::TerrainBlock(Ogre::TerrainBlockSource *)
// address: 0x0017FFE0   size: 0x92 (146 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12TerrainBlockC1EPNS_18TerrainBlockSourceE'
Ogre::TerrainBlock *__fastcall Ogre::TerrainBlock::TerrainBlock(Ogre::TerrainBlock *this, Ogre::TerrainBlockSource *a2)
{
  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_457A30;
  *((_DWORD *)this + 63) = a2;
  *((_DWORD *)this + 76) = 0;
  if ( a2 != nullptr )
    (*(void (__fastcall **)(Ogre::TerrainBlockSource *))(*(_DWORD *)a2 + 4))(a2);
  j_memset((char *)this + 256, 0, 8u);
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 78) = 318;
  *((_DWORD *)this + 79) = 318;
  *((_DWORD *)this + 80) = 318;
  *((_DWORD *)this + 81) = 318;
  *((_DWORD *)this + 82) = 318;
  *((_DWORD *)this + 83) = 318;
  *((_DWORD *)this + 61) |= 0x84u;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = -1;
  return this;
}


//======================================================================
// Ogre::TerrainBlock::setTerrainQuality(int)
// address: 0x00180078   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall Ogre::TerrainBlock::setTerrainQuality(Ogre::TerrainBlock *this, int a2)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 13) = a2;
  return result;
}


//======================================================================
// Ogre::TerrainBlock::setSubDevie(int)
// address: 0x0018007E   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall Ogre::TerrainBlock::setSubDevie(Ogre::TerrainBlock *this, int a2)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 23) = a2;
  return result;
}


//======================================================================
// Ogre::TerrainBlock::createMaterials(void)
// address: 0x00180084   size: 0x17A (378 bytes)
//======================================================================
void __fastcall Ogre::TerrainBlock::createMaterials(Ogre::TerrainBlock *this, int a2, int a3)
{
  char *v4; // r5
  Ogre::Material *v5; // r6
  void *v6; // r1
  Ogre::Material *v7; // r6
  int v8; // r2
  void *v9; // r1
  int v10; // r2
  int v11; // r6
  void *v12; // r1
  void *v13; // r1
  int v14; // r2
  void *v15; // r1
  void *v16; // r1
  Ogre::Material *v17; // r6
  void *v18; // r1
  _DWORD *v19; // r7
  Ogre::Material *v20; // r5
  void *v21; // r1
  int v22; // r6
  int i; // r5
  float v24; // r0
  int v25; // r3
  Ogre::Material *v26; // r6
  void *v27; // r1
  Ogre::Material *v28; // [sp+4h] [bp-20h]
  Ogre::Material *v29; // [sp+4h] [bp-20h]
  Ogre::Material *v30; // [sp+4h] [bp-20h]
  Ogre::Material *v31; // [sp+4h] [bp-20h]
  Ogre::FixedString *v32; // [sp+Ch] [bp-18h] BYREF
  Ogre::FixedString *v33[5]; // [sp+10h] [bp-14h] BYREF

  Ogre::FixedString::FixedString((Ogre::FixedString *)v33, (Ogre::FixedString *)"terrain_all", a3);
  v4 = (char *)this + 252;
  v5 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v5, (const Ogre::FixedString *)v33);
  *((_DWORD *)this + 75) = v5;
  Ogre::FixedString::~FixedString(v33, v6);
  v7 = *((Ogre::Material **)this + 75);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v33, (Ogre::FixedString *)"TERRAIN_LAYERS", v8);
  Ogre::Material::setParamMacro(v7, (const Ogre::FixedString *)v33, *(unsigned __int8 *)(*((_DWORD *)this + 63) + 20));
  Ogre::FixedString::~FixedString(v33, v9);
  v11 = *(unsigned __int8 *)(*((_DWORD *)this + 63) + 20);
  if ( *(_BYTE *)(*((_DWORD *)this + 63) + 20) != 0 )
  {
    v28 = *((Ogre::Material **)this + 75);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v33, (Ogre::FixedString *)"g_BlendColorTex0", v10);
    Ogre::Material::setParamTexture(v28, (const Ogre::FixedString *)v33, *(Ogre::Texture **)(*(_DWORD *)v4 + 136), 0);
    Ogre::FixedString::~FixedString(v33, v12);
    if ( v11 != 1 )
    {
      v29 = *((Ogre::Material **)this + 75);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v33, (Ogre::FixedString *)"g_BlendColorTex1", v10);
      Ogre::Material::setParamTexture(v29, (const Ogre::FixedString *)v33, *(Ogre::Texture **)(*(_DWORD *)v4 + 140), 0);
      Ogre::FixedString::~FixedString(v33, v13);
      v30 = *((Ogre::Material **)this + 75);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v33, (Ogre::FixedString *)"g_BlendAlphaTex", v14);
      Ogre::Material::setParamTexture(v30, (const Ogre::FixedString *)v33, *(Ogre::Texture **)(*(_DWORD *)v4 + 152), 0);
      Ogre::FixedString::~FixedString(v33, v15);
      if ( v11 != 2 )
      {
        v31 = *((Ogre::Material **)this + 75);
        Ogre::FixedString::FixedString((Ogre::FixedString *)v33, (Ogre::FixedString *)"g_BlendColorTex2", v10);
        Ogre::Material::setParamTexture(
          v31,
          (const Ogre::FixedString *)v33,
          *(Ogre::Texture **)(*(_DWORD *)v4 + 144),
          0);
        Ogre::FixedString::~FixedString(v33, v16);
        if ( v11 != 3 )
        {
          v17 = *((Ogre::Material **)this + 75);
          Ogre::FixedString::FixedString((Ogre::FixedString *)v33, (Ogre::FixedString *)"g_BlendColorTex3", v10);
          Ogre::Material::setParamTexture(
            v17,
            (const Ogre::FixedString *)v33,
            *(Ogre::Texture **)(*(_DWORD *)v4 + 148),
            0);
          Ogre::FixedString::~FixedString(v33, v18);
        }
      }
    }
  }
  v19 = (_DWORD *)((char *)this + 252);
  if ( *(_BYTE *)(*v19 + 57) != 0 )
  {
    v20 = (Ogre::Material *)v19[12];
    Ogre::FixedString::FixedString((Ogre::FixedString *)v33, (Ogre::FixedString *)"g_LightMap", v10);
    Ogre::Material::setParamTexture(v20, (const Ogre::FixedString *)v33, *(Ogre::Texture **)(*v19 + 156), 0);
    Ogre::FixedString::~FixedString(v33, v21);
  }
  v22 = *v19;
  for ( i = 0; i != 4; ++i )
  {
    v24 = (float)*(unsigned __int8 *)(v22 + i + 25);
    v25 = i;
    *(float *)&v33[v25] = v24;
  }
  v26 = (Ogre::Material *)v19[12];
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v32, (Ogre::FixedString *)"g_UVRepeat", v10);
  Ogre::Material::setParamValue(v26, (const Ogre::FixedString *)&v32, v33);
  Ogre::FixedString::~FixedString(&v32, v27);
}


//======================================================================
// Ogre::TerrainBlock::getHeight(float,float,float *)
// address: 0x00180224   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::TerrainBlock::getHeight(Ogre::TerrainBlockSource **this, float a2, float a3, float *a4)
{
  return Ogre::TerrainBlockSource::getHeight(*(this + 63), a2, a3, a4, nullptr, nullptr, nullptr);
}


//======================================================================
// Ogre::TerrainBlock::createLiquid(void)
// address: 0x0018023C   size: 0x124 (292 bytes)
//======================================================================
int __fastcall Ogre::TerrainBlock::createLiquid(Ogre::TerrainBlock *this)
{
  Ogre::TLiquid **v1; // r4
  int v2; // r6
  Ogre::TLiquid *v3; // r5
  Ogre::TLiquid *v4; // r7
  Ogre::TLiquid *v5; // r1
  size_t v6; // r2
  Ogre::TLiquid *v7; // r0
  _DWORD *v8; // r6
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r7
  int v12; // r2
  _DWORD *v13; // r5
  _DWORD *v14; // r3
  int v15; // r1
  int v16; // r7
  void *v18; // [sp+20h] [bp-Ch] BYREF
  void *v19[2]; // [sp+24h] [bp-8h] BYREF

  v1 = (Ogre::TLiquid **)((char *)this + 252);
  v2 = *((_DWORD *)this + 66);
  if ( v2 == 0 )
  {
    v3 = *v1;
    v4 = (Ogre::TLiquid *)operator new(0x17Cu);
    Ogre::TLiquid::TLiquid(v4);
    v5 = *v1;
    v1[3] = v4;
    sub_3BF0BC((int)&v18, (char *)v5 + 168);
    sub_3BF0BC((int)v19, "scene\\environment\\water\\magma\\magma");
    v6 = *((_DWORD *)v18 - 3);
    if ( v6 == *((_DWORD *)v19[0] - 3) )
      v2 = j_memcmp(v18, v19[0], v6) == 0;
    sub_3BDF80(v19);
    sub_3BDF80(&v18);
    v7 = v1[3];
    if ( v2 != 0 )
    {
      Ogre::TLiquid::createGeneralLiquid(v7, "scene\\environment\\water\\magma\\magma", 51);
    }
    else
    {
      Ogre::TLiquid::createGeneralLiquid(v7, "scene\\environment\\water\\slime\\slime", 30);
      Ogre::TLiquid::createReflectLiquid(
        v1[3],
        "scene\\environment\\water\\LakeWaterNormal.png",
        "scene\\environment\\water\\bump.dds");
    }
    v8 = (_DWORD *)((char *)v3 + 416);
    Ogre::TLiquid::createVBIB(
      v1[3],
      *((_DWORD *)v3 + 8),
      *((_DWORD *)v3 + 9),
      *((float *)v3 + 16),
      *((float *)v3 + 18),
      *((float *)v3 + 19),
      *((float *)v3 + 21),
      *((float *)v3 + 106));
    Ogre::TLiquid::setDepthTexture(v1[3], *((Ogre::Texture **)*v1 + 40));
    v9 = (_DWORD *)((char *)v1[3] + 280);
    v10 = *((_DWORD *)v3 + 108);
    v11 = *((_DWORD *)v3 + 109);
    *v9 = *((_DWORD *)v3 + 107);
    v9[1] = v10;
    v9[2] = v11;
    v12 = *((_DWORD *)v3 + 110);
    v13 = (_DWORD *)((char *)v3 + 444);
    v9[3] = v12;
    *((_DWORD *)v1[3] + 78) = v8[11];
    v14 = (_DWORD *)((char *)v1[3] + 296);
    v15 = v13[1];
    v16 = v13[2];
    *v14 = *v13;
    v14[1] = v15;
    v14[2] = v16;
    v14[3] = v13[3];
    *((_DWORD *)v1[3] + 79) = v8[12];
    *((_DWORD *)v1[3] + 80) = v8[13];
    *((_DWORD *)v1[3] + 67) = v8[14];
    *((_DWORD *)v1[3] + 81) = v8[15];
    *((_DWORD *)v1[3] + 82) = v8[16];
    *((_DWORD *)v1[3] + 93) = v8[2];
  }
  return 1;
}


//======================================================================
// Ogre::TerrainBlock::setOnlyRenderTerrainOrWater(bool)
// address: 0x00180374   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::TerrainBlock::setOnlyRenderTerrainOrWater(int this, bool a2)
{
  *(_BYTE *)(this + 336) = a2;
  return this;
}


//======================================================================
// Ogre::TerrainBlock::isOnlyRenderWater(void)
// address: 0x0018037C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::TerrainBlock::isOnlyRenderWater(Ogre::TerrainBlock *this)
{
  return *((unsigned __int8 *)this + 336);
}


//======================================================================
// Ogre::TerrainBlock::createIBWithoutHole(int)
// address: 0x001803EA   size: 0x74 (116 bytes)
//======================================================================
Ogre::IndexData *__fastcall Ogre::TerrainBlock::createIBWithoutHole(Ogre::TerrainBlock *this, int a2)
{
  void *v3; // r0
  int v4; // r3
  void *v5; // r4
  _WORD *v6; // r5
  int v7; // r2
  Ogre::IndexData *v8; // r4
  void *v9; // r0

  v3 = (void *)operator new[](0x13Cu);
  v4 = 0;
  v5 = v3;
  do
  {
    *((_WORD *)v3 + v4) = v4;
    ++v4;
  }
  while ( v4 != 158 );
  v6 = (_WORD *)operator new[](0x13Cu);
  Ogre::_stripify<short>((int)v5, v6, v7);
  if ( v5 != nullptr )
    operator delete[](v5);
  v8 = (Ogre::IndexData *)operator new(0x28u);
  Ogre::IndexData::IndexData(v8, 158);
  *((_DWORD *)v8 + 5) = *(_DWORD *)(*((_DWORD *)this + 63) + 40);
  *((_DWORD *)v8 + 4) = 0;
  v9 = (void *)Ogre::IndexData::lock(v8);
  j_memcpy(v9, v6, 0x13Cu);
  Ogre::IndexData::unlock((int)v8);
  if ( v6 != nullptr )
    operator delete[](v6);
  return v8;
}


//======================================================================
// Ogre::TerrainBlock::createIBWithHole(int)
// address: 0x0018052E   size: 0x21E (542 bytes)
//======================================================================
Ogre::IndexData *__fastcall Ogre::TerrainBlock::createIBWithHole(Ogre::TerrainBlock *this, float a2)
{
  __int16 v2; // r7
  int v3; // r4
  int v4; // r6
  __int64 v5; // r0
  __int64 v6; // r0
  __int64 v7; // r0
  __int64 v8; // r0
  __int64 v9; // r0
  __int64 v10; // r0
  __int64 v11; // r0
  __int16 v12; // r6
  __int16 v13; // r7
  __int64 v14; // r0
  __int16 v15; // r5
  __int16 v16; // r7
  __int64 v17; // r0
  int v18; // r6
  Ogre::IndexData *v19; // r4
  int v20; // r1
  void *v21; // r2
  void *v22; // r0
  void *v23; // r0
  int v25; // [sp+4h] [bp-48h]
  int v26; // [sp+8h] [bp-44h]
  int v27; // [sp+Ch] [bp-40h]
  int v28; // [sp+10h] [bp-3Ch]
  int v29; // [sp+14h] [bp-38h]
  __int16 v30; // [sp+20h] [bp-2Ch]
  __int16 v31; // [sp+28h] [bp-24h]
  int v32; // [sp+2Ch] [bp-20h]
  __int16 v34; // [sp+3Ah] [bp-12h] BYREF
  void *v35; // [sp+3Ch] [bp-10h] BYREF
  int v36; // [sp+40h] [bp-Ch]
  int v37; // [sp+44h] [bp-8h]

  v25 = (int)Ogre::Sqrt(COERCE_OGRE_((float)SLODWORD(a2)), a2);
  v29 = v25 - 1;
  v35 = nullptr;
  v36 = 0;
  v37 = 0;
  v30 = v25;
  v27 = 0;
  v31 = 0;
  v26 = 0;
  v32 = 0;
  v28 = 0;
  v2 = 0;
  while ( v26 < v29 )
  {
    v3 = 1;
    v4 = 0;
    while ( v3 - 1 < v29 )
    {
      if ( *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 63) + 512) + v27 + v3 - 1) != 0 )
      {
        if ( v4 != 0 )
        {
          if ( v26 == v25 - 2 && v3 - 1 == v26 )
            break;
          LODWORD(v11) = &v35;
          HIDWORD(v11) = &v34;
          v34 = v30 - 1 + v3;
          std::vector<unsigned short>::push_back(v11);
          v12 = v3;
          v13 = v26;
          if ( v3 > v29 )
          {
            v13 = v26 + 1;
            v12 = 0;
          }
          LODWORD(v14) = &v35;
          HIDWORD(v14) = &v34;
          v34 = v13 * v25 + v12;
          std::vector<unsigned short>::push_back(v14);
          v2 = v12 + v13 * v25;
          v4 = 0;
        }
        else if ( v28 == 0 )
        {
          v2 = v3 + v31;
          if ( v32 != 0 )
          {
            v15 = v3;
            v16 = v26;
            v36 -= 2;
            if ( v3 > v29 )
            {
              v16 = v26 + 1;
              v15 = 0;
            }
            LODWORD(v17) = &v35;
            HIDWORD(v17) = &v34;
            v34 = v16 * v25 + v15;
            std::vector<unsigned short>::push_back(v17);
            v2 = v15 + v16 * v25;
          }
        }
      }
      else
      {
        if ( v4 == 0 )
        {
          if ( v28 != 0 )
          {
            v34 = v2;
            LODWORD(v5) = &v35;
            HIDWORD(v5) = &v34;
            std::vector<unsigned short>::push_back(v5);
            LODWORD(v6) = &v35;
            HIDWORD(v6) = &v34;
            v34 = v31 - 1 + v3;
            std::vector<unsigned short>::push_back(v6);
          }
          v34 = v3 + v31 - 1;
          LODWORD(v7) = &v35;
          HIDWORD(v7) = &v34;
          std::vector<unsigned short>::push_back(v7);
          LODWORD(v8) = &v35;
          HIDWORD(v8) = &v34;
          v34 = v3 + v30 - 1;
          std::vector<unsigned short>::push_back(v8);
          v28 = 0;
        }
        v34 = v3 + v31;
        LODWORD(v9) = &v35;
        HIDWORD(v9) = &v34;
        std::vector<unsigned short>::push_back(v9);
        LODWORD(v10) = &v35;
        HIDWORD(v10) = &v34;
        v34 = v3 + v30;
        std::vector<unsigned short>::push_back(v10);
        v4 = 1;
        v32 = 1;
        v2 = v3 + v30;
      }
      ++v3;
    }
    ++v26;
    v30 += v25;
    v31 += v25;
    v27 += v29;
    v28 = 1;
  }
  v18 = v36 - (_DWORD)v35;
  v19 = (Ogre::IndexData *)operator new(0x28u);
  Ogre::IndexData::IndexData(v19, v18 >> 1);
  *((_DWORD *)v19 + 4) = 0;
  v20 = v36;
  v21 = v35;
  *((_DWORD *)v19 + 5) = v25 * v25;
  if ( (v20 - (int)v21) >> 1 != 0 )
  {
    v22 = (void *)Ogre::IndexData::lock(v19);
    j_memcpy(v22, v35, 2 * ((v36 - (int)v35) >> 1));
    Ogre::IndexData::unlock((int)v19);
  }
  v23 = v35;
  *((_DWORD *)this + 78) = (v36 - (int)v35) >> 1;
  if ( v23 != nullptr )
    operator delete(v23);
  return v19;
}


//======================================================================
// Ogre::TerrainBlock::createIBWithHole1(int,int)
// address: 0x0018074C   size: 0x320 (800 bytes)
//======================================================================
Ogre::IndexData *__fastcall Ogre::TerrainBlock::createIBWithHole1(Ogre::TerrainBlock *this, float a2, int a3)
{
  int v3; // r0
  __int16 v4; // r5
  int v5; // r7
  int v6; // r4
  int v7; // r3
  int v8; // r6
  Ogre::IndexData *v9; // r4
  int v10; // r1
  void *v11; // r2
  void *v12; // r0
  void *v13; // r0
  __int64 v14; // r0
  __int64 v15; // r0
  __int64 v16; // r0
  __int64 v17; // r0
  __int64 v18; // r0
  __int64 v19; // r0
  __int64 v20; // r0
  __int64 v21; // r0
  __int64 v22; // r0
  __int64 v23; // r0
  __int64 v24; // r0
  __int64 v25; // r0
  __int64 v26; // r0
  __int64 v27; // r0
  __int16 v28; // r6
  __int16 v29; // r5
  __int64 v30; // r0
  __int16 v31; // r5
  __int16 v32; // r6
  __int64 v33; // r0
  int v35; // [sp+4h] [bp-70h]
  int v36; // [sp+8h] [bp-6Ch]
  int v37; // [sp+Ch] [bp-68h]
  __int16 v38; // [sp+10h] [bp-64h]
  __int16 v39; // [sp+18h] [bp-5Ch]
  __int16 v40; // [sp+1Ch] [bp-58h]
  int v41; // [sp+20h] [bp-54h]
  int v42; // [sp+24h] [bp-50h]
  int v44; // [sp+30h] [bp-44h]
  int v45; // [sp+34h] [bp-40h]
  int v46; // [sp+38h] [bp-3Ch]
  int v47; // [sp+3Ch] [bp-38h]
  int v48; // [sp+4Ch] [bp-28h]
  __int16 v50; // [sp+58h] [bp-1Ch]
  __int16 v51; // [sp+5Ch] [bp-18h]
  __int16 v52; // [sp+62h] [bp-12h] BYREF
  void *v53; // [sp+64h] [bp-10h] BYREF
  int v54; // [sp+68h] [bp-Ch]
  int v55; // [sp+6Ch] [bp-8h]

  v3 = (int)Ogre::Sqrt(COERCE_OGRE_((float)SLODWORD(a2)), a2);
  v39 = v3;
  v44 = v3 - 1;
  v50 = 2 * v3;
  v48 = 2 * (v3 - 1);
  v53 = nullptr;
  v54 = 0;
  v55 = 0;
  v51 = v48 + 2;
  v38 = 0;
  v37 = v3;
  v46 = v3 - 1;
  v42 = 2;
  v41 = 0;
  v36 = 0;
  v4 = 0;
LABEL_2:
  if ( v42 - 2 < v37 - 2 )
  {
    v5 = 0;
    v6 = 0;
    v40 = v42 * v39;
    v47 = v46;
    v45 = v46 - v37 + 1;
    v35 = 2;
    while ( 1 )
    {
      v7 = *(_DWORD *)(*((_DWORD *)this + 63) + 512);
      if ( *(_BYTE *)(v7 + v45) != 0
        && *(_BYTE *)(v7 + v45 + 1) != 0
        && *(_BYTE *)(v7 + v47) != 0
        && *(_BYTE *)(v7 + v47 + 1) != 0 )
      {
        if ( v6 != 0 )
        {
          LODWORD(v27) = &v53;
          HIDWORD(v27) = &v52;
          v52 = v40 + v5;
          std::vector<unsigned short>::push_back(v27);
          v28 = v35;
          v29 = v42 - 2;
          if ( v35 > v44 )
          {
            v29 = v42;
            v28 = 0;
          }
          LODWORD(v30) = &v53;
          HIDWORD(v30) = &v52;
          v52 = v29 * v39 + v28;
          std::vector<unsigned short>::push_back(v30);
          v6 = 0;
          v4 = v28 + v29 * v37;
        }
        else if ( v41 == 0 )
        {
          v4 = v35 + v38;
          if ( v36 != 0 )
          {
            v31 = v35;
            v54 -= 2;
            v32 = v42 - 2;
            if ( v35 > v44 )
            {
              v32 = v42;
              v31 = 0;
            }
            LODWORD(v33) = &v53;
            HIDWORD(v33) = &v52;
            v52 = v32 * v39 + v31;
            std::vector<unsigned short>::push_back(v33);
            v4 = v31 + v32 * v37;
          }
        }
        goto LABEL_35;
      }
      if ( v6 == 0 )
      {
        if ( v41 != 0 )
        {
          v52 = v4;
          LODWORD(v14) = &v53;
          HIDWORD(v14) = &v52;
          std::vector<unsigned short>::push_back(v14);
          LODWORD(v15) = &v53;
          HIDWORD(v15) = &v52;
          v52 = v38 + v5;
          std::vector<unsigned short>::push_back(v15);
        }
        LODWORD(v16) = &v53;
        HIDWORD(v16) = &v52;
        v52 = v5 + v38;
        std::vector<unsigned short>::push_back(v16);
        if ( v5 == 0 && a3 == 4 )
        {
          LODWORD(v17) = &v53;
          v52 = v38 + v39;
          HIDWORD(v17) = &v52;
          std::vector<unsigned short>::push_back(v17);
          LODWORD(v18) = &v53;
          HIDWORD(v18) = &v52;
          v52 = v38 + v35;
          std::vector<unsigned short>::push_back(v18);
        }
        HIDWORD(v19) = &v52;
        LODWORD(v19) = &v53;
        v52 = v5 + v40;
        std::vector<unsigned short>::push_back(v19);
        v41 = 0;
      }
      if ( v42 == 2 && a3 == 2 )
      {
        LODWORD(v20) = &v53;
        HIDWORD(v20) = &v52;
        v52 = v5 + 1;
        std::vector<unsigned short>::push_back(v20);
        LODWORD(v21) = &v53;
        HIDWORD(v21) = &v52;
        v52 = v5 + v50;
        std::vector<unsigned short>::push_back(v21);
      }
      LODWORD(v22) = &v53;
      HIDWORD(v22) = &v52;
      v52 = v35 + v38;
      std::vector<unsigned short>::push_back(v22);
      if ( v5 == v37 - 3 && a3 == 5 )
      {
        HIDWORD(v23) = &v52;
        LODWORD(v23) = &v53;
        v52 = v40 + v5;
        std::vector<unsigned short>::push_back(v23);
        v52 = v35 + v38 + v39;
      }
      else
      {
        if ( v42 - 2 != v37 - 3 || a3 != 3 )
          goto LABEL_30;
        LODWORD(v24) = &v53;
        HIDWORD(v24) = &v52;
        v52 = v42 * v39 + 1 + v5;
        std::vector<unsigned short>::push_back(v24);
        v52 = v35 + v38;
      }
      LODWORD(v25) = &v53;
      HIDWORD(v25) = &v52;
      std::vector<unsigned short>::push_back(v25);
LABEL_30:
      HIDWORD(v26) = &v52;
      LODWORD(v26) = &v53;
      v52 = v35 + v40;
      std::vector<unsigned short>::push_back(v26);
      v6 = 1;
      v36 = 1;
      v4 = v35 + v38 + v51;
LABEL_35:
      v35 += 2;
      v5 += 2;
      v47 += 2;
      v45 += 2;
      if ( v5 >= v37 - 2 )
      {
        v46 += v48;
        v42 += 2;
        v41 = 1;
        v38 += v51;
        goto LABEL_2;
      }
    }
  }
  v8 = v54 - (_DWORD)v53;
  v9 = (Ogre::IndexData *)operator new(0x28u);
  Ogre::IndexData::IndexData(v9, v8 >> 1);
  *((_DWORD *)v9 + 4) = 0;
  v10 = v54;
  v11 = v53;
  *((_DWORD *)v9 + 5) = v37 * v37;
  if ( (v10 - (int)v11) >> 1 != 0 )
  {
    v12 = (void *)Ogre::IndexData::lock(v9);
    j_memcpy(v12, v53, 2 * ((v54 - (int)v53) >> 1));
    Ogre::IndexData::unlock((int)v9);
  }
  v13 = v53;
  *((_DWORD *)this + a3 + 78) = (v54 - (int)v53) >> 1;
  if ( v13 != nullptr )
    operator delete(v13);
  return v9;
}


//======================================================================
// Ogre::TerrainBlock::createVBIB(void)
// address: 0x00180A6C   size: 0x1BA (442 bytes)
//======================================================================
void __fastcall Ogre::TerrainBlock::createVBIB(Ogre::TerrainBlock *this, float a2)
{
  int *v2; // r7
  float v3; // r6
  _DWORD *v4; // r5
  _DWORD *v5; // r3
  int v6; // r4
  _DWORD *v7; // r2
  char *v8; // r3
  char *v9; // r1
  char *v10; // r2
  float v11; // [sp+8h] [bp-34h]
  Ogre::VertexData *v12; // [sp+Ch] [bp-30h]
  Ogre::VertexData *v13; // [sp+Ch] [bp-30h]
  int v15; // [sp+14h] [bp-28h]
  int v16; // [sp+14h] [bp-28h]
  char *v17; // [sp+18h] [bp-24h]
  _DWORD *v18; // [sp+20h] [bp-1Ch]
  _DWORD *v19; // [sp+24h] [bp-18h]
  void *v20[4]; // [sp+2Ch] [bp-10h] BYREF

  v2 = (int *)((char *)this + 252);
  v15 = (int)Ogre::Sqrt(COERCE_OGRE_((float)*(int *)(*((_DWORD *)this + 63) + 40)), a2);
  Ogre::VertexFormat::VertexFormat(v20);
  Ogre::VertexFormat::addElement((int *)v20, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v20, 2u, 4u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v20, 1u, 7u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v20, 4u, 5u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v20, 0, 2u, 0, 0, -1);
  v12 = (Ogre::VertexData *)operator new(0x50u);
  LODWORD(v3) = v15 * v15;
  Ogre::VertexData::VertexData(v12, (const Ogre::VertexFormat *)v20, v15 * v15);
  v2[4] = (int)v12;
  v4 = (_DWORD *)Ogre::VertexData::lock(v12);
  v17 = (char *)v4;
  v16 = 0;
  v18 = v4 + 3;
  v19 = v4 + 6;
  while ( v16 < SLODWORD(v3) )
  {
    v13 = (Ogre::VertexData *)(36 * v16);
    v5 = (_DWORD *)(*(_DWORD *)(*v2 + 124) + 36 * v16);
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v6 = *v2;
    v11 = *(float *)(*(_DWORD *)(*v2 + 124) + 36 * v16 + 4);
    if ( v11 > *((float *)this + 32) )
      *((float *)this + 32) = v11;
    if ( v11 < *((float *)this + 29) )
      *((float *)this + 29) = v11;
    v7 = (_DWORD *)((char *)v13 + *(_DWORD *)(v6 + 124));
    v8 = (char *)((char *)v4 - v17);
    *(_DWORD *)((char *)v18 + (_DWORD)v8) = v7[3];
    v9 = (char *)v18 + (char *)v4 - v17;
    *((_DWORD *)v9 + 1) = v7[4];
    *((_DWORD *)v9 + 2) = v7[5];
    v10 = (char *)v13 + *(_DWORD *)(*v2 + 124);
    *(_DWORD *)((char *)v19 + (_DWORD)v8) = *((_DWORD *)v10 + 6);
    *(_DWORD *)((char *)v19 + (_DWORD)v8 + 4) = *((_DWORD *)v10 + 7);
    v4[8] = *(_DWORD *)((char *)v13 + *(_DWORD *)(*v2 + 124) + 32);
    v4[9] = 1065353216;
    v4 += 10;
    ++v16;
  }
  Ogre::VertexData::unlock(v2[4]);
  v2[11] = (*(int (__fastcall **)(int, void **))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 36))(
             Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
             v20);
  v2[5] = (int)Ogre::TerrainBlock::createIBWithHole(this, v3);
  v2[6] = (int)Ogre::TerrainBlock::createIBWithHole1(this, v3, 1);
  v2[7] = (int)Ogre::TerrainBlock::createIBWithHole1(this, v3, 2);
  v2[8] = (int)Ogre::TerrainBlock::createIBWithHole1(this, v3, 3);
  v2[9] = (int)Ogre::TerrainBlock::createIBWithHole1(this, v3, 4);
  v2[10] = (int)Ogre::TerrainBlock::createIBWithHole1(this, v3, 5);
  Ogre::VertexFormat::~VertexFormat(v20);
}


//======================================================================
// Ogre::TerrainBlock::createRenderData(Ogre::TerrainTileSource *)
// address: 0x00180C2C   size: 0x114 (276 bytes)
//======================================================================
int __fastcall Ogre::TerrainBlock::createRenderData(Ogre::TerrainBlock *this, Ogre::TerrainTileSource *a2)
{
  Ogre::TerrainBlockSource **v2; // r6
  Ogre::TerrainBlockSource *v5; // r3
  int v6; // r2
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r6
  float v11; // r7
  float v12; // r6
  float v13; // r0
  float v14; // r1
  _DWORD v16[4]; // [sp+14h] [bp-10h] BYREF

  v2 = (Ogre::TerrainBlockSource **)((char *)this + 252);
  Ogre::TerrainBlockSource::initVertexData(*((Ogre::TerrainBlockSource **)this + 63), *((float *)this + 76));
  Ogre::TerrainBlockSource::createTextures(*v2, a2);
  v5 = *v2;
  *((_DWORD *)this + 28) = *((_DWORD *)*v2 + 121);
  *((_DWORD *)this + 29) = *((_DWORD *)v5 + 122);
  *((_DWORD *)this + 30) = *((_DWORD *)v5 + 123);
  *((_DWORD *)this + 29) = 1203982323;
  v6 = *((_DWORD *)v5 + 124);
  v5 = (Ogre::TerrainBlockSource *)((char *)v5 + 496);
  *((_DWORD *)this + 31) = v6;
  *((_DWORD *)this + 32) = *((_DWORD *)v5 + 1);
  *((_DWORD *)this + 33) = *((_DWORD *)v5 + 2);
  *((_DWORD *)this + 32) = -943501325;
  Ogre::TerrainBlock::createVBIB(this, COERCE_FLOAT((Ogre::TerrainBlock *)((char *)this + 8)));
  Ogre::TerrainBlock::createMaterials(this, v7, v8);
  if ( *((_BYTE *)*v2 + 56) != 0 )
    Ogre::TerrainBlock::createLiquid(this);
  Ogre::BoxBound::getCenter((Ogre::BoxBound *)v16, (float *)this + 28);
  v9 = v16[1];
  v10 = v16[2];
  *((_DWORD *)this + 35) = v16[0];
  *((_DWORD *)this + 37) = v10;
  *((_DWORD *)this + 36) = v9;
  v11 = (float)(*((float *)this + 31) - *((float *)this + 28)) * 0.5;
  v12 = (float)(*((float *)this + 32) - *((float *)this + 29)) * 0.5;
  v13 = (float)(*((float *)this + 33) - *((float *)this + 30)) * 0.5;
  *((float *)this + 38) = v11;
  *((float *)this + 39) = v12;
  *((float *)this + 40) = v13;
  *((float *)this + 41) = Ogre::Sqrt(
                            COERCE_OGRE_((float)((float)(v11 * v11) + (float)(v12 * v12)) + (float)(v13 * v13)),
                            v14);
  *((_BYTE *)this + 232) = 1;
  return 1;
}

