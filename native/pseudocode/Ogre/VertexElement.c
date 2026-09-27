// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::VertexElement

//======================================================================
// Ogre::VertexElement::getTypeSize(Ogre::VertexElementType)
// address: 0x00163ED0   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::VertexElement::getTypeSize(unsigned int a1)
{
  int v1; // r3

  v1 = 0;
  if ( a1 <= 9 )
    return byte_42E223[a1];
  return v1;
}


//======================================================================
// Ogre::VertexElement::getTypeCount(Ogre::VertexElementType)
// address: 0x00163EE8   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::VertexElement::getTypeCount(unsigned int a1)
{
  int v1; // r3

  v1 = 0;
  if ( a1 <= 9 )
    return byte_42E22D[a1];
  return v1;
}

