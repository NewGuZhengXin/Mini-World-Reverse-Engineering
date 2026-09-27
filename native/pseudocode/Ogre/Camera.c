// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Camera

//======================================================================
// Ogre::Camera::getRTTI(void)const
// address: 0x001968AC   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Camera::getRTTI(Ogre::Camera *this)
{
  return &Ogre::Camera::m_RTTI;
}


//======================================================================
// Ogre::Camera::~Camera()
// address: 0x001968B8   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre6CameraD1Ev'
void __fastcall Ogre::Camera::~Camera(Ogre::Camera *this)
{
  void *v2; // r5

  *(_DWORD *)this = &off_4585E8;
  v2 = *((void **)this + 53);
  if ( v2 != nullptr )
  {
    Ogre::CullResult::~CullResult(*((Ogre::CullResult **)this + 53));
    operator delete(v2);
  }
  Ogre::MovableObject::~MovableObject(this);
}


//======================================================================
// Ogre::Camera::~Camera()
// address: 0x001968EC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Camera::~Camera(Ogre::Camera *this)
{
  Ogre::Camera::~Camera(this);
  operator delete(this);
}


//======================================================================
// Ogre::Camera::setRatio(float)
// address: 0x001968FE   size: 0x6 (6 bytes)
//======================================================================
float *__fastcall Ogre::Camera::setRatio(Ogre::Camera *this, float a2)
{
  float *result; // r0

  result = (float *)((char *)this + 248);
  *result = a2;
  return result;
}


//======================================================================
// Ogre::Camera::setViewport(float,float,float,float,float,float)
// address: 0x00196904   size: 0x28 (40 bytes)
//======================================================================
float *__fastcall Ogre::Camera::setViewport(
        Ogre::Camera *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  float *v7; // r3
  float *result; // r0

  *((float *)this + 54) = a2;
  *((float *)this + 55) = a3;
  *((float *)this + 56) = a4;
  v7 = (float *)((char *)this + 228);
  *((float *)this + 57) = a5;
  result = (float *)((char *)this + 236);
  v7[1] = a6;
  *result = a7;
  return result;
}


//======================================================================
// Ogre::Camera::Camera(void)
// address: 0x0019692C   size: 0xBE (190 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre6CameraC2Ev'
Ogre::Camera *__fastcall Ogre::Camera::Camera(Ogre::Camera *this)
{
  Ogre::CullResult *v2; // r5
  int v4[4]; // [sp+1Ch] [bp-10h] BYREF

  Ogre::MovableObject::MovableObject(this);
  *(_DWORD *)this = &off_4585E8;
  Ogre::Matrix4::Matrix4((Ogre::Camera *)((char *)this + 260));
  Ogre::Matrix4::Matrix4((Ogre::Camera *)((char *)this + 324));
  Ogre::Matrix4::Matrix4((Ogre::Camera *)((char *)this + 388));
  *((_DWORD *)this + 60) = 1114636288;
  *((_DWORD *)this + 62) = 1065353216;
  *((_DWORD *)this + 63) = 1112014848;
  *((_DWORD *)this + 64) = 1203982336;
  v4[1] = 0;
  v4[0] = 0;
  v4[2] = -1000;
  Ogre::MovableObject::setPosition((int *)this, v4);
  *((_DWORD *)this + 9) = 1065353216;
  *((_DWORD *)this + 10) = 1065353216;
  *((_DWORD *)this + 11) = 1065353216;
  Ogre::MovableObject::invalidWorldCache(this);
  Ogre::Quaternion::setEulerAngle((Ogre::Camera *)((char *)this + 20), 0.0, 0.0, 0.0);
  Ogre::MovableObject::invalidWorldCache(this);
  Ogre::Matrix4::identity((Ogre::Camera *)((char *)this + 324));
  *((_DWORD *)this + 152) = 0;
  *((_BYTE *)this + 612) = 0;
  Ogre::Camera::setViewport(this, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0);
  v2 = (Ogre::CullResult *)operator new(0x234u);
  Ogre::CullResult::CullResult(v2);
  *((_DWORD *)this + 53) = v2;
  *(_DWORD *)v2 = this;
  return this;
}


//======================================================================
// Ogre::Camera::newObject(void)
// address: 0x00196A00   size: 0x14 (20 bytes)
//======================================================================
Ogre::Camera *__fastcall Ogre::Camera::newObject(Ogre::Camera *this)
{
  Ogre::Camera *v1; // r4

  v1 = (Ogre::Camera *)operator new(0x268u);
  Ogre::Camera::Camera(v1);
  return v1;
}


//======================================================================
// Ogre::Camera::copyMembers(Ogre::Camera*)
// address: 0x00196A14   size: 0x7A (122 bytes)
//======================================================================
void *__fastcall Ogre::Camera::copyMembers(Ogre::Camera *this, Ogre::Camera *a2)
{
  void *result; // r0

  *((_DWORD *)a2 + 60) = *((_DWORD *)this + 60);
  *((_DWORD *)a2 + 61) = *((_DWORD *)this + 61);
  *((_DWORD *)a2 + 62) = *((_DWORD *)this + 62);
  *((_DWORD *)a2 + 63) = *((_DWORD *)this + 63);
  *((_DWORD *)a2 + 64) = *((_DWORD *)this + 64);
  Ogre::Matrix4::operator=((char *)a2 + 260, (char *)this + 260);
  Ogre::Matrix4::operator=((char *)a2 + 388, (char *)this + 388);
  Ogre::Matrix4::operator=((char *)a2 + 324, (char *)this + 324);
  result = j_memcpy((char *)a2 + 464, (char *)this + 464, 0x90u);
  *((_DWORD *)a2 + 152) = *((_DWORD *)this + 152);
  *((_BYTE *)a2 + 612) = *((_BYTE *)this + 612);
  return result;
}


//======================================================================
// Ogre::Camera::setWorldMorph(Ogre::Matrix4 const&)
// address: 0x00196A8E   size: 0xC (12 bytes)
//======================================================================
void *__fastcall Ogre::Camera::setWorldMorph(Ogre::Camera *this, const Ogre::Matrix4 *a2)
{
  return Ogre::Matrix4::operator=((char *)this + 324, a2);
}


//======================================================================
// Ogre::Camera::setLookDirect(Ogre::WorldPos const&,Ogre::Vector3 const&,Ogre::Vector3 const&)
// address: 0x00196A9A   size: 0x150 (336 bytes)
//======================================================================
int __fastcall Ogre::Camera::setLookDirect(
        Ogre::Camera *this,
        const Ogre::WorldPos *a2,
        const Ogre::Vector3 *a3,
        const Ogre::Vector3 *a4)
{
  float v4; // r1
  float v5; // r3
  float v6; // r1
  float v7; // r3
  float v8; // r2
  float v12; // [sp+24h] [bp-Ch] BYREF
  float v13; // [sp+28h] [bp-8h]
  float v14; // [sp+2Ch] [bp-4h]
  float v15; // [sp+30h] [bp+0h] BYREF
  float v16; // [sp+34h] [bp+4h]
  float v17; // [sp+38h] [bp+8h]
  float v18; // [sp+3Ch] [bp+Ch] BYREF
  float v19; // [sp+40h] [bp+10h]
  float v20; // [sp+44h] [bp+14h]
  int v21[4]; // [sp+48h] [bp+18h] BYREF
  _DWORD v22[17]; // [sp+58h] [bp+28h] BYREF

  v12 = *(float *)a4;
  v4 = *((float *)a4 + 1);
  v5 = *((float *)a4 + 2);
  v13 = v4;
  v14 = v5;
  v6 = *((float *)a3 + 1);
  v7 = *(float *)a3;
  v8 = *((float *)a3 + 2);
  v15 = v7;
  v17 = v8;
  v16 = v6;
  Ogre::Normalize(&v12);
  Ogre::Normalize(&v15);
  v18 = (float)(v13 * v17) - (float)(v14 * v16);
  v19 = (float)(v14 * v15) - (float)(v12 * v17);
  v20 = (float)(v12 * v16) - (float)(v13 * v15);
  Ogre::Normalize(&v18);
  v12 = (float)(v16 * v20) - (float)(v17 * v19);
  v13 = (float)(v17 * v18) - (float)(v15 * v20);
  v14 = (float)(v15 * v19) - (float)(v16 * v18);
  Ogre::Normalize(&v12);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v22);
  Ogre::Matrix4::makeRotateMatrix(v22, &v18, &v12, &v15);
  memset(v21, 0, 12);
  v21[3] = 1065353216;
  Ogre::Quaternion::setMatrix((Ogre::Quaternion *)v21, (const Ogre::Matrix4 *)v22);
  Ogre::MovableObject::setRotation((int *)this, v21);
  return Ogre::MovableObject::setPosition((int *)this, (int *)a2);
}


//======================================================================
// Ogre::Camera::mirror(Ogre::Camera*,Ogre::WorldPlane const&)
// address: 0x00196BEA   size: 0x64 (100 bytes)
//======================================================================
int __fastcall Ogre::Camera::mirror(Ogre::Camera *this, Ogre::Camera *a2, const Ogre::WorldPlane *a3)
{
  int v5; // r3
  int v6; // r4
  float v9[3]; // [sp+8h] [bp-34h] BYREF
  float v10[3]; // [sp+14h] [bp-28h] BYREF
  _BYTE v11[12]; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v12[4]; // [sp+2Ch] [bp-10h] BYREF

  Ogre::Camera::copyMembers(this, a2);
  Ogre::Quaternion::getAxisY(v9, (float *)this + 5);
  Ogre::Quaternion::getAxisY(v10, (float *)this + 5);
  Ogre::WorldPlane::mirrorVector(a3, (Ogre::Vector3 *)v9, (const Ogre::Vector3 *)v9);
  Ogre::WorldPlane::mirrorVector(a3, (Ogre::Vector3 *)v10, (const Ogre::Vector3 *)v10);
  v12[0] = *((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 3);
  v6 = *((_DWORD *)this + 4);
  v12[1] = v5;
  v12[2] = v6;
  Ogre::WorldPlane::mirrorPoint(a3, (Ogre::WorldPos *)v11, (const Ogre::WorldPos *)v12);
  return Ogre::Camera::setLookDirect(
           a2,
           (const Ogre::WorldPos *)v11,
           (const Ogre::Vector3 *)v10,
           (const Ogre::Vector3 *)v9);
}


//======================================================================
// Ogre::Camera::setLookAt(Ogre::WorldPos const&,Ogre::WorldPos const&,Ogre::Vector3 const&)
// address: 0x00196C50   size: 0x6C (108 bytes)
//======================================================================
int __fastcall Ogre::Camera::setLookAt(
        Ogre::Camera *this,
        const Ogre::WorldPos *a2,
        const Ogre::WorldPos *a3,
        const Ogre::Vector3 *a4)
{
  float v5; // r0
  float v6; // r0
  float v7; // r0
  float v9; // [sp+0h] [bp-1Ch]
  float v10; // [sp+4h] [bp-18h]
  float v11[4]; // [sp+Ch] [bp-10h] BYREF

  v5 = (double)(*((_DWORD *)a3 + 1) - *((_DWORD *)a2 + 1)) / 10.0;
  v10 = v5;
  v6 = (double)(*((_DWORD *)a3 + 2) - *((_DWORD *)a2 + 2)) / 10.0;
  v9 = v6;
  v7 = (double)(*(_DWORD *)a3 - *(_DWORD *)a2) / 10.0;
  v11[0] = v7;
  v11[1] = v10;
  v11[2] = v9;
  return Ogre::Camera::setLookDirect(this, a2, (const Ogre::Vector3 *)v11, a4);
}


//======================================================================
// Ogre::Camera::setViewTransform(Ogre::WorldPos const&,Ogre::Quaternion const&)
// address: 0x00196CC8   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::Camera::setViewTransform(int *a1, int *a2, int *a3)
{
  Ogre::MovableObject::setPosition(a1, a2);
  return Ogre::MovableObject::setRotation(a1, a3);
}


//======================================================================
// Ogre::Camera::moveCamera(Ogre::Vector3 const&)
// address: 0x00196CDC   size: 0x4A (74 bytes)
//======================================================================
int __fastcall Ogre::Camera::moveCamera(Ogre::Camera *this, const Ogre::Vector3 *a2)
{
  int v3; // r7
  int v4; // r6
  int v5; // r0
  int v6; // r3
  int v8[4]; // [sp+4h] [bp-10h] BYREF

  v3 = (int)(float)(*((float *)a2 + 1) * 10.0) + *((_DWORD *)this + 3);
  v4 = (int)(float)(*((float *)a2 + 2) * 10.0) + *((_DWORD *)this + 4);
  v5 = (int)(float)(*(float *)a2 * 10.0);
  v6 = *((_DWORD *)this + 2);
  v8[1] = v3;
  v8[0] = v6 + v5;
  v8[2] = v4;
  return Ogre::MovableObject::setPosition((int *)this, v8);
}


//======================================================================
// Ogre::Camera::rotateCameraLR(float)
// address: 0x00196D2C   size: 0x1E (30 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::Camera::rotateCameraLR(Ogre::Camera *this, float a2, float a3, float a4)
{
  float *v4; // r5
  float v6[3]; // [sp+4h] [bp-Ch] BYREF

  v6[1] = a3;
  v6[2] = a4;
  v4 = (float *)((char *)this + 20);
  Ogre::Quaternion::getAxisY(v6, (float *)this + 5);
  Ogre::Quaternion::rotate(v4, v6, a2);
}


//======================================================================
// Ogre::Camera::rotateCameraUD(float)
// address: 0x00196D4A   size: 0x1E (30 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::Camera::rotateCameraUD(Ogre::Camera *this, float a2, float a3, float a4)
{
  float *v4; // r5
  float v6[3]; // [sp+4h] [bp-Ch] BYREF

  v6[1] = a3;
  v6[2] = a4;
  v4 = (float *)((char *)this + 20);
  Ogre::Quaternion::getAxisX(v6, (float *)this + 5);
  Ogre::Quaternion::rotate(v4, v6, a2);
}


//======================================================================
// Ogre::Camera::getViewMatrix(void)
// address: 0x00196D68   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall Ogre::Camera::getViewMatrix(Ogre::Camera *this)
{
  return (char *)this + 388;
}


//======================================================================
// Ogre::Camera::getProjectMatrix(void)
// address: 0x00196D6E   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall Ogre::Camera::getProjectMatrix(Ogre::Camera *this)
{
  return (char *)this + 260;
}


//======================================================================
// Ogre::Camera::getProjectMatrix(float,float)
// address: 0x00196D74   size: 0x7C (124 bytes)
//======================================================================
Ogre::Camera *__fastcall Ogre::Camera::getProjectMatrix(Ogre::Camera *this, float a2, float a3, float a4)
{
  float *v8; // r3
  float v10; // [sp+Ch] [bp-8h]

  Ogre::Matrix4::Matrix4(this);
  if ( a3 == 0.0 )
    a3 = *(float *)(LODWORD(a2) + 252);
  if ( a4 == 0.0 )
    a4 = *(float *)(LODWORD(a2) + 256);
  v10 = *(float *)(LODWORD(a2) + 240);
  v8 = (float *)(LODWORD(a2) + 248);
  if ( v10 == 0.0 )
    Ogre::Matrix4::makeOrthoMatrix(
      this,
      *(float *)(LODWORD(a2) + 244),
      COERCE_UNSIGNED_INT(*(float *)(LODWORD(a2) + 244) / *v8),
      a3,
      a4);
  else
    Ogre::Matrix4::makePerspectiveMatrix(this, v10, *v8, a3, a4);
  return this;
}


//======================================================================
// Ogre::Camera::pointWorldToView(Ogre::Vector3 &,Ogre::WorldPos const&)
// address: 0x00196DF0   size: 0x72 (114 bytes)
//======================================================================
float __fastcall Ogre::Camera::pointWorldToView(Ogre::Camera *this, Ogre::Vector3 *a2, const Ogre::WorldPos *a3)
{
  char *ViewMatrix; // r7
  float v6; // r0
  float v7; // r0
  float v8; // r0
  float v10; // [sp+0h] [bp-1Ch]
  float v11; // [sp+4h] [bp-18h]
  float v12[4]; // [sp+Ch] [bp-10h] BYREF

  ViewMatrix = Ogre::Camera::getViewMatrix(this);
  v6 = (double)(*((_DWORD *)a3 + 1) - dword_4C6B7C) / 10.0;
  v11 = v6;
  v7 = (double)(*((_DWORD *)a3 + 2) - dword_4C6B80) / 10.0;
  v10 = v7;
  v8 = (double)(*(_DWORD *)a3 - Ogre::WorldPos::m_Origin) / 10.0;
  v12[0] = v8;
  v12[1] = v11;
  v12[2] = v10;
  return Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)ViewMatrix, a2, (const Ogre::Vector3 *)v12);
}


//======================================================================
// Ogre::Camera::pointViewToWorld(Ogre::WorldPos &,Ogre::Vector3 const&)
// address: 0x00196E78   size: 0x40 (64 bytes)
//======================================================================
Ogre::Camera *__fastcall Ogre::Camera::pointViewToWorld(
        Ogre::Camera *this,
        Ogre::WorldPos *a2,
        const Ogre::Vector3 *a3,
        float a4)
{
  char *WorldMatrix; // r0
  float v9; // [sp+4h] [bp-Ch] BYREF
  const Ogre::Vector3 *v10; // [sp+8h] [bp-8h]
  float v11; // [sp+Ch] [bp-4h]

  v10 = a3;
  v11 = a4;
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  Ogre::Matrix4::transformCoord((Ogre::Matrix4 *)WorldMatrix, (Ogre::Vector3 *)&v9, a3);
  *(_DWORD *)a2 = (int)(float)(v9 * 10.0);
  *((_DWORD *)a2 + 1) = (int)(float)(*(float *)&v10 * 10.0);
  *((_DWORD *)a2 + 2) = (int)(float)(v11 * 10.0);
  return this;
}


//======================================================================
// Ogre::Camera::pointWorldToViewport(Ogre::Vector3 &,Ogre::WorldPos const&)
// address: 0x00196EBC   size: 0x7A (122 bytes)
//======================================================================
bool __fastcall Ogre::Camera::pointWorldToViewport(Ogre::Camera *this, Ogre::Vector3 *a2, const Ogre::WorldPos *a3)
{
  char *ProjectMatrix; // r0
  _BOOL4 v6; // r5
  float v7; // r4

  Ogre::Camera::pointWorldToView(this, a2, a3);
  ProjectMatrix = Ogre::Camera::getProjectMatrix(this);
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)ProjectMatrix, a2, a2);
  v6 = *((float *)a2 + 2) < 0.0;
  if ( *((float *)a2 + 2) < 0.0 )
    return false;
  if ( *((float *)a2 + 2) <= 1.0 && *(float *)a2 >= -1.0 && *(float *)a2 <= 1.0 )
  {
    v7 = *((float *)a2 + 1);
    if ( v7 >= -1.0 )
      return v7 <= 1.0;
  }
  return v6;
}


//======================================================================
// Ogre::Camera::pointWorldToViewport(float &,float &,Ogre::WorldPos const&)
// address: 0x00196F3C   size: 0x1C (28 bytes)
//======================================================================
bool __fastcall Ogre::Camera::pointWorldToViewport(Ogre::Camera *this, float *a2, float *a3, const Ogre::WorldPos *a4)
{
  _BOOL4 result; // r0
  float *v7; // r4
  float *v8; // [sp+4h] [bp-Ch] BYREF
  float *v9; // [sp+8h] [bp-8h]
  const Ogre::WorldPos *v10; // [sp+Ch] [bp-4h]

  v8 = a2;
  v9 = a3;
  v10 = a4;
  result = Ogre::Camera::pointWorldToViewport(this, (Ogre::Vector3 *)&v8, a4);
  v7 = v9;
  *(_DWORD *)a2 = v8;
  *(_DWORD *)a3 = v7;
  return result;
}


//======================================================================
// Ogre::Camera::getViewSizeOnNearPlane(float &,float &)
// address: 0x00196F58   size: 0x6A (106 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::Camera::getViewSizeOnNearPlane(Ogre::Camera *this, float *a2, float *a3)
{
  float *v5; // r5
  float v6; // r0
  float v7; // r0
  float v8; // r0
  unsigned __int64 v10; // [sp+0h] [bp-Ch]

  v10 = __PAIR64__((unsigned int)a3, (unsigned int)this);
  v5 = (float *)((char *)this + 248);
  if ( *((float *)this + 60) == 0.0 )
  {
    v8 = *((float *)this + 61) * 0.5;
    *a2 = v8;
    *a3 = v8 / *v5;
  }
  else
  {
    v6 = j_tan((float)((float)(*((float *)this + 60) * 0.5) * 0.017453));
    v7 = v6 * *((float *)this + 63);
    *(float *)HIDWORD(v10) = v7;
    *a2 = v7 * *v5;
  }
  return v10;
}


//======================================================================
// Ogre::Camera::pointViewportToWorld(Ogre::WorldPos &,float,float)
// address: 0x00196FC8   size: 0x40 (64 bytes)
//======================================================================
Ogre::Camera *__fastcall Ogre::Camera::pointViewportToWorld(Ogre::Camera *this, Ogre::WorldPos *a2, float a3, float a4)
{
  float v7; // r3
  float v10; // [sp+Ch] [bp-18h] BYREF
  float v11; // [sp+10h] [bp-14h] BYREF
  float v12[4]; // [sp+14h] [bp-10h] BYREF

  Ogre::Camera::getViewSizeOnNearPlane(this, &v10, &v11);
  v12[0] = a3 * v10;
  v7 = *((float *)this + 63);
  v12[1] = a4 * v11;
  v12[2] = v7;
  return Ogre::Camera::pointViewToWorld(this, a2, (const Ogre::Vector3 *)v12, v7);
}


//======================================================================
// Ogre::Camera::pointWorldToWindow(float &,float &,Ogre::WorldPos const&,float *)
// address: 0x00197008   size: 0x78 (120 bytes)
//======================================================================
bool __fastcall Ogre::Camera::pointWorldToWindow(
        Ogre::Camera *this,
        float *a2,
        float *a3,
        const Ogre::WorldPos *a4,
        float *a5)
{
  _BOOL4 v7; // r7
  float v8; // r1
  float v11[4]; // [sp+Ch] [bp-10h] BYREF

  v7 = Ogre::Camera::pointWorldToViewport(this, (Ogre::Vector3 *)v11, a4);
  v8 = v11[1];
  *a2 = (float)((float)((float)(v11[0] + 1.0) * 0.5) * *((float *)this + 56)) + *((float *)this + 54);
  *a3 = (float)((float)((float)(1.0 - v8) * 0.5) * *((float *)this + 57)) + *((float *)this + 55);
  if ( a5 != nullptr )
    *a5 = v11[2];
  return v7;
}


//======================================================================
// Ogre::Camera::pointWorldToWindow(Ogre::Vector3 &,Ogre::Vector3 const&)
// address: 0x00197080   size: 0xEA (234 bytes)
//======================================================================
bool __fastcall Ogre::Camera::pointWorldToWindow(Ogre::Camera *this, Ogre::Vector3 *a2, const Ogre::Vector3 *a3)
{
  float *ProjectMatrix; // r0
  float v7; // r0
  float v8; // r0
  float v9; // r4
  _BOOL4 result; // r0
  float *ViewMatrix; // [sp+4h] [bp-48h]
  _BYTE v12[68]; // [sp+8h] [bp-44h] BYREF

  ViewMatrix = (float *)Ogre::Camera::getViewMatrix(this);
  ProjectMatrix = (float *)Ogre::Camera::getProjectMatrix(this);
  Ogre::operator*((Ogre::Matrix4 *)v12, ViewMatrix, ProjectMatrix);
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v12, a2, a3);
  v7 = (float)(*(float *)a2 + 1.0) * 0.5 * *((float *)this + 56) + *((float *)this + 54);
  *(float *)a2 = v7;
  v8 = (float)(1.0 - *((float *)a2 + 1)) * 0.5 * *((float *)this + 57) + *((float *)this + 55);
  v9 = *((float *)a2 + 2);
  *((float *)a2 + 1) = v8;
  result = v9 > 0.0;
  if ( v9 > 0.0 )
    return v9 < 1.0;
  return result;
}


//======================================================================
// Ogre::Camera::pointWindowToWorld(Ogre::WorldPos &,float,float)
// address: 0x00197178   size: 0x68 (104 bytes)
//======================================================================
Ogre::Camera *__fastcall Ogre::Camera::pointWindowToWorld(Ogre::Camera *this, Ogre::WorldPos *a2, float a3, float a4)
{
  return Ogre::Camera::pointViewportToWorld(
           this,
           a2,
           (float)((float)((float)(a3 - *((float *)this + 54)) / *((float *)this + 56))
                 + (float)((float)(a3 - *((float *)this + 54)) / *((float *)this + 56)))
         - 1.0,
           1.0
         - (float)((float)((float)(a4 - *((float *)this + 55)) / *((float *)this + 57))
                 + (float)((float)(a4 - *((float *)this + 55)) / *((float *)this + 57))));
}


//======================================================================
// Ogre::Camera::getViewRayByScreenPt(Ogre::WorldRay *,float,float)
// address: 0x001971E0   size: 0xE0 (224 bytes)
//======================================================================
float __fastcall Ogre::Camera::getViewRayByScreenPt(Ogre::Camera *this, Ogre::WorldRay *a2, float a3, float a4)
{
  Ogre::Vector3 *v6; // r6
  int v7; // r2
  int v8; // r3
  float v9; // r5
  float v10; // r3
  char *v11; // r0
  float result; // r0
  char *WorldMatrix; // r0
  int v14; // r3
  int v15; // r7
  float v17; // [sp+0h] [bp-10h]
  float v19; // [sp+8h] [bp-8h] BYREF
  float v20; // [sp+Ch] [bp-4h] BYREF
  _DWORD v21[3]; // [sp+10h] [bp+0h] BYREF
  float v22[4]; // [sp+1Ch] [bp+Ch] BYREF

  Ogre::Camera::pointWindowToWorld(this, (Ogre::WorldPos *)v21, a3, a4);
  v6 = (Ogre::WorldRay *)((char *)a2 + 12);
  if ( *((float *)this + 60) == 0.0 )
  {
    WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
    Ogre::Matrix4::transformNormal(
      (Ogre::Matrix4 *)WorldMatrix,
      (Ogre::WorldRay *)((char *)a2 + 12),
      (const Ogre::Vector3 *)&dword_4C6E14);
    result = Ogre::Normalize((float *)a2 + 3);
    v14 = v21[0];
    v15 = v21[2];
    *((_DWORD *)a2 + 1) = v21[1];
    *(_DWORD *)a2 = v14;
    *((_DWORD *)a2 + 2) = v15;
  }
  else
  {
    v7 = *((_DWORD *)this + 3);
    v8 = *((_DWORD *)this + 4);
    *(_DWORD *)a2 = *((_DWORD *)this + 2);
    *((_DWORD *)a2 + 1) = v7;
    *((_DWORD *)a2 + 2) = v8;
    v9 = (float)((float)(a3 - *((float *)this + 54)) / *((float *)this + 56))
       + (float)((float)(a3 - *((float *)this + 54)) / *((float *)this + 56));
    v17 = (float)((float)(a4 - *((float *)this + 55)) / *((float *)this + 57))
        + (float)((float)(a4 - *((float *)this + 55)) / *((float *)this + 57));
    Ogre::Camera::getViewSizeOnNearPlane(this, &v19, &v20);
    v22[0] = (float)(v9 - 1.0) * v19;
    v10 = *((float *)this + 63);
    v22[1] = (float)(1.0 - v17) * v20;
    v22[2] = v10;
    v11 = Ogre::MovableObject::getWorldMatrix(this);
    Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v11, v6, (const Ogre::Vector3 *)v22);
    return Ogre::Normalize((float *)v6);
  }
  return result;
}


//======================================================================
// Ogre::Camera::getViewDir(void)
// address: 0x001972C4   size: 0x22 (34 bytes)
//======================================================================
Ogre::Camera *__fastcall Ogre::Camera::getViewDir(Ogre::Camera *this, Ogre::MovableObject *a2)
{
  char *WorldMatrix; // r0

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 1065353216;
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(a2);
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)WorldMatrix, this, this);
  return this;
}


//======================================================================
// Ogre::Camera::canSeePointInWorld(Ogre::WorldPos const&)
// address: 0x001972E6   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall Ogre::Camera::canSeePointInWorld(Ogre::Camera *this, const Ogre::WorldPos *a2, float a3, float a4)
{
  float v5; // [sp+8h] [bp-8h] BYREF
  float v6; // [sp+Ch] [bp-4h] BYREF

  v5 = a3;
  v6 = a4;
  return Ogre::Camera::pointWorldToWindow(this, &v5, &v6, a2, nullptr);
}


//======================================================================
// Ogre::Camera::setUserClipPlane(unsigned int,Ogre::WorldPlane const*,bool)
// address: 0x001972FA   size: 0x2 (2 bytes)
//======================================================================
void Ogre::Camera::setUserClipPlane()
{
  ;
}


//======================================================================
// Ogre::Camera::getCullFrustum(Ogre::CullFrustum &)
// address: 0x001972FC   size: 0x2A (42 bytes)
//======================================================================
float __fastcall Ogre::Camera::getCullFrustum(Ogre::Camera *this, Ogre::CullFrustum *a2)
{
  float *ViewMatrix; // r6
  float *ProjectMatrix; // r0
  _BYTE v7[64]; // [sp+0h] [bp-40h] BYREF

  ViewMatrix = (float *)Ogre::Camera::getViewMatrix(this);
  ProjectMatrix = (float *)Ogre::Camera::getProjectMatrix(this);
  Ogre::operator*((Ogre::Matrix4 *)v7, ViewMatrix, ProjectMatrix);
  return Ogre::CullFrustum::createFromMatrix(a2, (const Ogre::Matrix4 *)v7);
}


//======================================================================
// Ogre::Camera::update(unsigned int)
// address: 0x00197328   size: 0x1C0 (448 bytes)
//======================================================================
float __fastcall Ogre::Camera::update(Ogre::Camera *this, unsigned int a2)
{
  char *WorldMatrix; // r0
  float *v4; // r4
  float *v5; // r3
  float result; // r0
  float v7; // r1
  float v8; // r2
  float v9; // r0
  float v10; // r6
  float v11; // r5
  float v12; // r0
  Ogre::Matrix4 *ViewMatrix; // [sp+Ch] [bp-70h]
  Ogre::Matrix4 *v14; // [sp+Ch] [bp-70h]
  float v15; // [sp+10h] [bp-6Ch]
  float v16; // [sp+14h] [bp-68h]
  float v17[4]; // [sp+18h] [bp-64h] BYREF
  float v18; // [sp+28h] [bp-54h] BYREF
  float v19; // [sp+2Ch] [bp-50h]
  float v20; // [sp+30h] [bp-4Ch]
  float v21; // [sp+34h] [bp-48h]
  float v22[17]; // [sp+38h] [bp-44h] BYREF

  Ogre::MovableObject::update((int)this, a2);
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  Ogre::Matrix4::operator=((char *)this + 388, WorldMatrix);
  Ogre::Matrix4::inverse((Ogre::Camera *)((char *)this + 388));
  Ogre::operator*((Ogre::Matrix4 *)v22, (float *)this + 81, (float *)this + 97);
  Ogre::Matrix4::operator=((char *)this + 388, v22);
  v4 = (float *)((char *)this + 260);
  v5 = (float *)((char *)this + 248);
  if ( *((float *)this + 60) == 0.0 )
    LODWORD(result) = Ogre::Matrix4::makeOrthoMatrix(
                        (Ogre::Camera *)((char *)this + 260),
                        *((float *)this + 61) * *v5,
                        *((_DWORD *)this + 61),
                        *((float *)this + 63),
                        *((float *)this + 64));
  else
    LODWORD(result) = Ogre::Matrix4::makePerspectiveMatrix(
                        (Ogre::Camera *)((char *)this + 260),
                        *((float *)this + 60),
                        *v5,
                        *((float *)this + 63),
                        *((float *)this + 64));
  if ( *((_BYTE *)this + 612) != 0 )
  {
    v7 = *((float *)this + 3);
    v8 = *((float *)this + 4);
    v22[0] = *((float *)this + 2);
    v22[1] = v7;
    v22[2] = v8;
    Ogre::WorldPlane::relativePlane(
      (Ogre::Camera *)((char *)this + 464),
      (Ogre::Plane *)v17,
      (const Ogre::WorldPos *)v22);
    ViewMatrix = (Ogre::Matrix4 *)Ogre::Camera::getViewMatrix(this);
    Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v22);
    Ogre::Matrix4::inverse(ViewMatrix, (Ogre::Matrix4 *)v22);
    Ogre::Matrix4::transpose(v22);
    Ogre::Matrix4::transformVec4(v22, &v18, v17);
    if ( v18 < 0.0 )
    {
      v9 = -1.0;
    }
    else if ( v18 <= 0.0 )
    {
      v9 = 0.0;
    }
    else
    {
      v9 = 1.0;
    }
    v10 = v19;
    v16 = v9 / *((float *)this + 65);
    if ( v19 < 0.0 )
    {
      v11 = -1.0;
    }
    else if ( v19 <= 0.0 )
    {
      v11 = 0.0;
    }
    else
    {
      v11 = 1.0;
    }
    v15 = v20;
    *(float *)&v14 = v21;
    v12 = 1.0
        / (float)((float)((float)((float)(v18 * v16) + (float)(v19 * (float)(v11 / v4[5]))) + v20)
                + (float)(v21 * (float)((float)(1.0 - v4[10]) / v4[14])));
    v4[2] = v18 * v12;
    v4[6] = v10 * v12;
    v4[10] = v15 * v12;
    result = *(float *)&v14 * v12;
    v4[14] = result;
  }
  return result;
}

