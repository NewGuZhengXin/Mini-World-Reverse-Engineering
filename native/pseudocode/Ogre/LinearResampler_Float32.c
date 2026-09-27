// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LinearResampler_Float32

//======================================================================
// Ogre::LinearResampler_Float32::scale(Ogre::PixelBox const&,Ogre::PixelBox const&)
// address: 0x00150A7C   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall Ogre::LinearResampler_Float32::scale(
        Ogre::LinearResampler_Float32 *this,
        const Ogre::PixelBox *a2,
        const Ogre::PixelBox *a3)
{
  Ogre::PixelUtil::getNumElemBytes(*((_DWORD *)this + 7));
  Ogre::PixelUtil::getNumElemBytes(*((_DWORD *)a2 + 7));
  return sub_150B22();
}

