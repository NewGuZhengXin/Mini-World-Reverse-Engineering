// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: tinyobj::material_t

//======================================================================
// tinyobj::material_t::~material_t()
// address: 0x002B6168   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN7tinyobj10material_tD1Ev'
void __fastcall tinyobj::material_t::~material_t(tinyobj::material_t *this)
{
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)this + 96,
    *((_DWORD **)this + 26));
  sub_3BDF80((char *)this + 92);
  sub_3BDF80((char *)this + 88);
  sub_3BDF80((char *)this + 84);
  sub_3BDF80((char *)this + 80);
  sub_3BDF80(this);
}


//======================================================================
// tinyobj::material_t::material_t(tinyobj::material_t const&)
// address: 0x002B721E   size: 0x112 (274 bytes)
//======================================================================
// Alternative name is '_ZN7tinyobj10material_tC1ERKS0_'
tinyobj::material_t *__fastcall tinyobj::material_t::material_t(
        tinyobj::material_t *this,
        const tinyobj::material_t *a2)
{
  int *v4; // r1
  char *v5; // r0
  char *i; // r3

  sub_3BEB1C(this, a2);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  sub_3BEB1C((char *)this + 80, (char *)a2 + 80);
  sub_3BEB1C((char *)this + 84, (char *)a2 + 84);
  sub_3BEB1C((char *)this + 88, (char *)a2 + 88);
  sub_3BEB1C((char *)this + 92, (char *)a2 + 92);
  j_memset((char *)this + 100, 0, 0x10u);
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 27) = (char *)this + 100;
  *((_DWORD *)this + 28) = (char *)this + 100;
  v4 = *((int **)a2 + 26);
  if ( v4 != nullptr )
  {
    v5 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
           (int)this + 96,
           v4,
           (int)this + 100);
    *((_DWORD *)this + 26) = v5;
    for ( i = v5; *((_DWORD *)i + 2) != 0; i = *((char **)i + 2) )
      ;
    *((_DWORD *)this + 27) = i;
    while ( *((_DWORD *)v5 + 3) != 0 )
      v5 = *((char **)v5 + 3);
    *((_DWORD *)this + 28) = v5;
    *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  }
  return this;
}

