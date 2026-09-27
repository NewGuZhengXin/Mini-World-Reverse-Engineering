// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::UIFaceVert

//======================================================================
// Ogre::UIFaceVert::operator=(Ogre::UIFaceVert const&)
// address: 0x00161490   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall Ogre::UIFaceVert::operator=(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  return result;
}

