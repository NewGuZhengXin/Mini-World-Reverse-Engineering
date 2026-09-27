// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ResLoadThread

//======================================================================
// Ogre::ResLoadThread::~ResLoadThread()
// address: 0x0017DCA4   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13ResLoadThreadD1Ev'
void __fastcall Ogre::ResLoadThread::~ResLoadThread(Ogre::ResLoadThread *this)
{
  void **v2; // r5
  unsigned int v3; // r6
  void *v4; // r0

  *(_DWORD *)this = &off_4579E0;
  Ogre::LockSection::~LockSection((pthread_mutex_t *)this + 3);
  v2 = *((void ***)this + 13);
  if ( *((_DWORD *)this + 8) != 0 )
  {
    v3 = *((_DWORD *)this + 17) + 4;
    while ( (unsigned int)v2 < v3 )
    {
      v4 = *v2++;
      operator delete(v4);
    }
    operator delete(*((void **)this + 8));
  }
  Ogre::OSThread::~OSThread(this);
}


//======================================================================
// Ogre::ResLoadThread::~ResLoadThread()
// address: 0x0017DCE4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ResLoadThread::~ResLoadThread(Ogre::ResLoadThread *this)
{
  Ogre::ResLoadThread::~ResLoadThread(this);
  operator delete(this);
}


//======================================================================
// Ogre::ResLoadThread::ResLoadThread(Ogre::ResourceManager *)
// address: 0x0017DCF8   size: 0x72 (114 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13ResLoadThreadC1EPNS_15ResourceManagerE'
pthread_mutex_t *__fastcall Ogre::ResLoadThread::ResLoadThread(pthread_mutex_t *this, Ogre::ResourceManager *a2)
{
  int v4; // r0
  int v5; // r5
  int *v6; // r5
  int v7; // r2
  int v8; // r3
  int v9; // r3

  Ogre::OSThread::OSThread((Ogre::OSThread *)this);
  *((_DWORD *)this + 7) = a2;
  this->__lock = (int)&off_4579E0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 9) = 8;
  v4 = operator new(0x20u);
  v5 = *((_DWORD *)this + 9);
  *((_DWORD *)this + 8) = v4;
  v6 = (int *)(v4 + 4 * ((unsigned int)(v5 - 1) >> 1));
  *v6 = operator new(0x200u);
  *((_DWORD *)this + 13) = v6;
  v7 = *v6;
  v8 = *v6 + 512;
  *((_DWORD *)this + 17) = v6;
  *((_DWORD *)this + 11) = v7;
  *((_DWORD *)this + 12) = v8;
  v9 = *v6;
  *((_DWORD *)this + 10) = v7;
  *((_DWORD *)this + 15) = v9;
  *((_DWORD *)this + 16) = v9 + 512;
  *((_DWORD *)this + 14) = v9;
  Ogre::LockSection::LockSection(this + 3);
  return this;
}


//======================================================================
// Ogre::ResLoadThread::_run(void)
// address: 0x0017E1BC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall Ogre::ResLoadThread::_run(Ogre::ResLoadThread *this, Ogre::LockSection *a2, Ogre::LockSection *a3)
{
  int *v4; // r3
  int v6; // r5
  int *v7; // r3
  int **v8; // r2
  int v9; // r2
  Ogre::LockSection *v10; // r2
  Ogre::LockSection *v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v11, (Ogre::ResLoadThread *)((char *)this + 72));
  v4 = *((int **)this + 10);
  if ( *((int **)this + 14) == v4 )
  {
    Ogre::LockFunctor::~LockFunctor(v11);
    return 1;
  }
  else
  {
    v6 = *v4;
    if ( v4 == (int *)(*((_DWORD *)this + 12) - 4) )
    {
      operator delete(*((void **)this + 11));
      v8 = (int **)(*((_DWORD *)this + 13) + 4);
      *((_DWORD *)this + 13) = v8;
      v7 = *v8;
      v9 = (int)(*v8 + 128);
      *((_DWORD *)this + 11) = v7;
      *((_DWORD *)this + 12) = v9;
    }
    else
    {
      v7 = v4 + 1;
    }
    *((_DWORD *)this + 10) = v7;
    Ogre::LockFunctor::~LockFunctor(v11);
    Ogre::ResourceManager::atomicLoadRecord(*((_DWORD **)this + 7), v6, v10);
    return 2;
  }
}


//======================================================================
// Ogre::ResLoadThread::addRecord(Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::Element *)
// address: 0x0017E3D0   size: 0x112 (274 bytes)
//======================================================================
void __fastcall Ogre::ResLoadThread::addRecord(int a1, int a2)
{
  _DWORD *v3; // r3
  int v4; // r3
  int v5; // r1
  int v6; // r2
  unsigned int v7; // r3
  int *v8; // r7
  int v9; // r5
  int *v10; // r5
  int v11; // r1
  int v12; // r1
  int v13; // r2
  unsigned int v14; // r6
  int v15; // r0
  int v16; // r7
  int v17; // r3
  int *v18; // r5
  int v19; // r3
  int v20; // r5
  _DWORD *v21; // r3
  int *v22; // r2
  int v23; // r2
  int v24; // [sp+0h] [bp-14h]
  Ogre::LockSection *v26[2]; // [sp+Ch] [bp-8h] BYREF

  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v26, (Ogre::LockSection *)(a1 + 72));
  v3 = *(_DWORD **)(a1 + 56);
  if ( v3 == (_DWORD *)(*(_DWORD *)(a1 + 64) - 4) )
  {
    v5 = *(_DWORD *)(a1 + 68);
    v6 = *(_DWORD *)(a1 + 32);
    v7 = *(_DWORD *)(a1 + 36);
    if ( v7 - ((v5 - v6) >> 2) <= 1 )
    {
      v8 = *(int **)(a1 + 52);
      v24 = ((v5 - (int)v8) >> 2) + 1;
      v9 = ((v5 - (int)v8) >> 2) + 2;
      if ( v7 <= 2 * v9 )
      {
        v13 = 1;
        if ( v7 != 0 )
          v13 = *(_DWORD *)(a1 + 36);
        v14 = v7 + 2 + v13;
        if ( v14 > 0x3FFFFFFF )
          sub_3BCEB4(2 * v9);
        v15 = operator new(4 * v14);
        v10 = (int *)(v15 + 4 * ((v14 - v9) >> 1));
        v16 = v15;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::Element **>(
          *(void **)(a1 + 52),
          *(_DWORD *)(a1 + 68) + 4,
          v10);
        operator delete(*(void **)(a1 + 32));
        *(_DWORD *)(a1 + 32) = v16;
        *(_DWORD *)(a1 + 36) = v14;
      }
      else
      {
        v10 = (int *)(v6 + 4 * ((v7 - v9) >> 1));
        v11 = v5 + 4;
        if ( v10 >= v8 )
        {
          v12 = v11 - (_DWORD)v8;
          if ( v12 >> 2 != 0 )
            j_memmove(&v10[v24 - (v12 >> 2)], v8, 4 * (v12 >> 2));
        }
        else
        {
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::HashTable<Ogre::FixedString,Ogre::ResLoadRecord,Ogre::FixedStringHashCoder>::Element **>(
            v8,
            v11,
            v10);
        }
      }
      *(_DWORD *)(a1 + 52) = v10;
      v17 = *v10;
      *(_DWORD *)(a1 + 44) = *v10;
      *(_DWORD *)(a1 + 48) = v17 + 512;
      v18 = &v10[v24 - 1];
      *(_DWORD *)(a1 + 68) = v18;
      v19 = *v18;
      *(_DWORD *)(a1 + 60) = *v18;
      *(_DWORD *)(a1 + 64) = v19 + 512;
    }
    v20 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(v20 + 4) = operator new(0x200u);
    v21 = *(_DWORD **)(a1 + 56);
    if ( v21 != nullptr )
      *v21 = a2;
    v22 = (int *)(*(_DWORD *)(a1 + 68) + 4);
    *(_DWORD *)(a1 + 68) = v22;
    v4 = *v22;
    v23 = *v22 + 512;
    *(_DWORD *)(a1 + 60) = v4;
    *(_DWORD *)(a1 + 64) = v23;
  }
  else
  {
    if ( v3 != nullptr )
      *v3 = a2;
    v4 = *(_DWORD *)(a1 + 56) + 4;
  }
  *(_DWORD *)(a1 + 56) = v4;
  Ogre::LockFunctor::~LockFunctor(v26);
}

