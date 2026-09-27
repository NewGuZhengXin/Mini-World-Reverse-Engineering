// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BoxBound

//======================================================================
// Ogre::BoxBound::isPointIn(Ogre::Vector3 const&)const
// address: 0x0016F116   size: 0x5A (90 bytes)
//======================================================================
bool __fastcall Ogre::BoxBound::isPointIn(Ogre::BoxBound *this, const Ogre::Vector3 *a2)
{
  float v2; // r6
  _BOOL4 result; // r0
  float v5; // r6
  float v6; // r5

  v2 = *(float *)a2;
  if ( *(float *)a2 <= *(float *)this )
    return false;
  result = v2 < *((float *)this + 3);
  if ( v2 >= *((float *)this + 3) )
    return result;
  if ( *((float *)a2 + 1) <= *((float *)this + 1) )
    return false;
  v5 = *((float *)a2 + 1);
  result = v5 < *((float *)this + 4);
  if ( v5 >= *((float *)this + 4) )
    return result;
  v6 = *((float *)a2 + 2);
  return v6 > *((float *)this + 2) && v6 < *((float *)this + 5);
}


//======================================================================
// Ogre::BoxBound::operator+=(Ogre::Vector3 const&)
// address: 0x0017154A   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall Ogre::BoxBound::operator+=(int result, float *a2)
{
  float v3; // r7
  float v4; // r7
  float v5; // r7
  float v6; // r7
  float v7; // r7
  float v8; // r6
  float v9; // r1
  int v10; // r2
  int v11; // r3

  if ( *(_BYTE *)(result + 24) != 0 )
  {
    v3 = *(float *)result;
    if ( *(float *)result >= *a2 )
      v3 = *a2;
    *(float *)result = v3;
    v4 = *(float *)(result + 4);
    if ( v4 >= a2[1] )
      v4 = a2[1];
    *(float *)(result + 4) = v4;
    v5 = *(float *)(result + 8);
    if ( v5 >= a2[2] )
      v5 = a2[2];
    *(float *)(result + 8) = v5;
    v6 = *(float *)(result + 12);
    if ( v6 <= *a2 )
      v6 = *a2;
    *(float *)(result + 12) = v6;
    v7 = *(float *)(result + 16);
    if ( v7 <= a2[1] )
      v7 = a2[1];
    *(float *)(result + 16) = v7;
    v8 = *(float *)(result + 20);
    if ( v8 <= a2[2] )
      v8 = a2[2];
    *(float *)(result + 20) = v8;
  }
  else
  {
    v9 = *a2;
    *(float *)(result + 12) = v9;
    v10 = *((_DWORD *)a2 + 1);
    *(_DWORD *)(result + 16) = v10;
    v11 = *((_DWORD *)a2 + 2);
    *(float *)result = v9;
    *(_DWORD *)(result + 4) = v10;
    *(_DWORD *)(result + 20) = v11;
    *(_DWORD *)(result + 8) = v11;
    *(_BYTE *)(result + 24) = 1;
  }
  return result;
}


//======================================================================
// Ogre::BoxBound::getCenter(void)const
// address: 0x0017FD44   size: 0x44 (68 bytes)
//======================================================================
Ogre::BoxBound *__fastcall Ogre::BoxBound::getCenter(Ogre::BoxBound *this, float *a2)
{
  float v3; // r7
  float v4; // r0

  v3 = (float)(a2[1] + a2[4]) * 0.5;
  v4 = (float)(a2[2] + a2[5]) * 0.5;
  *(float *)this = (float)(*a2 + a2[3]) * 0.5;
  *((float *)this + 1) = v3;
  *((float *)this + 2) = v4;
  return this;
}


//======================================================================
// Ogre::BoxBound::intersectBoxBound(Ogre::BoxBound const&)const
// address: 0x00182088   size: 0x5A (90 bytes)
//======================================================================
bool __fastcall Ogre::BoxBound::intersectBoxBound(Ogre::BoxBound *this, const Ogre::BoxBound *a2)
{
  int v2; // r6

  v2 = 0;
  if ( *(float *)this <= *((float *)a2 + 3)
    && *(float *)a2 <= *((float *)this + 3)
    && *((float *)this + 1) <= *((float *)a2 + 4)
    && *((float *)a2 + 1) <= *((float *)this + 4)
    && *((float *)this + 2) <= *((float *)a2 + 5) )
  {
    return *((float *)a2 + 2) <= *((float *)this + 5);
  }
  return v2;
}


//======================================================================
// Ogre::BoxBound::transformBy(Ogre::Matrix4 const&)const
// address: 0x0019588E   size: 0x158 (344 bytes)
//======================================================================
Ogre::BoxBound *__fastcall Ogre::BoxBound::transformBy(
        Ogre::BoxBound *this,
        const Ogre::Matrix4 *a2,
        const Ogre::Vector3 *a3)
{
  float v5; // r0
  float v6; // r6
  float v7; // r3
  float v8; // r2
  float v9; // r1
  float v10; // r0
  float v11; // r2
  float v12; // r6
  float v14[3]; // [sp+1Ch] [bp-70h] BYREF
  float v15[3]; // [sp+28h] [bp-64h] BYREF
  float v16[3]; // [sp+34h] [bp-58h] BYREF
  float v17[3]; // [sp+40h] [bp-4Ch] BYREF
  float v18[3]; // [sp+4Ch] [bp-40h] BYREF
  float v19[3]; // [sp+58h] [bp-34h] BYREF
  float v20[3]; // [sp+64h] [bp-28h] BYREF
  float v21[3]; // [sp+70h] [bp-1Ch] BYREF
  float v22[2]; // [sp+7Ch] [bp-10h] BYREF
  float v23; // [sp+84h] [bp-8h]

  v5 = *((float *)a2 + 1);
  v6 = *((float *)a2 + 2);
  v23 = *((float *)a2 + 5);
  v7 = *(float *)a2;
  v15[1] = v5;
  v16[1] = v5;
  v16[2] = v23;
  v18[1] = v5;
  v8 = *((float *)a2 + 4);
  v20[1] = v5;
  v9 = *((float *)a2 + 3);
  v15[2] = v6;
  v17[2] = v6;
  v18[2] = v6;
  v19[2] = v6;
  v17[1] = v8;
  v18[0] = v9;
  v19[0] = v9;
  v19[1] = v8;
  v20[0] = v9;
  v20[2] = v23;
  v21[1] = v8;
  v21[2] = v23;
  v22[0] = v9;
  v22[1] = v8;
  v15[0] = v7;
  v16[0] = v7;
  v17[0] = v7;
  v21[0] = v7;
  Ogre::Matrix4::transformCoord(v14, a3, v15);
  v15[0] = v14[0];
  v15[2] = v14[2];
  v15[1] = v14[1];
  Ogre::Matrix4::transformCoord(v14, a3, v16);
  v16[0] = v14[0];
  v16[1] = v14[1];
  v16[2] = v14[2];
  Ogre::Matrix4::transformCoord(v14, a3, v17);
  v17[0] = v14[0];
  v17[1] = v14[1];
  v17[2] = v14[2];
  Ogre::Matrix4::transformCoord(v14, a3, v18);
  v18[0] = v14[0];
  v18[1] = v14[1];
  v18[2] = v14[2];
  Ogre::Matrix4::transformCoord(v14, a3, v19);
  v19[0] = v14[0];
  v19[1] = v14[1];
  v19[2] = v14[2];
  Ogre::Matrix4::transformCoord(v14, a3, v20);
  v20[0] = v14[0];
  v20[1] = v14[1];
  v20[2] = v14[2];
  Ogre::Matrix4::transformCoord(v14, a3, v21);
  v21[0] = v14[0];
  v21[1] = v14[1];
  v21[2] = v14[2];
  Ogre::Matrix4::transformCoord(v14, a3, v22);
  v10 = v14[0];
  v11 = v14[1];
  v12 = v14[2];
  *((_BYTE *)this + 24) = 0;
  v22[0] = v10;
  v22[1] = v11;
  v23 = v12;
  Ogre::BoxBound::operator+=((int)this, v15);
  Ogre::BoxBound::operator+=((int)this, v16);
  Ogre::BoxBound::operator+=((int)this, v17);
  Ogre::BoxBound::operator+=((int)this, v18);
  Ogre::BoxBound::operator+=((int)this, v19);
  Ogre::BoxBound::operator+=((int)this, v20);
  Ogre::BoxBound::operator+=((int)this, v21);
  Ogre::BoxBound::operator+=((int)this, v22);
  return this;
}


//======================================================================
// Ogre::BoxBound::transformProjectBy(Ogre::Matrix4 const&)const
// address: 0x001959E6   size: 0xAC (172 bytes)
//======================================================================
Ogre::BoxBound *__fastcall Ogre::BoxBound::transformProjectBy(Ogre::BoxBound *this, const Ogre::Matrix4 *a2, float *a3)
{
  float *v3; // r5
  int v4; // r7
  int v5; // r4
  int v7; // r0
  int v8; // r2
  float v9; // r3
  float v10; // r1
  float v13[3]; // [sp+14h] [bp-80h] BYREF
  float v14; // [sp+20h] [bp-74h] BYREF
  float v15; // [sp+24h] [bp-70h]
  float v16; // [sp+28h] [bp-6Ch]
  float v17; // [sp+2Ch] [bp-68h]
  _DWORD v18[7]; // [sp+30h] [bp-64h] BYREF
  int v19; // [sp+4Ch] [bp-48h]
  int v20; // [sp+50h] [bp-44h]
  int v21; // [sp+54h] [bp-40h]
  int v22; // [sp+58h] [bp-3Ch]
  int v23; // [sp+5Ch] [bp-38h]
  int v24; // [sp+60h] [bp-34h]
  int v25; // [sp+64h] [bp-30h]
  int v26; // [sp+68h] [bp-2Ch]
  int v27; // [sp+6Ch] [bp-28h]
  int v28; // [sp+70h] [bp-24h]
  int v29; // [sp+74h] [bp-20h]
  int v30; // [sp+78h] [bp-1Ch]
  int v31; // [sp+7Ch] [bp-18h]
  int v32; // [sp+80h] [bp-14h]
  int v33; // [sp+84h] [bp-10h]
  int v34; // [sp+88h] [bp-Ch]
  int v35; // [sp+8Ch] [bp-8h]
  char v36; // [sp+90h] [bp-4h] BYREF

  v3 = (float *)v18;
  v35 = *((_DWORD *)a2 + 5);
  v18[5] = v35;
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 2);
  v7 = *((_DWORD *)a2 + 1);
  v8 = *((_DWORD *)a2 + 3);
  v19 = *((_DWORD *)a2 + 4);
  v25 = v19;
  v31 = v19;
  v34 = v19;
  v18[0] = v4;
  v18[1] = v7;
  v18[2] = v5;
  v18[3] = v4;
  v18[4] = v7;
  v18[6] = v4;
  v20 = v5;
  v21 = v8;
  v22 = v7;
  v23 = v5;
  v24 = v8;
  v26 = v5;
  v27 = v8;
  v28 = v7;
  v29 = v35;
  v30 = v4;
  v32 = v35;
  v33 = v8;
  *((_BYTE *)this + 24) = 0;
  while ( v3 != (float *)&v36 )
  {
    v9 = v3[1];
    v14 = *v3;
    v10 = v3[2];
    v15 = v9;
    v16 = v10;
    v17 = 1.0;
    Ogre::Matrix4::transformVec4(a3, &v14, &v14);
    v3 += 3;
    v13[0] = v14 / v17;
    v13[1] = v15 / v17;
    v13[2] = v16 / v17;
    Ogre::BoxBound::operator+=((int)this, v13);
  }
  return this;
}


//======================================================================
// Ogre::BoxBound::setVertexBuffer(float const*,unsigned int,unsigned int)
// address: 0x00195A92   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::BoxBound::setVertexBuffer(int this, float *a2, unsigned int a3, unsigned int a4)
{
  int v5; // r6

  v5 = this;
  *(_BYTE *)(this + 24) = 0;
  while ( a4 != 0 )
  {
    this = Ogre::BoxBound::operator+=(v5, a2);
    a2 = (float *)((char *)a2 + a3);
    --a4;
  }
  return this;
}

