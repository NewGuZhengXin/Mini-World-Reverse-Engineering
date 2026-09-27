// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::Box

//======================================================================
// ozcollide::Box::isOverlap(ozcollide::Box const&)const
// address: 0x001D0256   size: 0x92 (146 bytes)
//======================================================================
bool __fastcall ozcollide::Box::isOverlap(ozcollide::Box *this, const Box *a2)
{
  float v3; // r6
  _BOOL4 result; // r0
  float v5; // r6
  float v6; // r6

  v3 = *(float *)&a2->x1 - *(float *)this;
  if ( v3 < 0.0 )
    LODWORD(v3) += 0x80000000;
  result = v3 <= (float)(*(float *)&a2[1].y1 + *((float *)this + 3));
  if ( v3 <= (float)(*(float *)&a2[1].y1 + *((float *)this + 3)) )
  {
    v5 = *(float *)&a2->y1 - *((float *)this + 1);
    if ( v5 < 0.0 )
      LODWORD(v5) += 0x80000000;
    result = v5 <= (float)(*(float *)&a2[2].x1 + *((float *)this + 4));
    if ( v5 <= (float)(*(float *)&a2[2].x1 + *((float *)this + 4)) )
    {
      v6 = *(float *)&a2[1].x1 - *((float *)this + 2);
      if ( v6 < 0.0 )
        LODWORD(v6) += 0x80000000;
      return v6 <= (float)(*(float *)&a2[2].y1 + *((float *)this + 5));
    }
  }
  return result;
}


//======================================================================
// ozcollide::Box::isInside(ozcollide::Vec3f const&)const
// address: 0x001D0D42   size: 0xA8 (168 bytes)
//======================================================================
bool __fastcall ozcollide::Box::isInside(ozcollide::Box *this, const ozcollide::Vec3f *a2)
{
  float v2; // r6
  int v3; // r5
  float v4; // r4
  float v6; // [sp+8h] [bp-14h]
  float v7; // [sp+Ch] [bp-10h]
  float v8; // [sp+10h] [bp-Ch]
  float v9; // [sp+14h] [bp-8h]

  v6 = *((float *)this + 1);
  v2 = *((float *)this + 3);
  v7 = *((float *)this + 4);
  v3 = 0;
  v8 = *((float *)this + 2);
  v9 = *((float *)this + 5);
  if ( *(float *)a2 >= (float)(*(float *)this - v2)
    && *(float *)a2 <= (float)(*(float *)this + v2)
    && *((float *)a2 + 1) >= (float)(v6 - v7)
    && *((float *)a2 + 1) <= (float)(v6 + v7) )
  {
    v4 = *((float *)a2 + 2);
    if ( v4 >= (float)(v8 - v9) )
      return v4 <= (float)(v8 + v9);
  }
  return v3;
}


//======================================================================
// ozcollide::Box::setFromPoints(ozcollide::Vec3f const&,ozcollide::Vec3f const&)
// address: 0x001D4BF8   size: 0xC2 (194 bytes)
//======================================================================
__int64 __fastcall ozcollide::Box::setFromPoints(
        ozcollide::Box *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3)
{
  float v4; // r0
  float v5; // r7
  float v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch]

  LODWORD(v8) = this;
  *((float *)&v8 + 1) = (float)(*((float *)a3 + 2) + *((float *)a2 + 2)) * 0.5;
  v4 = *(float *)a3 + *(float *)a2;
  *((float *)this + 1) = (float)(*((float *)a3 + 1) + *((float *)a2 + 1)) * 0.5;
  *(float *)this = v4 * 0.5;
  *((_DWORD *)this + 2) = HIDWORD(v8);
  v5 = (float)(*(float *)a3 - *(float *)a2) * 0.5;
  *((float *)&v8 + 1) = (float)(*((float *)a3 + 1) - *((float *)a2 + 1)) * 0.5;
  v6 = (float)(*((float *)a3 + 2) - *((float *)a2 + 2)) * 0.5;
  *((float *)this + 5) = v6;
  *((float *)this + 3) = v5;
  *((_DWORD *)this + 4) = HIDWORD(v8);
  if ( v5 < 0.0 )
    *((_DWORD *)this + 3) = LODWORD(v5) + 0x80000000;
  if ( *((float *)&v8 + 1) < 0.0 )
    *((_DWORD *)this + 4) = HIDWORD(v8) + 0x80000000;
  if ( v6 < 0.0 )
    *((_DWORD *)this + 5) = LODWORD(v6) + 0x80000000;
  return v8;
}


//======================================================================
// ozcollide::Box::getEdge(int)const
// address: 0x001D5B8C   size: 0x12C (300 bytes)
//======================================================================
ozcollide::Box *__fastcall ozcollide::Box::getEdge(ozcollide::Box *this, float *a2, int a3)
{
  float v4; // r7
  float v5; // r3
  float v6; // r0
  float v7; // r0
  float v8; // r0
  float v9; // r0
  float v11; // [sp+0h] [bp-3Ch]
  float v12; // [sp+8h] [bp-34h]
  float v13; // [sp+Ch] [bp-30h]
  float v14; // [sp+10h] [bp-2Ch]
  float v15; // [sp+14h] [bp-28h]
  float v16; // [sp+18h] [bp-24h]
  float v17[3]; // [sp+20h] [bp-1Ch] BYREF
  float v18[4]; // [sp+2Ch] [bp-10h] BYREF

  v12 = a2[3];
  v11 = *a2 - v12;
  v14 = a2[4];
  v13 = a2[1];
  v15 = a2[2];
  v16 = a2[5];
  v4 = *a2 + v12;
  v5 = v15 + v16;
  switch ( a3 )
  {
    case 0:
      v6 = v13 - v14;
      v17[2] = v15 - v16;
      v17[0] = v11;
      v17[1] = v13 - v14;
      v18[0] = v4;
      goto LABEL_7;
    case 1:
      v17[0] = *a2 + v12;
      v17[2] = v15 - v16;
      v17[1] = v13 - v14;
      v18[0] = v4;
      goto LABEL_5;
    case 2:
      v17[0] = *a2 + v12;
      v17[1] = v13 + v14;
      v17[2] = v15 - v16;
      v18[0] = v11;
LABEL_5:
      v18[1] = v13 + v14;
      goto LABEL_8;
    case 3:
      v6 = v13 - v14;
      v17[1] = v13 + v14;
      v17[0] = v11;
      v17[2] = v15 - v16;
      v18[0] = v11;
LABEL_7:
      v18[1] = v6;
LABEL_8:
      v18[2] = v15 - v16;
      goto LABEL_25;
    case 4:
      v17[2] = v15 + v16;
      v17[0] = v11;
      v7 = v13 - v14;
      v17[1] = v13 - v14;
      goto LABEL_16;
    case 5:
      v17[0] = *a2 + v12;
      v17[2] = v15 + v16;
      v17[1] = v13 - v14;
      goto LABEL_19;
    case 6:
      v17[0] = *a2 + v12;
      v17[1] = v13 + v14;
      v17[2] = v15 + v16;
      v8 = v11;
      goto LABEL_21;
    case 7:
      v9 = *a2 - v12;
      v17[1] = v13 + v14;
      v17[2] = v15 + v16;
      v17[0] = v11;
      goto LABEL_14;
    case 8:
      v17[2] = v15 - v16;
      v17[0] = v11;
      v17[1] = v13 - v14;
      v9 = v11;
LABEL_14:
      v18[0] = v9;
      v7 = v13 - v14;
      goto LABEL_17;
    case 9:
      v7 = v13 - v14;
      v17[0] = *a2 + v12;
      v17[2] = v15 - v16;
      v17[1] = v13 - v14;
LABEL_16:
      v18[0] = v4;
LABEL_17:
      v18[1] = v7;
      break;
    case 10:
      v17[0] = *a2 + v12;
      v17[1] = v13 + v14;
      v17[2] = v15 - v16;
LABEL_19:
      v18[0] = v4;
      goto LABEL_22;
    case 11:
      v8 = *a2 - v12;
      v17[1] = v13 + v14;
      v17[2] = v15 - v16;
      v17[0] = v11;
LABEL_21:
      v18[0] = v8;
LABEL_22:
      v18[1] = v13 + v14;
      break;
    default:
      v5 = 0.0;
      memset(v17, 0, sizeof(v17));
      v18[0] = 0.0;
      v18[1] = 0.0;
      break;
  }
  v18[2] = v5;
LABEL_25:
  ozcollide::BoxEdge::BoxEdge(this, v17, v18);
  return this;
}

