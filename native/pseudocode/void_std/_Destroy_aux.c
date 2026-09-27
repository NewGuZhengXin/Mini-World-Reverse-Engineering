// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::_Destroy_aux

//======================================================================
// void std::_Destroy_aux<false>::__destroy<Ogre::InputEvent *>(Ogre::InputEvent *,Ogre::InputEvent *)
// address: 0x001672EC   size: 0x18 (24 bytes)
//======================================================================
void **__fastcall std::_Destroy_aux<false>::__destroy<Ogre::InputEvent *>(void **result, void **a2)
{
  void **i; // r4

  for ( i = result; i != a2; i += 8 )
    result = std::_Vector_base<char>::~_Vector_base(i + 5);
  return result;
}


//======================================================================
// void std::_Destroy_aux<false>::__destroy<ozcollide::Polygon *>(ozcollide::Polygon *,ozcollide::Polygon *)
// address: 0x0016FBEC   size: 0x16 (22 bytes)
//======================================================================
void __fastcall std::_Destroy_aux<false>::__destroy<ozcollide::Polygon *>(
        ozcollide::Polygon *this,
        ozcollide::Polygon *a2)
{
  while ( this != a2 )
  {
    ozcollide::Polygon::~Polygon(this);
    this = (ozcollide::Polygon *)((char *)this + 32);
  }
}


//======================================================================
// void std::_Destroy_aux<false>::__destroy<std::string *>(std::string *,std::string *)
// address: 0x001BDCAC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall std::_Destroy_aux<false>::__destroy<std::string *>(int result, int a2)
{
  int i; // r4

  for ( i = result; i != a2; i += 4 )
    result = sub_3BDF80(i);
  return result;
}


//======================================================================
// void std::_Destroy_aux<false>::__destroy<tagTextHistory *>(tagTextHistory *,tagTextHistory *)
// address: 0x001C9BA4   size: 0x16 (22 bytes)
//======================================================================
int __fastcall std::_Destroy_aux<false>::__destroy<tagTextHistory *>(int result, int a2)
{
  int i; // r4

  for ( i = result; i != a2; i += 8 )
    result = sub_3BDF80(i);
  return result;
}


//======================================================================
// void std::_Destroy_aux<false>::__destroy<std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>> *>(std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>> *,std::vector<tinyobj::vertex_index,std::allocator<tinyobj::vertex_index>> *)
// address: 0x002B6A0C   size: 0x1A (26 bytes)
//======================================================================
void __fastcall std::_Destroy_aux<false>::__destroy<std::vector<tinyobj::vertex_index> *>(void **a1, void **a2)
{
  while ( a1 != a2 )
  {
    if ( *a1 != nullptr )
      operator delete(*a1);
    a1 += 3;
  }
}


//======================================================================
// void std::_Destroy_aux<false>::__destroy<WorldDesc *>(WorldDesc *,WorldDesc *)
// address: 0x002BA152   size: 0x16 (22 bytes)
//======================================================================
void __fastcall std::_Destroy_aux<false>::__destroy<WorldDesc *>(WorldDesc *this, WorldDesc *a2)
{
  while ( this != a2 )
  {
    WorldDesc::~WorldDesc(this);
    this = (WorldDesc *)((char *)this + 184);
  }
}


//======================================================================
// void std::_Destroy_aux<false>::__destroy<BuddyWorldDesc *>(BuddyWorldDesc *,BuddyWorldDesc *)
// address: 0x002D2944   size: 0x16 (22 bytes)
//======================================================================
void __fastcall std::_Destroy_aux<false>::__destroy<BuddyWorldDesc *>(BuddyWorldDesc *this, BuddyWorldDesc *a2)
{
  while ( this != a2 )
  {
    BuddyWorldDesc::~BuddyWorldDesc(this);
    this = (BuddyWorldDesc *)((char *)this + 40);
  }
}

