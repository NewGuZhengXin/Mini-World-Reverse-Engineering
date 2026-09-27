// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: VoxelModel

//======================================================================
// VoxelModel::VoxelModel(void)
// address: 0x0026B16A   size: 0x6 (6 bytes)
//======================================================================
// Alternative name is '_ZN10VoxelModelC1Ev'
void __fastcall VoxelModel::VoxelModel(VoxelModel *this)
{
  *(_DWORD *)this = 0;
}


//======================================================================
// VoxelModel::~VoxelModel()
// address: 0x0026B170   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN10VoxelModelD1Ev'
void __fastcall VoxelModel::~VoxelModel(void **this)
{
  void *v1; // r0

  v1 = *this;
  if ( v1 != nullptr )
    j_free(v1);
}


//======================================================================
// VoxelModel::placeInWorld(World *,WCoord const&,int,bool,int)
// address: 0x0026B1F4   size: 0x108 (264 bytes)
//======================================================================
int __fastcall VoxelModel::placeInWorld(VoxelModel *this, World *a2, const WCoord *a3, int a4, bool a5, int a6)
{
  int result; // r0
  int v9; // r7
  int i; // r4
  int j; // r7
  int v12; // r2
  int v13; // r3
  int v14; // r7
  int v15; // r2
  int v16; // r2
  int v17; // [sp+Ch] [bp-38h]
  int v18; // [sp+10h] [bp-34h]
  int v19; // [sp+14h] [bp-30h]
  int v20; // [sp+18h] [bp-2Ch]
  int v21; // [sp+1Ch] [bp-28h]
  _DWORD v23[3]; // [sp+28h] [bp-1Ch] BYREF
  _DWORD v24[4]; // [sp+34h] [bp-10h] BYREF

  v21 = a4;
  v20 = 0;
  if ( a4 > 0
    || (result = DefManager::getVoxlPalette((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, -a4),
        v20 = result,
        result != 0) )
  {
    v9 = 0;
LABEL_4:
    v18 = v9;
    result = *((_DWORD *)this + 2);
    v19 = -v9;
    if ( -v9 < result )
    {
      result = *((_DWORD *)a3 + 1);
      if ( result - v9 <= 255 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= *((_DWORD *)this + 3) )
          {
            v9 = v18 - 1;
            goto LABEL_4;
          }
          for ( j = 0; ; j = v17 - 1 )
          {
            v17 = j;
            v12 = *((_DWORD *)this + 1);
            v13 = -j;
            if ( -j >= v12 )
              break;
            v14 = *(unsigned __int8 *)(*(_DWORD *)this - j + v12 * (*((_DWORD *)this + 3) * v19 + i));
            v15 = *((_DWORD *)a3 + 1);
            v23[0] = *(_DWORD *)a3;
            v23[1] = v15;
            v23[2] = *((_DWORD *)a3 + 2);
            switch ( a6 )
            {
              case 2:
                v24[0] = v13;
                v24[1] = i;
                v13 = v19;
                break;
              case 3:
                v24[1] = i;
                v16 = v18;
                v24[0] = v17;
LABEL_16:
                v24[2] = v16;
                goto LABEL_19;
              case 0:
                v16 = v17;
                v24[1] = i;
                v24[0] = v19;
                goto LABEL_16;
              default:
                v24[1] = i;
                v24[0] = v18;
                break;
            }
            v24[2] = v13;
LABEL_19:
            WCoord::operator+=(v23, v24);
            if ( v14 != 0 )
            {
              if ( v20 != 0 )
                v21 = *(__int16 *)(2 * (v14 - 1) + v20);
              World::setBlockAll(a2, (const WCoord *)v23, v21, 0, 2);
            }
            else if ( a5 )
            {
              World::setBlockAll(a2, (const WCoord *)v23, 0, 0, 2);
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// VoxelModel::loadVoxelFile(char const*)
// address: 0x0026B41C   size: 0x120 (288 bytes)
//======================================================================
int __fastcall VoxelModel::loadVoxelFile(VoxelModel *this, char *a2)
{
  int v4; // r0
  unsigned int v5; // r3
  Ogre::DataStream *v6; // r7
  char *v7; // r0
  FileChunk *v9; // r0
  int v10; // r6
  FileChunk *v11; // r4
  int v12; // r2
  FileChunk *v13; // r3
  unsigned int v14; // r0
  _DWORD *v15; // r3
  unsigned int v16; // r0
  size_t v17; // r7
  void *v18; // r0
  int *v19; // [sp+0h] [bp-1Ch]
  int v20; // [sp+4h] [bp-18h]
  _DWORD v21[3]; // [sp+10h] [bp-Ch] BYREF

  v4 = Ogre::FileManager::openFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, a2, 1);
  v6 = (Ogre::DataStream *)v4;
  if ( v4 == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/voxelmodel.cpp", (const char *)&dword_74, 2, v5);
    v7 = "failed to open: %s";
LABEL_5:
    Ogre::LogMessage((Ogre *)v7, a2);
    return 0;
  }
  (*(void (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)v4 + 8))(v4, v21, 8);
  if ( v21[0] != 542658390 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/voxelmodel.cpp", (const char *)&dword_7C, 2, 0x20584F56u);
    v7 = "wrong voxel magic number: %s";
    goto LABEL_5;
  }
  v9 = (FileChunk *)operator new(0x14u);
  v10 = 0;
  *(_DWORD *)v9 = 0;
  *((_DWORD *)v9 + 1) = 0;
  *((_DWORD *)v9 + 2) = 0;
  *((_DWORD *)v9 + 3) = 0;
  *((_DWORD *)v9 + 4) = 0;
  v11 = v9;
  FileChunk::loadFromFile(v9, v6, v12, v13);
  v14 = CHUNKID(0x53u, 0x49u, 0x5Au, 0x45u);
  v15 = (_DWORD *)FileChunk::getChild(v11, v14)[1];
  *((_DWORD *)this + 1) = *v15;
  *((_DWORD *)this + 2) = v15[1];
  *((_DWORD *)this + 3) = v15[2];
  v16 = CHUNKID(0x58u, 0x59u, 0x5Au, 0x49u);
  v19 = (int *)FileChunk::getChild(v11, v16)[1];
  v20 = *v19;
  v17 = *((_DWORD *)this + 2) * *((_DWORD *)this + 1) * *((_DWORD *)this + 3);
  v18 = j_malloc(v17);
  *(_DWORD *)this = v18;
  j_memset(v18, 0, v17);
  while ( v10 != v20 )
  {
    ++v10;
    *(_BYTE *)(*(_DWORD *)this
             + ((unsigned __int8)BYTE1(v19[v10]) * *((_DWORD *)this + 3) + (unsigned __int8)BYTE2(v19[v10]))
             * *((_DWORD *)this + 1)
             + (unsigned __int8)v19[v10]) = HIBYTE(v19[v10]);
    DefManager::getVoxlPalette((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, 0);
  }
  FileChunk::~FileChunk(v11);
  operator delete(v11);
  return 1;
}

