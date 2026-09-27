// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::_Rb_tree_node

//======================================================================
// std::_Rb_tree_node<std::pair<std::string const,std::string>> * std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_create_node<std::pair<std::string const,std::string> const&>(std::pair<std::string const,std::string> const&)
// address: 0x002B7148   size: 0x54 (84 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeISsSt4pairIKSsSsESt10_Select1stIS2_ESt4lessISsESaIS2_EE14_M_create_nodeIJRKS2_EEEPSt13_Rb_tree_nodeIS2_EDpOT_'
char *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_create_node<std::pair<std::string const,std::string> const&>(
        int a1,
        int a2)
{
  char *v3; // r0
  char *v4; // r4

  v3 = (char *)operator new(0x18u);
  v4 = v3;
  if ( v3 != nullptr )
  {
    j_memset(v3, 0, 0x10u);
    sub_3BEB1C(v4 + 16, a2);
    sub_3BEB1C(v4 + 20, a2 + 4);
  }
  return v4;
}

