// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CullResult

//======================================================================
// Ogre::CullResult::CullResult(void)
// address: 0x0015E9A4   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10CullResultC2Ev'
Ogre::CullResult *__fastcall Ogre::CullResult::CullResult(Ogre::CullResult *this)
{
  Ogre::CullFrustum::CullFrustum((Ogre::CullResult *)((char *)this + 4));
  *((_DWORD *)this + 138) = 0;
  *((_DWORD *)this + 139) = 0;
  *((_DWORD *)this + 140) = 0;
  return this;
}


//======================================================================
// Ogre::CullResult::~CullResult()
// address: 0x0015E9C4   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10CullResultD2Ev'
void __fastcall Ogre::CullResult::~CullResult(Ogre::CullResult *this)
{
  void *v2; // r0

  v2 = *((void **)this + 138);
  if ( v2 != nullptr )
    operator delete(v2);
  Ogre::CullFrustum::~CullFrustum((Ogre::CullResult *)((char *)this + 4));
}


//======================================================================
// Ogre::CullResult::getRenderPassRequired(Ogre::RenderPassDesc &)
// address: 0x0015E9E0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::CullResult::getRenderPassRequired(int result, int a2)
{
  int v2; // r5
  unsigned int i; // r4
  int v5; // r3
  int v6; // r0

  v2 = result;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v2 + 552);
    if ( i >= (*(_DWORD *)(v2 + 556) - v5) >> 4 )
      break;
    v6 = *(_DWORD *)(v5 + 16 * i + 4);
    result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 96))(v6, a2);
  }
  return result;
}


//======================================================================
// Ogre::CullResult::addRenderable(Ogre::GameScene *,Ogre::RenderableObject *,int,void *)
// address: 0x0015F0D0   size: 0x4C (76 bytes)
//======================================================================
char *__fastcall Ogre::CullResult::addRenderable(
        Ogre::CullResult *this,
        Ogre::GameScene *a2,
        Ogre::MovableObject **a3,
        int a4,
        Ogre::GameScene *a5)
{
  char *result; // r0
  Ogre::GameScene **v10; // r1
  Ogre::GameScene **v11; // r5
  Ogre::MovableObject **v12; // r5
  Ogre::GameScene *v13; // r6
  Ogre::GameScene *v14; // [sp+0h] [bp-14h] BYREF
  Ogre::MovableObject **v15; // [sp+4h] [bp-10h]
  Ogre::GameScene *v16; // [sp+8h] [bp-Ch]
  int v17; // [sp+Ch] [bp-8h]

  Ogre::MovableObject::getTransparent(a3);
  v15 = a3;
  result = (char *)this + 552;
  v10 = *((Ogre::GameScene ***)this + 139);
  v11 = *((Ogre::GameScene ***)this + 140);
  v14 = a2;
  v17 = a4;
  v16 = a5;
  if ( v10 == v11 )
    return (char *)std::vector<Ogre::CullResult::Record>::_M_insert_aux((int)result, (int)v10, &v14);
  if ( v10 != nullptr )
  {
    v12 = v15;
    v13 = v16;
    *v10 = v14;
    v10[1] = (Ogre::GameScene *)v12;
    v10[2] = v13;
    v10[3] = (Ogre::GameScene *)v17;
  }
  *((_DWORD *)result + 1) += 16;
  return result;
}


//======================================================================
// Ogre::CullResult::startCull(Ogre::Camera *)
// address: 0x0015F220   size: 0x4A (74 bytes)
//======================================================================
int __fastcall Ogre::CullResult::startCull(Ogre::CullResult *this, Ogre::Camera *a2)
{
  Ogre::CullFrustum *v2; // r5
  float *ViewMatrix; // r7
  float *ProjectMatrix; // r0
  int result; // r0
  int v8; // r3
  _BYTE v9[68]; // [sp+0h] [bp-44h] BYREF

  *(_DWORD *)this = a2;
  v2 = (Ogre::CullResult *)((char *)this + 4);
  ViewMatrix = (float *)Ogre::Camera::getViewMatrix(a2);
  ProjectMatrix = (float *)Ogre::Camera::getProjectMatrix(a2);
  Ogre::operator*((Ogre::Matrix4 *)v9, ViewMatrix, ProjectMatrix);
  result = Ogre::CullFrustum::createFromMatrix(v2, (const Ogre::Matrix4 *)v9);
  v8 = *((_DWORD *)this + 138);
  if ( (*((_DWORD *)this + 139) - v8) >> 4 != 0 )
    *((_DWORD *)this + 139) = v8;
  return result;
}

