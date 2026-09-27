// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RenderLines::LineVertex

//======================================================================
// Ogre::RenderLines::LineVertex::operator=(Ogre::RenderLines::LineVertex const&)
// address: 0x00171806   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall Ogre::RenderLines::LineVertex::operator=(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  return result;
}

