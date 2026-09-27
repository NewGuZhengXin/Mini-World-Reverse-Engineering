// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LooseOctree

//======================================================================
// Ogre::LooseOctree::getOwnerTree(Ogre::MovableObject *)
// address: 0x001820FC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::LooseOctree::getOwnerTree(Ogre::LooseOctree *this, Ogre::MovableObject *a2)
{
  return *(_DWORD *)(*((_DWORD *)this + 49) + 64);
}


//======================================================================
// Ogre::LooseOctree::AddSceneNodeToBuffer(Ogre::CullResult &,Ogre::LooseOctreeNode *)
// address: 0x00182104   size: 0x48 (72 bytes)
//======================================================================
char *__fastcall Ogre::LooseOctree::AddSceneNodeToBuffer(char *this, Ogre::CullResult *a2, Ogre::LooseOctreeNode *a3)
{
  Ogre::MovableObject **v3; // r4
  char *v4; // r7
  Ogre::MovableObject *v6; // r5
  char *WorldBounds; // r0

  v3 = *((Ogre::MovableObject ***)a3 + 17);
  v4 = this;
  while ( v3 != *((Ogre::MovableObject ***)a3 + 18) )
  {
    v6 = *v3;
    if ( *((_BYTE *)*v3 + 183) != 0 )
    {
      WorldBounds = Ogre::MovableObject::getWorldBounds(*v3);
      this = (char *)Ogre::CullFrustum::cull(
                       (Ogre::CullResult *)((char *)a2 + 4),
                       (const Ogre::BoxSphereBound *)WorldBounds);
      if ( this != (_BYTE *)&dword_0 + 1 )
        this = Ogre::CullResult::addRenderable(
                 a2,
                 *((Ogre::GameScene **)v4 + 13),
                 (Ogre::MovableObject **)v6,
                 0,
                 nullptr);
    }
    ++v3;
  }
  return this;
}


//======================================================================
// Ogre::LooseOctree::AddSceneNodeToBuffer_Recursive(Ogre::CullResult &,Ogre::LooseOctreeNode *)
// address: 0x0018214C   size: 0x26 (38 bytes)
//======================================================================
char *__fastcall Ogre::LooseOctree::AddSceneNodeToBuffer_Recursive(
        Ogre::LooseOctree *this,
        Ogre::CullResult *a2,
        Ogre::LooseOctreeNode *a3)
{
  char *result; // r0
  int i; // r4
  Ogre::LooseOctreeNode *v8; // r2

  result = Ogre::LooseOctree::AddSceneNodeToBuffer((char *)this, a2, a3);
  for ( i = 0; i != 32; i += 4 )
  {
    v8 = *(Ogre::LooseOctreeNode **)((char *)a3 + i + 28);
    if ( v8 != nullptr )
      result = (char *)Ogre::LooseOctree::AddSceneNodeToBuffer_Recursive(this, a2, v8);
  }
  return result;
}


//======================================================================
// Ogre::LooseOctree::CullOctreeNodeVisual(Ogre::CullResult &,Ogre::LooseOctreeNode *)
// address: 0x00182172   size: 0x142 (322 bytes)
//======================================================================
char *__fastcall Ogre::LooseOctree::CullOctreeNodeVisual(
        Ogre::LooseOctree *this,
        Ogre::CullResult *a2,
        Ogre::LooseOctreeNode *a3)
{
  float v4; // r7
  float v5; // r0
  float v6; // r0
  char *result; // r0
  int i; // r5
  Ogre::LooseOctreeNode *v9; // r2
  float v12; // [sp+1Ch] [bp-50h] BYREF
  float v13; // [sp+20h] [bp-4Ch]
  float v14; // [sp+24h] [bp-48h]
  float v15[3]; // [sp+28h] [bp-44h] BYREF
  float v16[3]; // [sp+34h] [bp-38h] BYREF
  float v17[3]; // [sp+40h] [bp-2Ch] BYREF
  float v18[8]; // [sp+4Ch] [bp-20h] BYREF

  v12 = *((float *)a3 + 3) + *((float *)a3 + 4);
  v13 = v12;
  v14 = v12;
  Ogre::operator-(v15, (float *)a3, &v12);
  v4 = *((float *)a3 + 1) + v13;
  v5 = *((float *)a3 + 2) + v14;
  v16[0] = *(float *)a3 + v12;
  v16[2] = v5;
  v16[1] = v4;
  v18[2] = (float)(v5 + v15[2]) * 0.5;
  v18[0] = (float)(v16[0] + v15[0]) * 0.5;
  v18[1] = (float)(v4 + v15[1]) * 0.5;
  Ogre::operator-(v17, v16, v15);
  v18[5] = v17[2] * 0.5;
  v18[3] = v17[0] * 0.5;
  v18[4] = v17[1] * 0.5;
  v6 = j_sqrt((float)((float)((float)((float)(v17[0] * 0.5) * (float)(v17[0] * 0.5))
                            + (float)((float)(v17[1] * 0.5) * (float)(v17[1] * 0.5)))
                    + (float)((float)(v17[2] * 0.5) * (float)(v17[2] * 0.5))));
  v18[6] = v6;
  result = (char *)Ogre::CullFrustum::cull((Ogre::CullResult *)((char *)a2 + 4), (const Ogre::BoxSphereBound *)v18);
  if ( result == nullptr )
    return Ogre::LooseOctree::AddSceneNodeToBuffer_Recursive(this, a2, a3);
  if ( result == (_BYTE *)&dword_0 + 2 )
  {
    result = Ogre::LooseOctree::AddSceneNodeToBuffer((char *)this, a2, a3);
    for ( i = 0; i != 32; i += 4 )
    {
      v9 = *(Ogre::LooseOctreeNode **)((char *)a3 + i + 28);
      if ( v9 != nullptr )
        result = (char *)Ogre::LooseOctree::CullOctreeNodeVisual(this, a2, v9);
    }
  }
  return result;
}


//======================================================================
// Ogre::LooseOctree::cull(Ogre::CullResult &)
// address: 0x001822B4   size: 0xE (14 bytes)
//======================================================================
char *__fastcall Ogre::LooseOctree::cull(char *this, Ogre::CullResult *a2)
{
  Ogre::LooseOctreeNode *v2; // r2

  v2 = *((Ogre::LooseOctreeNode **)this + 6);
  if ( v2 != nullptr )
    return Ogre::LooseOctree::CullOctreeNodeVisual((Ogre::LooseOctree *)this, a2, v2);
  return this;
}


//======================================================================
// Ogre::LooseOctree::pickObject(Ogre::IntersectType,Ogre::LooseOctreeNode *,Ogre::Ray const&,Ogre::MovableObject *&,float &,unsigned int)
// address: 0x001822C2   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall Ogre::LooseOctree::pickObject(int a1, int a2, int a3, float *a4, _DWORD *a5, float *a6, int a7)
{
  float v8; // r1
  float v9; // r2
  float v10; // r3
  float v11; // r0
  float v12; // r1
  int result; // r0
  unsigned int v14; // r5
  int v15; // r3
  _DWORD *v16; // r6
  float v17; // r7
  int i; // r5
  int v19; // r2
  int v20; // [sp+10h] [bp-2Ch]
  float v24; // [sp+24h] [bp-18h] BYREF
  float v25[5]; // [sp+28h] [bp-14h] BYREF

  v8 = *(float *)a3;
  v9 = *(float *)(a3 + 4);
  v10 = *(float *)(a3 + 8);
  v25[0] = v8;
  v11 = *(float *)(a3 + 12);
  v12 = *(float *)(a3 + 16);
  v25[1] = v9;
  v25[2] = v10;
  v25[3] = v11 + v12;
  result = Ogre::Ray::intersectSphere(a4, v25, nullptr);
  if ( result != 0 )
  {
    v14 = 0;
    v20 = 0;
    while ( 1 )
    {
      v15 = *(_DWORD *)(a3 + 68);
      if ( v14 >= (*(_DWORD *)(a3 + 72) - v15) >> 2 )
        break;
      v16 = *(_DWORD **)(4 * v14 + v15);
      if ( (v16[50] & a7) != 0
        && (*(int (__fastcall **)(_DWORD *, int, float *, float *))(*v16 + 56))(v16, a2, a4, &v24) != 0 )
      {
        v17 = v24;
        if ( *a6 > v24 )
        {
          *a5 = v16;
          v20 = 1;
          *a6 = v17;
        }
      }
      ++v14;
    }
    for ( i = 0; i != 32; i += 4 )
    {
      v19 = *(_DWORD *)(a3 + i + 28);
      if ( v19 != 0 && Ogre::LooseOctree::pickObject(a1, a2, v19, a4, a5, a6, a7) != 0 )
        v20 = 1;
    }
    return v20;
  }
  return result;
}


//======================================================================
// Ogre::LooseOctree::pickObject(Ogre::IntersectType,Ogre::WorldRay const&,float &,unsigned int)
// address: 0x0018237C   size: 0x46 (70 bytes)
//======================================================================
int __fastcall Ogre::LooseOctree::pickObject(int a1, int a2, Ogre::WorldRay *this, float *a4, int a5)
{
  int result; // r0
  int v9; // [sp+14h] [bp-30h] BYREF
  _DWORD v10[3]; // [sp+18h] [bp-2Ch] BYREF
  float v11[8]; // [sp+24h] [bp-20h] BYREF

  *a4 = 3.4028e38;
  v11[6] = 3.4028e38;
  v9 = 0;
  memset(v10, 0, sizeof(v10));
  Ogre::WorldRay::getRelativeRay(this, (Ogre::Ray *)v11, (const Ogre::WorldPos *)v10);
  result = Ogre::LooseOctree::pickObject(a1, a2, *(_DWORD *)(a1 + 24), v11, &v9, a4, a5);
  if ( result != 0 )
    return v9;
  return result;
}


//======================================================================
// Ogre::LooseOctree::NewOneNode(unsigned int,Ogre::Vector3 const&,float,Ogre::LooseOctreeNode *)
// address: 0x001823C8   size: 0x5E (94 bytes)
//======================================================================
int __fastcall Ogre::LooseOctree::NewOneNode(int a1, int a2, _DWORD *a3, float a4, int a5)
{
  int result; // r0
  int v8; // r5
  int v9; // r3

  result = operator new(0x5Cu);
  v8 = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 76) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 84) = 0;
  *(_DWORD *)(result + 88) = 0;
  ++*(_DWORD *)(a1 + 48);
  *(_DWORD *)result = *a3;
  *(_DWORD *)(result + 4) = a3[1];
  *(_DWORD *)(result + 8) = a3[2];
  *(float *)(result + 12) = a4;
  *(float *)(result + 16) = a4 * 0.5;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 20) = a2;
  *(_DWORD *)(result + 64) = a1;
  *(_DWORD *)(result + 60) = a5;
  do
  {
    v9 = result + v8;
    v8 += 4;
    *(_DWORD *)(v9 + 28) = 0;
  }
  while ( v8 != 32 );
  return result;
}


//======================================================================
// Ogre::LooseOctree::LooseOctree(Ogre::GameScene *,unsigned int,Ogre::Vector3 const&,float)
// address: 0x00182426   size: 0x4C (76 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11LooseOctreeC1EPNS_9GameSceneEjRKNS_7Vector3Ef'
Ogre::LooseOctree *__fastcall Ogre::LooseOctree::LooseOctree(
        Ogre::LooseOctree *this,
        Ogre::GameScene *a2,
        unsigned int a3,
        const Ogre::Vector3 *a4,
        float a5)
{
  char *v5; // r6
  int v9; // r5

  v5 = (char *)this + 4;
  j_memset((char *)this + 4, 0, 0x10u);
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 3) = v5;
  *((_DWORD *)this + 4) = v5;
  *((_DWORD *)this + 13) = a2;
  *((_DWORD *)this + 7) = a3;
  *((_DWORD *)this + 8) = *(_DWORD *)a4;
  *((_DWORD *)this + 9) = *((_DWORD *)a4 + 1);
  v9 = *((_DWORD *)a4 + 2);
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 10) = v9;
  *((float *)this + 11) = a5;
  *((_DWORD *)this + 6) = Ogre::LooseOctree::NewOneNode((int)this, 0, (_DWORD *)this + 8, a5, 0);
  return this;
}


//======================================================================
// Ogre::LooseOctree::GetContainer(Ogre::Vector3 const&,float,Ogre::LooseOctreeNode *)
// address: 0x00182472   size: 0x102 (258 bytes)
//======================================================================
int __fastcall Ogre::LooseOctree::GetContainer(Ogre::LooseOctree *a1, float *a2, float a3, int a4)
{
  int v5; // r5
  int v6; // r6
  float v7; // r5
  float v8; // r0
  float v9; // r0
  float v10; // r0
  float v11; // r0
  int v12; // r1
  int v14; // [sp+10h] [bp-2Ch]
  float v15; // [sp+14h] [bp-28h]
  float v17; // [sp+1Ch] [bp-20h]
  float v20; // [sp+2Ch] [bp-10h] BYREF
  float v21; // [sp+30h] [bp-Ch]
  float v22; // [sp+34h] [bp-8h]

  v5 = a4;
  if ( *(_DWORD *)(a4 + 20) < *((_DWORD *)a1 + 7) && a3 < (float)(*(float *)(a4 + 12) * 0.25) )
  {
    Ogre::operator-(&v20, a2, (float *)a4);
    v14 = v20 > 0.0;
    if ( v21 > 0.0 )
      v14 |= 2u;
    if ( v22 > 0.0 )
      v14 |= 4u;
    v6 = a4 + 4 * v14;
    if ( *(_DWORD *)(v6 + 28) == 0 )
    {
      v15 = *(float *)(a4 + 4);
      v17 = *(float *)(a4 + 8);
      v7 = *(float *)(a4 + 12) * 0.5;
      v8 = *(float *)a4;
      if ( (v14 & 1) != 0 )
        v9 = v8 + v7;
      else
        v9 = v8 - v7;
      v20 = v9;
      if ( (v14 & 2) != 0 )
        v10 = v15 + v7;
      else
        v10 = v15 - v7;
      v21 = v10;
      if ( (v14 & 4) != 0 )
        v11 = v17 + v7;
      else
        v11 = v17 - v7;
      v12 = *(_DWORD *)(a4 + 20);
      v22 = v11;
      *(_DWORD *)(v6 + 28) = Ogre::LooseOctree::NewOneNode((int)a1, v12 + 1, &v20, v7, a4);
    }
    return Ogre::LooseOctree::GetContainer(a1, (const Ogre::Vector3 *)a2, a3, *(Ogre::LooseOctreeNode **)(v6 + 28));
  }
  return v5;
}


//======================================================================
// Ogre::LooseOctree::DelOneNode(Ogre::LooseOctreeNode *)
// address: 0x001825C2   size: 0x34 (52 bytes)
//======================================================================
void __fastcall Ogre::LooseOctree::DelOneNode(Ogre::LooseOctree *this, Ogre::LooseOctreeNode *a2)
{
  int i; // r5
  Ogre::LooseOctreeNode *v5; // r1

  for ( i = 0; i != 32; i += 4 )
  {
    v5 = *(Ogre::LooseOctreeNode **)((char *)a2 + i + 28);
    if ( v5 != nullptr )
      Ogre::LooseOctree::DelOneNode(this, v5);
  }
  if ( a2 != nullptr )
  {
    Ogre::LooseOctreeNode::~LooseOctreeNode(a2);
    operator delete(a2);
  }
  --*((_DWORD *)this + 12);
}


//======================================================================
// Ogre::LooseOctree::CleanOctree_Internal(Ogre::LooseOctreeNode *)
// address: 0x001825F6   size: 0x50 (80 bytes)
//======================================================================
int __fastcall Ogre::LooseOctree::CleanOctree_Internal(Ogre::LooseOctree *this, Ogre::LooseOctreeNode *a2)
{
  int v4; // r5
  Ogre::LooseOctreeNode **v5; // r6
  Ogre::LooseOctreeNode *v6; // r1
  int result; // r0
  int v8; // [sp+4h] [bp-8h]

  v4 = 0;
  v8 = 1;
  do
  {
    v5 = (Ogre::LooseOctreeNode **)((char *)a2 + v4);
    v6 = *(Ogre::LooseOctreeNode **)((char *)a2 + v4 + 28);
    if ( v6 != nullptr )
    {
      if ( Ogre::LooseOctree::CleanOctree_Internal(this, v6) != 0 )
      {
        Ogre::LooseOctree::DelOneNode(this, v5[7]);
        v5[7] = nullptr;
      }
      else
      {
        v8 = 0;
      }
    }
    v4 += 4;
  }
  while ( v4 != 32 );
  result = 0;
  if ( v8 != 0 && *((_DWORD *)a2 + 17) == *((_DWORD *)a2 + 18) )
    return *((_DWORD *)a2 + 21)
         - *((_DWORD *)a2 + 20)
         + (*((_DWORD *)a2 + 20) == *((_DWORD *)a2 + 21))
         + *((_DWORD *)a2 + 20)
         - *((_DWORD *)a2 + 21);
  return result;
}


//======================================================================
// Ogre::LooseOctree::CleanTree(void)
// address: 0x00182646   size: 0xE (14 bytes)
//======================================================================
Ogre::LooseOctreeNode **__fastcall Ogre::LooseOctree::CleanTree(Ogre::LooseOctreeNode **this)
{
  Ogre::LooseOctreeNode *v1; // r1

  v1 = *(this + 6);
  if ( v1 != nullptr )
    return (Ogre::LooseOctreeNode **)Ogre::LooseOctree::CleanOctree_Internal((Ogre::LooseOctree *)this, v1);
  return this;
}


//======================================================================
// Ogre::LooseOctree::~LooseOctree()
// address: 0x00182674   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11LooseOctreeD1Ev'
void __fastcall Ogre::LooseOctree::~LooseOctree(Ogre::LooseOctreeNode **this)
{
  Ogre::LooseOctree::DelOneNode((Ogre::LooseOctree *)this, *(this + 6));
  std::_Rb_tree<Ogre::MovableObject *,std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>,std::_Select1st<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>,std::less<Ogre::MovableObject *>,std::allocator<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>>::_M_erase(
    (int)this,
    *(this + 2));
}


//======================================================================
// Ogre::LooseOctree::detachObject(Ogre::MovableObject *)
// address: 0x00182898   size: 0x12 (18 bytes)
//======================================================================
Ogre::MovableObject *__fastcall Ogre::LooseOctree::detachObject(Ogre::LooseOctree *this, Ogre::MovableObject *a2)
{
  Ogre::MovableObject *result; // r0

  result = *((Ogre::MovableObject **)a2 + 49);
  if ( result != nullptr )
    return Ogre::LooseOctreeNode::removeMovableObject(result, a2);
  return result;
}


//======================================================================
// Ogre::LooseOctree::getEffectObjects(std::vector<Ogre::EffectObject *,std::allocator<Ogre::EffectObject *>> &,Ogre::BoxSphereBound const&,Ogre::LooseOctreeNode *)
// address: 0x001828CC   size: 0x156 (342 bytes)
//======================================================================
int __fastcall Ogre::LooseOctree::getEffectObjects(int result, unsigned int a2, float *a3, int a4)
{
  float v5; // r5
  float v6; // r1
  float v7; // r0
  float v8; // r0
  float v9; // r1
  float v10; // r4
  int v11; // r3
  float *WorldBounds; // r4
  float v13; // r1
  float v14; // r0
  float v15; // r0
  int j; // r4
  float v17; // [sp+0h] [bp-6Ch]
  unsigned int i; // [sp+4h] [bp-68h]
  int v21; // [sp+10h] [bp-5Ch]
  float v22; // [sp+14h] [bp-58h]
  Ogre::MovableObject *v23[3]; // [sp+18h] [bp-54h] BYREF
  float v24[3]; // [sp+24h] [bp-48h] BYREF
  float v25; // [sp+30h] [bp-3Ch] BYREF
  float v26; // [sp+34h] [bp-38h]
  float v27; // [sp+38h] [bp-34h]
  float v28; // [sp+3Ch] [bp-30h]
  float v29; // [sp+40h] [bp-2Ch]
  float v30; // [sp+44h] [bp-28h]
  char v31; // [sp+48h] [bp-24h]
  float v32[6]; // [sp+4Ch] [bp-20h] BYREF
  char v33; // [sp+64h] [bp-8h]

  v21 = result;
  if ( *(_DWORD *)(a4 + 24) != 0 )
  {
    v33 = 0;
    v31 = 0;
    v5 = *(float *)(a4 + 12) + *(float *)(a4 + 16);
    v23[1] = (Ogre::MovableObject *)LODWORD(v5);
    v23[2] = (Ogre::MovableObject *)LODWORD(v5);
    v23[0] = (Ogre::MovableObject *)LODWORD(v5);
    Ogre::operator-(v24, (float *)a4, (float *)v23);
    v26 = v24[1];
    v27 = v24[2];
    v6 = *(float *)(a4 + 4);
    v25 = v24[0];
    v22 = v5 + *(float *)(a4 + 8);
    v7 = *(float *)a4 + v5;
    v29 = v5 + v6;
    v28 = v7;
    v30 = v22;
    Ogre::operator-(v24, a3, a3 + 3);
    v8 = a3[1];
    v32[0] = v24[0];
    v9 = a3[4];
    v32[1] = v24[1];
    v32[2] = v24[2];
    v10 = a3[2] + a3[5];
    v32[3] = *a3 + a3[3];
    v32[4] = v8 + v9;
    v32[5] = v10;
    result = Ogre::BoxBound::intersectBoxBound((Ogre::BoxBound *)&v25, (const Ogre::BoxBound *)v32);
    if ( result != 0 )
    {
      for ( i = 0; ; ++i )
      {
        v11 = *(_DWORD *)(a4 + 80);
        if ( i >= (*(_DWORD *)(a4 + 84) - v11) >> 2 )
          break;
        v23[0] = *(Ogre::MovableObject **)(4 * i + v11);
        WorldBounds = (float *)Ogre::MovableObject::getWorldBounds(v23[0]);
        Ogre::operator-(v24, WorldBounds, WorldBounds + 3);
        v13 = WorldBounds[4];
        v14 = WorldBounds[1];
        v25 = v24[0];
        v26 = v24[1];
        v27 = v24[2];
        v17 = v14 + v13;
        v15 = WorldBounds[2] + WorldBounds[5];
        v28 = *WorldBounds + WorldBounds[3];
        v30 = v15;
        v29 = v17;
        result = Ogre::BoxBound::intersectBoxBound((Ogre::BoxBound *)&v25, (const Ogre::BoxBound *)v32);
        if ( result != 0 )
          result = std::vector<Ogre::EffectObject *>::push_back(__SPAIR64__(v23, a2));
      }
      for ( j = 0; j != 32; j += 4 )
      {
        if ( *(_DWORD *)(a4 + j + 28) != 0 )
          result = Ogre::LooseOctree::getEffectObjects(v21, a2, a3);
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::LooseOctree::getEffectObjects(std::vector<Ogre::EffectObject *,std::allocator<Ogre::EffectObject *>> &,Ogre::BoxSphereBound const&)
// address: 0x00182A22   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::LooseOctree::getEffectObjects(int result, unsigned int a2, float *a3)
{
  int v3; // r3

  v3 = *(_DWORD *)(result + 24);
  if ( v3 != 0 )
    return Ogre::LooseOctree::getEffectObjects(result, a2, a3, v3);
  return result;
}


//======================================================================
// Ogre::LooseOctree::attachObject(Ogre::MovableObject *)
// address: 0x00182AB4   size: 0x8C (140 bytes)
//======================================================================
int __fastcall Ogre::LooseOctree::attachObject(Ogre::LooseOctree *this, Ogre::MovableObject *a2)
{
  float *WorldBounds; // r0
  int v4; // r2
  float v5; // r7
  float v6; // r5
  __int64 v7; // r0
  int v8; // r5
  int v9; // r2
  __int64 v11; // r0
  Ogre::MovableObject *v12[2]; // [sp+4h] [bp-18h] BYREF
  float v13[4]; // [sp+Ch] [bp-10h] BYREF

  v12[0] = a2;
  WorldBounds = (float *)Ogre::MovableObject::getWorldBounds(a2);
  v5 = WorldBounds[4];
  v13[0] = *WorldBounds;
  v13[1] = WorldBounds[1];
  v13[2] = WorldBounds[2];
  if ( v5 <= WorldBounds[5] )
    v5 = WorldBounds[5];
  v6 = WorldBounds[3];
  if ( v6 <= v5 )
    v6 = v5;
  if ( v6 <= 0.0 )
  {
    LODWORD(v11) = *((_DWORD *)this + 6);
    *((Ogre::MovableObject **)&v11 + 1) = v12[0];
    Ogre::LooseOctreeNode::addMovableObject(v11, v4);
    *(_DWORD *)std::map<Ogre::MovableObject *,Ogre::LooseOctreeNode *>::operator[](this, (unsigned int *)v12) = *((_DWORD *)this + 6);
    return *((_DWORD *)this + 6);
  }
  else
  {
    v7 = __PAIR64__((unsigned int)v12[0], Ogre::LooseOctree::GetContainer(this, v13, v6, *((_DWORD *)this + 6)));
    v8 = v7;
    Ogre::LooseOctreeNode::addMovableObject(v7, v9);
    *(_DWORD *)std::map<Ogre::MovableObject *,Ogre::LooseOctreeNode *>::operator[](this, (unsigned int *)v12) = v8;
    return v8;
  }
}


//======================================================================
// Ogre::LooseOctree::updateObject(Ogre::MovableObject *)
// address: 0x00182B40   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall Ogre::LooseOctree::updateObject(int this, Ogre::MovableObject *a2)
{
  float *v2; // r3
  Ogre::LooseOctree *v3; // r5
  float *WorldBounds; // r6
  float v6; // r7
  float v7; // r6
  float v8; // r6
  float v9; // [sp+0h] [bp-24h]
  float v10; // [sp+0h] [bp-24h]
  float *v11; // [sp+4h] [bp-20h]
  float v12; // [sp+8h] [bp-1Ch]
  float v13; // [sp+Ch] [bp-18h]
  float v14; // [sp+14h] [bp-10h] BYREF
  float v15; // [sp+18h] [bp-Ch]
  float v16; // [sp+1Ch] [bp-8h]

  v2 = *((float **)a2 + 49);
  v3 = (Ogre::LooseOctree *)this;
  v11 = v2;
  if ( v2 != nullptr )
  {
    if ( v2 == *(float **)(this + 24) )
      goto LABEL_17;
    WorldBounds = (float *)Ogre::MovableObject::getWorldBounds(a2);
    Ogre::operator-(&v14, WorldBounds, v11);
    if ( v14 >= 0.0 )
      v9 = v14;
    else
      LODWORD(v9) = LODWORD(v14) + 0x80000000;
    if ( v15 >= 0.0 )
      v12 = v15;
    else
      LODWORD(v12) = LODWORD(v15) + 0x80000000;
    if ( v16 >= 0.0 )
      v13 = v16;
    else
      LODWORD(v13) = LODWORD(v16) + 0x80000000;
    v10 = v9 + WorldBounds[3];
    v6 = v12 + WorldBounds[4];
    v7 = v13 + WorldBounds[5];
    if ( v6 <= v7 )
      v6 = v7;
    v8 = v10;
    if ( v10 <= v6 )
      v8 = v6;
    this = v8 > (float)(v11[3] + v11[4]);
    if ( v8 > (float)(v11[3] + v11[4]) )
    {
LABEL_17:
      Ogre::LooseOctree::detachObject(v3, a2);
      return Ogre::LooseOctree::attachObject(v3, a2);
    }
  }
  return this;
}

