// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RichTextText

//======================================================================
// RichTextText::~RichTextText()
// address: 0x001C3590   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN12RichTextTextD1Ev'
void __fastcall RichTextText::~RichTextText(RichTextText *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_459290;
  v2 = *((void **)this + 8);
  if ( v2 != nullptr )
    operator delete[](v2);
  sub_3BDF80((char *)this + 40);
  *(_DWORD *)this = &off_459280;
}


//======================================================================
// RichTextText::~RichTextText()
// address: 0x001C35C8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall RichTextText::~RichTextText(RichTextText *this)
{
  RichTextText::~RichTextText(this);
  operator delete(this);
}

