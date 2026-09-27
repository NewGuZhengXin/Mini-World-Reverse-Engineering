// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::AABBTreeAABB

//======================================================================
// ozcollide::AABBTreeAABB::getMemoryConsumption(void)const
// address: 0x001D2C20   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB::getMemoryConsumption(ozcollide::AABBTreeAABB *this)
{
  return 32 * *((_DWORD *)this + 1) + 44 * *((_DWORD *)this + 3) + 120;
}


//======================================================================
// ozcollide::AABBTreeAABB::saveBinary(ozcollide::DataOut &)
// address: 0x001D2C30   size: 0x226 (550 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB::saveBinary(ozcollide::AABBTreeAABB *this, ozcollide::DataOut *a2)
{
  int v4; // r5
  int v5; // r5
  int v6; // r5
  int v7; // r6
  int v8; // r6
  int v9; // r0
  int v10; // r2
  int v11; // r6
  int v12; // r5
  int v13; // r6
  int v14; // r6
  int v15; // r6
  int v16; // r6
  int v17; // r6
  int v18; // r0
  int v19; // r3
  int v20; // r6
  int v21; // r5
  int v22; // r1
  ozcollide::DataOut *v23; // r0
  int v24; // r6
  int v25; // r1
  ozcollide::DataOut *v26; // r0
  int v27; // r5
  int v28; // r6
  float *v29; // r5
  int v31; // [sp+4h] [bp-20h]
  int j; // [sp+4h] [bp-20h]
  int v33; // [sp+8h] [bp-1Ch]
  int v34; // [sp+Ch] [bp-18h]
  int i; // [sp+Ch] [bp-18h]
  int v36; // [sp+10h] [bp-14h]
  int v37; // [sp+14h] [bp-10h]
  int v38; // [sp+18h] [bp-Ch]
  int v39; // [sp+1Ch] [bp-8h]

  ozcollide::DataOut::writeStr(a2, "AABB");
  v36 = ozcollide::DataOut::tell(a2);
  ozcollide::DataOut::advance(a2, 4);
  v4 = ozcollide::DataOut::writeByte(a2, 2);
  v5 = v4 + ozcollide::DataOut::writeByte(a2, *((_DWORD *)this + 8));
  v6 = v5 + ozcollide::DataOut::writeDword(a2, *((_DWORD *)this + 1));
  v7 = v6 + ozcollide::DataOut::writeDword(a2, *((_DWORD *)this + 3));
  v8 = v7 + ozcollide::DataOut::writeStr(a2, "NODS");
  v9 = ozcollide::DataOut::writeDword(a2, 32 * *((_DWORD *)this + 1));
  v10 = 0;
  v11 = v8 + v9;
  while ( 1 )
  {
    v34 = v10;
    if ( v10 >= *((_DWORD *)this + 1) )
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
      if ( v22 < 0 || v22 >= *((_DWORD *)this + 1) )
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
      if ( v25 < 0 || v25 >= *((_DWORD *)this + 1) )
        v25 = (-1171354717 * ((v21 - *((_DWORD *)this + 9)) >> 2)) | 0x80000000;
      v26 = a2;
    }
    else
    {
      v26 = a2;
      v25 = -1;
    }
    v11 = v24 + ozcollide::DataOut::writeDword(v26, v25);
    v10 = v34 + 1;
  }
  v27 = 0;
  v31 = v11 + ozcollide::DataOut::writeStr(a2, "LEFS");
  v37 = ozcollide::DataOut::tell(a2);
  ozcollide::DataOut::advance(a2, 4);
  for ( i = 0; i < *((_DWORD *)this + 3); ++i )
  {
    v28 = *((_DWORD *)this + 9) + 44 * i;
    ozcollide::DataOut::writeFloat(a2, *(float *)v28);
    ozcollide::DataOut::writeFloat(a2, *(float *)(v28 + 4));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v28 + 8));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v28 + 12));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v28 + 16));
    ozcollide::DataOut::writeFloat(a2, *(float *)(v28 + 20));
    ozcollide::DataOut::writeDword(a2, *(_DWORD *)(v28 + 32));
    v39 = v27 + 28;
    v38 = v31 + 28;
    v33 = *(_DWORD *)(v28 + 32);
    for ( j = 0; j < v33; ++j )
    {
      v29 = (float *)(*(_DWORD *)(v28 + 36) + 24 * j);
      ozcollide::DataOut::writeFloat(a2, *v29);
      ozcollide::DataOut::writeFloat(a2, v29[1]);
      ozcollide::DataOut::writeFloat(a2, v29[2]);
      ozcollide::DataOut::writeFloat(a2, v29[3]);
      ozcollide::DataOut::writeFloat(a2, v29[4]);
      ozcollide::DataOut::writeFloat(a2, v29[5]);
    }
    v31 = v38 + 24 * v33;
    v27 = v39 + 24 * v33;
  }
  ozcollide::DataOut::seek(a2, v37);
  ozcollide::DataOut::writeDword(a2, v27);
  ozcollide::DataOut::seek(a2, v36);
  ozcollide::DataOut::writeDword(a2, v31);
  return 0;
}


//======================================================================
// ozcollide::AABBTreeAABB::~AABBTreeAABB()
// address: 0x001D2E68   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide12AABBTreeAABBD1Ev'
void __fastcall ozcollide::AABBTreeAABB::~AABBTreeAABB(ozcollide::AABBTreeAABB *this)
{
  *(_DWORD *)this = &off_459708;
  ozcollide::AABBTree::~AABBTree(this);
}


//======================================================================
// ozcollide::AABBTreeAABB::~AABBTreeAABB()
// address: 0x001D2E84   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ozcollide::AABBTreeAABB::~AABBTreeAABB(ozcollide::AABBTreeAABB *this)
{
  ozcollide::AABBTreeAABB::~AABBTreeAABB(this);
  operator delete(this);
}


//======================================================================
// ozcollide::AABBTreeAABB::scale(float)
// address: 0x001D2E96   size: 0xB4 (180 bytes)
//======================================================================
float __fastcall ozcollide::AABBTreeAABB::scale(float this, float a2)
{
  float v2; // r7
  int v4; // r5
  int v5; // r6
  float *v6; // r6
  int i; // r3
  int v8; // r6
  int j; // r3
  int v10; // r3
  int v11; // r1
  int v12; // r3
  _DWORD *v13; // r3
  int v14; // r2
  int v15; // [sp+8h] [bp-1Ch]
  int v16; // [sp+Ch] [bp-18h]
  int v17; // [sp+14h] [bp-10h] BYREF
  int v18; // [sp+18h] [bp-Ch]
  int v19; // [sp+1Ch] [bp-8h]

  v2 = this;
  v4 = 0;
  while ( v4 < *(_DWORD *)(LODWORD(v2) + 4) )
  {
    v5 = 32 * v4++;
    v6 = (float *)(*(_DWORD *)(LODWORD(v2) + 8) + v5);
    ozcollide::Vec3f::operator*=(v6, a2);
    this = ozcollide::Vec3f::operator*=(v6 + 3, a2);
  }
  for ( i = 0; ; i = v15 + 1 )
  {
    v15 = i;
    if ( i >= *(_DWORD *)(LODWORD(v2) + 12) )
      break;
    v8 = *(_DWORD *)(LODWORD(v2) + 36) + 44 * i;
    ozcollide::Vec3f::operator*=((float *)v8, a2);
    this = ozcollide::Vec3f::operator*=((float *)(v8 + 12), a2);
    for ( j = 0; ; j = v16 + 1 )
    {
      v16 = j;
      if ( j >= *(_DWORD *)(v8 + 32) )
        break;
      v10 = *(_DWORD *)(v8 + 36);
      v11 = *(_DWORD *)(v10 + 24 * v16);
      v12 = v10 + 24 * v16;
      v17 = v11;
      v18 = *(_DWORD *)(v12 + 4);
      v19 = *(_DWORD *)(v12 + 8);
      ozcollide::Vec3f::operator*=((float *)&v17, a2);
      v13 = (_DWORD *)(*(_DWORD *)(v8 + 36) + 24 * v16);
      v14 = v13[3];
      v13 += 3;
      v17 = v14;
      v18 = v13[1];
      v19 = v13[2];
      this = ozcollide::Vec3f::operator*=((float *)&v17, a2);
    }
  }
  return this;
}


//======================================================================
// ozcollide::AABBTreeAABB::readNODSchunk(ozcollide::DataIn &,int,int)
// address: 0x001D2F4A   size: 0x9E (158 bytes)
//======================================================================
unsigned __int64 __fastcall ozcollide::AABBTreeAABB::readNODSchunk(
        ozcollide::AABBTreeAABB *this,
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
// ozcollide::AABBTreeAABB::readLEFSchunk(ozcollide::DataIn &,int,int)
// address: 0x001D2FE8   size: 0xDA (218 bytes)
//======================================================================
_DWORD *__fastcall ozcollide::AABBTreeAABB::readLEFSchunk(_DWORD *this, ozcollide::DataIn *a2, int a3, int a4)
{
  int i; // r2
  _DWORD *v6; // r5
  unsigned int Dword; // r0
  signed int v8; // r7
  unsigned int v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r6
  signed int j; // [sp+8h] [bp-14h]
  int v13; // [sp+Ch] [bp-10h]
  _DWORD *v14; // [sp+10h] [bp-Ch]

  v14 = this;
  for ( i = 0; ; i = v13 + 1 )
  {
    v13 = i;
    if ( i >= a4 )
      break;
    v6 = (_DWORD *)(v14[9] + 44 * i);
    *v6 = ozcollide::DataIn::readFloat(a2);
    v6[1] = ozcollide::DataIn::readFloat(a2);
    v6[2] = ozcollide::DataIn::readFloat(a2);
    v6[3] = ozcollide::DataIn::readFloat(a2);
    v6[4] = ozcollide::DataIn::readFloat(a2);
    v6[5] = ozcollide::DataIn::readFloat(a2);
    v6[6] = 0;
    v6[7] = 0;
    Dword = ozcollide::DataIn::readDword(a2);
    v8 = Dword;
    v6[8] = Dword;
    if ( Dword > 0x5500000 )
      v9 = -1;
    else
      v9 = 24 * Dword + 8;
    v10 = (_DWORD *)operator new[](v9);
    *v10 = 24;
    v10[1] = v8;
    this = v10 + 2;
    v6[9] = this;
    for ( j = 0; j < v8; ++j )
    {
      v11 = (_DWORD *)(v6[9] + 24 * j);
      *v11 = ozcollide::DataIn::readFloat(a2);
      v11[1] = ozcollide::DataIn::readFloat(a2);
      v11[2] = ozcollide::DataIn::readFloat(a2);
      v11[3] = ozcollide::DataIn::readFloat(a2);
      v11[4] = ozcollide::DataIn::readFloat(a2);
      this = (_DWORD *)ozcollide::DataIn::readFloat(a2);
      v11[5] = this;
    }
  }
  return this;
}


//======================================================================
// ozcollide::AABBTreeAABB::AABBTreeAABB(int)
// address: 0x001D30C4   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide12AABBTreeAABBC1Ei'
ozcollide::AABBTreeAABB *__fastcall ozcollide::AABBTreeAABB::AABBTreeAABB(ozcollide::AABBTreeAABB *this, int a2)
{
  ozcollide::AABBTree::AABBTree(this, 2, a2);
  *(_DWORD *)this = &off_459708;
  return this;
}


//======================================================================
// ozcollide::AABBTreeAABB::loadBinary(ozcollide::DataIn &,ozcollide::AABBTreeAABB**)
// address: 0x001D30F0   size: 0x158 (344 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB::loadBinary(
        ozcollide::AABBTreeAABB *this,
        ozcollide::DataIn *a2,
        ozcollide::AABBTreeAABB **a3)
{
  int Byte; // r5
  ozcollide::AABBTreeAABB *v6; // r7
  unsigned int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r6
  unsigned int v10; // r5
  unsigned int v11; // r0
  _DWORD *v12; // r0
  int v13; // r6
  int v14; // r5
  unsigned int v15; // [sp+4h] [bp-20h]
  _DWORD *v16; // [sp+8h] [bp-1Ch]
  int v17; // [sp+8h] [bp-1Ch]
  unsigned int v18; // [sp+Ch] [bp-18h]
  int Dword; // [sp+10h] [bp-14h]
  _BYTE v21[4]; // [sp+18h] [bp-Ch] BYREF
  _BYTE v22[8]; // [sp+1Ch] [bp-8h] BYREF

  ozcollide::DataIn::read(this, v21, 4);
  if ( (v21[3] << 24) + (v21[2] << 16) + (v21[1] << 8) + v21[0] != 1111638337 )
    return 18;
  Dword = ozcollide::DataIn::readDword(this);
  if ( ozcollide::DataIn::readByte(this) != 2 )
    return 18;
  Byte = ozcollide::DataIn::readByte(this);
  v18 = ozcollide::DataIn::readDword(this);
  v15 = ozcollide::DataIn::readDword(this);
  v6 = (ozcollide::AABBTreeAABB *)operator new(0x78u);
  ozcollide::AABBTreeAABB::AABBTreeAABB(v6, Byte);
  if ( v15 > 0x2E80000 )
    v7 = -1;
  else
    v7 = 44 * v15 + 8;
  v8 = (_DWORD *)operator new[](v7);
  *v8 = 44;
  v9 = v8 + 2;
  v8[1] = v15;
  v10 = v15 - 1;
  v16 = v8 + 2;
  while ( v10 != -1 )
  {
    ozcollide::AABBTreeAABBLeaf::AABBTreeAABBLeaf(v9);
    v9 += 11;
    --v10;
  }
  v11 = -1;
  *((_DWORD *)v6 + 9) = v16;
  if ( v18 <= 0x3F80000 )
    v11 = 32 * v18 + 8;
  v12 = (_DWORD *)operator new[](v11);
  *v12 = 32;
  v12[1] = v18;
  *((_DWORD *)v6 + 2) = v12 + 2;
  while ( Dword > 8 )
  {
    ozcollide::DataIn::read(this, v22, 4);
    v13 = (v22[3] << 24) + (v22[2] << 16) + (v22[1] << 8) + v22[0];
    v14 = ozcollide::DataIn::readDword(this);
    v17 = ozcollide::DataIn::tell(this);
    if ( v13 == 1396985678 )
    {
      ozcollide::AABBTreeAABB::readNODSchunk(v6, this, v14, v18);
    }
    else if ( v13 == 1397114188 )
    {
      ozcollide::AABBTreeAABB::readLEFSchunk(v6, this, v14, v15);
    }
    else
    {
      ozcollide::DataIn::advance(this, v14);
    }
    if ( ozcollide::DataIn::tell(this) - v17 != v14 )
      ozcollide::DataIn::seek(this, v17 + v14);
    Dword = Dword - v14 - 8;
  }
  *(_DWORD *)a2 = v6;
  return 0;
}


//======================================================================
// ozcollide::AABBTreeAABB::isCollideWithBox(ozcollide::AABBTreeNode const&)
// address: 0x001D32CC   size: 0x6E (110 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB::isCollideWithBox(_DWORD *a1, ozcollide::Box *a2)
{
  ozcollide::Box *v2; // r6
  const Box *v6; // r5
  _DWORD *v7; // r0
  const Box *v8; // [sp+4h] [bp-4h] BYREF

  v8 = (const Box *)a2;
  v2 = (ozcollide::Box *)(a1 + 13);
  if ( !ozcollide::Box::isOverlap(a2, (const Box *)(a1 + 13)) )
    return 0;
  if ( *((_DWORD *)a2 + 6) != 0 )
  {
    if ( ozcollide::AABBTreeAABB::isCollideWithBox(a1) == 0 )
    {
LABEL_5:
      if ( *((_DWORD *)a2 + 7) != 0 )
        return ozcollide::AABBTreeAABB::isCollideWithBox(a1);
      return 0;
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 7) != 0 )
      goto LABEL_5;
    if ( *((int *)a2 + 8) <= 0 )
      return 0;
    v6 = *((const Box **)a2 + 9);
    if ( !ozcollide::Box::isOverlap(v2, v6) )
      return 0;
    v7 = (_DWORD *)a1[12];
    ++a1[29];
    if ( v7 != nullptr )
    {
      v8 = v6;
      ozcollide::Vector<ozcollide::Box const*>::add(v7, &v8);
    }
  }
  return 1;
}


//======================================================================
// ozcollide::AABBTreeAABB::isCollideWithBox(ozcollide::Box const&)
// address: 0x001D333A   size: 0x1C (28 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB::isCollideWithBox(ozcollide::AABBTreeAABB *this, const ozcollide::Box *a2)
{
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r5
  int v7; // r6

  *((_DWORD *)this + 29) = 0;
  v3 = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 2);
  v2 = (_DWORD *)((char *)a2 + 12);
  *((_DWORD *)this + 13) = v3;
  *((_DWORD *)this + 14) = v4;
  *((_DWORD *)this + 15) = v5;
  v6 = v2[1];
  v7 = v2[2];
  *((_DWORD *)this + 16) = *v2;
  *((_DWORD *)this + 17) = v6;
  *((_DWORD *)this + 18) = v7;
  *((_DWORD *)this + 12) = 0;
  return ozcollide::AABBTreeAABB::isCollideWithBox(this, *((ozcollide::Box **)this + 2));
}


//======================================================================
// ozcollide::AABBTreeAABB::isCollideWithBox(ozcollide::Box const&,ozcollide::AABBTreeAABB::BoxColResult &)
// address: 0x001D3356   size: 0x4C (76 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB::isCollideWithBox(int a1, ozcollide::Box *this, int a3)
{
  int v3; // r7
  int v7; // r0
  int v8; // r1
  int v9; // r3
  _DWORD *v10; // r5
  int v11; // r1
  int v12; // r3

  v3 = *(unsigned __int8 *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 24) != 0 && *(_DWORD *)(a3 + 4) != 0 && ozcollide::Box::isOverlap(this, **(const Box ***)a3) )
  {
    *(_DWORD *)(a1 + 116) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = a3;
    v7 = *(_DWORD *)this;
    v8 = *((_DWORD *)this + 1);
    v9 = *((_DWORD *)this + 2);
    v10 = (_DWORD *)((char *)this + 12);
    *(_DWORD *)(a3 + 24) = v7;
    *(_DWORD *)(a3 + 28) = v8;
    *(_DWORD *)(a3 + 32) = v9;
    v11 = v10[1];
    v12 = v10[2];
    *(_DWORD *)(a3 + 36) = *v10;
    *(_DWORD *)(a3 + 40) = v11;
    *(_DWORD *)(a3 + 44) = v12;
    ozcollide::Vector<ozcollide::Box const*>::resize(*(unsigned int *)(a1 + 48));
    return ozcollide::AABBTreeAABB::isCollideWithBox((_DWORD *)a1, *(ozcollide::Box **)(a1 + 8));
  }
  return v3;
}


//======================================================================
// ozcollide::AABBTreeAABB::collideWithBox(ozcollide::AABBTreeNode const&)
// address: 0x001D33A2   size: 0x82 (130 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB::collideWithBox(_DWORD *a1, ozcollide::Box *a2)
{
  int result; // r0
  int v5; // r6
  const Box *v6; // r7
  int (__fastcall *v7)(_DWORD *, const Box *, ozcollide::Box *, _DWORD); // r12
  _DWORD *v8; // r0
  ozcollide::Box *v9; // [sp+0h] [bp-14h]
  int v10; // [sp+4h] [bp-10h]
  const Box *v11; // [sp+Ch] [bp-8h] BYREF

  v9 = (ozcollide::Box *)(a1 + 13);
  result = ozcollide::Box::isOverlap(a2, (const Box *)(a1 + 13));
  if ( result == 0 )
    return result;
  if ( *((_DWORD *)a2 + 6) != 0 )
  {
    result = ozcollide::AABBTreeAABB::collideWithBox(a1);
  }
  else
  {
    v5 = *((_DWORD *)a2 + 7);
    if ( v5 == 0 )
    {
      v10 = *((_DWORD *)a2 + 8);
      while ( v5 < v10 )
      {
        v6 = (const Box *)(*((_DWORD *)a2 + 9) + 24 * v5);
        result = ozcollide::Box::isOverlap(v9, v6);
        if ( result != 0 )
        {
          ++a1[29];
          v7 = (int (__fastcall *)(_DWORD *, const Box *, ozcollide::Box *, _DWORD))a1[10];
          if ( v7 != nullptr )
          {
            result = v7(a1, v6, a2, a1[11]);
          }
          else
          {
            v8 = (_DWORD *)a1[12];
            v11 = v6;
            result = ozcollide::Vector<ozcollide::Box const*>::add(v8, &v11);
          }
        }
        ++v5;
      }
      return result;
    }
  }
  if ( *((_DWORD *)a2 + 7) != 0 )
    return ozcollide::AABBTreeAABB::collideWithBox(a1);
  return result;
}


//======================================================================
// ozcollide::AABBTreeAABB::collideWithBox(ozcollide::Box const&,ozcollide::AABBTreeAABB::BoxColResult &)
// address: 0x001D3424   size: 0x146 (326 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB::collideWithBox(int a1, float *a2, unsigned int a3)
{
  float v5; // r6
  float v6; // r5
  float v7; // r5
  float v8; // r6
  float v9; // r5
  int result; // r0
  int v11; // r1
  int v12; // r5
  int v13; // r1
  int v14; // r5
  int v15; // r1
  int v16; // r5
  int v17; // r1
  int v18; // r5
  int v19; // r1
  int v20; // r5
  int v21; // r1
  int v22; // r5
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
              *(_DWORD *)(a1 + 116) = *(_DWORD *)(a3 + 4);
              return result;
            }
          }
        }
      }
    }
    v19 = *((_DWORD *)a2 + 1);
    v20 = *((_DWORD *)a2 + 2);
    *(float *)(a1 + 52) = *a2;
    *(_DWORD *)(a1 + 56) = v19;
    *(_DWORD *)(a1 + 60) = v20;
    v21 = *((_DWORD *)a2 + 4);
    v22 = *((_DWORD *)a2 + 5);
    *(float *)(a1 + 64) = a2[3];
    *(_DWORD *)(a1 + 68) = v21;
    *(_DWORD *)(a1 + 72) = v22;
    ozcollide::Vec3f::operator*=((float *)(a1 + 64), *(float *)(a1 + 28));
  }
  else
  {
    v11 = *((_DWORD *)a2 + 1);
    v12 = *((_DWORD *)a2 + 2);
    *(float *)(a1 + 52) = *a2;
    *(_DWORD *)(a1 + 56) = v11;
    *(_DWORD *)(a1 + 60) = v12;
    v13 = *((_DWORD *)a2 + 4);
    v14 = *((_DWORD *)a2 + 5);
    *(float *)(a1 + 64) = a2[3];
    *(_DWORD *)(a1 + 68) = v13;
    *(_DWORD *)(a1 + 72) = v14;
  }
  v15 = *(_DWORD *)(a1 + 56);
  v16 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a3 + 24) = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a3 + 28) = v15;
  *(_DWORD *)(a3 + 32) = v16;
  v17 = *(_DWORD *)(a1 + 68);
  v18 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a3 + 36) = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a3 + 40) = v17;
  *(_DWORD *)(a3 + 44) = v18;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = a3;
  ozcollide::Vector<ozcollide::Box const*>::resize(a3);
  *(_DWORD *)(a1 + 116) = 0;
  return ozcollide::AABBTreeAABB::collideWithBox((_DWORD *)a1, *(ozcollide::Box **)(a1 + 8));
}


//======================================================================
// ozcollide::AABBTreeAABB::collideWithBox(ozcollide::Box const&,void (*)(ozcollide::AABBTreeAABB const&,ozcollide::Box const&,ozcollide::Box const&,void *),void *)
// address: 0x001D356A   size: 0x24 (36 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB::collideWithBox(
        int this,
        const ozcollide::Box *a2,
        void (*a3)(const ozcollide::AABBTreeAABB *, const ozcollide::Box *, const ozcollide::Box *, void *),
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
    *(_DWORD *)(this + 44) = a4;
    *(_DWORD *)(this + 48) = 0;
    *(_DWORD *)(this + 116) = 0;
    *(_DWORD *)(this + 40) = a3;
    v5 = *(_DWORD *)a2;
    v6 = *((_DWORD *)a2 + 1);
    v7 = *((_DWORD *)a2 + 2);
    v4 = (_DWORD *)((char *)a2 + 12);
    *(_DWORD *)(this + 52) = v5;
    *(_DWORD *)(this + 56) = v6;
    *(_DWORD *)(this + 60) = v7;
    v8 = v4[1];
    v9 = v4[2];
    *(_DWORD *)(this + 64) = *v4;
    *(_DWORD *)(this + 68) = v8;
    *(_DWORD *)(this + 72) = v9;
    return ozcollide::AABBTreeAABB::collideWithBox((_DWORD *)this, *(ozcollide::Box **)(this + 8));
  }
  return this;
}


//======================================================================
// ozcollide::AABBTreeAABB::loadBinary(char const*,ozcollide::AABBTreeAABB**)
// address: 0x001D358E   size: 0x3C (60 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB::loadBinary(
        ozcollide::AABBTreeAABB *this,
        ozcollide::DataIn *a2,
        ozcollide::AABBTreeAABB **a3)
{
  int v5; // r0
  ozcollide::AABBTreeAABB **v6; // r2
  int Binary; // r5
  _BYTE v9[28]; // [sp+4h] [bp-1Ch] BYREF

  ozcollide::DataIn::DataIn((ozcollide::DataIn *)v9);
  v5 = ozcollide::DataIn::open((ozcollide::DataIn *)v9, (const char *)this);
  Binary = 17;
  if ( v5 != 0 )
  {
    Binary = ozcollide::AABBTreeAABB::loadBinary((ozcollide::AABBTreeAABB *)v9, a2, v6);
    if ( Binary == 0 )
      ozcollide::DataIn::close((ozcollide::DataIn *)v9);
  }
  ozcollide::DataIn::~DataIn((ozcollide::DataIn *)v9);
  return Binary;
}


//======================================================================
// ozcollide::AABBTreeAABB::saveBinary(char const*)
// address: 0x001D35CA   size: 0x3A (58 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB::saveBinary(ozcollide::AABBTreeAABB *this, const char *a2, int a3, int a4)
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
    v7 = (*(int (__fastcall **)(ozcollide::AABBTreeAABB *, _DWORD *))(*(_DWORD *)this + 12))(this, v9);
    if ( v7 == 0 )
      ozcollide::DataOut::close((ozcollide::DataOut *)v9);
  }
  ozcollide::DataOut::~DataOut((ozcollide::DataOut *)v9);
  return v7;
}

