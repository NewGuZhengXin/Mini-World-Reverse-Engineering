// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ColourValue

//======================================================================
// Ogre::ColourValue::getAsRGBA(void)const
// address: 0x0014B5B0   size: 0x4E (78 bytes)
//======================================================================
unsigned int __fastcall Ogre::ColourValue::getAsRGBA(Ogre::ColourValue *this)
{
  return ((unsigned __int8)(unsigned int)(float)(*(float *)this * 255.0) << 16)
       + ((unsigned __int8)(unsigned int)(float)(*((float *)this + 1) * 255.0) << 8)
       + (unsigned __int8)(unsigned int)(float)(*((float *)this + 2) * 255.0)
       + ((unsigned int)(float)(*((float *)this + 3) * 255.0) << 24);
}


//======================================================================
// Ogre::ColourValue::getAsARGB(void)const
// address: 0x0014B604   size: 0x4E (78 bytes)
//======================================================================
unsigned int __fastcall Ogre::ColourValue::getAsARGB(Ogre::ColourValue *this)
{
  return ((unsigned int)(float)(*((float *)this + 3) * 255.0) << 24)
       + ((unsigned __int8)(unsigned int)(float)(*(float *)this * 255.0) << 16)
       + (unsigned __int8)(unsigned int)(float)(*((float *)this + 2) * 255.0)
       + ((unsigned __int8)(unsigned int)(float)(*((float *)this + 1) * 255.0) << 8);
}


//======================================================================
// Ogre::ColourValue::getAsBGRA(void)const
// address: 0x0014B658   size: 0x4E (78 bytes)
//======================================================================
unsigned int __fastcall Ogre::ColourValue::getAsBGRA(Ogre::ColourValue *this)
{
  return ((unsigned int)(float)(*((float *)this + 2) * 255.0) << 24)
       + ((unsigned __int8)(unsigned int)(float)(*((float *)this + 1) * 255.0) << 16)
       + (unsigned __int8)(unsigned int)(float)(*((float *)this + 3) * 255.0)
       + ((unsigned __int8)(unsigned int)(float)(*(float *)this * 255.0) << 8);
}


//======================================================================
// Ogre::ColourValue::getAsABGR(void)const
// address: 0x0014B6AC   size: 0x4E (78 bytes)
//======================================================================
unsigned int __fastcall Ogre::ColourValue::getAsABGR(Ogre::ColourValue *this)
{
  return ((unsigned int)(float)(*((float *)this + 3) * 255.0) << 24)
       + ((unsigned __int8)(unsigned int)(float)(*((float *)this + 2) * 255.0) << 16)
       + (unsigned __int8)(unsigned int)(float)(*(float *)this * 255.0)
       + ((unsigned __int8)(unsigned int)(float)(*((float *)this + 1) * 255.0) << 8);
}


//======================================================================
// Ogre::ColourValue::setAsRGBA(unsigned int)
// address: 0x0014B700   size: 0x48 (72 bytes)
//======================================================================
float __fastcall Ogre::ColourValue::setAsRGBA(Ogre::ColourValue *this, unsigned int a2)
{
  float result; // r0

  *(float *)this = (float)HIBYTE(a2) / 255.0;
  *((float *)this + 1) = (float)BYTE2(a2) / 255.0;
  *((float *)this + 2) = (float)BYTE1(a2) / 255.0;
  result = (float)(unsigned __int8)a2 / 255.0;
  *((float *)this + 3) = result;
  return result;
}


//======================================================================
// Ogre::ColourValue::setAsARGB(unsigned int)
// address: 0x0014B74C   size: 0x48 (72 bytes)
//======================================================================
float __fastcall Ogre::ColourValue::setAsARGB(Ogre::ColourValue *this, unsigned int a2)
{
  float result; // r0

  *((float *)this + 3) = (float)HIBYTE(a2) / 255.0;
  *(float *)this = (float)BYTE2(a2) / 255.0;
  *((float *)this + 1) = (float)BYTE1(a2) / 255.0;
  result = (float)(unsigned __int8)a2 / 255.0;
  *((float *)this + 2) = result;
  return result;
}


//======================================================================
// Ogre::ColourValue::setAsBGRA(unsigned int)
// address: 0x0014B798   size: 0x48 (72 bytes)
//======================================================================
float __fastcall Ogre::ColourValue::setAsBGRA(Ogre::ColourValue *this, unsigned int a2)
{
  float result; // r0

  *((float *)this + 2) = (float)HIBYTE(a2) / 255.0;
  *((float *)this + 1) = (float)BYTE2(a2) / 255.0;
  *(float *)this = (float)BYTE1(a2) / 255.0;
  result = (float)(unsigned __int8)a2 / 255.0;
  *((float *)this + 3) = result;
  return result;
}


//======================================================================
// Ogre::ColourValue::setAsABGR(unsigned int)
// address: 0x0014B7E4   size: 0x48 (72 bytes)
//======================================================================
float __fastcall Ogre::ColourValue::setAsABGR(Ogre::ColourValue *this, unsigned int a2)
{
  float result; // r0

  *((float *)this + 3) = (float)HIBYTE(a2) / 255.0;
  *((float *)this + 2) = (float)BYTE2(a2) / 255.0;
  *((float *)this + 1) = (float)BYTE1(a2) / 255.0;
  result = (float)(unsigned __int8)a2 / 255.0;
  *(float *)this = result;
  return result;
}


//======================================================================
// Ogre::ColourValue::setColorQuad(unsigned int)
// address: 0x0014B830   size: 0x46 (70 bytes)
//======================================================================
float __fastcall Ogre::ColourValue::setColorQuad(Ogre::ColourValue *this, unsigned int a2)
{
  float result; // r0

  *(float *)this = (float)(a2 << 8 >> 24) / 255.0;
  *((float *)this + 1) = (float)BYTE1(a2) / 255.0;
  *((float *)this + 2) = (float)(unsigned __int8)a2 / 255.0;
  result = (float)HIBYTE(a2) / 255.0;
  *((float *)this + 3) = result;
  return result;
}


//======================================================================
// Ogre::ColourValue::operator==(Ogre::ColourValue const&)const
// address: 0x0014B87C   size: 0x3C (60 bytes)
//======================================================================
bool __fastcall Ogre::ColourValue::operator==(float *a1, float *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}


//======================================================================
// Ogre::ColourValue::operator!=(Ogre::ColourValue const&)const
// address: 0x0014B8B8   size: 0x10 (16 bytes)
//======================================================================
bool __fastcall Ogre::ColourValue::operator!=(float *a1, float *a2)
{
  return !Ogre::ColourValue::operator==(a1, a2);
}


//======================================================================
// Ogre::ColourValue::setHSB(float,float,float)
// address: 0x0014B8C8   size: 0x18A (394 bytes)
//======================================================================
float __fastcall Ogre::ColourValue::setHSB(Ogre::ColourValue *this, float a2, float a3, float a4)
{
  float v5; // r7
  float v6; // r6
  float v7; // r0
  float v8; // r5
  float result; // r0
  float v10; // r7
  float v11; // r7
  float v12; // r3
  float v13; // [sp+4h] [bp-10h]
  int v14; // [sp+8h] [bp-Ch]
  float v15; // [sp+Ch] [bp-8h]

  v5 = a2;
  v6 = a3;
  if ( a2 <= 1.0 )
  {
    if ( a2 >= 0.0 )
      goto LABEL_6;
    v7 = a2 + (float)((int)a2 + 1);
  }
  else
  {
    v7 = a2 - (float)(int)a2;
  }
  v5 = v7;
LABEL_6:
  v8 = 0.0;
  if ( a3 > 1.0 )
  {
    v6 = 1.0;
  }
  else if ( a3 < 0.0 )
  {
    v6 = 0.0;
  }
  if ( a4 > 1.0 )
  {
    v8 = 1.0;
  }
  else
  {
    LODWORD(result) = a4 < 0.0;
    if ( a4 < 0.0 )
      goto LABEL_16;
    LODWORD(result) = a4 == 0.0;
    if ( a4 == 0.0 )
      goto LABEL_16;
    v8 = a4;
  }
  LODWORD(result) = v6 == 0.0;
  if ( v6 == 0.0 )
  {
LABEL_16:
    *((float *)this + 2) = v8;
    *((float *)this + 1) = v8;
    *(float *)this = v8;
    return result;
  }
  v10 = v5 * 6.0;
  if ( v10 >= 6.0 )
    v10 = 0.0;
  v14 = (unsigned __int16)(unsigned int)v10;
  v13 = v8 * (float)(1.0 - v6);
  v15 = v10 - (float)v14;
  v11 = v8 * (float)(1.0 - (float)(v6 * v15));
  v12 = v8 * (float)(1.0 - (float)(v6 * (float)(1.0 - v15)));
  result = *(float *)&v14;
  switch ( v14 )
  {
    case 0:
      *((float *)this + 1) = v12;
      *(float *)this = v8;
      v12 = v8 * (float)(1.0 - v6);
      goto LABEL_24;
    case 1:
      *(float *)this = v11;
      *((float *)this + 1) = v8;
      *((float *)this + 2) = v13;
      return result;
    case 2:
      *((float *)this + 1) = v8;
      *(float *)this = v13;
LABEL_24:
      *((float *)this + 2) = v12;
      return result;
    case 3:
      *((float *)this + 1) = v11;
      *(float *)this = v13;
      goto LABEL_27;
    case 4:
      *(float *)this = v12;
      *((float *)this + 1) = v13;
LABEL_27:
      *((float *)this + 2) = v8;
      break;
    case 5:
      *(float *)this = v8;
      *((float *)this + 2) = v11;
      *((float *)this + 1) = v13;
      break;
    default:
      result = v8 * (float)(1.0 - (float)(v6 * (float)(1.0 - v15)));
      break;
  }
  return result;
}


//======================================================================
// Ogre::ColourValue::getHSB(float &,float &,float &)
// address: 0x0014BA58   size: 0x1CE (462 bytes)
//======================================================================
float __fastcall Ogre::ColourValue::getHSB(Ogre::ColourValue *this, float *a2, float *a3, float *a4)
{
  int v4; // r3
  float v5; // r4
  float v6; // r5
  float v7; // r7
  float v8; // r6
  float v9; // r7
  float v10; // r7
  float v11; // r0
  float v12; // r1
  float v13; // r0
  float result; // r0
  float v15; // [sp+4h] [bp-18h]
  float v16; // [sp+8h] [bp-14h]

  if ( *(float *)this < 0.0 )
  {
    v4 = 0;
    goto LABEL_5;
  }
  if ( *(float *)this > 1.0 )
  {
    v4 = 1065353216;
LABEL_5:
    v15 = *(float *)&v4;
    goto LABEL_7;
  }
  v15 = *(float *)this;
LABEL_7:
  v5 = *((float *)this + 1);
  *(float *)this = v15;
  if ( v5 < 0.0 )
  {
    v5 = 0.0;
  }
  else if ( v5 > 1.0 )
  {
    v5 = 1.0;
  }
  v6 = *((float *)this + 2);
  *((float *)this + 1) = v5;
  if ( v6 < 0.0 )
  {
    v6 = 0.0;
  }
  else if ( v6 > 1.0 )
  {
    v6 = 1.0;
  }
  *((float *)this + 2) = v6;
  v7 = v5;
  if ( v5 <= v6 )
    v7 = v6;
  v8 = v15;
  if ( v15 <= v7 )
    v8 = v7;
  v9 = v5;
  if ( v5 >= v6 )
    v9 = v6;
  v16 = v15;
  if ( v15 >= v9 )
    v16 = v9;
  v10 = 0.0;
  if ( v8 != 0.0 )
    v10 = (float)(v8 - v16) / v8;
  if ( v8 == v15 )
  {
    v11 = (float)((float)(v5 - v6) * 60.0) / (float)(v8 - v16);
    if ( v5 < v6 )
      v12 = 360.0;
    else
      v12 = 0.0;
  }
  else if ( v8 == v5 )
  {
    v11 = (float)((float)(v6 - v15) * 60.0) / (float)(v8 - v16);
    v12 = 120.0;
  }
  else
  {
    if ( v8 != v6 )
    {
      v13 = 0.0;
      goto LABEL_35;
    }
    v11 = (float)((float)(v15 - v5) * 60.0) / (float)(v8 - v16);
    v12 = 240.0;
  }
  v13 = v11 + v12;
LABEL_35:
  result = v13 / 360.0;
  *a2 = result;
  *a3 = v10;
  *a4 = v8;
  return result;
}


//======================================================================
// Ogre::ColourValue::operator+(Ogre::ColourValue const&)const
// address: 0x0015052A   size: 0x34 (52 bytes)
//======================================================================
float *__fastcall Ogre::ColourValue::operator+(float *a1, float *a2, float *a3)
{
  float v5; // r0
  float v6; // r1
  float v7; // r0
  float v8; // r1
  float v9; // r0
  float v10; // r1

  v5 = *a2 + *a3;
  v6 = a3[1];
  *a1 = v5;
  v7 = a2[1] + v6;
  v8 = a3[2];
  a1[1] = v7;
  v9 = a2[2] + v8;
  v10 = a3[3];
  a1[2] = v9;
  a1[3] = a2[3] + v10;
  return a1;
}


//======================================================================
// Ogre::ColourValue::operator*(float)const
// address: 0x0015055E   size: 0x34 (52 bytes)
//======================================================================
float *__fastcall Ogre::ColourValue::operator*(float *a1, float *a2, float a3)
{
  float v5; // r0
  float v6; // r1
  float v7; // r0
  float v8; // r1
  float v9; // r0
  float v10; // r1

  v5 = a3 * *a2;
  v6 = a2[1];
  *a1 = v5;
  v7 = a3 * v6;
  v8 = a2[2];
  a1[1] = v7;
  v9 = a3 * v8;
  v10 = a2[3];
  a1[2] = v9;
  a1[3] = a3 * v10;
  return a1;
}

