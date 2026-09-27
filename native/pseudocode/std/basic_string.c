// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::basic_string

//======================================================================
// std::basic_string<char,std::char_traits<char>,std::allocator<char>> std::operator+<char,std::char_traits<char>,std::allocator<char>>(std::basic_string<char,std::char_traits<char>,std::allocator<char>> const&,char const*)
// address: 0x0016E8A4   size: 0x16 (22 bytes)
//======================================================================
int __fastcall std::operator+<char>(int a1, int a2, char *a3)
{
  sub_3BEB1C(a1, a2);
  sub_3BE948(a1, a3);
  return a1;
}

