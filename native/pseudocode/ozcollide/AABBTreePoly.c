// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::AABBTreePoly

//======================================================================
// ozcollide::AABBTreePoly::getMemoryConsumption(void)const
// address: 0x001D1300   size: 0x1A (26 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::getMemoryConsumption(ozcollide::AABBTreePoly *this)
{
  return 44 * *((_DWORD *)this + 3) + 32 * *((_DWORD *)this + 1) + 12 * *((_DWORD *)this + 10) + 256;
}


//======================================================================
// ozcollide::AABBTreePoly::saveBinary(ozcollide::DataOut &)
// address: 0x001D131C   size: 0x2C2 (706 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::saveBinary(ozcollide::AABBTreePoly *this, ozcollide::DataOut *a2)
{
  int v4; // r6
  int i; // r3
  int v6; // r0
  int j; // r2
  int v8; // r1
  int v9; // r6
  int v10; // r7
  int k; // r7
  int v12; // r6
  int v13; // r3
  int v14; // r6
  int v15; // r1
  ozcollide::DataOut *v16; // r0
  int v17; // r1
  ozcollide::DataOut *v18; // r0
  int v19; // r7
  int v20; // r6
  int m; // r7
  int n; // r7
  int v23; // r5
  int v24; // r5
  int v26; // [sp+4h] [bp-20h]
  int v27; // [sp+4h] [bp-20h]
  int v28; // [sp+8h] [bp-1Ch]
  int v29; // [sp+8h] [bp-1Ch]
  unsigned __int8 *v30; // [sp+Ch] [bp-18h]
  int v31; // [sp+10h] [bp-14h]
  int v32; // [sp+14h] [bp-10h]
  int v33; // [sp+18h] [bp-Ch]
  int v34; // [sp+1Ch] [bp-8h]

  v4 = 0;
  ozcollide::DataOut::writeStr(a2, "AABB");
  v32 = ozcollide::DataOut::tell(a2);
  ozcollide::DataOut::advance(a2, 4);
  ozcollide::DataOut::writeByte(a2, 0);
  v28 = *((_DWORD *)this + 1);
  v31 = *((_DWORD *)this + 3);
  ozcollide::DataOut::writeByte(a2, *((_DWORD *)this + 8));
  ozcollide::DataOut::writeDword(a2, v28);
  ozcollide::DataOut::writeDword(a2, v31);
  v26 = 0;
  for ( i = 0; i < v31; ++i )
  {
    v6 = *((_DWORD *)this + 9) + 44 * i;
    v26 += *(_DWORD *)(v6 + 32);
    for ( j = 0; j < *(_DWORD *)(v6 + 32); ++j )
    {
      v8 = 32 * j;
      v4 += (unsigned __int8)*(_DWORD *)(v8 + *(_DWORD *)(v6 + 36));
    }
  }
  ozcollide::DataOut::writeStr(a2, "NPOL");
  ozcollide::DataOut::writeDword(a2, 4);
  ozcollide::DataOut::writeDword(a2, v26);
  ozcollide::DataOut::writeStr(a2, "NEDG");
  ozcollide::DataOut::writeDword(a2, 4);
  ozcollide::DataOut::writeDword(a2, v4);
  v9 = 0;
  ozcollide::DataOut::writeStr(a2, "PNTS");
  ozcollide::DataOut::writeDword(a2, 12 * *((_DWORD *)this + 10));
  while ( v9 < *((_DWORD *)this + 10) )
  {
    v10 = 12 * v9++;
    ozcollide::DataOut::writeFloat(a2, *(float *)(*((_DWORD *)this + 11) + v10));
    ozcollide::DataOut::writeFloat(a2, *(float *)(*((_DWORD *)this + 11) + v10 + 4));
    ozcollide::DataOut::writeFloat(a2, *(float *)(*((_DWORD *)this + 11) + v10 + 8));
  }
  ozcollide::DataOut::writeStr(a2, "NODS");
  ozcollide::DataOut::writeDword(a2, 32 * v28);
  for ( k = 0; k < v28; ++k )
  {
    v12 = *((_DWORD *)this + 2) + 32 * k;
    ozcollide::DataOut::writeFloat(a2, *(float *)v12);
    ozcollide::DataOut::writeFloat(a2, *(float *)(v12 + 4));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v12 + 8));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v12 + 12));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v12 + 16));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v12 + 20));
    v13 = *(_DWORD *)(v12 + 24);
    v14 = *(_DWORD *)(v12 + 28);
    if ( v13 != 0 )
    {
      v15 = (v13 - *((_DWORD *)this + 2)) >> 5;
      if ( v15 < 0 || v15 >= v28 )
        v15 = (-1171354717 * ((v13 - *((_DWORD *)this + 9)) >> 2)) | 0x80000000;
      v16 = a2;
    }
    else
    {
      v16 = a2;
      v15 = -1;
    }
    ozcollide::DataOut::writeDword(v16, v15);
    if ( v14 != 0 )
    {
      v17 = (v14 - *((_DWORD *)this + 2)) >> 5;
      if ( v17 < 0 || v17 >= v28 )
        v17 = (-1171354717 * ((v14 - *((_DWORD *)this + 9)) >> 2)) | 0x80000000;
      v18 = a2;
    }
    else
    {
      v18 = a2;
      v17 = -1;
    }
    ozcollide::DataOut::writeDword(v18, v17);
  }
  v19 = 0;
  ozcollide::DataOut::writeStr(a2, "LEFS");
  v33 = ozcollide::DataOut::tell(a2);
  ozcollide::DataOut::advance(a2, 4);
  while ( 1 )
  {
    v29 = v19;
    if ( v19 >= v31 )
      break;
    v20 = *((_DWORD *)this + 9) + 44 * v19;
    ozcollide::DataOut::writeFloat(a2, *(float *)v20);
    ozcollide::DataOut::writeFloat(a2, *(float *)(v20 + 4));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v20 + 8));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v20 + 12));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v20 + 16));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v20 + 20));
    ozcollide::DataOut::writeDword(a2, *(_DWORD *)(v20 + 32));
    for ( m = 0; ; m = v27 + 1 )
    {
      v27 = m;
      if ( m >= *(_DWORD *)(v20 + 32) )
        break;
      v30 = (unsigned __int8 *)(*(_DWORD *)(v20 + 36) + 32 * m);
      v34 = *v30;
      ozcollide::DataOut::writeDword(a2, v34);
      for ( n = 0; n < v34; ++n )
        ozcollide::DataOut::writeDword(a2, *(_DWORD *)&v30[4 * n + 4]);
    }
    v19 = v29 + 1;
  }
  v23 = ozcollide::DataOut::tell(a2);
  ozcollide::DataOut::seek(a2, v33);
  ozcollide::DataOut::writeDword(a2, v23 - v33 - 4);
  ozcollide::DataOut::seek(a2, v23);
  v24 = ozcollide::DataOut::tell(a2);
  ozcollide::DataOut::seek(a2, v32);
  ozcollide::DataOut::writeDword(a2, v24 - v32 - 4);
  ozcollide::DataOut::seek(a2, v24);
  return 0;
}


//======================================================================
// ozcollide::AABBTreePoly::~AABBTreePoly()
// address: 0x001D15FC   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide12AABBTreePolyD1Ev'
void __fastcall ozcollide::AABBTreePoly::~AABBTreePoly(ozcollide::AABBTreePoly *this)
{
  void *v2; // r0
  int v3; // r0

  *(_DWORD *)this = &off_4596D8;
  v2 = *((void **)this + 11);
  if ( v2 != nullptr )
  {
    operator delete[](v2);
    *((_DWORD *)this + 11) = 0;
  }
  v3 = *((_DWORD *)this + 9);
  if ( v3 != 0 )
  {
    operator delete[]((void *)(v3 - 8));
    *((_DWORD *)this + 9) = 0;
  }
  ozcollide::AABBTree::~AABBTree(this);
}


//======================================================================
// ozcollide::AABBTreePoly::~AABBTreePoly()
// address: 0x001D1638   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ozcollide::AABBTreePoly::~AABBTreePoly(ozcollide::AABBTreePoly *this)
{
  ozcollide::AABBTreePoly::~AABBTreePoly(this);
  operator delete(this);
}


//======================================================================
// ozcollide::AABBTreePoly::scale(float)
// address: 0x001D166E   size: 0x6C (108 bytes)
//======================================================================
float __fastcall ozcollide::AABBTreePoly::scale(float this, float a2)
{
  int v2; // r7
  float v3; // r4
  int i; // r6
  int v6; // r0
  int j; // r6
  float *v8; // r7
  int v9; // r6
  int v10; // r7
  float *v11; // r7

  v2 = *(_DWORD *)(LODWORD(this) + 40);
  v3 = this;
  for ( i = 0; i < v2; ++i )
  {
    v6 = 12 * i;
    this = ozcollide::Vec3f::operator*=((float *)(*(_DWORD *)(LODWORD(v3) + 44) + v6), a2);
  }
  for ( j = 0; j < *(_DWORD *)(LODWORD(v3) + 4); ++j )
  {
    v8 = (float *)(*(_DWORD *)(LODWORD(v3) + 8) + 32 * j);
    ozcollide::Vec3f::operator*=(v8, a2);
    this = ozcollide::Vec3f::operator*=(v8 + 3, a2);
  }
  v9 = 0;
  while ( v9 < *(_DWORD *)(LODWORD(v3) + 12) )
  {
    v10 = 44 * v9++;
    v11 = (float *)(*(_DWORD *)(LODWORD(v3) + 36) + v10);
    ozcollide::Vec3f::operator*=(v11, a2);
    this = ozcollide::Vec3f::operator*=(v11 + 3, a2);
  }
  return this;
}


//======================================================================
// ozcollide::AABBTreePoly::readPNTSchunk(ozcollide::DataIn &,int)
// address: 0x001D170A   size: 0x66 (102 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::readPNTSchunk(ozcollide::AABBTreePoly *this, ozcollide::DataIn *a2, int a3)
{
  void *v5; // r0
  unsigned int v6; // r3
  unsigned int v7; // r0
  int result; // r0
  int v9; // r5
  int v10; // r7
  _DWORD *v11; // r7

  *((_DWORD *)this + 10) = a3 / 12;
  v5 = *((void **)this + 11);
  if ( v5 != nullptr )
  {
    j_free(v5);
    *((_DWORD *)this + 11) = 0;
  }
  v6 = *((_DWORD *)this + 10);
  if ( v6 > 0xAA00000 )
    v7 = -1;
  else
    v7 = 12 * v6;
  result = operator new[](v7);
  v9 = 0;
  *((_DWORD *)this + 11) = result;
  while ( v9 < *((_DWORD *)this + 10) )
  {
    v10 = 12 * v9++;
    v11 = (_DWORD *)(*((_DWORD *)this + 11) + v10);
    *v11 = ozcollide::DataIn::readFloat(a2);
    v11[1] = ozcollide::DataIn::readFloat(a2);
    result = ozcollide::DataIn::readFloat(a2);
    v11[2] = result;
  }
  return result;
}


//======================================================================
// ozcollide::AABBTreePoly::readNODSchunk(ozcollide::DataIn &,int,int)
// address: 0x001D1770   size: 0x9E (158 bytes)
//======================================================================
unsigned __int64 __fastcall ozcollide::AABBTreePoly::readNODSchunk(
        ozcollide::AABBTreePoly *this,
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
// ozcollide::AABBTreePoly::readLEFSchunk(ozcollide::DataIn &,int,int)
// address: 0x001D180E   size: 0x134 (308 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::readLEFSchunk(
        ozcollide::AABBTreePoly *this,
        ozcollide::DataIn *a2,
        int a3,
        int a4)
{
  int result; // r0
  _DWORD *v6; // r4
  unsigned int Dword; // r0
  int v8; // r2
  unsigned int v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r5
  int v12; // r6
  int v13; // r0
  const void *v14; // r1
  int k; // r5
  int v16; // r0
  int v17; // r3
  _DWORD *v18; // [sp+4h] [bp-20h]
  signed int j; // [sp+4h] [bp-20h]
  signed int v20; // [sp+8h] [bp-1Ch]
  int *v21; // [sp+Ch] [bp-18h]
  int i; // [sp+10h] [bp-14h]
  int v23; // [sp+14h] [bp-10h]

  for ( i = 0; ; ++i )
  {
    result = a4;
    if ( i >= a4 )
      break;
    v6 = (_DWORD *)(*((_DWORD *)this + 9) + 44 * i);
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
    v20 = Dword;
    v8 = *((_DWORD *)this + 62);
    if ( v8 != 0 )
    {
      v6[9] = v8 + 32 * *((_DWORD *)this + 63);
      *((_DWORD *)this + 63) += Dword;
    }
    else
    {
      if ( Dword > 0x3F80000 )
        v9 = -1;
      else
        v9 = 32 * Dword + 8;
      v10 = (_DWORD *)operator new[](v9);
      v11 = v10 + 2;
      *v10 = 32;
      v10[1] = v20;
      v12 = v20 - 1;
      v18 = v10 + 2;
      while ( v12 != -1 )
      {
        ozcollide::Polygon::Polygon(v11);
        v11 += 8;
        --v12;
      }
      v6[9] = v18;
    }
    for ( j = 0; j < v20; ++j )
    {
      v13 = ozcollide::DataIn::readDword(a2);
      v23 = v13;
      v14 = *((const void **)this + 60);
      v21 = (int *)(v6[9] + 32 * j);
      if ( v14 != nullptr )
      {
        *v21 = v13;
        j_memcpy(v21 + 1, v14, 4 * v13);
        *((_DWORD *)this + 60) += 4 * v23;
      }
      else
      {
        ozcollide::Polygon::setNbIndices((_DWORD *)(v6[9] + 32 * j), v13);
      }
      for ( k = 0; k < v23; ++k )
      {
        v16 = ozcollide::DataIn::readDword(a2);
        v17 = k;
        v21[v17 + 1] = v16;
      }
    }
  }
  return result;
}


//======================================================================
// ozcollide::AABBTreePoly::AABBTreePoly(int)
// address: 0x001D1944   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide12AABBTreePolyC1Ei'
ozcollide::AABBTreePoly *__fastcall ozcollide::AABBTreePoly::AABBTreePoly(ozcollide::AABBTreePoly *this, int a2)
{
  ozcollide::AABBTree::AABBTree(this, 0, a2);
  *(_DWORD *)this = &off_4596D8;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 63) = 0;
  return this;
}


//======================================================================
// ozcollide::AABBTreePoly::final(void)
// address: 0x001D1984   size: 0x18A (394 bytes)
//======================================================================
float __fastcall ozcollide::AABBTreePoly::final(float this)
{
  int v1; // r7
  float *v2; // r6
  float *v3; // r5
  float v4; // r3
  float v5; // r6
  float *v6; // r4
  float v7; // r5
  float v8; // r7
  float v9; // r0
  float v10; // r6
  float v11; // r4
  float v12; // r5
  float v13; // r0
  float v14; // r7
  unsigned __int8 *v15; // [sp+18h] [bp-2Ch]
  float v16; // [sp+1Ch] [bp-28h]
  int i; // [sp+20h] [bp-24h]
  int j; // [sp+24h] [bp-20h]
  float v19; // [sp+28h] [bp-1Ch]
  int v20; // [sp+2Ch] [bp-18h]
  float v21; // [sp+34h] [bp-10h]
  float v22; // [sp+38h] [bp-Ch]
  float v23; // [sp+3Ch] [bp-8h]

  v19 = this;
  for ( i = 0; i < *(_DWORD *)(LODWORD(v19) + 12); ++i )
  {
    v20 = *(_DWORD *)(LODWORD(v19) + 36) + 44 * i;
    for ( j = 0; j < *(_DWORD *)(v20 + 32); ++j )
    {
      v15 = (unsigned __int8 *)(*(_DWORD *)(v20 + 36) + 32 * j);
      v1 = *(_DWORD *)(LODWORD(v19) + 44);
      v2 = (float *)(v1 + 12 * *((_DWORD *)v15 + 1));
      v3 = (float *)(v1 + 12 * *((_DWORD *)v15 + 2));
      v16 = *v2;
      v4 = v2[1];
      v21 = *v3 - *v2;
      v5 = v2[2];
      v22 = v3[1] - v4;
      v23 = v3[2] - v5;
      v6 = (float *)(v1 + 12 * *(_DWORD *)&v15[4 * *v15]);
      v7 = *v6 - v16;
      v8 = v6[1] - v4;
      v9 = v6[2] - v5;
      v10 = (float)(v8 * v23) - (float)(v9 * v22);
      v11 = (float)(v9 * v21) - (float)(v7 * v23);
      v12 = (float)(v7 * v22) - (float)(v8 * v21);
      v13 = j_sqrt((float)((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12)));
      v14 = v13;
      LODWORD(this) = v13 == 0.0;
      if ( this == 0.0 )
      {
        v10 = v10 * (float)(1.0 / v14);
        v11 = v11 * (float)(1.0 / v14);
        this = v12 * (float)(1.0 / v14);
        v12 = this;
      }
      *((float *)v15 + 5) = v10;
      *((float *)v15 + 6) = v11;
      *((float *)v15 + 7) = v12;
    }
  }
  return this;
}


//======================================================================
// ozcollide::AABBTreePoly::loadBinary(ozcollide::DataIn &,ozcollide::AABBTreePoly**)
// address: 0x001D1B10   size: 0x1E8 (488 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::loadBinary(
        ozcollide::AABBTreePoly *this,
        ozcollide::DataIn *a2,
        ozcollide::AABBTreePoly **a3)
{
  int Byte; // r6
  ozcollide::AABBTreePoly *v6; // r5
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
  unsigned int v19; // r0
  unsigned int v20; // r7
  unsigned int v21; // r0
  _DWORD *v22; // r0
  unsigned int v23; // r7
  unsigned int v24; // r0
  unsigned int v25; // r0
  ozcollide::Polygon *v26; // [sp+4h] [bp-20h]
  int Dword; // [sp+8h] [bp-1Ch]
  int v28; // [sp+Ch] [bp-18h]
  _DWORD *v30; // [sp+14h] [bp-10h]
  _BYTE v31[4]; // [sp+18h] [bp-Ch] BYREF
  _BYTE v32[8]; // [sp+1Ch] [bp-8h] BYREF

  ozcollide::DataIn::read(this, v31, 4);
  if ( (v31[3] << 24) + (v31[2] << 16) + (v31[1] << 8) + v31[0] != 1111638337 )
    return 18;
  Dword = ozcollide::DataIn::readDword(this);
  if ( ozcollide::DataIn::readByte(this) != 0 )
    return 18;
  Byte = ozcollide::DataIn::readByte(this);
  v6 = (ozcollide::AABBTreePoly *)operator new(0x100u);
  ozcollide::AABBTreePoly::AABBTreePoly(v6, Byte);
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
  while ( Dword > 10 )
  {
    ozcollide::DataIn::read(this, v32, 4);
    v17 = (v32[3] << 24) + (v32[2] << 16) + (v32[1] << 8) + v32[0];
    v18 = ozcollide::DataIn::readDword(this);
    v28 = ozcollide::DataIn::tell(this);
    switch ( v17 )
    {
      case 1280266318:
        v19 = ozcollide::DataIn::readDword(this);
        v20 = v19;
        if ( v19 > 0x3F80000 )
          v21 = -1;
        else
          v21 = 32 * v19 + 8;
        v22 = (_DWORD *)operator new[](v21);
        v22[1] = v20;
        *v22 = 32;
        v26 = (ozcollide::Polygon *)(v22 + 2);
        v23 = v20 - 1;
        v30 = v22 + 2;
        while ( v23 != -1 )
        {
          ozcollide::Polygon::Polygon(v26);
          --v23;
          v26 = (ozcollide::Polygon *)((char *)v26 + 32);
        }
        *((_DWORD *)v6 + 62) = v30;
        break;
      case 1195656526:
        v24 = ozcollide::DataIn::readDword(this);
        if ( v24 > 0x1FC00000 )
          v25 = -1;
        else
          v25 = 4 * v24;
        *((_DWORD *)v6 + 60) = operator new[](v25);
        break;
      case 1398034000:
        ozcollide::AABBTreePoly::readPNTSchunk(v6, this, v18);
        break;
      case 1396985678:
        ozcollide::AABBTreePoly::readNODSchunk(v6, this, v18, *((_DWORD *)v6 + 1));
        break;
      case 1397114188:
        ozcollide::AABBTreePoly::readLEFSchunk(v6, this, v18, *((_DWORD *)v6 + 3));
        break;
      default:
        ozcollide::DataIn::advance(this, v18);
        break;
    }
    if ( ozcollide::DataIn::tell(this) - v28 != v18 )
      ozcollide::DataIn::seek(this, v28 + v18);
    Dword = Dword - v18 - 8;
  }
  *(_DWORD *)a2 = v6;
  ozcollide::AABBTreePoly::final(*(float *)&v6);
  return 0;
}


//======================================================================
// ozcollide::AABBTreePoly::getNbPoints(void)const
// address: 0x001D1D10   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::getNbPoints(ozcollide::AABBTreePoly *this)
{
  return *((_DWORD *)this + 10);
}


//======================================================================
// ozcollide::AABBTreePoly::getPointsList(void)const
// address: 0x001D1D14   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::getPointsList(ozcollide::AABBTreePoly *this)
{
  return *((_DWORD *)this + 11);
}


//======================================================================
// ozcollide::AABBTreePoly::getNbCollidedPrimitives(void)const
// address: 0x001D1D18   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::getNbCollidedPrimitives(ozcollide::AABBTreePoly *this)
{
  return *((_DWORD *)this + 59);
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithBox(ozcollide::AABBTreeNode const&)
// address: 0x001D1E00   size: 0x9E (158 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithBox(int a1, ozcollide::Box *a2)
{
  const ozcollide::Vec3f *v2; // r7
  int result; // r0
  int v6; // r6
  const ozcollide::Box *v7; // r3
  const ozcollide::Polygon *v8; // r1
  _DWORD *v9; // r0
  int v10; // r3
  int isCollideWithBox; // r3
  int v12; // [sp+4h] [bp-10h]
  ozcollide *v13; // [sp+8h] [bp-Ch] BYREF
  int v14; // [sp+Ch] [bp-8h] BYREF

  v2 = (const ozcollide::Vec3f *)(a1 + 76);
  if ( !ozcollide::Box::isOverlap(a2, (const Box *)(a1 + 76)) )
    return 0;
  if ( *((_DWORD *)a2 + 6) != 0 )
  {
    isCollideWithBox = ozcollide::AABBTreePoly::isCollideWithBox(a1);
    result = 1;
    if ( isCollideWithBox != 0 )
      return result;
  }
  else
  {
    v6 = *((_DWORD *)a2 + 7);
    if ( v6 == 0 )
    {
      v12 = *((_DWORD *)a2 + 8);
      while ( v6 < v12 )
      {
        v7 = *((const ozcollide::Box **)a2 + 9);
        v8 = *(const ozcollide::Polygon **)(a1 + 44);
        v13 = (const ozcollide::Box *)((char *)v7 + 32 * v6);
        if ( ozcollide::testIntersectionTriBox(v13, v8, v2, v7) != 0 )
        {
          ++*(_DWORD *)(a1 + 236);
          v9 = *(_DWORD **)(a1 + 56);
          if ( v9 != nullptr )
          {
            v14 = 0;
            v10 = *((_DWORD *)a2 + 10);
            if ( v10 != 0 )
              v14 = *(_DWORD *)(4 * v6 + v10);
            ozcollide::Vector<ozcollide::Polygon const*>::add(v9, &v13);
            ozcollide::Vector<int>::add(*(_DWORD *)(a1 + 56) + 12, &v14);
          }
          return 1;
        }
        ++v6;
      }
      return 0;
    }
  }
  if ( *((_DWORD *)a2 + 7) == 0 )
    return 0;
  return ozcollide::AABBTreePoly::isCollideWithBox(a1);
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithBox(ozcollide::Box const&)
// address: 0x001D1E9E   size: 0x1E (30 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithBox(ozcollide::AABBTreePoly *this, const ozcollide::Box *a2)
{
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r5
  int v7; // r6

  *((_DWORD *)this + 59) = 0;
  v3 = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 2);
  v2 = (_DWORD *)((char *)a2 + 12);
  *((_DWORD *)this + 19) = v3;
  *((_DWORD *)this + 20) = v4;
  *((_DWORD *)this + 21) = v5;
  v6 = v2[1];
  v7 = v2[2];
  *((_DWORD *)this + 22) = *v2;
  *((_DWORD *)this + 23) = v6;
  *((_DWORD *)this + 24) = v7;
  *((_DWORD *)this + 14) = 0;
  return ozcollide::AABBTreePoly::isCollideWithBox((int)this, *((ozcollide::Box **)this + 2));
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithBox(ozcollide::Box const&,ozcollide::AABBTreePoly::BoxColResult &)
// address: 0x001D1EBC   size: 0x62 (98 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithBox(int a1, const ozcollide::Vec3f *a2, int a3)
{
  int v3; // r7
  _DWORD *v6; // r4
  int v7; // r4
  int v8; // r7
  int v9; // r4
  int v10; // r7
  _DWORD *v11; // r6
  int v12; // r3
  int v13; // r7
  int v14; // r2
  int v15; // r3

  v3 = *(unsigned __int8 *)(a1 + 24);
  v6 = (_DWORD *)(a1 + 236);
  if ( *(_BYTE *)(a1 + 24) != 0
    && *(_DWORD *)(a3 + 4) != 0
    && ozcollide::testIntersectionTriBox(
         **(ozcollide ***)a3,
         *(const ozcollide::Polygon **)(a1 + 44),
         a2,
         *(const ozcollide::Box **)a3) != 0 )
  {
    *v6 = 1;
  }
  else
  {
    *v6 = 0;
    v7 = *((_DWORD *)a2 + 1);
    v8 = *((_DWORD *)a2 + 2);
    *(_DWORD *)(a1 + 76) = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 80) = v7;
    *(_DWORD *)(a1 + 84) = v8;
    v9 = *((_DWORD *)a2 + 4);
    v10 = *((_DWORD *)a2 + 5);
    *(_DWORD *)(a1 + 88) = *((_DWORD *)a2 + 3);
    *(_DWORD *)(a1 + 92) = v9;
    *(_DWORD *)(a1 + 96) = v10;
    *(_DWORD *)(a1 + 56) = a3;
    v11 = (_DWORD *)(a3 + 24);
    v12 = *((_DWORD *)a2 + 1);
    v13 = *((_DWORD *)a2 + 2);
    *v11 = *(_DWORD *)a2;
    v11[1] = v12;
    v11[2] = v13;
    v11 += 3;
    v14 = *((_DWORD *)a2 + 4);
    v15 = *((_DWORD *)a2 + 5);
    *v11 = *((_DWORD *)a2 + 3);
    v11[1] = v14;
    v11[2] = v15;
    ozcollide::Vector<ozcollide::Polygon const*>::resize(*(unsigned int *)(a1 + 56));
    return ozcollide::AABBTreePoly::isCollideWithBox(a1, *(ozcollide::Box **)(a1 + 8));
  }
  return v3;
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithBox(ozcollide::AABBTreeNode const&)
// address: 0x001D1F1E   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithBox(int a1, ozcollide::Box *a2)
{
  const ozcollide::Vec3f *v2; // r7
  int result; // r0
  int v6; // r6
  ozcollide *v7; // r0
  const ozcollide::Box *v8; // r3
  int (__fastcall *v9)(int, ozcollide *, int, ozcollide::Box *, _DWORD); // r12
  int v10; // [sp+Ch] [bp-10h]
  ozcollide *v11; // [sp+10h] [bp-Ch] BYREF
  int v12; // [sp+14h] [bp-8h] BYREF

  v2 = (const ozcollide::Vec3f *)(a1 + 76);
  result = ozcollide::Box::isOverlap(a2, (const Box *)(a1 + 76));
  if ( result == 0 )
    return result;
  if ( *((_DWORD *)a2 + 6) != 0 )
  {
    result = ozcollide::AABBTreePoly::collideWithBox(a1);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 7);
    if ( v6 == 0 )
    {
      v10 = *((_DWORD *)a2 + 8);
      while ( v6 < v10 )
      {
        v7 = (ozcollide *)(*((_DWORD *)a2 + 9) + 32 * v6);
        v12 = 0;
        v8 = *((const ozcollide::Box **)a2 + 10);
        v11 = v7;
        if ( v8 != nullptr )
          v12 = *((_DWORD *)v8 + v6);
        result = ozcollide::testIntersectionTriBox(v7, *(const ozcollide::Polygon **)(a1 + 44), v2, v8);
        if ( result != 0 )
        {
          ++*(_DWORD *)(a1 + 236);
          v9 = *(int (__fastcall **)(int, ozcollide *, int, ozcollide::Box *, _DWORD))(a1 + 48);
          if ( v9 != nullptr )
          {
            result = v9(a1, v11, v12, a2, *(_DWORD *)(a1 + 52));
          }
          else
          {
            ozcollide::Vector<ozcollide::Polygon const*>::add(*(_DWORD **)(a1 + 56), &v11);
            result = ozcollide::Vector<int>::add(*(_DWORD *)(a1 + 56) + 12, &v12);
          }
        }
        ++v6;
      }
      return result;
    }
  }
  if ( *((_DWORD *)a2 + 7) != 0 )
    return ozcollide::AABBTreePoly::collideWithBox(a1);
  return result;
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithBox(ozcollide::Box const&,ozcollide::AABBTreePoly::BoxColResult &)
// address: 0x001D1FBE   size: 0x14E (334 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithBox(int a1, float *a2, unsigned int a3)
{
  float v5; // r5
  float v6; // r4
  float v7; // r4
  float v8; // r5
  float v9; // r4
  int result; // r0
  int v11; // r1
  int v12; // r4
  int v13; // r1
  int v14; // r4
  int v15; // r1
  int v16; // r4
  int v17; // r1
  int v18; // r4
  int v19; // r1
  int v20; // r4
  int v21; // r1
  int v22; // r4
  float v24; // [sp+4h] [bp-10h]
  float v25; // [sp+4h] [bp-10h]
  float v26; // [sp+8h] [bp-Ch]
  float v27; // [sp+8h] [bp-Ch]
  float v28; // [sp+8h] [bp-Ch]

  if ( *(_BYTE *)(a1 + 24) != 0 )
  {
    v5 = a2[3];
    v24 = *(float *)(a3 + 24);
    v26 = *(float *)(a3 + 36);
    if ( (float)(*a2 - v5) > (float)(v24 - v26) && (float)(*a2 + v5) < (float)(v24 + v26) )
    {
      v27 = a2[1];
      v6 = *(float *)(a3 + 28);
      if ( (float)(v27 - a2[4]) > (float)(v6 - *(float *)(a3 + 40)) )
      {
        v25 = *(float *)(a3 + 44);
        if ( (float)(v27 + a2[4]) < (float)(v6 + v25) )
        {
          v7 = a2[2];
          v8 = a2[5];
          v28 = *(float *)(a3 + 32);
          if ( (float)(v7 - v8) > (float)(v28 - v25) )
          {
            v9 = v7 + v8;
            result = v9 < (float)(v28 + v25);
            if ( v9 < (float)(v28 + v25) )
            {
              *(_DWORD *)(a1 + 236) = *(_DWORD *)(a3 + 4);
              return result;
            }
          }
        }
      }
    }
    v19 = *((_DWORD *)a2 + 1);
    v20 = *((_DWORD *)a2 + 2);
    *(float *)(a1 + 76) = *a2;
    *(_DWORD *)(a1 + 80) = v19;
    *(_DWORD *)(a1 + 84) = v20;
    v21 = *((_DWORD *)a2 + 4);
    v22 = *((_DWORD *)a2 + 5);
    *(float *)(a1 + 88) = a2[3];
    *(_DWORD *)(a1 + 92) = v21;
    *(_DWORD *)(a1 + 96) = v22;
    ozcollide::Vec3f::operator*=((float *)(a1 + 88), *(float *)(a1 + 28));
  }
  else
  {
    v11 = *((_DWORD *)a2 + 1);
    v12 = *((_DWORD *)a2 + 2);
    *(float *)(a1 + 76) = *a2;
    *(_DWORD *)(a1 + 80) = v11;
    *(_DWORD *)(a1 + 84) = v12;
    v13 = *((_DWORD *)a2 + 4);
    v14 = *((_DWORD *)a2 + 5);
    *(float *)(a1 + 88) = a2[3];
    *(_DWORD *)(a1 + 92) = v13;
    *(_DWORD *)(a1 + 96) = v14;
  }
  v15 = *(_DWORD *)(a1 + 80);
  v16 = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a3 + 24) = *(_DWORD *)(a1 + 76);
  *(_DWORD *)(a3 + 28) = v15;
  *(_DWORD *)(a3 + 32) = v16;
  v17 = *(_DWORD *)(a1 + 92);
  v18 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a3 + 36) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a3 + 40) = v17;
  *(_DWORD *)(a3 + 44) = v18;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = a3;
  ozcollide::Vector<ozcollide::Polygon const*>::resize(a3);
  *(_DWORD *)(a1 + 236) = 0;
  return ozcollide::AABBTreePoly::collideWithBox(a1, *(ozcollide::Box **)(a1 + 8));
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithBox(ozcollide::Box const&,void (*)(ozcollide::AABBTreePoly const&,ozcollide::Polygon const&,int,ozcollide::Box const&,void *),void *)
// address: 0x001D210C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithBox(
        int this,
        const ozcollide::Box *a2,
        void (*a3)(const ozcollide::AABBTreePoly *, const ozcollide::Polygon *, int, const ozcollide::Box *, void *),
        void *a4)
{
  _DWORD *v4; // r1
  int v5; // r2
  int v6; // r4
  int v7; // r5
  int v8; // r4
  int v9; // r5

  if ( a3 != nullptr )
  {
    *(_DWORD *)(this + 48) = a3;
    *(_DWORD *)(this + 52) = a4;
    *(_DWORD *)(this + 56) = 0;
    *(_DWORD *)(this + 236) = 0;
    v5 = *(_DWORD *)a2;
    v6 = *((_DWORD *)a2 + 1);
    v7 = *((_DWORD *)a2 + 2);
    v4 = (_DWORD *)((char *)a2 + 12);
    *(_DWORD *)(this + 76) = v5;
    *(_DWORD *)(this + 80) = v6;
    *(_DWORD *)(this + 84) = v7;
    v8 = v4[1];
    v9 = v4[2];
    *(_DWORD *)(this + 88) = *v4;
    *(_DWORD *)(this + 92) = v8;
    *(_DWORD *)(this + 96) = v9;
    return ozcollide::AABBTreePoly::collideWithBox(this, *(ozcollide::Box **)(this + 8));
  }
  return this;
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithOBB(ozcollide::OBB const&,void (*)(ozcollide::AABBTreePoly const&,ozcollide::Polygon const&,int,ozcollide::Box const&,void *),void *)
// address: 0x001D2134   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall ozcollide::AABBTreePoly::collideWithOBB(_DWORD *result, const void *a2, int a3, int a4)
{
  int v4; // r4

  v4 = (int)result;
  if ( a3 != 0 )
  {
    result[12] = a3;
    result[13] = a4;
    result[15] = 0;
    result[59] = 0;
    j_memcpy(result + 44, a2, 0x3Cu);
    return (_DWORD *)ozcollide::AABBTreePoly::collideWithBox(v4, *(ozcollide::Box **)(v4 + 8));
  }
  return result;
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithOBB(ozcollide::AABBTreeNode const&)
// address: 0x001D215C   size: 0x9E (158 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithOBB(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r6
  _DWORD *v6; // r0
  int v7; // r3
  int isCollideWithOBB; // r3
  int v9; // [sp+4h] [bp-10h]
  int v10; // [sp+8h] [bp-Ch] BYREF
  int v11; // [sp+Ch] [bp-8h] BYREF

  if ( ozcollide::testIntersectionAABB_OBB(a2, a1 + 176) == 0 )
    return 0;
  if ( a2[6] != 0 )
  {
    isCollideWithOBB = ozcollide::AABBTreePoly::isCollideWithOBB(a1);
    result = 1;
    if ( isCollideWithOBB != 0 )
      return result;
  }
  else
  {
    v5 = a2[7];
    if ( v5 == 0 )
    {
      v9 = a2[8];
      while ( v5 < v9 )
      {
        v10 = a2[9] + 32 * v5;
        if ( ozcollide::testIntersectionTriOBB() != 0 )
        {
          ++*(_DWORD *)(a1 + 236);
          v6 = *(_DWORD **)(a1 + 60);
          if ( v6 != nullptr )
          {
            v11 = 0;
            v7 = a2[10];
            if ( v7 != 0 )
              v11 = *(_DWORD *)(4 * v5 + v7);
            ozcollide::Vector<ozcollide::Polygon const*>::add(v6, &v10);
            ozcollide::Vector<int>::add(*(_DWORD *)(a1 + 60) + 12, &v11);
          }
          return 1;
        }
        ++v5;
      }
      return 0;
    }
  }
  if ( a2[7] == 0 )
    return 0;
  return ozcollide::AABBTreePoly::isCollideWithOBB(a1);
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithOBB(ozcollide::OBB const&)
// address: 0x001D21FA   size: 0x20 (32 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithOBB(int a1, const void *a2)
{
  *(_DWORD *)(a1 + 236) = 0;
  j_memcpy((void *)(a1 + 176), a2, 0x3Cu);
  *(_DWORD *)(a1 + 60) = 0;
  return ozcollide::AABBTreePoly::isCollideWithOBB(a1, *(_DWORD **)(a1 + 8));
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithOBB(ozcollide::OBB const&,ozcollide::AABBTreePoly::OBBColResult &)
// address: 0x001D221A   size: 0x3A (58 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithOBB(int a1, const void *a2, int a3)
{
  *(_DWORD *)(a1 + 236) = 0;
  j_memcpy((void *)(a1 + 176), a2, 0x3Cu);
  *(_DWORD *)(a1 + 60) = a3;
  j_memcpy((void *)(a3 + 24), a2, 0x3Cu);
  ozcollide::Vector<ozcollide::Polygon const*>::resize(*(unsigned int *)(a1 + 60));
  return ozcollide::AABBTreePoly::isCollideWithOBB(a1, *(_DWORD **)(a1 + 8));
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithOBB(ozcollide::AABBTreeNode const&)
// address: 0x001D2254   size: 0x94 (148 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithOBB(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r6
  int (__fastcall *v6)(int, int, int, _DWORD *, _DWORD); // r12
  int v7; // [sp+Ch] [bp-10h]
  int v8; // [sp+10h] [bp-Ch] BYREF
  int v9; // [sp+14h] [bp-8h] BYREF

  result = ozcollide::testIntersectionAABB_OBB(a2, a1 + 176);
  if ( result == 0 )
    return result;
  if ( a2[6] != 0 )
  {
    result = ozcollide::AABBTreePoly::collideWithOBB(a1);
  }
  else
  {
    v5 = a2[7];
    if ( v5 == 0 )
    {
      v7 = a2[8];
      while ( v5 < v7 )
      {
        v8 = a2[9] + 32 * v5;
        v9 = 0;
        result = ozcollide::testIntersectionTriOBB();
        if ( result != 0 )
        {
          ++*(_DWORD *)(a1 + 236);
          v6 = *(int (__fastcall **)(int, int, int, _DWORD *, _DWORD))(a1 + 48);
          if ( v6 != nullptr )
          {
            result = v6(a1, v8, v9, a2, *(_DWORD *)(a1 + 52));
          }
          else
          {
            ozcollide::Vector<ozcollide::Polygon const*>::add(*(_DWORD **)(a1 + 60), &v8);
            result = ozcollide::Vector<int>::add(*(_DWORD *)(a1 + 60) + 12, &v9);
          }
        }
        ++v5;
      }
      return result;
    }
  }
  if ( a2[7] != 0 )
    return ozcollide::AABBTreePoly::collideWithOBB(a1);
  return result;
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithOBB(ozcollide::OBB const&,ozcollide::AABBTreePoly::OBBColResult &)
// address: 0x001D22E8   size: 0x3E (62 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithOBB(int a1, const void *a2, unsigned int a3)
{
  const void *v3; // r7

  v3 = (const void *)(a1 + 176);
  j_memcpy((void *)(a1 + 176), a2, 0x3Cu);
  j_memcpy((void *)(a3 + 24), v3, 0x3Cu);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 60) = a3;
  ozcollide::Vector<ozcollide::Polygon const*>::resize(a3);
  *(_DWORD *)(a1 + 236) = 0;
  return ozcollide::AABBTreePoly::collideWithOBB(a1, *(_DWORD **)(a1 + 8));
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithSphere(ozcollide::AABBTreeNode const&)
// address: 0x001D2326   size: 0xCA (202 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithSphere(
        int a1,
        const ozcollide::Vec3f *a2,
        int a3,
        ozcollide::Vec3f *a4)
{
  int result; // r0
  int v7; // r6
  _DWORD *v8; // r0
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // r0
  int v12; // r3
  int isCollideWithSphere; // r3
  ozcollide::Vec3f *v14; // [sp+8h] [bp-1Ch]
  ozcollide *v15; // [sp+10h] [bp-14h]
  int v16; // [sp+14h] [bp-10h]
  _DWORD *v17; // [sp+18h] [bp-Ch] BYREF
  int v18; // [sp+1Ch] [bp-8h] BYREF

  v15 = (ozcollide *)(a1 + 124);
  if ( !ozcollide::testIntersectionSphereBox((float *)(a1 + 124), a2, a3, a4) )
    return 0;
  if ( *((_DWORD *)a2 + 6) != 0 )
  {
    isCollideWithSphere = ozcollide::AABBTreePoly::isCollideWithSphere(a1);
    result = 1;
    if ( isCollideWithSphere != 0 )
      return result;
  }
  else
  {
    v7 = *((_DWORD *)a2 + 7);
    if ( v7 == 0 )
    {
      v16 = *((_DWORD *)a2 + 8);
      while ( v7 < v16 )
      {
        v8 = (_DWORD *)(*((_DWORD *)a2 + 9) + 32 * v7);
        v9 = 12 * v8[1];
        v14 = *(ozcollide::Vec3f **)(a1 + 136);
        v10 = *(_DWORD *)(a1 + 44);
        v17 = v8;
        if ( ozcollide::magic_testIntersectionSphereTriangle(
               v15,
               v14,
               COERCE_FLOAT(v10 + v9),
               (const ozcollide::Vec3f *)(*(_DWORD *)(a1 + 44) + 12 * v8[2]),
               (const ozcollide::Vec3f *)(*(_DWORD *)(a1 + 44) + 12 * v8[3]),
               nullptr,
               (float *)v14) != 0 )
        {
          v11 = *(_DWORD **)(a1 + 64);
          if ( v11 != nullptr )
          {
            v12 = *((_DWORD *)a2 + 10);
            v18 = 0;
            if ( v12 != 0 )
              v18 = *(_DWORD *)(4 * v7 + v12);
            ozcollide::Vector<ozcollide::Polygon const*>::add(v11, &v17);
            ozcollide::Vector<int>::add(*(_DWORD *)(a1 + 64) + 12, &v18);
          }
          ++*(_DWORD *)(a1 + 236);
          return 1;
        }
        ++v7;
      }
      return 0;
    }
  }
  if ( *((_DWORD *)a2 + 7) == 0 )
    return 0;
  return ozcollide::AABBTreePoly::isCollideWithSphere(a1);
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithSphere(ozcollide::Sphere const&)
// address: 0x001D23F0   size: 0x20 (32 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithSphere(int a1, int *a2)
{
  int v2; // r2
  int v3; // r4
  int v4; // r5

  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  *(_DWORD *)(a1 + 124) = *a2;
  *(_DWORD *)(a1 + 128) = v3;
  *(_DWORD *)(a1 + 132) = v4;
  *(_DWORD *)(a1 + 136) = a2[3];
  return ozcollide::AABBTreePoly::isCollideWithSphere(
           a1,
           *(const ozcollide::Vec3f **)(a1 + 8),
           v2,
           (ozcollide::Vec3f *)(a1 + 136));
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithSphere(ozcollide::AABBTreeNode const&)
// address: 0x001D2410   size: 0xBE (190 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithSphere(
        int a1,
        const ozcollide::Vec3f *a2,
        int a3,
        ozcollide::Vec3f *a4)
{
  int result; // r0
  int v7; // r6
  _DWORD *v8; // r1
  int v9; // r2
  int v10; // r3
  int (__fastcall *v11)(int, _DWORD *, int, const ozcollide::Vec3f *, _DWORD); // r7
  float *v12; // [sp+8h] [bp-24h]
  ozcollide *v13; // [sp+14h] [bp-18h]
  int v14; // [sp+18h] [bp-14h]
  ozcollide::Vec3f *v15; // [sp+1Ch] [bp-10h]
  _DWORD *v16; // [sp+20h] [bp-Ch] BYREF
  int v17; // [sp+24h] [bp-8h] BYREF

  v13 = (ozcollide *)(a1 + 124);
  result = ozcollide::testIntersectionSphereBox((float *)(a1 + 124), a2, a3, a4);
  if ( result == 0 )
    return result;
  if ( *((_DWORD *)a2 + 6) != 0 )
  {
    result = ozcollide::AABBTreePoly::collideWithSphere(a1);
  }
  else
  {
    v7 = *((_DWORD *)a2 + 7);
    if ( v7 == 0 )
    {
      v14 = *((_DWORD *)a2 + 8);
      while ( v7 < v14 )
      {
        v8 = (_DWORD *)(*((_DWORD *)a2 + 9) + 32 * v7);
        v17 = 0;
        v9 = 12 * v8[1];
        v15 = *(ozcollide::Vec3f **)(a1 + 136);
        v10 = *(_DWORD *)(a1 + 44);
        v16 = v8;
        result = ozcollide::magic_testIntersectionSphereTriangle(
                   v13,
                   v15,
                   COERCE_FLOAT(v10 + v9),
                   (const ozcollide::Vec3f *)(v10 + 12 * v8[2]),
                   (const ozcollide::Vec3f *)(*(_DWORD *)(a1 + 44) + 12 * v8[3]),
                   nullptr,
                   v12);
        if ( result != 0 )
        {
          ++*(_DWORD *)(a1 + 236);
          v11 = *(int (__fastcall **)(int, _DWORD *, int, const ozcollide::Vec3f *, _DWORD))(a1 + 48);
          if ( v11 != nullptr )
          {
            result = v11(a1, v16, v17, a2, *(_DWORD *)(a1 + 52));
          }
          else
          {
            ozcollide::Vector<ozcollide::Polygon const*>::add(*(_DWORD **)(a1 + 64), &v16);
            result = ozcollide::Vector<int>::add(*(_DWORD *)(a1 + 64) + 12, &v17);
          }
        }
        ++v7;
      }
      return result;
    }
  }
  if ( *((_DWORD *)a2 + 7) != 0 )
    return ozcollide::AABBTreePoly::collideWithSphere(a1);
  return result;
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithSphere(ozcollide::Sphere const&,void (*)(ozcollide::AABBTreePoly const&,ozcollide::Polygon const&,int,ozcollide::Box const&,void *),void *)
// address: 0x001D24CE   size: 0x26 (38 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithSphere(int result, int *a2, int a3, int a4)
{
  int v4; // r2
  int v5; // r4
  int v6; // r5

  if ( a3 != 0 )
  {
    *(_DWORD *)(result + 52) = a4;
    *(_DWORD *)(result + 64) = 0;
    *(_DWORD *)(result + 48) = a3;
    *(_DWORD *)(result + 236) = 0;
    v4 = *a2;
    v5 = a2[1];
    v6 = a2[2];
    *(_DWORD *)(result + 124) = *a2;
    *(_DWORD *)(result + 128) = v5;
    *(_DWORD *)(result + 132) = v6;
    *(_DWORD *)(result + 136) = a2[3];
    return ozcollide::AABBTreePoly::collideWithSphere(
             result,
             *(const ozcollide::Vec3f **)(result + 8),
             v4,
             (ozcollide::Vec3f *)(result + 136));
  }
  return result;
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithSphere(ozcollide::Sphere const&,ozcollide::AABBTreePoly::SphereColResult &)
// address: 0x001D24F4   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithSphere(int a1, float *a2, unsigned int a3)
{
  _DWORD *v6; // r7
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // r4
  int v14; // r2
  ozcollide::Vec3f *v15; // r3
  float v16; // [sp+0h] [bp-14h]
  float v17; // [sp+4h] [bp-10h]
  float v18; // [sp+8h] [bp-Ch]
  float v19; // [sp+Ch] [bp-8h]

  v6 = (_DWORD *)(a1 + 236);
  if ( *(_BYTE *)(a1 + 24) != 0 )
  {
    v17 = *(float *)(a3 + 28) - a2[1];
    v18 = *(float *)(a3 + 32) - a2[2];
    v19 = *(float *)(a3 + 36) + a2[3];
    v16 = (float)((float)((float)(*(float *)(a3 + 24) - *a2) * (float)(*(float *)(a3 + 24) - *a2)) + (float)(v17 * v17))
        + (float)(v18 * v18);
    result = v16 <= (float)(v19 * v19);
    if ( v16 <= (float)(v19 * v19) )
    {
      *v6 = *(_DWORD *)(a3 + 4);
      return result;
    }
    v8 = *((_DWORD *)a2 + 1);
    v9 = *((_DWORD *)a2 + 2);
    *(float *)(a1 + 124) = *a2;
    *(_DWORD *)(a1 + 128) = v8;
    *(_DWORD *)(a1 + 132) = v9;
    *(float *)(a1 + 136) = a2[3];
    *(float *)(a1 + 136) = *(float *)(a1 + 136) * *(float *)(a1 + 28);
  }
  else
  {
    v10 = *((_DWORD *)a2 + 1);
    v11 = *((_DWORD *)a2 + 2);
    *(float *)(a1 + 124) = *a2;
    *(_DWORD *)(a1 + 128) = v10;
    *(_DWORD *)(a1 + 132) = v11;
    *(float *)(a1 + 136) = a2[3];
  }
  v12 = *(_DWORD *)(a1 + 128);
  v13 = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a3 + 24) = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a3 + 28) = v12;
  *(_DWORD *)(a3 + 32) = v13;
  *(_DWORD *)(a3 + 36) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 64) = a3;
  ozcollide::Vector<ozcollide::Polygon const*>::resize(a3);
  *v6 = 0;
  return ozcollide::AABBTreePoly::collideWithSphere(a1, *(const ozcollide::Vec3f **)(a1 + 8), v14, v15);
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithEllipsoid(ozcollide::AABBTreeNode const&)
// address: 0x001D25CC   size: 0x106 (262 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithEllipsoid(int a1, int a2)
{
  int result; // r0
  _DWORD *v5; // r3
  int v6; // r2
  int v7; // r7
  int v8; // r1
  _DWORD *v9; // r0
  int v10; // r3
  int isCollideWithEllipsoid; // r3
  int v12; // [sp+Ch] [bp-58h]
  int v13; // [sp+18h] [bp-4Ch]
  float *v14; // [sp+1Ch] [bp-48h]
  int v15; // [sp+20h] [bp-44h]
  int v16; // [sp+24h] [bp-40h]
  _DWORD *v17; // [sp+28h] [bp-3Ch] BYREF
  int v18; // [sp+2Ch] [bp-38h] BYREF
  float v19[3]; // [sp+30h] [bp-34h] BYREF
  float v20[3]; // [sp+3Ch] [bp-28h] BYREF
  float v21[3]; // [sp+48h] [bp-1Ch] BYREF
  float v22[4]; // [sp+54h] [bp-10h] BYREF

  v14 = (float *)(a1 + 140);
  if ( !ozcollide::testIntersectionEllipsoidBox((float *)(a1 + 140), (float *)a2) )
    return 0;
  if ( *(_DWORD *)(a2 + 24) != 0 )
  {
    isCollideWithEllipsoid = ozcollide::AABBTreePoly::isCollideWithEllipsoid(a1);
    result = 1;
    if ( isCollideWithEllipsoid != 0 )
      return result;
  }
  else if ( *(_DWORD *)(a2 + 28) == 0 )
  {
    v12 = 0;
    v15 = *(_DWORD *)(a2 + 32);
    while ( v12 < v15 )
    {
      v5 = (_DWORD *)(*(_DWORD *)(a2 + 36) + 32 * v12);
      v6 = v5[3];
      v7 = *(_DWORD *)(a1 + 44);
      v13 = v5[2];
      v8 = v5[1];
      v17 = v5;
      v16 = v6;
      ozcollide::Vec3f::operator*(v19, (float *)(v7 + 12 * v8), (float *)(a1 + 164));
      ozcollide::Vec3f::operator*(v20, (float *)(v7 + 12 * v13), (float *)(a1 + 164));
      ozcollide::Vec3f::operator*(v21, (float *)(v7 + 12 * v16), (float *)(a1 + 164));
      ozcollide::Vec3f::operator*(v22, v14, (float *)(a1 + 164));
      if ( ozcollide::magic_testIntersectionSphereTriangle(
             (ozcollide *)v22,
             (const ozcollide::Vec3f *)0x3F800000,
             COERCE_FLOAT(v19),
             (const ozcollide::Vec3f *)v20,
             (const ozcollide::Vec3f *)v21,
             nullptr,
             (float *)(a1 + 164)) != 0 )
      {
        v9 = *(_DWORD **)(a1 + 68);
        if ( v9 != nullptr )
        {
          v10 = *(_DWORD *)(a2 + 40);
          v18 = 0;
          if ( v10 != 0 )
            v18 = *(_DWORD *)(4 * v12 + v10);
          ozcollide::Vector<ozcollide::Polygon const*>::add(v9, &v17);
          ozcollide::Vector<int>::add(*(_DWORD *)(a1 + 68) + 12, &v18);
        }
        ++*(_DWORD *)(a1 + 236);
        return 1;
      }
      ++v12;
    }
    return 0;
  }
  if ( *(_DWORD *)(a2 + 28) == 0 )
    return 0;
  return ozcollide::AABBTreePoly::isCollideWithEllipsoid(a1);
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithEllipsoid(ozcollide::Ellipsoid const&)
// address: 0x001D26D2   size: 0x24 (36 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithEllipsoid(int *a1, int *a2)
{
  int *v2; // r1
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r2
  int v7; // r4
  int v8; // r5
  int v9; // r4
  int v10; // r6

  a1[17] = 0;
  a1[59] = 0;
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v2 = a2 + 3;
  a1[35] = v3;
  a1[36] = v4;
  a1[37] = v5;
  v6 = *v2;
  v7 = v2[1];
  v8 = v2[2];
  v2 += 3;
  a1[38] = v6;
  a1[39] = v7;
  a1[40] = v8;
  v9 = v2[1];
  v10 = v2[2];
  a1[41] = *v2;
  a1[42] = v9;
  a1[43] = v10;
  return ozcollide::AABBTreePoly::isCollideWithEllipsoid((int)a1, a1[2]);
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithEllipsoid(ozcollide::AABBTreeNode const&)
// address: 0x001D26F6   size: 0x104 (260 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithEllipsoid(int a1, int a2)
{
  int result; // r0
  int v5; // r7
  _DWORD *v6; // r3
  ozcollide::Vec3f *v7; // r2
  int v8; // r1
  int (__fastcall *v9)(int, _DWORD *, int, int, _DWORD); // r6
  float *v10; // [sp+8h] [bp-5Ch]
  ozcollide::Vec3f *v11; // [sp+14h] [bp-50h]
  int v12; // [sp+18h] [bp-4Ch]
  float *v13; // [sp+1Ch] [bp-48h]
  int v14; // [sp+20h] [bp-44h]
  int v15; // [sp+24h] [bp-40h]
  _DWORD *v16; // [sp+28h] [bp-3Ch] BYREF
  int v17; // [sp+2Ch] [bp-38h] BYREF
  float v18[3]; // [sp+30h] [bp-34h] BYREF
  float v19[3]; // [sp+3Ch] [bp-28h] BYREF
  float v20[3]; // [sp+48h] [bp-1Ch] BYREF
  float v21[4]; // [sp+54h] [bp-10h] BYREF

  v13 = (float *)(a1 + 140);
  result = ozcollide::testIntersectionEllipsoidBox((float *)(a1 + 140), (float *)a2);
  if ( result == 0 )
    return result;
  if ( *(_DWORD *)(a2 + 24) != 0 )
  {
    result = ozcollide::AABBTreePoly::collideWithEllipsoid(a1);
  }
  else if ( *(_DWORD *)(a2 + 28) == 0 )
  {
    v12 = 0;
    v14 = *(_DWORD *)(a2 + 32);
    while ( v12 < v14 )
    {
      v5 = *(_DWORD *)(a1 + 44);
      v6 = (_DWORD *)(*(_DWORD *)(a2 + 36) + 32 * v12);
      v17 = 0;
      v7 = (ozcollide::Vec3f *)v6[2];
      v8 = v6[1];
      v16 = v6;
      v11 = v7;
      v15 = v6[3];
      ozcollide::Vec3f::operator*(v18, (float *)(v5 + 12 * v8), (float *)(a1 + 164));
      ozcollide::Vec3f::operator*(v19, (float *)(v5 + 12 * (_DWORD)v11), (float *)(a1 + 164));
      ozcollide::Vec3f::operator*(v20, (float *)(v5 + 12 * v15), (float *)(a1 + 164));
      ozcollide::Vec3f::operator*(v21, v13, (float *)(a1 + 164));
      result = ozcollide::magic_testIntersectionSphereTriangle(
                 (ozcollide *)v21,
                 (const ozcollide::Vec3f *)0x3F800000,
                 COERCE_FLOAT(v18),
                 (const ozcollide::Vec3f *)v19,
                 (const ozcollide::Vec3f *)v20,
                 nullptr,
                 v10);
      if ( result != 0 )
      {
        ++*(_DWORD *)(a1 + 236);
        v9 = *(int (__fastcall **)(int, _DWORD *, int, int, _DWORD))(a1 + 48);
        if ( v9 != nullptr )
        {
          result = v9(a1, v16, v17, a2, *(_DWORD *)(a1 + 52));
        }
        else
        {
          ozcollide::Vector<ozcollide::Polygon const*>::add(*(_DWORD **)(a1 + 68), &v16);
          result = ozcollide::Vector<int>::add(*(_DWORD *)(a1 + 68) + 12, &v17);
        }
      }
      ++v12;
    }
    return result;
  }
  if ( *(_DWORD *)(a2 + 28) != 0 )
    return ozcollide::AABBTreePoly::collideWithEllipsoid(a1);
  return result;
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithEllipsoid(ozcollide::Ellipsoid const&,void (*)(ozcollide::AABBTreePoly const&,ozcollide::Polygon const&,int,ozcollide::Box const&,void *),void *)
// address: 0x001D27FA   size: 0x2E (46 bytes)
//======================================================================
int *__fastcall ozcollide::AABBTreePoly::collideWithEllipsoid(int *result, int *a2, int a3, int a4)
{
  int *v4; // r1
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r2
  int v9; // r4
  int v10; // r5
  int v11; // r4
  int v12; // r6

  if ( a3 != 0 )
  {
    result[12] = a3;
    result[13] = a4;
    result[17] = 0;
    result[59] = 0;
    v5 = *a2;
    v6 = a2[1];
    v7 = a2[2];
    v4 = a2 + 3;
    result[35] = v5;
    result[36] = v6;
    result[37] = v7;
    v8 = *v4;
    v9 = v4[1];
    v10 = v4[2];
    v4 += 3;
    result[38] = v8;
    result[39] = v9;
    result[40] = v10;
    v11 = v4[1];
    v12 = v4[2];
    result[41] = *v4;
    result[42] = v11;
    result[43] = v12;
    return (int *)ozcollide::AABBTreePoly::collideWithEllipsoid((int)result, result[2]);
  }
  return result;
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithEllipsoid(ozcollide::Ellipsoid const&,ozcollide::AABBTreePoly::EllipsoidColResult &)
// address: 0x001D2828   size: 0x48 (72 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithEllipsoid(int *a1, int *a2, _DWORD *a3)
{
  _DWORD *v3; // r6
  int *v4; // r5
  int *v5; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r7
  int v10; // r0
  int v11; // r1
  int v12; // r7
  int v13; // r1
  int v14; // r7
  _DWORD *v15; // r1
  int v16; // r5
  int v17; // r7
  int v18; // r0
  int v19; // r5
  int v20; // r6
  int v21; // r5
  int v22; // r7

  v3 = a1 + 35;
  v4 = a2;
  v5 = a1 + 35;
  v7 = *a2;
  v8 = a2[1];
  v9 = v4[2];
  v4 += 3;
  *v5 = v7;
  v5[1] = v8;
  v5[2] = v9;
  v5 += 3;
  v10 = *v4;
  v11 = v4[1];
  v12 = v4[2];
  v4 += 3;
  *v5 = v10;
  v5[1] = v11;
  v5[2] = v12;
  v5 += 3;
  v13 = v4[1];
  v14 = v4[2];
  *v5 = *v4;
  v5[1] = v13;
  v5[2] = v14;
  v16 = v3[1];
  v17 = v3[2];
  v15 = v3 + 3;
  a3[6] = *v3;
  a3[7] = v16;
  a3[8] = v17;
  v18 = v3[3];
  v19 = v3[4];
  v20 = v3[5];
  v15 += 3;
  a3[9] = v18;
  a3[10] = v19;
  a3[11] = v20;
  v21 = v15[1];
  v22 = v15[2];
  a3[12] = *v15;
  a3[13] = v21;
  a3[14] = v22;
  a1[12] = 0;
  a1[17] = (int)a3;
  ozcollide::Vector<ozcollide::Polygon const*>::resize((unsigned int)a3);
  a1[59] = 0;
  return ozcollide::AABBTreePoly::collideWithEllipsoid((int)a1, a1[2]);
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithSegment(ozcollide::AABBTreeNode const&)
// address: 0x001D2870   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithSegment(
        _DWORD *a1,
        const ozcollide::Vec3f *a2,
        int a3,
        const ozcollide::Box *a4)
{
  int result; // r0
  int v7; // r6
  _DWORD *v8; // r1
  int v9; // r0
  int v10; // r3
  _DWORD *v11; // r0
  int v12; // r3
  int isCollideWithSegment; // r3
  ozcollide::Vec3f *v14; // [sp+8h] [bp-1Ch]
  ozcollide *v15; // [sp+Ch] [bp-18h]
  ozcollide::Vec3f *v16; // [sp+10h] [bp-14h]
  int v17; // [sp+14h] [bp-10h]
  _DWORD *v18; // [sp+18h] [bp-Ch] BYREF
  int v19; // [sp+1Ch] [bp-8h] BYREF

  v15 = (ozcollide *)(a1 + 25);
  v16 = (ozcollide::Vec3f *)(a1 + 28);
  if ( !ozcollide::testIntersectionSegmentBox((ozcollide *)(a1 + 25), (const ozcollide::Vec3f *)(a1 + 28), a2, a4) )
    return 0;
  if ( *((_DWORD *)a2 + 6) != 0 )
  {
    isCollideWithSegment = ozcollide::AABBTreePoly::isCollideWithSegment(a1);
    result = 1;
    if ( isCollideWithSegment != 0 )
      return result;
  }
  else
  {
    v7 = *((_DWORD *)a2 + 7);
    if ( v7 == 0 )
    {
      v17 = *((_DWORD *)a2 + 8);
      while ( v7 < v17 )
      {
        v8 = (_DWORD *)(*((_DWORD *)a2 + 9) + 32 * v7);
        v9 = v8[1];
        v10 = a1[11];
        v18 = v8;
        if ( ozcollide::testIntersectionSegmentTri(
               v15,
               v16,
               (const ozcollide::Vec3f *)(v10 + 12 * v9),
               (const ozcollide::Vec3f *)(a1[11] + 12 * v8[2]),
               (const ozcollide::Vec3f *)(a1[11] + 12 * v8[3]),
               nullptr,
               v14) != 0 )
        {
          ++a1[59];
          v11 = (_DWORD *)a1[18];
          if ( v11 != nullptr )
          {
            v12 = *((_DWORD *)a2 + 10);
            v19 = 0;
            if ( v12 != 0 )
              v19 = *(_DWORD *)(4 * v7 + v12);
            ozcollide::Vector<ozcollide::Polygon const*>::add(v11, &v18);
            ozcollide::Vector<int>::add(a1[18] + 12, &v19);
          }
          return 1;
        }
        ++v7;
      }
      return 0;
    }
  }
  if ( *((_DWORD *)a2 + 7) == 0 )
    return 0;
  return ozcollide::AABBTreePoly::isCollideWithSegment(a1);
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithSegment(ozcollide::Vec3f const&,ozcollide::Vec3f const&)
// address: 0x001D2932   size: 0x2C (44 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithSegment(
        ozcollide::AABBTreePoly *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3)
{
  const ozcollide::Vec3f *v3; // r1
  int v4; // r2

  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 25) = *(_DWORD *)a2;
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 28) = *(_DWORD *)a3;
  v3 = *((const ozcollide::Vec3f **)this + 2);
  *((_DWORD *)this + 29) = *((_DWORD *)a3 + 1);
  v4 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 30) = v4;
  return ozcollide::AABBTreePoly::isCollideWithSegment(this, v3, v4, nullptr);
}


//======================================================================
// ozcollide::AABBTreePoly::isCollideWithSegment(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::AABBTreePoly::SegmentColResult &)
// address: 0x001D295E   size: 0x50 (80 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::isCollideWithSegment(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r0
  _DWORD *v6; // r3
  int v7; // r2
  const ozcollide::Box *v8; // r3

  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 100) = *a2;
  *(_DWORD *)(a1 + 104) = a2[1];
  *(_DWORD *)(a1 + 108) = a2[2];
  *(_DWORD *)(a1 + 112) = *a3;
  *(_DWORD *)(a1 + 116) = a3[1];
  v5 = a3[2];
  *(_DWORD *)(a1 + 72) = a4;
  *(_DWORD *)(a1 + 120) = v5;
  a4[6] = *a2;
  a4[7] = a2[1];
  a4[8] = a2[2];
  v6 = *(_DWORD **)(a1 + 72);
  v6[9] = *a3;
  v6[10] = a3[1];
  v6[11] = a3[2];
  ozcollide::Vector<ozcollide::Polygon const*>::resize(*(unsigned int *)(a1 + 72));
  return ozcollide::AABBTreePoly::isCollideWithSegment((_DWORD *)a1, *(const ozcollide::Vec3f **)(a1 + 8), v7, v8);
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithSegment(ozcollide::AABBTreeNode const&)
// address: 0x001D29AE   size: 0xCE (206 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithSegment(
        int a1,
        const ozcollide::Vec3f *a2,
        int a3,
        const ozcollide::Box *a4)
{
  int result; // r0
  int v7; // r6
  int v8; // r2
  int v9; // r3
  int (__fastcall *v10)(int, int, int, const ozcollide::Vec3f *, _DWORD); // r12
  ozcollide::Vec3f *v11; // [sp+8h] [bp-1Ch]
  ozcollide::Vec3f *v12; // [sp+Ch] [bp-18h]
  ozcollide *v13; // [sp+10h] [bp-14h]
  int v14; // [sp+14h] [bp-10h]
  int v15; // [sp+18h] [bp-Ch] BYREF
  int v16; // [sp+1Ch] [bp-8h] BYREF

  v13 = (ozcollide *)(a1 + 100);
  v12 = (ozcollide::Vec3f *)(a1 + 112);
  result = ozcollide::testIntersectionSegmentBox((ozcollide *)(a1 + 100), (const ozcollide::Vec3f *)(a1 + 112), a2, a4);
  if ( result == 0 )
    return result;
  if ( *((_DWORD *)a2 + 6) != 0 )
  {
    result = ozcollide::AABBTreePoly::collideWithSegment(a1);
  }
  else
  {
    v7 = *((_DWORD *)a2 + 7);
    if ( v7 == 0 )
    {
      v14 = *((_DWORD *)a2 + 8);
      while ( v7 < v14 )
      {
        v8 = *((_DWORD *)a2 + 9);
        v16 = 0;
        v9 = *((_DWORD *)a2 + 10);
        v15 = v8 + 32 * v7;
        if ( v9 != 0 )
          v16 = *(_DWORD *)(4 * v7 + v9);
        result = ozcollide::testIntersectionSegmentTri(
                   v13,
                   v12,
                   (const ozcollide::Vec3f *)(*(_DWORD *)(a1 + 44) + 12 * *(_DWORD *)(v8 + 32 * v7 + 4)),
                   (const ozcollide::Vec3f *)(*(_DWORD *)(a1 + 44) + 12 * *(_DWORD *)(v8 + 32 * v7 + 8)),
                   (const ozcollide::Vec3f *)(*(_DWORD *)(a1 + 44) + 12 * *(_DWORD *)(v8 + 32 * v7 + 12)),
                   nullptr,
                   v11);
        if ( result != 0 )
        {
          ++*(_DWORD *)(a1 + 236);
          v10 = *(int (__fastcall **)(int, int, int, const ozcollide::Vec3f *, _DWORD))(a1 + 48);
          if ( v10 != nullptr )
          {
            result = v10(a1, v15, v16, a2, *(_DWORD *)(a1 + 52));
          }
          else
          {
            ozcollide::Vector<ozcollide::Polygon const*>::add(*(_DWORD **)(a1 + 72), &v15);
            result = ozcollide::Vector<int>::add(*(_DWORD *)(a1 + 72) + 12, &v16);
          }
        }
        ++v7;
      }
      return result;
    }
  }
  if ( *((_DWORD *)a2 + 7) != 0 )
    return ozcollide::AABBTreePoly::collideWithSegment(a1);
  return result;
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithSegment(ozcollide::Vec3f const&,ozcollide::Vec3f const&,void (*)(ozcollide::AABBTreePoly const&,ozcollide::Polygon const&,int,ozcollide::Box const&,void *),void *)
// address: 0x001D2A7C   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall ozcollide::AABBTreePoly::collideWithSegment(
        _DWORD *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        void (*a4)(const ozcollide::AABBTreePoly *, const ozcollide::Polygon *, int, const ozcollide::Box *, void *),
        void *a5)
{
  const ozcollide::Vec3f *v5; // r1
  const ozcollide::Box *v6; // r3
  int v7; // r2

  if ( a4 != nullptr )
  {
    *(this + 12) = a4;
    *(this + 18) = 0;
    *(this + 13) = a5;
    *(this + 59) = 0;
    *(this + 25) = *(_DWORD *)a2;
    *(this + 26) = *((_DWORD *)a2 + 1);
    *(this + 27) = *((_DWORD *)a2 + 2);
    v5 = (const ozcollide::Vec3f *)*(this + 2);
    *(this + 28) = *(_DWORD *)a3;
    v6 = *((const ozcollide::Box **)a3 + 1);
    *(this + 29) = v6;
    v7 = *((_DWORD *)a3 + 2);
    *(this + 30) = v7;
    return (_DWORD *)ozcollide::AABBTreePoly::collideWithSegment((int)this, v5, v7, v6);
  }
  return this;
}


//======================================================================
// ozcollide::AABBTreePoly::collideWithSegment(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::AABBTreePoly::SegmentColResult &)
// address: 0x001D2AB2   size: 0x52 (82 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::collideWithSegment(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r2
  int v6; // r2

  a4[6] = *a2;
  a4[7] = a2[1];
  a4[8] = a2[2];
  a4[9] = *a3;
  a4[10] = a3[1];
  a4[11] = a3[2];
  *(_DWORD *)(a1 + 100) = *a2;
  *(_DWORD *)(a1 + 104) = a2[1];
  *(_DWORD *)(a1 + 108) = a2[2];
  *(_DWORD *)(a1 + 112) = *a3;
  a4[29] = a3[1];
  v5 = a3[2];
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 120) = v5;
  *(_DWORD *)(a1 + 72) = a4;
  ozcollide::Vector<ozcollide::Polygon const*>::resize((unsigned int)a4);
  *(_DWORD *)(a1 + 236) = 0;
  return ozcollide::AABBTreePoly::collideWithSegment(
           a1,
           *(const ozcollide::Vec3f **)(a1 + 8),
           v6,
           (const ozcollide::Box *)(a1 + 236));
}


//======================================================================
// ozcollide::AABBTreePoly::loadBinary(char const*,ozcollide::AABBTreePoly**)
// address: 0x001D2B04   size: 0x3C (60 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::loadBinary(
        ozcollide::AABBTreePoly *this,
        ozcollide::DataIn *a2,
        ozcollide::AABBTreePoly **a3)
{
  int v5; // r0
  ozcollide::AABBTreePoly **v6; // r2
  int Binary; // r5
  _BYTE v9[28]; // [sp+4h] [bp-1Ch] BYREF

  ozcollide::DataIn::DataIn((ozcollide::DataIn *)v9);
  v5 = ozcollide::DataIn::open((ozcollide::DataIn *)v9, (const char *)this);
  Binary = 17;
  if ( v5 != 0 )
  {
    Binary = ozcollide::AABBTreePoly::loadBinary((ozcollide::AABBTreePoly *)v9, a2, v6);
    if ( Binary == 0 )
      ozcollide::DataIn::close((ozcollide::DataIn *)v9);
  }
  ozcollide::DataIn::~DataIn((ozcollide::DataIn *)v9);
  return Binary;
}


//======================================================================
// ozcollide::AABBTreePoly::saveBinary(char const*)
// address: 0x001D2B40   size: 0x3A (58 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePoly::saveBinary(ozcollide::AABBTreePoly *this, const char *a2, int a3, int a4)
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
    v7 = (*(int (__fastcall **)(ozcollide::AABBTreePoly *, _DWORD *))(*(_DWORD *)this + 12))(this, v9);
    if ( v7 == 0 )
      ozcollide::DataOut::close((ozcollide::DataOut *)v9);
  }
  ozcollide::DataOut::~DataOut((ozcollide::DataOut *)v9);
  return v7;
}

