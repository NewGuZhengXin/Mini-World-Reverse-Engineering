// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FileChunk

//======================================================================
// FileChunk::~FileChunk()
// address: 0x0026B182   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN9FileChunkD1Ev'
void __fastcall FileChunk::~FileChunk(FileChunk *this)
{
  void *v2; // r0
  unsigned int i; // r5
  _DWORD *v4; // r0
  void *v5; // r6

  v2 = *((void **)this + 1);
  if ( v2 != nullptr )
    j_free(v2);
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD **)this + 2);
    if ( i >= (*((_DWORD *)this + 3) - (int)v4) >> 2 )
      break;
    v5 = (void *)v4[i];
    if ( v5 != nullptr )
    {
      FileChunk::~FileChunk((FileChunk *)v4[i]);
      operator delete(v5);
    }
  }
  if ( v4 != nullptr )
    operator delete(v4);
}


//======================================================================
// FileChunk::getChild(unsigned int)
// address: 0x0026B1D0   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall FileChunk::getChild(FileChunk *this, unsigned int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r4
  _DWORD *result; // r0

  v2 = *((_DWORD *)this + 2);
  v3 = 0;
  v4 = (*((_DWORD *)this + 3) - v2) >> 2;
  while ( v3 != v4 )
  {
    result = *(_DWORD **)(v2 + 4 * v3);
    if ( *result == a2 )
      return result;
    ++v3;
  }
  return nullptr;
}


//======================================================================
// FileChunk::loadFromFile(Ogre::DataStream *)
// address: 0x0026B380   size: 0x9A (154 bytes)
//======================================================================
size_t __fastcall FileChunk::loadFromFile(FileChunk *this, Ogre::DataStream *a2, int a3, FileChunk *a4)
{
  void *v6; // r0
  FileChunk *v7; // r0
  int v8; // r0
  FileChunk **v9; // r3
  int v10; // r6
  size_t byte_count; // [sp+4h] [bp-Ch] BYREF
  int v13; // [sp+8h] [bp-8h] BYREF
  FileChunk *v14; // [sp+Ch] [bp-4h] BYREF

  byte_count = (size_t)a2;
  v13 = a3;
  v14 = a4;
  (*(void (__fastcall **)(Ogre::DataStream *, FileChunk *, int))(*(_DWORD *)a2 + 8))(a2, this, 4);
  (*(void (__fastcall **)(Ogre::DataStream *, size_t *, int))(*(_DWORD *)a2 + 8))(a2, &byte_count, 4);
  (*(void (__fastcall **)(Ogre::DataStream *, int *, int))(*(_DWORD *)a2 + 8))(a2, &v13, 4);
  if ( (int)byte_count > 0 )
  {
    v6 = j_malloc(byte_count);
    *((_DWORD *)this + 1) = v6;
    (*(void (__fastcall **)(Ogre::DataStream *, void *, size_t))(*(_DWORD *)a2 + 8))(a2, v6, byte_count);
  }
  while ( v13 > 0 )
  {
    v7 = (FileChunk *)operator new(0x14u);
    *(_DWORD *)v7 = 0;
    *((_DWORD *)v7 + 1) = 0;
    *((_DWORD *)v7 + 2) = 0;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 4) = 0;
    v14 = v7;
    v8 = FileChunk::loadFromFile(v7, a2);
    v9 = *((FileChunk ***)this + 3);
    v10 = v8;
    if ( v9 == *((FileChunk ***)this + 4) )
    {
      std::vector<FileChunk *>::_M_emplace_back_aux<FileChunk * const&>((int)this + 8, &v14);
    }
    else
    {
      if ( v9 != nullptr )
        *v9 = v14;
      *((_DWORD *)this + 3) += 4;
    }
    v13 -= v10;
  }
  return v13 + byte_count + 12;
}

