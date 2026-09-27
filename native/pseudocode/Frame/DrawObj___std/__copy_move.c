// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Frame::DrawObj___std::__copy_move

//======================================================================
// Frame::DrawObj * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame::DrawObj>(Frame::DrawObj const*,Frame::DrawObj const*,Frame::DrawObj *)
// address: 0x001BBDC2   size: 0x1E (30 bytes)
//======================================================================
int __fastcall std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Frame::DrawObj>(
        void *a1,
        int a2,
        void *a3)
{
  int v3; // r1
  size_t v5; // r4

  v3 = (a2 - (int)a1) >> 3;
  v5 = 8 * v3;
  if ( v3 != 0 )
    j_memmove(a3, a1, v5);
  return (int)a3 + v5;
}

