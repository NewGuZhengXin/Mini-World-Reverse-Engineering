// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TerrgenThread

//======================================================================
// TerrgenThread::setViewParam(WCoord const&,Ogre::Vector3 const&)
// address: 0x002B020C   size: 0x4A (74 bytes)
//======================================================================
unsigned int __fastcall TerrgenThread::setViewParam(TerrgenThread *this, const WCoord *a2, const Ogre::Vector3 *a3)
{
  unsigned int v3; // r6
  unsigned int result; // r0
  int v5; // r4

  v3 = *(_DWORD *)a2 / 100 - ((unsigned int)(*(_DWORD *)a2 % 100) >> 31);
  result = *((_DWORD *)a2 + 2) / 100 - ((unsigned int)(*((_DWORD *)a2 + 2) % 100) >> 31);
  dword_5133BC = result;
  dword_5133B4 = v3;
  dword_5133B8 = 0;
  dword_5133C0 = *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 2);
  dword_5133C4 = *((_DWORD *)a3 + 1);
  dword_5133C8 = v5;
  return result;
}


//======================================================================
// TerrgenThread::createChunk(int,int)
// address: 0x002B025C   size: 0x2A (42 bytes)
//======================================================================
Chunk *__fastcall TerrgenThread::createChunk(World **this, int a2, int a3)
{
  Chunk *v6; // r4

  v6 = (Chunk *)operator new(0x59Cu);
  Chunk::Chunk(v6, *(this + 8), a2, a3, nullptr);
  TerrainGen::createChunkData(*(this + 9), v6);
  return v6;
}


//======================================================================
// TerrgenThread::popResult(void)
// address: 0x002B02E8   size: 0x40 (64 bytes)
//======================================================================
int __fastcall TerrgenThread::popResult(TerrgenThread *this, Ogre::LockSection *a2)
{
  int *v3; // r3
  int v4; // r5
  Ogre::LockSection *v6; // [sp+4h] [bp-4h] BYREF

  v6 = a2;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v6, (TerrgenThread *)((char *)this + 40));
  v3 = *((int **)this + 23);
  if ( *((int **)this + 27) == v3 )
  {
    v4 = 0;
  }
  else
  {
    v4 = *v3;
    std::deque<Chunk *>::pop_front((int)this + 84);
    if ( *((_DWORD *)this + 27) == *((_DWORD *)this + 23) )
      *((_DWORD *)this + 7) &= ~2u;
  }
  Ogre::LockFunctor::~LockFunctor(&v6);
  return v4;
}


//======================================================================
// TerrgenThread::popSaveChunk(unsigned int)
// address: 0x002B0328   size: 0x48 (72 bytes)
//======================================================================
int __fastcall TerrgenThread::popSaveChunk(TerrgenThread *this, Ogre::LockSection *a2, Ogre::LockSection *a3)
{
  int *v5; // r3
  int v6; // r4
  Ogre::LockSection *v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v8, (TerrgenThread *)((char *)this + 40));
  v5 = *((int **)this + 43);
  if ( *((int **)this + 47) == v5 )
  {
    v6 = 0;
  }
  else
  {
    v6 = *v5;
    *(_BYTE *)(v6 + 1338) = 0;
    *(_BYTE *)(v6 + 1339) = 0;
    *(_DWORD *)(v6 + 1316) = a2;
    std::deque<Chunk *>::pop_front((int)this + 164);
  }
  Ogre::LockFunctor::~LockFunctor(v8);
  return v6;
}


//======================================================================
// TerrgenThread::~TerrgenThread()
// address: 0x002B03CC   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN13TerrgenThreadD1Ev'
void __fastcall TerrgenThread::~TerrgenThread(TerrgenThread *this)
{
  *(_DWORD *)this = &off_45DD78;
  std::deque<Chunk *>::~deque((int)this + 164);
  std::deque<Chunk *>::~deque((int)this + 124);
  std::deque<Chunk *>::~deque((int)this + 84);
  std::deque<ChunkIndex>::~deque((int)this + 44);
  Ogre::LockSection::~LockSection((pthread_mutex_t *)((char *)this + 40));
  Ogre::OSThread::~OSThread(this);
}


//======================================================================
// TerrgenThread::~TerrgenThread()
// address: 0x002B0410   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TerrgenThread::~TerrgenThread(TerrgenThread *this)
{
  TerrgenThread::~TerrgenThread(this);
  operator delete(this);
}


//======================================================================
// TerrgenThread::clearAddCmd(void)
// address: 0x002B0450   size: 0x38 (56 bytes)
//======================================================================
void __fastcall TerrgenThread::clearAddCmd(TerrgenThread *this)
{
  Ogre::LockSection *v2; // [sp+4h] [bp-18h] BYREF
  _DWORD v3[5]; // [sp+8h] [bp-14h] BYREF

  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v2, (TerrgenThread *)((char *)this + 40));
  while ( *((_DWORD *)this + 17) != *((_DWORD *)this + 13) )
  {
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v3, (_DWORD *)this + 13);
    std::deque<ChunkIndex>::pop_front((int)this + 44);
  }
  Ogre::LockFunctor::~LockFunctor(&v2);
}


//======================================================================
// TerrgenThread::TerrgenThread(World *,TerrainGen *)
// address: 0x002B050C   size: 0xC2 (194 bytes)
//======================================================================
// Alternative name is '_ZN13TerrgenThreadC1EP5WorldP10TerrainGen'
void __fastcall TerrgenThread::TerrgenThread(TerrgenThread *this, World *a2, TerrainGen *a3)
{
  int v6; // r0
  int v7; // r5
  int *v8; // r5
  int v9; // r2
  int v10; // r3
  int v11; // r3

  Ogre::OSThread::OSThread(this);
  *((_DWORD *)this + 9) = a3;
  *(_DWORD *)this = &off_45DD78;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = a2;
  Ogre::LockSection::LockSection((pthread_mutex_t *)((char *)this + 40));
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 12) = 8;
  v6 = operator new(0x20u);
  v7 = *((_DWORD *)this + 12);
  *((_DWORD *)this + 11) = v6;
  v8 = (int *)(v6 + 4 * ((unsigned int)(v7 - 1) >> 1));
  *v8 = operator new(0x200u);
  *((_DWORD *)this + 16) = v8;
  v9 = *v8;
  v10 = *v8 + 512;
  *((_DWORD *)this + 20) = v8;
  *((_DWORD *)this + 14) = v9;
  *((_DWORD *)this + 15) = v10;
  v11 = *v8;
  *((_DWORD *)this + 18) = *v8;
  *((_DWORD *)this + 19) = v11 + 512;
  *((_DWORD *)this + 13) = v9;
  *((_DWORD *)this + 17) = v11;
  std::_Deque_base<Chunk *>::_Deque_base((_DWORD *)this + 21);
  std::_Deque_base<Chunk *>::_Deque_base((_DWORD *)this + 31);
  std::_Deque_base<Chunk *>::_Deque_base((_DWORD *)this + 41);
}


//======================================================================
// TerrgenThread::addCmd(ChunkIndex)
// address: 0x002B0EE0   size: 0x130 (304 bytes)
//======================================================================
int __fastcall TerrgenThread::addCmd(int a1, int a2, int a3)
{
  _DWORD *v4; // r3
  int v5; // r3
  int v6; // r1
  int v7; // r2
  unsigned int v8; // r3
  int *v9; // r7
  int v10; // r5
  int *v11; // r5
  int v12; // r1
  int v13; // r1
  int v14; // r2
  unsigned int v15; // r7
  int v16; // r0
  int v17; // r3
  int *v18; // r5
  int v19; // r3
  int v20; // r5
  _DWORD *v21; // r3
  int *v22; // r2
  int v23; // r2
  int v24; // r2
  int v26; // [sp+0h] [bp-1Ch]
  int v27; // [sp+4h] [bp-18h]
  Ogre::LockSection *v30[2]; // [sp+14h] [bp-8h] BYREF

  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v30, (Ogre::LockSection *)(a1 + 40));
  v4 = *(_DWORD **)(a1 + 68);
  if ( v4 == (_DWORD *)(*(_DWORD *)(a1 + 76) - 8) )
  {
    v6 = *(_DWORD *)(a1 + 80);
    v7 = *(_DWORD *)(a1 + 44);
    v8 = *(_DWORD *)(a1 + 48);
    if ( v8 - ((v6 - v7) >> 2) <= 1 )
    {
      v9 = *(int **)(a1 + 64);
      v26 = ((v6 - (int)v9) >> 2) + 1;
      v10 = ((v6 - (int)v9) >> 2) + 2;
      if ( v8 <= 2 * v10 )
      {
        v14 = 1;
        if ( v8 != 0 )
          v14 = *(_DWORD *)(a1 + 48);
        v15 = v8 + 2 + v14;
        if ( v15 > 0x3FFFFFFF )
          sub_3BCEB4(2 * v10);
        v16 = operator new(4 * v15);
        v11 = (int *)(v16 + 4 * ((v15 - v10) >> 1));
        v27 = v16;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ChunkIndex *>(
          *(void **)(a1 + 64),
          *(_DWORD *)(a1 + 80) + 4,
          v11);
        operator delete(*(void **)(a1 + 44));
        *(_DWORD *)(a1 + 48) = v15;
        *(_DWORD *)(a1 + 44) = v27;
      }
      else
      {
        v11 = (int *)(v7 + 4 * ((v8 - v10) >> 1));
        v12 = v6 + 4;
        if ( v11 >= v9 )
        {
          v13 = v12 - (_DWORD)v9;
          if ( v13 >> 2 != 0 )
            j_memmove(&v11[v26 - (v13 >> 2)], v9, 4 * (v13 >> 2));
        }
        else
        {
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<ChunkIndex *>(v9, v12, v11);
        }
      }
      *(_DWORD *)(a1 + 64) = v11;
      v17 = *v11;
      *(_DWORD *)(a1 + 56) = *v11;
      *(_DWORD *)(a1 + 60) = v17 + 512;
      v18 = &v11[v26 - 1];
      *(_DWORD *)(a1 + 80) = v18;
      v19 = *v18;
      *(_DWORD *)(a1 + 72) = *v18;
      *(_DWORD *)(a1 + 76) = v19 + 512;
    }
    v20 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(v20 + 4) = operator new(0x200u);
    v21 = *(_DWORD **)(a1 + 68);
    if ( v21 != nullptr )
    {
      *v21 = a2;
      v21[1] = a3;
    }
    v22 = (int *)(*(_DWORD *)(a1 + 80) + 4);
    *(_DWORD *)(a1 + 80) = v22;
    v5 = *v22;
    v23 = *v22 + 512;
    *(_DWORD *)(a1 + 72) = v5;
    *(_DWORD *)(a1 + 76) = v23;
  }
  else
  {
    if ( v4 != nullptr )
    {
      *v4 = a2;
      v4[1] = a3;
    }
    v5 = *(_DWORD *)(a1 + 68) + 8;
  }
  v24 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 68) = v5;
  *(_DWORD *)(a1 + 28) = v24 | 1;
  Ogre::LockFunctor::~LockFunctor(v30);
  return Ogre::OSEvent::trigger((Ogre::OSEvent *)(a1 + 8));
}


//======================================================================
// TerrgenThread::addSaveCmd(Chunk *)
// address: 0x002B1144   size: 0x38 (56 bytes)
//======================================================================
int __fastcall TerrgenThread::addSaveCmd(TerrgenThread *this, Chunk *a2)
{
  __int64 v3; // r0
  Chunk *v5; // [sp+4h] [bp-10h] BYREF
  Ogre::LockSection *v6[2]; // [sp+Ch] [bp-8h] BYREF

  v5 = a2;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v6, (TerrgenThread *)((char *)this + 40));
  *((_BYTE *)v5 + 1338) = 1;
  LODWORD(v3) = (char *)this + 124;
  HIDWORD(v3) = &v5;
  std::deque<Chunk *>::push_back(v3);
  Ogre::LockFunctor::~LockFunctor(v6);
  return Ogre::OSEvent::trigger((TerrgenThread *)((char *)this + 8));
}


//======================================================================
// TerrgenThread::_run(void)
// address: 0x002B118C   size: 0x176 (374 bytes)
//======================================================================
int __fastcall TerrgenThread::_run(TerrgenThread *this)
{
  int v1; // r6
  int v3; // r0
  int v4; // r0
  int v5; // r5
  __int64 v6; // r0
  int v7; // r2
  int *v8; // r5
  _DWORD *v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r0
  int v12; // r2
  int result; // r0
  int v14; // [sp+4h] [bp-78h]
  int v15; // [sp+4h] [bp-78h]
  Ogre::LockSection *v16; // [sp+Ch] [bp-70h]
  Ogre::LockSection *v17; // [sp+14h] [bp-68h] BYREF
  _DWORD v18[4]; // [sp+18h] [bp-64h] BYREF
  _DWORD v19[4]; // [sp+28h] [bp-54h] BYREF
  _DWORD v20[4]; // [sp+38h] [bp-44h] BYREF
  _DWORD v21[4]; // [sp+48h] [bp-34h] BYREF
  _DWORD v22[4]; // [sp+58h] [bp-24h] BYREF
  Ogre::LockSection *v23[5]; // [sp+68h] [bp-14h] BYREF

  v16 = (TerrgenThread *)((char *)this + 40);
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v17, (TerrgenThread *)((char *)this + 40));
  if ( *((_DWORD *)this + 17) == *((_DWORD *)this + 13) )
  {
    v5 = 0;
  }
  else
  {
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v18, (_DWORD *)this + 13);
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v19, (_DWORD *)this + 17);
    if ( v18[0] != v19[0] )
    {
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v23, v18);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v22, v19);
      v3 = std::operator-<ChunkIndex,ChunkIndex&,ChunkIndex*>(v19, v18);
      v4 = j___clzsi2(v3);
      std::__introsort_loop<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,int,bool (*)(ChunkIndex,ChunkIndex)>(
        v23,
        v22,
        2 * (31 - v4),
        (int (__fastcall *)(_DWORD, _DWORD, int, int))CompareTerrgenCmd);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v21, v18);
      std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v20, v19);
      std::__final_insertion_sort<std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>,bool (*)(ChunkIndex,ChunkIndex)>(
        v21,
        v20,
        (int (__fastcall *)(int, int, _DWORD, _DWORD))CompareTerrgenCmd);
    }
    std::_Deque_iterator<ChunkIndex,ChunkIndex&,ChunkIndex*>::_Deque_iterator(v23, (_DWORD *)this + 13);
    v1 = *(_DWORD *)v23[0];
    v5 = 1;
    v14 = *((_DWORD *)v23[0] + 1);
    std::deque<ChunkIndex>::pop_front((int)this + 44);
  }
  Ogre::LockFunctor::~LockFunctor(&v17);
  if ( v5 != 0 )
  {
    v23[0] = TerrgenThread::createChunk((World **)this, 16 * v1, 16 * v14);
    Ogre::LockSection::Lock((pthread_mutex_t *)v16);
    LODWORD(v6) = (char *)this + 84;
    HIDWORD(v6) = v23;
    std::deque<Chunk *>::push_back(v6);
    v7 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 7) = v7 | 2;
    if ( *((_DWORD *)this + 17) == *((_DWORD *)this + 13) )
      *((_DWORD *)this + 7) = v7 & 0xFFFFFFFC | 2;
    Ogre::LockSection::Unlock((pthread_mutex_t *)v16);
  }
  v8 = (int *)((char *)this + 148);
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v23, v16);
  v9 = *((_DWORD **)this + 33);
  if ( *((_DWORD **)this + 37) == v9 )
  {
    v15 = 0;
  }
  else
  {
    v22[0] = *v9;
    std::deque<Chunk *>::pop_front((int)this + 124);
    v15 = 1;
  }
  Ogre::LockFunctor::~LockFunctor(v23);
  v10 = v15;
  if ( v15 != 0 )
  {
    Ogre::LockSection::Lock((pthread_mutex_t *)v16);
    LODWORD(v11) = (char *)this + 164;
    HIDWORD(v11) = v22;
    std::deque<Chunk *>::push_back(v11);
    Ogre::LockSection::Unlock((pthread_mutex_t *)v16);
  }
  v12 = *((_DWORD *)this + 17);
  if ( v12 != *((_DWORD *)this + 13) || (v12 = *v8, result = 1, *v8 != *((_DWORD *)this + 33)) )
  {
    Ogre::ThreadSleep((unsigned int)&dword_C8, v10, v12);
    return 2;
  }
  return result;
}

