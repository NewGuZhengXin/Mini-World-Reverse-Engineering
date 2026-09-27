// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PhysicsScene

//======================================================================
// Ogre::PhysicsScene::PhysicsScene(void)
// address: 0x0016F280   size: 0xA (10 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12PhysicsSceneC2Ev'
_DWORD *__fastcall Ogre::PhysicsScene::PhysicsScene(_DWORD *this)
{
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// Ogre::PhysicsScene::~PhysicsScene()
// address: 0x0016F28A   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12PhysicsSceneD2Ev'
void __fastcall Ogre::PhysicsScene::~PhysicsScene(Ogre::PhysicsScene *this)
{
  unsigned int i; // r4
  _DWORD *v3; // r0
  _DWORD *v4; // r6
  void *v5; // r0

  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD **)this;
    if ( i >= (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2 )
      break;
    v4 = (_DWORD *)v3[i];
    if ( v4 != nullptr )
    {
      v5 = (void *)v4[7];
      if ( v5 != nullptr )
        operator delete(v5);
      operator delete(v4);
    }
  }
  if ( v3 != nullptr )
    operator delete(v3);
}


//======================================================================
// Ogre::PhysicsScene::pick(Ogre::Ray const&,float *,Ogre::Vector3 *)
// address: 0x0016F2C4   size: 0x1AA (426 bytes)
//======================================================================
bool __fastcall Ogre::PhysicsScene::pick(Ogre::PhysicsScene *this, const Ogre::Ray *a2, float *a3, Ogre::Vector3 *a4)
{
  float *v6; // r5
  int v7; // r4
  int v8; // r3
  _BOOL4 result; // r0
  float v10; // r4
  float v11; // r7
  float v12; // r5
  float v13; // r4
  unsigned int v14; // [sp+8h] [bp-2Ch]
  float v15; // [sp+8h] [bp-2Ch]
  float v16; // [sp+8h] [bp-2Ch]
  float v17; // [sp+Ch] [bp-28h]
  float v18; // [sp+Ch] [bp-28h]
  int v19; // [sp+10h] [bp-24h]
  float v20; // [sp+10h] [bp-24h]
  float v21; // [sp+14h] [bp-20h]
  unsigned int v24; // [sp+24h] [bp-10h]
  float v25[2]; // [sp+2Ch] [bp-8h] BYREF

  v14 = 0;
  v6 = nullptr;
  v17 = 3.4028e38;
  while ( v14 < (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2 )
  {
    v7 = *(_DWORD *)(4 * v14 + *(_DWORD *)this);
    if ( Ogre::Ray::intersectBoxSphere(a2, (float *)v7) )
    {
      v8 = 0;
      v24 = -1431655765 * ((*(_DWORD *)(v7 + 32) - *(_DWORD *)(v7 + 28)) >> 2) / 3u;
      while ( 1 )
      {
        v19 = v8;
        if ( v8 == v24 )
          break;
        if ( Ogre::Ray::intersectTriangle(
               a2,
               (const Ogre::Vector3 *)(*(_DWORD *)(v7 + 28) + 36 * v8),
               (const Ogre::Vector3 *)(*(_DWORD *)(v7 + 28) + 36 * v8 + 12),
               (const Ogre::Vector3 *)(*(_DWORD *)(v7 + 28) + 36 * v8 + 24),
               v25) != 0
          && v25[0] < v17 )
        {
          v6 = (float *)(*(_DWORD *)(v7 + 28) + 36 * v19);
          v17 = v25[0];
        }
        v8 = v19 + 1;
      }
    }
    ++v14;
  }
  result = v17 < 3.4028e38;
  if ( v17 < 3.4028e38 )
  {
    if ( a3 != nullptr )
      *a3 = v17;
    if ( a4 != nullptr )
    {
      v20 = v6[6] - *v6;
      v15 = v6[1];
      v21 = v6[7] - v15;
      v18 = v6[2];
      v10 = v6[8] - v18;
      v11 = v6[3] - *v6;
      v16 = v6[4] - v15;
      v12 = v6[5] - v18;
      *(float *)a4 = (float)(v21 * v12) - (float)(v10 * v16);
      *((float *)a4 + 1) = (float)(v10 * v11) - (float)(v20 * v12);
      *((float *)a4 + 2) = (float)(v20 * v16) - (float)(v21 * v11);
      v13 = Ogre::Vector3::length(a4);
      if ( v13 <= 0.00001 )
      {
        *(_DWORD *)a4 = 0;
        *((_DWORD *)a4 + 1) = 0;
        *((_DWORD *)a4 + 2) = 0;
      }
      else
      {
        *(float *)a4 = *(float *)a4 * (float)(1.0 / v13);
        *((float *)a4 + 1) = *((float *)a4 + 1) * (float)(1.0 / v13);
        *((float *)a4 + 2) = *((float *)a4 + 2) * (float)(1.0 / v13);
      }
    }
    return true;
  }
  return result;
}


//======================================================================
// Ogre::PhysicsScene::buildDecalMesh(Ogre::BoxSphereBound const&,Ogre::Vector3 *,unsigned short *,int,int,int &,int &)
// address: 0x0016F47C   size: 0x208 (520 bytes)
//======================================================================
const Ogre::Vector3 *__fastcall Ogre::PhysicsScene::buildDecalMesh(
        Ogre::PhysicsScene *this,
        const Ogre::BoxSphereBound *a2,
        Ogre::Vector3 *a3,
        unsigned __int16 *a4,
        __int16 a5,
        int a6,
        int *a7,
        int *a8)
{
  const Ogre::Vector3 *result; // r0
  int v9; // r3
  float *v10; // r6
  int v11; // r5
  float *v12; // r5
  int v13; // r5
  float *v14; // r5
  int v15; // r5
  float *v16; // r5
  float v17; // r0
  float *v18; // [sp+Ch] [bp-90h]
  float v19; // [sp+Ch] [bp-90h]
  float v20; // [sp+Ch] [bp-90h]
  int v21; // [sp+10h] [bp-8Ch]
  float v22; // [sp+18h] [bp-84h]
  float v23; // [sp+18h] [bp-84h]
  unsigned int i; // [sp+1Ch] [bp-80h]
  int v25; // [sp+20h] [bp-7Ch]
  float *v26; // [sp+24h] [bp-78h]
  unsigned int v31; // [sp+38h] [bp-64h]
  float v32; // [sp+3Ch] [bp-60h]
  _BYTE v33[28]; // [sp+44h] [bp-58h] BYREF
  float v34[7]; // [sp+60h] [bp-3Ch] BYREF
  float v35[8]; // [sp+7Ch] [bp-20h] BYREF

  *a8 = 0;
  *a7 = 0;
  Ogre::BoxSphereBound::getBox((Ogre::BoxSphereBound *)v33, (float *)a2);
  for ( i = 0; ; ++i )
  {
    result = (const Ogre::Vector3 *)i;
    if ( i >= (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2 )
      break;
    v25 = *(_DWORD *)(4 * i + *(_DWORD *)this);
    Ogre::BoxSphereBound::getBox((Ogre::BoxSphereBound *)v34, (float *)a2);
    Ogre::BoxSphereBound::getBox((Ogre::BoxSphereBound *)v35, (float *)v25);
    if ( v34[0] <= v35[3] && v35[0] <= v34[3] && v34[1] <= v35[4] && v35[1] <= v34[4] )
    {
      v21 = v34[2] > v35[5];
      if ( v34[2] <= v35[5] && v35[2] <= v34[5] )
      {
        v31 = -1431655765 * ((*(_DWORD *)(v25 + 32) - *(_DWORD *)(v25 + 28)) >> 2) / 3u;
        while ( v21 != v31 )
        {
          v9 = *(_DWORD *)(v25 + 28);
          result = (const Ogre::Vector3 *)(v9 + 36 * v21);
          v10 = (float *)(v9 + 36 * v21 + 12);
          v26 = (float *)(v9 + 36 * v21 + 24);
          v18 = (float *)result;
          if ( *a8 >= a6 )
            return result;
          if ( Ogre::BoxBound::isPointIn((Ogre::BoxBound *)v33, result)
            || Ogre::BoxBound::isPointIn((Ogre::BoxBound *)v33, (const Ogre::Vector3 *)v10)
            || Ogre::BoxBound::isPointIn((Ogre::BoxBound *)v33, (const Ogre::Vector3 *)v26) )
          {
            v11 = (*a7)++;
            v12 = (float *)((char *)a3 + 12 * v11);
            v22 = v18[1] + 0.5;
            v32 = v18[2] + 0.0;
            *v12 = *v18 + 0.0;
            v12[1] = v22;
            v12[2] = v32;
            v13 = 12 * (*a7)++;
            v14 = (float *)((char *)a3 + v13);
            v19 = v10[1] + 0.5;
            v23 = v10[2] + 0.0;
            *v14 = *v10 + 0.0;
            v14[1] = v19;
            v14[2] = v23;
            v15 = (*a7)++;
            v16 = (float *)((char *)a3 + 12 * v15);
            v20 = v26[1] + 0.5;
            v17 = v26[2] + 0.0;
            *v16 = *v26 + 0.0;
            v16[2] = v17;
            v16[1] = v20;
            a4[3 * *a8] = *a7 + a5 - 3;
            a4[3 * *a8 + 1] = *a7 + a5 - 2;
            a4[3 * (*a8)++ + 2] = *(_WORD *)a7 + a5 - 1;
          }
          ++v21;
        }
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::PhysicsScene::removeBSPData(void *)
// address: 0x00170040   size: 0x4C (76 bytes)
//======================================================================
_DWORD *__fastcall Ogre::PhysicsScene::removeBSPData(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // r4
  unsigned int i; // r5
  void *v5; // r0
  char *v6; // r2
  int v7; // r1

  v2 = this;
  for ( i = 0; i < (v2[1] - *v2) >> 2; ++i )
  {
    if ( *(_DWORD **)(*v2 + 4 * i) == a2 )
    {
      if ( a2 != nullptr )
      {
        v5 = (void *)a2[7];
        if ( v5 != nullptr )
          operator delete(v5);
        operator delete(a2);
      }
      v6 = (char *)(*v2 + 4 * i);
      v7 = v2[1];
      this = v6 + 4;
      if ( v6 + 4 != (char *)v7 )
        this = (_DWORD *)std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::PhysicsScene::CollideData *>(
                           this,
                           v7,
                           v6);
      v2[1] -= 4;
    }
  }
  return this;
}


//======================================================================
// Ogre::PhysicsScene::addBSPData(Ogre::BSPData *,Ogre::Matrix4 const&)
// address: 0x00170138   size: 0x1BA (442 bytes)
//======================================================================
float *__fastcall Ogre::PhysicsScene::addBSPData(Ogre::PhysicsScene *this, Ogre::BSPData *a2, const Ogre::Matrix4 *a3)
{
  float v3; // r7
  float *v6; // r0
  int v7; // r2
  int v8; // r5
  unsigned int v9; // r3
  int v10; // r5
  float *v11; // r3
  float *v12; // r4
  __int64 v13; // r0
  int i; // [sp+8h] [bp-44h]
  float v16; // [sp+Ch] [bp-40h]
  float v17; // [sp+10h] [bp-3Ch]
  float v18; // [sp+18h] [bp-34h]
  float v19; // [sp+1Ch] [bp-30h]
  float v20; // [sp+20h] [bp-2Ch]
  int v21; // [sp+24h] [bp-28h]
  unsigned int v22; // [sp+28h] [bp-24h]
  float *v24; // [sp+38h] [bp-14h] BYREF
  float v25; // [sp+3Ch] [bp-10h] BYREF
  float v26; // [sp+40h] [bp-Ch]
  float v27; // [sp+44h] [bp-8h]

  v6 = (float *)operator new(0x28u);
  v6[7] = 0.0;
  v6[8] = 0.0;
  v6[9] = 0.0;
  v7 = *((_DWORD *)a2 + 8);
  v8 = *((_DWORD *)a2 + 7);
  v24 = v6;
  v9 = (unsigned int)((v7 - v8) >> 1) >> 2;
  v22 = v9;
  if ( 3 * v9 != 0 )
    std::vector<Ogre::Vector3>::_M_fill_insert((int)(v6 + 7), nullptr, 3 * v9, &v25);
  v10 = 0;
  v21 = 0;
  while ( v10 != v22 )
  {
    for ( i = 0; i != 6; i += 2 )
    {
      Ogre::Matrix4::transformCoord(
        &v25,
        a3,
        (float *)(*((_DWORD *)a2 + 4) + 12 * *(unsigned __int16 *)(*((_DWORD *)a2 + 7) + 8 * v10 + i)));
      if ( v21 != 0 )
      {
        if ( v20 >= v25 )
          v20 = v25;
        if ( v19 >= v26 )
          v19 = v26;
        if ( v18 >= v27 )
          v18 = v27;
        if ( v17 <= v25 )
          v17 = v25;
        if ( v16 <= v26 )
          v16 = v26;
        if ( v3 <= v27 )
          v3 = v27;
      }
      else
      {
        v3 = v27;
        v17 = v25;
        v16 = v26;
        v18 = v27;
        v19 = v26;
        v20 = v25;
        v21 = 1;
      }
      v11 = (float *)(*((_DWORD *)v24 + 7) + 6 * i + 36 * v10);
      *v11 = v25;
      v11[1] = v26;
      v11[2] = v27;
    }
    ++v10;
  }
  v12 = v24;
  *v24 = (float)(v20 + v17) * 0.5;
  v12[1] = (float)(v19 + v16) * 0.5;
  v12[2] = (float)(v18 + v3) * 0.5;
  v12[3] = (float)(v17 - v20) * 0.5;
  v12[4] = (float)(v16 - v19) * 0.5;
  v12[5] = (float)(v3 - v18) * 0.5;
  v12[6] = Ogre::Vector3::length((Ogre::Vector3 *)(v12 + 3));
  HIDWORD(v13) = *((_DWORD *)this + 1);
  if ( HIDWORD(v13) == *((_DWORD *)this + 2) )
  {
    LODWORD(v13) = this;
    std::vector<Ogre::PhysicsScene::CollideData *>::_M_insert_aux(v13, &v24);
  }
  else
  {
    if ( HIDWORD(v13) != 0 )
      *(_DWORD *)HIDWORD(v13) = v24;
    *((_DWORD *)this + 1) += 4;
  }
  return v24;
}

