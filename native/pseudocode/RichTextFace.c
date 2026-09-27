// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RichTextFace

//======================================================================
// RichTextFace::~RichTextFace()
// address: 0x001C3534   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12RichTextFaceD1Ev'
void __fastcall RichTextFace::~RichTextFace(RichTextFace *this)
{
  *(_DWORD *)this = &off_459280;
}


//======================================================================
// RichTextFace::~RichTextFace()
// address: 0x001C3560   size: 0x16 (22 bytes)
//======================================================================
void __fastcall RichTextFace::~RichTextFace(RichTextFace *this)
{
  *(_DWORD *)this = &off_459280;
  operator delete(this);
}

