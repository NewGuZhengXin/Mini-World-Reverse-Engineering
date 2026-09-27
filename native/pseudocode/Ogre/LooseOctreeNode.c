// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::LooseOctreeNode

//======================================================================
// Ogre::LooseOctreeNode::~LooseOctreeNode()
// address: 0x00182574   size: 0x4E (78 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15LooseOctreeNodeD1Ev'
void __fastcall Ogre::LooseOctreeNode::~LooseOctreeNode(Ogre::LooseOctreeNode *this)
{
  unsigned int i; // r5
  int v3; // r3
  unsigned int j; // r5
  _DWORD **v5; // r0
  void *v6; // r0

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 17);
    if ( i >= (*((_DWORD *)this + 18) - v3) >> 2 )
      break;
    Ogre::BaseObject::release(*(_DWORD **)(4 * i + v3));
  }
  for ( j = 0; ; ++j )
  {
    v5 = *((_DWORD ***)this + 20);
    if ( j >= (*((_DWORD *)this + 21) - (int)v5) >> 2 )
      break;
    Ogre::BaseObject::release(v5[j]);
  }
  if ( v5 != nullptr )
    operator delete(v5);
  v6 = *((void **)this + 17);
  if ( v6 != nullptr )
    operator delete(v6);
}


//======================================================================
// Ogre::LooseOctreeNode::removeMovableObject(Ogre::MovableObject *)
// address: 0x00182804   size: 0x8C (140 bytes)
//======================================================================
Ogre::MovableObject *__fastcall Ogre::LooseOctreeNode::removeMovableObject(
        Ogre::LooseOctreeNode *this,
        Ogre::MovableObject *a2)
{
  Ogre::MovableObject *result; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r2
  int v8; // r1
  int v9; // r3
  int v10; // r2

  *((_DWORD *)a2 + 49) = 0;
  result = (Ogre::MovableObject *)Ogre::BaseObject::isKindOf(
                                    a2,
                                    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI);
  if ( result != nullptr )
  {
    v5 = *((_DWORD *)this + 18);
    v6 = *((_DWORD *)this + 17);
    while ( 1 )
    {
      v7 = v6;
      if ( v6 == v5 )
        break;
      v6 += 4;
      result = *(Ogre::MovableObject **)(v6 - 4);
      if ( result == a2 )
      {
        if ( v7 + 4 != v5 )
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::RenderableObject *>(
            (void *)(v7 + 4),
            v5,
            (void *)v7);
        *((_DWORD *)this + 18) -= 4;
        return (Ogre::MovableObject *)Ogre::BaseObject::release(a2);
      }
    }
  }
  else
  {
    result = (Ogre::MovableObject *)Ogre::BaseObject::isKindOf(
                                      a2,
                                      (const Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI);
    if ( result != nullptr )
    {
      v8 = *((_DWORD *)this + 21);
      v9 = *((_DWORD *)this + 20);
      while ( 1 )
      {
        v10 = v9;
        if ( v9 == v8 )
          break;
        v9 += 4;
        result = *(Ogre::MovableObject **)(v9 - 4);
        if ( result == a2 )
        {
          if ( v10 + 4 != v8 )
            std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::EffectObject *>(
              (void *)(v10 + 4),
              v8,
              (void *)v10);
          *((_DWORD *)this + 21) -= 4;
          do
          {
            --*((_DWORD *)this + 6);
            this = *((Ogre::LooseOctreeNode **)this + 15);
          }
          while ( this != nullptr );
          return (Ogre::MovableObject *)Ogre::BaseObject::release(a2);
        }
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::LooseOctreeNode::addMovableObject(Ogre::MovableObject *)
// address: 0x00182A30   size: 0x7C (124 bytes)
//======================================================================
__int64 __fastcall Ogre::LooseOctreeNode::addMovableObject(__int64 this, int a2)
{
  Ogre::BaseObject *v2; // r4
  int v3; // r5
  __int64 v4; // r0
  int v5; // r2
  int i; // r3
  __int64 v7; // r0
  __int64 v9; // [sp+0h] [bp-Ch] BYREF
  int v10; // [sp+8h] [bp-4h]

  v9 = this;
  v10 = a2;
  v2 = (Ogre::BaseObject *)HIDWORD(this);
  v3 = this;
  if ( Ogre::BaseObject::isKindOf(
         (Ogre::BaseObject *)HIDWORD(this),
         (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI) != 0 )
  {
    (*(void (__fastcall **)(Ogre::BaseObject *))(*(_DWORD *)v2 + 4))(v2);
    HIDWORD(v4) = *(_DWORD *)(v3 + 72);
    v5 = *(_DWORD *)(v3 + 76);
    HIDWORD(v9) = v2;
    if ( HIDWORD(v4) == v5 )
    {
      LODWORD(v4) = v3 + 68;
      std::vector<Ogre::RenderableObject *>::_M_insert_aux(v4, (_DWORD *)&v9 + 1);
    }
    else
    {
      if ( HIDWORD(v4) != 0 )
        *(_DWORD *)HIDWORD(v4) = v2;
      *(_DWORD *)(v3 + 72) += 4;
    }
  }
  else if ( Ogre::BaseObject::isKindOf(v2, (const Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI) != 0 )
  {
    (*(void (__fastcall **)(Ogre::BaseObject *))(*(_DWORD *)v2 + 4))(v2);
    for ( i = v3; i != 0; i = *(_DWORD *)(i + 60) )
      ++*(_DWORD *)(i + 24);
    LODWORD(v7) = v3 + 80;
    HIDWORD(v7) = (char *)&v9 + 4;
    HIDWORD(v9) = v2;
    std::vector<Ogre::EffectObject *>::push_back(v7);
  }
  *((_DWORD *)v2 + 49) = v3;
  return v9;
}

