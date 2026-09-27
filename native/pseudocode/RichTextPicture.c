// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RichTextPicture

//======================================================================
// RichTextPicture::~RichTextPicture()
// address: 0x001C3508   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN15RichTextPictureD1Ev'
void __fastcall RichTextPicture::~RichTextPicture(RichTextPicture *this)
{
  *(_DWORD *)this = &off_4592B0;
  sub_3BDF80((char *)this + 44);
  *(_DWORD *)this = &off_459280;
}


//======================================================================
// RichTextPicture::~RichTextPicture()
// address: 0x001C357C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall RichTextPicture::~RichTextPicture(RichTextPicture *this)
{
  RichTextPicture::~RichTextPicture(this);
  operator delete(this);
}

