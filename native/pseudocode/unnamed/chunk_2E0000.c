// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_2E0000

//======================================================================
// sub_2E4684
// address: 0x002E4684   size: 0x38 (56 bytes)
//======================================================================
int sub_2E4684()
{
  float v0; // r5

  v0 = (float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88) / 1280.0;
  if ( v0 >= (float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92) / 720.0) )
    v0 = (float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92) / 720.0;
  return LODWORD(v0);
}


//======================================================================
// sub_2E46C8
// address: 0x002E46C8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_2E46C8(_DWORD *a1, _DWORD *a2, float a3)
{
  float v3; // r0

  v3 = (float)((int)(float)(a3 * 169.0) / 2);
  *a1 = (int)(float)((float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88) - (float)(a3 * 161.0)) - v3);
  *a2 = (int)(float)((float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92) - (float)(a3 * 85.0)) - v3);
  return (int)(float)(a3 * 169.0);
}


//======================================================================
// sub_2E67D8
// address: 0x002E67D8   size: 0x102 (258 bytes)
//======================================================================
int __fastcall sub_2E67D8(int a1, int *a2, int *a3, bool *a4)
{
  int v4; // r3
  int v7; // r4
  int v8; // r2
  int v9; // r1
  __int16 *v10; // r4
  int v11; // r5
  int v12; // r2
  unsigned __int16 *NeighborBlock; // r0
  int v14; // r0
  unsigned __int16 *v15; // r0
  unsigned __int16 *v16; // r7
  int v17; // r0
  _DWORD *v18; // r3
  unsigned int v19; // r0
  int result; // r0
  _DWORD *v21; // r3
  unsigned int v22; // r2
  int v23; // r3
  unsigned __int16 *v24; // [sp+0h] [bp-14h]
  int v25; // [sp+4h] [bp-10h]

  v4 = *(_DWORD *)(a1 + 20);
  v7 = a2[1];
  v8 = *a2;
  v9 = a2[2];
  if ( v4 != 0 )
    v10 = (__int16 *)(v4 + 2 * ((v7 << 8) | (16 * v9) | v8));
  else
    v10 = &Section::m_EmptyBlock;
  v11 = ((int)(unsigned __int16)*v10 >> 12) & 3;
  v25 = ((int)(unsigned __int16)*v10 >> 12) & 4;
  v12 = v11 + 1;
  if ( (((int)(unsigned __int16)*v10 >> 12) & 1) != 0 )
    v12 = v11 - 1;
  NeighborBlock = (unsigned __int16 *)Section::getNeighborBlock(a1, a2, v12);
  v24 = NeighborBlock;
  if ( NeighborBlock == nullptr
    || (((v14 = *NeighborBlock) >> 12) & 4) != v25
    || !BlockMaterial::isSameType((BlockMaterial *)(v14 & 0xFFF), (BlockMaterial *)(*v10 & 0xFFF), v14 >> 12) )
  {
    v15 = (unsigned __int16 *)Section::getNeighborBlock(a1, a2, v11);
    v16 = v15;
    if ( v15 != nullptr )
    {
      v17 = *v15;
      if ( ((v17 >> 12) & 4) != v25
        || !BlockMaterial::isSameType((BlockMaterial *)(v17 & 0xFFF), (BlockMaterial *)(*v10 & 0xFFF), v17 >> 12) )
      {
        goto LABEL_24;
      }
      v21 = &dword_446BD8[v11];
      v22 = (unsigned int)(*v16 << 18) >> 30;
      if ( v22 == v21[28] )
      {
        v23 = v21[12];
LABEL_20:
        *a3 = v23;
        result = 2;
        goto LABEL_21;
      }
      if ( v22 == v21[16] )
      {
        v23 = v21[20];
        goto LABEL_20;
      }
    }
LABEL_24:
    *a3 = v11;
    result = 0;
    goto LABEL_21;
  }
  v18 = &dword_446BD8[v11];
  v19 = (unsigned int)(*v24 << 18) >> 30;
  if ( v19 == v18[24] )
  {
    *a3 = dword_446BD8[v11];
  }
  else
  {
    if ( v19 != v18[4] )
      goto LABEL_24;
    *a3 = v18[8];
  }
  result = 1;
LABEL_21:
  *a4 = v25 != 0;
  return result;
}


//======================================================================
// sub_2E6958
// address: 0x002E6958   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_2E6958(CollisionDetect *a1, int *a2, int *a3, int *a4, char a5)
{
  int v5; // r7
  int v6; // r6
  int v7; // r12
  int v8; // r4
  int v9; // r5
  int v10; // r1
  int v11; // r12
  int v12; // r5
  int v14; // [sp+0h] [bp-2Ch]
  int v15; // [sp+8h] [bp-24h]
  int v16; // [sp+Ch] [bp-20h]
  _DWORD v17[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v18[4]; // [sp+1Ch] [bp-10h] BYREF

  v5 = a3[1];
  v6 = a2[1];
  v7 = a4[1];
  v8 = *a2;
  v9 = a2[2];
  v10 = a3[2];
  v14 = *a3;
  v15 = a4[2];
  v16 = *a4;
  if ( a5 != 0 )
  {
    v11 = v10 + v9;
    v17[1] = v6 + 100 - a4[1];
    v17[0] = v8 + v14;
    v12 = v9 + v15;
    v17[2] = v11;
    v18[0] = v8 + v16;
    v18[1] = v6 + 100 - v5;
  }
  else
  {
    v17[0] = v8 + v14;
    v17[2] = v9 + v10;
    v17[1] = v6 + v5;
    v12 = v9 + v15;
    v18[0] = v8 + v16;
    v18[1] = v6 + v7;
  }
  v18[2] = v12;
  return CollisionDetect::addObstacle(a1, (const WCoord *)v17, (const WCoord *)v18);
}


//======================================================================
// sub_2E7480
// address: 0x002E7480   size: 0x1E (30 bytes)
//======================================================================
__int64 __fastcall sub_2E7480(int a1, World *this, WCoord *a3, int a4, int a5)
{
  char v5; // r4
  __int64 v7; // [sp+0h] [bp-8h]

  HIDWORD(v7) = this;
  if ( a1 != 0 )
    v5 = 3;
  else
    v5 = 2;
  World::setBlockAll(this, a3, a4, a5, v5);
  return v7;
}


//======================================================================
// sub_2EA140
// address: 0x002EA140   size: 0x62 (98 bytes)
//======================================================================
__int64 __fastcall sub_2EA140(int a1, int a2, int *a3, unsigned int *a4)
{
  ActorExpOrb *v7; // r4
  Ogre::FixedString *v8; // r2
  unsigned int v9; // r0
  int v10; // r3
  unsigned int v11; // r0
  int v12; // r7
  int v13; // r7
  ClientActorMgr *v14; // r0
  int v16; // [sp+8h] [bp-1Ch]
  int v17; // [sp+8h] [bp-1Ch]
  _DWORD v19[4]; // [sp+14h] [bp-10h] BYREF

  v7 = (ActorExpOrb *)operator new(0xB8u);
  ActorExpOrb::ActorExpOrb(v7, a2, v8);
  v16 = *a3;
  v9 = GenRandomInt(*a4);
  v10 = a3[1];
  v19[0] = v16 + v9;
  v17 = v10;
  v11 = GenRandomInt(a4[1]);
  v12 = a3[2];
  v19[1] = v17 + v11;
  v13 = v12 + GenRandomInt(a4[2]);
  v14 = *(ClientActorMgr **)(a1 + 132);
  v19[2] = v13;
  return ClientActorMgr::spawnActor(v14, v7, (const WCoord *)v19, 0.0, 0.0, true);
}


//======================================================================
// sub_2ED7EE
// address: 0x002ED7EE   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall sub_2ED7EE(int *a1, int *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r4
  int v5; // r1
  _BOOL4 result; // r0

  v2 = *a2;
  v3 = *a1;
  v4 = a1[1];
  v5 = a2[1];
  result = true;
  if ( v3 >= v2 )
  {
    result = false;
    if ( v3 <= v2 )
      return v4 < v5;
  }
  return result;
}


//======================================================================
// sub_2EECB0
// address: 0x002EECB0   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall sub_2EECB0(int *a1, int *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r4
  int v5; // r1
  _BOOL4 result; // r0

  v2 = *a2;
  v3 = *a1;
  v4 = a1[1];
  v5 = a2[1];
  result = true;
  if ( v3 >= v2 )
  {
    result = false;
    if ( v3 <= v2 )
      return v4 < v5;
  }
  return result;
}


//======================================================================
// sub_2EECD2
// address: 0x002EECD2   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_2EECD2(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_2EED20
// address: 0x002EED20   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_2EED20(int a1, int a2)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)operator new(0x20u);
  ChunkViewerList::ChunkViewerList((ChunkViewerList *)(v2 + 3));
  *v2 = a1;
  v2[1] = a2;
  v2[7] = 0;
  return v2;
}

