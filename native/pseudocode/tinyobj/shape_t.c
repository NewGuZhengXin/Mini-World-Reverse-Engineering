// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: tinyobj::shape_t

//======================================================================
// tinyobj::shape_t::~shape_t()
// address: 0x002B6064   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN7tinyobj7shape_tD1Ev'
void __fastcall tinyobj::shape_t::~shape_t(tinyobj::shape_t *this)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *((void **)this + 13);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 10);
  if ( v3 != nullptr )
    operator delete(v3);
  std::_Vector_base<float>::~_Vector_base((void **)this + 7);
  std::_Vector_base<float>::~_Vector_base((void **)this + 4);
  std::_Vector_base<float>::~_Vector_base((void **)this + 1);
  sub_3BDF80(this);
}

