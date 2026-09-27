// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PlantSetNode

//======================================================================
// Ogre::PlantSetNode::getRTTI(void)const
// address: 0x001791B0   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::PlantSetNode::getRTTI(Ogre::PlantSetNode *this)
{
  return &Ogre::PlantSetNode::m_RTTI;
}


//======================================================================
// Ogre::PlantSetNode::update(unsigned int)
// address: 0x0017921C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::PlantSetNode::update(int this, unsigned int a2)
{
  int v2; // r5
  unsigned int i; // r4
  int v5; // r3
  int v6; // r0

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v2 + 256);
    if ( i >= (*(_DWORD *)(v2 + 260) - v5) >> 2 )
      break;
    v6 = *(_DWORD *)(4 * i + v5);
    this = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v6 + 40))(v6, a2);
  }
  return this;
}


//======================================================================
// Ogre::PlantSetNode::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x0017924A   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::PlantSetNode::render(int this, Ogre::SceneRenderer *a2, const Ogre::ShaderEnvData *a3)
{
  int v3; // r5
  unsigned int i; // r4
  int v7; // r3
  int v8; // r0

  v3 = this;
  for ( i = 0; ; ++i )
  {
    v7 = *(_DWORD *)(v3 + 256);
    if ( i >= (*(_DWORD *)(v3 + 260) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(4 * i + v7);
    this = (*(int (__fastcall **)(int, Ogre::SceneRenderer *, const Ogre::ShaderEnvData *))(*(_DWORD *)v8 + 72))(
             v8,
             a2,
             a3);
  }
  return this;
}


//======================================================================
// Ogre::PlantSetNode::~PlantSetNode()
// address: 0x0017927C   size: 0x5E (94 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12PlantSetNodeD1Ev'
void __fastcall Ogre::PlantSetNode::~PlantSetNode(Ogre::PlantSetNode *this)
{
  _DWORD *v1; // r6
  _DWORD *v3; // r0
  unsigned int i; // r5
  _DWORD *v5; // r0
  _DWORD *v6; // r0

  v1 = (_DWORD *)((char *)this + 252);
  *(_DWORD *)this = &off_4577E8;
  v3 = *((_DWORD **)this + 63);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *v1 = 0;
  }
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD **)this + 64);
    if ( i >= (*((_DWORD *)this + 65) - (int)v5) >> 2 )
      break;
    v6 = (_DWORD *)v5[i];
    if ( v6 != nullptr )
    {
      Ogre::BaseObject::release(v6);
      *(_DWORD *)(v1[1] + 4 * i) = 0;
    }
  }
  if ( v5 != nullptr )
    operator delete(v5);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::PlantSetNode::~PlantSetNode()
// address: 0x001792E0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::PlantSetNode::~PlantSetNode(Ogre::PlantSetNode *this)
{
  Ogre::PlantSetNode::~PlantSetNode(this);
  operator delete(this);
}


//======================================================================
// Ogre::PlantSetNode::updateGrassDisturb(Ogre::Vector3,unsigned int)
// address: 0x00179EFC   size: 0x40 (64 bytes)
//======================================================================
float __fastcall Ogre::PlantSetNode::updateGrassDisturb(float result, float *a2, unsigned int a3)
{
  float v3; // r6
  unsigned int v6; // r4
  int v7; // r3
  int v8; // r0
  float v9[4]; // [sp+4h] [bp-10h] BYREF

  v3 = result;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(LODWORD(v3) + 256);
    if ( v6 >= (*(_DWORD *)(LODWORD(v3) + 260) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(4 * v6 + v7);
    v9[0] = *a2;
    ++v6;
    v9[1] = a2[1];
    v9[2] = a2[2];
    result = Ogre::PlantNode::updateGrassDisturb(v8, v9, a3);
  }
  return result;
}


//======================================================================
// Ogre::PlantSetNode::PlantSetNode(Ogre::PlantSource *)
// address: 0x0017A4EC   size: 0x1D0 (464 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12PlantSetNodeC1EPNS_11PlantSourceE'
Ogre::PlantSetNode *__fastcall Ogre::PlantSetNode::PlantSetNode(Ogre::PlantSetNode *this, Ogre::PlantSource *a2)
{
  _DWORD *v4; // r2
  Ogre::PlantNode *v5; // r6
  char *v6; // r2
  __int64 v7; // r0
  float v8; // r5
  float v9; // r5
  float v10; // r2
  int v11; // r6
  float v12; // r0
  float v14; // [sp+8h] [bp-3Ch]
  _DWORD *v15; // [sp+Ch] [bp-38h]
  float v16; // [sp+10h] [bp-34h]
  float v17; // [sp+10h] [bp-34h]
  float *v18; // [sp+20h] [bp-24h] BYREF
  _BYTE v19[4]; // [sp+24h] [bp-20h] BYREF
  float v20; // [sp+28h] [bp-1Ch] BYREF
  float v21; // [sp+2Ch] [bp-18h]
  float v22; // [sp+30h] [bp-14h]
  float v23; // [sp+34h] [bp-10h] BYREF
  float v24; // [sp+38h] [bp-Ch]
  float v25; // [sp+3Ch] [bp-8h]

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_4577E8;
  *((_DWORD *)this + 63) = a2;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  (*(void (__fastcall **)(Ogre::PlantSource *))(*(_DWORD *)a2 + 4))(a2);
  v4 = *((_DWORD **)a2 + 7);
  v20 = 3.4028e38;
  v21 = 3.4028e38;
  v22 = 3.4028e38;
  v15 = v4;
  v23 = -3.4028e38;
  v24 = -3.4028e38;
  v25 = -3.4028e38;
  while ( v15 != (_DWORD *)((char *)a2 + 20) )
  {
    v5 = (Ogre::PlantNode *)operator new(0x1F4u);
    Ogre::PlantNode::PlantNode(v5, a2);
    v6 = (char *)v15[4];
    v18 = (float *)v5;
    sub_3BF0BC((int)v19, v6);
    Ogre::PlantNode::init((int)v5, (int)(v15 + 5));
    sub_3BDF80(v19);
    LODWORD(v7) = (char *)this + 256;
    HIDWORD(v7) = *((_DWORD *)this + 65);
    if ( HIDWORD(v7) == *((_DWORD *)this + 66) )
    {
      std::vector<Ogre::PlantNode *>::_M_insert_aux(v7, &v18);
    }
    else
    {
      if ( HIDWORD(v7) != 0 )
        *(_DWORD *)HIDWORD(v7) = v18;
      *((_DWORD *)this + 65) += 4;
    }
    v14 = v20;
    if ( v20 >= v18[119] )
      v14 = v18[119];
    v16 = v21;
    if ( v21 >= v18[120] )
      v16 = v18[120];
    v8 = v22;
    if ( v22 >= v18[121] )
      v8 = v18[121];
    v22 = v8;
    v21 = v16;
    v20 = v14;
    v17 = v23;
    if ( v23 <= v18[122] )
      v17 = v18[122];
    v9 = v24;
    if ( v24 <= v18[123] )
      v9 = v18[123];
    v10 = v25;
    if ( v25 <= v18[124] )
      v10 = v18[124];
    v24 = v9;
    v23 = v17;
    v25 = v10;
    v15 = (_DWORD *)sub_391DDC(v15);
  }
  Ogre::BoxSphereBound::fromBox(
    (Ogre::PlantSetNode *)((char *)this + 140),
    (const Ogre::Vector3 *)&v20,
    (const Ogre::Vector3 *)&v23);
  v11 = (int)(float)(*((float *)this + 37) * 10.0);
  v12 = *((float *)this + 35) * 10.0;
  *((_DWORD *)this + 3) = (int)(float)(*((float *)this + 36) * 10.0);
  *((_DWORD *)this + 2) = (int)v12;
  *((_DWORD *)this + 4) = v11;
  Ogre::MovableObject::invalidWorldCache(this);
  return this;
}


//======================================================================
// Ogre::PlantSetNode::newObject(void)
// address: 0x0017A6CC   size: 0x16 (22 bytes)
//======================================================================
Ogre::PlantSetNode *__fastcall Ogre::PlantSetNode::newObject(Ogre::PlantSetNode *this)
{
  Ogre::PlantSetNode *v1; // r4

  v1 = (Ogre::PlantSetNode *)operator new(0x10Cu);
  Ogre::PlantSetNode::PlantSetNode(v1, nullptr);
  return v1;
}

