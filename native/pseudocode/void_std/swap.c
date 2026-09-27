// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std::swap

//======================================================================
// void std::swap<Ogre::ModelInstanceData>(Ogre::ModelInstanceData &,Ogre::ModelInstanceData &)
// address: 0x0019FC4A   size: 0x24 (36 bytes)
//======================================================================
int __fastcall std::swap<Ogre::ModelInstanceData>(int a1, int a2)
{
  _BYTE v5[64]; // [sp+0h] [bp-40h] BYREF

  Ogre::ModelInstanceData::ModelInstanceData((int)v5, a1);
  Ogre::ModelInstanceData::operator=(a1, a2);
  return Ogre::ModelInstanceData::operator=(a2, (int)v5);
}

