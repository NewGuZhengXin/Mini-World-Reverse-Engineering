// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GameCamera

//======================================================================
// GameCamera::GameCamera(void)
// address: 0x0029F420   size: 0x74 (116 bytes)
//======================================================================
// Alternative name is '_ZN10GameCameraC1Ev'
void __fastcall GameCamera::GameCamera(GameCamera *this)
{
  char *v2; // r0
  Ogre::Camera *v3; // r5
  _DWORD *v4; // r3

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 1065353216;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 800;
  *((_DWORD *)this + 11) = 600;
  *((_DWORD *)this + 12) = 1116340224;
  v2 = (char *)this + 96;
  *v2 = 0;
  v2[1] = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 1065353216;
  *((_DWORD *)this + 27) = 1065353216;
  v3 = (Ogre::Camera *)operator new(0x268u);
  Ogre::Camera::Camera(v3);
  *((_DWORD *)this + 1) = v3;
  Ogre::Camera::setRatio(v3, (float)*((int *)this + 10) / (float)*((int *)this + 11));
  v4 = (_DWORD *)(*((_DWORD *)this + 1) + 252);
  *v4 = 1084227584;
  v4[1] = 1189765120;
}


//======================================================================
// GameCamera::~GameCamera()
// address: 0x0029F4AC   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN10GameCameraD1Ev'
void __fastcall GameCamera::~GameCamera(GameCamera *this)
{
  _DWORD *v2; // r0
  int v3; // r2

  v2 = *((_DWORD **)this + 1);
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *((_DWORD *)this + 1) = 0;
  }
}


//======================================================================
// GameCamera::setMode(int)
// address: 0x0029F4CE   size: 0x4 (4 bytes)
//======================================================================
_DWORD *__fastcall GameCamera::setMode(_DWORD *this, int a2)
{
  *this = a2;
  return this;
}


//======================================================================
// GameCamera::setScreenSize(int,int)
// address: 0x0029F4D2   size: 0x2A (42 bytes)
//======================================================================
float *__fastcall GameCamera::setScreenSize(GameCamera *this, int a2, int a3)
{
  Ogre::Camera *v3; // r5

  *((_DWORD *)this + 11) = a3;
  v3 = *((Ogre::Camera **)this + 1);
  *((_DWORD *)this + 10) = a2;
  return Ogre::Camera::setRatio(v3, (float)a2 / (float)a3);
}


//======================================================================
// GameCamera::getRotation(void)
// address: 0x0029F4FC   size: 0x20 (32 bytes)
//======================================================================
GameCamera *__fastcall GameCamera::getRotation(GameCamera *this, int a2)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 1065353216;
  Ogre::Quaternion::setEulerAngle(this, *(float *)(a2 + 32), *(float *)(a2 + 36), 0.0);
  return this;
}


//======================================================================
// GameCamera::getEyePos(void)
// address: 0x0029F51C   size: 0x28 (40 bytes)
//======================================================================
int *__fastcall GameCamera::getEyePos(int *this, int a2)
{
  _DWORD *v2; // r5

  v2 = *(_DWORD **)(a2 + 4);
  *this = v2[2] / 10;
  *(this + 1) = v2[3] / 10;
  *(this + 2) = v2[4] / 10;
  return this;
}


//======================================================================
// GameCamera::updateBobbing(float)
// address: 0x0029F574   size: 0x6E (110 bytes)
//======================================================================
float __fastcall GameCamera::updateBobbing(GameCamera *this, float a2)
{
  float v3; // r5
  float result; // r0
  int v5; // r1
  int v6; // r5
  int v7; // r1

  v3 = a2 + *((float *)this + 23);
  LODWORD(result) = v3 >= 0.5;
  if ( v3 >= 0.5 )
  {
    *((_DWORD *)this + 23) = 0;
    v5 = *((_DWORD *)this + 19);
    v6 = *((_DWORD *)this + 20);
    *((_DWORD *)this + 13) = *((_DWORD *)this + 18);
    *((_DWORD *)this + 14) = v5;
    *((_DWORD *)this + 15) = v6;
    v7 = *((_DWORD *)this + 22);
    *((_DWORD *)this + 16) = *((_DWORD *)this + 21);
    *((_DWORD *)this + 17) = v7;
    *((float *)this + 19) = RandFlt(-2.0, 2.0);
    *((float *)this + 18) = RandFlt(-2.0, 2.0);
    *((float *)this + 20) = RandFlt(-3.0, 3.0);
    *((float *)this + 21) = RandFlt(-3.0, 3.0);
    result = RandFlt(-3.0, 3.0);
    *((float *)this + 22) = result;
  }
  else
  {
    *((float *)this + 23) = v3;
  }
  return result;
}


//======================================================================
// GameCamera::setBobbing(bool)
// address: 0x0029F5EC   size: 0x2E (46 bytes)
//======================================================================
_BYTE *__fastcall GameCamera::setBobbing(_BYTE *this, int a2)
{
  _BYTE *v2; // r4

  v2 = this;
  if ( (unsigned __int8)*(this + 96) != a2 )
  {
    *(this + 96) = a2;
    if ( a2 != 0 )
    {
      *((_DWORD *)this + 23) = 0;
      GameCamera::updateBobbing((GameCamera *)this, 0.5);
      return j_memset(v2 + 52, 0, 0x14u);
    }
  }
  return this;
}


//======================================================================
// GameCamera::getBobbingFrameData(CameraBobbing &)
// address: 0x0029F61A   size: 0x94 (148 bytes)
//======================================================================
float __fastcall GameCamera::getBobbingFrameData(float *a1, float *a2)
{
  float v3; // r0
  float result; // r0

  v3 = a1[23] + a1[23];
  a2[1] = a1[14] + (float)((float)(a1[19] - a1[14]) * v3);
  *a2 = a1[13] + (float)((float)(a1[18] - a1[13]) * v3);
  a2[2] = a1[15] + (float)((float)(a1[20] - a1[15]) * v3);
  a2[3] = a1[16] + (float)((float)(a1[21] - a1[16]) * v3);
  result = a1[17] + (float)((float)(a1[22] - a1[17]) * v3);
  a2[4] = result;
  return result;
}


//======================================================================
// GameCamera::applyToEngine(void)
// address: 0x0029F6B0   size: 0x228 (552 bytes)
//======================================================================
float __fastcall GameCamera::applyToEngine(GameCamera *this)
{
  float v2; // r0
  float result; // r0
  float v4; // r3
  _DWORD *v5; // r5
  int v6; // r2
  float v7; // r7
  float v8; // r0
  int v9; // r2
  float v10; // r5
  float v11; // r0
  float v12; // r6
  float v13; // r7
  int v14; // r0
  Ogre::Camera *v15; // r0
  int v16; // [sp+4h] [bp-58h]
  float v17; // [sp+4h] [bp-58h]
  int v18; // [sp+8h] [bp-54h]
  int v19; // [sp+8h] [bp-54h]
  int v20; // [sp+Ch] [bp-50h]
  _DWORD v21[3]; // [sp+10h] [bp-4Ch] BYREF
  _DWORD v22[3]; // [sp+1Ch] [bp-40h] BYREF
  float v23[3]; // [sp+28h] [bp-34h] BYREF
  float v24[4]; // [sp+34h] [bp-28h] BYREF
  float v25[6]; // [sp+44h] [bp-18h] BYREF

  if ( *((_BYTE *)this + 96) != 0 )
    GameCamera::getBobbingFrameData((float *)this, v25);
  else
    j_memset(v25, *((unsigned __int8 *)this + 96), 0x14u);
  *(float *)(*((_DWORD *)this + 1) + 240) = *((float *)this + 12)
                                          - (float)((float)((float)((float)(*((float *)this + 25) * *((float *)this + 25))
                                                                  + (float)(*((float *)this + 25) + *((float *)this + 25)))
                                                          / 3.0)
                                                  * 15.0);
  v24[3] = 1.0;
  v2 = *((float *)this + 8);
  memset(v24, 0, 12);
  Ogre::Quaternion::setEulerAngle((Ogre::Quaternion *)v24, v2 + v25[0], *((float *)this + 9) + v25[1], 0.0);
  v23[2] = 1.0;
  v23[0] = 0.0;
  v23[1] = 0.0;
  result = Ogre::Quaternion::rotate(v24, (float *)this + 2, v23);
  v4 = *(float *)this;
  if ( *(_DWORD *)this == 0 )
  {
    v5 = *((_DWORD **)this + 1);
    v16 = (int)(float)(v25[3] * 10.0) + *((_DWORD *)this + 6);
    v6 = (int)(float)(v25[4] * 10.0) + *((_DWORD *)this + 7);
    v5[2] = *((_DWORD *)this + 5) + (int)(float)(v25[2] * 10.0);
    v5[3] = v16;
    v5[4] = v6;
LABEL_10:
    (*(void (__fastcall **)(_DWORD *))(*v5 + 64))(v5);
    return COERCE_FLOAT(Ogre::MovableObject::setRotation(*((int **)this + 1), (int *)v24));
  }
  if ( LODWORD(v4) == 1 )
  {
    v7 = *((float *)this + 9) / -80.0;
    if ( v7 < 0.0 )
      v7 = 0.0;
    v8 = 600.0 - (float)(v7 * 450.0);
    v5 = *((_DWORD **)this + 1);
    v18 = *((_DWORD *)this + 7) - (int)(float)((float)(v8 * *((float *)this + 4)) * 10.0);
    v9 = *((_DWORD *)this + 6) - (int)(float)((float)(v8 * *((float *)this + 3)) * 10.0);
    v5[2] = *((_DWORD *)this + 5) - (int)(float)((float)(v8 * *((float *)this + 2)) * 10.0);
    v5[3] = v9;
    v5[4] = v18;
    goto LABEL_10;
  }
  if ( LODWORD(v4) == 2 )
  {
    v10 = *((float *)this + 9) / 80.0;
    if ( v10 < 0.0 )
      v10 = 0.0;
    v11 = 600.0 - (float)(v10 * 450.0);
    v17 = *((float *)this + 3);
    v12 = *((float *)this + 4);
    v19 = (int)(float)((float)(v17 * v11) * 10.0) + *((_DWORD *)this + 6);
    v13 = *((float *)this + 2);
    v20 = (int)(float)((float)(v12 * v11) * 10.0) + *((_DWORD *)this + 7);
    v14 = *((_DWORD *)this + 5) + (int)(float)((float)(v13 * v11) * 10.0);
    v21[1] = v19;
    v21[0] = v14;
    v15 = *((Ogre::Camera **)this + 1);
    v21[2] = v20;
    v22[1] = LODWORD(v17) + 0x80000000;
    v22[2] = LODWORD(v12) + 0x80000000;
    v23[0] = 0.0;
    v23[1] = 1.0;
    v22[0] = LODWORD(v13) + 0x80000000;
    v23[2] = 0.0;
    return COERCE_FLOAT(
             Ogre::Camera::setLookDirect(
               v15,
               (const Ogre::WorldPos *)v21,
               (const Ogre::Vector3 *)v22,
               (const Ogre::Vector3 *)v23));
  }
  return result;
}


//======================================================================
// GameCamera::update(float)
// address: 0x0029F8F4   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall GameCamera::update(GameCamera *this, float a2)
{
  int v4; // r1
  int v5; // r2
  int v6; // r6
  float v7; // r7
  _BOOL4 v8; // r0

  v4 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88);
  v5 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92);
  if ( *((_DWORD *)this + 10) != v4 || *((_DWORD *)this + 11) != v5 )
    GameCamera::setScreenSize(this, v4, v5);
  if ( *((_BYTE *)this + 96) != 0 )
    GameCamera::updateBobbing(this, a2);
  if ( *((_BYTE *)this + 97) != 0 )
  {
    v6 = 1065353216;
    v7 = (float)(a2 / *((float *)this + 26)) + *((float *)this + 25);
    v8 = v7 > 1.0;
  }
  else
  {
    v6 = 0;
    v7 = *((float *)this + 25) - (float)(a2 / *((float *)this + 27));
    v8 = v7 < 0.0;
  }
  if ( v8 )
    *((_DWORD *)this + 25) = v6;
  else
    *((float *)this + 25) = v7;
  GameCamera::applyToEngine(this);
  return (*(int (__fastcall **)(_DWORD, unsigned int))(**((_DWORD **)this + 1) + 40))(
           *((_DWORD *)this + 1),
           (unsigned int)(float)(a2 * 1000.0));
}


//======================================================================
// GameCamera::setPosition(Ogre::WorldPos const&)
// address: 0x0029F99C   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall GameCamera::setPosition(_DWORD *result, _DWORD *a2)
{
  result[5] = *a2;
  result[6] = a2[1];
  result[7] = a2[2];
  return result;
}


//======================================================================
// GameCamera::moveForward(float)
// address: 0x0029F9AA   size: 0x44 (68 bytes)
//======================================================================
__int64 __fastcall GameCamera::moveForward(__int64 this, float a2, float a3)
{
  float v3; // r6
  int v4; // r5
  __int64 v6; // [sp+0h] [bp-10h] BYREF
  float v7; // [sp+8h] [bp-8h]
  float v8; // [sp+Ch] [bp-4h]

  v6 = this;
  v7 = a2;
  v8 = a3;
  v3 = *((float *)&this + 1);
  HIDWORD(v6) = *(_DWORD *)(this + 8);
  v4 = this;
  v8 = *(float *)(this + 16);
  v7 = 0.0;
  Ogre::Normalize((float *)&v6 + 1);
  *((float *)&v6 + 1) = *((float *)&v6 + 1) * v3;
  v7 = v7 * v3;
  v8 = v8 * v3;
  Ogre::WorldPos::operator+=((_DWORD *)(v4 + 20), (float *)&v6 + 1);
  return v6;
}


//======================================================================
// GameCamera::moveSide(float)
// address: 0x0029F9EE   size: 0x80 (128 bytes)
//======================================================================
_DWORD *__fastcall GameCamera::moveSide(GameCamera *this, float a2)
{
  float v5; // [sp+10h] [bp+0h] BYREF
  float v6; // [sp+14h] [bp+4h]
  float v7; // [sp+18h] [bp+8h]
  float v8[4]; // [sp+1Ch] [bp+Ch] BYREF

  v5 = *((float *)this + 2);
  v7 = *((float *)this + 4);
  v6 = 0.0;
  Ogre::Normalize(&v5);
  v8[0] = (float)(v7 - (float)(v6 * 0.0)) * a2;
  v8[1] = (float)((float)(v5 * 0.0) - (float)(v7 * 0.0)) * a2;
  v8[2] = (float)((float)(v6 * 0.0) - v5) * a2;
  return Ogre::WorldPos::operator+=((_DWORD *)this + 5, v8);
}


//======================================================================
// GameCamera::moveUp(float)
// address: 0x0029FA6E   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall GameCamera::moveUp(GameCamera *this, float a2)
{
  float v3[3]; // [sp+4h] [bp-Ch] BYREF

  v3[1] = a2;
  v3[0] = 0.0;
  v3[2] = 0.0;
  return Ogre::WorldPos::operator+=((_DWORD *)this + 5, v3);
}


//======================================================================
// GameCamera::rotate(float,float)
// address: 0x0029FA88   size: 0x7A (122 bytes)
//======================================================================
bool __fastcall GameCamera::rotate(GameCamera *this, float a2, float a3)
{
  float v4; // r5
  _BOOL4 result; // r0

  v4 = (float)(a2 * 180.0) + *((float *)this + 8);
  if ( v4 > 360.0 )
    *((float *)this + 8) = v4 - 360.0;
  else
    *((float *)this + 8) = v4;
  if ( *((float *)this + 8) < 0.0 )
    *((float *)this + 8) = *((float *)this + 8) + 360.0;
  if ( (float)((float)(a3 * 90.0) + *((float *)this + 9)) < -89.0 )
    *((_DWORD *)this + 9) = -1028521984;
  else
    *((float *)this + 9) = (float)(a3 * 90.0) + *((float *)this + 9);
  result = *((float *)this + 9) > 89.0;
  if ( *((float *)this + 9) > 89.0 )
    *((_DWORD *)this + 9) = 1118961664;
  return result;
}


//======================================================================
// GameCamera::rotateOnScreen(int,int)
// address: 0x0029FB18   size: 0x40 (64 bytes)
//======================================================================
bool __fastcall GameCamera::rotateOnScreen(GameCamera *this, int a2, int a3)
{
  return GameCamera::rotate(this, (float)a2 / (float)*((int *)this + 10), (float)a3 / (float)*((int *)this + 11));
}

