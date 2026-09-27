// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SceneDebugger

//======================================================================
// Ogre::SceneDebugger::SceneDebugger(void)
// address: 0x001842F8   size: 0xB8 (184 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13SceneDebuggerC1Ev'
Ogre::SceneDebugger *__fastcall Ogre::SceneDebugger::SceneDebugger(Ogre::SceneDebugger *this, int a2, int a3)
{
  Ogre::FixedString *v4; // r0
  void *v5; // r1
  Ogre::Material *v7; // [sp+Ch] [bp-18h]
  Ogre::FixedString *v8[4]; // [sp+14h] [bp-10h] BYREF

  Ogre::Singleton<Ogre::SceneDebugger>::ms_Singleton = (int)this;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  v8[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                 (Ogre::FixedString *)"line",
                                 (const char *)0xFFFFFFFF,
                                 a3,
                                 (int)&Ogre::Singleton<Ogre::SceneDebugger>::ms_Singleton);
  v7 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v7, (const Ogre::FixedString *)v8);
  v4 = v8[0];
  *(_DWORD *)this = v7;
  Ogre::FixedString::release((int)v4, v5);
  Ogre::VertexFormat::VertexFormat(v8);
  Ogre::VertexFormat::addElement((int *)v8, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v8, 4u, 5u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v8, 1u, 7u, 0, 0, -1);
  *((_DWORD *)this + 1) = (*(int (__fastcall **)(int, Ogre::FixedString **))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                                           + 36))(
                            Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                            v8);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 1;
  Ogre::VertexFormat::~VertexFormat((void **)v8);
  return this;
}


//======================================================================
// Ogre::SceneDebugger::~SceneDebugger()
// address: 0x001843BC   size: 0x72 (114 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13SceneDebuggerD1Ev'
void __fastcall Ogre::SceneDebugger::~SceneDebugger(Ogre::SceneDebugger *this)
{
  _DWORD *v2; // r0
  int v3; // r3
  void **v4; // r4

  v2 = *(_DWORD **)this;
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *(_DWORD *)this = 0;
  }
  v4 = (void **)((char *)this + 88);
  while ( v4 != (void **)((char *)this + 64) )
  {
    v4 -= 3;
    if ( *v4 != nullptr )
      operator delete(*v4);
  }
  while ( v4 != (void **)((char *)this + 40) )
  {
    v4 -= 3;
    if ( *v4 != nullptr )
      operator delete(*v4);
  }
  while ( v4 != (void **)((char *)this + 16) )
  {
    v4 -= 3;
    if ( *v4 != nullptr )
      operator delete(*v4);
  }
  Ogre::Singleton<Ogre::SceneDebugger>::ms_Singleton = 0;
}


//======================================================================
// Ogre::SceneDebugger::flipBuffer(void)
// address: 0x00184434   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::SceneDebugger::flipBuffer(int this)
{
  int v1; // r2

  v1 = *(_DWORD *)(this + 12);
  *(_DWORD *)(this + 12) = *(_DWORD *)(this + 8);
  *(_DWORD *)(this + 8) = v1;
  return this;
}


//======================================================================
// Ogre::SceneDebugger::getBoxEdgeLines(std::vector<Ogre::SceneDebugger::stLine,std::allocator<Ogre::SceneDebugger::stLine>> &,Ogre::Vector3 const&,Ogre::Vector3 const&,unsigned int)
// address: 0x00184680   size: 0x144 (324 bytes)
//======================================================================
void __fastcall Ogre::SceneDebugger::getBoxEdgeLines(int a1, int a2, int *a3, int *a4, int a5)
{
  int v7; // r2
  int v9; // r1
  int v10; // r3
  int v11; // r2
  int v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r3
  int v18; // r2
  int v19; // r2
  int v20; // r3
  int v21; // r2
  int v22; // r3
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r1
  int v30; // r3
  int v31; // r2
  int v32; // r1
  int v33; // r3
  int v34; // r2
  int v35; // r1
  int v36; // r3
  int v37; // r2
  int v38; // r2
  int v39; // r3
  int v40; // r5
  int v41; // [sp+4h] [bp-20h] BYREF
  int v42; // [sp+8h] [bp-1Ch]
  int v43; // [sp+Ch] [bp-18h]
  int v44; // [sp+10h] [bp-14h]
  int v45; // [sp+14h] [bp-10h]
  int v46; // [sp+18h] [bp-Ch]
  int v47; // [sp+1Ch] [bp-8h]

  v7 = *a3;
  v47 = a5;
  v9 = *a4;
  v10 = a3[2];
  v41 = v7;
  v11 = a3[1];
  v44 = v9;
  v42 = v11;
  v43 = v10;
  v45 = v11;
  v46 = v10;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
  v12 = *a3;
  v13 = a4[1];
  v46 = a3[2];
  v44 = v12;
  v45 = v13;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
  v14 = *a3;
  v15 = a3[1];
  v46 = a4[2];
  v44 = v14;
  v45 = v15;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
  v16 = *a3;
  v17 = a4[2];
  v41 = *a4;
  v18 = a4[1];
  v44 = v16;
  v42 = v18;
  v43 = v17;
  v45 = v18;
  v46 = v17;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
  v19 = *a4;
  v20 = a3[1];
  v46 = a4[2];
  v44 = v19;
  v45 = v20;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
  v21 = *a4;
  v22 = a4[1];
  v46 = a3[2];
  v44 = v21;
  v45 = v22;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
  v23 = a4[1];
  v24 = a3[2];
  v41 = *a3;
  v25 = *a4;
  v42 = v23;
  v44 = v25;
  v43 = v24;
  v45 = v23;
  v46 = v24;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
  v26 = a3[1];
  v27 = a4[2];
  v41 = *a3;
  v28 = *a4;
  v42 = v26;
  v44 = v28;
  v43 = v27;
  v45 = v26;
  v46 = v27;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
  v29 = a3[2];
  v30 = a4[1];
  v41 = *a3;
  v44 = v41;
  v31 = a4[2];
  v43 = v29;
  v42 = v30;
  v45 = v30;
  v46 = v31;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
  v32 = a3[2];
  v33 = a3[1];
  v41 = *a4;
  v44 = v41;
  v34 = a4[2];
  v43 = v32;
  v42 = v33;
  v45 = v33;
  v46 = v34;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
  v35 = a4[1];
  v36 = a4[2];
  v41 = *a3;
  v44 = v41;
  v37 = a3[1];
  v42 = v35;
  v43 = v36;
  v45 = v37;
  v46 = v36;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
  v38 = *a4;
  v39 = a3[2];
  v40 = a3[1];
  v42 = a4[1];
  v41 = v38;
  v43 = v39;
  v45 = v40;
  v44 = v38;
  v46 = v39;
  std::vector<Ogre::SceneDebugger::stLine>::push_back(a2, &v41);
}


//======================================================================
// Ogre::SceneDebugger::renderObject(Ogre::RenderableObject *,unsigned int)
// address: 0x001847C4   size: 0x1BC (444 bytes)
//======================================================================
void __fastcall Ogre::SceneDebugger::renderObject(Ogre::SceneDebugger *this, Ogre::RenderableObject *a2, char a3)
{
  _DWORD *v5; // r3
  int v6; // r6
  float v7; // r3
  float v8; // r1
  int ParentID; // r0
  _DWORD *v10; // r0
  char *v11; // r0
  float *v12; // r3
  float v13; // r2
  float *v14; // r4
  float v15; // r7
  int j; // r4
  _DWORD *v17; // r3
  int v18; // r6
  int v19; // r7
  int v20; // r2
  int v21; // r3
  float v22; // [sp+10h] [bp-84h]
  float v23; // [sp+14h] [bp-80h]
  int i; // [sp+14h] [bp-80h]
  float v26; // [sp+18h] [bp-7Ch]
  unsigned int v27; // [sp+1Ch] [bp-78h]
  float v28; // [sp+20h] [bp-74h]
  int v29; // [sp+20h] [bp-74h]
  char *v30; // [sp+24h] [bp-70h]
  float v31[3]; // [sp+28h] [bp-6Ch] BYREF
  float v32; // [sp+34h] [bp-60h] BYREF
  float v33; // [sp+38h] [bp-5Ch]
  float v34; // [sp+3Ch] [bp-58h]
  int v35; // [sp+40h] [bp-54h]
  int v36; // [sp+44h] [bp-50h]
  int v37; // [sp+48h] [bp-4Ch]
  int v38; // [sp+4Ch] [bp-48h]
  _BYTE v39[68]; // [sp+50h] [bp-44h] BYREF

  if ( *((_BYTE *)a2 + 180) != 0 )
    (*(void (__fastcall **)(Ogre::RenderableObject *))(*(_DWORD *)a2 + 68))(a2);
  Ogre::Matrix4::Matrix4((int)v39, (Ogre::RenderableObject *)((char *)a2 + 48));
  v5 = (_DWORD *)((char *)this + 12 * *((_DWORD *)this + 3) + 16);
  v27 = -1227133513 * ((v5[1] - *v5) >> 2);
  if ( (a3 & 1) != 0 && Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::Model::m_RTTI) != 0 )
  {
    v19 = *((_DWORD *)a2 + 65);
    v29 = -1108378657 * ((*(_DWORD *)(v19 + 8) - *(_DWORD *)(v19 + 4)) >> 2);
    v38 = -1;
    for ( i = 0; i != v29; ++i )
    {
      v6 = *(_DWORD *)(v19 + 4) + 124 * i;
      v7 = *(float *)(v6 + 112);
      v8 = *(float *)(v6 + 104);
      v33 = *(float *)(v6 + 108);
      v34 = v7;
      v32 = v8;
      ParentID = Ogre::BoneInstance::getParentID((Ogre::BoneInstance *)(*(_DWORD *)(v19 + 4) + 124 * i));
      if ( ParentID >= 0 )
      {
        v10 = (_DWORD *)(*(_DWORD *)(v19 + 4) + 124 * ParentID);
        v20 = v10[27];
        v21 = v10[28];
        v35 = v10[26];
      }
      else
      {
        v20 = *(_DWORD *)(v6 + 108);
        v21 = *(_DWORD *)(v6 + 112);
        v35 = *(_DWORD *)(v6 + 104);
      }
      v36 = v20;
      v11 = (char *)this + 12 * *((_DWORD *)this + 3) + 16;
      v37 = v21;
      std::vector<Ogre::SceneDebugger::stLine>::push_back((int)v11, &v32);
    }
  }
  if ( (a3 & 2) != 0 )
  {
    if ( *((_BYTE *)a2 + 180) != 0 )
      (*(void (__fastcall **)(Ogre::RenderableObject *))(*(_DWORD *)a2 + 68))(a2);
    v30 = (char *)this + 12 * *((_DWORD *)this + 3) + 16;
    v12 = (float *)((char *)a2 + 140);
    v13 = *((float *)a2 + 35);
    v14 = (float *)((char *)a2 + 152);
    v15 = *v14;
    v23 = v12[1];
    v26 = v14[1];
    v28 = v12[2];
    v22 = v14[2];
    v31[0] = v13 - *v14;
    v31[1] = v23 - v26;
    v31[2] = v28 - v22;
    v32 = v13 + v15;
    v33 = v23 + v26;
    v34 = v28 + v22;
    Ogre::SceneDebugger::getBoxEdgeLines((int)this, (int)v30, (int *)v31, (int *)&v32, -65536);
  }
  for ( j = 28 * v27; ; j += 28 )
  {
    v17 = (_DWORD *)((char *)this + 12 * *((_DWORD *)this + 3) + 16);
    if ( v27 >= -1227133513 * ((v17[1] - *v17) >> 2) )
      break;
    v18 = *v17 + j;
    Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)v39, (Ogre::Vector3 *)v18, (const Ogre::Vector3 *)v18);
    Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)v39, (Ogre::Vector3 *)(v18 + 12), (const Ogre::Vector3 *)(v18 + 12));
    ++v27;
  }
}


//======================================================================
// Ogre::SceneDebugger::renderRay(Ogre::WorldRay &)
// address: 0x00184990   size: 0x5C (92 bytes)
//======================================================================
void __fastcall Ogre::SceneDebugger::renderRay(Ogre::SceneDebugger *this, Ogre::WorldRay *a2)
{
  float v4; // r0
  int v5; // r3
  float v6; // [sp+4h] [bp-4h]
  _DWORD v7[3]; // [sp+8h] [bp+0h] BYREF
  float v8[8]; // [sp+14h] [bp+Ch] BYREF

  Ogre::WorldPos::toVector3((Ogre::WorldPos *)v7, a2);
  v4 = *((float *)a2 + 4);
  qmemcpy(v8, v7, 12);
  v6 = *((float *)a2 + 5) * 100.0;
  v8[3] = *((float *)a2 + 3) * 100.0;
  v8[5] = v6;
  v8[6] = NAN;
  v5 = *((_DWORD *)this + 3);
  v8[4] = v4 * 100.0;
  std::vector<Ogre::SceneDebugger::stLine>::push_back((int)this + 12 * v5 + 16, v8);
}


//======================================================================
// Ogre::SceneDebugger::renderLine(Ogre::WorldPos const&,Ogre::WorldPos const&,unsigned int)
// address: 0x001849F0   size: 0x4C (76 bytes)
//======================================================================
void __fastcall Ogre::SceneDebugger::renderLine(
        Ogre::SceneDebugger *this,
        const Ogre::WorldPos *a2,
        const Ogre::WorldPos *a3,
        unsigned int a4)
{
  _DWORD v7[3]; // [sp+8h] [bp-2Ch] BYREF
  _DWORD v8[8]; // [sp+14h] [bp-20h] BYREF

  Ogre::WorldPos::toVector3((Ogre::WorldPos *)v7, a2);
  qmemcpy(v8, v7, 12);
  Ogre::WorldPos::toVector3((Ogre::WorldPos *)v7, a3);
  v8[3] = v7[0];
  v8[4] = v7[1];
  v8[5] = v7[2];
  v8[6] = a4;
  std::vector<Ogre::SceneDebugger::stLine>::push_back((int)this + 12 * *((_DWORD *)this + 3) + 16, v8);
}


//======================================================================
// Ogre::SceneDebugger::renderLineScreen(Ogre::Vector3 const&,Ogre::Vector3 const&,unsigned int)
// address: 0x00184A3C   size: 0x34 (52 bytes)
//======================================================================
void __fastcall Ogre::SceneDebugger::renderLineScreen(
        Ogre::SceneDebugger *this,
        const Ogre::Vector3 *a2,
        const Ogre::Vector3 *a3,
        unsigned int a4)
{
  int v4; // r5
  int v5; // r4
  int v6; // r5
  int v7; // r4
  int v8; // r2
  int v9; // r2
  _DWORD v10[8]; // [sp+4h] [bp-20h] BYREF

  v10[0] = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 2);
  v10[6] = a4;
  v10[1] = v4;
  v10[2] = v5;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 2);
  v10[3] = v7;
  v10[5] = v8;
  v9 = *((_DWORD *)this + 3);
  v10[4] = v6;
  std::vector<Ogre::SceneDebugger::stLine>::push_back((int)this + 12 * v9 + 40, v10);
}


//======================================================================
// Ogre::SceneDebugger::renderTriangle(Ogre::WorldPos const&,Ogre::WorldPos const&,Ogre::WorldPos const&,unsigned int)
// address: 0x00184D18   size: 0x7E (126 bytes)
//======================================================================
void __fastcall Ogre::SceneDebugger::renderTriangle(
        Ogre::SceneDebugger *this,
        const Ogre::WorldPos *a2,
        const Ogre::WorldPos *a3,
        const Ogre::WorldPos *a4,
        unsigned int a5)
{
  int v7; // r2
  char *v8; // r6
  char *v9; // r1
  _DWORD v11[3]; // [sp+Ch] [bp-38h] BYREF
  _DWORD v12[11]; // [sp+18h] [bp-2Ch] BYREF

  Ogre::WorldPos::toVector3((Ogre::WorldPos *)v11, a2);
  qmemcpy(v12, v11, 12);
  Ogre::WorldPos::toVector3((Ogre::WorldPos *)v11, a3);
  v12[3] = v11[0];
  v12[4] = v11[1];
  v12[5] = v11[2];
  Ogre::WorldPos::toVector3((Ogre::WorldPos *)v11, a4);
  v12[6] = v11[0];
  v12[7] = v11[1];
  v12[9] = a5;
  v7 = *((_DWORD *)this + 3);
  v12[8] = v11[2];
  v8 = (char *)this + 12 * v7 + 64;
  v9 = *((char **)v8 + 1);
  if ( v9 == *((char **)v8 + 2) )
  {
    std::vector<Ogre::SceneDebugger::stTriangle>::_M_insert_aux((void **)v8, v9, v12);
  }
  else
  {
    if ( v9 != nullptr )
      Ogre::SceneDebugger::stTriangle::stTriangle(*((_DWORD **)v8 + 1), v12);
    *((_DWORD *)v8 + 1) += 40;
  }
}


//======================================================================
// Ogre::SceneDebugger::drawScene(Ogre::Camera *,float,float)
// address: 0x00184F0C   size: 0x442 (1090 bytes)
//======================================================================
void __fastcall Ogre::SceneDebugger::drawScene(Ogre::SceneDebugger *this, Ogre::Camera *a2, float a3, float a4)
{
  float *ViewMatrix; // r6
  float *ProjectMatrix; // r0
  int v8; // r0
  int ShaderTechnique; // r7
  _DWORD *TmpBuffer; // r0
  char *v11; // r2
  _DWORD *v12; // r3
  char *v13; // r6
  char *v14; // r1
  int v15; // r5
  int v16; // r6
  int v17; // r3
  int v18; // r6
  _DWORD *v19; // r3
  unsigned int *v20; // r5
  _DWORD *v21; // r0
  char *v22; // r2
  int v23; // r12
  _DWORD *v24; // r3
  _DWORD *v25; // r6
  char *v26; // r1
  unsigned int *v27; // r2
  int v28; // r5
  int v29; // r6
  int v30; // r3
  _DWORD *v31; // r3
  _DWORD *v32; // r3
  unsigned int *v33; // r5
  char *v34; // r0
  char *v35; // r2
  _DWORD *v36; // r3
  char *v37; // r0
  _DWORD *v38; // r1
  int v39; // r6
  int i; // r5
  int v41; // r3
  char *v42; // r4
  int v43; // [sp+8h] [bp-13Ch]
  char *v44; // [sp+Ch] [bp-138h]
  char *v45; // [sp+Ch] [bp-138h]
  int v46; // [sp+14h] [bp-130h]
  int v47; // [sp+14h] [bp-130h]
  int v48; // [sp+14h] [bp-130h]
  unsigned int *v49; // [sp+18h] [bp-12Ch]
  Ogre::HardwareBuffer *v50; // [sp+18h] [bp-12Ch]
  Ogre::HardwareBuffer *v51; // [sp+18h] [bp-12Ch]
  _DWORD *v52; // [sp+1Ch] [bp-128h]
  _DWORD *v53; // [sp+1Ch] [bp-128h]
  int v54; // [sp+20h] [bp-124h]
  int v55; // [sp+24h] [bp-120h]
  int v56; // [sp+24h] [bp-120h]
  __int64 v59; // [sp+30h] [bp-114h] BYREF
  __int64 v60; // [sp+38h] [bp-10Ch] BYREF
  _BYTE v61[64]; // [sp+40h] [bp-104h] BYREF
  float v62[16]; // [sp+80h] [bp-C4h] BYREF
  float v63[16]; // [sp+C0h] [bp-84h] BYREF
  int v64[17]; // [sp+100h] [bp-44h] BYREF

  ViewMatrix = (float *)Ogre::Camera::getViewMatrix(a2);
  ProjectMatrix = (float *)Ogre::Camera::getProjectMatrix(a2);
  Ogre::operator*((Ogre::Matrix4 *)v61, ViewMatrix, ProjectMatrix);
  v8 = *(_DWORD *)(*(_DWORD *)this + 24);
  v59 = 0;
  v60 = 0;
  ShaderTechnique = Ogre::MaterialTemplate::getShaderTechnique(v8, &v59, &v60, 0, 1);
  v54 = Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton;
  v46 = -1227133513
      * ((*((_DWORD *)this + 3 * *((_DWORD *)this + 2) + 5) - *((_DWORD *)this + 3 * *((_DWORD *)this + 2) + 4)) >> 2);
  if ( v46 != 0 )
  {
    v49 = (unsigned int *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton
                                                               + 16))(
                            Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton,
                            1227133520
                          * ((*((_DWORD *)this + 3 * *((_DWORD *)this + 2) + 5)
                            - *((_DWORD *)this + 3 * *((_DWORD *)this + 2) + 4)) >> 2),
                            24);
    TmpBuffer = (_DWORD *)Ogre::HardwareBufferManager::getTmpBuffer(
                            (Ogre::HardwareBufferManager *)Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton,
                            v49[4]);
    if ( TmpBuffer == nullptr )
      return;
    v43 = 0;
    v11 = (char *)TmpBuffer;
    v52 = TmpBuffer + 6;
    do
    {
      v12 = (_DWORD *)(*((_DWORD *)this + 3 * *((_DWORD *)this + 2) + 4) + 28 * v43);
      *(_DWORD *)v11 = *v12;
      *((_DWORD *)v11 + 1) = v12[1];
      v13 = (char *)(v11 - (char *)TmpBuffer);
      *((_DWORD *)v11 + 2) = v12[2];
      *((_DWORD *)v11 + 3) = v12[6];
      v11 += 48;
      *(_DWORD *)((char *)v52 + (_DWORD)v13) = v12[3];
      v14 = (char *)v52 + (_DWORD)v13;
      *((_DWORD *)v14 + 1) = v12[4];
      *((_DWORD *)v14 + 2) = v12[5];
      *((_DWORD *)v14 + 3) = v12[6];
      ++v43;
    }
    while ( v43 != v46 );
    Ogre::HardwareBuffer::unlock((Ogre::HardwareBuffer *)v49);
    (*(void (__fastcall **)(int, _DWORD, unsigned int *))(*(_DWORD *)v54 + 96))(v54, *((_DWORD *)this + 1), v49);
    (*(void (__fastcall **)(int, int, _BYTE *, int, int))(*(_DWORD *)ShaderTechnique + 20))(
      ShaderTechnique,
      2,
      v61,
      7,
      1);
    v15 = 0;
    v16 = (**(int (__fastcall ***)(int))ShaderTechnique)(ShaderTechnique);
    while ( 1 )
    {
      v17 = *(_DWORD *)ShaderTechnique;
      if ( v15 == v16 )
        break;
      (*(void (__fastcall **)(int, int))(v17 + 8))(ShaderTechnique, v15++);
      (*(void (__fastcall **)(int, int, _DWORD, int))(*(_DWORD *)v54 + 100))(v54, 2, 0, v46);
      (*(void (__fastcall **)(int))(*(_DWORD *)ShaderTechnique + 12))(ShaderTechnique);
    }
    (*(void (__fastcall **)(int))(v17 + 4))(ShaderTechnique);
    v18 = 12 * *((_DWORD *)this + 2) + 16;
    j_memset(v64, 0, 0x1Cu);
    std::vector<Ogre::SceneDebugger::stLine>::resize((int)this + v18, 0, v64);
  }
  v19 = (_DWORD *)((char *)this + 12 * *((_DWORD *)this + 2) + 64);
  v47 = -858993459 * ((v19[1] - *v19) >> 3);
  if ( v47 != 0 )
  {
    v20 = (unsigned int *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton
                                                               + 16))(
                            Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton,
                            -1717986904 * ((v19[1] - *v19) >> 3),
                            24);
    v21 = (_DWORD *)Ogre::HardwareBufferManager::getTmpBuffer(
                      (Ogre::HardwareBufferManager *)Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton,
                      v20[4]);
    if ( v21 == nullptr )
      return;
    v22 = (char *)v21;
    v50 = (Ogre::HardwareBuffer *)(v21 + 6);
    v23 = 0;
    v53 = v21 + 12;
    do
    {
      v24 = (_DWORD *)(*((_DWORD *)this + 3 * *((_DWORD *)this + 2) + 16) + 40 * v23);
      *(_DWORD *)v22 = *v24;
      *((_DWORD *)v22 + 1) = v24[1];
      *((_DWORD *)v22 + 2) = v24[2];
      *((_DWORD *)v22 + 3) = v24[9];
      v44 = (char *)(v22 - (char *)v21);
      v22 += 72;
      *(_DWORD *)((char *)v50 + (_DWORD)v44) = v24[3];
      v25 = (_DWORD *)((char *)v50 + (_DWORD)v44);
      v25[1] = v24[4];
      v25[2] = v24[5];
      v25[3] = v24[9];
      *(_DWORD *)((char *)v53 + (_DWORD)v44) = v24[6];
      v26 = (char *)v53 + (_DWORD)v44;
      *((_DWORD *)v26 + 1) = v24[7];
      *((_DWORD *)v26 + 2) = v24[8];
      *((_DWORD *)v26 + 3) = v24[9];
      ++v23;
    }
    while ( v23 != v47 );
    Ogre::HardwareBuffer::unlock((Ogre::HardwareBuffer *)v20);
    v27 = v20;
    v28 = 0;
    (*(void (__fastcall **)(int, _DWORD, unsigned int *))(*(_DWORD *)v54 + 96))(v54, *((_DWORD *)this + 1), v27);
    v29 = (**(int (__fastcall ***)(int))ShaderTechnique)(ShaderTechnique);
    while ( 1 )
    {
      v30 = *(_DWORD *)ShaderTechnique;
      if ( v28 == v29 )
        break;
      (*(void (__fastcall **)(int, int))(v30 + 8))(ShaderTechnique, v28++);
      (*(void (__fastcall **)(int, int, _DWORD, int))(*(_DWORD *)v54 + 100))(v54, 4, 0, v47);
      (*(void (__fastcall **)(int))(*(_DWORD *)ShaderTechnique + 12))(ShaderTechnique);
    }
    (*(void (__fastcall **)(int))(v30 + 4))(ShaderTechnique);
    v31 = (_DWORD *)((char *)this + 12 * *((_DWORD *)this + 2) + 64);
    if ( -858993459 * ((v31[1] - *v31) >> 3) != 0 )
      v31[1] = *v31;
  }
  v32 = (_DWORD *)((char *)this + 12 * *((_DWORD *)this + 2) + 40);
  v48 = -1227133513 * ((v32[1] - *v32) >> 2);
  if ( v48 != 0 )
  {
    v33 = (unsigned int *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton
                                                               + 16))(
                            Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton,
                            1227133520 * ((v32[1] - *v32) >> 2),
                            24);
    v34 = (char *)Ogre::HardwareBufferManager::getTmpBuffer(
                    (Ogre::HardwareBufferManager *)Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton,
                    v33[4]);
    v45 = v34;
    if ( v34 != nullptr )
    {
      v35 = v34;
      v55 = 0;
      v51 = (Ogre::HardwareBuffer *)(v34 + 24);
      do
      {
        v36 = (_DWORD *)(*((_DWORD *)this + 3 * *((_DWORD *)this + 2) + 10) + 28 * v55);
        *(_DWORD *)v35 = *v36;
        *((_DWORD *)v35 + 1) = v36[1];
        *((_DWORD *)v35 + 2) = v36[2];
        v37 = (char *)(v35 - v45);
        *((_DWORD *)v35 + 3) = v36[6];
        v35 += 48;
        *(_DWORD *)((char *)v51 + (_DWORD)v37) = v36[3];
        v38 = (_DWORD *)((char *)v51 + (_DWORD)v37);
        v38[1] = v36[4];
        v38[2] = v36[5];
        v38[3] = v36[6];
        ++v55;
      }
      while ( v55 != v48 );
      Ogre::HardwareBuffer::unlock((Ogre::HardwareBuffer *)v33);
      (*(void (__fastcall **)(int, _DWORD, unsigned int *))(*(_DWORD *)v54 + 96))(v54, *((_DWORD *)this + 1), v33);
      Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v62);
      Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v63);
      v64[0] = -1082130432;
      v64[1] = -1082130432;
      v64[2] = 0;
      Ogre::Matrix4::makeTranslateMatrix((Ogre::Matrix4 *)v63, v64);
      *(float *)v64 = 2.0 / a3;
      *(float *)&v64[1] = 2.0 / a4;
      v64[2] = 1065353216;
      Ogre::Matrix4::makeScaleMatrix((Ogre::Matrix4 *)v62, v64);
      Ogre::operator*((Ogre::Matrix4 *)v64, v62, v63);
      Ogre::Matrix4::operator=(v61, v64);
      (*(void (__fastcall **)(int, int, _BYTE *, int, int))(*(_DWORD *)ShaderTechnique + 20))(
        ShaderTechnique,
        2,
        v61,
        7,
        1);
      v39 = (**(int (__fastcall ***)(int))ShaderTechnique)(ShaderTechnique);
      v56 = 2 * v55;
      for ( i = 0; ; ++i )
      {
        v41 = *(_DWORD *)ShaderTechnique;
        if ( i == v39 )
          break;
        (*(void (__fastcall **)(int, int))(v41 + 8))(ShaderTechnique, i);
        (*(void (__fastcall **)(int, int, _DWORD, int))(*(_DWORD *)v54 + 100))(v54, 2, 0, v56);
        (*(void (__fastcall **)(int))(*(_DWORD *)ShaderTechnique + 12))(ShaderTechnique);
      }
      (*(void (__fastcall **)(int))(v41 + 4))(ShaderTechnique);
      v42 = (char *)this + 12 * *((_DWORD *)this + 2) + 40;
      j_memset(v64, 0, 0x1Cu);
      std::vector<Ogre::SceneDebugger::stLine>::resize((int)v42, 0, v64);
    }
  }
}

