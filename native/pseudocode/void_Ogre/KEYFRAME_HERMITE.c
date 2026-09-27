// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_Ogre::KEYFRAME_HERMITE

//======================================================================
// void Ogre::KEYFRAME_HERMITE<Ogre::ColourValue>(Ogre::ColourValue &,float,Ogre::ColourValue const&,Ogre::ColourValue const&,Ogre::ColourValue const&,Ogre::ColourValue const&)
// address: 0x00140180   size: 0x1B8 (440 bytes)
//======================================================================
float __fastcall Ogre::KEYFRAME_HERMITE<Ogre::ColourValue>(
        float *a1,
        float a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  float v8; // r0
  float v9; // r0
  float v10; // r6
  float v11; // r4
  float result; // r0
  float v13; // [sp+4h] [bp-20h]
  float v14; // [sp+4h] [bp-20h]
  float v15; // [sp+10h] [bp-14h]
  float v16; // [sp+14h] [bp-10h]
  float v17; // [sp+18h] [bp-Ch]
  float v18; // [sp+1Ch] [bp-8h]

  v13 = (float)(a2 + a2) * a2;
  v8 = (float)(a2 * 3.0) * a2;
  v15 = (float)((float)(v13 * a2) - v8) + 1.0;
  v16 = (float)((float)((float)(a2 * -2.0) * a2) * a2) + v8;
  v9 = (float)(a2 * a2) * a2;
  v14 = (float)(v9 - v13) + a2;
  v10 = v9 - (float)(a2 * a2);
  v17 = (float)((float)((float)(v15 * a3[1]) + (float)(v16 * a4[1])) + (float)(v14 * a5[1])) + (float)(v10 * a6[1]);
  v18 = (float)((float)((float)(v15 * a3[2]) + (float)(v16 * a4[2])) + (float)(v14 * a5[2])) + (float)(v10 * a6[2]);
  v11 = (float)((float)((float)(v15 * a3[3]) + (float)(v16 * a4[3])) + (float)(v14 * a5[3])) + (float)(v10 * a6[3]);
  result = (float)((float)((float)(v15 * *a3) + (float)(v16 * *a4)) + (float)(v14 * *a5)) + (float)(v10 * *a6);
  *a1 = result;
  a1[3] = v11;
  a1[1] = v17;
  a1[2] = v18;
  return result;
}


//======================================================================
// void Ogre::KEYFRAME_HERMITE<Ogre::Quaternion>(Ogre::Quaternion &,float,Ogre::Quaternion const&,Ogre::Quaternion const&,Ogre::Quaternion const&,Ogre::Quaternion const&)
// address: 0x001534EC   size: 0x1B8 (440 bytes)
//======================================================================
float __fastcall Ogre::KEYFRAME_HERMITE<Ogre::Quaternion>(
        float *a1,
        float a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  float v8; // r0
  float v9; // r0
  float v10; // r6
  float v11; // r4
  float result; // r0
  float v13; // [sp+4h] [bp-20h]
  float v14; // [sp+4h] [bp-20h]
  float v15; // [sp+10h] [bp-14h]
  float v16; // [sp+14h] [bp-10h]
  float v17; // [sp+18h] [bp-Ch]
  float v18; // [sp+1Ch] [bp-8h]

  v13 = (float)(a2 + a2) * a2;
  v8 = (float)(a2 * 3.0) * a2;
  v15 = (float)((float)(v13 * a2) - v8) + 1.0;
  v16 = (float)((float)((float)(a2 * -2.0) * a2) * a2) + v8;
  v9 = (float)(a2 * a2) * a2;
  v14 = (float)(v9 - v13) + a2;
  v10 = v9 - (float)(a2 * a2);
  v17 = (float)((float)((float)(v15 * a3[1]) + (float)(v16 * a4[1])) + (float)(v14 * a5[1])) + (float)(v10 * a6[1]);
  v18 = (float)((float)((float)(v15 * a3[2]) + (float)(v16 * a4[2])) + (float)(v14 * a5[2])) + (float)(v10 * a6[2]);
  v11 = (float)((float)((float)(v15 * a3[3]) + (float)(v16 * a4[3])) + (float)(v14 * a5[3])) + (float)(v10 * a6[3]);
  result = (float)((float)((float)(v15 * *a3) + (float)(v16 * *a4)) + (float)(v14 * *a5)) + (float)(v10 * *a6);
  *a1 = result;
  a1[3] = v11;
  a1[1] = v17;
  a1[2] = v18;
  return result;
}


//======================================================================
// void Ogre::KEYFRAME_HERMITE<Ogre::Vector4>(Ogre::Vector4 &,float,Ogre::Vector4 const&,Ogre::Vector4 const&,Ogre::Vector4 const&,Ogre::Vector4 const&)
// address: 0x001606F0   size: 0x1B8 (440 bytes)
//======================================================================
float __fastcall Ogre::KEYFRAME_HERMITE<Ogre::Vector4>(float *a1, float a2, float *a3, float *a4, float *a5, float *a6)
{
  float v8; // r0
  float v9; // r0
  float v10; // r6
  float v11; // r4
  float result; // r0
  float v13; // [sp+4h] [bp-20h]
  float v14; // [sp+4h] [bp-20h]
  float v15; // [sp+10h] [bp-14h]
  float v16; // [sp+14h] [bp-10h]
  float v17; // [sp+18h] [bp-Ch]
  float v18; // [sp+1Ch] [bp-8h]

  v13 = (float)(a2 + a2) * a2;
  v8 = (float)(a2 * 3.0) * a2;
  v15 = (float)((float)(v13 * a2) - v8) + 1.0;
  v16 = (float)((float)((float)(a2 * -2.0) * a2) * a2) + v8;
  v9 = (float)(a2 * a2) * a2;
  v14 = (float)(v9 - v13) + a2;
  v10 = v9 - (float)(a2 * a2);
  v17 = (float)((float)((float)(v15 * a3[1]) + (float)(v16 * a4[1])) + (float)(v14 * a5[1])) + (float)(v10 * a6[1]);
  v18 = (float)((float)((float)(v15 * a3[2]) + (float)(v16 * a4[2])) + (float)(v14 * a5[2])) + (float)(v10 * a6[2]);
  v11 = (float)((float)((float)(v15 * a3[3]) + (float)(v16 * a4[3])) + (float)(v14 * a5[3])) + (float)(v10 * a6[3]);
  result = (float)((float)((float)(v15 * *a3) + (float)(v16 * *a4)) + (float)(v14 * *a5)) + (float)(v10 * *a6);
  *a1 = result;
  a1[3] = v11;
  a1[1] = v17;
  a1[2] = v18;
  return result;
}

