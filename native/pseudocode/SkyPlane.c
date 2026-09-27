// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SkyPlane

//======================================================================
// SkyPlane::~SkyPlane()
// address: 0x002F71EC   size: 0x146 (326 bytes)
//======================================================================
// Alternative name is '_ZN8SkyPlaneD1Ev'
void __fastcall SkyPlane::~SkyPlane(SkyPlane *this)
{
  int v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0

  *(_DWORD *)this = &off_462738;
  Ogre::OSThread::shutdown(*((Ogre::OSThread **)this + 225));
  v2 = *((_DWORD *)this + 225);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD **)this + 220);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 220) = 0;
  }
  v4 = *((_DWORD **)this + 219);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 219) = 0;
  }
  v5 = *((_DWORD **)this + 216);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 216) = 0;
  }
  v6 = *((_DWORD **)this + 217);
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    *((_DWORD *)this + 217) = 0;
  }
  v7 = *((_DWORD **)this + 215);
  if ( v7 != nullptr )
  {
    Ogre::BaseObject::release(v7);
    *((_DWORD *)this + 215) = 0;
  }
  v8 = *((_DWORD **)this + 218);
  if ( v8 != nullptr )
  {
    Ogre::BaseObject::release(v8);
    *((_DWORD *)this + 218) = 0;
  }
  v9 = *((_DWORD **)this + 214);
  if ( v9 != nullptr )
  {
    Ogre::BaseObject::release(v9);
    *((_DWORD *)this + 214) = 0;
  }
  v10 = *((_DWORD **)this + 213);
  if ( v10 != nullptr )
  {
    Ogre::BaseObject::release(v10);
    *((_DWORD *)this + 213) = 0;
  }
  v11 = *((_DWORD **)this + 212);
  if ( v11 != nullptr )
  {
    Ogre::BaseObject::release(v11);
    *((_DWORD *)this + 212) = 0;
  }
  v12 = *((_DWORD **)this + 211);
  if ( v12 != nullptr )
  {
    Ogre::BaseObject::release(v12);
    *((_DWORD *)this + 211) = 0;
  }
  v13 = *((_DWORD **)this + 210);
  if ( v13 != nullptr )
  {
    Ogre::BaseObject::release(v13);
    *((_DWORD *)this + 210) = 0;
  }
  v14 = *((_DWORD **)this + 209);
  if ( v14 != nullptr )
  {
    Ogre::BaseObject::release(v14);
    *((_DWORD *)this + 209) = 0;
  }
  v15 = *((_DWORD **)this + 208);
  if ( v15 != nullptr )
  {
    Ogre::BaseObject::release(v15);
    *((_DWORD *)this + 208) = 0;
  }
  v16 = *((_DWORD **)this + 207);
  if ( v16 != nullptr )
  {
    Ogre::BaseObject::release(v16);
    *((_DWORD *)this + 207) = 0;
  }
  v17 = *((_DWORD **)this + 206);
  if ( v17 != nullptr )
  {
    Ogre::BaseObject::release(v17);
    *((_DWORD *)this + 206) = 0;
  }
  Ogre::VertexFormat::~VertexFormat((void **)this + 221);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// SkyPlane::~SkyPlane()
// address: 0x002F7338   size: 0x12 (18 bytes)
//======================================================================
void __fastcall SkyPlane::~SkyPlane(SkyPlane *this)
{
  SkyPlane::~SkyPlane(this);
  operator delete(this);
}


//======================================================================
// SkyPlane::loadSkyColor(Ogre::TextureData *)
// address: 0x002F734C   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall SkyPlane::loadSkyColor(SkyPlane *this, Ogre::TextureData *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  char *v6; // r3
  int v7; // r12
  int i; // r2
  char *v9; // r0
  char v10; // r6
  char v11; // r7
  char v12; // r0
  int v14; // [sp+Ch] [bp-38h]
  int v15; // [sp+10h] [bp-34h]
  int v16; // [sp+14h] [bp-30h]
  _DWORD v17[3]; // [sp+18h] [bp-2Ch] BYREF
  _DWORD v18[8]; // [sp+24h] [bp-20h] BYREF

  (*(void (__fastcall **)(Ogre::TextureData *, _DWORD *))(*(_DWORD *)a2 + 28))(a2, v18);
  v4 = (*(int (__fastcall **)(Ogre::TextureData *, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)a2 + 36))(
         a2,
         0,
         0,
         1,
         v17);
  v16 = v18[1];
  v5 = 0;
  v14 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 64);
  v15 = v4 + 6 * v17[1];
  v6 = (char *)this + 706;
  v7 = v17[0];
  for ( i = 16; i != 0; --i )
  {
    v9 = (char *)(v15 + v7 * (v5 >> 4));
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    if ( v14 == 2 )
    {
      *v6 = v10;
      *(v6 - 1) = v11;
      *(v6 - 2) = v12;
    }
    else
    {
      *v6 = v12;
      *(v6 - 1) = v11;
      *(v6 - 2) = v10;
    }
    v6[1] = -1;
    v6 += 4;
    v5 += v16;
  }
  return (*(int (__fastcall **)(Ogre::TextureData *, _DWORD))(*(_DWORD *)a2 + 40))(a2, 0);
}


//======================================================================
// SkyPlane::calSunPosOnCloud(void)
// address: 0x002F73F8   size: 0xEA (234 bytes)
//======================================================================
SkyPlane *__fastcall SkyPlane::calSunPosOnCloud(SkyPlane *this, float *a2)
{
  float v4; // r7
  float v5; // r0
  float *v6; // r4
  float v7; // r6
  float v8; // r0
  float v9; // r0
  float v10; // r1
  float v11; // r0
  float v13; // [sp+0h] [bp-Ch]

  v4 = a2[199] / 5.0;
  v5 = j_sqrt((float)((float)(a2[198] * a2[198]) - (float)(a2[197] * a2[197])));
  v6 = a2 + 63;
  v7 = v5;
  v8 = j_sqrt((float)((float)(v6[18] * v6[18]) + (float)(v6[20] * v6[20])));
  v13 = v8;
  if ( (float)(v4 * v8) <= (float)(v7 * v6[1]) )
  {
    v10 = v6[19];
    v9 = v4;
  }
  else
  {
    v9 = v7;
    v10 = v13;
  }
  v11 = v9 / v10;
  *(float *)this = (float)((float)((float)(v11 * v6[18]) / v7) + 1.0) * 0.5;
  *((float *)this + 2) = (float)((float)((float)(v11 * v6[20]) / v7) + 1.0) * 0.5;
  *((_DWORD *)this + 1) = 1069547520;
  return this;
}


//======================================================================
// SkyPlane::setCloudGenFullSpeed(bool)
// address: 0x002F74E8   size: 0xC (12 bytes)
//======================================================================
int __fastcall SkyPlane::setCloudGenFullSpeed(int this, bool a2)
{
  *(_BYTE *)(*(_DWORD *)(this + 900) + 104) = a2;
  return this;
}


//======================================================================
// SkyPlane::getSkyLight(void)
// address: 0x002F74F4   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall SkyPlane::getSkyLight(_DWORD *this, int a2)
{
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r5

  v2 = (_DWORD *)(a2 + 336);
  v3 = v2[1];
  v4 = v2[2];
  *this = *v2;
  *(this + 1) = v3;
  *(this + 2) = v4;
  *(this + 3) = v2[3];
  return this;
}


//======================================================================
// SkyPlane::setMoonPhrase(float)
// address: 0x002F7506   size: 0x8 (8 bytes)
//======================================================================
int __fastcall SkyPlane::setMoonPhrase(int this, float a2)
{
  *(float *)(this + 784) = a2;
  return this;
}


//======================================================================
// SkyPlane::NewCloudGenCmd(bool)
// address: 0x002F7510   size: 0x90 (144 bytes)
//======================================================================
int __fastcall SkyPlane::NewCloudGenCmd(SkyPlane *this, int a2)
{
  _DWORD *v3; // r6
  int v4; // r1
  int v5; // r7
  int v6; // r7
  float v7; // r2
  float v8; // r3
  int v9; // r3
  int v10; // r1
  __int64 v11; // r0
  int v12; // r2
  float v15[5]; // [sp+8h] [bp-14h] BYREF
  _DWORD v16[4]; // [sp+1Ch] [bp+0h] BYREF

  v3 = *((_DWORD **)this + 225);
  SkyPlane::calSunPosOnCloud((SkyPlane *)v16, (float *)this);
  v4 = v16[0];
  v5 = v16[2];
  v3[13] = v16[1];
  v3[12] = v4;
  v3[14] = v5;
  v6 = *((_DWORD *)this + 225) + 60;
  Ogre::ColourValue::operator*(v15, (float *)this + 77, 5.0);
  v7 = v15[1];
  v8 = v15[2];
  *(float *)v6 = v15[0];
  *(float *)(v6 + 4) = v7;
  *(float *)(v6 + 8) = v8;
  *(float *)(v6 + 12) = v15[3];
  if ( *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 64) == 2 )
  {
    v9 = *((_DWORD *)this + 225);
    v10 = *(_DWORD *)(v9 + 68);
    *(_DWORD *)(v9 + 68) = *(_DWORD *)(v9 + 60);
    *(_DWORD *)(v9 + 60) = v10;
  }
  *(_DWORD *)(*((_DWORD *)this + 225) + 76) = 1065017672;
  *(_DWORD *)(*((_DWORD *)this + 225) + 80) = *((_DWORD *)this + 204);
  *(_DWORD *)(*((_DWORD *)this + 225) + 28) = 1;
  LODWORD(v11) = Ogre::OSEvent::trigger((Ogre::OSEvent *)(*((_DWORD *)this + 225) + 8));
  if ( a2 != 0 )
  {
    while ( *(_DWORD *)(*((_DWORD *)this + 225) + 28) != 3 )
      v11 = Ogre::ThreadSleep((unsigned int)&byte_9[1], HIDWORD(v11), v12);
  }
  return v11;
}


//======================================================================
// SkyPlane::OnCloudGenOutput(void)
// address: 0x002F75AC   size: 0x84 (132 bytes)
//======================================================================
int __fastcall SkyPlane::OnCloudGenOutput(SkyPlane *this)
{
  int v1; // r3
  void *v3; // r0
  void *v4; // r0
  int result; // r0
  void *v6; // [sp+8h] [bp-Ch]
  void *v7; // [sp+Ch] [bp-8h]
  _BYTE v8[16]; // [sp+14h] [bp+0h] BYREF

  v1 = *((_DWORD *)this + 225);
  v7 = *(void **)(v1 + 100);
  v6 = *(void **)(v1 + 96);
  v3 = (void *)(*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _BYTE *))(**((_DWORD **)this + 214) + 36))(
                 *((_DWORD *)this + 214),
                 0,
                 0,
                 0,
                 v8);
  j_memcpy(v3, v6, 4 * *((_DWORD *)this + 202) * *((_DWORD *)this + 202));
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 214) + 40))(*((_DWORD *)this + 214), 0, 0);
  v4 = (void *)(*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _BYTE *))(**((_DWORD **)this + 213) + 36))(
                 *((_DWORD *)this + 213),
                 0,
                 0,
                 0,
                 v8);
  j_memcpy(v4, v7, *((_DWORD *)this + 203) * *((_DWORD *)this + 203));
  result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 213) + 40))(
             *((_DWORD *)this + 213),
             0,
             0);
  *(_DWORD *)(*((_DWORD *)this + 225) + 28) = 0;
  return result;
}


//======================================================================
// SkyPlane::CreateSkyVB(void)
// address: 0x002F7630   size: 0x2D8 (728 bytes)
//======================================================================
void __fastcall SkyPlane::CreateSkyVB(SkyPlane *this)
{
  unsigned int v2; // r7
  Ogre::VertexData *v3; // r6
  float v4; // r0
  float v5; // r7
  float *v6; // r5
  float v7; // r6
  float v8; // r0
  Ogre::IndexData *v9; // r0
  Ogre::VertexData *v10; // r5
  int v11; // r5
  int k; // r2
  int v13; // r6
  int v14; // r7
  float v15; // r0
  Ogre::IndexData *v16; // r0
  int v17; // [sp+1Ch] [bp-38h]
  int v18; // [sp+1Ch] [bp-38h]
  int j; // [sp+20h] [bp-34h]
  int v20; // [sp+20h] [bp-34h]
  int i; // [sp+24h] [bp-30h]
  float v22; // [sp+28h] [bp-2Ch]
  float v23; // [sp+28h] [bp-2Ch]
  float v24; // [sp+30h] [bp-24h]
  float v25; // [sp+38h] [bp-1Ch]
  float v26; // [sp+3Ch] [bp-18h]
  void *v27[4]; // [sp+44h] [bp-10h] BYREF

  Ogre::VertexFormat::VertexFormat(v27);
  Ogre::VertexFormat::addElement((int *)v27, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v27, 2u, 4u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v27, 1u, 7u, 0, 0, -1);
  v2 = (*((_DWORD *)this + 200) + 1) * (*((_DWORD *)this + 200) + 1);
  v3 = (Ogre::VertexData *)operator new(0x50u);
  Ogre::VertexData::VertexData(v3, (const Ogre::VertexFormat *)v27, v2);
  *((_DWORD *)this + 216) = v3;
  v17 = Ogre::VertexData::lock(v3);
  v4 = j_sqrt((float)((float)(*((float *)this + 198) * *((float *)this + 198))
                    - (float)(*((float *)this + 197) * *((float *)this + 197))));
  v25 = v4 + v4;
  v5 = (float)(v4 + v4) / (float)*((int *)this + 200);
  for ( i = 0; i <= *((_DWORD *)this + 200); ++i )
  {
    v22 = (float)((float)i * v5) - (float)(v25 * 0.5);
    v6 = (float *)v17;
    v26 = (float)(v22 * v22) / *((float *)this + 198);
    for ( j = 0; j <= *((_DWORD *)this + 200); ++j )
    {
      v7 = (float)((float)j * v5) - (float)(v25 * 0.5);
      v8 = *((float *)this + 199) - (float)((float)((float)(v7 * v7) / *((float *)this + 198)) + v26);
      *v6 = v7;
      v6[2] = v22;
      v6[1] = v8;
      v6[3] = v7;
      v6[4] = v8;
      v6[5] = v22;
      Ogre::Normalize(v6 + 3);
      v6[6] = (float)((float)j * 8.0) / (float)*((int *)this + 200);
      v6[7] = (float)((float)i * 8.0) / (float)*((int *)this + 200);
      v6 += 8;
    }
    v17 = (int)v6;
  }
  Ogre::VertexData::unlock(*((_DWORD *)this + 216));
  v9 = sub_2F70B8(*((_DWORD *)this + 200) + 1, *((_DWORD *)this + 200) + 1);
  *((_DWORD *)this + 215) = v9;
  *((_DWORD *)v9 + 5) = *(_DWORD *)(*((_DWORD *)this + 216) + 52);
  *((_DWORD *)v9 + 4) = 0;
  v20 = *((_DWORD *)this + 200) / 2;
  v23 = v5 + v5;
  v10 = (Ogre::VertexData *)operator new(0x50u);
  Ogre::VertexData::VertexData(v10, (const Ogre::VertexFormat *)v27, (v20 + 1) * (v20 + 1));
  *((_DWORD *)this + 217) = v10;
  v11 = Ogre::VertexData::lock(v10);
  for ( k = 0; ; k = v18 + 1 )
  {
    v18 = k;
    if ( k > v20 )
      break;
    v24 = (float)((float)k * v23) - (float)(v25 * 0.5);
    v13 = v11 + 12;
    v14 = 0;
    do
    {
      v15 = (float)((float)(2 * v14) * v23) - (float)(v25 * 0.5);
      *(float *)v11 = v15;
      *(_DWORD *)(v11 + 4) = -1054867456;
      *(float *)(v11 + 8) = v24;
      *(float *)v13 = v15;
      *(_DWORD *)(v13 + 4) = -1054867456;
      *(float *)(v13 + 8) = v24;
      Ogre::Normalize((float *)(v11 + 12));
      *(_DWORD *)(v11 + 24) = 0;
      *(_DWORD *)(v11 + 28) = 0;
      ++v14;
      v11 += 32;
      v13 += 32;
    }
    while ( v14 <= v20 );
  }
  Ogre::VertexData::unlock(*((_DWORD *)this + 217));
  v16 = sub_2F70B8(v20 + 1, v20 + 1);
  *((_DWORD *)this + 218) = v16;
  *((_DWORD *)v16 + 5) = *(_DWORD *)(*((_DWORD *)this + 217) + 52);
  *((_DWORD *)v16 + 4) = 0;
  Ogre::VertexFormat::~VertexFormat(v27);
}


//======================================================================
// SkyPlane::CreateCloudVB(void)
// address: 0x002F7924   size: 0x182 (386 bytes)
//======================================================================
void __fastcall SkyPlane::CreateCloudVB(SkyPlane *this)
{
  unsigned int v2; // r7
  float *v3; // r5
  float v4; // r0
  int v5; // r2
  int i; // r7
  int v7; // r6
  float v8; // r0
  Ogre::IndexData *v9; // r0
  Ogre::VertexData *v10; // [sp+10h] [bp-2Ch]
  float v11; // [sp+1Ch] [bp-20h]
  float v12; // [sp+24h] [bp-18h]
  void *v13[4]; // [sp+2Ch] [bp-10h] BYREF

  Ogre::VertexFormat::VertexFormat(v13);
  Ogre::VertexFormat::addElement((int *)v13, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)v13, 1u, 7u, 0, 0, -1);
  v2 = (*((_DWORD *)this + 201) + 1) * (*((_DWORD *)this + 201) + 1);
  v10 = (Ogre::VertexData *)operator new(0x50u);
  Ogre::VertexData::VertexData(v10, (const Ogre::VertexFormat *)v13, v2);
  v3 = (float *)Ogre::VertexData::lock(v10);
  v4 = j_sqrt((float)((float)(*((float *)this + 198) * *((float *)this + 198))
                    - (float)(*((float *)this + 197) * *((float *)this + 197))));
  v5 = 0;
  v11 = (float)(v4 + v4) / (float)*((int *)this + 201);
  while ( v5 <= *((_DWORD *)this + 201) )
  {
    for ( i = 0; ; ++i )
    {
      v7 = *((_DWORD *)this + 201);
      if ( i > v7 )
        break;
      v8 = (float)v7 * 0.5;
      v12 = *((float *)this + 199) * 0.25;
      *v3 = (float)((float)i - v8) * v11;
      v3[1] = v12;
      v3[2] = (float)((float)v5 - v8) * v11;
      v3[3] = (float)i / (float)*((int *)this + 201);
      v3[4] = (float)v5 / (float)*((int *)this + 201);
      v3 += 5;
    }
    ++v5;
  }
  Ogre::VertexData::unlock((int)v10);
  *((_DWORD *)this + 220) = v10;
  v9 = sub_2F70B8(*((_DWORD *)this + 201) + 1, *((_DWORD *)this + 201) + 1);
  *((_DWORD *)this + 219) = v9;
  *((_DWORD *)v9 + 5) = *(_DWORD *)(*((_DWORD *)this + 220) + 52);
  *((_DWORD *)v9 + 4) = 0;
  Ogre::VertexFormat::~VertexFormat(v13);
}


//======================================================================
// SkyPlane::RenderSky(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002F7AB8   size: 0x1FE (510 bytes)
//======================================================================
int __fastcall SkyPlane::RenderSky(SkyPlane *this, Ogre::SceneRenderer *a2, const Ogre::ShaderEnvData *a3)
{
  void *v5; // r1
  Ogre::Material *v6; // r6
  int v7; // r2
  void *v8; // r1
  Ogre::Material *v9; // r6
  void *v10; // r1
  Ogre::Material *v11; // r6
  void *v12; // r1
  Ogre::Material *v13; // r6
  void *v14; // r1
  Ogre::Material *v15; // r6
  void *v16; // r1
  Ogre::Material *v17; // r6
  int v18; // r2
  void *v19; // r1
  Ogre::ShaderContext *v20; // r0
  Ogre::ShaderContext *v21; // r4
  int v22; // r2
  Ogre::ShaderContext *v23; // r4
  int v24; // r2
  Ogre::Material *v26; // [sp+18h] [bp-14h]
  Ogre::FixedString *v28[2]; // [sp+24h] [bp-8h] BYREF

  v26 = *((Ogre::Material **)this + 206);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v28, (Ogre::FixedString *)"g_SkyHeight", (int)v26);
  Ogre::Material::setParamValue(v26, (const Ogre::FixedString *)v28, (char *)this + 796);
  Ogre::FixedString::~FixedString(v28, v5);
  v6 = *((Ogre::Material **)this + 206);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v28, (Ogre::FixedString *)"g_SunColor", v7);
  Ogre::Material::setParamValue(v6, (const Ogre::FixedString *)v28, (char *)this + 308);
  Ogre::FixedString::~FixedString(v28, v8);
  v9 = *((Ogre::Material **)this + 206);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v28, (Ogre::FixedString *)"g_SunDirect", 824);
  Ogre::Material::setParamValue(v9, (const Ogre::FixedString *)v28, (char *)this + 324);
  Ogre::FixedString::~FixedString(v28, v10);
  v11 = *((Ogre::Material **)this + 206);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v28, (Ogre::FixedString *)"g_SkyModColor", 824);
  Ogre::Material::setParamValue(v11, (const Ogre::FixedString *)v28, (char *)this + 368);
  Ogre::FixedString::~FixedString(v28, v12);
  v13 = *((Ogre::Material **)this + 206);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v28, (Ogre::FixedString *)"g_DayTime", 824);
  Ogre::Material::setParamValue(v13, (const Ogre::FixedString *)v28, (char *)this + 820);
  Ogre::FixedString::~FixedString(v28, v14);
  v15 = *((Ogre::Material **)this + 206);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v28, (Ogre::FixedString *)"g_SkyTex", 824);
  Ogre::Material::setParamTexture(v15, (const Ogre::FixedString *)v28, *((Ogre::Texture **)this + 209), 0);
  Ogre::FixedString::~FixedString(v28, v16);
  v17 = *((Ogre::Material **)this + 206);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v28, (Ogre::FixedString *)"g_StarTex", v18);
  Ogre::Material::setParamTexture(v17, (const Ogre::FixedString *)v28, *((Ogre::Texture **)this + 212), 0);
  Ogre::FixedString::~FixedString(v28, v19);
  v20 = (Ogre::ShaderContext *)Ogre::SceneRenderer::newContext((int)a2);
  *((_DWORD *)v20 + 6) &= 0xFFFFFEu;
  v21 = v20;
  *((_DWORD *)v20 + 13) = *(_DWORD *)a3;
  v22 = *((_DWORD *)a3 + 1);
  *((_DWORD *)v20 + 5) = 0;
  *((_DWORD *)v20 + 14) = v22;
  Ogre::ShaderContext::setVB(v20, *((_DWORD *)this + 216));
  Ogre::ShaderContext::setIB((int)v21, *((_DWORD **)this + 215));
  *((_DWORD *)v21 + 7) = Ogre::VertexData::getVertexDecl(*((Ogre::VertexData **)this + 216));
  Ogre::ShaderContext::setMaterial(v21, *((Ogre::Material **)this + 206));
  *((_DWORD *)v21 + 8) = 5;
  *((_DWORD *)v21 + 10) = ((*(_DWORD *)(*((_DWORD *)this + 215) + 28) - *(_DWORD *)(*((_DWORD *)this + 215) + 24)) >> 1)
                        - 2;
  Ogre::ShaderContext::setInstanceEnvData(v21, a2, this, a3, nullptr);
  v23 = (Ogre::ShaderContext *)Ogre::SceneRenderer::newContext((int)a2);
  *((_DWORD *)v23 + 6) = *((_DWORD *)v23 + 6) & 0xFFFFF4 | 0xA;
  *((_DWORD *)v23 + 13) = *(_DWORD *)a3;
  v24 = *((_DWORD *)a3 + 1);
  *((_DWORD *)v23 + 5) = 0;
  *((_DWORD *)v23 + 14) = v24;
  Ogre::ShaderContext::setVB(v23, *((_DWORD *)this + 217));
  Ogre::ShaderContext::setIB((int)v23, *((_DWORD **)this + 218));
  *((_DWORD *)v23 + 7) = Ogre::VertexData::getVertexDecl(*((Ogre::VertexData **)this + 217));
  Ogre::ShaderContext::setMaterial(v23, *((Ogre::Material **)this + 206));
  *((_DWORD *)v23 + 8) = 5;
  *((_DWORD *)v23 + 10) = ((*(_DWORD *)(*((_DWORD *)this + 218) + 28) - *(_DWORD *)(*((_DWORD *)this + 218) + 24)) >> 1)
                        - 2;
  return Ogre::ShaderContext::setInstanceEnvData(v23, a2, this, a3, nullptr);
}


//======================================================================
// SkyPlane::RenderCloud(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002F7CEC   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall SkyPlane::RenderCloud(SkyPlane *this, Ogre::SceneRenderer *a2, const Ogre::ShaderEnvData *a3)
{
  void *v5; // r1
  Ogre::Material *v6; // r7
  int v7; // r2
  void *v8; // r1
  Ogre::Material *v9; // r7
  int v10; // r2
  void *v11; // r1
  Ogre::ShaderContext *v12; // r5
  int v13; // r2
  Ogre::Material *v15; // [sp+10h] [bp-14h]
  Ogre::FixedString *v17[2]; // [sp+1Ch] [bp-8h] BYREF

  v15 = *((Ogre::Material **)this + 208);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v17, (Ogre::FixedString *)"g_CloudTex", (int)v15);
  Ogre::Material::setParamTexture(v15, (const Ogre::FixedString *)v17, *((Ogre::Texture **)this + 213), 0);
  Ogre::FixedString::~FixedString(v17, v5);
  v6 = *((Ogre::Material **)this + 208);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v17, (Ogre::FixedString *)"g_CloudLightTex", v7);
  Ogre::Material::setParamTexture(v6, (const Ogre::FixedString *)v17, *((Ogre::Texture **)this + 214), 0);
  Ogre::FixedString::~FixedString(v17, v8);
  v9 = *((Ogre::Material **)this + 208);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v17, (Ogre::FixedString *)"g_SkyModColor", v10);
  Ogre::Material::setParamValue(v9, (const Ogre::FixedString *)v17, (char *)this + 368);
  Ogre::FixedString::~FixedString(v17, v11);
  v12 = (Ogre::ShaderContext *)Ogre::SceneRenderer::newContext((int)a2);
  *((_DWORD *)v12 + 6) = *((_DWORD *)v12 + 6) & 0xFFFFFA | 4;
  *((_DWORD *)v12 + 13) = *(_DWORD *)a3;
  v13 = *((_DWORD *)a3 + 1);
  *((_DWORD *)v12 + 5) = 0;
  *((_DWORD *)v12 + 14) = v13;
  Ogre::ShaderContext::setVB(v12, *((_DWORD *)this + 220));
  Ogre::ShaderContext::setIB((int)v12, *((_DWORD **)this + 219));
  *((_DWORD *)v12 + 7) = Ogre::VertexData::getVertexDecl(*((Ogre::VertexData **)this + 220));
  Ogre::ShaderContext::setMaterial(v12, *((Ogre::Material **)this + 208));
  *((_DWORD *)v12 + 8) = 5;
  *((_DWORD *)v12 + 10) = ((*(_DWORD *)(*((_DWORD *)this + 219) + 28) - *(_DWORD *)(*((_DWORD *)this + 219) + 24)) >> 1)
                        - 2;
  return Ogre::ShaderContext::setInstanceEnvData(v12, a2, this, a3, nullptr);
}


//======================================================================
// SkyPlane::setCloudDensity(int)
// address: 0x002F7E04   size: 0x1A (26 bytes)
//======================================================================
int __fastcall SkyPlane::setCloudDensity(int this, int a2)
{
  if ( a2 > 255 )
    a2 = 255;
  *(_DWORD *)(this + 816) = 255 - (a2 & (~a2 >> 31));
  return this;
}


//======================================================================
// SkyPlane::getCloudDensity(void)
// address: 0x002F7E1E   size: 0xC (12 bytes)
//======================================================================
int __fastcall SkyPlane::getCloudDensity(SkyPlane *this)
{
  return 255 - *((_DWORD *)this + 204);
}


//======================================================================
// SkyPlane::getSunFOV(void)
// address: 0x002F7E2A   size: 0x8 (8 bytes)
//======================================================================
int __fastcall SkyPlane::getSunFOV(SkyPlane *this)
{
  return *((_DWORD *)this + 192);
}


//======================================================================
// SkyPlane::getSunDirect(void)
// address: 0x002F7E32   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall SkyPlane::getSunDirect(_DWORD *this, int a2)
{
  _DWORD *v2; // r1

  v2 = (_DWORD *)(a2 + 252);
  *this = *v2;
  *(this + 1) = v2[1];
  *(this + 2) = v2[2];
  return this;
}


//======================================================================
// SkyPlane::getSunPosition(Ogre::Camera *)
// address: 0x002F7E44   size: 0x2E (46 bytes)
//======================================================================
SkyPlane *__fastcall SkyPlane::getSunPosition(SkyPlane *this, Ogre::Camera *a2)
{
  float v3; // r7
  float v4; // r0

  v3 = *((float *)a2 + 64) * 200.0;
  v4 = *((float *)a2 + 65) * 200.0;
  *(float *)this = *((float *)a2 + 63) * 200.0;
  *((float *)this + 1) = v3;
  *((float *)this + 2) = v4;
  return this;
}


//======================================================================
// SkyPlane::getNumSunFlare(void)
// address: 0x002F7E78   size: 0x4 (4 bytes)
//======================================================================
int __fastcall SkyPlane::getNumSunFlare(SkyPlane *this)
{
  return 0;
}


//======================================================================
// SkyPlane::getDayNightColor(DAYNIGHT_COLOR,float)
// address: 0x002F7E7C   size: 0x10C (268 bytes)
//======================================================================
float *__fastcall SkyPlane::getDayNightColor(float *a1, int a2, int a3, float a4)
{
  float v5; // r4
  int v6; // r0
  int v7; // r6
  unsigned int v8; // r1
  float v9; // r6
  float v10; // r4
  float v12; // [sp+4h] [bp-30h]
  float v14; // [sp+8h] [bp-2Ch]
  float v16; // [sp+10h] [bp-24h] BYREF
  float v17; // [sp+14h] [bp-20h]
  float v18; // [sp+18h] [bp-1Ch]
  float v19; // [sp+1Ch] [bp-18h]
  float v20; // [sp+20h] [bp-14h] BYREF
  float v21; // [sp+24h] [bp-10h]
  float v22; // [sp+28h] [bp-Ch]
  float v23; // [sp+2Ch] [bp-8h]

  v5 = (float)(a4 * 16.0) - 0.5;
  v6 = (int)j_floor(v5);
  v12 = v5 - (float)v6;
  v7 = v6 + (v6 < 0 ? 0x10 : 0);
  v8 = *(_DWORD *)(4 * (16 * a3 + v7 + 96) + a2);
  v16 = 1.0;
  v17 = 1.0;
  v18 = 1.0;
  v19 = 1.0;
  v20 = 1.0;
  v21 = 1.0;
  v22 = 1.0;
  v23 = 1.0;
  Ogre::ColourValue::setColorQuad((Ogre::ColourValue *)&v16, v8);
  Ogre::ColourValue::setColorQuad(
    (Ogre::ColourValue *)&v20,
    *(_DWORD *)(4 * (16 * a3 + ((v7 + 1) & -(((unsigned int)(v7 + 1) >> 31) + ((unsigned int)(v7 + 1) <= 0xF))) + 96)
              + a2));
  v14 = v17 + (float)((float)(v21 - v17) * v12);
  v9 = v18 + (float)((float)(v22 - v18) * v12);
  v10 = v19 + (float)((float)(v23 - v19) * v12);
  *a1 = v16 + (float)((float)(v20 - v16) * v12);
  a1[2] = v9;
  a1[3] = v10;
  a1[1] = v14;
  return a1;
}


//======================================================================
// SkyPlane::getSkyFogColor(Ogre::Vector3 const&)
// address: 0x002F7F88   size: 0xE2 (226 bytes)
//======================================================================
SkyPlane *__fastcall SkyPlane::getSkyFogColor(SkyPlane *this, const Ogre::Vector3 *a2, float *a3)
{
  float v5; // r0
  float v6; // r6
  float v8; // [sp+4h] [bp-40h]
  float v9[4]; // [sp+10h] [bp-34h] BYREF
  float v10[4]; // [sp+20h] [bp-24h] BYREF
  float v11[5]; // [sp+30h] [bp-14h] BYREF

  Ogre::ColourValue::operator*(
    v9,
    (float *)a2 + 77,
    (float)((float)((float)((float)(*a3 * *((float *)a2 + 81)) + (float)(a3[1] * *((float *)a2 + 82)))
                  + (float)(a3[2] * *((float *)a2 + 83)))
          + 1.1)
  * 0.5);
  SkyPlane::getDayNightColor(v10, (int)a2, 5, *((float *)a2 + 205));
  SkyPlane::getDayNightColor(v11, (int)a2, 3, *((float *)a2 + 205));
  v5 = v11[1] * v10[1];
  v8 = v11[2] * v10[2];
  v6 = v11[3] * v10[3];
  *(float *)this = v9[0] + (float)(v11[0] * v10[0]);
  *((float *)this + 1) = v9[1] + v5;
  *((float *)this + 2) = v9[2] + v8;
  *((float *)this + 3) = v9[3] + v6;
  return this;
}


//======================================================================
// SkyPlane::UpdateParam(void)
// address: 0x002F8070   size: 0x1EC (492 bytes)
//======================================================================
float __fastcall SkyPlane::UpdateParam(SkyPlane *this)
{
  double v2; // r4
  float v3; // r0
  float v4; // r0
  float v5; // r4
  float result; // r0
  float v7; // [sp+18h] [bp-34h]
  float v8; // [sp+1Ch] [bp-30h]
  float v9; // [sp+20h] [bp-2Ch]
  __int128 v10; // [sp+28h] [bp-24h] BYREF
  float v11[5]; // [sp+38h] [bp-14h] BYREF

  v8 = *((float *)this + 205);
  v7 = (float)(v8 * 360.0) + *(float *)&SUNSET_ANGLE;
  if ( v7 >= 360.0 )
    v7 = v7 - 360.0;
  v2 = (float)(v7 * 0.017453);
  v3 = j_sin(v2);
  v9 = v3;
  *((float *)this + 63) = v3;
  v4 = j_cos(v2);
  *((_DWORD *)this + 64) = LODWORD(v4) + 0x80000000;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = LODWORD(v9) + 0x80000000;
  *((float *)this + 67) = v4;
  *((_DWORD *)this + 68) = 0x80000000;
  SkyPlane::getDayNightColor((float *)&v10, (int)this, 0, v8);
  *(_OWORD *)((char *)this + 276) = v10;
  SkyPlane::getDayNightColor((float *)&v10, (int)this, 3, *((float *)this + 205));
  *((_OWORD *)this + 21) = v10;
  SkyPlane::getDayNightColor((float *)&v10, (int)this, 1, *((float *)this + 205));
  *(_OWORD *)((char *)this + 292) = v10;
  SkyPlane::getDayNightColor((float *)&v10, (int)this, 4, *((float *)this + 205));
  *((_OWORD *)this + 22) = v10;
  if ( v7 < 80.0 || v7 > 280.0 )
  {
    Ogre::ColourValue::operator*(v11, (float *)this + 73, 0.4);
    Ogre::ColourValue::operator*((float *)&v10, v11, 0.2);
    *(_OWORD *)((char *)this + 308) = v10;
    *((_DWORD *)this + 81) = *((_DWORD *)this + 66);
    *((_DWORD *)this + 82) = *((_DWORD *)this + 67);
    *((_DWORD *)this + 83) = *((_DWORD *)this + 68);
  }
  else
  {
    Ogre::ColourValue::operator*((float *)&v10, (float *)this + 69, 0.4);
    *(_OWORD *)((char *)this + 308) = v10;
    *((_DWORD *)this + 81) = *((_DWORD *)this + 63);
    *((_DWORD *)this + 82) = *((_DWORD *)this + 64);
    *((_DWORD *)this + 83) = *((_DWORD *)this + 65);
  }
  SkyPlane::getDayNightColor(v11, (int)this, 2, *((float *)this + 205));
  *((float *)this + 80) = v11[0];
  v5 = *((float *)this + 94) * *((float *)this + 79);
  result = *((float *)this + 92) * *((float *)this + 77);
  *((float *)this + 78) = *((float *)this + 93) * *((float *)this + 78);
  *((float *)this + 77) = result;
  *((float *)this + 79) = v5;
  return result;
}


//======================================================================
// SkyPlane::update(float)
// address: 0x002F8278   size: 0x94 (148 bytes)
//======================================================================
__int64 __fastcall SkyPlane::update(SkyPlane *this, float a2)
{
  int v3; // r5
  float v4; // r0
  int v5; // r6
  int v6; // r1
  __int64 v8; // [sp+0h] [bp-Ch]

  LODWORD(v8) = this;
  *((float *)this + 205) = a2;
  v3 = *((_DWORD *)this + 225);
  HIDWORD(v8) = *(_DWORD *)(v3 + 44);
  if ( a2 >= *((float *)&v8 + 1) )
    v4 = a2;
  else
    v4 = a2 + 1.0;
  *(float *)(v3 + 40) = *(float *)(v3 + 40) + (float)(v4 - *((float *)&v8 + 1));
  *(_DWORD *)(*((_DWORD *)this + 225) + 44) = *((_DWORD *)this + 205);
  v5 = *((_DWORD *)this + 225);
  if ( *(float *)(v5 + 40) >= 0.041667 )
  {
    *(_DWORD *)(v5 + 40) = 0;
    *(_DWORD *)(*((_DWORD *)this + 225) + 32) = *(_DWORD *)(*((_DWORD *)this + 225) + 36);
    v6 = *((_DWORD *)this + 225);
    dword_5175BC = 214013 * dword_5175BC + 2531011;
    *(_DWORD *)(v6 + 36) = (unsigned int)(2 * dword_5175BC) >> 17;
  }
  SkyPlane::UpdateParam(this);
  if ( *(_DWORD *)(*((_DWORD *)this + 225) + 28) == 0 )
    SkyPlane::NewCloudGenCmd(this, 0);
  return v8;
}


//======================================================================
// SkyPlane::loadDayNightColor(char const*)
// address: 0x002F831C   size: 0x11C (284 bytes)
//======================================================================
int __fastcall SkyPlane::loadDayNightColor(SkyPlane *this, char *a2)
{
  Ogre::TextureData *v4; // r4
  unsigned int v5; // r3
  int v6; // r12
  char *v7; // r7
  int v8; // r2
  _BYTE *v9; // r3
  int i; // r1
  char v11; // r5
  char v12; // r6
  char v14; // [sp+8h] [bp-34h]
  int v15; // [sp+Ch] [bp-30h]
  int v16; // [sp+10h] [bp-2Ch]
  int v17; // [sp+14h] [bp-28h]
  int v18; // [sp+18h] [bp-24h]
  int v19; // [sp+1Ch] [bp-20h]
  char *v20; // [sp+20h] [bp-1Ch]
  char *v21; // [sp+24h] [bp-18h]
  char *v22[4]; // [sp+2Ch] [bp-10h] BYREF

  v4 = (Ogre::TextureData *)operator new(0x48u);
  Ogre::TextureData::TextureData(v4);
  sub_3BF0BC((int)v22, a2);
  v18 = Ogre::TextureData::loadFromImageFile(v4, v22, 0);
  sub_3BDF80(v22);
  if ( v18 != 0 )
  {
    v16 = *((_DWORD *)v4 + 5);
    if ( v16 > 16 )
      v16 = 16;
    v17 = *((_DWORD *)v4 + 6);
    if ( v17 > 5 )
      v17 = 5;
    v6 = (*(int (__fastcall **)(Ogre::TextureData *, _DWORD, _DWORD, int, char **))(*(_DWORD *)v4 + 36))(
           v4,
           0,
           0,
           1,
           v22);
    v20 = v22[1];
    v7 = (char *)this + 386;
    v15 = 0;
    v19 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 64);
    v21 = v22[0];
    while ( v15 < v17 )
    {
      v8 = v6;
      v9 = v7;
      for ( i = 0; i < v16; ++i )
      {
        v11 = *(_BYTE *)(v8 + 1);
        v12 = *(_BYTE *)(v8 + 2);
        v14 = *(_BYTE *)v8;
        if ( v19 == 2 )
        {
          *v9 = v14;
          *(v9 - 1) = v11;
          *(v9 - 2) = v12;
        }
        else
        {
          *v9 = v12;
          *(v9 - 1) = v11;
          *(v9 - 2) = v14;
        }
        v9[1] = -1;
        v9 += 4;
        v8 += (int)v21;
      }
      v7 += 64;
      ++v15;
      v6 += (int)v20;
    }
    (*(void (__fastcall **)(Ogre::TextureData *, _DWORD, _DWORD))(*(_DWORD *)v4 + 40))(v4, 0, 0);
    Ogre::BaseObject::release(v4);
  }
  else
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/SkyPlane.cpp", (_BYTE *)&stru_268.st_name + 3, 8, v5);
    Ogre::LogMessage((Ogre *)"cannot load file: %s", a2);
  }
  return v18;
}


//======================================================================
// SkyPlane::SkyPlane(void)
// address: 0x002F8448   size: 0x370 (880 bytes)
//======================================================================
// Alternative name is '_ZN8SkyPlaneC2Ev'
void __fastcall SkyPlane::SkyPlane(SkyPlane *this)
{
  int v2; // r2
  Ogre::Material *v3; // r6
  void *v4; // r1
  int v5; // r2
  Ogre::Material *v6; // r6
  void *v7; // r1
  int v8; // r2
  Ogre::Material *v9; // r6
  void *v10; // r1
  Ogre::ResourceManager *v11; // r7
  int v12; // r2
  Ogre::TextureData *v13; // r7
  void *v14; // r1
  Ogre::ResourceManager *v15; // r7
  int v16; // r2
  void *v17; // r1
  Ogre::ResourceManager *v18; // r7
  int v19; // r2
  void *v20; // r1
  Ogre::ResourceManager *v21; // r6
  int v22; // r2
  void *v23; // r1
  int v24; // r6
  int v25; // r6
  SkyCloudGen *v26; // r5
  int v27; // r0
  int v28; // r2
  int v29; // r0
  Ogre::FixedString *v30; // [sp+14h] [bp-38h] BYREF
  Ogre::FixedString *v31; // [sp+18h] [bp-34h] BYREF
  Ogre::FixedString *v32; // [sp+1Ch] [bp-30h] BYREF
  Ogre::FixedString *v33; // [sp+20h] [bp-2Ch] BYREF
  Ogre::FixedString *v34; // [sp+24h] [bp-28h] BYREF
  Ogre::FixedString *v35; // [sp+28h] [bp-24h] BYREF
  _DWORD v36[2]; // [sp+2Ch] [bp-20h] BYREF
  int v37; // [sp+34h] [bp-18h]
  int v38; // [sp+3Ch] [bp-10h]
  int v39; // [sp+40h] [bp-Ch]

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_462738;
  *((_DWORD *)this + 69) = 1065353216;
  *((_DWORD *)this + 70) = 1065353216;
  *((_DWORD *)this + 71) = 1065353216;
  *((_DWORD *)this + 72) = 1065353216;
  *((_DWORD *)this + 73) = 1065353216;
  *((_DWORD *)this + 74) = 1065353216;
  *((_DWORD *)this + 75) = 1065353216;
  *((_DWORD *)this + 76) = 1065353216;
  *((_DWORD *)this + 77) = 1065353216;
  *((_DWORD *)this + 78) = 1065353216;
  *((_DWORD *)this + 79) = 1065353216;
  *((_DWORD *)this + 80) = 1065353216;
  *((_DWORD *)this + 84) = 1065353216;
  *((_DWORD *)this + 85) = 1065353216;
  *((_DWORD *)this + 86) = 1065353216;
  *((_DWORD *)this + 87) = 1065353216;
  *((_DWORD *)this + 88) = 1065353216;
  *((_DWORD *)this + 89) = 1065353216;
  *((_DWORD *)this + 90) = 1065353216;
  *((_DWORD *)this + 91) = 1065353216;
  *((_DWORD *)this + 92) = 1065353216;
  *((_DWORD *)this + 93) = 1065353216;
  *((_DWORD *)this + 94) = 1065353216;
  *((_DWORD *)this + 95) = 1065353216;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 221);
  *((_DWORD *)this + 192) = 1109393408;
  *((_DWORD *)this + 193) = 1109393408;
  *((_DWORD *)this + 194) = 1108738048;
  *((_DWORD *)this + 195) = 1109393408;
  *((_DWORD *)this + 197) = 1176256512;
  *((_DWORD *)this + 198) = 1184645120;
  *((_DWORD *)this + 199) = 1171963904;
  *((_DWORD *)this + 200) = 50;
  *((_DWORD *)this + 92) = 1065353216;
  *((_DWORD *)this + 93) = 1065353216;
  *((_DWORD *)this + 94) = 1065353216;
  *((_DWORD *)this + 95) = 1065353216;
  *((_DWORD *)this + 202) = 256;
  *((_DWORD *)this + 203) = 1024;
  *((_DWORD *)this + 204) = 130;
  *((_DWORD *)this + 196) = 1045220557;
  *((_DWORD *)this + 205) = 0;
  Ogre::VertexFormat::addElement((int *)this + 221, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 221, 1u, 7u, 0, 0, -1);
  *((_DWORD *)this + 224) = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                               + 36))(
                              Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                              (char *)this + 884);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v30, (Ogre::FixedString *)"skyplane", v2);
  v3 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v3, (const Ogre::FixedString *)&v30);
  *((_DWORD *)this + 206) = v3;
  Ogre::FixedString::~FixedString(&v30, v4);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v31, (Ogre::FixedString *)"sun", v5);
  v6 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v6, (const Ogre::FixedString *)&v31);
  *((_DWORD *)this + 207) = v6;
  Ogre::FixedString::~FixedString(&v31, v7);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v32, (Ogre::FixedString *)"cloudplane", v8);
  v9 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v9, (const Ogre::FixedString *)&v32);
  *((_DWORD *)this + 208) = v9;
  Ogre::FixedString::~FixedString(&v32, v10);
  j_memset((char *)this + 384, 0, 0x180u);
  v11 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v33, (Ogre::FixedString *)"sky/clearsky.png", v12);
  v13 = (Ogre::TextureData *)Ogre::ResourceManager::blockLoad(v11, &v33, 0);
  Ogre::FixedString::~FixedString(&v33, v14);
  SkyPlane::loadSkyColor(this, v13);
  *((_DWORD *)this + 209) = v13;
  v15 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v34, (Ogre::FixedString *)"sky/sun.png", v16);
  *((_DWORD *)this + 210) = Ogre::ResourceManager::blockLoad(v15, &v34, 0);
  Ogre::FixedString::~FixedString(&v34, v17);
  v18 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v35, (Ogre::FixedString *)"sky/moon_phases.png", v19);
  *((_DWORD *)this + 211) = Ogre::ResourceManager::blockLoad(v18, &v35, 0);
  Ogre::FixedString::~FixedString(&v35, v20);
  v21 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)v36, (Ogre::FixedString *)"sky/starfield.png", v22);
  *((_DWORD *)this + 212) = Ogre::ResourceManager::blockLoad(v21, (Ogre::FixedString **)v36, 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v36, v23);
  SkyPlane::loadDayNightColor(this, "sky/suncolor.png");
  v36[0] = 0;
  v39 = 3;
  v37 = *((_DWORD *)this + 203);
  v36[1] = v37;
  v38 = 1;
  v24 = operator new(0x48u);
  Ogre::TextureData::TextureData(v24, v36, 1);
  *((_DWORD *)this + 213) = v24;
  v39 = 12;
  v37 = *((_DWORD *)this + 202);
  v36[1] = v37;
  v25 = operator new(0x48u);
  Ogre::TextureData::TextureData(v25, v36, 1);
  *((_DWORD *)this + 214) = v25;
  SkyPlane::CreateSkyVB(this);
  *((_DWORD *)this + 201) = 8;
  SkyPlane::CreateCloudVB(this);
  v26 = (SkyCloudGen *)operator new(0x6Cu);
  SkyCloudGen::SkyCloudGen(v26, *((_DWORD *)this + 202), *((_DWORD *)this + 203));
  v27 = dword_5175BC;
  *((_DWORD *)this + 225) = v26;
  v28 = 214013 * v27 + 2531011;
  *((_DWORD *)v26 + 8) = (unsigned int)(2 * v28) >> 17;
  v29 = *((_DWORD *)this + 225);
  dword_5175BC = 214013 * v28 + 2531011;
  *(_DWORD *)(v29 + 36) = (unsigned int)(2 * dword_5175BC) >> 17;
  *(_DWORD *)(*((_DWORD *)this + 225) + 40) = 0;
  Ogre::OSThread::start(*((Ogre::OSThread **)this + 225));
  SkyPlane::UpdateParam(this);
  SkyPlane::NewCloudGenCmd(this, 0);
  SkyPlane::OnCloudGenOutput(this);
  *((_DWORD *)this + 61) |= 4u;
}


//======================================================================
// SkyPlane::RenderSunQuad(Ogre::SceneRenderer *,Ogre::Vector3 const*,Ogre::Texture *,Ogre::Material *,Ogre::ShaderEnvData const&,bool,float *)
// address: 0x002F8848   size: 0x11A (282 bytes)
//======================================================================
int __fastcall SkyPlane::RenderSunQuad(
        int this,
        Ogre::DynamicBufferPool **a2,
        const Ogre::Vector3 *a3,
        Ogre::Texture *a4,
        Ogre::Material *a5,
        const Ogre::ShaderEnvData *a6,
        bool a7,
        float *a8)
{
  float v9; // r5
  float v10; // r7
  int v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r2
  Ogre::ShaderContext *v15; // r4
  int v16; // r2
  float v17; // [sp+Ch] [bp-38h]
  float v18; // [sp+10h] [bp-34h]
  Ogre::RenderableObject *v19; // [sp+14h] [bp-30h]
  Ogre::DynamicVertexBuffer *v21; // [sp+1Ch] [bp-28h]
  _DWORD v22[8]; // [sp+24h] [bp-20h] BYREF

  v19 = (Ogre::RenderableObject *)this;
  if ( a4 != nullptr )
  {
    if ( a8 != nullptr )
    {
      v9 = *a8;
      v10 = a8[3];
      v18 = a8[1];
      v17 = a8[2];
    }
    else if ( a7 )
    {
      (*(void (__fastcall **)(Ogre::Texture *, _DWORD *))(*(_DWORD *)a4 + 28))(a4, v22);
      v9 = 0.5 / (float)v22[1];
      v18 = v9;
      v17 = 1.0 - v9;
      v10 = 1.0 - v9;
    }
    else
    {
      v10 = 1.0;
      v17 = 1.0;
      v18 = 0.0;
      v9 = 0.0;
    }
    v21 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                         a2,
                                         (Ogre::RenderableObject *)((char *)v19 + 884),
                                         4u);
    v11 = Ogre::DynamicVertexBuffer::lock(v21);
    *(_DWORD *)v11 = *(_DWORD *)a3;
    *(_DWORD *)(v11 + 4) = *((_DWORD *)a3 + 1);
    v12 = *((_DWORD *)a3 + 2);
    *(float *)(v11 + 12) = v9;
    *(float *)(v11 + 16) = v10;
    *(_DWORD *)(v11 + 8) = v12;
    *(_DWORD *)(v11 + 20) = *((_DWORD *)a3 + 3);
    *(_DWORD *)(v11 + 24) = *((_DWORD *)a3 + 4);
    v13 = *((_DWORD *)a3 + 5);
    *(float *)(v11 + 36) = v10;
    *(_DWORD *)(v11 + 28) = v13;
    *(float *)(v11 + 32) = v17;
    *(_DWORD *)(v11 + 40) = *((_DWORD *)a3 + 9);
    *(_DWORD *)(v11 + 44) = *((_DWORD *)a3 + 10);
    v14 = *((_DWORD *)a3 + 11);
    *(float *)(v11 + 52) = v9;
    *(_DWORD *)(v11 + 48) = v14;
    *(float *)(v11 + 56) = v18;
    *(_DWORD *)(v11 + 60) = *((_DWORD *)a3 + 6);
    *(_DWORD *)(v11 + 64) = *((_DWORD *)a3 + 7);
    *(_DWORD *)(v11 + 68) = *((_DWORD *)a3 + 8);
    *(float *)(v11 + 72) = v17;
    *(float *)(v11 + 76) = v18;
    v15 = (Ogre::ShaderContext *)Ogre::SceneRenderer::newContext((int)a2);
    *((_DWORD *)v15 + 6) = *((_DWORD *)v15 + 6) & 0xFFFFFC | 2;
    *((_DWORD *)v15 + 13) = *(_DWORD *)a6;
    v16 = *((_DWORD *)a6 + 1);
    *((_DWORD *)v15 + 5) = 0;
    *((_DWORD *)v15 + 14) = v16;
    Ogre::ShaderContext::setVB(v15, (int)v21);
    *((_DWORD *)v15 + 7) = *((_DWORD *)v19 + 224);
    Ogre::ShaderContext::setMaterial(v15, a5);
    *((_DWORD *)v15 + 8) = 5;
    *((_DWORD *)v15 + 10) = 2;
    return Ogre::ShaderContext::setInstanceEnvData(v15, (Ogre::SceneRenderer *)a2, v19, a6, nullptr);
  }
  return this;
}


//======================================================================
// SkyPlane::RenderSun(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002F8968   size: 0x1A8 (424 bytes)
//======================================================================
int __fastcall SkyPlane::RenderSun(SkyPlane *this, Ogre::DynamicBufferPool **a2, const Ogre::ShaderEnvData *a3)
{
  float v3; // r6
  float v4; // r5
  float v5; // r7
  float v6; // r0
  void *v7; // r1
  int v8; // r2
  void *v9; // r1
  float v11; // [sp+14h] [bp-70h]
  Ogre::Material *v12; // [sp+14h] [bp-70h]
  Ogre::Material *v13; // [sp+14h] [bp-70h]
  float v15; // [sp+1Ch] [bp-68h]
  Ogre::FixedString *v18; // [sp+30h] [bp-54h] BYREF
  float v19; // [sp+34h] [bp-50h] BYREF
  float v20; // [sp+38h] [bp-4Ch]
  float v21; // [sp+3Ch] [bp-48h]
  float v22[4]; // [sp+40h] [bp-44h] BYREF
  float v23; // [sp+50h] [bp-34h] BYREF
  float v24; // [sp+54h] [bp-30h]
  float v25; // [sp+58h] [bp-2Ch]
  float v26; // [sp+5Ch] [bp-28h]
  float v27; // [sp+60h] [bp-24h]
  float v28; // [sp+64h] [bp-20h]
  float v29; // [sp+68h] [bp-1Ch]
  float v30; // [sp+6Ch] [bp-18h]
  float v31; // [sp+70h] [bp-14h]
  float v32; // [sp+74h] [bp-10h]
  float v33; // [sp+78h] [bp-Ch]
  float v34; // [sp+7Ch] [bp-8h]

  v3 = *((float *)this + 192)
     + (float)((float)((float)(*((float *)this + 192) / 3.0) - *((float *)this + 192))
             * (float)((float)((float)((float)((float)(*((float *)this + 63) * 0.0) + *((float *)this + 64))
                                     + (float)(*((float *)this + 65) * 0.0))
                             + 1.0)
                     * 0.5));
  Ogre::Matrix4::transformNormal(
    (const Ogre::ShaderEnvData *)((char *)a3 + 956),
    (Ogre::Vector3 *)&v19,
    (SkyPlane *)((char *)this + 252));
  v4 = *((float *)this + 199) * 0.5;
  v19 = v4 * v19;
  v11 = v19;
  v20 = v4 * v20;
  v15 = v20;
  v21 = v4 * v21;
  v5 = v21;
  v6 = j_tan((float)((float)(v3 * 0.5) * 0.017453));
  v24 = v15 - (float)(v4 * v6);
  v23 = v11 - (float)(v4 * v6);
  v25 = v5 + 0.0;
  v26 = v11 + (float)(v4 * v6);
  v27 = v24;
  v28 = v5 + 0.0;
  v29 = v26;
  v30 = v15 + (float)(v4 * v6);
  v31 = v5 + 0.0;
  v32 = v23;
  v33 = v30;
  v34 = v5 + 0.0;
  Ogre::ColourValue::operator*(v22, (float *)this + 69, *((float *)this + 95));
  v12 = *((Ogre::Material **)this + 207);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v18, (Ogre::FixedString *)"g_SunColor", (int)v12);
  Ogre::Material::setParamValue(v12, (const Ogre::FixedString *)&v18, v22);
  Ogre::FixedString::~FixedString(&v18, v7);
  v13 = *((Ogre::Material **)this + 207);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v18, (Ogre::FixedString *)"g_SunTex", v8);
  Ogre::Material::setParamTexture(v13, (const Ogre::FixedString *)&v18, *((Ogre::Texture **)this + 210), 0);
  Ogre::FixedString::~FixedString(&v18, v9);
  return SkyPlane::RenderSunQuad(
           (int)this,
           a2,
           (const Ogre::Vector3 *)&v23,
           *((Ogre::Texture **)this + 210),
           *((Ogre::Material **)this + 207),
           a3,
           false,
           nullptr);
}


//======================================================================
// SkyPlane::RenderMoon(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002F8B2C   size: 0x242 (578 bytes)
//======================================================================
int __fastcall SkyPlane::RenderMoon(SkyPlane *this, Ogre::DynamicBufferPool **a2, const Ogre::ShaderEnvData *a3)
{
  float v3; // r5
  float v4; // r7
  float v5; // r5
  float v6; // r7
  float v7; // r0
  float v8; // r0
  int v9; // r2
  void *v10; // r1
  Ogre::Material *v11; // r5
  void *v12; // r1
  signed int v13; // r5
  float v15; // [sp+14h] [bp-80h]
  float v16; // [sp+14h] [bp-80h]
  Ogre::Material *v17; // [sp+14h] [bp-80h]
  float v19; // [sp+1Ch] [bp-78h]
  float v20; // [sp+20h] [bp-74h]
  float v23; // [sp+34h] [bp-60h] BYREF
  float v24; // [sp+38h] [bp-5Ch]
  float v25; // [sp+3Ch] [bp-58h]
  float v26[4]; // [sp+40h] [bp-54h] BYREF
  float v27; // [sp+50h] [bp-44h] BYREF
  float v28; // [sp+54h] [bp-40h]
  float v29; // [sp+58h] [bp-3Ch]
  float v30; // [sp+5Ch] [bp-38h]
  float v31[13]; // [sp+60h] [bp-34h] BYREF

  v3 = *((float *)this + 65);
  v4 = *((float *)this + 63);
  v15 = *((float *)this + 64);
  v20 = *((float *)this + 194)
      + (float)((float)((float)(*((float *)this + 194) * 0.7) - *((float *)this + 194))
              * (float)((float)((float)((float)((float)(v4 * 0.0) + v15) + (float)(v3 * 0.0)) + 1.0) * 0.5));
  LODWORD(v31[1]) = LODWORD(v15) + 0x80000000;
  LODWORD(v31[0]) = LODWORD(v4) + 0x80000000;
  LODWORD(v31[2]) = LODWORD(v3) + 0x80000000;
  Ogre::Matrix4::transformNormal(
    (const Ogre::ShaderEnvData *)((char *)a3 + 956),
    (Ogre::Vector3 *)&v23,
    (const Ogre::Vector3 *)v31);
  v5 = *((float *)this + 199) * 0.5;
  v23 = v5 * v23;
  v6 = v23;
  v24 = v5 * v24;
  v16 = v24;
  v25 = v5 * v25;
  v19 = v25;
  v7 = j_tan((float)((float)(v20 * 0.5) * 0.017453));
  v8 = v5 * v7;
  v31[0] = v6 - v8;
  v31[1] = v16 - v8;
  v31[2] = v19 + 0.0;
  v31[3] = v6 + v8;
  v31[5] = v19 + 0.0;
  v31[4] = v16 - v8;
  v31[6] = v6 + v8;
  v31[7] = v16 + v8;
  v31[8] = v19 + 0.0;
  v31[9] = v6 - v8;
  v31[10] = v16 + v8;
  v31[11] = v19 + 0.0;
  Ogre::ColourValue::operator*(v26, (float *)this + 73, *((float *)this + 95));
  v17 = *((Ogre::Material **)this + 207);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v27, (Ogre::FixedString *)"g_SunColor", v9);
  Ogre::Material::setParamValue(v17, (const Ogre::FixedString *)&v27, v26);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v27, v10);
  v11 = *((Ogre::Material **)this + 207);
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v27, (Ogre::FixedString *)"g_SunTex", (int)this);
  Ogre::Material::setParamTexture(v11, (const Ogre::FixedString *)&v27, *((Ogre::Texture **)this + 211), 0);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)&v27, v12);
  v13 = (int)(float)(*((float *)this + 196) * 8.0)
      & -(((unsigned int)(int)(float)(*((float *)this + 196) * 8.0) >> 31)
        + ((unsigned int)(int)(float)(*((float *)this + 196) * 8.0) <= 7));
  v27 = (float)(v13 % 4) * 0.25;
  v28 = (float)(v13 / 4) * 0.5;
  v29 = v27 + 0.25;
  v30 = v28 + 0.5;
  return SkyPlane::RenderSunQuad(
           (int)this,
           a2,
           (const Ogre::Vector3 *)v31,
           *((Ogre::Texture **)this + 211),
           *((Ogre::Material **)this + 207),
           a3,
           false,
           &v27);
}


//======================================================================
// SkyPlane::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002F8D90   size: 0x42 (66 bytes)
//======================================================================
int __fastcall SkyPlane::render(SkyPlane *this, Ogre::SceneRenderer *a2, const Ogre::ShaderEnvData *a3)
{
  if ( *(_DWORD *)(*((_DWORD *)this + 225) + 28) == 3 )
    SkyPlane::OnCloudGenOutput(this);
  SkyPlane::RenderSky(this, a2, a3);
  SkyPlane::RenderSun(this, (Ogre::DynamicBufferPool **)a2, a3);
  SkyPlane::RenderMoon(this, (Ogre::DynamicBufferPool **)a2, a3);
  return SkyPlane::RenderCloud(this, a2, a3);
}

