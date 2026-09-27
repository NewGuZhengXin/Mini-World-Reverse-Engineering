// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_1C0000

//======================================================================
// sub_1C0F84
// address: 0x001C0F84   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_1C0F84(float a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r0
  int v6; // r3
  int v7; // r0
  float v8; // r0
  float v9; // r0

  if ( a2 != 0 )
  {
    if ( a4 != nullptr )
    {
      if ( a3 != 0 )
      {
        v5 = a4[17];
        v6 = a4[15];
      }
      else
      {
        v5 = a4[18];
        v6 = a4[16];
      }
      v7 = v5 - v6;
    }
    else if ( a3 != 0 )
    {
      v7 = *(_DWORD *)(g_pFrameMgr + 8);
    }
    else
    {
      v7 = *(_DWORD *)(g_pFrameMgr + 12);
    }
    v8 = (float)v7;
  }
  else
  {
    if ( a3 != 0 )
      v9 = *(float *)(g_pFrameMgr + 16);
    else
      v9 = *(float *)(g_pFrameMgr + 20);
    v8 = v9 * *(float *)g_pFrameMgr;
  }
  return FloatToInt(a1 * v8);
}


//======================================================================
// sub_1C0FE8
// address: 0x001C0FE8   size: 0x5C (92 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> sub_1C0FE8(int a1, int a2)
{
  int v4; // [sp+0h] [bp-8h] BYREF
  _BYTE v5[4]; // [sp+4h] [bp-4h] BYREF

  if ( sub_3BD93C(a1, "$parent") == 0 )
  {
    if ( a2 != 0 )
    {
      sub_3BED3C(v5, a1, 7, -1);
      sub_3BEB1C(&v4, a2 + 8);
      sub_3BE774(&v4, v5);
      sub_3BEBBC(a1);
      sub_3BDF80(&v4);
      sub_3BDF80(v5);
    }
    else
    {
      sub_3BE508(a1, (char *)&unk_3FB8EA);
    }
  }
}


//======================================================================
// sub_1C1B58
// address: 0x001C1B58   size: 0x7A (122 bytes)
//======================================================================
__int64 __fastcall sub_1C1B58(int *a1, int *a2, int a3, _DWORD *a4)
{
  _DWORD *LayoutFrame; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  __int64 v13; // [sp+0h] [bp-Ch]

  LODWORD(v13) = a1;
  LayoutFrame = a4;
  if ( *(_DWORD *)(*(_DWORD *)(a3 + 8) - 12) != 0 )
    LayoutFrame = (_DWORD *)FrameManager::FindLayoutFrame(g_pFrameMgr);
  v9 = *(_DWORD *)(a3 + 4);
  if ( LayoutFrame != nullptr )
    LayoutFrame::GetFramePoint(LayoutFrame, v9, a1, a2);
  else
    FrameManager::GetFramePoint(g_pFrameMgr, v9, a1, a2);
  HIDWORD(v13) = a3 + 12;
  v10 = LayoutDim::GetX((LayoutDim *)(a3 + 12));
  *a1 += sub_1C0F84(*(float *)&v10, *(unsigned __int8 *)(a3 + 12), 1, a4);
  v11 = LayoutDim::GetY((LayoutDim *)(a3 + 12));
  *a2 += sub_1C0F84(*(float *)&v11, *(unsigned __int8 *)(a3 + 13), 0, a4);
  return v13;
}


//======================================================================
// sub_1C2138
// address: 0x001C2138   size: 0xAC (172 bytes)
//======================================================================
int *__fastcall sub_1C2138(int *a1, int a2, const char *a3)
{
  Ogre *Name; // r0
  const char *v6; // r2
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  Ogre *v11; // r0
  const char *v12; // r2
  TiXmlElement *v15; // [sp+4h] [bp-4h] BYREF

  Name = (Ogre *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v15);
  if ( Ogre::Stricmp(Name, a3, v6) == 0 )
  {
    if ( Ogre::XMLNode::hasAttrib(&v15, "x") )
      *a1 = Ogre::XMLNode::attribToInt(&v15, "x", v7);
    if ( Ogre::XMLNode::hasAttrib(&v15, "y") )
      a1[1] = Ogre::XMLNode::attribToInt(&v15, "y", v8);
    if ( Ogre::XMLNode::hasAttrib(&v15, "w") )
      a1[2] = Ogre::XMLNode::attribToInt(&v15, "w", v9);
    if ( Ogre::XMLNode::hasAttrib(&v15, "h") )
      a1[3] = Ogre::XMLNode::attribToInt(&v15, "h", v10);
    if ( Ogre::XMLNode::hasAttrib(&v15, "type") )
    {
      v11 = (Ogre *)Ogre::XMLNode::attribToString(&v15, "type");
      if ( Ogre::Stricmp(v11, "scale", v12) == 0 )
        a1[4] = 1;
    }
  }
  return a1;
}


//======================================================================
// sub_1C75B4
// address: 0x001C75B4   size: 0x1A4 (420 bytes)
//======================================================================
int __fastcall sub_1C75B4(int a1, float a2)
{
  int v2; // r5
  int v4; // r7
  int v5; // r5
  unsigned int v6; // r5
  int result; // r0
  float v8; // [sp+Ch] [bp-418h]
  int v9; // [sp+Ch] [bp-418h]
  float v10; // [sp+10h] [bp-414h]
  char v11[1032]; // [sp+1Ch] [bp-408h] BYREF

  v2 = a1 + 252;
  v8 = a2 + *(float *)(a1 + 324);
  *(float *)(a1 + 324) = v8;
  j_memset(v11, 0, 0x400u);
  v10 = *(float *)(v2 + 68);
  v4 = *(_DWORD *)(v2 + 64);
  if ( v8 > v10 )
  {
    if ( *(_BYTE *)(a1 + 309) != 0 )
    {
      v9 = v4 % 100000000 / 10000;
      if ( v4 / 100000000 != 0 )
      {
        j_snprintf(v11, 0x400u, "%d#%04d$%04d%%", v4 / 100000000, v9, v4 % 10000);
      }
      else if ( v9 != 0 )
      {
        j_snprintf(v11, 0x400u, "%d$%04d%%", v9, v4 % 10000);
      }
      else
      {
        j_snprintf(v11, 0x400u, "%d%%", v4 % 10000);
      }
    }
    else
    {
      j_snprintf(v11, 0x400u, "%d", *(_DWORD *)(v2 + 64));
    }
    result = FontString::SetText(a1, v11);
    *(_DWORD *)(v2 + 72) = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_BYTE *)(a1 + 308) = 0;
  }
  else
  {
    v5 = *(_DWORD *)(v2 + 60);
    v6 = v5 + FloatToInt((float)(v8 / v10) * (float)(v4 - v5));
    if ( *(_BYTE *)(a1 + 309) != 0 )
    {
      if ( v6 / 0x5F5E100 != 0 )
      {
        j_snprintf(v11, 0x400u, "%d#%04d$%04d%%", v6 / 0x5F5E100, v6 % 0x5F5E100 / 0x2710, v6 % 0x2710);
      }
      else if ( v6 % 0x5F5E100 / 0x2710 != 0 )
      {
        j_snprintf(v11, 0x400u, "%d$%04d%%", v6 % 0x5F5E100 / 0x2710, v6 % 0x2710);
      }
      else
      {
        j_snprintf(v11, 0x400u, "%d%%", v6 % 0x2710);
      }
    }
    else
    {
      j_snprintf(v11, 0x400u, "%d", v6);
    }
    return FontString::SetText(a1, v11);
  }
  return result;
}


//======================================================================
// sub_1CCD9A
// address: 0x001CCD9A   size: 0x3C (60 bytes)
//======================================================================
_BYTE *__fastcall sub_1CCD9A(_BYTE *result, char a2)
{
  int v2; // r3

  v2 = 0;
  if ( (a2 & 8) != 0 )
  {
    *result = 67;
    v2 = 1;
  }
  if ( (a2 & 4) != 0 )
    result[v2++] = 83;
  if ( (a2 & 0x20) != 0 )
    result[v2++] = 65;
  if ( (a2 & 1) != 0 )
    result[v2++] = 76;
  if ( (a2 & 2) != 0 )
    result[v2++] = 82;
  result[v2] = 0;
  return result;
}


//======================================================================
// sub_1CE408
// address: 0x001CE408   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1CE408(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_1CF684
// address: 0x001CF684   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1CF684(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}

