// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SkeletonInstance

//======================================================================
// Ogre::SkeletonInstance::~SkeletonInstance()
// address: 0x001552E4   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16SkeletonInstanceD1Ev'
void __fastcall Ogre::SkeletonInstance::~SkeletonInstance(Ogre::SkeletonInstance *this)
{
  _DWORD *v2; // r0
  int v3; // r2
  void *v4; // r0

  v2 = *(_DWORD **)this;
  if ( v2 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 24))(v2);
    *(_DWORD *)this = 0;
  }
  v4 = *((void **)this + 1);
  if ( v4 != nullptr )
    operator delete(v4);
}


//======================================================================
// Ogre::SkeletonInstance::getBoneName(int)
// address: 0x00155310   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::SkeletonInstance::getBoneName(Ogre::SkeletonInstance *this, int a2)
{
  return *(_DWORD *)(124 * a2 + *((_DWORD *)this + 1)) + 16;
}


//======================================================================
// Ogre::SkeletonInstance::findBoneID(Ogre::FixedString const&)
// address: 0x0015531C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::SkeletonInstance::findBoneID(int a1, _DWORD *a2)
{
  int v2; // r3
  int v3; // r2
  int result; // r0

  v2 = *(_DWORD *)(a1 + 4);
  v3 = -1108378657 * ((*(_DWORD *)(a1 + 8) - v2) >> 2);
  for ( result = 0; result != v3; ++result )
  {
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 124 * result) + 16) == *a2 )
      return result;
  }
  return -1;
}


//======================================================================
// Ogre::SkeletonInstance::getBoneRotation(int)
// address: 0x00155350   size: 0x46 (70 bytes)
//======================================================================
Ogre::SkeletonInstance *__fastcall Ogre::SkeletonInstance::getBoneRotation(
        Ogre::SkeletonInstance *this,
        int a2,
        int a3,
        int a4)
{
  int v4; // r5
  int v6; // r5
  int v7; // r6
  Ogre::SkeletonInstance *v9; // [sp+0h] [bp-10h] BYREF
  int v10; // [sp+4h] [bp-Ch]
  int v11; // [sp+8h] [bp-8h]
  int v12; // [sp+Ch] [bp-4h]

  v9 = this;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  v4 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v6 = v4 + 124 * a3;
  *((_DWORD *)this + 3) = 1065353216;
  while ( v6 != 0 )
  {
    Ogre::operator*((float *)&v9, (float *)this, (float *)(v6 + 20));
    *(_DWORD *)this = v9;
    *((_DWORD *)this + 1) = v10;
    v7 = v12;
    *((_DWORD *)this + 2) = v11;
    *((_DWORD *)this + 3) = v7;
    v6 = *(_DWORD *)(v6 + 4);
  }
  return this;
}


//======================================================================
// Ogre::SkeletonInstance::setBoneRotate(int,Ogre::Quaternion const*)
// address: 0x00155396   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall Ogre::SkeletonInstance::setBoneRotate(_DWORD *result, int a2, _DWORD *a3)
{
  result[4] = a2;
  if ( a3 != nullptr )
  {
    result[5] = *a3;
    result[6] = a3[1];
    result[7] = a3[2];
    result[8] = a3[3];
  }
  return result;
}


//======================================================================
// Ogre::SkeletonInstance::applyAnimation(Ogre::AnimPlayTrack **,unsigned int)
// address: 0x001553B0   size: 0x25A (602 bytes)
//======================================================================
float __fastcall Ogre::SkeletonInstance::applyAnimation(float this, Ogre::AnimPlayTrack **a2, unsigned int a3)
{
  int v3; // r7
  unsigned int i; // r4
  int v5; // r2
  int j; // r5
  Ogre::AnimPlayTrack *v7; // r4
  Ogre::AnimationData *v8; // r6
  signed int v9; // r3
  int v10; // r2
  Ogre::BoneInstance *v11; // r5
  unsigned int v12; // r5
  signed int v13; // r3
  int v14; // r2
  float v15; // r5
  int v16; // r3
  float *v17; // r4
  int ParentID; // r0
  int v19; // r3
  unsigned int k; // r4
  int v21; // r3
  int v22; // [sp+14h] [bp-90h]
  unsigned int v23; // [sp+18h] [bp-8Ch]
  unsigned int v24; // [sp+18h] [bp-8Ch]
  Ogre::BoneInstance *v25; // [sp+1Ch] [bp-88h]
  int v26; // [sp+28h] [bp-7Ch]
  float v27; // [sp+28h] [bp-7Ch]
  char v28; // [sp+2Ch] [bp-78h]
  _BYTE v31[12]; // [sp+38h] [bp-6Ch] BYREF
  _BYTE v32[12]; // [sp+44h] [bp-60h] BYREF
  _DWORD v33[4]; // [sp+50h] [bp-54h] BYREF
  float v34[4]; // [sp+60h] [bp-44h] BYREF
  float v35[4]; // [sp+70h] [bp-34h] BYREF
  float v36[4]; // [sp+80h] [bp-24h] BYREF
  float v37[5]; // [sp+90h] [bp-14h] BYREF

  memset(v33, 0, 12);
  v3 = LODWORD(this);
  v33[3] = 1065353216;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v3 + 4);
    if ( i >= -1108378657 * ((*(_DWORD *)(v3 + 8) - v5) >> 2) )
      break;
    this = COERCE_FLOAT(Ogre::BoneInstance::resetCache((Ogre::BoneInstance *)(v5 + 124 * i)));
  }
  for ( j = 0; ; j = v22 + 1 )
  {
    v22 = j;
    if ( j == a3 )
      break;
    v7 = a2[j];
    v28 = *((_DWORD *)v7 + 9) == 0;
    this = COERCE_FLOAT((*(int (__fastcall **)(_DWORD))(**((_DWORD **)v7 + 1) + 28))(*((_DWORD *)v7 + 1)));
    v8 = *((Ogre::AnimationData **)v7 + 1);
    if ( this == 0.0 )
    {
      v23 = 0;
      v26 = (*((_DWORD *)v8 + 11) - *((_DWORD *)v8 + 10)) >> 2;
      while ( v23 != v26 )
      {
        this = *(float *)(4 * v23 + *((_DWORD *)v8 + 10));
        v9 = *(_DWORD *)(LODWORD(this) + 20);
        if ( v9 >= 0 )
        {
          v10 = *(_DWORD *)(v3 + 4);
          if ( v9 < (unsigned int)(-1108378657 * ((*(_DWORD *)(v3 + 8) - v10) >> 2)) )
          {
            v11 = (Ogre::BoneInstance *)(v10 + 124 * v9);
            if ( *((_DWORD *)v11 + 13) <= *((_DWORD *)v7 + 10) )
            {
              this = COERCE_FLOAT(
                       Ogre::BoneTrack::getValue(
                         (Ogre::BoneTrack *)LODWORD(this),
                         *((_DWORD *)v7 + 2),
                         *((_DWORD *)v7 + 6),
                         (Ogre::Vector3 *)v31,
                         (Ogre::Quaternion *)v33,
                         (Ogre::Vector3 *)v32,
                         v28));
              if ( this != 0.0 )
              {
                this = Ogre::BoneInstance::addBlendXform(
                         v11,
                         *((float *)v7 + 5),
                         (const Ogre::Vector3 *)v31,
                         (const Ogre::Quaternion *)v33,
                         (const Ogre::Vector3 *)v32);
                *((_DWORD *)v11 + 13) = *((_DWORD *)v7 + 10);
              }
            }
          }
          else
          {
            Ogre::LogSetCurParam(
              (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSkeleton.cpp",
              (const char *)&dword_A4 + 1,
              4,
              v9);
            this = COERCE_FLOAT(Ogre::LogMessage((Ogre *)&unk_3FC39B, *(const char **)(*(_DWORD *)v3 + 8)));
          }
        }
        ++v23;
      }
    }
    else
    {
      this = COERCE_FLOAT(Ogre::AnimationData::getNumBoneTrack(*((Ogre::AnimationData **)v7 + 1)));
      v12 = 0;
      v27 = this;
      while ( 1 )
      {
        v24 = v12;
        if ( v12 == LODWORD(v27) )
          break;
        this = COERCE_FLOAT(Ogre::AnimationData::getBoneTrack(v8, v12));
        v13 = *(_DWORD *)(LODWORD(this) + 20);
        if ( v13 >= 0 )
        {
          v14 = *(_DWORD *)(v3 + 4);
          if ( v13 < (unsigned int)(-1108378657 * ((*(_DWORD *)(v3 + 8) - v14) >> 2)) )
          {
            v25 = (Ogre::BoneInstance *)(v14 + 124 * v13);
            if ( *((_DWORD *)v25 + 13) <= *((_DWORD *)v7 + 10) )
            {
              this = COERCE_FLOAT(
                       Ogre::BoneTrack::getValue(
                         (Ogre::BoneTrack *)LODWORD(this),
                         *((_DWORD *)v7 + 2),
                         *((_DWORD *)v7 + 6),
                         (Ogre::Vector3 *)v31,
                         (Ogre::Quaternion *)v33,
                         (Ogre::Vector3 *)v32,
                         v28));
              if ( this != 0.0 )
              {
                Ogre::BoneInstance::addBlendXform(
                  v25,
                  *((float *)v7 + 5),
                  (const Ogre::Vector3 *)v31,
                  (const Ogre::Quaternion *)v33,
                  (const Ogre::Vector3 *)v32);
                v15 = *((float *)v25 + 12) - 1.0;
                LODWORD(this) = v15 > -0.00001;
                if ( v15 > -0.00001 )
                {
                  LODWORD(this) = v15 < 0.00001;
                  if ( v15 < 0.00001 )
                    *((_DWORD *)v25 + 13) = *((_DWORD *)v7 + 10);
                }
              }
            }
          }
          else
          {
            Ogre::LogSetCurParam(
              (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSkeleton.cpp",
              (const char *)&dword_C0,
              4,
              v13);
            this = COERCE_FLOAT(Ogre::LogMessage((Ogre *)&unk_3FC39B, *(const char **)(*(_DWORD *)v3 + 8)));
          }
        }
        v12 = v24 + 1;
      }
    }
  }
  v16 = *(_DWORD *)(v3 + 16);
  if ( v16 >= 0 )
  {
    v17 = (float *)(*(_DWORD *)(v3 + 4) + 124 * v16);
    ParentID = Ogre::BoneInstance::getParentID((Ogre::BoneInstance *)v17);
    Ogre::SkeletonInstance::getBoneRotation((Ogre::SkeletonInstance *)v34, v3, ParentID, v19);
    LODWORD(v35[0]) = LODWORD(v34[0]) + 0x80000000;
    LODWORD(v35[1]) = LODWORD(v34[1]) + 0x80000000;
    LODWORD(v35[2]) = LODWORD(v34[2]) + 0x80000000;
    v35[3] = v34[3];
    Ogre::operator*(v37, v34, (float *)(v3 + 20));
    Ogre::operator*(v36, v37, v35);
    this = COERCE_FLOAT(Ogre::operator*(v37, v17 + 5, v36));
    v17[5] = v37[0];
    v17[6] = v37[1];
    v17[7] = v37[2];
    v17[8] = v37[3];
  }
  for ( k = 0; ; ++k )
  {
    v21 = *(_DWORD *)(v3 + 4);
    if ( k >= -1108378657 * ((*(_DWORD *)(v3 + 8) - v21) >> 2) )
      break;
    this = COERCE_FLOAT(Ogre::BoneInstance::calculateXform((Ogre::BoneInstance *)(v21 + 124 * k)));
  }
  return this;
}


//======================================================================
// Ogre::SkeletonInstance::SkeletonInstance(Ogre::SkeletonData *)
// address: 0x00155854   size: 0xA2 (162 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16SkeletonInstanceC1EPNS_12SkeletonDataE'
Ogre::SkeletonInstance *__fastcall Ogre::SkeletonInstance::SkeletonInstance(
        Ogre::SkeletonInstance *this,
        Ogre::SkeletonData *a2)
{
  int v4; // r6
  const Ogre::BoneInstance *v5; // r1
  int v6; // r3
  unsigned int v7; // r6
  unsigned int v8; // r2
  int i; // r3
  _DWORD *v10; // r2
  int v11; // r7
  int v12; // r0
  _BYTE v14[128]; // [sp+4h] [bp-80h] BYREF

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 1065353216;
  (*(void (__fastcall **)(Ogre::SkeletonData *))(*(_DWORD *)a2 + 4))(a2);
  v4 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4);
  Ogre::BoneInstance::BoneInstance((Ogre::BoneInstance *)v14);
  v5 = *((const Ogre::BoneInstance **)this + 2);
  v6 = *((_DWORD *)this + 1);
  v7 = v4 >> 2;
  v8 = -1108378657 * (((int)v5 - v6) >> 2);
  if ( v7 <= v8 )
  {
    if ( v7 < v8 )
      *((_DWORD *)this + 2) = v6 + 124 * v7;
  }
  else
  {
    std::vector<Ogre::BoneInstance>::_M_fill_insert((int)this + 4, v5, v7 - v8, (const Ogre::BoneInstance *)v14);
  }
  for ( i = 0; i != v7; ++i )
  {
    v10 = (_DWORD *)(*((_DWORD *)this + 1) + 124 * i);
    v11 = *(_DWORD *)(4 * i + *((_DWORD *)a2 + 4));
    *v10 = v11;
    v12 = *(_DWORD *)(v11 + 28);
    if ( v12 >= 0 )
      v10[1] = 124 * v12 + *((_DWORD *)this + 1);
    else
      v10[1] = 0;
  }
  return this;
}

