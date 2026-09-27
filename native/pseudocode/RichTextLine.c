// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: RichTextLine

//======================================================================
// RichTextLine::~RichTextLine()
// address: 0x001C35DA   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN12RichTextLineD1Ev'
void __fastcall RichTextLine::~RichTextLine(RichTextLine *this)
{
  char *v1; // r5
  char *v3; // r6
  int v4; // r0
  char *i; // r0
  char *v6; // r5

  v1 = *((char **)this + 4);
  v3 = (char *)this + 16;
  while ( v1 != v3 )
  {
    v4 = *((_DWORD *)v1 + 2);
    if ( v4 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    v1 = *(char **)v1;
  }
  for ( i = *((char **)this + 4); i != v3; i = v6 )
  {
    v6 = *(char **)i;
    operator delete(i);
  }
}

