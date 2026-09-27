// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SceneDebugger::stLine___std::__uninitialized_copy

//======================================================================
// Ogre::SceneDebugger::stLine * std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stLine *,Ogre::SceneDebugger::stLine *>(Ogre::SceneDebugger::stLine *,Ogre::SceneDebugger::stLine *,Ogre::SceneDebugger::stLine *)
// address: 0x00184540   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stLine *,Ogre::SceneDebugger::stLine *>(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3)
{
  while ( a1 != a2 )
  {
    if ( a3 != nullptr )
      Ogre::SceneDebugger::stLine::stLine(a3, a1);
    a1 += 7;
    a3 += 7;
  }
  return a3;
}

