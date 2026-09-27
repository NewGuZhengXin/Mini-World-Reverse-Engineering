// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: bool_std::operator==

//======================================================================
// bool std::operator==<char,std::char_traits<char>,std::allocator<char>>(std::basic_string<char,std::char_traits<char>,std::allocator<char>> const&,char const*)
// address: 0x002F48C6   size: 0xC (12 bytes)
//======================================================================
bool __fastcall std::operator==<char>(int a1, char *a2)
{
  return sub_3BDD5C(a1, a2) == 0;
}

