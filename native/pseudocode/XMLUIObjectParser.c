// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: XMLUIObjectParser

//======================================================================
// XMLUIObjectParser::LoadUIObjectParam(UIObject *,Ogre::XMLNode,bool)
// address: 0x001BEC34   size: 0x4 (4 bytes)
//======================================================================
int XMLUIObjectParser::LoadUIObjectParam()
{
  return 1;
}


//======================================================================
// XMLUIObjectParser::XMLUIObjectParser(void)
// address: 0x001BF80C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN17XMLUIObjectParserC1Ev'
void __fastcall XMLUIObjectParser::XMLUIObjectParser(XMLUIObjectParser *this)
{
  *(_DWORD *)this = &off_459100;
}


//======================================================================
// XMLUIObjectParser::~XMLUIObjectParser()
// address: 0x001BF81C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN17XMLUIObjectParserD2Ev'
void __fastcall XMLUIObjectParser::~XMLUIObjectParser(XMLUIObjectParser *this)
{
  *(_DWORD *)this = &off_459100;
}


//======================================================================
// XMLUIObjectParser::LoadFrameScript(UIObject *,Ogre::XMLNode)
// address: 0x001BFC4C   size: 0x1D6 (470 bytes)
//======================================================================
int __fastcall XMLUIObjectParser::LoadFrameScript(int a1, _DWORD *a2, TiXmlNode *a3)
{
  const char *Name; // r5
  char *ScriptEventName; // r0
  _DWORD *v6; // r6
  int v7; // r4
  _DWORD *v8; // r3
  int v9; // r3
  int v11; // r5
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r6
  int v15; // r0
  int v16; // [sp+0h] [bp-144h]
  int v17; // [sp+4h] [bp-140h]
  _DWORD *v18; // [sp+8h] [bp-13Ch]
  int v19; // [sp+Ch] [bp-138h]
  char *Text; // [sp+14h] [bp-130h]
  TiXmlNode *v21[2]; // [sp+1Ch] [bp-128h] BYREF
  TiXmlNode *v22; // [sp+24h] [bp-120h] BYREF
  char *v23; // [sp+28h] [bp-11Ch] BYREF
  int v24; // [sp+2Ch] [bp-118h] BYREF
  char v25[4]; // [sp+30h] [bp-114h] BYREF
  _DWORD *v26; // [sp+34h] [bp-110h] BYREF
  int v27; // [sp+38h] [bp-10Ch]
  char v28[256]; // [sp+3Ch] [bp-108h] BYREF

  v21[0] = a3;
  v22 = (TiXmlNode *)Ogre::XMLNode::iterateChild(v21);
LABEL_2:
  if ( v22 != nullptr )
  {
    v17 = 0;
    while ( 1 )
    {
      Name = (const char *)Ogre::XMLNode::getName((Ogre::XMLNode *)&v22);
      ScriptEventName = GetScriptEventName(v17);
      if ( j_strcasecmp(Name, ScriptEventName) != 0 )
        goto LABEL_21;
      if ( Ogre::XMLNode::getText((Ogre::XMLNode *)&v22) == 0 )
        Ogre::XMLNode::getFullName((Ogre::XMLNode *)&v22, v28, 0x100u);
      Text = (char *)Ogre::XMLNode::getText((Ogre::XMLNode *)&v22);
      if ( Text == nullptr )
        goto LABEL_21;
      v6 = (_DWORD *)a2[6];
      v18 = a2 + 5;
      v7 = (int)(a2 + 5);
      while ( v6 != nullptr )
      {
        if ( v6[4] < v17 )
        {
          v8 = (_DWORD *)v6[3];
          v6 = (_DWORD *)v7;
        }
        else
        {
          v8 = (_DWORD *)v6[2];
        }
        v7 = (int)v6;
        v6 = v8;
      }
      if ( (_DWORD *)v7 == v18 || v17 < *(_DWORD *)(v7 + 16) )
        break;
LABEL_20:
      sub_3BE508(v7 + 20, Text);
LABEL_21:
      if ( ++v17 == 52 )
      {
        v22 = (TiXmlNode *)Ogre::XMLNode::iterateChild(v21, v22);
        goto LABEL_2;
      }
    }
    v23 = &byte_55FB88;
    v24 = v17;
    sub_3BEB1C(v25, &v23);
    v19 = (int)(a2 + 4);
    if ( (_DWORD *)v7 == v18 )
    {
      if ( a2[9] != 0 )
      {
        v11 = a2[8];
        if ( *(_DWORD *)(v11 + 16) < v24 )
          goto LABEL_40;
      }
    }
    else
    {
      v9 = *(_DWORD *)(v7 + 16);
      v16 = v24;
      if ( v24 >= v9 )
      {
        if ( v9 >= v24 )
        {
LABEL_19:
          sub_3BDF80(v25);
          sub_3BDF80(&v23);
          goto LABEL_20;
        }
        if ( v7 != a2[8] )
        {
          v13 = sub_391DDC(v7);
          if ( v16 >= *(_DWORD *)(v13 + 16) )
          {
            std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_get_insert_unique_pos(
              (int *)&v26,
              v19,
              &v24);
            v6 = v26;
            v7 = v27;
          }
          else if ( *(_DWORD *)(v7 + 12) != 0 )
          {
            v7 = v13;
            v6 = (_DWORD *)v13;
          }
        }
        v11 = v7;
        v7 = (int)v6;
LABEL_38:
        if ( v11 == 0 )
          goto LABEL_19;
        v14 = true;
        if ( v7 != 0 )
        {
LABEL_43:
          v15 = operator new(0x18u);
          v7 = v15;
          if ( v15 != -16 )
          {
            *(_DWORD *)(v15 + 16) = v24;
            sub_3BEB1C(v15 + 20, v25);
          }
          sub_391E64(v14, v7, v11, v18);
          ++a2[9];
          goto LABEL_19;
        }
LABEL_40:
        v14 = (_DWORD *)v11 == v18 || v24 < *(_DWORD *)(v11 + 16);
        goto LABEL_43;
      }
      if ( v7 == a2[7] )
      {
        v11 = v7;
        goto LABEL_38;
      }
      v12 = sub_391E44(v7);
      v11 = v12;
      if ( *(_DWORD *)(v12 + 16) < v16 )
      {
        if ( *(_DWORD *)(v12 + 12) != 0 )
          v11 = v7;
        else
          v7 = 0;
        goto LABEL_38;
      }
    }
    std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_get_insert_unique_pos(
      (int *)&v26,
      v19,
      &v24);
    v7 = (int)v26;
    v11 = v27;
    goto LABEL_38;
  }
  return 1;
}

