// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PhysicsScene2

//======================================================================
// Ogre::PhysicsScene2::PhysicsScene2(void)
// address: 0x0016F688   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13PhysicsScene2C2Ev'
_DWORD *__fastcall Ogre::PhysicsScene2::PhysicsScene2(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *this = 0;
  return this;
}


//======================================================================
// Ogre::PhysicsScene2::calAABBTree(void)
// address: 0x0016F69C   size: 0x40 (64 bytes)
//======================================================================
void __fastcall Ogre::PhysicsScene2::calAABBTree(Ogre::PhysicsScene2 *this)
{
  _BYTE v2[16]; // [sp+10h] [bp-10h] BYREF

  ozcollide::AABBTreePolyBuilder::AABBTreePolyBuilder((ozcollide::AABBTreePolyBuilder *)v2);
  if ( (*((_DWORD *)this + 5) - *((_DWORD *)this + 4)) >> 5 != 0 )
    *(_DWORD *)this = ozcollide::AABBTreePolyBuilder::buildFromPolys(v2);
  ozcollide::AABBTreePolyBuilder::~AABBTreePolyBuilder((ozcollide::AABBTreePolyBuilder *)v2);
}


//======================================================================
// Ogre::PhysicsScene2::saveData(Ogre::FixedString const&)
// address: 0x0016F6E0   size: 0x46 (70 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::PhysicsScene2::saveData(Ogre::PhysicsScene2 *this, char **a2)
{
  int v3; // [sp+0h] [bp-8h] BYREF
  _BYTE v4[4]; // [sp+4h] [bp-4h] BYREF

  sub_3BF0BC((int)&v3, *a2);
  sub_3BEB1C(v4, &v3);
  sub_3BE948((int)v4, "collide.abt");
  sub_3BEBBC(&v3);
  sub_3BDF80(v4);
  if ( *(_DWORD *)this != 0 )
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)this + 8))(*(_DWORD *)this, v3);
  sub_3BDF80(&v3);
}


//======================================================================
// Ogre::PhysicsScene2::pick(Ogre::Ray const&,float *,Ogre::Vector3 *)
// address: 0x0016F8C0   size: 0x17A (378 bytes)
//======================================================================
int __fastcall Ogre::PhysicsScene2::pick(
        ozcollide::AABBTreePoly **this,
        const Ogre::Ray *a2,
        float *a3,
        Ogre::Vector3 *a4)
{
  float v4; // r6
  float v5; // r7
  float v6; // r0
  float v7; // r7
  ozcollide::AABBTreePoly *v8; // r0
  int v9; // r4
  float v10; // r6
  int v11; // r7
  _DWORD *v12; // r5
  _DWORD *v13; // r4
  int PointsList; // r0
  ozcollide::Vec3f *v16; // [sp+8h] [bp-84h]
  float v18; // [sp+1Ch] [bp-70h]
  float v19; // [sp+20h] [bp-6Ch]
  float v20; // [sp+20h] [bp-6Ch]
  float v24; // [sp+34h] [bp-58h] BYREF
  float v25; // [sp+38h] [bp-54h]
  float v26; // [sp+3Ch] [bp-50h]
  float v27[3]; // [sp+40h] [bp-4Ch] BYREF
  float v28[3]; // [sp+4Ch] [bp-40h] BYREF
  _DWORD *v29; // [sp+58h] [bp-34h] BYREF
  int v30; // [sp+5Ch] [bp-30h]
  int v31; // [sp+60h] [bp-2Ch]
  _BYTE v32[12]; // [sp+64h] [bp-28h] BYREF
  _BYTE v33[12]; // [sp+70h] [bp-1Ch] BYREF
  _BYTE v34[16]; // [sp+7Ch] [bp-10h] BYREF

  v4 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 1);
  v18 = *(float *)a2;
  v6 = *((float *)a2 + 4);
  v30 = 0;
  v31 = 0;
  memset(v32, 0, sizeof(v32));
  v26 = v4;
  v24 = v18;
  v25 = v5;
  v29 = nullptr;
  v19 = v5 + (float)(v6 * 300000.0);
  v7 = v4 + (float)(*((float *)a2 + 5) * 300000.0);
  v27[0] = v18 + (float)(*((float *)a2 + 3) * 300000.0);
  v8 = *this;
  v27[1] = v19;
  v27[2] = v7;
  if ( v8 == nullptr )
    goto LABEL_2;
  ozcollide::AABBTreePoly::collideWithSegment(v8, &v24, v27, &v29);
  if ( v30 <= 0 )
    goto LABEL_2;
  v10 = 3.4028e38;
  v11 = 0;
  v12 = (_DWORD *)*v29;
  while ( v11 < v30 )
  {
    v13 = (_DWORD *)v29[v11];
    PointsList = ozcollide::AABBTreePoly::getPointsList(*this);
    ozcollide::testIntersectionSegmentTri(
      (ozcollide *)v33,
      (const ozcollide::Vec3f *)v34,
      (const ozcollide::Vec3f *)(PointsList + 12 * v13[1]),
      (const ozcollide::Vec3f *)(PointsList + 12 * v13[2]),
      (const ozcollide::Vec3f *)(PointsList + 12 * v13[3]),
      (const ozcollide::Vec3f *)v28,
      v16);
    if ( a3 != nullptr )
    {
      v20 = (float)((float)(v28[0] - v24) * *((float *)a2 + 3)) + (float)((float)(v28[1] - v25) * *((float *)a2 + 4));
      if ( (float)(v20 + (float)((float)(v28[2] - v26) * *((float *)a2 + 5))) < v10 )
      {
        v10 = v20 + (float)((float)(v28[2] - v26) * *((float *)a2 + 5));
        v12 = (_DWORD *)v29[v11];
      }
    }
    ++v11;
  }
  if ( v10 < 3.4028e38 )
  {
    *a3 = v10;
    if ( a4 != nullptr )
    {
      *(_DWORD *)a4 = v12[5];
      *((_DWORD *)a4 + 1) = v12[6];
      *((_DWORD *)a4 + 2) = v12[7];
    }
    v9 = 1;
  }
  else
  {
LABEL_2:
    v9 = 0;
  }
  ozcollide::Vector<int>::clear((int)v32);
  ozcollide::Vector<ozcollide::Polygon const*>::clear((int)&v29);
  return v9;
}


//======================================================================
// Ogre::PhysicsScene2::buildDecalMesh(Ogre::BoxSphereBound const&,Ogre::Vector3 *,unsigned short *,int,int,int &,int &)
// address: 0x0016FA44   size: 0x1A8 (424 bytes)
//======================================================================
void __fastcall Ogre::PhysicsScene2::buildDecalMesh(
        ozcollide::AABBTreePoly **this,
        const Ogre::BoxSphereBound *a2,
        Ogre::Vector3 *a3,
        unsigned __int16 *a4,
        __int16 a5,
        int a6,
        int *a7,
        int *a8)
{
  unsigned int v9; // r4
  _DWORD *v10; // r5
  int v11; // r6
  float *v12; // r6
  float v13; // r4
  float v14; // r0
  int v15; // r6
  float *v16; // r6
  float v17; // r4
  float v18; // r0
  float *v19; // r4
  float v20; // r0
  float v21; // r5
  unsigned int v23; // [sp+20h] [bp-84h]
  int PointsList; // [sp+24h] [bp-80h]
  float v27[3]; // [sp+34h] [bp-70h] BYREF
  float v28[3]; // [sp+40h] [bp-64h] BYREF
  float v29[3]; // [sp+4Ch] [bp-58h] BYREF
  _DWORD v30[3]; // [sp+58h] [bp-4Ch] BYREF
  _DWORD v31[3]; // [sp+64h] [bp-40h] BYREF
  int v32; // [sp+70h] [bp-34h] BYREF
  unsigned int v33; // [sp+74h] [bp-30h]
  int v34; // [sp+78h] [bp-2Ch]
  _DWORD v35[10]; // [sp+7Ch] [bp-28h] BYREF

  v9 = 0;
  *a8 = 0;
  *a7 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  memset(v35, 0, 12);
  Ogre::Vector3_to_Vec3f(v30, a2);
  Ogre::Vector3_to_Vec3f(v31, (_DWORD *)a2 + 3);
  if ( *this != nullptr )
  {
    ozcollide::AABBTreePoly::collideWithBox(*this, v30, &v32);
    PointsList = ozcollide::AABBTreePoly::getPointsList(*this);
    while ( 1 )
    {
      v23 = v9;
      if ( v9 >= v33 || *a8 >= a6 )
        break;
      v10 = *(_DWORD **)(4 * v9 + v32);
      Ogre::Vec3f_to_Vector3(v27, (_DWORD *)(PointsList + 12 * v10[1]));
      Ogre::Vec3f_to_Vector3(v28, (_DWORD *)(PointsList + 12 * v10[2]));
      Ogre::Vec3f_to_Vector3(v29, (_DWORD *)(PointsList + 12 * v10[3]));
      v11 = 12 * (*a7)++;
      v12 = (float *)((char *)a3 + v11);
      v13 = v27[2] + 0.0;
      v14 = v27[0] + 0.0;
      v12[1] = v27[1] + 0.5;
      *v12 = v14;
      v12[2] = v13;
      v15 = (*a7)++;
      v16 = (float *)((char *)a3 + 12 * v15);
      v17 = v28[2] + 0.0;
      v18 = v28[0] + 0.0;
      v16[1] = v28[1] + 0.5;
      *v16 = v18;
      v16[2] = v17;
      v19 = (float *)((char *)a3 + 12 * *a7);
      v20 = v29[1];
      ++*a7;
      v21 = v29[2] + 0.0;
      *v19 = v29[0] + 0.0;
      v19[1] = v20 + 0.5;
      v19[2] = v21;
      a4[3 * *a8] = *a7 + a5 - 3;
      a4[3 * *a8 + 1] = *a7 + a5 - 2;
      a4[3 * (*a8)++ + 2] = *a7 + a5 - 1;
      v9 = v23 + 1;
    }
  }
  ozcollide::Vector<int>::clear((int)v35);
  ozcollide::Vector<ozcollide::Polygon const*>::clear((int)&v32);
}


//======================================================================
// Ogre::PhysicsScene2::reset(void)
// address: 0x0016FC02   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::PhysicsScene2::reset(Ogre::PhysicsScene2 *this)
{
  ozcollide::Polygon *v1; // r5

  v1 = *((ozcollide::Polygon **)this + 4);
  *((_DWORD *)this + 2) = *((_DWORD *)this + 1);
  std::_Destroy_aux<false>::__destroy<ozcollide::Polygon *>(v1, *((ozcollide::Polygon **)this + 5));
  *((_DWORD *)this + 5) = v1;
  return ozcollide::AABBTree::destroy(*(ozcollide::AABBTree **)this);
}


//======================================================================
// Ogre::PhysicsScene2::addStaticBSPData(Ogre::BSPData *,Ogre::Matrix4 const&)
// address: 0x0016FD94   size: 0x24A (586 bytes)
//======================================================================
int __fastcall Ogre::PhysicsScene2::addStaticBSPData(
        Ogre::PhysicsScene2 *this,
        Ogre::BSPData *a2,
        const Ogre::Matrix4 *a3)
{
  unsigned int i; // r4
  int v6; // r3
  __int64 v7; // r0
  int j; // r3
  int v9; // r2
  int v10; // r1
  float *v11; // r4
  float *v12; // r5
  float v13; // r5
  float *v14; // r4
  float v15; // r4
  float v16; // r5
  float v17; // r0
  int v18; // r1
  int v19; // r5
  __int64 v20; // r4
  float *v21; // r3
  int v22; // r1
  int v24; // [sp+Ch] [bp-60h]
  float v25; // [sp+Ch] [bp-60h]
  float v26; // [sp+10h] [bp-5Ch]
  float v27; // [sp+10h] [bp-5Ch]
  Ogre::Vector3 *v29; // [sp+14h] [bp-58h]
  float v30; // [sp+18h] [bp-54h]
  float v31; // [sp+18h] [bp-54h]
  int v32; // [sp+1Ch] [bp-50h]
  float v33; // [sp+20h] [bp-4Ch]
  float v34; // [sp+24h] [bp-48h]
  float v35; // [sp+28h] [bp-44h]
  float v36; // [sp+2Ch] [bp-40h]
  unsigned int v37; // [sp+30h] [bp-3Ch]
  int v38; // [sp+34h] [bp-38h]
  float v39[3]; // [sp+3Ch] [bp-30h] BYREF
  __int128 v40; // [sp+48h] [bp-24h] BYREF
  int v41; // [sp+58h] [bp-14h]
  float v42; // [sp+5Ch] [bp-10h]
  float v43; // [sp+60h] [bp-Ch]
  float v44; // [sp+64h] [bp-8h]

  v38 = -1431655765 * ((*((_DWORD *)this + 2) - *((_DWORD *)this + 1)) >> 2);
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)a2 + 4);
    if ( i >= -1431655765 * ((*((_DWORD *)a2 + 5) - v6) >> 2) )
      break;
    Ogre::Matrix4::transformCoord(v39, a3, (float *)(v6 + 12 * i));
    HIDWORD(v7) = *((_DWORD *)this + 2);
    LODWORD(v7) = *((_DWORD *)this + 3);
    qmemcpy(&v40, v39, 12);
    if ( HIDWORD(v7) == (_DWORD)v7 )
    {
      LODWORD(v7) = (char *)this + 4;
      std::vector<ozcollide::Vec3f>::_M_insert_aux(v7, (int *)&v40);
    }
    else
    {
      if ( HIDWORD(v7) != 0 )
      {
        *(_QWORD *)HIDWORD(v7) = v40;
        *(_DWORD *)(HIDWORD(v7) + 8) = DWORD2(v40);
      }
      *((_DWORD *)this + 2) += 12;
    }
  }
  v32 = 0;
  v37 = (unsigned int)((*((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 7)) >> 1) >> 2;
  while ( v32 != v37 )
  {
    ozcollide::Polygon::Polygon((ozcollide::Polygon *)&v40);
    v29 = (Ogre::Vector3 *)operator new[](0xCu);
    for ( j = 0; j != 6; j += 2 )
    {
      v9 = 2 * j;
      v10 = *(unsigned __int16 *)(*((_DWORD *)a2 + 7) + 8 * v32 + j);
      *(_DWORD *)((char *)v29 + v9) = v10 + v38;
    }
    v24 = *((_DWORD *)this + 1);
    v11 = (float *)(v24 + 12 * *((_DWORD *)v29 + 2));
    v12 = (float *)(v24 + 12 * *(_DWORD *)v29);
    v26 = *v12;
    v34 = *v11 - *v12;
    v30 = v12[1];
    v13 = v12[2];
    v35 = v11[1] - v30;
    v36 = v11[2] - v13;
    v14 = (float *)(v24 + 12 * *((_DWORD *)v29 + 1));
    v33 = *v14 - v26;
    v31 = v14[1] - v30;
    v15 = v14[2] - v13;
    v25 = (float)(v35 * v15) - (float)(v36 * v31);
    v27 = (float)(v36 * v33) - (float)(v34 * v15);
    v16 = (float)(v34 * v31) - (float)(v35 * v33);
    v17 = j_sqrt((float)((float)((float)(v25 * v25) + (float)(v27 * v27)) + (float)(v16 * v16)));
    if ( v17 != 0.0 )
    {
      v25 = v25 * (float)(1.0 / v17);
      v27 = v27 * (float)(1.0 / v17);
      v16 = v16 * (float)(1.0 / v17);
    }
    LODWORD(v40) = 3;
    j_memcpy((char *)&v40 + 4, v29, 0xCu);
    v44 = v16;
    v18 = *((_DWORD *)this + 5);
    v42 = v25;
    v19 = *((_DWORD *)this + 6);
    v43 = v27;
    if ( v18 == v19 )
    {
      std::vector<ozcollide::Polygon>::_M_insert_aux((int)this + 16, (char *)v18, (int *)&v40);
    }
    else
    {
      if ( v18 != 0 )
      {
        v20 = *(_QWORD *)((char *)&v40 + 4);
        *(_DWORD *)v18 = v40;
        *(_QWORD *)(v18 + 4) = v20;
        v21 = (float *)(v18 + 12);
        v22 = v41;
        *(float *)&v20 = v42;
        *v21 = *((float *)&v40 + 3);
        *((_DWORD *)v21 + 1) = v22;
        *((_DWORD *)v21 + 2) = v20;
        v21 += 3;
        *((float *)&v20 + 1) = v44;
        *v21 = v43;
        v21[1] = *((float *)&v20 + 1);
      }
      *((_DWORD *)this + 5) += 32;
    }
    ozcollide::Polygon::~Polygon((ozcollide::Polygon *)&v40);
    ++v32;
  }
  return 0;
}


//======================================================================
// Ogre::PhysicsScene2::~PhysicsScene2()
// address: 0x0016FFE4   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13PhysicsScene2D2Ev'
void __fastcall Ogre::PhysicsScene2::~PhysicsScene2(Ogre::PhysicsScene2 *this)
{
  ozcollide::Polygon *v1; // r5
  ozcollide::AABBTree *v3; // r0
  ozcollide::Polygon *v4; // r0
  void *v5; // r0
  void *v6; // r0

  v1 = *((ozcollide::Polygon **)this + 4);
  *((_DWORD *)this + 2) = *((_DWORD *)this + 1);
  std::_Destroy_aux<false>::__destroy<ozcollide::Polygon *>(v1, *((ozcollide::Polygon **)this + 5));
  v3 = *(ozcollide::AABBTree **)this;
  *((_DWORD *)this + 5) = v1;
  ozcollide::AABBTree::destroy(v3);
  v4 = *((ozcollide::Polygon **)this + 4);
  *(_DWORD *)this = 0;
  std::_Destroy_aux<false>::__destroy<ozcollide::Polygon *>(v4, *((ozcollide::Polygon **)this + 5));
  v5 = *((void **)this + 4);
  if ( v5 != nullptr )
    operator delete(v5);
  v6 = *((void **)this + 1);
  if ( v6 != nullptr )
    operator delete(v6);
}


//======================================================================
// Ogre::PhysicsScene2::loadData(Ogre::FixedString const&)
// address: 0x001702F4   size: 0x94 (148 bytes)
//======================================================================
int __fastcall Ogre::PhysicsScene2::loadData(Ogre::PhysicsScene2 *this, char **a2)
{
  int v2; // r0
  int v3; // r5
  int v4; // r7
  void *v5; // r0
  ozcollide::AABBTreePoly **v6; // r2
  int Binary; // r7
  int v8; // r4
  char *v11; // [sp+8h] [bp-24h] BYREF
  _BYTE v12[32]; // [sp+Ch] [bp-20h] BYREF

  sub_3BF0BC((int)&v11, *a2);
  sub_3BEB1C(v12, &v11);
  sub_3BE948((int)v12, "collide.abt");
  sub_3BEBBC(&v11);
  sub_3BDF80(v12);
  v2 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, v11, 1);
  v3 = v2;
  if ( v2 != 0 )
  {
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 48))(v2);
    ozcollide::DataIn::DataIn((ozcollide::DataIn *)v12);
    v5 = (void *)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 56))(v3);
    ozcollide::DataIn::open((ozcollide::DataIn *)v12, v5, v4);
    Binary = ozcollide::AABBTreePoly::loadBinary((ozcollide::AABBTreePoly *)v12, this, v6);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    ozcollide::DataIn::~DataIn((ozcollide::DataIn *)v12);
    v8 = Binary;
  }
  else
  {
    v8 = -1;
  }
  sub_3BDF80(&v11);
  return v8;
}

