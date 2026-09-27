// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SceneDebugger::stTriangle___std::__uninitialized_copy

//======================================================================
// Ogre::SceneDebugger::stTriangle * std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stTriangle *,Ogre::SceneDebugger::stTriangle *>(Ogre::SceneDebugger::stTriangle *,Ogre::SceneDebugger::stTriangle *,Ogre::SceneDebugger::stTriangle *)
// address: 0x00184C14   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall std::__uninitialized_copy<false>::__uninit_copy<Ogre::SceneDebugger::stTriangle *,Ogre::SceneDebugger::stTriangle *>(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3)
{
  while ( a1 != a2 )
  {
    if ( a3 != nullptr )
      Ogre::SceneDebugger::stTriangle::stTriangle(a3, a1);
    a1 += 10;
    a3 += 10;
  }
  return a3;
}

