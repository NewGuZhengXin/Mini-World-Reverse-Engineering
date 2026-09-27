// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RichTextObject

//======================================================================
// RichTextObject::~RichTextObject()
// address: 0x001C34F8   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN14RichTextObjectD1Ev'
void __fastcall RichTextObject::~RichTextObject(RichTextObject *this)
{
  *(_DWORD *)this = &off_459280;
}


//======================================================================
// RichTextObject::~RichTextObject()
// address: 0x001C3544   size: 0x16 (22 bytes)
//======================================================================
void __fastcall RichTextObject::~RichTextObject(RichTextObject *this)
{
  *(_DWORD *)this = &off_459280;
  operator delete(this);
}

