// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockGeomTemplate

//======================================================================
// BlockGeomTemplate::initGetGeomDesc(GetGeomDesc &)
// address: 0x00299A3C   size: 0x28 (40 bytes)
//======================================================================
void *__fastcall BlockGeomTemplate::initGetGeomDesc(int a1, void *a2)
{
  void *result; // r0

  result = j_memset(a2, 0, 0x64u);
  *((_DWORD *)a2 + 4) = 2;
  *((_DWORD *)a2 + 5) = 1065353216;
  *((_DWORD *)a2 + 7) = 2139095039;
  *((_BYTE *)a2 + 44) = 0;
  *((_DWORD *)a2 + 21) = 2139095039;
  return result;
}


//======================================================================
// BlockGeomTemplate::BlockGeomTemplate(void)
// address: 0x00299A68   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17BlockGeomTemplateC1Ev'
void __fastcall BlockGeomTemplate::BlockGeomTemplate(BlockGeomTemplate *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
}


//======================================================================
// BlockGeomTemplate::~BlockGeomTemplate()
// address: 0x00299A7E   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN17BlockGeomTemplateD1Ev'
void __fastcall BlockGeomTemplate::~BlockGeomTemplate(BlockGeomTemplate *this)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *((void **)this + 6);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 3);
  if ( v3 != nullptr )
    operator delete(v3);
  if ( *(_DWORD *)this != 0 )
    operator delete(*(void **)this);
}


//======================================================================
// BlockGeomTemplate::transformSRT(unsigned int,GetGeomDesc const*)
// address: 0x00299CD0   size: 0x280 (640 bytes)
//======================================================================
float __fastcall BlockGeomTemplate::transformSRT(int a1, int a2, int a3)
{
  int v3; // r2
  float result; // r0
  unsigned int i; // r3
  int v6; // r4
  __int16 *v7; // r4
  float v8; // r6
  float v9; // r1
  float v10; // r6
  float v11; // r0
  float v12; // r7
  int v13; // r6
  _BYTE *v14; // r6
  unsigned int v15; // r0
  float v16; // [sp+10h] [bp-84h]
  float v18; // [sp+1Ch] [bp-78h]
  float v19; // [sp+1Ch] [bp-78h]
  unsigned int v20; // [sp+20h] [bp-74h]
  int v22; // [sp+28h] [bp-6Ch]
  float v23; // [sp+2Ch] [bp-68h]
  __int64 v24; // [sp+30h] [bp-64h] BYREF
  float v25; // [sp+38h] [bp-5Ch] BYREF
  float v26; // [sp+3Ch] [bp-58h]
  float v27; // [sp+40h] [bp-54h]
  float v28; // [sp+44h] [bp-50h] BYREF
  int v29; // [sp+48h] [bp-4Ch]
  float v30; // [sp+4Ch] [bp-48h]
  float v31[17]; // [sp+50h] [bp-44h] BYREF

  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v31);
  v29 = 1065353216;
  v28 = 0.0;
  v3 = *(_DWORD *)(a3 + 16);
  v30 = 0.0;
  result = Ogre::Matrix4::makeRotateMatrix((Ogre::Matrix4 *)v31, (const Ogre::Vector3 *)&v28, flt_445D84[v3]);
  for ( i = 0; ; i = v20 + 1 )
  {
    v20 = i;
    v6 = *(_DWORD *)(a1 + 12);
    if ( i >= -858993459 * ((*(_DWORD *)(a1 + 16) - v6) >> 2) )
      break;
    v7 = (__int16 *)(v6 + 20 * i);
    v22 = 20 * i;
    v8 = (float)((float)*v7 / 100.0) - 0.5;
    v23 = (float)((float)v7[1] / 100.0) - 0.5;
    v27 = (float)((float)v7[2] / 100.0) - 0.5;
    v18 = (float)((float)((float)*((unsigned __int8 *)v7 + 8) + (float)*((unsigned __int8 *)v7 + 8)) / 255.0) - 1.0;
    v16 = (float)((float)((float)*((unsigned __int8 *)v7 + 9) + (float)*((unsigned __int8 *)v7 + 9)) / 255.0) - 1.0;
    v30 = (float)((float)((float)*((unsigned __int8 *)v7 + 10) + (float)*((unsigned __int8 *)v7 + 10)) / 255.0) - 1.0;
    v29 = LODWORD(v16);
    v9 = *(float *)a3;
    v28 = v18;
    v25 = v8 + v9;
    v10 = v8 + v9;
    v26 = v23 + *(float *)(a3 + 4);
    v11 = v27 + *(float *)(a3 + 8);
    v27 = v11;
    if ( *(_BYTE *)(a3 + 12) != 0 )
    {
      LODWORD(v25) = LODWORD(v10) + 0x80000000;
      LODWORD(v28) = LODWORD(v18) + 0x80000000;
    }
    if ( *(_BYTE *)(a3 + 13) != 0 )
    {
      LODWORD(v27) = LODWORD(v11) + 0x80000000;
      LODWORD(v30) += 0x80000000;
    }
    if ( *(_BYTE *)(a3 + 14) != 0 )
    {
      LODWORD(v26) += 0x80000000;
      v29 = LODWORD(v16) + 0x80000000;
    }
    v19 = (float)((float)((float)((float)(v25 * v31[1]) + (float)(v26 * v31[5])) + (float)(v27 * v31[9])) + v31[13])
        + 0.5;
    v12 = (float)((float)((float)((float)(v25 * v31[2]) + (float)(v26 * v31[6])) + (float)(v27 * v31[10])) + v31[14])
        + 0.5;
    v25 = (float)((float)((float)((float)(v25 * v31[0]) + (float)(v26 * v31[4])) + (float)(v27 * v31[8])) + v31[12])
        + 0.5;
    v26 = v19;
    v27 = v12;
    Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v31, (Ogre::Vector3 *)&v28, (const Ogre::Vector3 *)&v28);
    v13 = *(_DWORD *)(a1 + 12);
    PackVertPos(&v24, &v25);
    *(_QWORD *)(v13 + v22) = v24;
    v14 = (_BYTE *)(*(_DWORD *)(a1 + 12) + v22);
    v15 = PackVertNormal((const Ogre::Vector3 *)&v28);
    v14[9] = BYTE1(v15);
    v14[10] = BYTE2(v15);
    v14[8] = v15;
    LODWORD(result) = HIBYTE(v15);
    v14[11] = LOBYTE(result);
  }
  return result;
}


//======================================================================
// BlockGeomTemplate::transformUniHeight(unsigned int,GetGeomDesc const*)
// address: 0x00299F60   size: 0x180 (384 bytes)
//======================================================================
unsigned int __fastcall BlockGeomTemplate::transformUniHeight(int a1, int a2, int a3)
{
  float v3; // r5
  unsigned int result; // r0
  int v6; // r2
  int v7; // r6
  int v8; // r6
  unsigned int v9; // r6
  float v10; // r5
  int v11; // r3
  int v12; // r7
  int v13; // r3
  int v14; // r7
  unsigned int i; // [sp+4h] [bp-10h]
  int v16; // [sp+8h] [bp-Ch]
  int v17; // [sp+8h] [bp-Ch]
  int v18; // [sp+8h] [bp-Ch]
  int v19; // [sp+Ch] [bp-8h]

  v3 = *(float *)(a3 + 20);
  v16 = *(_DWORD *)(a3 + 24);
  if ( v3 <= 0.0 || (result = v3 < 1.0, v3 >= 1.0) )
  {
    result = v3 > -1.0;
    if ( v3 <= -1.0 )
      return result;
    result = v3 < 0.0;
    if ( v3 >= 0.0 || a2 == 5 )
      return result;
    v9 = 0;
    v18 = a2 != 4 ? v16 : 0;
    LODWORD(v10) = LODWORD(v3) + 0x80000000;
    while ( 1 )
    {
      v11 = *(_DWORD *)(a1 + 12);
      if ( v9 >= -858993459 * ((*(_DWORD *)(a1 + 16) - v11) >> 2) )
        return result;
      v12 = 20 * v9;
      v13 = v11 + 20 * v9;
      result = (unsigned __int8)(unsigned int)(float)(100.0 - (float)((float)(100 - *(__int16 *)(v13 + 2)) * v10));
      *(_WORD *)(v13 + 2) = result;
      if ( v18 == 1 )
      {
        v14 = *(_DWORD *)(a1 + 12) + v12;
        result = (unsigned int)(float)((float)*(unsigned __int8 *)(v14 + 17) * v10);
      }
      else
      {
        if ( v18 != 2 )
          goto LABEL_24;
        v14 = *(_DWORD *)(a1 + 12) + v12;
        result = ~(unsigned int)(float)((float)(255 - *(unsigned __int8 *)(v14 + 17)) * v10);
      }
      *(_BYTE *)(v14 + 17) = result;
LABEL_24:
      ++v9;
    }
  }
  if ( a2 != 4 )
  {
    v17 = a2 != 5 ? v16 : 0;
    for ( i = 0; ; ++i )
    {
      v6 = *(_DWORD *)(a1 + 12);
      if ( i >= -858993459 * ((*(_DWORD *)(a1 + 16) - v6) >> 2) )
        return result;
      v7 = 20 * i;
      v19 = v6 + 20 * i;
      result = (unsigned __int8)(unsigned int)(float)((float)*(__int16 *)(v19 + 2) * v3);
      *(_WORD *)(v19 + 2) = result;
      if ( v17 == 1 )
        break;
      if ( v17 == 2 && a2 != 5 )
      {
        v8 = *(_DWORD *)(a1 + 12) + v7;
        result = (unsigned int)(float)((float)*(unsigned __int8 *)(v8 + 17) * v3);
LABEL_12:
        *(_BYTE *)(v8 + 17) = result;
        continue;
      }
LABEL_13:
      ;
    }
    if ( a2 == 5 )
      goto LABEL_13;
    v8 = *(_DWORD *)(a1 + 12) + v7;
    result = ~(unsigned int)(float)((float)(255 - *(unsigned __int8 *)(v8 + 17)) * v3);
    goto LABEL_12;
  }
  return result;
}


//======================================================================
// BlockGeomTemplate::transform4Height(unsigned int,GetGeomDesc const*)
// address: 0x0029A0EC   size: 0x88 (136 bytes)
//======================================================================
unsigned __int64 __fastcall BlockGeomTemplate::transform4Height(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int i; // r5
  int v4; // r3
  int v5; // r4
  unsigned int v6; // r7

  if ( a2 != 4 )
  {
    for ( i = 0; ; ++i )
    {
      v4 = *(_DWORD *)(a1 + 12);
      if ( i >= -858993459 * ((*(_DWORD *)(a1 + 16) - v4) >> 2) )
        break;
      v5 = v4 + 20 * i;
      v6 = a3 + 4 * (2 * (*(__int16 *)(v5 + 4) / 100) + *(__int16 *)v5 / 100);
      *(_WORD *)(v5 + 2) = (unsigned __int8)(unsigned int)(float)((float)*(__int16 *)(v5 + 2) * *(float *)(v6 + 28));
      if ( a2 != 5 )
        *(_BYTE *)(v5 + 17) = ~(unsigned int)(float)((float)(255 - *(unsigned __int8 *)(v5 + 17)) * *(float *)(v6 + 28));
    }
  }
  return __PAIR64__(a3, a2);
}


//======================================================================
// BlockGeomTemplate::transformUVRot(unsigned int,GetGeomDesc const*)
// address: 0x0029A178   size: 0x6A (106 bytes)
//======================================================================
int __fastcall BlockGeomTemplate::transformUVRot(int result, int a2, int a3)
{
  int v3; // r7
  unsigned int i; // r4
  int v5; // r3
  int v6; // r5
  __int64 v7; // r0
  float v8; // [sp+0h] [bp-14h]
  float v10; // [sp+8h] [bp-Ch] BYREF
  float v11; // [sp+Ch] [bp-8h]

  v3 = result;
  if ( a2 != 4 )
  {
    for ( i = 0; ; ++i )
    {
      v5 = *(_DWORD *)(v3 + 12);
      if ( i >= -858993459 * ((*(_DWORD *)(v3 + 16) - v5) >> 2) )
        break;
      v6 = v5 + 20 * i;
      v8 = (float)*(unsigned __int8 *)(v6 + 17) / 255.0;
      v10 = (float)*(unsigned __int8 *)(v6 + 16) / 255.0;
      v11 = v8;
      LODWORD(v7) = a3 + 48;
      HIDWORD(v7) = &v10;
      Ogre::Matrix3::transform(v7, (const Ogre::Vector2 *)&v10);
      *(_BYTE *)(v6 + 16) = PackFloat2UV(v10);
      result = PackFloat2UV(v11);
      *(_BYTE *)(v6 + 17) = result;
    }
  }
  return result;
}


//======================================================================
// BlockGeomTemplate::transformClipXZ(unsigned int,GetGeomDesc const*)
// address: 0x0029A1EC   size: 0x1DC (476 bytes)
//======================================================================
int __fastcall BlockGeomTemplate::transformClipXZ(int result, int a2, float *a3)
{
  unsigned int i; // r2
  int v4; // r3
  __int16 *v5; // r7
  float v6; // r4
  int v7; // r0
  float v8; // r5
  float v9; // r4
  float v10; // [sp+8h] [bp-3Ch]
  unsigned int v11; // [sp+Ch] [bp-38h]
  float v12; // [sp+14h] [bp-30h]
  float v13; // [sp+18h] [bp-2Ch]
  float v14; // [sp+1Ch] [bp-28h]
  float v15; // [sp+20h] [bp-24h]
  int v16; // [sp+24h] [bp-20h]
  __int64 v17; // [sp+28h] [bp-1Ch] BYREF
  float v18[2]; // [sp+34h] [bp-10h] BYREF
  float v19; // [sp+3Ch] [bp-8h]

  v12 = a3[21];
  v16 = result;
  v13 = a3[22];
  v15 = a3[24];
  v14 = a3[23];
  for ( i = 0; ; i = v11 + 1 )
  {
    v11 = i;
    v4 = *(_DWORD *)(v16 + 12);
    if ( i >= -858993459 * ((*(_DWORD *)(v16 + 16) - v4) >> 2) )
      break;
    v5 = (__int16 *)(v4 + 20 * i);
    v10 = (float)*v5 / 100.0;
    v6 = (float)v5[1] / 100.0;
    v19 = (float)v5[2] / 100.0;
    v7 = *((unsigned __int8 *)v5 + 16);
    v18[0] = v10;
    v18[1] = v6;
    v8 = (float)v7 / 255.0;
    v9 = (float)*((unsigned __int8 *)v5 + 17) / 255.0;
    if ( v10 == 0.0 )
    {
      v8 = (float)((float)((float)(v8 - 0.5) * (float)(v12 - 0.5)) / (float)(v10 - 0.5)) + 0.5;
      v18[0] = v12;
    }
    else if ( v10 == 1.0 )
    {
      v8 = (float)((float)((float)(v8 - 0.5) * (float)(v13 - 0.5)) + (float)((float)(v8 - 0.5) * (float)(v13 - 0.5)))
         + 0.5;
      v18[0] = v13;
    }
    if ( v19 == 0.0 )
    {
      v9 = (float)((float)((float)(v9 - 0.5) * (float)(v14 - 0.5)) / (float)(v19 - 0.5)) + 0.5;
      v19 = v14;
    }
    else if ( v19 == 1.0 )
    {
      v9 = (float)((float)((float)(v9 - 0.5) * (float)(v15 - 0.5)) + (float)((float)(v9 - 0.5) * (float)(v15 - 0.5)))
         + 0.5;
      v19 = v15;
    }
    PackVertPos(&v17, v18);
    *(_QWORD *)v5 = v17;
    *((_BYTE *)v5 + 16) = PackFloat2UV(v8);
    result = PackFloat2UV(v9);
    *((_BYTE *)v5 + 17) = result;
  }
  return result;
}


//======================================================================
// BlockGeomTemplate::getBoundBox(WCoord &,WCoord &,unsigned int,float,int,bool)
// address: 0x0029A3D4   size: 0xCA (202 bytes)
//======================================================================
int __fastcall BlockGeomTemplate::getBoundBox(_DWORD *a1, int *a2, int *a3, int a4, float a5, int a6, char a7)
{
  _DWORD *v9; // r3
  int v10; // r2
  int v11; // r1
  int result; // r0
  int v13; // r2
  int v14; // r1
  int v15; // r6
  int v16; // r3

  v9 = *(_DWORD **)(4 * a4 + *a1);
  *a2 = v9[22];
  a2[1] = v9[23];
  a2[2] = v9[24];
  v10 = v9[25];
  *a3 = v10;
  a3[1] = v9[26];
  a3[2] = v9[27];
  if ( a7 != 0 )
  {
    v11 = 100 - *a2;
    *a2 = 100 - v10;
    *a3 = v11;
  }
  if ( a5 >= 0.0 )
  {
    result = a5 < 1.0;
    if ( a5 < 1.0 )
    {
      result = (int)(float)((float)a3[1] * a5);
      a3[1] = result;
    }
  }
  else
  {
    result = (int)(float)((float)(100 - a2[1]) * COERCE_FLOAT(LODWORD(a5) + 0x80000000));
    a2[1] = 100 - result;
  }
  if ( a6 != 2 )
  {
    result = *a2;
    v13 = *a3;
    v14 = a2[2];
    v15 = a3[2];
    if ( a6 == 3 )
    {
      result = 100 - result;
      *a2 = 100 - v13;
      a2[2] = 100 - v15;
      v16 = 100 - v14;
      *a3 = result;
LABEL_12:
      a3[2] = v16;
      return result;
    }
    if ( a6 == 0 )
    {
      *a2 = v14;
      a2[2] = 100 - v13;
      v16 = 100 - result;
      *a3 = v15;
      goto LABEL_12;
    }
    *a2 = 100 - v15;
    a2[2] = result;
    *a3 = 100 - v14;
    a3[2] = v13;
  }
  return result;
}


//======================================================================
// BlockGeomTemplate::loadFromModel(Ogre::XMLNode &)
// address: 0x0029A880   size: 0x410 (1040 bytes)
//======================================================================
void __fastcall BlockGeomTemplate::loadFromModel(BlockGeomTemplate *this, TiXmlElement **a2)
{
  const char *v3; // r4
  const char *Name; // r0
  int v5; // r2
  unsigned int v6; // r3
  const char *v7; // r1
  TiXmlElement *i; // r0
  int v9; // r2
  int v10; // r6
  __int64 v11; // r0
  char *v12; // r0
  int v13; // r5
  char *v14; // r4
  int v15; // r6
  const char *v16; // r0
  int v17; // r6
  int v18; // r5
  _DWORD *v19; // r3
  double *v20; // r5
  float v21; // r0
  float v22; // r0
  float v23; // r0
  double v24; // r0
  float v25; // r0
  float v26; // r0
  char v27; // r0
  int v28; // r5
  int k; // r5
  unsigned int m; // r3
  int v31; // r2
  __int16 *v32; // r1
  int v33; // r0
  int v34; // r2
  int v35; // r1
  int v36; // [sp+0h] [bp-1CCh]
  int v37; // [sp+0h] [bp-1CCh]
  int v38; // [sp+4h] [bp-1C8h]
  double *v39; // [sp+4h] [bp-1C8h]
  double *v40; // [sp+4h] [bp-1C8h]
  int v41; // [sp+4h] [bp-1C8h]
  int v42; // [sp+4h] [bp-1C8h]
  int j; // [sp+8h] [bp-1C4h]
  int v44; // [sp+8h] [bp-1C4h]
  int v45; // [sp+Ch] [bp-1C0h]
  float v46; // [sp+10h] [bp-1BCh]
  int v47; // [sp+10h] [bp-1BCh]
  int v48; // [sp+10h] [bp-1BCh]
  unsigned int v50; // [sp+18h] [bp-1B4h]
  unsigned int v51; // [sp+18h] [bp-1B4h]
  int v52; // [sp+1Ch] [bp-1B0h]
  int v53; // [sp+20h] [bp-1ACh]
  int v54; // [sp+24h] [bp-1A8h]
  _WORD *v55; // [sp+28h] [bp-1A4h]
  __int64 v56; // [sp+30h] [bp-19Ch] BYREF
  TiXmlElement *v57; // [sp+38h] [bp-194h] BYREF
  float v58[3]; // [sp+3Ch] [bp-190h] BYREF
  int v59; // [sp+48h] [bp-184h] BYREF
  int v60; // [sp+4Ch] [bp-180h]
  unsigned int v61; // [sp+50h] [bp-17Ch]
  _DWORD v62[3]; // [sp+54h] [bp-178h] BYREF
  char v63; // [sp+60h] [bp-16Ch]
  char v64; // [sp+61h] [bp-16Bh]
  char v65; // [sp+62h] [bp-16Ah]
  char v66; // [sp+63h] [bp-169h]
  char v67; // [sp+64h] [bp-168h]
  char v68; // [sp+65h] [bp-167h]
  char v69; // [sp+66h] [bp-166h]
  char v70; // [sp+67h] [bp-165h]
  int v71; // [sp+68h] [bp-164h] BYREF
  int v72; // [sp+6Ch] [bp-160h]
  int v73; // [sp+70h] [bp-15Ch]
  int v74; // [sp+74h] [bp-158h]
  int v75; // [sp+90h] [bp-13Ch]
  int v76; // [sp+BCh] [bp-110h]
  char s[256]; // [sp+C4h] [bp-108h] BYREF

  v3 = (const char *)Ogre::XMLNode::attribToString(a2, "modelfile");
  if ( v3 == nullptr )
  {
    Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)a2);
    v3 = s;
    j_sprintf(s, "blocks/%s.obj", Name);
  }
  if ( Ogre::XMLNode::attribToString(a2, "normal") != 0 )
    v52 = Ogre::XMLNode::attribToInt(a2, "normal", v5);
  else
    v52 = 1;
  parse_obj_setfunc((int (__fastcall *)(_DWORD))OpenObj, (void (*)(void *))CloseObj, ReadObj);
  if ( parse_obj_scene(&v71, v3) != 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/BlockGeom.cpp", (const char *)&stru_1D8, 2, v6);
    Ogre::LogMessage((Ogre *)"LoadObj ok", v7);
    for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(a2); ; i = (TiXmlElement *)Ogre::XMLNode::iterateChild(
                                                                                       a2,
                                                                                       v57) )
    {
      v57 = i;
      if ( i == nullptr )
        break;
      v10 = 0;
      if ( Ogre::XMLNode::hasAttrib(&v57, "index") )
        v10 = Ogre::XMLNode::attribToInt(&v57, "index", v9);
      if ( v10 >= (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2 )
      {
        HIDWORD(v11) = v10 + 1;
        LODWORD(v11) = this;
        std::vector<BlockGeomMesh *>::resize(v11);
      }
      v12 = (char *)operator new(0x70u);
      v13 = 0;
      *((_DWORD *)v12 + 16) = 0;
      *((_DWORD *)v12 + 22) = 0x7FFFFFFF;
      *((_DWORD *)v12 + 23) = 0x7FFFFFFF;
      *((_DWORD *)v12 + 24) = 0x7FFFFFFF;
      *((_DWORD *)v12 + 17) = 0;
      *((_DWORD *)v12 + 18) = 0;
      *((_DWORD *)v12 + 19) = 0;
      *((_DWORD *)v12 + 20) = 0;
      *((_DWORD *)v12 + 21) = 0;
      *((_DWORD *)v12 + 25) = 0x80000000;
      *((_DWORD *)v12 + 26) = 0x80000000;
      *((_DWORD *)v12 + 27) = 0x80000000;
      v14 = v12;
      *(_DWORD *)(4 * v10 + *(_DWORD *)this) = v12;
      while ( v13 < v76 )
      {
        v15 = *(_DWORD *)(4 * v13 + v75);
        v16 = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v57);
        if ( j_strcasecmp((const char *)(v15 + 8), v16) == 0 )
          break;
        ++v13;
      }
      if ( v13 < v76 )
      {
        v17 = *(_DWORD *)(4 * v13 + v75);
        v18 = 0;
        j_strcpy(v14, (const char *)(v17 + 8));
        std::vector<unsigned short>::resize((int)(v14 + 76), 3 * *(_DWORD *)(v17 + 4));
        while ( 1 )
        {
          v36 = v18;
          if ( v18 >= *(_DWORD *)(v17 + 4) )
            break;
          v53 = *(_DWORD *)(4 * (v18 + *(_DWORD *)v17) + v74);
          v54 = 6 * v18;
          for ( j = 0; j != 6; j += 2 )
          {
            v55 = (_WORD *)(*((_DWORD *)v14 + 19) + j + v54);
            v19 = (_DWORD *)(v53 + 4 * *(_DWORD *)((char *)&unk_445D94 + 2 * j));
            v45 = v19[8];
            v38 = v19[4];
            v20 = *(double **)(4 * *v19 + v71);
            v21 = v20[1] / 100.0;
            v46 = v21;
            v22 = v20[2] / 100.0;
            v50 = LODWORD(v22) + 0x80000000;
            v23 = *v20 / 100.0;
            v58[0] = v23;
            v58[1] = v46;
            LODWORD(v58[2]) = v50;
            PackVertPos(&v56, v58);
            *(_QWORD *)v62 = v56;
            v59 = 1065353216;
            v60 = 0;
            v61 = 0;
            if ( v38 >= 0 )
            {
              v24 = *(double *)(*(_DWORD *)(4 * v38 + v72) + 8);
              v39 = *(double **)(4 * v38 + v72);
              *(float *)&v24 = v24;
              v47 = LODWORD(v24);
              *(float *)&v24 = v39[2];
              v51 = LODWORD(v24) + 0x80000000;
              *(float *)&v24 = *v39;
              v59 = LODWORD(v24);
              v61 = v51;
              v60 = v47;
              Ogre::Normalize((float *)&v59);
            }
            v62[2] = PackVertNormal((const Ogre::Vector3 *)&v59);
            if ( v45 < 0 )
            {
              v67 = 0;
              v68 = 0;
            }
            else
            {
              v40 = *(double **)(4 * v45 + v73);
              v25 = *v40;
              v67 = PackFloat2UV(v25);
              v26 = v40[1];
              v68 = PackFloat2UV(1.0 - v26);
            }
            v27 = -1;
            v69 = -1;
            v70 = 0;
            if ( v52 != 0 )
              v27 = Normal2LightColor((const Ogre::Vector3 *)&v59);
            v28 = *((_DWORD *)v14 + 16);
            v63 = v27;
            v64 = v27;
            v65 = v27;
            v66 = v27;
            v41 = v28;
            v48 = -858993459 * ((*((_DWORD *)v14 + 17) - v28) >> 2);
            for ( k = 0; k != v48; ++k )
            {
              if ( j_memcmp((const void *)(v41 + 20 * k), v62, 0x14u) == 0 )
                goto LABEL_30;
            }
            std::vector<BlockGeomVert>::push_back((int)(v14 + 64), v62);
            LOWORD(k) = -13107 * ((*((_DWORD *)v14 + 17) - *((_DWORD *)v14 + 16)) >> 2) - 1;
LABEL_30:
            *v55 = k;
          }
          v18 = v36 + 1;
        }
        for ( m = 0; ; ++m )
        {
          v31 = *((_DWORD *)v14 + 16);
          if ( m >= -858993459 * ((*((_DWORD *)v14 + 17) - v31) >> 2) )
            break;
          v32 = (__int16 *)(v31 + 20 * m);
          v33 = v32[1];
          v34 = *v32;
          v42 = v33;
          v35 = v32[2];
          if ( v33 > *((_DWORD *)v14 + 23) )
            v42 = *((_DWORD *)v14 + 23);
          v44 = v35;
          if ( v35 > *((_DWORD *)v14 + 24) )
            v44 = *((_DWORD *)v14 + 24);
          v37 = v34;
          if ( v34 > *((_DWORD *)v14 + 22) )
            v37 = *((_DWORD *)v14 + 22);
          *((_DWORD *)v14 + 22) = v37;
          *((_DWORD *)v14 + 23) = v42;
          *((_DWORD *)v14 + 24) = v44;
          if ( v33 < *((_DWORD *)v14 + 26) )
            v33 = *((_DWORD *)v14 + 26);
          if ( v35 < *((_DWORD *)v14 + 27) )
            v35 = *((_DWORD *)v14 + 27);
          if ( v34 < *((_DWORD *)v14 + 25) )
            v34 = *((_DWORD *)v14 + 25);
          *((_DWORD *)v14 + 25) = v34;
          *((_DWORD *)v14 + 26) = v33;
          *((_DWORD *)v14 + 27) = v35;
        }
      }
    }
    delete_obj_data((int)&v71);
  }
  else
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/BlockGeom.cpp", (const char *)&stru_1C8.st_other, 8, v6);
    Ogre::LogMessage((Ogre *)"parse obj file failed: %s", v3);
  }
}


//======================================================================
// BlockGeomTemplate::getFaceVerts(BlockGeomMeshInfo &,unsigned int,GetGeomDesc const*)
// address: 0x0029AC98   size: 0x154 (340 bytes)
//======================================================================
int __fastcall BlockGeomTemplate::getFaceVerts(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  int v8; // r6
  unsigned int v9; // r1
  unsigned int i; // r1
  int v11; // r2
  int v12; // r2
  int v13; // r3
  int v14; // [sp+4h] [bp-10h]

  if ( a3 < (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2 )
  {
    v8 = *(_DWORD *)(4 * a3 + *(_DWORD *)a1);
    *a2 = -858993459 * ((*(_DWORD *)(v8 + 68) - *(_DWORD *)(v8 + 64)) >> 2);
    v9 = (*(_DWORD *)(v8 + 80) - *(_DWORD *)(v8 + 76)) >> 1;
    a2[1] = v9;
    a2[3] = *(_DWORD *)(v8 + 76);
    a2[2] = *(_DWORD *)(v8 + 64);
    if ( a4 != 0 )
    {
      v14 = *(unsigned __int8 *)(a4 + 12) + (*(_BYTE *)(a4 + 13) != 0) + (*(_BYTE *)(a4 + 14) != 0);
      if ( (v14 & 1) != 0 )
      {
        std::vector<unsigned short>::resize(a1 + 24, v9);
        for ( i = 0; ; ++i )
        {
          v11 = *(_DWORD *)(a1 + 24);
          if ( i >= a2[1] / 3u )
            break;
          *(_WORD *)(v11 + 6 * i) = *(_WORD *)(*(_DWORD *)(v8 + 76) + 6 * i);
          v12 = 6 * i + 2;
          v13 = 6 * i + 4;
          *(_WORD *)(*(_DWORD *)(a1 + 24) + v12) = *(_WORD *)(*(_DWORD *)(v8 + 76) + v13);
          *(_WORD *)(*(_DWORD *)(a1 + 24) + v13) = *(_WORD *)(*(_DWORD *)(v8 + 76) + v12);
        }
        a2[3] = v11;
      }
      std::vector<BlockGeomVert>::operator=((void **)(a1 + 12), (char **)(v8 + 64));
      a2[2] = *(_DWORD *)(a1 + 12);
      if ( *(_DWORD *)(a4 + 16) != 2
        || v14 != 0
        || *(float *)a4 != 0.0
        || *(float *)(a4 + 4) != 0.0
        || *(float *)(a4 + 8) != 0.0 )
      {
        BlockGeomTemplate::transformSRT(a1, a3, a4);
      }
      if ( *(float *)(a4 + 20) != 1.0 )
        BlockGeomTemplate::transformUniHeight(a1, a3, a4);
      if ( *(float *)(a4 + 28) != 3.4028e38 )
        BlockGeomTemplate::transform4Height(a1, a3, a4);
      if ( *(_BYTE *)(a4 + 44) != 0 )
        BlockGeomTemplate::transformUVRot(a1, a3, a4);
      if ( *(float *)(a4 + 84) != 3.4028e38 )
        BlockGeomTemplate::transformClipXZ(a1, a3, (float *)a4);
    }
    return 1;
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
    return 0;
  }
}


//======================================================================
// BlockGeomTemplate::getFaceVerts(BlockGeomMeshInfo &,unsigned int)
// address: 0x0029ADF4   size: 0xA (10 bytes)
//======================================================================
int __fastcall BlockGeomTemplate::getFaceVerts(int a1, _DWORD *a2, unsigned int a3)
{
  return BlockGeomTemplate::getFaceVerts(a1, a2, a3, 0);
}


//======================================================================
// BlockGeomTemplate::getFaceVerts(BlockGeomMeshInfo &,unsigned int,float,int,int,int,Ogre::Matrix3 const*)
// address: 0x0029ADFE   size: 0x68 (104 bytes)
//======================================================================
int __fastcall BlockGeomTemplate::getFaceVerts(
        int a1,
        _DWORD *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int *a8)
{
  int v10; // r1
  int v11; // r5
  int v12; // r1
  int v13; // r5
  int v14; // r1
  int v15; // r5
  _DWORD v19[11]; // [sp+Ch] [bp-68h] BYREF
  char v20; // [sp+38h] [bp-3Ch]
  int v21; // [sp+3Ch] [bp-38h]
  int v22; // [sp+40h] [bp-34h]
  int v23; // [sp+44h] [bp-30h]
  int v24; // [sp+48h] [bp-2Ch]
  int v25; // [sp+4Ch] [bp-28h]
  int v26; // [sp+50h] [bp-24h]
  int v27; // [sp+54h] [bp-20h]
  int v28; // [sp+58h] [bp-1Ch]
  int v29; // [sp+5Ch] [bp-18h]

  BlockGeomTemplate::initGetGeomDesc(a1, v19);
  v19[4] = a6;
  v19[5] = a4;
  v19[6] = a5;
  switch ( a7 )
  {
    case 1:
      LOBYTE(v19[3]) = 1;
      break;
    case 2:
      BYTE2(v19[3]) = 1;
      break;
    case 3:
      BYTE1(v19[3]) = 1;
      break;
    default:
      break;
  }
  if ( a8 != nullptr )
  {
    v10 = a8[1];
    v11 = a8[2];
    v21 = *a8;
    v22 = v10;
    v23 = v11;
    v12 = a8[4];
    v13 = a8[5];
    v24 = a8[3];
    v25 = v12;
    v26 = v13;
    v14 = a8[7];
    v15 = a8[8];
    v27 = a8[6];
    v28 = v14;
    v29 = v15;
    v20 = 1;
  }
  return BlockGeomTemplate::getFaceVerts(a1, a2, a3, (unsigned int)v19);
}


//======================================================================
// BlockGeomTemplate::getModelFaceVerts(BlockGeomMeshInfo &,unsigned int,int,float,float,float)
// address: 0x0029AE66   size: 0x32 (50 bytes)
//======================================================================
int __fastcall BlockGeomTemplate::getModelFaceVerts(
        int a1,
        _DWORD *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  _DWORD v12[26]; // [sp+Ch] [bp-68h] BYREF

  BlockGeomTemplate::initGetGeomDesc(a1, v12);
  v12[0] = a5;
  v12[4] = a4;
  v12[1] = a6;
  v12[2] = a7;
  return BlockGeomTemplate::getFaceVerts(a1, a2, a3, (unsigned int)v12);
}


//======================================================================
// BlockGeomTemplate::getMorphCubeFaceVerts(BlockGeomMeshInfo &,unsigned int,float *,Ogre::Matrix3 const*)
// address: 0x0029AE98   size: 0x4C (76 bytes)
//======================================================================
int __fastcall BlockGeomTemplate::getMorphCubeFaceVerts(int a1, _DWORD *a2, unsigned int a3, int a4, int *a5)
{
  int i; // r3
  int v8; // r0
  _BYTE *v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r2
  _BYTE v19[48]; // [sp+Ch] [bp-68h] BYREF
  int v20; // [sp+3Ch] [bp-38h]
  int v21; // [sp+40h] [bp-34h]
  int v22; // [sp+44h] [bp-30h]
  int v23; // [sp+48h] [bp-2Ch]
  int v24; // [sp+4Ch] [bp-28h]
  int v25; // [sp+50h] [bp-24h]
  int v26; // [sp+54h] [bp-20h]
  int v27; // [sp+58h] [bp-1Ch]
  int v28; // [sp+5Ch] [bp-18h]

  BlockGeomTemplate::initGetGeomDesc(a1, v19);
  for ( i = 0; i != 16; i += 4 )
  {
    v8 = *(_DWORD *)(a4 + i);
    v9 = &v19[i];
    *((_DWORD *)v9 + 7) = v8;
  }
  if ( a5 != nullptr )
  {
    v10 = a5[1];
    v11 = a5[2];
    v20 = *a5;
    v21 = v10;
    v22 = v11;
    v12 = a5[4];
    v13 = a5[5];
    v23 = a5[3];
    v24 = v12;
    v25 = v13;
    v14 = a5[7];
    v15 = a5[8];
    v26 = a5[6];
    v27 = v14;
    v28 = v15;
    v19[44] = 1;
  }
  return BlockGeomTemplate::getFaceVerts(a1, a2, a3, (unsigned int)v19);
}


//======================================================================
// BlockGeomTemplate::getClippedFaceVerts(BlockGeomMeshInfo &,unsigned int,float,float,float,float)
// address: 0x0029AEE4   size: 0x32 (50 bytes)
//======================================================================
int __fastcall BlockGeomTemplate::getClippedFaceVerts(
        int a1,
        _DWORD *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  _DWORD v12[26]; // [sp+Ch] [bp-68h] BYREF

  BlockGeomTemplate::initGetGeomDesc(a1, v12);
  v12[22] = a5;
  v12[21] = a4;
  v12[23] = a6;
  v12[24] = a7;
  return BlockGeomTemplate::getFaceVerts(a1, a2, a3, (unsigned int)v12);
}


//======================================================================
// BlockGeomTemplate::loadQuad(BlockGeomMesh *,Ogre::XMLNode &,bool)
// address: 0x0029AF8C   size: 0x1F4 (500 bytes)
//======================================================================
void __fastcall BlockGeomTemplate::loadQuad(int a1, int a2, TiXmlNode **this, int a4)
{
  float *v5; // r4
  unsigned int v6; // r2
  double v7; // r0
  double v8; // r0
  unsigned int v9; // r2
  double v10; // r0
  unsigned int v11; // r2
  double v12; // r0
  unsigned int v13; // r2
  double v14; // r0
  unsigned int v15; // r2
  float *v16; // r6
  __int16 v17; // r5
  char v19; // [sp+14h] [bp-90h]
  __int64 v21; // [sp+20h] [bp-84h] BYREF
  TiXmlNode *i; // [sp+2Ch] [bp-78h] BYREF
  float v23; // [sp+30h] [bp-74h] BYREF
  float v24; // [sp+34h] [bp-70h]
  float v25; // [sp+38h] [bp-6Ch]
  _BYTE v26[20]; // [sp+3Ch] [bp-68h] BYREF
  float v27; // [sp+50h] [bp-54h]
  float v28; // [sp+54h] [bp-50h]
  float v29; // [sp+58h] [bp-4Ch] BYREF
  char v30; // [sp+5Ch] [bp-48h] BYREF
  float v31; // [sp+64h] [bp-40h]
  float v32; // [sp+68h] [bp-3Ch]
  float v33; // [sp+6Ch] [bp-38h]
  float v34; // [sp+78h] [bp-2Ch]
  float v35; // [sp+7Ch] [bp-28h]
  float v36; // [sp+80h] [bp-24h]
  char vars4; // [sp+A8h] [bp+4h] BYREF
  char vars8; // [sp+ACh] [bp+8h] BYREF

  v5 = &v29;
  for ( i = (TiXmlNode *)Ogre::XMLNode::iterateChild(this);
        i != nullptr;
        i = (TiXmlNode *)Ogre::XMLNode::iterateChild(this, i) )
  {
    LODWORD(v7) = &i;
    HIDWORD(v7) = "x";
    *((_DWORD *)v5 - 2) = Ogre::XMLNode::attribToFloat(v7, v6);
    HIDWORD(v8) = "y";
    LODWORD(v8) = &i;
    *((_DWORD *)v5 - 1) = Ogre::XMLNode::attribToFloat(v8, v9);
    HIDWORD(v10) = "z";
    LODWORD(v10) = &i;
    *(_DWORD *)v5 = Ogre::XMLNode::attribToFloat(v10, v11);
    LODWORD(v12) = &i;
    HIDWORD(v12) = "u";
    *((_DWORD *)v5 + 1) = Ogre::XMLNode::attribToFloat(v12, v13);
    LODWORD(v14) = &i;
    HIDWORD(v14) = "v";
    *((_DWORD *)v5 + 2) = Ogre::XMLNode::attribToFloat(v14, v15);
    v5 += 5;
    if ( v5 == (float *)&vars4 )
      break;
  }
  if ( a4 != 0 )
  {
    v23 = 0.0;
    v24 = 1.0;
    v25 = 0.0;
  }
  else
  {
    v23 = (float)((float)(v32 - v28) * (float)(v36 - v29)) - (float)((float)(v33 - v29) * (float)(v35 - v28));
    v24 = (float)((float)(v33 - v29) * (float)(v34 - v27)) - (float)((float)(v31 - v27) * (float)(v36 - v29));
    v25 = (float)((float)(v31 - v27) * (float)(v35 - v28)) - (float)((float)(v32 - v28) * (float)(v34 - v27));
    Ogre::Normalize(&v23);
  }
  v19 = Normal2LightColor((const Ogre::Vector3 *)&v23);
  v16 = (float *)&v30;
  v17 = -13107 * ((*(_DWORD *)(a2 + 68) - *(_DWORD *)(a2 + 64)) >> 2);
  do
  {
    j_memset(v26, 0, sizeof(v26));
    PackVertPos(&v21, v16 - 3);
    *(_QWORD *)v26 = v21;
    *(_DWORD *)&v26[8] = PackVertNormal((const Ogre::Vector3 *)&v23);
    v26[16] = PackFloat2UV(*v16);
    v26[17] = PackFloat2UV(v16[1]);
    *(_WORD *)&v26[12] = -1;
    v26[14] = -1;
    v26[15] = v19;
    std::vector<BlockGeomVert>::push_back(a2 + 64, v26);
    v16 += 5;
  }
  while ( v16 != (float *)&vars8 );
  *(_WORD *)v26 = v17;
  std::vector<unsigned short>::emplace_back<unsigned short>((void **)(a2 + 76), v26);
  *(_WORD *)v26 = v17 + 1;
  std::vector<unsigned short>::emplace_back<unsigned short>((void **)(a2 + 76), v26);
  *(_WORD *)v26 = v17 + 2;
  std::vector<unsigned short>::emplace_back<unsigned short>((void **)(a2 + 76), v26);
  *(_WORD *)v26 = v17;
  std::vector<unsigned short>::emplace_back<unsigned short>((void **)(a2 + 76), v26);
  *(_WORD *)v26 = v17 + 2;
  std::vector<unsigned short>::emplace_back<unsigned short>((void **)(a2 + 76), v26);
  *(_WORD *)v26 = v17 + 3;
  std::vector<unsigned short>::emplace_back<unsigned short>((void **)(a2 + 76), v26);
}


//======================================================================
// BlockGeomTemplate::loadFromXML(Ogre::XMLNode &)
// address: 0x0029B198   size: 0xD8 (216 bytes)
//======================================================================
void __fastcall BlockGeomTemplate::loadFromXML(BlockGeomTemplate *this, TiXmlElement **a2)
{
  TiXmlNode *i; // r0
  int v5; // r2
  int v6; // r7
  __int64 v7; // r0
  char *v8; // r0
  char *v9; // r4
  const char *Name; // r0
  TiXmlNode *j; // r0
  _BOOL4 hasAttrib; // [sp+4h] [bp-10h]
  TiXmlNode *v13; // [sp+8h] [bp-Ch] BYREF
  TiXmlNode *v14; // [sp+Ch] [bp-8h] BYREF

  if ( Ogre::XMLNode::hasAttrib(a2, "modelfile") )
  {
    BlockGeomTemplate::loadFromModel(this, a2);
  }
  else
  {
    hasAttrib = Ogre::XMLNode::hasAttrib(a2, "ignore_normal");
    for ( i = (TiXmlNode *)Ogre::XMLNode::iterateChild(a2); ; i = (TiXmlNode *)Ogre::XMLNode::iterateChild(a2, v13) )
    {
      v13 = i;
      if ( i == nullptr )
        break;
      v6 = 0;
      if ( Ogre::XMLNode::hasAttrib(&v13, "index") )
        v6 = Ogre::XMLNode::attribToInt(&v13, "index", v5);
      if ( v6 >= (*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2 )
      {
        HIDWORD(v7) = v6 + 1;
        LODWORD(v7) = this;
        std::vector<BlockGeomMesh *>::resize(v7);
      }
      v8 = (char *)operator new(0x70u);
      *((_DWORD *)v8 + 16) = 0;
      *((_DWORD *)v8 + 17) = 0;
      *((_DWORD *)v8 + 18) = 0;
      *((_DWORD *)v8 + 19) = 0;
      *((_DWORD *)v8 + 20) = 0;
      *((_DWORD *)v8 + 21) = 0;
      *((_DWORD *)v8 + 22) = 0;
      *((_DWORD *)v8 + 23) = 0;
      *((_DWORD *)v8 + 24) = 0;
      *((_DWORD *)v8 + 25) = 100;
      *((_DWORD *)v8 + 26) = 100;
      *((_DWORD *)v8 + 27) = 100;
      v9 = v8;
      *(_DWORD *)(4 * v6 + *(_DWORD *)this) = v8;
      Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v13);
      j_strcpy(v9, Name);
      for ( j = (TiXmlNode *)Ogre::XMLNode::iterateChild(&v13); ; j = (TiXmlNode *)Ogre::XMLNode::iterateChild(
                                                                                     &v13,
                                                                                     v14) )
      {
        v14 = j;
        if ( j == nullptr )
          break;
        BlockGeomTemplate::loadQuad((int)this, (int)v9, &v14, hasAttrib);
      }
    }
  }
}


//======================================================================
// BlockGeomTemplate::transformTo(BlockGeomMesh *,Ogre::Matrix4 const&)
// address: 0x0029B27C   size: 0x188 (392 bytes)
//======================================================================
void __fastcall BlockGeomTemplate::transformTo(_DWORD *a1, int a2, Ogre::Matrix4 *a3)
{
  _DWORD *v4; // r6
  unsigned int j; // r2
  int v6; // r4
  __int16 *v7; // r4
  float v8; // r0
  int v9; // r0
  int v10; // r3
  unsigned int k; // r4
  int v12; // r3
  unsigned int v13; // [sp+8h] [bp-5Ch]
  float v14; // [sp+Ch] [bp-58h]
  unsigned int i; // [sp+10h] [bp-54h]
  __int16 v16; // [sp+14h] [bp-50h]
  float v19; // [sp+24h] [bp-40h]
  __int64 v20; // [sp+28h] [bp-3Ch] BYREF
  float v21[3]; // [sp+34h] [bp-30h] BYREF
  float v22[3]; // [sp+40h] [bp-24h] BYREF
  _WORD v23[6]; // [sp+4Ch] [bp-18h] BYREF
  int v24; // [sp+58h] [bp-Ch]
  int v25; // [sp+5Ch] [bp-8h]

  for ( i = 0; i < (a1[1] - *a1) >> 2; ++i )
  {
    v4 = *(_DWORD **)(4 * i + *a1);
    v16 = -13107 * ((*(_DWORD *)(a2 + 68) - *(_DWORD *)(a2 + 64)) >> 2);
    for ( j = 0; ; j = v13 + 1 )
    {
      v6 = v4[16];
      v13 = j;
      if ( j >= -858993459 * ((v4[17] - v6) >> 2) )
        break;
      v7 = (__int16 *)(v6 + 20 * j);
      v14 = (float)v7[1] / 100.0;
      v8 = (float)*v7;
      v21[2] = (float)v7[2] / 100.0;
      v21[0] = v8 / 100.0;
      v9 = *((unsigned __int8 *)v7 + 9);
      v21[1] = v14;
      v19 = (float)((float)((float)*((unsigned __int8 *)v7 + 10) + (float)*((unsigned __int8 *)v7 + 10)) / 255.0) - 1.0;
      v22[0] = (float)((float)((float)*((unsigned __int8 *)v7 + 8) + (float)*((unsigned __int8 *)v7 + 8)) / 255.0) - 1.0;
      v22[1] = (float)((float)((float)v9 + (float)v9) / 255.0) - 1.0;
      v22[2] = v19;
      Ogre::Matrix4::transformCoord(a3, (Ogre::Vector3 *)v21, (const Ogre::Vector3 *)v21);
      Ogre::Matrix4::transformNormal(a3, (Ogre::Vector3 *)v22, (const Ogre::Vector3 *)v22);
      Ogre::Normalize(v22);
      PackVertPos(&v20, v21);
      *(_QWORD *)v23 = v20;
      *(_DWORD *)&v23[4] = PackVertNormal((const Ogre::Vector3 *)v22);
      v10 = v4[16] + 20 * v13;
      v25 = *(_DWORD *)(v10 + 16);
      v24 = *(_DWORD *)(v10 + 12);
      std::vector<BlockGeomVert>::push_back(a2 + 64, v23);
    }
    for ( k = 0; ; ++k )
    {
      v12 = v4[19];
      if ( k >= (v4[20] - v12) >> 1 )
        break;
      v23[0] = v16 + *(_WORD *)(2 * k + v12);
      std::vector<unsigned short>::emplace_back<unsigned short>((void **)(a2 + 76), v23);
    }
  }
}

