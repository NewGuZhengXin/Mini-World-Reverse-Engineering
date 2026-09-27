// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BoneInstance

//======================================================================
// Ogre::BoneInstance::BoneInstance(void)
// address: 0x001550CC   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12BoneInstanceC1Ev'
Ogre::BoneInstance *__fastcall Ogre::BoneInstance::BoneInstance(Ogre::BoneInstance *this)
{
  Ogre::Matrix4 *v1; // r5

  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  v1 = (Ogre::BoneInstance *)((char *)this + 56);
  *((_DWORD *)this + 8) = 1065353216;
  Ogre::Matrix4::Matrix4((Ogre::BoneInstance *)((char *)this + 56));
  Ogre::Matrix4::identity(v1);
  return this;
}


//======================================================================
// Ogre::BoneInstance::resetCache(void)
// address: 0x001550F2   size: 0x12 (18 bytes)
//======================================================================
_BYTE *__fastcall Ogre::BoneInstance::resetCache(Ogre::BoneInstance *this)
{
  _BYTE *result; // r0

  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = -1;
  result = (char *)this + 120;
  *result = 0;
  return result;
}


//======================================================================
// Ogre::BoneInstance::addBlendXform(float,Ogre::Vector3 const&,Ogre::Quaternion const&,Ogre::Vector3 const&)
// address: 0x00155104   size: 0x12A (298 bytes)
//======================================================================
float __fastcall Ogre::BoneInstance::addBlendXform(
        Ogre::BoneInstance *this,
        float a2,
        const Ogre::Vector3 *a3,
        const Ogre::Quaternion *a4,
        const Ogre::Vector3 *a5)
{
  float v5; // r6
  float result; // r0
  float v8; // r0
  float v9; // r6
  float v10; // r5
  float v11; // r6
  float v12; // r0
  float v13; // [sp+8h] [bp-14h]

  v5 = *((float *)this + 12);
  LODWORD(result) = v5 == 0.0;
  if ( v5 == 0.0 )
  {
    *((_DWORD *)this + 2) = *(_DWORD *)a3;
    *((_DWORD *)this + 3) = *((_DWORD *)a3 + 1);
    *((_DWORD *)this + 4) = *((_DWORD *)a3 + 2);
    *((_DWORD *)this + 5) = *(_DWORD *)a4;
    *((_DWORD *)this + 6) = *((_DWORD *)a4 + 1);
    *((_DWORD *)this + 7) = *((_DWORD *)a4 + 2);
    *((_DWORD *)this + 8) = *((_DWORD *)a4 + 3);
    *((_DWORD *)this + 9) = *(_DWORD *)a5;
    *((_DWORD *)this + 10) = *((_DWORD *)a5 + 1);
    *((_DWORD *)this + 11) = *((_DWORD *)a5 + 2);
    *((float *)this + 12) = a2;
  }
  else
  {
    v13 = a2 / (float)(v5 + a2);
    v8 = *((float *)this + 3) + (float)((float)(*((float *)a3 + 1) - *((float *)this + 3)) * v13);
    v9 = *((float *)this + 4) + (float)((float)(*((float *)a3 + 2) - *((float *)this + 4)) * v13);
    *((float *)this + 2) = *((float *)this + 2) + (float)((float)(*(float *)a3 - *((float *)this + 2)) * v13);
    *((float *)this + 3) = v8;
    *((float *)this + 4) = v9;
    Ogre::Quaternion::slerp(
      (Ogre::BoneInstance *)((char *)this + 20),
      (Ogre::BoneInstance *)((char *)this + 20),
      a4,
      v13);
    v10 = *((float *)this + 9);
    v11 = *((float *)this + 11) + (float)((float)(*((float *)a5 + 2) - *((float *)this + 11)) * v13);
    v12 = (float)(*(float *)a5 - v10) * v13;
    *((float *)this + 10) = *((float *)this + 10) + (float)((float)(*((float *)a5 + 1) - *((float *)this + 10)) * v13);
    *((float *)this + 9) = v10 + v12;
    *((float *)this + 11) = v11;
    result = *((float *)this + 12) + a2;
    *((float *)this + 12) = result;
  }
  return result;
}


//======================================================================
// Ogre::BoneInstance::calculateXform(void)
// address: 0x0015522E   size: 0x58 (88 bytes)
//======================================================================
Ogre::BoneInstance *__fastcall Ogre::BoneInstance::calculateXform(Ogre::BoneInstance *this)
{
  Ogre::BoneInstance *result; // r0

  if ( *((float *)this + 12) == 0.0 )
    Ogre::Matrix4::operator=((char *)this + 56, *(_DWORD *)this + 32);
  else
    Ogre::Matrix4::makeSRTMatrix(
      (Ogre::BoneInstance *)((char *)this + 56),
      (Ogre::BoneInstance *)((char *)this + 36),
      (Ogre::BoneInstance *)((char *)this + 20),
      (Ogre::BoneInstance *)((char *)this + 8));
  result = *((Ogre::BoneInstance **)this + 1);
  if ( result != nullptr )
  {
    if ( *((_BYTE *)result + 120) == 0 )
      Ogre::BoneInstance::calculateXform(result);
    result = (Ogre::BoneInstance *)Ogre::Matrix4::operator*=((char *)this + 56, *((_DWORD *)this + 1) + 56);
  }
  *((_BYTE *)this + 120) = 1;
  return result;
}


//======================================================================
// Ogre::BoneInstance::getParentID(void)
// address: 0x00155286   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::BoneInstance::getParentID(Ogre::BoneInstance *this)
{
  return *(_DWORD *)(*(_DWORD *)this + 28);
}


//======================================================================
// Ogre::BoneInstance::BoneInstance(Ogre::BoneInstance const&)
// address: 0x0015528C   size: 0x58 (88 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12BoneInstanceC1ERKS0_'
Ogre::BoneInstance *__fastcall Ogre::BoneInstance::BoneInstance(Ogre::BoneInstance *this, const Ogre::BoneInstance *a2)
{
  char *v4; // r2
  _DWORD *v5; // r3
  int v6; // r0
  int v7; // r1
  int v8; // r6

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v4 = (char *)a2 + 20;
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  v5 = (_DWORD *)((char *)this + 20);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  v6 = *((_DWORD *)a2 + 5);
  v7 = *((_DWORD *)a2 + 6);
  v8 = *((_DWORD *)v4 + 2);
  *v5 = v6;
  v5[1] = v7;
  v5[2] = v8;
  v5[3] = *((_DWORD *)v4 + 3);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  Ogre::Matrix4::Matrix4((Ogre::BoneInstance *)((char *)this + 56), (const Ogre::BoneInstance *)((char *)a2 + 56));
  *((_BYTE *)this + 120) = *((_BYTE *)a2 + 120);
  return this;
}


//======================================================================
// Ogre::BoneInstance::operator=(Ogre::BoneInstance const&)
// address: 0x00155628   size: 0x54 (84 bytes)
//======================================================================
int __fastcall Ogre::BoneInstance::operator=(int a1, _DWORD *a2)
{
  _BYTE *v3; // r5

  *(_DWORD *)a1 = *a2;
  v3 = a2 + 30;
  *(_DWORD *)(a1 + 4) = a2[1];
  *(_DWORD *)(a1 + 8) = a2[2];
  *(_DWORD *)(a1 + 12) = a2[3];
  *(_DWORD *)(a1 + 16) = a2[4];
  *(_DWORD *)(a1 + 20) = a2[5];
  *(_DWORD *)(a1 + 24) = a2[6];
  *(_DWORD *)(a1 + 28) = a2[7];
  *(_DWORD *)(a1 + 32) = a2[8];
  *(_DWORD *)(a1 + 36) = a2[9];
  *(_DWORD *)(a1 + 40) = a2[10];
  *(_DWORD *)(a1 + 44) = a2[11];
  *(_DWORD *)(a1 + 48) = a2[12];
  *(_DWORD *)(a1 + 52) = a2[13];
  Ogre::Matrix4::operator=(a1 + 56, a2 + 14);
  *(_BYTE *)(a1 + 120) = *v3;
  return a1;
}

