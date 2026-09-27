// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SphereBound

//======================================================================
// Ogre::SphereBound::setVertexBuffer(float const*,unsigned int,unsigned int)
// address: 0x00195AB4   size: 0xD0 (208 bytes)
//======================================================================
float __fastcall Ogre::SphereBound::setVertexBuffer(
        Ogre::SphereBound *this,
        float *a2,
        unsigned int a3,
        unsigned int a4)
{
  float v5; // r6
  float v6; // r7
  float result; // r0
  float v8; // [sp+0h] [bp-34h]
  float v9; // [sp+4h] [bp-30h]
  float v10; // [sp+8h] [bp-2Ch]
  float v11; // [sp+Ch] [bp-28h]
  float v12[6]; // [sp+14h] [bp-20h] BYREF
  char v13; // [sp+2Ch] [bp-8h]

  v13 = 0;
  Ogre::BoxBound::setVertexBuffer((int)v12, a2, a3, a4);
  v5 = v12[0];
  v6 = v12[3];
  v8 = v12[1];
  v9 = v12[4];
  v10 = v12[2];
  v11 = v12[5];
  *(float *)this = (float)(v12[0] + v12[3]) * 0.5;
  *((float *)this + 1) = (float)(v8 + v9) * 0.5;
  *((float *)this + 2) = (float)(v10 + v11) * 0.5;
  result = j_sqrt((float)((float)((float)((float)((float)(v6 - v5) * 0.5) * (float)((float)(v6 - v5) * 0.5))
                                + (float)((float)((float)(v9 - v8) * 0.5) * (float)((float)(v9 - v8) * 0.5)))
                        + (float)((float)((float)(v11 - v10) * 0.5) * (float)((float)(v11 - v10) * 0.5))));
  *((float *)this + 3) = result;
  return result;
}

