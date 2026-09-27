// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenTerrainThread

//======================================================================
// GenTerrainThread::popResult(ChunkIndex &,unsigned char *&)
// address: 0x002EA7D8   size: 0x6E (110 bytes)
//======================================================================
int __fastcall GenTerrainThread::popResult(int a1, _DWORD *a2, _DWORD *a3)
{
  Ogre::LockSection *v4; // r0
  int *v7; // r3
  int v8; // r7
  _DWORD *v9; // r3
  _DWORD *v10; // r2
  int v11; // r2
  int v12; // r4
  int v14; // [sp+4h] [bp-18h]
  int v15; // [sp+8h] [bp-14h]
  int v16; // [sp+Ch] [bp-10h]
  Ogre::LockSection *v17; // [sp+14h] [bp-8h] BYREF

  v4 = (Ogre::LockSection *)(a1 + 32);
  v17 = v4;
  if ( v4 != nullptr )
    Ogre::LockSection::Lock((pthread_mutex_t *)v4);
  v7 = *(int **)(a1 + 84);
  if ( *(int **)(a1 + 100) == v7 )
  {
    v12 = 0;
  }
  else
  {
    v15 = v7[1];
    v8 = *v7;
    v14 = v7[2];
    v16 = v7[3];
    if ( v7 == (int *)(*(_DWORD *)(a1 + 92) - 16) )
    {
      operator delete(*(void **)(a1 + 88));
      v10 = (_DWORD *)(*(_DWORD *)(a1 + 96) + 4);
      *(_DWORD *)(a1 + 96) = v10;
      v9 = (_DWORD *)*v10;
      v11 = *v10 + 512;
      *(_DWORD *)(a1 + 88) = v9;
      *(_DWORD *)(a1 + 92) = v11;
    }
    else
    {
      v9 = v7 + 4;
    }
    *(_DWORD *)(a1 + 84) = v9;
    *a2 = v8;
    a2[1] = v15;
    v12 = v14;
    *a3 = v16;
  }
  Ogre::LockFunctor::~LockFunctor(&v17);
  return v12;
}


//======================================================================
// GenTerrainThread::GenTerrainThread(ChunkProvider *)
// address: 0x002EADB0   size: 0xC4 (196 bytes)
//======================================================================
// Alternative name is '_ZN16GenTerrainThreadC1EP13ChunkProvider'
void __fastcall GenTerrainThread::GenTerrainThread(GenTerrainThread *this, ChunkProvider *a2)
{
  int v4; // r0
  int v5; // r6
  int *v6; // r6
  int v7; // r2
  int v8; // r3
  int v9; // r3
  int v10; // r0
  int v11; // r6
  int *v12; // r6
  int v13; // r2
  int v14; // r3
  int v15; // r3

  Ogre::OSThread::OSThread(this);
  *((_DWORD *)this + 7) = a2;
  *(_DWORD *)this = &off_461F10;
  Ogre::LockSection::LockSection((pthread_mutex_t *)((char *)this + 32));
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 10) = 8;
  v4 = operator new(0x20u);
  v5 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 9) = v4;
  v6 = (int *)(v4 + 4 * ((unsigned int)(v5 - 1) >> 1));
  *v6 = operator new(0x200u);
  *((_DWORD *)this + 14) = v6;
  v7 = *v6;
  v8 = *v6 + 512;
  *((_DWORD *)this + 12) = *v6;
  *((_DWORD *)this + 13) = v8;
  *((_DWORD *)this + 18) = v6;
  v9 = *v6;
  *((_DWORD *)this + 11) = v7;
  *((_DWORD *)this + 16) = v9;
  *((_DWORD *)this + 15) = v9;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 17) = v9 + 512;
  *((_DWORD *)this + 20) = 8;
  v10 = operator new(0x20u);
  v11 = *((_DWORD *)this + 20);
  *((_DWORD *)this + 19) = v10;
  v12 = (int *)(v10 + 4 * ((unsigned int)(v11 - 1) >> 1));
  *v12 = operator new(0x200u);
  *((_DWORD *)this + 24) = v12;
  v13 = *v12;
  v14 = *v12 + 512;
  *((_DWORD *)this + 28) = v12;
  *((_DWORD *)this + 22) = v13;
  *((_DWORD *)this + 23) = v14;
  v15 = *v12;
  *((_DWORD *)this + 21) = v13;
  *((_DWORD *)this + 26) = v15;
  *((_DWORD *)this + 27) = v15 + 512;
  *((_DWORD *)this + 25) = v15;
}


//======================================================================
// GenTerrainThread::~GenTerrainThread()
// address: 0x002EAF54   size: 0x78 (120 bytes)
//======================================================================
// Alternative name is '_ZN16GenTerrainThreadD1Ev'
void __fastcall GenTerrainThread::~GenTerrainThread(GenTerrainThread *this)
{
  int v1; // r5
  int v2; // r7
  int v3; // r6
  void *v5; // r0
  void *v6; // r0
  void **v7; // r5
  unsigned int v8; // r6
  void *v9; // r0

  v1 = *((_DWORD *)this + 21);
  v2 = *((_DWORD *)this + 23);
  v3 = *((_DWORD *)this + 24);
  *(_DWORD *)this = &off_461F10;
  while ( v1 != *((_DWORD *)this + 25) )
  {
    v5 = *(void **)(v1 + 8);
    if ( v5 != nullptr )
      operator delete[](v5);
    v6 = *(void **)(v1 + 12);
    if ( v6 != nullptr )
      operator delete[](v6);
    v1 += 16;
    if ( v2 == v1 )
    {
      v1 = *(_DWORD *)(v3 + 4);
      v2 = v1 + 512;
      v3 += 4;
    }
  }
  v7 = *((void ***)this + 24);
  if ( *((_DWORD *)this + 19) != 0 )
  {
    v8 = *((_DWORD *)this + 28) + 4;
    while ( (unsigned int)v7 < v8 )
    {
      v9 = *v7++;
      operator delete(v9);
    }
    operator delete(*((void **)this + 19));
  }
  std::deque<ChunkIndex>::~deque((int)this + 36);
  Ogre::LockSection::~LockSection((pthread_mutex_t *)((char *)this + 32));
  Ogre::OSThread::~OSThread(this);
}


//======================================================================
// GenTerrainThread::~GenTerrainThread()
// address: 0x002EAFD0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall GenTerrainThread::~GenTerrainThread(GenTerrainThread *this)
{
  GenTerrainThread::~GenTerrainThread(this);
  operator delete(this);
}


//======================================================================
// GenTerrainThread::addRequest(ChunkIndex)
// address: 0x002EBB70   size: 0x122 (290 bytes)
//======================================================================
void __fastcall GenTerrainThread::addRequest(int a1, int a2, int a3)
{
  Ogre::LockSection *v4; // r0
  _DWORD *v5; // r3
  int v6; // r3
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r3
  int *v10; // r6
  int v11; // r5
  int *v12; // r5
  int v13; // r1
  int v14; // r1
  int v15; // r2
  unsigned int v16; // r6
  int v17; // r0
  int v18; // r3
  int *v19; // r5
  int v20; // r3
  int v21; // r5
  _DWORD *v22; // r3
  int *v23; // r2
  int v24; // r2
  int v25; // [sp+0h] [bp-8h]
  int v26; // [sp+4h] [bp-4h]
  Ogre::LockSection *v29; // [sp+14h] [bp+Ch] BYREF

  v4 = (Ogre::LockSection *)(a1 + 32);
  v29 = v4;
  if ( v4 != nullptr )
    Ogre::LockSection::Lock((pthread_mutex_t *)v4);
  v5 = *(_DWORD **)(a1 + 60);
  if ( v5 == (_DWORD *)(*(_DWORD *)(a1 + 68) - 8) )
  {
    v7 = *(_DWORD *)(a1 + 72);
    v8 = *(_DWORD *)(a1 + 36);
    v9 = *(_DWORD *)(a1 + 40);
    if ( v9 - ((v7 - v8) >> 2) <= 1 )
    {
      v10 = *(int **)(a1 + 56);
      v25 = ((v7 - (int)v10) >> 2) + 1;
      v11 = ((v7 - (int)v10) >> 2) + 2;
      if ( v9 <= 2 * v11 )
      {
        v15 = 1;
        if ( v9 != 0 )
          v15 = *(_DWORD *)(a1 + 40);
        v16 = v9 + 2 + v15;
        if ( v16 > 0x3FFFFFFF )
          sub_3BCEB4(2 * v11);
        v17 = operator new(4 * v16);
        v12 = (int *)(v17 + 4 * ((v16 - v11) >> 1));
        v26 = v17;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ChunkIndex *>(
          *(void **)(a1 + 56),
          *(_DWORD *)(a1 + 72) + 4,
          v12);
        operator delete(*(void **)(a1 + 36));
        *(_DWORD *)(a1 + 40) = v16;
        *(_DWORD *)(a1 + 36) = v26;
      }
      else
      {
        v12 = (int *)(v8 + 4 * ((v9 - v11) >> 1));
        v13 = v7 + 4;
        if ( v12 >= v10 )
        {
          v14 = v13 - (_DWORD)v10;
          if ( v14 >> 2 != 0 )
            j_memmove(&v12[v25 - (v14 >> 2)], v10, 4 * (v14 >> 2));
        }
        else
        {
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ChunkIndex *>(v10, v13, v12);
        }
      }
      *(_DWORD *)(a1 + 56) = v12;
      v18 = *v12;
      *(_DWORD *)(a1 + 48) = *v12;
      *(_DWORD *)(a1 + 52) = v18 + 512;
      v19 = &v12[v25 - 1];
      *(_DWORD *)(a1 + 72) = v19;
      v20 = *v19;
      *(_DWORD *)(a1 + 64) = *v19;
      *(_DWORD *)(a1 + 68) = v20 + 512;
    }
    v21 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(v21 + 4) = operator new(0x200u);
    v22 = *(_DWORD **)(a1 + 60);
    if ( v22 != nullptr )
    {
      *v22 = a2;
      v22[1] = a3;
    }
    v23 = (int *)(*(_DWORD *)(a1 + 72) + 4);
    *(_DWORD *)(a1 + 72) = v23;
    v6 = *v23;
    v24 = *v23 + 512;
    *(_DWORD *)(a1 + 64) = v6;
    *(_DWORD *)(a1 + 68) = v24;
  }
  else
  {
    if ( v5 != nullptr )
    {
      *v5 = a2;
      v5[1] = a3;
    }
    v6 = *(_DWORD *)(a1 + 60) + 8;
  }
  *(_DWORD *)(a1 + 60) = v6;
  Ogre::LockFunctor::~LockFunctor(&v29);
}


//======================================================================
// GenTerrainThread::_run(void)
// address: 0x002EBCE8   size: 0x188 (392 bytes)
//======================================================================
int __fastcall GenTerrainThread::_run(GenTerrainThread *this)
{
  int v2; // r3
  Ogre::LockSection *v4; // r6
  int v5; // r7
  int v6; // r3
  int *v7; // r2
  int v8; // r2
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r6
  int v12; // r3
  int v13; // r1
  int v14; // r2
  unsigned int v15; // r3
  int *v16; // r7
  int v17; // r5
  int *v18; // r5
  int v19; // r1
  int v20; // r2
  int v21; // r2
  unsigned int v22; // r6
  int v23; // r0
  int v24; // r7
  int v25; // r3
  int *v26; // r5
  int v27; // r3
  int v28; // r5
  _DWORD *v29; // r3
  int v30; // r5
  int v31; // r6
  int *v32; // r2
  int v33; // r2
  int v34; // [sp+8h] [bp-1Ch]
  Ogre::LockSection *v35; // [sp+Ch] [bp-18h]
  Ogre::LockSection *v36; // [sp+10h] [bp-14h] BYREF
  int v37; // [sp+14h] [bp-10h]
  int v38; // [sp+18h] [bp-Ch] BYREF
  int v39; // [sp+1Ch] [bp-8h] BYREF

  v35 = (GenTerrainThread *)((char *)this + 32);
  v36 = (GenTerrainThread *)((char *)this + 32);
  if ( this != (GenTerrainThread *)-32 )
    Ogre::LockSection::Lock((pthread_mutex_t *)((char *)this + 32));
  v2 = *((_DWORD *)this + 11);
  if ( *((_DWORD *)this + 15) == v2 )
  {
    Ogre::LockFunctor::~LockFunctor(&v36);
    return 1;
  }
  else
  {
    v4 = *(Ogre::LockSection **)v2;
    v5 = *(_DWORD *)(v2 + 4);
    if ( v2 == *((_DWORD *)this + 13) - 8 )
    {
      operator delete(*((void **)this + 12));
      v7 = (int *)(*((_DWORD *)this + 14) + 4);
      *((_DWORD *)this + 14) = v7;
      v6 = *v7;
      v8 = *v7 + 512;
      *((_DWORD *)this + 12) = v6;
      *((_DWORD *)this + 13) = v8;
    }
    else
    {
      v6 = v2 + 8;
    }
    *((_DWORD *)this + 11) = v6;
    Ogre::LockFunctor::~LockFunctor(&v36);
    (*(void (__fastcall **)(_DWORD, int *, int *, Ogre::LockSection *, int))(**((_DWORD **)this + 7) + 52))(
      *((_DWORD *)this + 7),
      &v38,
      &v39,
      v4,
      v5);
    v36 = v4;
    v37 = v5;
    Ogre::LockSection::Lock((pthread_mutex_t *)v35);
    v9 = *((_DWORD **)this + 25);
    if ( v9 == (_DWORD *)(*((_DWORD *)this + 27) - 16) )
    {
      v13 = *((_DWORD *)this + 28);
      v14 = *((_DWORD *)this + 19);
      v15 = *((_DWORD *)this + 20);
      if ( v15 - ((v13 - v14) >> 2) <= 1 )
      {
        v16 = *((int **)this + 24);
        v34 = ((v13 - (int)v16) >> 2) + 1;
        v17 = ((v13 - (int)v16) >> 2) + 2;
        if ( v15 <= 2 * v17 )
        {
          v21 = 1;
          if ( v15 != 0 )
            v21 = *((_DWORD *)this + 20);
          v22 = v15 + 2 + v21;
          if ( v22 > 0x3FFFFFFF )
            sub_3BCEB4(2 * v17);
          v23 = operator new(4 * v22);
          v18 = (int *)(v23 + 4 * ((v22 - v17) >> 1));
          v24 = v23;
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<GenTerrResult *>(
            *((void **)this + 24),
            *((_DWORD *)this + 28) + 4,
            v18);
          operator delete(*((void **)this + 19));
          *((_DWORD *)this + 19) = v24;
          *((_DWORD *)this + 20) = v22;
        }
        else
        {
          v18 = (int *)(v14 + 4 * ((v15 - v17) >> 1));
          v19 = v13 + 4;
          if ( v18 >= v16 )
          {
            v20 = (v19 - (int)v16) >> 2;
            if ( v20 != 0 )
              j_memmove(&v18[v34 - v20], v16, 4 * v20);
          }
          else
          {
            std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<GenTerrResult *>(v16, v19, v18);
          }
        }
        *((_DWORD *)this + 24) = v18;
        v25 = *v18;
        *((_DWORD *)this + 22) = *v18;
        *((_DWORD *)this + 23) = v25 + 512;
        v26 = &v18[v34 - 1];
        *((_DWORD *)this + 28) = v26;
        v27 = *v26;
        *((_DWORD *)this + 26) = *v26;
        *((_DWORD *)this + 27) = v27 + 512;
      }
      v28 = *((_DWORD *)this + 28);
      *(_DWORD *)(v28 + 4) = operator new(0x200u);
      v29 = *((_DWORD **)this + 25);
      if ( v29 != nullptr )
      {
        v30 = v37;
        v31 = v38;
        *v29 = v36;
        v29[1] = v30;
        v29[2] = v31;
        v29[3] = v39;
      }
      v32 = (int *)(*((_DWORD *)this + 28) + 4);
      *((_DWORD *)this + 28) = v32;
      v12 = *v32;
      v33 = *v32 + 512;
      *((_DWORD *)this + 26) = v12;
      *((_DWORD *)this + 27) = v33;
    }
    else
    {
      if ( v9 != nullptr )
      {
        v10 = v37;
        v11 = v38;
        *v9 = v36;
        v9[1] = v10;
        v9[2] = v11;
        v9[3] = v39;
      }
      v12 = *((_DWORD *)this + 25) + 16;
    }
    *((_DWORD *)this + 25) = v12;
    Ogre::LockSection::Unlock((pthread_mutex_t *)v35);
    return 2;
  }
}

