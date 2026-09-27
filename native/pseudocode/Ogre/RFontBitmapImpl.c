// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RFontBitmapImpl

//======================================================================
// Ogre::RFontBitmapImpl::JustBeforeRender(void)
// address: 0x0014DCE4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::RFontBitmapImpl::JustBeforeRender(Ogre::RFontBitmapImpl *this)
{
  ;
}


//======================================================================
// Ogre::RFontBitmapImpl::GetCharBitmap(unsigned short)
// address: 0x0014DCE6   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::RFontBitmapImpl::GetCharBitmap(Ogre::RFontBitmapImpl *this, unsigned __int16 a2)
{
  return 0;
}


//======================================================================
// Ogre::RFontBitmapImpl::IsSameness(int,int,char const*,Ogre::ECharacterCoding,unsigned int)
// address: 0x0014DD78   size: 0x1C (28 bytes)
//======================================================================
bool __fastcall Ogre::RFontBitmapImpl::IsSameness(int a1, int a2, int a3, char *a4, int a5)
{
  int v6; // r1
  _BOOL4 result; // r0

  v6 = *(_DWORD *)(a1 + 8);
  result = false;
  if ( v6 == a5 )
    return sub_3BDD5C(a1 + 4, a4) == 0;
  return result;
}


//======================================================================
// Ogre::RFontBitmapImpl::~RFontBitmapImpl()
// address: 0x0014DDFC   size: 0x7E (126 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15RFontBitmapImplD1Ev'
void __fastcall Ogre::RFontBitmapImpl::~RFontBitmapImpl(Ogre::RFontBitmapImpl *this)
{
  int v1; // r1
  _DWORD *v3; // r0
  int v4; // r3
  int v5; // r0

  v1 = *((_DWORD *)this + 28);
  *(_DWORD *)this = &off_456078;
  *((_DWORD *)this + 24) = off_4560D0;
  if ( v1 != 0 )
  {
    (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 4) + 92))(*((_DWORD *)this + 4));
    *((_DWORD *)this + 28) = 0;
  }
  v3 = *((_DWORD **)this + 27);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *((_DWORD *)this + 27) = 0;
  }
  v5 = *((_DWORD *)this + 16);
  if ( v5 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::_M_erase(
    (int)this + 124,
    *((_DWORD **)this + 33));
  sub_3BDF80((char *)this + 104);
  sub_3BDF80((char *)this + 100);
  *((_DWORD *)this + 24) = &off_456040;
  Ogre::RFontBase::~RFontBase(this);
}


//======================================================================
// Ogre::RFontBitmapImpl::~RFontBitmapImpl()
// address: 0x0014DE98   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::RFontBitmapImpl::~RFontBitmapImpl(Ogre::RFontBitmapImpl *this)
{
  Ogre::RFontBitmapImpl::~RFontBitmapImpl(this);
  operator delete(this);
}


//======================================================================
// Ogre::RFontBitmapImpl::TextureMap(unsigned char const*,void *&,Ogre::TRect<float> &)
// address: 0x0014DEF2   size: 0x44 (68 bytes)
//======================================================================
int __fastcall Ogre::RFontBitmapImpl::TextureMap(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v7; // r0
  int v8; // r1
  int v9; // r7
  _DWORD v12[2]; // [sp+4h] [bp-8h] BYREF

  v12[1] = a3;
  v12[0] = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 64) + 32))(*(_DWORD *)(a1 + 64));
  v7 = std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::find(
         a1 + 124,
         v12);
  if ( v7 == (_DWORD *)(a1 + 128) )
  {
    *a4 = 0;
    a4[1] = 0;
    a4[2] = 0;
    a4[3] = 0;
  }
  else
  {
    v8 = v7[11];
    v9 = v7[12];
    *a4 = v7[10];
    a4[1] = v8;
    a4[2] = v9;
    a4[3] = v7[13];
  }
  *a3 = *(_DWORD *)(a1 + 112);
  return a1;
}


//======================================================================
// Ogre::RFontBitmapImpl::GetCharSize(unsigned short,float &,float &)
// address: 0x0014DF36   size: 0x2E (46 bytes)
//======================================================================
Ogre::RFontBitmapImpl *__fastcall Ogre::RFontBitmapImpl::GetCharSize(
        Ogre::RFontBitmapImpl *this,
        unsigned __int16 a2,
        float *a3,
        float *a4)
{
  int *v7; // r0
  int v10; // [sp+4h] [bp-4h] BYREF

  v7 = std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::find(
         (int)this + 124,
         &v10);
  if ( v7 == (int *)((char *)this + 128) )
    *a3 = *((float *)this + 7);
  else
    *a3 = (float)v7[7];
  *a4 = *((float *)this + 8);
  return this;
}


//======================================================================
// Ogre::RFontBitmapImpl::Init(Ogre::UIRenderer *,char const*,Ogre::ECharacterCoding)
// address: 0x0014E11C   size: 0x2E2 (738 bytes)
//======================================================================
int __fastcall Ogre::RFontBitmapImpl::Init(int a1, int a2, char *a3, int a4)
{
  Ogre::DataStream *File; // r7
  char *v6; // r0
  char *v7; // r0
  int v8; // r7
  float v9; // r0
  Ogre::TextureData *v10; // r6
  int v11; // r0
  const char *v12; // r5
  TiXmlElement *i; // r0
  int v14; // r7
  float v15; // r6
  float v16; // r5
  int v17; // r0
  _DWORD *v18; // r0
  int *v19; // r3
  int v20; // r4
  int v22; // [sp+Ch] [bp-168h]
  int v23; // [sp+10h] [bp-164h]
  char *v25; // [sp+14h] [bp-160h]
  int v26; // [sp+18h] [bp-15Ch]
  int v28; // [sp+20h] [bp-154h]
  float v29; // [sp+24h] [bp-150h]
  float v31; // [sp+30h] [bp-144h]
  TiXmlNode *v32; // [sp+38h] [bp-13Ch] BYREF
  TiXmlNode *RootNode; // [sp+3Ch] [bp-138h] BYREF
  int v34; // [sp+40h] [bp-134h] BYREF
  TiXmlElement *v35; // [sp+44h] [bp-130h] BYREF
  int v36; // [sp+48h] [bp-12Ch] BYREF
  int v37; // [sp+4Ch] [bp-128h] BYREF
  const char *v38[7]; // [sp+50h] [bp-124h] BYREF
  char v39[256]; // [sp+6Ch] [bp-108h] BYREF

  if ( a3 != nullptr )
  {
    v28 = a1 + 4;
    sub_3BE508(a1 + 4, a3);
    Ogre::XMLData::XMLData(&v32);
    sub_3BF0BC((int)v38, a3);
    File = Ogre::XMLData::loadFile((Ogre::XMLData *)&v32, v38);
    sub_3BDF80(v38);
    if ( File != nullptr )
    {
      RootNode = (TiXmlNode *)Ogre::XMLData::getRootNode(&v32);
      if ( RootNode != nullptr )
      {
        v6 = (char *)Ogre::XMLNode::attribToString(&RootNode, "Filename");
        sub_3BE508(a1 + 104, v6);
        v7 = (char *)Ogre::XMLNode::attribToString(&RootNode, "Type");
        sub_3BE508(a1 + 100, v7);
        if ( sub_3BDD5C(a1 + 100, "Bitmap") == 0 && Ogre::XMLNode::attribToInt(&RootNode, "FontHeight", &v34) )
        {
          v8 = v34 + 1;
          *(float *)(a1 + 32) = (float)(v34 + 1);
          *(_DWORD *)(a1 + 24) = v8;
          if ( Ogre::XMLNode::attribToInt(&RootNode, "FontWidth", &v34) )
          {
            v9 = (float)v34;
            *(_DWORD *)(a1 + 20) = v34;
            *(float *)(a1 + 28) = v9;
            v10 = (Ogre::TextureData *)operator new(0x48u);
            Ogre::TextureData::TextureData(v10);
            sub_3BF0BC((int)v38, *(char **)(a1 + 104));
            Ogre::TextureData::loadFromImageFile(v10, v38, 0);
            sub_3BDF80(v38);
            *(_DWORD *)(a1 + 108) = v10;
            j_sprintf(v39, "RFontBitmapImpl:%x", v10);
            v11 = (*(int (__fastcall **)(int, char *, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 76))(
                    a2,
                    v39,
                    *(_DWORD *)(a1 + 108),
                    2,
                    0,
                    0);
            *(_DWORD *)(a1 + 112) = v11;
            if ( v11 != 0 )
            {
              (*(void (__fastcall **)(_DWORD, const char **))(**(_DWORD **)(a1 + 108) + 28))(*(_DWORD *)(a1 + 108), v38);
              v12 = v38[2];
              *(const char **)(a1 + 56) = v38[1];
              *(_DWORD *)(a1 + 16) = a2;
              *(_DWORD *)(a1 + 60) = v12;
              sub_3BE508(v28, a3);
              *(_DWORD *)(a1 + 8) = a4;
              *(_DWORD *)(a1 + 12) = 0;
              for ( i = (TiXmlElement *)Ogre::XMLNode::iterateChild(&RootNode);
                    ;
                    i = (TiXmlElement *)Ogre::XMLNode::iterateChild(&RootNode, v35) )
              {
                v35 = i;
                if ( i == nullptr )
                  break;
                v36 = 0;
                Ogre::XMLNode::attribToInt(&v35, "CharCode", &v36);
                v26 = 0;
                if ( Ogre::XMLNode::attribToInt(&v35, (const char *)aXywh, &v34) )
                  v26 = v34;
                v25 = nullptr;
                if ( Ogre::XMLNode::attribToInt(&v35, (const char *)&aXywh[1], &v34) )
                  v25 = (char *)v34;
                v14 = 0;
                if ( Ogre::XMLNode::attribToInt(&v35, (const char *)&aXywh[2], &v34) )
                  v14 = v34;
                v22 = 0;
                if ( Ogre::XMLNode::attribToInt(&v35, (const char *)&aXywh[3], &v34) )
                  v22 = v34;
                v23 = v14 + 2;
                if ( Ogre::XMLNode::attribToInt(&v35, "Advance", &v34) )
                  v23 = v34;
                v29 = (float)v26 / (float)*(int *)(a1 + 56);
                v31 = (float)(int)v25 / (float)*(int *)(a1 + 60);
                v15 = (float)((float)v26 + (float)v14) / (float)*(int *)(a1 + 56);
                v16 = (float)((float)(int)v25 + (float)v22) / (float)*(int *)(a1 + 60);
                v37 = v36;
                v17 = std::map<unsigned int,Ogre::RFontBitmapImpl::BitmapFontGlyph>::operator[](
                        (_DWORD *)(a1 + 124),
                        (unsigned int *)&v37);
                *(_DWORD *)v17 = v26;
                *(_DWORD *)(v17 + 4) = v25;
                *(_DWORD *)(v17 + 12) = v22;
                *(_DWORD *)(v17 + 8) = v14;
                *(_DWORD *)(v17 + 16) = v23;
                *(float *)(v17 + 20) = v29;
                *(float *)(v17 + 24) = v31;
                *(float *)(v17 + 28) = v15;
                *(float *)(v17 + 32) = v16;
              }
              if ( a4 == 1 )
              {
                v18 = (_DWORD *)operator new(4u);
                v19 = &`vtable for'Ogre::CharacterCodingUtf8;
              }
              else
              {
                if ( a4 != 0 )
                {
LABEL_28:
                  *(_DWORD *)(a1 + 68) = a1 + 96;
                  v20 = 1;
                  goto LABEL_29;
                }
                v18 = (_DWORD *)operator new(4u);
                v19 = &`vtable for'Ogre::CharacterCodingGbk;
              }
              *v18 = v19 + 2;
              *(_DWORD *)(a1 + 64) = v18;
              goto LABEL_28;
            }
          }
        }
      }
    }
    v20 = 0;
LABEL_29:
    Ogre::XMLData::~XMLData((Ogre::XMLData *)&v32);
    return v20;
  }
  return 0;
}

