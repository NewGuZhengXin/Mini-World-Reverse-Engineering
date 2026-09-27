// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::_List_base

//======================================================================
// std::_List_base<Ogre::Vector3,std::allocator<Ogre::Vector3>>::_M_clear(void)
// address: 0x00157612   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall std::_List_base<Ogre::Vector3>::_M_clear(_DWORD **a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r5

  for ( result = *a1; result != a1; result = v3 )
  {
    v3 = (_DWORD *)*result;
    operator delete(result);
  }
  return result;
}


//======================================================================
// std::_List_base<RichTextLine *,std::allocator<RichTextLine *>>::_M_clear(void)
// address: 0x001C9A10   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall std::_List_base<RichTextLine *>::_M_clear(_DWORD **a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r5

  for ( result = *a1; result != a1; result = v3 )
  {
    v3 = (_DWORD *)*result;
    operator delete(result);
  }
  return result;
}

