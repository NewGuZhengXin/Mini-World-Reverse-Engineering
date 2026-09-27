// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RenderPool

//======================================================================
// Ogre::RenderPool::RenderPool(unsigned int,unsigned int)
// address: 0x0014BE10   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10RenderPoolC1Ejj'
Ogre::RenderPool *__fastcall Ogre::RenderPool::RenderPool(Ogre::RenderPool *this, unsigned int a2, size_t a3)
{
  Ogre::ShaderContextPool *v6; // r5
  Ogre::DynamicBufferPool *v7; // r5

  v6 = (Ogre::ShaderContextPool *)operator new(0x8ECu);
  Ogre::ShaderContextPool::ShaderContextPool(v6, a2);
  *((_DWORD *)this + 2) = v6;
  v7 = (Ogre::DynamicBufferPool *)operator new(0x44u);
  Ogre::DynamicBufferPool::DynamicBufferPool(v7, a3);
  *((_DWORD *)this + 3) = v7;
  return this;
}


//======================================================================
// Ogre::RenderPool::~RenderPool()
// address: 0x0014BE40   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10RenderPoolD1Ev'
void __fastcall Ogre::RenderPool::~RenderPool(Ogre::RenderPool *this)
{
  void *v1; // r5
  void *v3; // r5

  v1 = *((void **)this + 2);
  if ( v1 != nullptr )
  {
    Ogre::ShaderContextPool::~ShaderContextPool(*((Ogre::ShaderContextPool **)this + 2));
    operator delete(v1);
  }
  v3 = *((void **)this + 3);
  if ( v3 != nullptr )
  {
    Ogre::DynamicBufferPool::~DynamicBufferPool(*((Ogre::DynamicBufferPool **)this + 3));
    operator delete(v3);
  }
}


//======================================================================
// Ogre::RenderPool::reset(void)
// address: 0x0014BE6C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::RenderPool::reset(Ogre::ShaderContextPool **this)
{
  Ogre::ShaderContextPool::reset(*(this + 2));
  return Ogre::DynamicBufferPool::reset(*(this + 3));
}

