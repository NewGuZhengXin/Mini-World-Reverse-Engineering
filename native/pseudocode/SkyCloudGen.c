// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SkyCloudGen

//======================================================================
// SkyCloudGen::~SkyCloudGen()
// address: 0x002B87C8   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN11SkyCloudGenD1Ev'
void __fastcall SkyCloudGen::~SkyCloudGen(SkyCloudGen *this)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  *(_DWORD *)this = &off_45E5C8;
  v2 = *((void **)this + 23);
  if ( v2 != nullptr )
    operator delete[](v2);
  v3 = *((void **)this + 24);
  if ( v3 != nullptr )
    operator delete[](v3);
  v4 = *((void **)this + 25);
  if ( v4 != nullptr )
    operator delete[](v4);
  Ogre::OSThread::~OSThread(this);
}


//======================================================================
// SkyCloudGen::~SkyCloudGen()
// address: 0x002B8804   size: 0x12 (18 bytes)
//======================================================================
void __fastcall SkyCloudGen::~SkyCloudGen(SkyCloudGen *this)
{
  SkyCloudGen::~SkyCloudGen(this);
  operator delete(this);
}


//======================================================================
// SkyCloudGen::SkyCloudGen(int,int)
// address: 0x002B8818   size: 0x58 (88 bytes)
//======================================================================
// Alternative name is '_ZN11SkyCloudGenC1Eii'
void __fastcall SkyCloudGen::SkyCloudGen(SkyCloudGen *this, int a2, int a3)
{
  Ogre::OSThread::OSThread(this);
  *((_DWORD *)this + 21) = a2;
  *((_DWORD *)this + 22) = a3;
  *(_DWORD *)this = &off_45E5C8;
  *((_DWORD *)this + 15) = 1065353216;
  *((_DWORD *)this + 16) = 1065353216;
  *((_DWORD *)this + 17) = 1065353216;
  *((_DWORD *)this + 18) = 1065353216;
  *((_DWORD *)this + 23) = operator new[](a2 * a2);
  *((_DWORD *)this + 24) = operator new[](4 * *((_DWORD *)this + 21) * *((_DWORD *)this + 21));
  *((_DWORD *)this + 25) = operator new[](*((_DWORD *)this + 22) * *((_DWORD *)this + 22));
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 104) = 0;
}


//======================================================================
// SkyCloudGen::shaderingCloud(Ogre::ColorQuad *,unsigned char *,int,int,Ogre::Vector3 const&,Ogre::ColourValue const&)
// address: 0x002B8880   size: 0x32E (814 bytes)
//======================================================================
int __fastcall SkyCloudGen::shaderingCloud(int a1, _BYTE *a2, int a3, int a4, int a5, float *a6, float *a7)
{
  int result; // r0
  int v9; // r5
  int v10; // r1
  int v11; // r0
  float v12; // r6
  float v13; // r0
  int v14; // r5
  int v15; // r0
  float v16; // r6
  float v17; // r0
  int v18; // [sp+4h] [bp-50h]
  int v19; // [sp+4h] [bp-50h]
  int v20; // [sp+8h] [bp-4Ch]
  int v21; // [sp+8h] [bp-4Ch]
  int v22; // [sp+Ch] [bp-48h]
  int v23; // [sp+Ch] [bp-48h]
  float v24; // [sp+10h] [bp-44h]
  int v25; // [sp+14h] [bp-40h]
  float v26; // [sp+18h] [bp-3Ch]
  float v27; // [sp+1Ch] [bp-38h]
  int i; // [sp+20h] [bp-34h]
  int v29; // [sp+24h] [bp-30h]
  int v30; // [sp+28h] [bp-2Ch]
  _BYTE *v31; // [sp+2Ch] [bp-28h]
  int v32; // [sp+30h] [bp-24h]
  float v33; // [sp+34h] [bp-20h]
  int v37; // [sp+44h] [bp-10h]
  int v38; // [sp+48h] [bp-Ch]

  v37 = 4 * a4;
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= a5 || *(_DWORD *)(a1 + 20) != 0 )
      break;
    if ( *(_BYTE *)(a1 + 104) == 0 )
      Ogre::ThreadSleep((unsigned int)&byte_8, a5, a1);
    v29 = 0;
    v31 = a2;
    while ( v29 < a4 )
    {
      v30 = (int)(float)((float)a4 * *a6);
      v25 = (int)(float)((float)a5 * a6[2]);
      v33 = a6[1];
      v26 = *a7;
      v27 = a7[1];
      v24 = a7[2];
      v18 = v29 - v30;
      v20 = i - v25;
      if ( v29 != v30 || i != v25 )
      {
        if ( ((v18 + (v18 >> 31)) ^ (v18 >> 31)) < ((v20 + (v20 >> 31)) ^ (v20 >> 31)) )
        {
          if ( v25 > i )
            v23 = -1;
          else
            v23 = 1;
          v38 = v18 * v23;
          v32 = a4 * v25;
          v14 = (int)(float)((float)a5 * a6[2]);
          v19 = 0;
          while ( v14 != i )
          {
            v15 = v19 / v20 + v30;
            if ( v15 >= 0 && v15 < a4 && v14 >= 0 && v14 < a5 )
            {
              v16 = (float)*(unsigned __int8 *)(a3 + v15 + v32) / 255.0;
              if ( (float)((float)((float)((float)(v14 - v25) * (float)(0.0 - v33)) / (float)v20) + v33) < v16 )
              {
                v17 = 1.0 - (float)(v16 / 10.0);
                v26 = (float)(v26 * v17) + 0.0;
                v27 = (float)(v27 * v17) + 0.0;
                v24 = (float)(v24 * v17) + 0.0;
              }
            }
            v14 += v23;
            v19 += v38;
            v32 += a4 * v23;
          }
        }
        else
        {
          if ( v30 > v29 )
            v22 = -1;
          else
            v22 = 1;
          v9 = (int)(float)((float)a4 * *a6);
          v10 = v20 * v22;
          v21 = 0;
          while ( v9 != v29 )
          {
            if ( v9 >= 0 && v9 < a4 )
            {
              v11 = v21 / v18 + v25;
              if ( v11 >= 0 && v11 < a5 )
              {
                v12 = (float)*(unsigned __int8 *)(a3 + v9 + v11 * a4) / 255.0;
                if ( (float)((float)((float)((float)(v9 - v30) * (float)(0.0 - v33)) / (float)v18) + v33) < v12 )
                {
                  v13 = 1.0 - (float)(v12 / 10.0);
                  v26 = (float)(v26 * v13) + 0.0;
                  v27 = (float)(v27 * v13) + 0.0;
                  v24 = (float)(v24 * v13) + 0.0;
                }
              }
            }
            v9 += v22;
            v21 += v10;
          }
        }
      }
      if ( v26 > 1.0 )
        v26 = 1.0;
      if ( v27 > 1.0 )
        v27 = 1.0;
      if ( v24 > 1.0 )
        v24 = 1.0;
      *v31 = (unsigned int)(float)(v24 * 255.0);
      v31[1] = (unsigned int)(float)(v27 * 255.0);
      v31[3] = -1;
      v31[2] = (unsigned int)(float)(v26 * 255.0);
      ++v29;
      v31 += 4;
    }
    a2 += v37;
  }
  return result;
}


//======================================================================
// SkyCloudGen::genCloud(void)
// address: 0x002B8BB8   size: 0xD6 (214 bytes)
//======================================================================
void __fastcall SkyCloudGen::genCloud(SkyCloudGen *this)
{
  int v2; // r1
  int v3; // r6
  int i; // r7
  int v5; // r6
  int v6; // r7
  unsigned int v7; // r1
  int v8; // r2
  int j; // r6
  float v10; // [sp+4h] [bp-28h]
  float v11; // [sp+4h] [bp-28h]
  _BYTE v12[24]; // [sp+14h] [bp-18h] BYREF

  Ogre::PerlinNoise2D::PerlinNoise2D((Ogre::PerlinNoise2D *)v12, 32, 32);
  v2 = *((_DWORD *)this + 8);
  if ( *((float *)this + 10) == 0.0 )
    Ogre::PerlinNoise2D::initNoise((Ogre::PerlinNoise2D *)v12, v2);
  else
    Ogre::PerlinNoise2D::initNoise((Ogre::PerlinNoise2D *)v12, v2, *((_DWORD *)this + 9), *((float *)this + 10));
  v3 = *((_DWORD *)this + 21);
  for ( i = 0; i < v3; ++i )
  {
    if ( *((_DWORD *)this + 5) != 0 )
      goto LABEL_19;
    Ogre::PerlinNoise2D::calNoiseDataRow((Ogre::PerlinNoise2D *)v12, *((unsigned __int8 **)this + 23), 4, i);
  }
  Ogre::PerlinNoise2D::makeNoiseSharp(
    *((_DWORD *)this + 23),
    v3,
    v3,
    *((_DWORD *)this + 20),
    *((_DWORD *)this + 19),
    v10);
  SkyCloudGen::shaderingCloud(
    (int)this,
    *((_BYTE **)this + 24),
    *((_DWORD *)this + 23),
    v3,
    v3,
    (float *)this + 12,
    (float *)this + 15);
  v5 = *((_DWORD *)this + 5);
  if ( v5 == 0 )
  {
    v6 = *((_DWORD *)this + 22);
    while ( v5 < v6 )
    {
      if ( *((_DWORD *)this + 5) != 0 )
        goto LABEL_19;
      Ogre::PerlinNoise2D::calNoiseDataRow((Ogre::PerlinNoise2D *)v12, *((unsigned __int8 **)this + 25), 6, v5);
      if ( *((_BYTE *)this + 104) == 0 )
        Ogre::ThreadSleep((unsigned int)&byte_8, v7, v8);
      ++v5;
    }
    for ( j = 0; j < v6 && *((_DWORD *)this + 5) == 0; ++j )
      Ogre::PerlinNoise2D::makeNoiseSharpRow(
        *((_DWORD *)this + 25),
        v6,
        j,
        *((_DWORD *)this + 20),
        *((_DWORD *)this + 19),
        v11);
  }
LABEL_19:
  Ogre::PerlinNoise2D::~PerlinNoise2D((Ogre::PerlinNoise2D *)v12);
}


//======================================================================
// SkyCloudGen::_run(void)
// address: 0x002B8C98   size: 0x1A (26 bytes)
//======================================================================
int __fastcall SkyCloudGen::_run(SkyCloudGen *this)
{
  int v2; // r3
  int result; // r0

  v2 = *((_DWORD *)this + 7);
  result = 1;
  if ( v2 == 1 )
  {
    SkyCloudGen::genCloud(this);
    *((_DWORD *)this + 7) = 3;
    return 2;
  }
  return result;
}

