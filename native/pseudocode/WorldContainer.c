// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldContainer

//======================================================================
// WorldContainer::updateTick(void)
// address: 0x002988D4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall WorldContainer::updateTick(WorldContainer *this)
{
  ;
}


//======================================================================
// WorldContainer::dropItems(void)
// address: 0x002988D6   size: 0x2 (2 bytes)
//======================================================================
void __fastcall WorldContainer::dropItems(WorldContainer *this)
{
  ;
}


//======================================================================
// WorldContainer::index2Grid(int)
// address: 0x002988D8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall WorldContainer::index2Grid(WorldContainer *this, int a2)
{
  return 0;
}


//======================================================================
// WorldContainer::afterChangeGrid(int)
// address: 0x002988DC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall WorldContainer::afterChangeGrid(WorldContainer *this, int a2)
{
  ;
}


//======================================================================
// WorldContainer::canPutItem(int)
// address: 0x002988DE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall WorldContainer::canPutItem(WorldContainer *this, int a2)
{
  return 0;
}


//======================================================================
// WorldContainer::onAttachUI(void)
// address: 0x002988E2   size: 0x2 (2 bytes)
//======================================================================
void __fastcall WorldContainer::onAttachUI(WorldContainer *this)
{
  ;
}


//======================================================================
// WorldContainer::onDetachUI(void)
// address: 0x002988E4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall WorldContainer::onDetachUI(WorldContainer *this)
{
  ;
}


//======================================================================
// WorldContainer::~WorldContainer()
// address: 0x002988E8   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN14WorldContainerD1Ev'
void __fastcall WorldContainer::~WorldContainer(WorldContainer *this)
{
  *(_DWORD *)this = &off_45C248;
}


//======================================================================
// WorldContainer::~WorldContainer()
// address: 0x00298930   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldContainer::~WorldContainer(WorldContainer *this)
{
  *(_DWORD *)this = &off_45C248;
  operator delete(this);
}


//======================================================================
// WorldContainer::loadContainerCommon(FBSave::ContainerCommon const*)
// address: 0x002F915E   size: 0x50 (80 bytes)
//======================================================================
int __fastcall WorldContainer::loadContainerCommon(_DWORD *a1, flatbuffers::Table *this)
{
  int OptionalFieldOffset; // r0
  int v5; // r2
  int v6; // r3
  int *v7; // r0
  int *v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r0
  int v12; // r0
  int v13; // r3

  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(this, 4u);
  v5 = 0;
  v6 = 0;
  if ( OptionalFieldOffset != 0 )
  {
    v7 = (int *)((char *)this + OptionalFieldOffset);
    v5 = *v7;
    v6 = v7[1];
  }
  a1[8] = v5;
  a1[9] = v6;
  v8 = (int *)flatbuffers::Table::GetOptionalFieldOffset(this, 6u);
  if ( v8 != nullptr )
    v8 = (int *)((char *)v8 + (_DWORD)this);
  v9 = v8[1];
  v10 = *v8;
  v11 = v8[2];
  a1[5] = v9;
  a1[6] = v11;
  a1[4] = v10;
  v12 = flatbuffers::Table::GetOptionalFieldOffset(this, 8u);
  v13 = 0;
  if ( v12 != 0 )
    v13 = *(_DWORD *)((char *)this + v12);
  a1[7] = v13;
  return 1;
}


//======================================================================
// WorldContainer::dropOneItem(BackPackGrid &)
// address: 0x002F930C   size: 0xA8 (168 bytes)
//======================================================================
float __fastcall WorldContainer::dropOneItem(float this, BackPackGrid *a2)
{
  float v3; // r5
  int v4; // r7
  int v5; // r6
  int v6; // r0
  int v7; // r3
  int v8; // r5
  ClientActorMgr *v9; // r0
  int *v10; // r3
  float *v11; // r4
  int v12; // [sp+14h] [bp-20h]
  int v13; // [sp+18h] [bp-1Ch]
  int v14; // [sp+1Ch] [bp-18h]
  _DWORD v15[4]; // [sp+24h] [bp-10h] BYREF

  v3 = this;
  if ( *((_DWORD *)a2 + 1) != 0 )
  {
    v12 = 100 * *(_DWORD *)(LODWORD(this) + 16);
    v13 = 100 * *(_DWORD *)(LODWORD(this) + 20);
    v14 = 100 * *(_DWORD *)(LODWORD(this) + 24);
    v4 = GenRandomInt(10, 90);
    v5 = GenRandomInt(10, 90);
    v6 = GenRandomInt(10, 90);
    v7 = *(_DWORD *)(LODWORD(v3) + 12);
    v8 = *((_DWORD *)a2 + 3);
    v15[2] = v14 + v6;
    v9 = *(ClientActorMgr **)(v7 + 132);
    v10 = *((int **)a2 + 1);
    v15[1] = v13 + v5;
    v15[0] = v12 + v4;
    v11 = *((float **)ClientActorMgr::spawnItem(
                        v9,
                        (const WCoord *)v15,
                        *v10,
                        *((_DWORD *)a2 + 2),
                        v8,
                        true,
                        *((_DWORD *)a2 + 7),
                        (int *)a2 + 8)
          + 17);
    v11[18] = COERCE_FLOAT(GenGaussian()) * 0.05;
    v11[19] = (float)(COERCE_FLOAT(GenGaussian()) * 0.05) + 0.2;
    this = COERCE_FLOAT(GenGaussian()) * 0.05;
    v11[20] = this;
  }
  return this;
}


//======================================================================
// WorldContainer::saveContainerCommon(flatbuffers::FlatBufferBuilder &)
// address: 0x002F9F9A   size: 0x26 (38 bytes)
//======================================================================
int __fastcall WorldContainer::saveContainerCommon(WorldContainer *this, const void **a2)
{
  __int64 v3; // [sp+Ch] [bp-Ch] BYREF
  int v4; // [sp+14h] [bp-4h]

  v3 = *((_QWORD *)this + 2);
  v4 = *((_DWORD *)this + 6);
  return FBSave::CreateContainerCommon(
           a2,
           (int)a2,
           *((_DWORD *)this + 8),
           *((_DWORD *)this + 9),
           (unsigned __int8 *)&v3,
           *((_DWORD *)this + 7));
}

