// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ChunkViewerList

//======================================================================
// ChunkViewerList::ChunkViewerList(void)
// address: 0x002EED14   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15ChunkViewerListC1Ev'
void __fastcall ChunkViewerList::ChunkViewerList(ChunkViewerList *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
}


//======================================================================
// ChunkViewerList::removeViewer(ChunkViewer *)
// address: 0x002EF50E   size: 0x30 (48 bytes)
//======================================================================
ChunkViewerList *__fastcall ChunkViewerList::removeViewer(ChunkViewerList *this, ChunkViewer *a2)
{
  _DWORD *v3; // r0
  int v4; // r1
  _DWORD *v5; // r0
  int v6; // r1
  void *v7; // r2
  void *v8; // r0
  int v11; // [sp+4h] [bp-4h] BYREF

  v3 = *((_DWORD **)this + 1);
  v4 = *((_DWORD *)this + 2);
  if ( v3 != (_DWORD *)v4 )
  {
    v5 = std::__find<__gnu_cxx::__normal_iterator<ChunkViewer **,std::vector<ChunkViewer *>>,ChunkViewer *>(
           v3,
           v4,
           &v11);
    v6 = *((_DWORD *)this + 2);
    v7 = v5;
    if ( v5 != (_DWORD *)v6 )
    {
      v8 = v5 + 1;
      if ( v8 != (void *)v6 )
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ChunkViewer *>(v8, v6, v7);
      *((_DWORD *)this + 2) -= 4;
    }
  }
  return this;
}


//======================================================================
// ChunkViewerList::addViewer(ChunkViewer *)
// address: 0x002EF5E4   size: 0x3A (58 bytes)
//======================================================================
ChunkViewerList *__fastcall ChunkViewerList::addViewer(ChunkViewerList *this, ChunkViewer *a2, int a3)
{
  _DWORD *v4; // r0
  int v7[2]; // [sp+4h] [bp-8h] BYREF

  v7[1] = a3;
  v4 = std::__find<__gnu_cxx::__normal_iterator<ChunkViewer **,std::vector<ChunkViewer *>>,ChunkViewer *>(
         *((_DWORD **)this + 1),
         *((_DWORD *)this + 2),
         v7);
  if ( v4 == *((_DWORD **)this + 2) )
  {
    if ( v4 == *((_DWORD **)this + 3) )
    {
      std::vector<ChunkViewer *>::_M_emplace_back_aux<ChunkViewer * const&>((int)this + 4, v7);
    }
    else
    {
      if ( v4 != nullptr )
        *v4 = v7[0];
      *((_DWORD *)this + 2) += 4;
    }
  }
  return this;
}

