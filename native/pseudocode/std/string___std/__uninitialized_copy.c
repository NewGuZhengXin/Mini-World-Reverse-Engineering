// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::string___std::__uninitialized_copy

//======================================================================
// std::string * std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>(std::string *,std::string *,std::string *)
// address: 0x001BDD50   size: 0x22 (34 bytes)
//======================================================================
int __fastcall std::__uninitialized_copy<false>::__uninit_copy<std::string *,std::string *>(int a1, int a2, int a3)
{
  while ( a1 != a2 )
  {
    if ( a3 != 0 )
      sub_3BEB1C(a3, a1);
    a1 += 4;
    a3 += 4;
  }
  return a3;
}

