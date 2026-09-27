// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DummyNode

//======================================================================
// Ogre::DummyNode::getRTTI(void)const
// address: 0x00153120   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::DummyNode::getRTTI(Ogre::DummyNode *this)
{
  return &Ogre::DummyNode::m_RTTI;
}


//======================================================================
// Ogre::DummyNode::deleteThis(void)
// address: 0x0015312C   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::DummyNode::deleteThis(int this)
{
  if ( this != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)this + 20))(this);
  return this;
}


//======================================================================
// Ogre::DummyNode::~DummyNode()
// address: 0x0015313C   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9DummyNodeD1Ev'
void __fastcall Ogre::DummyNode::~DummyNode(Ogre::DummyNode *this)
{
  char *v1; // r5
  _DWORD *v3; // r0
  int v4; // r2

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_4562E8;
  v3 = *((_DWORD **)this + 81);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *((_DWORD *)v1 + 18) = 0;
  }
  Ogre::RenderLines::~RenderLines(this);
}


//======================================================================
// Ogre::DummyNode::~DummyNode()
// address: 0x00153178   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DummyNode::~DummyNode(Ogre::DummyNode *this)
{
  Ogre::DummyNode::~DummyNode(this);
  operator delete(this);
}


//======================================================================
// Ogre::DummyNode::DummyNode(Ogre::DummyNodeData *)
// address: 0x0015318C   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9DummyNodeC1EPNS_13DummyNodeDataE'
Ogre::DummyNode *__fastcall Ogre::DummyNode::DummyNode(Ogre::DummyNode *this, Ogre::DummyNodeData *a2)
{
  Ogre::RenderLines::RenderLines(this, false);
  *(_DWORD *)this = &off_4562E8;
  if ( a2 != nullptr )
    (*(void (__fastcall **)(Ogre::DummyNodeData *))(*(_DWORD *)a2 + 4))(a2);
  *((_DWORD *)this + 81) = a2;
  return this;
}


//======================================================================
// Ogre::DummyNode::newObject(void)
// address: 0x001531BC   size: 0x16 (22 bytes)
//======================================================================
Ogre::DummyNode *__fastcall Ogre::DummyNode::newObject(Ogre::DummyNode *this)
{
  Ogre::DummyNode *v1; // r4

  v1 = (Ogre::DummyNode *)operator new(0x148u);
  Ogre::DummyNode::DummyNode(v1, nullptr);
  return v1;
}


//======================================================================
// Ogre::DummyNode::DrawBox(Ogre::Matrix4,float,Ogre::ColorQuad)
// address: 0x001531D4   size: 0x146 (326 bytes)
//======================================================================
int __fastcall Ogre::DummyNode::DrawBox(int a1, float *a2, float a3, int a4)
{
  float *v5; // r5
  float v6; // r6
  float v7; // r7
  int i; // r4
  _DWORD *v9; // r1
  _DWORD *v10; // r2
  int result; // r0
  float v12; // [sp+4h] [bp-E0h]
  float v14; // [sp+Ch] [bp-D8h]
  float v17; // [sp+1Ch] [bp-C8h]
  _DWORD v18[49]; // [sp+20h] [bp-C4h] BYREF

  v5 = (float *)v18;
  v18[3] = 1065353216;
  v18[6] = 1065353216;
  v18[8] = 1065353216;
  v18[11] = 1065353216;
  v18[13] = 1065353216;
  v18[15] = 1065353216;
  v18[16] = 1065353216;
  v18[18] = 1065353216;
  v18[19] = 1065353216;
  v18[20] = 1065353216;
  v18[22] = 1065353216;
  v18[23] = 1065353216;
  v18[0] = -1082130432;
  v18[1] = -1082130432;
  v18[2] = -1082130432;
  v18[4] = -1082130432;
  v18[5] = -1082130432;
  v18[7] = -1082130432;
  v18[9] = -1082130432;
  v18[10] = -1082130432;
  v18[12] = -1082130432;
  v18[14] = -1082130432;
  v18[17] = -1082130432;
  v18[21] = -1082130432;
  j_memcpy(&v18[24], &unk_42DE00, 0x60u);
  do
  {
    v6 = a3 * *v5;
    v12 = a3 * v5[1];
    v14 = a3 * v5[2];
    v17 = (float)((float)((float)(v6 * a2[1]) + (float)(v12 * a2[5])) + (float)(v14 * a2[9])) + a2[13];
    v7 = (float)((float)((float)(v6 * a2[2]) + (float)(v12 * a2[6])) + (float)(v14 * a2[10])) + a2[14];
    *v5 = (float)((float)((float)(v6 * *a2) + (float)(v12 * a2[4])) + (float)(v14 * a2[8])) + a2[12];
    v5[2] = v7;
    v5[1] = v17;
    v5 += 3;
  }
  while ( &v18[24] != (_DWORD *)v5 );
  for ( i = 0; i != 24; i += 2 )
  {
    v9 = &v18[3 * v18[i + 24]];
    v10 = &v18[3 * v18[i + 25]];
    result = Ogre::RenderLines::addLine(a1, v9, v10, a4);
  }
  return result;
}


//======================================================================
// Ogre::DummyNode::update(unsigned int)
// address: 0x00153324   size: 0x62 (98 bytes)
//======================================================================
Ogre::RenderLines *__fastcall Ogre::DummyNode::update(Ogre::RenderLines *this, unsigned int a2)
{
  int v2; // r3
  int v3; // r4
  int v5; // r3
  float v6[17]; // [sp+0h] [bp-44h] BYREF

  v2 = *((_DWORD *)this + 48);
  v3 = (int)this;
  if ( v2 != 0 && *(_BYTE *)(v2 + 32) != 0 )
  {
    Ogre::RenderLines::reset(this);
    this = (Ogre::RenderLines *)Ogre::RenderLines::update((Ogre::RenderLines *)v3, a2);
    v5 = *(_DWORD *)(v3 + 324);
    if ( v5 != 0 && *(_BYTE *)(v5 + 20) != 0 )
    {
      if ( *(_BYTE *)(v3 + 180) != 0 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 68))(v3);
      Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v6, (const Ogre::Matrix4 *)(v3 + 48));
      return (Ogre::RenderLines *)Ogre::DummyNode::DrawBox(v3, v6, 30.0, -16711936);
    }
  }
  return this;
}

