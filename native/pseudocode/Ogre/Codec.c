// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Codec

//======================================================================
// Ogre::Codec::~Codec()
// address: 0x00199C58   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre5CodecD1Ev'
void __fastcall Ogre::Codec::~Codec(Ogre::Codec *this)
{
  *(_DWORD *)this = &off_4588F8;
}


//======================================================================
// Ogre::Codec::~Codec()
// address: 0x00199C68   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Codec::~Codec(Ogre::Codec *this)
{
  Ogre::Codec::~Codec(this);
  operator delete(this);
}


//======================================================================
// Ogre::Codec::getCodec(std::string const&)
// address: 0x00199C7C   size: 0x5E (94 bytes)
//======================================================================
int __fastcall Ogre::Codec::getCodec(int a1, int a2, int a3)
{
  int v3; // r4
  _DWORD *v4; // r5
  int v5; // r3
  _DWORD v7[2]; // [sp+4h] [bp-8h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  sub_3BEB1C(v7, a1);
  Ogre::StringUtil::toLowerCase((int)v7);
  v3 = dword_4C6F08;
  v4 = &unk_4C6F04;
  while ( v3 != 0 )
  {
    if ( sub_3BDC70(v3 + 16, v7) < 0 )
    {
      v5 = *(_DWORD *)(v3 + 12);
      v3 = (int)v4;
    }
    else
    {
      v5 = *(_DWORD *)(v3 + 8);
    }
    v4 = (_DWORD *)v3;
    v3 = v5;
  }
  if ( v4 != (_DWORD *)&unk_4C6F04 && sub_3BDC70(v7, v4 + 4) >= 0 )
    v3 = v4[5];
  sub_3BDF80(v7);
  return v3;
}


//======================================================================
// Ogre::Codec::getExtensions(void)
// address: 0x00199CE0   size: 0x9A (154 bytes)
//======================================================================
Ogre::Codec *__fastcall Ogre::Codec::getExtensions(Ogre::Codec *this)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  char *i; // r5
  char *v6; // r1
  int v8; // [sp+0h] [bp-Ch]
  int v9; // [sp+4h] [bp-8h]

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  if ( (unsigned int)dword_4C6F14 > 0x3FFFFFFF )
    sub_3BD058("vector::reserve");
  if ( dword_4C6F14 != 0 )
  {
    v8 = 4 * dword_4C6F14;
    v2 = operator new(4 * dword_4C6F14);
    v3 = *(_DWORD *)this;
    v4 = v2;
    v9 = *((_DWORD *)this + 1);
    while ( v3 != v9 )
    {
      sub_3BDF80(v3);
      v3 += 4;
    }
    if ( *(_DWORD *)this != 0 )
      operator delete(*(void **)this);
    *(_DWORD *)this = v4;
    *((_DWORD *)this + 1) = v4;
    *((_DWORD *)this + 2) = v4 + v8;
  }
  for ( i = (char *)dword_4C6F0C; i != (char *)&unk_4C6F04; i = (char *)sub_391E10(i) )
  {
    v6 = *((char **)this + 1);
    if ( v6 == *((char **)this + 2) )
    {
      std::vector<std::string>::_M_insert_aux((int *)this, v6, (int)(i + 16));
    }
    else
    {
      if ( v6 != nullptr )
        sub_3BEB1C(*((_DWORD *)this + 1), i + 16);
      *((_DWORD *)this + 1) += 4;
    }
  }
  return this;
}

