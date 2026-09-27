// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: UICursor::CursorDesc___std::__copy_move

//======================================================================
// UICursor::CursorDesc * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<UICursor::CursorDesc>(UICursor::CursorDesc const*,UICursor::CursorDesc const*,UICursor::CursorDesc *)
// address: 0x001B9E00   size: 0x26 (38 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<UICursor::CursorDesc>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  int v4; // r4

  v3 = (a2 - (int)a1) >> 5;
  v4 = -1431655765 * v3;
  if ( -1431655765 * v3 != 0 )
    j_memmove(a3, a1, 32 * v3);
  return (int)a3 + 96 * v4;
}

