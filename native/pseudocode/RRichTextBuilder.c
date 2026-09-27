// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RRichTextBuilder

//======================================================================
// RRichTextBuilder::CanBuildNewOneLine(void)
// address: 0x001C360C   size: 0x10 (16 bytes)
//======================================================================
unsigned __int8 *__fastcall RRichTextBuilder::CanBuildNewOneLine(RRichTextBuilder *this)
{
  unsigned __int8 *result; // r0

  result = *((unsigned __int8 **)this + 5);
  if ( result != nullptr )
    return (unsigned __int8 *)(*result != 0);
  return result;
}


//======================================================================
// RRichTextBuilder::OnParseNewLineChar(char const*)
// address: 0x001C361C   size: 0x20 (32 bytes)
//======================================================================
int __fastcall RRichTextBuilder::OnParseNewLineChar(RRichTextBuilder *this, const char *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r3

  v2 = *(unsigned __int8 *)a2;
  v3 = *((_DWORD *)this + 5);
  v4 = *((unsigned __int8 *)a2 + 1);
  if ( v2 == 10 || v2 == 13 && v4 != 10 )
    v5 = v3 + 1;
  else
    v5 = v3 + 2;
  *((_DWORD *)this + 5) = v5;
  return 0;
}


//======================================================================
// RRichTextBuilder::OnParseLinkChar(void)
// address: 0x001C363C   size: 0x74 (116 bytes)
//======================================================================
int __fastcall RRichTextBuilder::OnParseLinkChar(RRichTextBuilder *this, int a2, int a3)
{
  char *v3; // r5
  char *v4; // r1
  int v6; // r3
  int v7; // r6
  int v8; // r7
  int v9; // r3
  int v10; // r2
  char *v11; // r4
  _DWORD v13[2]; // [sp+4h] [bp-8h] BYREF

  v13[0] = a2;
  v13[1] = a3;
  v3 = (char *)this + 36;
  v4 = (char *)(*((_DWORD *)this + 5) + 2);
  *((_DWORD *)this + 5) = v4;
  sub_3BE508((int)this + 36, v4);
  v6 = sub_3BD93C((int)v3, "#n");
  *((_DWORD *)this + 5) += v6;
  if ( v6 != 0 )
  {
    sub_3BED3C(v13, v3, 0, v6);
    sub_3BEBBC(v3);
    sub_3BDF80(v13);
  }
  v7 = 0;
  v8 = (*((_DWORD *)this + 12) - *((_DWORD *)this + 11)) >> 2;
  while ( v7 != v8 )
  {
    v9 = 4 * v7++;
    sub_3BEBBC(*(_DWORD *)(v9 + *((_DWORD *)this + 11)) + 40);
  }
  v10 = *((_DWORD *)this + 11);
  v11 = (char *)this + 40;
  *((_DWORD *)v11 + 2) = v10;
  *v11 = 0;
  return 1;
}


//======================================================================
// RRichTextBuilder::IsWidthEnoughToPutOneNewFace(void)
// address: 0x001C36B4   size: 0x52 (82 bytes)
//======================================================================
bool __fastcall RRichTextBuilder::IsWidthEnoughToPutOneNewFace(RRichTextBuilder *this)
{
  return (float)(*(float *)(*((_DWORD *)this + 3) + 532) - *(float *)(*((_DWORD *)this + 3) + 524)) >= (float)((float)((float)*(int *)(g_pFrameMgr + 256) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr)) + *((float *)this + 1));
}


//======================================================================
// RRichTextBuilder::ParseTextObjectTwoNeighbourChar(int &,char *,unsigned char *)
// address: 0x001C370C   size: 0x76 (118 bytes)
//======================================================================
int __fastcall RRichTextBuilder::ParseTextObjectTwoNeighbourChar(
        RRichTextBuilder *this,
        int *a2,
        char *a3,
        unsigned __int8 *a4)
{
  const unsigned __int8 *v5; // r0
  int v7; // r2
  int v8; // r3
  int v10; // r1
  size_t CharBytes; // r6

  v5 = *((const unsigned __int8 **)this + 5);
  v7 = *v5;
  v8 = 0;
  if ( *v5 != 0 && v7 != 10 )
  {
    if ( v7 == 35 )
    {
      if ( v5[1] == 35 )
      {
        v10 = *a2;
        *a2 = v10 + 1;
        a4[v10] = 35;
        *a3 = 35;
        a3[1] = 0;
        *((_DWORD *)this + 5) += 2;
        return 1;
      }
    }
    else if ( v7 != 64 || v5[1] != 64 )
    {
      CharBytes = (size_t)UTF8_GetCharBytes(v5);
      j_memcpy(&a4[*a2], *((const void **)this + 5), CharBytes);
      *a2 += CharBytes;
      j_memcpy(a3, *((const void **)this + 5), CharBytes);
      a3[CharBytes] = 0;
      *((_DWORD *)this + 5) += CharBytes;
      return 1;
    }
  }
  return v8;
}


//======================================================================
// RRichTextBuilder::ParseTextObjectTwoNeighbourChar(char *,std::string &)
// address: 0x001C3782   size: 0x70 (112 bytes)
//======================================================================
int __fastcall RRichTextBuilder::ParseTextObjectTwoNeighbourChar(int a1, _WORD *a2, int a3)
{
  const unsigned __int8 *v4; // r0
  int v5; // r5
  int v7; // r3
  size_t CharBytes; // r5

  v4 = *(const unsigned __int8 **)(a1 + 20);
  v5 = 0;
  v7 = *v4;
  if ( *v4 == 0 || v7 == 10 )
    return v5;
  if ( (v7 & 0x80) != 0 )
  {
LABEL_9:
    CharBytes = (size_t)UTF8_GetCharBytes(v4);
    sub_3BE898(a3, *(_DWORD *)(a1 + 20), CharBytes);
    j_memcpy(a2, *(const void **)(a1 + 20), CharBytes);
    *((_BYTE *)a2 + CharBytes) = 0;
    *(_DWORD *)(a1 + 20) += CharBytes;
    return 1;
  }
  if ( v7 != 35 )
  {
    if ( v7 == 64 && v4[1] == 64 )
      return v5;
    goto LABEL_9;
  }
  if ( v4[1] == 35 )
  {
    sub_3BE984(a3, 1, 35);
    *a2 = 35;
    *(_DWORD *)(a1 + 20) += 2;
    return 1;
  }
  return v5;
}


//======================================================================
// RRichTextBuilder::CalculateOneTextObjectViewRect(Ogre::TRect<float> &,char const*)
// address: 0x001C37F4   size: 0x74 (116 bytes)
//======================================================================
int __fastcall RRichTextBuilder::CalculateOneTextObjectViewRect(int a1, int a2, int a3)
{
  int UIFontByIndex; // r0
  int v7; // r3
  float v9; // [sp+8h] [bp-Ch] BYREF
  int v10; // [sp+Ch] [bp-8h] BYREF

  UIFontByIndex = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, *(_DWORD *)(*(_DWORD *)(a1 + 12) + 420));
  v9 = 0.0;
  v10 = 0;
  (*(void (__fastcall **)(int, _DWORD, int, float *, int *))(*(_DWORD *)g_pDisplay + 48))(
    g_pDisplay,
    *(_DWORD *)(UIFontByIndex + 20),
    a3,
    &v9,
    &v10);
  v7 = 0;
  if ( (float)(*(float *)(a2 + 8) + v9) <= (float)(*(float *)(*(_DWORD *)(a1 + 12) + 532)
                                                 - *(float *)(*(_DWORD *)(a1 + 12) + 524)) )
  {
    *(float *)(a2 + 8) = *(float *)(a2 + 8) + v9;
    return 1;
  }
  return v7;
}


//======================================================================
// RRichTextBuilder::BuildNewOneTextObject(char const*,Ogre::TRect<float> &)
// address: 0x001C3870   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall RRichTextBuilder::BuildNewOneTextObject(int a1, char *a2, int a3)
{
  float v6; // r7
  int v7; // r7
  int v8; // r1
  int v9; // r2
  char *v10; // r0
  float v12; // [sp+0h] [bp-Ch]
  size_t v13; // [sp+4h] [bp-8h]

  if ( *(_BYTE *)a1 != 0 )
  {
    v6 = *(float *)(a3 + 8);
    v12 = (float)((float)(*(float *)(*(_DWORD *)(a1 + 12) + 532) - *(float *)(*(_DWORD *)(a1 + 12) + 524))
                - (float)(v6 - *(float *)a3))
        * 0.5;
    *(float *)a3 = *(float *)a3 + v12;
    *(float *)(a3 + 8) = v6 + v12;
  }
  v13 = j_strlen(a2);
  v7 = operator new(0x2Cu);
  *(_DWORD *)v7 = &off_459290;
  *(_DWORD *)(v7 + 40) = &byte_55FB88;
  *(_DWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 4) = 0;
  v8 = *(_DWORD *)(a3 + 4);
  v9 = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(v7 + 8) = *(_DWORD *)a3;
  *(_DWORD *)(v7 + 12) = v8;
  *(_DWORD *)(v7 + 16) = v9;
  *(_DWORD *)(v7 + 20) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(v7 + 24) = *(_DWORD *)(a1 + 28);
  *(_BYTE *)(v7 + 28) = *(_BYTE *)(a1 + 32);
  *(_BYTE *)(v7 + 36) = *(_BYTE *)(a1 + 33);
  v10 = (char *)operator new[](v13 + 1);
  *(_DWORD *)(v7 + 32) = v10;
  j_strcpy(v10, a2);
  return v7;
}


//======================================================================
// RRichTextBuilder::NewTextObject(void)
// address: 0x001C392C   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall RRichTextBuilder::NewTextObject(RRichTextBuilder *this)
{
  int v2; // r2
  int UIFontByIndex; // r0
  float v4; // r6
  float v5; // r2
  int v6; // r4
  int v8; // [sp+0h] [bp-2Ch]
  int v9; // [sp+4h] [bp-28h]
  char *v10; // [sp+8h] [bp-24h] BYREF
  float v11[4]; // [sp+Ch] [bp-20h] BYREF
  _DWORD v12[2]; // [sp+1Ch] [bp-10h] BYREF

  v2 = *((_DWORD *)this + 3);
  v12[0] = 0;
  v12[1] = 0;
  v10 = &byte_55FB88;
  UIFontByIndex = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, *(_DWORD *)(v2 + 420));
  v4 = *((float *)this + 2);
  v5 = *((float *)this + 1);
  v11[1] = (float)(v4 - (float)*(unsigned int *)(UIFontByIndex + 12)) - 1.0;
  v11[3] = v4;
  v11[0] = v5;
  v11[2] = v5;
  while ( 1 )
  {
    v9 = *((_DWORD *)this + 5);
    v8 = *((_DWORD *)v10 - 3);
    if ( RRichTextBuilder::ParseTextObjectTwoNeighbourChar((int)this, v12, (int)&v10) == 0 )
      break;
    if ( RRichTextBuilder::CalculateOneTextObjectViewRect((int)this, (int)v11, (int)v12) == 0 )
    {
      *((_DWORD *)this + 5) = v9;
      sub_3BEA44(&v10, v8);
      break;
    }
  }
  if ( *((_DWORD *)v10 - 3) != 0 )
    v6 = RRichTextBuilder::BuildNewOneTextObject((int)this, v10, (int)v11);
  else
    v6 = 0;
  sub_3BDF80(&v10);
  return v6;
}


//======================================================================
// RRichTextBuilder::NewFaceObject(void)
// address: 0x001C39FC   size: 0xDE (222 bytes)
//======================================================================
int __fastcall RRichTextBuilder::NewFaceObject(RRichTextBuilder *this)
{
  int v2; // r0
  int v3; // r3
  int v4; // r1
  int v5; // r4
  int result; // r0
  _DWORD *v7; // r7
  int v8; // r4
  int v9; // r6
  float v10; // r0
  __suseconds_t v11; // r1
  float v12; // [sp+4h] [bp-8h]

  v2 = *((_DWORD *)this + 5);
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = *(unsigned __int8 *)(v2 + v3) - 48;
    if ( (unsigned __int8)(*(_BYTE *)(v2 + v3) - 48) > 9u )
      break;
    ++v3;
    v4 = 10 * v4 + v5;
  }
  while ( v3 != 3 );
  *((_DWORD *)this + 5) = v2 + v3;
  result = (***(int (__fastcall ****)(_DWORD, int))(g_pFrameMgr + 240))(*(_DWORD *)(g_pFrameMgr + 240), v4);
  v7 = (_DWORD *)result;
  if ( result != 0 )
  {
    v12 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
    v8 = operator new(0x2Cu);
    *(_DWORD *)v8 = &off_4592A0;
    *(_DWORD *)(v8 + 4) = 1;
    *(_DWORD *)(v8 + 24) = v7[1];
    *(_DWORD *)(v8 + 28) = v7[2];
    *(_DWORD *)(v8 + 32) = v7[3];
    *(_DWORD *)(v8 + 40) = *v7;
    v9 = g_pFrameMgr;
    *(float *)(v8 + 8) = *((float *)this + 1) - (float)(v12 * *(float *)(*((_DWORD *)this + 3) + 476));
    v9 += 252;
    *(float *)(v8 + 12) = (float)(*((float *)this + 2) - (float)((float)*(int *)(v9 + 8) * v12))
                        - (float)(v12 * *(float *)(*((_DWORD *)this + 3) + 480));
    v10 = *((float *)this + 1) + (float)((float)*(int *)(v9 + 4) * v12);
    *(float *)(v8 + 16) = v10;
    *(_DWORD *)(v8 + 20) = *((_DWORD *)this + 2);
    *(_DWORD *)(v8 + 36) = Ogre::Timer::getSystemTick((Ogre::Timer *)LODWORD(v10), v11);
    return v8;
  }
  return result;
}


//======================================================================
// RRichTextBuilder::OnParseFaceChar(RichTextLine *)
// address: 0x001C3AE4   size: 0xCA (202 bytes)
//======================================================================
bool __fastcall RRichTextBuilder::OnParseFaceChar(RRichTextBuilder *this, RichTextLine *a2)
{
  int v4; // r2
  _BYTE *v5; // r3
  float v6; // r6
  float v7; // r5
  float v8; // r0
  _BOOL4 IsWidthEnoughToPutOneNewFace; // r6
  int v10; // r0
  int v11; // r5
  float v12; // r0
  float v13; // r3
  float v14; // r0
  int v15; // r0
  char *v16; // r4

  v4 = g_pFrameMgr;
  v5 = *((_BYTE **)this + 5);
  v6 = *(float *)(g_pFrameMgr + 20);
  v7 = *(float *)g_pFrameMgr;
  if ( v5[1] == 57 && v5[2] == 57 && v5[3] == 57 )
  {
    *((_DWORD *)this + 5) = v5 + 4;
    v8 = v6 * v7;
    IsWidthEnoughToPutOneNewFace = true;
    *((float *)a2 + 3) = *((float *)a2 + 1) + (float)((float)*(int *)(v4 + 260) * v8);
  }
  else
  {
    IsWidthEnoughToPutOneNewFace = RRichTextBuilder::IsWidthEnoughToPutOneNewFace(this);
    if ( IsWidthEnoughToPutOneNewFace )
    {
      ++*((_DWORD *)this + 5);
      v10 = RRichTextBuilder::NewFaceObject(this);
      v11 = v10;
      if ( v10 != 0 )
      {
        v12 = (float)(*(float *)(v10 + 16) - *(float *)(v10 + 8)) + *((float *)this + 1);
        *((float *)this + 1) = v12;
        v13 = *((float *)a2 + 1);
        *((float *)a2 + 2) = *(float *)a2 + v12;
        v14 = *(float *)(v11 + 20) - *(float *)(v11 + 12);
        if ( (float)(*((float *)a2 + 3) - v13) < v14 )
          *((float *)a2 + 3) = v13 + v14;
        v15 = operator new(0xCu);
        v16 = (char *)a2 + 16;
        if ( v15 != -8 )
          *(_DWORD *)(v15 + 8) = v11;
        sub_392244(v15, v16);
      }
    }
  }
  return IsWidthEnoughToPutOneNewFace;
}


//======================================================================
// RRichTextBuilder::NewPictureObject(int &)
// address: 0x001C3BB4   size: 0xC2 (194 bytes)
//======================================================================
char *__fastcall RRichTextBuilder::NewPictureObject(RRichTextBuilder *this, int *a2)
{
  int v2; // r3
  int v5; // r1
  int v6; // r4
  char *result; // r0
  char *v8; // r5
  float v9; // r7
  int v10; // r4
  float v11; // r0
  __suseconds_t v12; // r1

  v2 = 0;
  v5 = 0;
  do
  {
    v6 = *(unsigned __int8 *)(*((_DWORD *)this + 5) + v2) - 48;
    if ( (unsigned __int8)(*(_BYTE *)(*((_DWORD *)this + 5) + v2) - 48) > 9u )
      break;
    ++v2;
    v5 = 10 * v5 + v6;
    ++*a2;
  }
  while ( v2 != 3 );
  *((_DWORD *)this + 5) += *a2;
  result = RPictureCodeMap::GetPictureData(*(RPictureCodeMap **)(g_pFrameMgr + 300), v5);
  v8 = result;
  if ( result != nullptr )
  {
    v9 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
    v10 = operator new(0x30u);
    *(_DWORD *)v10 = &off_4592B0;
    *(_DWORD *)(v10 + 44) = &byte_55FB88;
    *(_DWORD *)(v10 + 4) = 2;
    *(_DWORD *)(v10 + 24) = *((_DWORD *)v8 + 1);
    *(_DWORD *)(v10 + 28) = *((_DWORD *)v8 + 2);
    *(_DWORD *)(v10 + 32) = *((_DWORD *)v8 + 3);
    *(_DWORD *)(v10 + 40) = *(_DWORD *)v8;
    *(_DWORD *)(v10 + 8) = *((_DWORD *)this + 1);
    *(float *)(v10 + 12) = *((float *)this + 2) - (float)((float)*((int *)v8 + 7) * v9);
    v11 = *((float *)this + 1) + (float)((float)*((int *)v8 + 6) * v9);
    *(float *)(v10 + 16) = v11;
    *(_DWORD *)(v10 + 20) = *((_DWORD *)this + 2);
    *(_DWORD *)(v10 + 36) = Ogre::Timer::getSystemTick((Ogre::Timer *)LODWORD(v11), v12);
    return (char *)v10;
  }
  return result;
}


//======================================================================
// RRichTextBuilder::OnParsePictureChar(RichTextLine *)
// address: 0x001C3C84   size: 0xF6 (246 bytes)
//======================================================================
int __fastcall RRichTextBuilder::OnParsePictureChar(RRichTextBuilder *this, RichTextLine *a2)
{
  char *v4; // r0
  float *v5; // r5
  float v7; // r0
  float v8; // r0
  int v9; // r0
  char *v10; // [sp+8h] [bp-14h]
  int v11; // [sp+14h] [bp-8h] BYREF

  v10 = *((char **)this + 5);
  *((_DWORD *)this + 5) = v10 + 2;
  v11 = 0;
  v4 = RRichTextBuilder::NewPictureObject(this, &v11);
  v5 = (float *)v4;
  if ( v4 != nullptr )
  {
    if ( (float)(*(float *)(*((_DWORD *)this + 3) + 532) - *(float *)(*((_DWORD *)this + 3) + 524)) < (float)((float)((float)*((int *)RPictureCodeMap::GetPictureData(*(RPictureCodeMap **)(g_pFrameMgr + 300), *((_DWORD *)v4 + 10)) + 6) * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr)) + *((float *)this + 1)) )
    {
      *((_DWORD *)this + 5) += -2 - v11;
      return 0;
    }
    sub_3BE408((int)(v5 + 11), v10, v11 + 2);
    v7 = (float)(v5[4] - v5[2]) + *((float *)this + 1);
    *((float *)this + 1) = v7;
    *((float *)a2 + 2) = *(float *)a2 + v7;
    v8 = v5[5] - v5[3];
    if ( (float)(*((float *)a2 + 3) - *((float *)a2 + 1)) < v8 )
      *((float *)a2 + 3) = *((float *)a2 + 1) + v8;
    v9 = operator new(0xCu);
    if ( v9 != -8 )
      *(_DWORD *)(v9 + 8) = v5;
    sub_392244(v9, (char *)a2 + 16);
  }
  return 1;
}


//======================================================================
// RRichTextBuilder::SetCustomColor(void)
// address: 0x001C3D80   size: 0x50 (80 bytes)
//======================================================================
int __fastcall RRichTextBuilder::SetCustomColor(int this)
{
  int v1; // r5
  int v2; // r3
  int v3; // r2
  int v4; // r1
  int v5; // r4
  int v6; // r2

  v1 = *(_DWORD *)(this + 20);
  v2 = 1;
  v3 = 0;
  do
  {
    v4 = *(unsigned __int8 *)(v1 + v2 - 1);
    v5 = v2 - 1;
    if ( (unsigned int)(v4 - 48) > 9 )
    {
      if ( (unsigned int)(v4 - 97) > 5 )
      {
        if ( (unsigned int)(v4 - 65) > 5 )
          break;
        v6 = 16 * v3 - 55;
      }
      else
      {
        v6 = 16 * v3 - 87;
      }
    }
    else
    {
      v6 = 16 * v3 - 48;
    }
    v5 = v2++;
    v3 = v6 + v4;
  }
  while ( v2 != 7 );
  *(_DWORD *)(this + 20) = v1 + v5;
  *(_DWORD *)(this + 28) = v3 | 0xFF000000;
  return this;
}


//======================================================================
// RRichTextBuilder::OnParseSpecialFunctionChar(char const*)
// address: 0x001C3DD0   size: 0x110 (272 bytes)
//======================================================================
int __fastcall RRichTextBuilder::OnParseSpecialFunctionChar(RRichTextBuilder *this, const char *a2)
{
  unsigned int v3; // r2
  unsigned int v4; // r3
  int v5; // r1
  char v6; // r2
  int v7; // r3
  int v8; // r3
  _BYTE *v9; // r2

  v3 = *((unsigned __int8 *)a2 + 1) << 24;
  v4 = *((unsigned __int8 *)a2 + 1);
  if ( v4 == 82 )
  {
    *((_BYTE *)this + 30) = -1;
    *((_BYTE *)this + 29) = 80;
    *((_BYTE *)this + 28) = 80;
LABEL_24:
    *((_BYTE *)this + 31) = -1;
    goto LABEL_25;
  }
  if ( v4 <= 0x52 )
  {
    if ( v4 != 75 )
    {
      if ( v4 <= 0x4B )
      {
        v5 = *((_DWORD *)this + 5);
        if ( v4 != 66 )
        {
          if ( v4 == 71 )
          {
            v6 = 60;
            *((_BYTE *)this + 30) = 60;
            *((_BYTE *)this + 29) = -1;
LABEL_26:
            *((_BYTE *)this + 28) = v6;
            goto LABEL_22;
          }
          goto LABEL_33;
        }
        *((_BYTE *)this + 30) = 80;
        *((_BYTE *)this + 29) = -56;
LABEL_21:
        *((_BYTE *)this + 28) = -1;
LABEL_22:
        *((_BYTE *)this + 31) = -1;
        *((_DWORD *)this + 5) = v5 + 2;
        return 1;
      }
      if ( v4 == 76 )
      {
        *((_BYTE *)this + 40) = 1;
        sub_3BE1FC((char *)this + 36);
        *((_BYTE *)this + 33) = 1;
        v8 = *((_DWORD *)this + 5);
        *((_DWORD *)this + 7) = *(_DWORD *)(*((_DWORD *)this + 3) + 436);
        *((_DWORD *)this + 5) = v8 + 2;
        *((_DWORD *)this + 12) = *((_DWORD *)this + 11);
        return 1;
      }
      if ( a2[1] == 80 )
      {
        *((_DWORD *)this + 5) += 2;
        *(_BYTE *)this = 1;
        return 1;
      }
LABEL_33:
      v7 = *((_DWORD *)this + 5) + 1;
      goto LABEL_34;
    }
    *((_BYTE *)this + 30) = 0;
    *((_BYTE *)this + 29) = 0;
    *((_BYTE *)this + 28) = 0;
    goto LABEL_24;
  }
  if ( v4 == 98 )
  {
    *((_BYTE *)this + 32) = 1;
    goto LABEL_25;
  }
  if ( v4 <= 0x62 )
  {
    v5 = *((_DWORD *)this + 5);
    if ( v4 != 87 )
    {
      if ( HIBYTE(v3) == 89 )
      {
        *((_BYTE *)this + 30) = -1;
        *((_BYTE *)this + 29) = -1;
        v6 = 0;
        goto LABEL_26;
      }
      goto LABEL_33;
    }
    *((_BYTE *)this + 30) = -1;
    *((_BYTE *)this + 29) = -1;
    goto LABEL_21;
  }
  if ( v4 != 99 )
  {
    if ( a2[1] != 110 )
      goto LABEL_33;
    *((_DWORD *)this + 7) = *((_DWORD *)this + 6);
    *((_BYTE *)this + 32) = 0;
    *((_BYTE *)this + 33) = 0;
LABEL_25:
    v7 = *((_DWORD *)this + 5) + 2;
LABEL_34:
    *((_DWORD *)this + 5) = v7;
    return 1;
  }
  v9 = (_BYTE *)(*((_DWORD *)this + 5) + 2);
  *((_DWORD *)this + 5) = v9;
  if ( (unsigned int)(unsigned __int8)*v9 - 48 <= 9 || (*v9 & 0xDFu) - 65 <= 5 )
    RRichTextBuilder::SetCustomColor((int)this);
  return 1;
}


//======================================================================
// RRichTextBuilder::OnParseSelfDefineFormatText(RichTextLine *,char const*)
// address: 0x001C3EE0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall RRichTextBuilder::OnParseSelfDefineFormatText(RRichTextBuilder *this, RichTextLine *a2, const char *a3)
{
  if ( (unsigned int)*((unsigned __int8 *)a3 + 1) - 48 <= 9 )
    return RRichTextBuilder::OnParseFaceChar(this, a2);
  if ( a3[1] == 65 )
    return RRichTextBuilder::OnParsePictureChar(this, a2);
  return RRichTextBuilder::OnParseSpecialFunctionChar(this, a3);
}


//======================================================================
// RRichTextBuilder::CanBuildText(char const*,RichText *)
// address: 0x001C3F04   size: 0x42 (66 bytes)
//======================================================================
RichText *__fastcall RRichTextBuilder::CanBuildText(RRichTextBuilder *this, const char *a2, RichText *a3)
{
  float *v3; // r4
  _BOOL4 v4; // r0

  if ( a2 == nullptr )
    return nullptr;
  if ( a3 != nullptr )
  {
    v3 = (float *)((char *)a3 + 524);
    v4 = (float)(*((float *)a3 + 133) - *((float *)a3 + 131)) == 0.0;
    a3 = nullptr;
    if ( !v4 )
      return (RichText *)((float)(v3[3] - v3[1]) != 0.0);
  }
  return a3;
}


//======================================================================
// RRichTextBuilder::RemoveRedundantLineBeforeBuildNewText(void)
// address: 0x001C3F46   size: 0x70 (112 bytes)
//======================================================================
__int64 __fastcall RRichTextBuilder::RemoveRedundantLineBeforeBuildNewText(RRichTextBuilder *this)
{
  int v1; // r5
  void *v3; // r4
  int v4; // r3
  _DWORD *v5; // r1
  float *v6; // r6
  _DWORD *v7; // r2
  unsigned int v8; // r3
  void *v9; // r6
  __int64 v11; // [sp+0h] [bp-Ch]

  LODWORD(v11) = this;
  v1 = *((_DWORD *)this + 3);
  HIDWORD(v11) = *(_DWORD *)(v1 + 440);
  v3 = *(void **)(v1 + 444);
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 3);
    v5 = (_DWORD *)(v4 + 444);
    if ( v3 == (void *)(v4 + 444) )
      break;
    v6 = *((float **)v3 + 2);
    v7 = *(_DWORD **)(v4 + 444);
    v8 = 0;
    while ( v7 != v5 )
    {
      v7 = (_DWORD *)*v7;
      ++v8;
    }
    if ( v8 < HIDWORD(v11) )
      break;
    if ( v6[1] >= *(float *)(v1 + 464) )
    {
      v3 = *(void **)v3;
    }
    else
    {
      RichTextLine::~RichTextLine(*((RichTextLine **)v3 + 2));
      operator delete(v6);
      v9 = *(void **)v3;
      sub_392254(v3);
      operator delete(v3);
      v3 = v9;
    }
  }
  return v11;
}


//======================================================================
// RRichTextBuilder::Init(char const*,RichText *,Ogre::ColorQuad const&)
// address: 0x001C3FB6   size: 0x1E (30 bytes)
//======================================================================
_BYTE *__fastcall RRichTextBuilder::Init(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r2
  _BYTE *result; // r0

  *(_DWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 20) = a2;
  *(_DWORD *)(a1 + 24) = *a4;
  *(_DWORD *)(a1 + 28) = *a4;
  *(_BYTE *)(a1 + 32) = 0;
  v4 = a1 + 2;
  result = (_BYTE *)(a1 + 40);
  *(_BYTE *)(v4 + 31) = 0;
  *result = 0;
  return result;
}


//======================================================================
// RRichTextBuilder::UpdateAutoExtendRichAfterBuildOneLine(RichTextLine const*)
// address: 0x001C3FD4   size: 0x2 (2 bytes)
//======================================================================
void RRichTextBuilder::UpdateAutoExtendRichAfterBuildOneLine()
{
  ;
}


//======================================================================
// RRichTextBuilder::NeedScrollNotAutoExtendRichAfterBuildOneLine(RichTextLine const*)
// address: 0x001C3FD8   size: 0x86 (134 bytes)
//======================================================================
bool __fastcall RRichTextBuilder::NeedScrollNotAutoExtendRichAfterBuildOneLine(
        RRichTextBuilder *this,
        const RichTextLine *a2)
{
  int v2; // r4
  float v3; // r7
  float v4; // r5
  _BOOL4 result; // r0
  float v6; // [sp+4h] [bp-8h]

  v2 = *((_DWORD *)this + 3);
  v3 = *(float *)(v2 + 464);
  v4 = v3 + (float)(*(float *)(v2 + 536) - *(float *)(v2 + 528));
  v6 = *((float *)a2 + 1);
  if ( v6 < v3 )
    return v6 < (float)(v4
                      + (float)((float)((float)*(int *)(v2 + 416) + 2.0)
                              * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr)));
  result = false;
  if ( *((float *)a2 + 3) > v4 )
    return v6 < (float)(v4
                      + (float)((float)((float)*(int *)(v2 + 416) + 2.0)
                              * (float)(*(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr)));
  return result;
}


//======================================================================
// RRichTextBuilder::UpdateNotAutoExtendRichAfterBuildOneLine(RichTextLine const*)
// address: 0x001C4064   size: 0x32 (50 bytes)
//======================================================================
int __fastcall RRichTextBuilder::UpdateNotAutoExtendRichAfterBuildOneLine(
        RRichTextBuilder *this,
        const RichTextLine *a2)
{
  int v4; // r6
  int result; // r0

  v4 = *((_DWORD *)this + 3);
  result = RRichTextBuilder::NeedScrollNotAutoExtendRichAfterBuildOneLine(this, a2);
  if ( result != 0 )
    return RichText::SetDispPos(
             *((RichText **)this + 3),
             *((float *)a2 + 3) - (float)(*(float *)(v4 + 536) - *(float *)(v4 + 528)));
  return result;
}


//======================================================================
// RRichTextBuilder::UpdateRichAfterBuildOneLine(RichTextLine const*)
// address: 0x001C4096   size: 0x1A (26 bytes)
//======================================================================
void __fastcall RRichTextBuilder::UpdateRichAfterBuildOneLine(RRichTextBuilder *this, const RichTextLine *a2)
{
  if ( *(_BYTE *)(*((_DWORD *)this + 3) + 472) != 0 )
    RRichTextBuilder::UpdateAutoExtendRichAfterBuildOneLine();
  else
    RRichTextBuilder::UpdateNotAutoExtendRichAfterBuildOneLine(this, a2);
}


//======================================================================
// RRichTextBuilder::OnParseNormalText(RichTextLine *)
// address: 0x001C417C   size: 0x98 (152 bytes)
//======================================================================
int __fastcall RRichTextBuilder::OnParseNormalText(RRichTextBuilder *this, RichTextLine *a2, int a3)
{
  __int64 v5; // r0
  float *v6; // r4
  int v7; // r3
  float v8; // r0
  float v9; // r0
  int v10; // r0
  char *v11; // r6
  _DWORD v13[2]; // [sp+4h] [bp-8h] BYREF

  v13[0] = a2;
  v13[1] = a3;
  LODWORD(v5) = RRichTextBuilder::NewTextObject(this);
  v6 = (float *)v5;
  if ( (_DWORD)v5 != 0 )
  {
    if ( *((_BYTE *)this + 40) != 0 )
    {
      HIDWORD(v5) = *((_DWORD *)this + 12);
      v7 = *((_DWORD *)this + 13);
      v13[0] = v5;
      if ( HIDWORD(v5) == v7 )
      {
        LODWORD(v5) = (char *)this + 44;
        std::vector<RichTextText *>::_M_insert_aux(v5, v13);
      }
      else
      {
        if ( HIDWORD(v5) != 0 )
          *(_DWORD *)HIDWORD(v5) = v5;
        *((_DWORD *)this + 12) += 4;
      }
    }
    v8 = (float)(v6[4] - v6[2]) + *((float *)this + 1);
    *((float *)this + 1) = v8;
    *((float *)a2 + 2) = *(float *)a2 + v8;
    v9 = v6[5] - v6[3];
    if ( (float)(*((float *)a2 + 3) - *((float *)a2 + 1)) < v9 )
      *((float *)a2 + 3) = *((float *)a2 + 1) + v9;
    v10 = operator new(0xCu);
    v11 = (char *)a2 + 16;
    if ( v10 != -8 )
      *(_DWORD *)(v10 + 8) = v6;
    sub_392244(v10, v11);
    LODWORD(v5) = 1;
  }
  return v5;
}


//======================================================================
// RRichTextBuilder::OnFirstCharNotZero(RichTextLine *,char const*&)
// address: 0x001C4214   size: 0x60 (96 bytes)
//======================================================================
bool __fastcall RRichTextBuilder::OnFirstCharNotZero(const char **this, RichTextLine *a2, const char **a3)
{
  const char *v3; // r3
  int v6; // r2
  int v7; // r0
  int v8; // r3
  const char *v9; // r3

  v3 = *a3;
  v6 = *(unsigned __int8 *)*a3;
  if ( v6 == 10 || v6 == 13 )
    goto LABEL_9;
  if ( v6 == 35 )
  {
    v6 = *((unsigned __int8 *)v3 + 1);
    if ( v6 != 114 )
    {
      if ( v6 != 35 )
      {
        v7 = RRichTextBuilder::OnParseSelfDefineFormatText((RRichTextBuilder *)this, a2, v3);
        goto LABEL_7;
      }
      goto LABEL_15;
    }
LABEL_9:
    v7 = RRichTextBuilder::OnParseNewLineChar((RRichTextBuilder *)this, v3);
    goto LABEL_7;
  }
  if ( v6 == 64 && v3[1] == 64 )
  {
    v7 = RRichTextBuilder::OnParseLinkChar((RRichTextBuilder *)this, (int)a2, 64);
    goto LABEL_7;
  }
LABEL_15:
  v7 = RRichTextBuilder::OnParseNormalText((RRichTextBuilder *)this, a2, v6);
LABEL_7:
  v8 = 0;
  if ( v7 != 0 )
  {
    v9 = *(this + 5);
    *a3 = v9;
    return *v9 != 0;
  }
  return v8;
}


//======================================================================
// RRichTextBuilder::BuildNewOneLine(RichTextLine *&)
// address: 0x001C4274   size: 0x14C (332 bytes)
//======================================================================
unsigned __int8 *__fastcall RRichTextBuilder::BuildNewOneLine(char **this, RichTextLine **a2)
{
  int v4; // r0
  int v5; // r3
  float *v6; // r4
  float v7; // r0
  float v8; // r6
  LayoutFrame *v9; // r0
  RichTextLine *v10; // r4
  int v11; // r3
  unsigned __int8 *v13; // [sp+4h] [bp-10h]
  char *v14; // [sp+Ch] [bp-8h] BYREF

  v13 = RRichTextBuilder::CanBuildNewOneLine((RRichTextBuilder *)this);
  if ( v13 != nullptr )
  {
    v14 = *(this + 5);
    v4 = operator new(0x18u);
    *(_DWORD *)(v4 + 16) = v4 + 16;
    *(_DWORD *)(v4 + 20) = v4 + 16;
    *a2 = (RichTextLine *)v4;
    v5 = *((_DWORD *)*(this + 3) + 113);
    *(_DWORD *)(v4 + 8) = v5;
    *(_DWORD *)v4 = v5;
    v6 = (float *)v4;
    *(float *)(v4 + 4) = (float)FloatToInt(*((float *)*(this + 3) + 114));
    v7 = (float)((float)*(unsigned int *)(FrameManager::getUIFontByIndex(
                                            (FrameManager *)g_pFrameMgr,
                                            *((_DWORD *)*(this + 3) + 105))
                                        + 12)
               + v6[1])
       + 1.0;
    v6[3] = (float)FloatToInt(v7);
    *(this + 1) = nullptr;
    *(this + 2) = nullptr;
    *(_BYTE *)this = 0;
    while ( *v14 != 0 && RRichTextBuilder::OnFirstCharNotZero((const char **)this, *a2, (const char **)&v14) )
      ;
    v8 = *(float *)(g_pFrameMgr + 20) * *(float *)g_pFrameMgr;
    v9 = (LayoutFrame *)*(this + 3);
    if ( *((_BYTE *)v9 + 540) != 0 )
      *v6 = (float)((float)((float)LayoutFrame::GetWidth(v9) * v8) - (float)(v6[2] - *v6)) * 0.5;
    *((float *)*(this + 3) + 114) = *((float *)*(this + 3) + 114)
                                  + (float)((float)(v6[3] - v6[1]) + (float)((float)*((int *)*(this + 3) + 104) * v8));
    v10 = *a2;
    v11 = (unsigned __int8)*v14;
    if ( v11 != 10
      && v11 != 13
      && (v11 != 35 || v14[1] != 114)
      && *((RichTextLine **)v10 + 4) == (RichTextLine *)((char *)v10 + 16) )
    {
      RichTextLine::~RichTextLine(*a2);
      operator delete(v10);
      *a2 = nullptr;
      return nullptr;
    }
  }
  return v13;
}


//======================================================================
// RRichTextBuilder::BuildText(char const*,RichText *,Ogre::ColorQuad const&)
// address: 0x001C43C4   size: 0x60 (96 bytes)
//======================================================================
__int64 __fastcall RRichTextBuilder::BuildText(__int64 a1, RichText *a2, _DWORD *a3)
{
  int v6; // r5
  int v7; // r0
  int v8; // r5
  __int64 v10; // [sp+0h] [bp-Ch] BYREF
  RichText *v11; // [sp+8h] [bp-4h]

  v10 = a1;
  v11 = a2;
  if ( RRichTextBuilder::CanBuildText((RRichTextBuilder *)a1, (const char *)HIDWORD(a1), a2) != nullptr )
  {
    RRichTextBuilder::Init(a1, SHIDWORD(a1), (int)a2, a3);
    RRichTextBuilder::RemoveRedundantLineBeforeBuildNewText((RRichTextBuilder *)a1);
    *(_BYTE *)a1 = 0;
    while ( 1 )
    {
      HIDWORD(v10) = 0;
      if ( RRichTextBuilder::BuildNewOneLine((char **)a1, (RichTextLine **)&v10 + 1) == nullptr )
        break;
      v6 = *(_DWORD *)(a1 + 12);
      v7 = operator new(0xCu);
      v8 = v6 + 444;
      if ( v7 != -8 )
        *(_DWORD *)(v7 + 8) = HIDWORD(v10);
      sub_392244(v7, v8);
      RRichTextBuilder::UpdateRichAfterBuildOneLine((RRichTextBuilder *)a1, (const RichTextLine *)HIDWORD(v10));
    }
  }
  return v10;
}

