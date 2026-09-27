// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientChunk

//======================================================================
// ClientChunk::~ClientChunk()
// address: 0x002D0DF0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN11ClientChunkD1Ev'
void __fastcall ClientChunk::~ClientChunk(ClientChunk *this)
{
  *(_DWORD *)this = &off_4603B8;
  Chunk::~Chunk(this);
}


//======================================================================
// ClientChunk::~ClientChunk()
// address: 0x002D0E0C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ClientChunk::~ClientChunk(ClientChunk *this)
{
  ClientChunk::~ClientChunk(this);
  operator delete(this);
}


//======================================================================
// ClientChunk::ClientChunk(ClientWorld *,int,int)
// address: 0x002D0E20   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN11ClientChunkC1EP11ClientWorldii'
void __fastcall ClientChunk::ClientChunk(ClientChunk *this, ClientWorld *a2, int a3, int a4)
{
  Chunk::Chunk(this, a2, a3, a4, nullptr);
  *(_DWORD *)this = &off_4603B8;
}

