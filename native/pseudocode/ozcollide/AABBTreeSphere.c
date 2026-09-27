// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::AABBTreeSphere

//======================================================================
// ozcollide::AABBTreeSphere::getMemoryConsumption(void)const
// address: 0x001CFF34   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeSphere::getMemoryConsumption(ozcollide::AABBTreeSphere *this)
{
  return 32 * *((_DWORD *)this + 1) + 44 * *((_DWORD *)this + 3) + 220;
}


//======================================================================
// ozcollide::AABBTreeSphere::saveBinary(ozcollide::DataOut &)
// address: 0x001CFF44   size: 0x21C (540 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeSphere::saveBinary(ozcollide::AABBTreeSphere *this, ozcollide::DataOut *a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // r7
  int v7; // r7
  int v8; // r7
  int v9; // r0
  int v10; // r2
  int v11; // r7
  int v12; // r6
  int v13; // r7
  int v14; // r7
  int v15; // r7
  int v16; // r7
  int v17; // r7
  int v18; // r0
  int v19; // r3
  int v20; // r7
  int v21; // r6
  int v22; // r1
  ozcollide::DataOut *v23; // r0
  int v24; // r7
  int v25; // r1
  ozcollide::DataOut *v26; // r0
  int v27; // r7
  int v28; // r6
  float *v29; // r7
  int v31; // [sp+0h] [bp-24h]
  int v32; // [sp+4h] [bp-20h]
  int v33; // [sp+4h] [bp-20h]
  int j; // [sp+4h] [bp-20h]
  int v35; // [sp+8h] [bp-1Ch]
  int i; // [sp+8h] [bp-1Ch]
  int v37; // [sp+Ch] [bp-18h]
  int v38; // [sp+10h] [bp-14h]
  int v39; // [sp+14h] [bp-10h]
  int v40; // [sp+18h] [bp-Ch]
  int v41; // [sp+1Ch] [bp-8h]

  ozcollide::DataOut::writeStr(a2, "AABB");
  v38 = ozcollide::DataOut::tell(a2);
  ozcollide::DataOut::advance(a2, 4);
  v4 = ozcollide::DataOut::writeByte(a2, 1);
  v35 = *((_DWORD *)this + 1);
  v37 = *((_DWORD *)this + 3);
  v5 = v4 + ozcollide::DataOut::writeByte(a2, *((_DWORD *)this + 8));
  v6 = v5 + ozcollide::DataOut::writeDword(a2, v35);
  v7 = v6 + ozcollide::DataOut::writeDword(a2, v37);
  v8 = v7 + ozcollide::DataOut::writeStr(a2, "NODS");
  v9 = ozcollide::DataOut::writeDword(a2, 32 * v35);
  v10 = 0;
  v11 = v8 + v9;
  while ( 1 )
  {
    v32 = v10;
    if ( v10 >= v35 )
      break;
    v12 = *((_DWORD *)this + 2) + 32 * v10;
    v13 = v11 + ozcollide::DataOut::writeFloat(a2, *(float *)v12);
    v14 = v13 + ozcollide::DataOut::writeFloat(a2, *(float *)(v12 + 4));
    v15 = v14 + ozcollide::DataOut::writeFloat(a2, *(float *)(v12 + 8));
    v16 = v15 + ozcollide::DataOut::writeFloat(a2, *(float *)(v12 + 12));
    v17 = v16 + ozcollide::DataOut::writeFloat(a2, *(float *)(v12 + 16));
    v18 = ozcollide::DataOut::writeFloat(a2, *(float *)(v12 + 20));
    v19 = *(_DWORD *)(v12 + 24);
    v20 = v17 + v18;
    v21 = *(_DWORD *)(v12 + 28);
    if ( v19 != 0 )
    {
      v22 = (v19 - *((_DWORD *)this + 2)) >> 5;
      if ( v22 < 0 || v22 >= v35 )
        v22 = (-1171354717 * ((v19 - *((_DWORD *)this + 9)) >> 2)) | 0x80000000;
      v23 = a2;
    }
    else
    {
      v23 = a2;
      v22 = -1;
    }
    v24 = v20 + ozcollide::DataOut::writeDword(v23, v22);
    if ( v21 != 0 )
    {
      v25 = (v21 - *((_DWORD *)this + 2)) >> 5;
      if ( v25 < 0 || v25 >= v35 )
        v25 = (-1171354717 * ((v21 - *((_DWORD *)this + 9)) >> 2)) | 0x80000000;
      v26 = a2;
    }
    else
    {
      v26 = a2;
      v25 = -1;
    }
    v11 = v24 + ozcollide::DataOut::writeDword(v26, v25);
    v10 = v32 + 1;
  }
  v33 = v11 + ozcollide::DataOut::writeStr(a2, "LEFS");
  v27 = 0;
  v39 = ozcollide::DataOut::tell(a2);
  ozcollide::DataOut::advance(a2, 4);
  for ( i = 0; i < v37; ++i )
  {
    v28 = *((_DWORD *)this + 9) + 44 * i;
    ozcollide::DataOut::writeFloat(a2, *(float *)v28);
    ozcollide::DataOut::writeFloat(a2, *(float *)(v28 + 4));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v28 + 8));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v28 + 12));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v28 + 16));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v28 + 20));
    ozcollide::DataOut::writeDword(a2, *(_DWORD *)(v28 + 32));
    v40 = v33 + 28;
    v41 = v27 + 28;
    v31 = *(_DWORD *)(v28 + 32);
    for ( j = 0; j < v31; ++j )
    {
      v29 = (float *)(*(_DWORD *)(v28 + 36) + 16 * j);
      ozcollide::DataOut::writeFloat(a2, *v29);
      ozcollide::DataOut::writeFloat(a2, v29[1]);
      ozcollide::DataOut::writeFloat(a2, v29[2]);
      ozcollide::DataOut::writeFloat(a2, v29[3]);
    }
    v33 = v40 + 16 * v31;
    v27 = v41 + 16 * v31;
  }
  ozcollide::DataOut::seek(a2, v39);
  ozcollide::DataOut::writeDword(a2, v27);
  ozcollide::DataOut::seek(a2, v38);
  ozcollide::DataOut::writeDword(a2, v33);
  return 0;
}


//======================================================================
// ozcollide::AABBTreeSphere::~AABBTreeSphere()
// address: 0x001D0170   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide14AABBTreeSphereD1Ev'
void __fastcall ozcollide::AABBTreeSphere::~AABBTreeSphere(ozcollide::AABBTreeSphere *this)
{
  *(_DWORD *)this = &off_4596A8;
  ozcollide::AABBTree::~AABBTree(this);
}


//======================================================================
// ozcollide::AABBTreeSphere::~AABBTreeSphere()
// address: 0x001D018C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ozcollide::AABBTreeSphere::~AABBTreeSphere(ozcollide::AABBTreeSphere *this)
{
  ozcollide::AABBTreeSphere::~AABBTreeSphere(this);
  operator delete(this);
}


//======================================================================
// ozcollide::AABBTreeSphere::scale(float)
// address: 0x001D019E   size: 0xB8 (184 bytes)
//======================================================================
__int64 __fastcall ozcollide::AABBTreeSphere::scale(ozcollide::AABBTreeSphere *this, float a2)
{
  int i; // r7
  float *v3; // r5
  int j; // r2
  int v5; // r7
  float *v6; // r5
  __int64 v8; // [sp+0h] [bp-Ch]

  *((float *)&v8 + 1) = a2;
  for ( i = 0; i < *((_DWORD *)this + 1); ++i )
  {
    v3 = (float *)(*((_DWORD *)this + 2) + 32 * i);
    *v3 = *v3 * a2;
    v3[1] = v3[1] * a2;
    v3[2] = v3[2] * a2;
    v3[3] = v3[3] * a2;
    v3[4] = v3[4] * a2;
    v3[5] = v3[5] * a2;
  }
  for ( j = 0; ; ++j )
  {
    LODWORD(v8) = j;
    if ( j >= *((_DWORD *)this + 3) )
      break;
    HIDWORD(v8) = 0;
    v5 = *((_DWORD *)this + 9) + 44 * j;
    while ( SHIDWORD(v8) < *(_DWORD *)(v5 + 32) )
    {
      v6 = (float *)(*(_DWORD *)(v5 + 36) + 16 * HIDWORD(v8));
      *v6 = *v6 * a2;
      v6[1] = v6[1] * a2;
      v6[2] = v6[2] * a2;
      v6[3] = v6[3] * a2;
      ++HIDWORD(v8);
    }
  }
  return v8;
}


//======================================================================
// ozcollide::AABBTreeSphere::readNODSchunk(ozcollide::DataIn &,int,int)
// address: 0x001D02E8   size: 0x9E (158 bytes)
//======================================================================
unsigned __int64 __fastcall ozcollide::AABBTreeSphere::readNODSchunk(
        ozcollide::AABBTreeSphere *this,
        ozcollide::DataIn *a2,
        int a3,
        unsigned int a4)
{
  int i; // r7
  _DWORD *v7; // r4
  int Dword; // r0
  int v9; // r3
  unsigned int v10; // r3
  int v11; // r3
  int v12; // r2
  int v13; // r3
  unsigned int v14; // r3
  int v15; // r3
  int v16; // r2
  unsigned __int64 v18; // [sp+0h] [bp-Ch]

  v18 = __PAIR64__(a4, (unsigned int)this);
  for ( i = 0; i < SHIDWORD(v18); ++i )
  {
    v7 = (_DWORD *)(*((_DWORD *)this + 2) + 32 * i);
    *v7 = ozcollide::DataIn::readFloat(a2);
    v7[1] = ozcollide::DataIn::readFloat(a2);
    v7[2] = ozcollide::DataIn::readFloat(a2);
    v7[3] = ozcollide::DataIn::readFloat(a2);
    v7[4] = ozcollide::DataIn::readFloat(a2);
    v7[5] = ozcollide::DataIn::readFloat(a2);
    LODWORD(v18) = ozcollide::DataIn::readDword(a2);
    Dword = ozcollide::DataIn::readDword(a2);
    if ( (_DWORD)v18 == -1 )
    {
      v9 = 0;
    }
    else
    {
      v10 = (unsigned int)(2 * v18) >> 1;
      if ( (v18 & 0x80000000) == 0LL )
      {
        v12 = *((_DWORD *)this + 2);
        v11 = 32 * v10;
      }
      else
      {
        v11 = 44 * v10;
        v12 = *((_DWORD *)this + 9);
      }
      v9 = v12 + v11;
    }
    v7[6] = v9;
    if ( Dword == -1 )
    {
      v13 = 0;
    }
    else
    {
      v14 = (unsigned int)(2 * Dword) >> 1;
      if ( Dword >= 0 )
      {
        v16 = *((_DWORD *)this + 2);
        v15 = 32 * v14;
      }
      else
      {
        v15 = 44 * v14;
        v16 = *((_DWORD *)this + 9);
      }
      v13 = v16 + v15;
    }
    v7[7] = v13;
  }
  return v18;
}


//======================================================================
// ozcollide::AABBTreeSphere::readLEFSchunk(ozcollide::DataIn &,int,int)
// address: 0x001D0386   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeSphere::readLEFSchunk(int this, ozcollide::DataIn *a2, int a3, int a4)
{
  int v4; // r7
  _DWORD *v6; // r5
  unsigned int Dword; // r6
  unsigned int v8; // r0
  signed int v9; // r3
  signed int v10; // [sp+0h] [bp-14h]
  _DWORD *v11; // [sp+4h] [bp-10h]
  int i; // [sp+8h] [bp-Ch]

  v4 = this;
  for ( i = 0; i < a4; ++i )
  {
    v6 = (_DWORD *)(*(_DWORD *)(v4 + 36) + 44 * i);
    *v6 = ozcollide::DataIn::readFloat(a2);
    v6[1] = ozcollide::DataIn::readFloat(a2);
    v6[2] = ozcollide::DataIn::readFloat(a2);
    v6[3] = ozcollide::DataIn::readFloat(a2);
    v6[4] = ozcollide::DataIn::readFloat(a2);
    v6[5] = ozcollide::DataIn::readFloat(a2);
    v6[6] = 0;
    v6[7] = 0;
    Dword = ozcollide::DataIn::readDword(a2);
    v6[8] = Dword;
    v8 = 16 * Dword;
    if ( Dword > 0x7F00000 )
      v8 = -1;
    this = operator new[](v8);
    v9 = 0;
    v6[9] = this;
    while ( 1 )
    {
      v10 = v9;
      if ( v9 >= (int)Dword )
        break;
      v11 = (_DWORD *)(v6[9] + 16 * v9);
      *v11 = ozcollide::DataIn::readFloat(a2);
      v11[1] = ozcollide::DataIn::readFloat(a2);
      v11[2] = ozcollide::DataIn::readFloat(a2);
      this = ozcollide::DataIn::readFloat(a2);
      v11[3] = this;
      v9 = v10 + 1;
    }
  }
  return this;
}


//======================================================================
// ozcollide::AABBTreeSphere::AABBTreeSphere(int)
// address: 0x001D0448   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide14AABBTreeSphereC1Ei'
ozcollide::AABBTreeSphere *__fastcall ozcollide::AABBTreeSphere::AABBTreeSphere(
        ozcollide::AABBTreeSphere *this,
        int a2)
{
  ozcollide::AABBTreeSphere *v3; // r5
  char *v4; // r6
  ozcollide::Plane *v5; // r0
  int v6; // r3
  char *v7; // r1

  ozcollide::AABBTree::AABBTree(this, 1, a2);
  v3 = (ozcollide::AABBTreeSphere *)((char *)this + 120);
  *(_DWORD *)this = &off_4596A8;
  v4 = (char *)this + 120;
  do
  {
    v5 = v3;
    v3 = (ozcollide::AABBTreeSphere *)((char *)v3 + 16);
    ozcollide::Plane::Plane(v5);
  }
  while ( v3 != (ozcollide::AABBTreeSphere *)((char *)this + 216) );
  v6 = 0;
  do
  {
    *(_DWORD *)&v4[v6] = 0;
    v7 = &v4[v6];
    v6 += 16;
    *((_DWORD *)v7 + 1) = 0;
    *((_DWORD *)v7 + 2) = 0;
    *((_DWORD *)v7 + 3) = 0;
  }
  while ( v6 != 96 );
  return this;
}


//======================================================================
// ozcollide::AABBTreeSphere::loadBinary(ozcollide::DataIn &,ozcollide::AABBTreeSphere**)
// address: 0x001D0490   size: 0x154 (340 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeSphere::loadBinary(
        ozcollide::AABBTreeSphere *this,
        ozcollide::DataIn *a2,
        ozcollide::AABBTreeSphere **a3)
{
  int Byte; // r6
  ozcollide::AABBTreeSphere *v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r6
  unsigned int v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  unsigned int v12; // r6
  _DWORD *v13; // r2
  unsigned int v14; // r6
  unsigned int v15; // r0
  _DWORD *v16; // r0
  int v17; // r7
  int v18; // r6
  int Dword; // [sp+4h] [bp-18h]
  int v20; // [sp+8h] [bp-14h]
  _BYTE v22[4]; // [sp+10h] [bp-Ch] BYREF
  _BYTE v23[8]; // [sp+14h] [bp-8h] BYREF

  ozcollide::DataIn::read(this, v22, 4);
  if ( (v22[3] << 24) + (v22[2] << 16) + (v22[1] << 8) + v22[0] != 1111638337 )
    return 18;
  Dword = ozcollide::DataIn::readDword(this);
  if ( ozcollide::DataIn::readByte(this) != 1 )
    return 18;
  Byte = ozcollide::DataIn::readByte(this);
  v6 = (ozcollide::AABBTreeSphere *)operator new(0xDCu);
  ozcollide::AABBTreeSphere::AABBTreeSphere(v6, Byte);
  *((_DWORD *)v6 + 1) = ozcollide::DataIn::readDword(this);
  v7 = ozcollide::DataIn::readDword(this);
  v8 = v7;
  *((_DWORD *)v6 + 3) = v7;
  if ( v7 > 0x2E80000 )
    v9 = -1;
  else
    v9 = 44 * v7 + 8;
  v10 = (_DWORD *)operator new[](v9);
  *v10 = 44;
  v10[1] = v8;
  v11 = v10 + 2;
  v12 = v8 - 1;
  v13 = v11;
  while ( --v12 != -2 )
  {
    v11[8] = 0;
    v11[9] = 0;
    v11[10] = 0;
    v11 += 11;
  }
  v14 = *((_DWORD *)v6 + 1);
  *((_DWORD *)v6 + 9) = v13;
  if ( v14 > 0x3F80000 )
    v15 = -1;
  else
    v15 = 32 * v14 + 8;
  v16 = (_DWORD *)operator new[](v15);
  *v16 = 32;
  v16[1] = v14;
  *((_DWORD *)v6 + 2) = v16 + 2;
  while ( Dword > 8 )
  {
    ozcollide::DataIn::read(this, v23, 4);
    v17 = (v23[3] << 24) + (v23[2] << 16) + (v23[1] << 8) + v23[0];
    v18 = ozcollide::DataIn::readDword(this);
    v20 = ozcollide::DataIn::tell(this);
    if ( v17 == 1396985678 )
    {
      ozcollide::AABBTreeSphere::readNODSchunk(v6, this, v18, *((_DWORD *)v6 + 1));
    }
    else if ( v17 == 1397114188 )
    {
      ozcollide::AABBTreeSphere::readLEFSchunk((int)v6, this, v18, *((_DWORD *)v6 + 3));
    }
    else
    {
      ozcollide::DataIn::advance(this, v18);
    }
    if ( ozcollide::DataIn::tell(this) - v20 != v18 )
      ozcollide::DataIn::seek(this, v20 + v18);
    Dword = Dword - v18 - 8;
  }
  *(_DWORD *)a2 = v6;
  return 0;
}


//======================================================================
// ozcollide::AABBTreeSphere::isCollideWithBox(ozcollide::AABBTreeNode const&)
// address: 0x001D05F0   size: 0x54 (84 bytes)
//======================================================================
bool __fastcall ozcollide::AABBTreeSphere::isCollideWithBox(const Box *a1, int a2)
{
  const ozcollide::Vec3f *v4; // r6
  int v5; // r2
  _DWORD *p_x1; // r5
  ozcollide::Vec3f *v8; // r3

  while ( 1 )
  {
    v4 = (const ozcollide::Vec3f *)&a1[7];
    if ( !ozcollide::Box::isOverlap((ozcollide::Box *)a2, a1 + 7) )
      return false;
    if ( *(_DWORD *)(a2 + 24) == 0 )
      break;
    if ( ozcollide::AABBTreeSphere::isCollideWithBox(a1) != 0 )
      return true;
LABEL_5:
    a2 = *(_DWORD *)(a2 + 28);
    if ( a2 == 0 )
      return false;
  }
  if ( *(_DWORD *)(a2 + 28) != 0 )
    goto LABEL_5;
  if ( *(int *)(a2 + 32) <= 0 )
    return false;
  p_x1 = &a1[27].x1;
  v8 = (ozcollide::Vec3f *)(*p_x1 + 1);
  *p_x1 = v8;
  return ozcollide::testIntersectionSphereBox(*(float **)(a2 + 36), v4, v5, v8);
}


//======================================================================
// ozcollide::AABBTreeSphere::isCollideWithBox(ozcollide::Box const&)
// address: 0x001D0644   size: 0x1C (28 bytes)
//======================================================================
bool __fastcall ozcollide::AABBTreeSphere::isCollideWithBox(ozcollide::AABBTreeSphere *this, const ozcollide::Box *a2)
{
  _DWORD *v2; // r1
  int v3; // r2
  int v4; // r4
  int v5; // r5
  int v6; // r4
  int v7; // r5

  *((_DWORD *)this + 54) = 0;
  v3 = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 2);
  v2 = (_DWORD *)((char *)a2 + 12);
  *((_DWORD *)this + 14) = v3;
  *((_DWORD *)this + 15) = v4;
  *((_DWORD *)this + 16) = v5;
  v6 = v2[1];
  v7 = v2[2];
  *((_DWORD *)this + 17) = *v2;
  *((_DWORD *)this + 18) = v6;
  *((_DWORD *)this + 19) = v7;
  return ozcollide::AABBTreeSphere::isCollideWithBox((const Box *)this, *((_DWORD *)this + 2));
}


//======================================================================
// ozcollide::AABBTreeSphere::collideWithBox(ozcollide::AABBTreeNode const&)
// address: 0x001D0660   size: 0x78 (120 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeSphere::collideWithBox(int a1, ozcollide::Box *a2)
{
  int result; // r0
  int v5; // r6
  float *v6; // r7
  int v7; // r2
  ozcollide::Vec3f *v8; // [sp+Ch] [bp-10h]
  int v9; // [sp+14h] [bp-8h]

  do
  {
    result = ozcollide::Box::isOverlap(a2, (const Box *)(a1 + 56));
    if ( result == 0 )
      break;
    if ( *((_DWORD *)a2 + 6) != 0 )
    {
      result = ozcollide::AABBTreeSphere::collideWithBox(a1);
    }
    else
    {
      v5 = *((_DWORD *)a2 + 7);
      if ( v5 == 0 )
      {
        v9 = *((_DWORD *)a2 + 8);
        while ( v5 < v9 )
        {
          ++*(_DWORD *)(a1 + 216);
          v6 = (float *)(*((_DWORD *)a2 + 9) + 16 * v5);
          v7 = *((_DWORD *)a2 + 10);
          v8 = *(ozcollide::Vec3f **)(4 * v5 + v7);
          result = ozcollide::testIntersectionSphereBox(v6, (const ozcollide::Vec3f *)(a1 + 56), v7, v8);
          if ( result != 0 )
            result = (*(int (__fastcall **)(int, float *, ozcollide::Vec3f *, ozcollide::Box *, _DWORD))(a1 + 48))(
                       a1,
                       v6,
                       v8,
                       a2,
                       *(_DWORD *)(a1 + 52));
          ++v5;
        }
        return result;
      }
    }
    a2 = *((ozcollide::Box **)a2 + 7);
  }
  while ( a2 != nullptr );
  return result;
}


//======================================================================
// ozcollide::AABBTreeSphere::collideWithFrustum(ozcollide::AABBTreeNode const&)
// address: 0x001D06D8   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeSphere::collideWithFrustum(_DWORD *a1, int a2)
{
  float v2; // r6
  float v5; // r3
  int result; // r0
  ozcollide::Box *v7; // r1
  int v8; // r3
  int v9; // r2
  int v10; // r6
  int v11; // r7
  int (__fastcall *v12)(_DWORD *, int, int, int, _DWORD); // r12
  ozcollide::Box *v13; // r1
  int v14; // [sp+Ch] [bp-20h]
  int v15; // [sp+10h] [bp-1Ch]
  int v16; // [sp+14h] [bp-18h]
  float v17[5]; // [sp+18h] [bp-14h] BYREF

  v2 = *(float *)(a2 + 12);
  if ( v2 <= *(float *)(a2 + 16) || v2 <= *(float *)(a2 + 20) )
  {
    v2 = *(float *)(a2 + 20);
    if ( *(float *)(a2 + 16) > v2 )
      v2 = *(float *)(a2 + 16);
  }
  v5 = *(float *)(a2 + 4);
  v17[0] = *(float *)a2;
  v17[1] = v5;
  v17[2] = *(float *)(a2 + 8);
  v17[3] = v2;
  v15 = (int)(a1 + 30);
  result = ozcollide::testIntersectionFrustumSphere((int)(a1 + 30), (int)v17);
  if ( result != 0 )
  {
    v7 = *(ozcollide::Box **)(a2 + 24);
    if ( v7 != nullptr )
    {
      result = ozcollide::AABBTreeSphere::collideWithBox((int)a1, v7);
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 28);
      if ( v8 == 0 )
      {
        v16 = *(_DWORD *)(a2 + 32);
        while ( 1 )
        {
          v14 = v8;
          if ( v8 >= v16 )
            break;
          ++a1[54];
          v9 = *(_DWORD *)(a2 + 36);
          v10 = *(_DWORD *)(a2 + 40);
          v11 = v9 + 16 * v8;
          if ( v10 != 0 )
            v10 = *(_DWORD *)(4 * v8 + v10);
          result = ozcollide::testIntersectionFrustumSphere(v15, v9 + 16 * v8);
          if ( result != 0 )
          {
            v12 = (int (__fastcall *)(_DWORD *, int, int, int, _DWORD))a1[12];
            if ( v12 != nullptr )
              result = v12(a1, v11, v10, a2, a1[13]);
          }
          v8 = v14 + 1;
        }
        return result;
      }
    }
    v13 = *(ozcollide::Box **)(a2 + 28);
    if ( v13 != nullptr )
      return ozcollide::AABBTreeSphere::collideWithBox((int)a1, v13);
  }
  return result;
}


//======================================================================
// ozcollide::AABBTreeSphere::collideWithFrustum(ozcollide::Frustum const&,void (*)(ozcollide::AABBTreeSphere const&,ozcollide::Sphere const&,int,ozcollide::Box const&,void *),void *)
// address: 0x001D07A0   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall ozcollide::AABBTreeSphere::collideWithFrustum(_DWORD *result, const void *a2, int a3, int a4)
{
  _DWORD *v4; // r4

  v4 = result;
  if ( a3 != 0 )
  {
    result[13] = a4;
    result[12] = a3;
    result[54] = 0;
    j_memcpy(result + 30, a2, 0x60u);
    return (_DWORD *)ozcollide::AABBTreeSphere::collideWithFrustum(v4, v4[2]);
  }
  return result;
}


//======================================================================
// ozcollide::AABBTreeSphere::collideWithBox(ozcollide::Box const&,void (*)(ozcollide::AABBTreeSphere const&,ozcollide::Sphere const&,int,ozcollide::Box const&,void *),void *)
// address: 0x001D07C6   size: 0x24 (36 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeSphere::collideWithBox(int result, int *a2, int a3, int a4)
{
  _DWORD *v4; // r1
  int v5; // r2
  int v6; // r4
  int v7; // r5
  int v8; // r4
  int v9; // r5

  if ( a3 != 0 )
  {
    *(_DWORD *)(result + 52) = a4;
    *(_DWORD *)(result + 48) = a3;
    *(_DWORD *)(result + 216) = 0;
    v5 = *a2;
    v6 = a2[1];
    v7 = a2[2];
    v4 = a2 + 3;
    *(_DWORD *)(result + 56) = v5;
    *(_DWORD *)(result + 60) = v6;
    *(_DWORD *)(result + 64) = v7;
    v8 = v4[1];
    v9 = v4[2];
    *(_DWORD *)(result + 68) = *v4;
    *(_DWORD *)(result + 72) = v8;
    *(_DWORD *)(result + 76) = v9;
    return ozcollide::AABBTreeSphere::collideWithBox(result, *(ozcollide::Box **)(result + 8));
  }
  return result;
}


//======================================================================
// ozcollide::AABBTreeSphere::loadBinary(char const*,ozcollide::AABBTreeSphere**)
// address: 0x001D07EA   size: 0x3C (60 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeSphere::loadBinary(
        ozcollide::AABBTreeSphere *this,
        ozcollide::DataIn *a2,
        ozcollide::AABBTreeSphere **a3)
{
  int v5; // r0
  ozcollide::AABBTreeSphere **v6; // r2
  int Binary; // r5
  _BYTE v9[28]; // [sp+4h] [bp-1Ch] BYREF

  ozcollide::DataIn::DataIn((ozcollide::DataIn *)v9);
  v5 = ozcollide::DataIn::open((ozcollide::DataIn *)v9, (const char *)this);
  Binary = 17;
  if ( v5 != 0 )
  {
    Binary = ozcollide::AABBTreeSphere::loadBinary((ozcollide::AABBTreeSphere *)v9, a2, v6);
    if ( Binary == 0 )
      ozcollide::DataIn::close((ozcollide::DataIn *)v9);
  }
  ozcollide::DataIn::~DataIn((ozcollide::DataIn *)v9);
  return Binary;
}


//======================================================================
// ozcollide::AABBTreeSphere::saveBinary(char const*)
// address: 0x001D0826   size: 0x3A (58 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeSphere::saveBinary(ozcollide::AABBTreeSphere *this, const char *a2, int a3, int a4)
{
  int v6; // r0
  int v7; // r5
  _DWORD v9[4]; // [sp+0h] [bp-10h] BYREF

  v9[0] = this;
  v9[1] = a2;
  v9[2] = a3;
  v9[3] = a4;
  ozcollide::DataOut::DataOut((ozcollide::DataOut *)v9);
  v6 = ozcollide::DataOut::open((ozcollide::DataOut *)v9, a2);
  v7 = 17;
  if ( v6 != 0 )
  {
    v7 = (*(int (__fastcall **)(ozcollide::AABBTreeSphere *, _DWORD *))(*(_DWORD *)this + 12))(this, v9);
    if ( v7 == 0 )
      ozcollide::DataOut::close((ozcollide::DataOut *)v9);
  }
  ozcollide::DataOut::~DataOut((ozcollide::DataOut *)v9);
  return v7;
}

