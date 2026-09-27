// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TiXmlAttributeSet

//======================================================================
// TiXmlAttributeSet::TiXmlAttributeSet(void)
// address: 0x001DB938   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN17TiXmlAttributeSetC1Ev'
void __fastcall TiXmlAttributeSet::TiXmlAttributeSet(TiXmlAttributeSet *this)
{
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 1) = -1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = this;
  *(_DWORD *)this = &off_4597B8;
  *((_DWORD *)this + 7) = this;
  *((_DWORD *)this + 5) = &TiXmlString::nullrep_;
  *((_DWORD *)this + 6) = &TiXmlString::nullrep_;
}


//======================================================================
// TiXmlAttributeSet::~TiXmlAttributeSet()
// address: 0x001DB9A0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN17TiXmlAttributeSetD1Ev'
void __fastcall TiXmlAttributeSet::~TiXmlAttributeSet(void **this)
{
  TiXmlAttribute::~TiXmlAttribute(this);
}


//======================================================================
// TiXmlAttributeSet::Add(TiXmlAttribute *)
// address: 0x001DB9AC   size: 0xE (14 bytes)
//======================================================================
int __fastcall TiXmlAttributeSet::Add(int this, TiXmlAttribute *a2)
{
  *((_DWORD *)a2 + 8) = this;
  *((_DWORD *)a2 + 7) = *(_DWORD *)(this + 28);
  *(_DWORD *)(*(_DWORD *)(this + 28) + 32) = a2;
  *(_DWORD *)(this + 28) = a2;
  return this;
}


//======================================================================
// TiXmlAttributeSet::Remove(TiXmlAttribute *)
// address: 0x001DB9BA   size: 0x26 (38 bytes)
//======================================================================
TiXmlAttribute *__fastcall TiXmlAttributeSet::Remove(TiXmlAttribute *this, TiXmlAttribute *a2)
{
  TiXmlAttribute *i; // r3

  for ( i = *((TiXmlAttribute **)this + 8); i != this; i = *((TiXmlAttribute **)i + 8) )
  {
    if ( i == a2 )
    {
      *(_DWORD *)(*((_DWORD *)i + 7) + 32) = *((_DWORD *)i + 8);
      *(_DWORD *)(*((_DWORD *)i + 8) + 28) = *((_DWORD *)i + 7);
      *((_DWORD *)i + 8) = 0;
      *((_DWORD *)i + 7) = 0;
      return this;
    }
  }
  return this;
}


//======================================================================
// TiXmlAttributeSet::Find(char const*)const
// address: 0x001DBA42   size: 0x26 (38 bytes)
//======================================================================
TiXmlAttributeSet *__fastcall TiXmlAttributeSet::Find(TiXmlAttributeSet *this, const char *a2)
{
  TiXmlAttributeSet *i; // r4

  for ( i = *((TiXmlAttributeSet **)this + 8); ; i = *((TiXmlAttributeSet **)i + 8) )
  {
    if ( i == this )
      return nullptr;
    if ( j_strcmp((const char *)(*((_DWORD *)i + 5) + 8), a2) == 0 )
      break;
  }
  return i;
}

