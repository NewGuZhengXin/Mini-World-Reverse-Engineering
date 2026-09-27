// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BoxSphereBound

//======================================================================
// Ogre::BoxSphereBound::getBox(void)const
// address: 0x0016F170   size: 0x56 (86 bytes)
//======================================================================
Ogre::BoxSphereBound *__fastcall Ogre::BoxSphereBound::getBox(Ogre::BoxSphereBound *this, float *a2)
{
  float v4; // r6
  float v5; // r0
  float v6; // r7
  float v7; // r0

  *((_BYTE *)this + 24) = 0;
  v4 = a2[2] - a2[5];
  v5 = *a2 - a2[3];
  *((float *)this + 1) = a2[1] - a2[4];
  *((float *)this + 2) = v4;
  *(float *)this = v5;
  v6 = a2[1] + a2[4];
  v7 = a2[2] + a2[5];
  *((float *)this + 3) = *a2 + a2[3];
  *((float *)this + 4) = v6;
  *((float *)this + 5) = v7;
  *((_BYTE *)this + 24) = 1;
  return this;
}


//======================================================================
// Ogre::BoxSphereBound::fromBoxBound(Ogre::BoxBound const&)
// address: 0x001715EA   size: 0xB8 (184 bytes)
//======================================================================
float __fastcall Ogre::BoxSphereBound::fromBoxBound(Ogre::BoxSphereBound *this, const Ogre::BoxBound *a2)
{
  float v4; // r6
  float v5; // r0
  float v6; // r7
  float v7; // r6
  float v8; // r0
  float result; // r0

  v4 = (float)(*((float *)a2 + 2) + *((float *)a2 + 5)) * 0.5;
  v5 = *(float *)a2 + *((float *)a2 + 3);
  *((float *)this + 1) = (float)(*((float *)a2 + 1) + *((float *)a2 + 4)) * 0.5;
  *((float *)this + 2) = v4;
  *(float *)this = v5 * 0.5;
  v6 = (float)(*((float *)a2 + 3) - *(float *)a2) * 0.5;
  v7 = (float)(*((float *)a2 + 4) - *((float *)a2 + 1)) * 0.5;
  v8 = (float)(*((float *)a2 + 5) - *((float *)a2 + 2)) * 0.5;
  *((float *)this + 3) = v6;
  *((float *)this + 4) = v7;
  *((float *)this + 5) = v8;
  result = j_sqrt((float)((float)((float)(v6 * v6) + (float)(v7 * v7)) + (float)(v8 * v8)));
  *((float *)this + 6) = result;
  return result;
}


//======================================================================
// Ogre::BoxSphereBound::fromBox(Ogre::Vector3 const&,Ogre::Vector3 const&)
// address: 0x001793AE   size: 0x8C (140 bytes)
//======================================================================
__int64 __fastcall Ogre::BoxSphereBound::fromBox(
        Ogre::BoxSphereBound *this,
        const Ogre::Vector3 *a2,
        const Ogre::Vector3 *a3)
{
  float v4; // r0
  float v5; // r7
  __int64 v7; // [sp+0h] [bp-Ch]
  float v8; // [sp+4h] [bp-8h]

  LODWORD(v7) = this;
  v8 = (float)(*((float *)a2 + 2) + *((float *)a3 + 2)) * 0.5;
  v4 = *(float *)a2 + *(float *)a3;
  *((float *)this + 1) = (float)(*((float *)a2 + 1) + *((float *)a3 + 1)) * 0.5;
  *(float *)this = v4 * 0.5;
  *((float *)this + 2) = v8;
  v5 = (float)(*((float *)a3 + 1) - *((float *)a2 + 1)) * 0.5;
  *((float *)&v7 + 1) = (float)(*((float *)a3 + 2) - *((float *)a2 + 2)) * 0.5;
  *((float *)this + 3) = (float)(*(float *)a3 - *(float *)a2) * 0.5;
  *((float *)this + 4) = v5;
  *((_DWORD *)this + 5) = HIDWORD(v7);
  *((float *)this + 6) = Ogre::Vector3::length((Ogre::BoxSphereBound *)((char *)this + 12));
  return v7;
}


//======================================================================
// Ogre::BoxSphereBound::transformBy(Ogre::Matrix4 const&)const
// address: 0x00195B84   size: 0x186 (390 bytes)
//======================================================================
Ogre::BoxSphereBound *__fastcall Ogre::BoxSphereBound::transformBy(
        Ogre::BoxSphereBound *this,
        const Ogre::Matrix4 *a2,
        int a3)
{
  float v5; // r5
  float v6; // r6
  float v7; // r6
  float v8; // r5
  float v9; // r3
  float v10; // r5
  float v11; // r3
  float v12; // r3
  float v13; // r4
  float v14; // r6
  float v15; // r4
  float v16; // r5
  float v17; // r0
  float v19; // [sp+4h] [bp-50h]
  int k; // [sp+8h] [bp-4Ch]
  int i; // [sp+Ch] [bp-48h]
  int j; // [sp+10h] [bp-44h]
  float v24; // [sp+18h] [bp-3Ch]
  float v25; // [sp+1Ch] [bp-38h]
  _DWORD v26[2]; // [sp+24h] [bp-30h] BYREF
  _DWORD v27[3]; // [sp+2Ch] [bp-28h] BYREF
  float v28; // [sp+38h] [bp-1Ch] BYREF
  float v29; // [sp+3Ch] [bp-18h]
  float v30; // [sp+40h] [bp-14h]
  float v31; // [sp+44h] [bp-10h] BYREF
  float v32; // [sp+48h] [bp-Ch]
  float v33; // [sp+4Ch] [bp-8h]

  Ogre::Matrix4::transformCoord(&v31, (const Ogre::Vector3 *)a3, (float *)a2);
  *(float *)this = v31;
  v5 = v33;
  *((float *)this + 1) = v32;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((float *)this + 2) = v5;
  v26[0] = -1082130432;
  v26[1] = 1065353216;
  for ( i = 0; i != 2; ++i )
  {
    for ( j = 0; j != 2; ++j )
    {
      for ( k = 0; k != 2; ++k )
      {
        v19 = (float)(*(float *)&v26[j] * *((float *)a2 + 4)) + *((float *)a2 + 1);
        v6 = (float)(*(float *)&v26[k] * *((float *)a2 + 5)) + *((float *)a2 + 2);
        v28 = (float)(*(float *)&v26[i] * *((float *)a2 + 3)) + *(float *)a2;
        v29 = v19;
        v30 = v6;
        Ogre::Matrix4::transformCoord(&v31, (const Ogre::Vector3 *)a3, &v28);
        v7 = v31 - *(float *)this;
        v24 = v32 - *((float *)this + 1);
        v25 = v33 - *((float *)this + 2);
        if ( v7 <= *((float *)this + 3) )
          v7 = *((float *)this + 3);
        v8 = *((float *)this + 4);
        *((float *)this + 3) = v7;
        v9 = v24;
        if ( v24 <= v8 )
          v9 = v8;
        v10 = *((float *)this + 5);
        *((float *)this + 4) = v9;
        v11 = v25;
        if ( v25 <= v10 )
          v11 = v10;
        *((float *)this + 5) = v11;
      }
    }
  }
  v27[0] = *(_DWORD *)a3;
  v27[1] = *(_DWORD *)(a3 + 4);
  v27[2] = *(_DWORD *)(a3 + 8);
  v28 = *(float *)(a3 + 16);
  v29 = *(float *)(a3 + 20);
  v30 = *(float *)(a3 + 24);
  v32 = *(float *)(a3 + 36);
  v12 = *(float *)(a3 + 40);
  v13 = *(float *)(a3 + 32);
  v33 = v12;
  v31 = v13;
  v14 = Ogre::Vector3::lengthSqr((Ogre::Vector3 *)v27);
  v15 = Ogre::Vector3::lengthSqr((Ogre::Vector3 *)&v28);
  v16 = Ogre::Vector3::lengthSqr((Ogre::Vector3 *)&v31);
  if ( v15 <= v16 )
    v15 = v16;
  if ( v14 <= v15 )
    v14 = v15;
  v17 = j_sqrt(v14);
  *((float *)this + 6) = v17 * *((float *)a2 + 6);
  return this;
}

