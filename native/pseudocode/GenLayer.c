// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayer

//======================================================================
// GenLayer::initWorldGenSeed(unsigned long long)
// address: 0x002DF4A0   size: 0x8E (142 bytes)
//======================================================================
__int64 __fastcall GenLayer::initWorldGenSeed(GenLayer *this, unsigned __int64 a2)
{
  void (__fastcall ***v3)(_DWORD); // r0
  __int64 v4; // r6
  __int64 v5; // r0
  __int64 v7; // [sp+0h] [bp-Ch]

  LODWORD(v7) = this;
  *((_QWORD *)this + 1) = a2;
  HIDWORD(v7) = this;
  v3 = *((void (__fastcall ****)(_DWORD))this + 8);
  if ( v3 != nullptr )
    (**v3)(v3);
  v4 = *(_QWORD *)(HIDWORD(v7) + 24);
  v5 = 0x5851F42D4C957F2DLL * *(_QWORD *)(HIDWORD(v7) + 8);
  *(_QWORD *)(HIDWORD(v7) + 8) = (0x5851F42D4C957F2DLL
                                * ((0x5851F42D4C957F2DLL
                                  * ((v5 + 0x14057B7EF767814FLL) * *(_QWORD *)(HIDWORD(v7) + 8) + v4)
                                  + 0x14057B7EF767814FLL)
                                 * ((v5 + 0x14057B7EF767814FLL) * *(_QWORD *)(HIDWORD(v7) + 8) + v4)
                                 + v4)
                                + 0x14057B7EF767814FLL)
                               * ((0x5851F42D4C957F2DLL
                                 * ((v5 + 0x14057B7EF767814FLL) * *(_QWORD *)(HIDWORD(v7) + 8) + v4)
                                 + 0x14057B7EF767814FLL)
                                * ((v5 + 0x14057B7EF767814FLL) * *(_QWORD *)(HIDWORD(v7) + 8) + v4)
                                + v4)
                               + v4;
  return v7;
}


//======================================================================
// GenLayer::initChunkSeed(int,int)
// address: 0x002DF540   size: 0xA8 (168 bytes)
//======================================================================
__int64 __fastcall GenLayer::initChunkSeed(GenLayer *this, int a2, int a3)
{
  __int64 v3; // r0
  __int64 v4; // r4
  __int64 result; // r0
  __int64 v6; // [sp+0h] [bp-1Ch]

  v6 = a2;
  v3 = (0x5851F42D4C957F2DLL * *((_QWORD *)this + 1) + 0x14057B7EF767814FLL) * *((_QWORD *)this + 1);
  v4 = v6 + v3;
  result = (0x5851F42D4C957F2DLL
          * (v6
           + (0x5851F42D4C957F2DLL * (a3 + (0x5851F42D4C957F2DLL * (v6 + v3) + 0x14057B7EF767814FLL) * v4)
            + 0x14057B7EF767814FLL)
           * (a3 + (0x5851F42D4C957F2DLL * (v6 + v3) + 0x14057B7EF767814FLL) * v4))
          + 0x14057B7EF767814FLL)
         * (v6
          + (0x5851F42D4C957F2DLL * (a3 + (0x5851F42D4C957F2DLL * (v6 + v3) + 0x14057B7EF767814FLL) * v4)
           + 0x14057B7EF767814FLL)
          * (a3 + (0x5851F42D4C957F2DLL * (v6 + v3) + 0x14057B7EF767814FLL) * v4))
         + a3;
  *((_QWORD *)this + 2) = result;
  return result;
}


//======================================================================
// GenLayer::nextInt(unsigned int)
// address: 0x002DF610   size: 0x42 (66 bytes)
//======================================================================
unsigned int __fastcall GenLayer::nextInt(GenLayer *this, unsigned int a2)
{
  unsigned int v2; // r5
  __int64 v5; // r0

  v2 = *((_DWORD *)this + 5);
  LODWORD(v5) = *((_DWORD *)this + 4);
  HIDWORD(v5) = v2;
  *((_QWORD *)this + 2) = (0x5851F42D4C957F2DLL * v5 + 0x14057B7EF767814FLL) * __PAIR64__(v2, v5)
                        + *((_QWORD *)this + 1);
  return (BYTE3(v5) | (v2 << 8)) % a2;
}


//======================================================================
// GenLayer::initializeAllBiomeGenerators(unsigned long long,TERRAIN_TYPE,GenLayer*&,GenLayer*&)
// address: 0x002DF668   size: 0x286 (646 bytes)
//======================================================================
int __fastcall GenLayer::initializeAllBiomeGenerators(
        int a1,
        int a2,
        int a3,
        GenLayerRiverMix **a4,
        GenLayerVoronoiZoom **a5)
{
  GenLayerIsland *v6; // r4
  GenLayerFuzzyZoom *v7; // r6
  GenLayerAddIsland *v8; // r4
  GenLayerZoom *v9; // r6
  GenLayerAddIsland *v10; // r4
  GenLayerAddSnow *v11; // r6
  GenLayerZoom *v12; // r4
  GenLayerAddIsland *v13; // r6
  GenLayerZoom *v14; // r4
  GenLayerAddIsland *v15; // r6
  GenLayerAddMushroomIsland *v16; // r4
  GenLayer *v17; // r7
  GenLayerRiverInit *v18; // r6
  unsigned __int64 v19; // r2
  GenLayer *v20; // r6
  GenLayerRiver *v21; // r7
  GenLayer *v22; // r7
  GenLayer *v23; // r4
  GenLayer *v24; // r5
  GenLayerHills *v25; // r4
  __int64 v26; // r6
  GenLayerZoom *v27; // r5
  GenLayerAddIsland *v28; // r4
  GenLayerSmooth *v29; // r5
  GenLayerRiverMix *v30; // r4
  GenLayerVoronoiZoom *v31; // r5
  int result; // r0
  GenLayer *v33; // [sp+0h] [bp-24h]
  GenLayer *v34; // [sp+0h] [bp-24h]
  GenLayer *v35; // [sp+0h] [bp-24h]
  GenLayer *v36; // [sp+0h] [bp-24h]
  GenLayer *v37; // [sp+4h] [bp-20h]
  GenLayer *v38; // [sp+4h] [bp-20h]
  GenLayer *v39; // [sp+4h] [bp-20h]
  int v40; // [sp+8h] [bp-1Ch]
  GenLayer *v41; // [sp+Ch] [bp-18h]
  GenLayer *v44; // [sp+18h] [bp-Ch]

  v6 = (GenLayerIsland *)operator new(0x28u);
  GenLayerIsland::GenLayerIsland(v6, 1u);
  v7 = (GenLayerFuzzyZoom *)operator new(0x28u);
  GenLayerFuzzyZoom::GenLayerFuzzyZoom(v7, 0x7D0u, v6);
  v8 = (GenLayerAddIsland *)operator new(0x28u);
  GenLayerAddIsland::GenLayerAddIsland(v8, 1u, v7);
  v9 = (GenLayerZoom *)operator new(0x28u);
  GenLayerZoom::GenLayerZoom(v9, 0x7D1u, v8);
  v10 = (GenLayerAddIsland *)operator new(0x28u);
  GenLayerAddIsland::GenLayerAddIsland(v10, 2u, v9);
  v11 = (GenLayerAddSnow *)operator new(0x28u);
  GenLayerAddSnow::GenLayerAddSnow(v11, 2u, v10);
  v12 = (GenLayerZoom *)operator new(0x28u);
  GenLayerZoom::GenLayerZoom(v12, 0x7D2u, v11);
  v13 = (GenLayerAddIsland *)operator new(0x28u);
  GenLayerAddIsland::GenLayerAddIsland(v13, 3u, v12);
  v14 = (GenLayerZoom *)operator new(0x28u);
  GenLayerZoom::GenLayerZoom(v14, 0x7D3u, v13);
  v15 = (GenLayerAddIsland *)operator new(0x28u);
  GenLayerAddIsland::GenLayerAddIsland(v15, 4u, v14);
  v16 = (GenLayerAddMushroomIsland *)operator new(0x28u);
  GenLayerAddMushroomIsland::GenLayerAddMushroomIsland(v16, 5u, v15);
  if ( a3 == 3 )
    v40 = 6;
  else
    v40 = 4;
  v17 = GenLayerZoom::magnify(0x3E8u, (unsigned int)v16, v33, (int)v37);
  v18 = (GenLayerRiverInit *)operator new(0x28u);
  GenLayerRiverInit::GenLayerRiverInit(v18, 0x64u, v17);
  LODWORD(v19) = v18;
  HIDWORD(v19) = v40 + 2;
  v20 = GenLayerZoom::magnify(0x3E8u, v19, v34, (int)v38);
  v21 = (GenLayerRiver *)operator new(0x28u);
  GenLayerRiver::GenLayerRiver(v21, 1u, v20);
  v41 = (GenLayer *)operator new(0x28u);
  GenLayerSmooth::GenLayerSmooth(v41, 0x3E8u, v21);
  v22 = GenLayerZoom::magnify(0x3E8u, (unsigned int)v16, v35, (int)v39);
  v23 = (GenLayer *)operator new(0x38u);
  GenLayerBiome::GenLayerBiome(v23, 0xC8u, v22);
  v24 = GenLayerZoom::magnify(0x3E8u, (unsigned int)v23 | 0x200000000LL, v36, a3);
  v25 = (GenLayerHills *)operator new(0x28u);
  GenLayerHills::GenLayerHills(v25, 0x3E8u, v24);
  v26 = 0;
  do
  {
    v27 = (GenLayerZoom *)operator new(0x28u);
    GenLayerZoom::GenLayerZoom(v27, v26 + 1000, v25);
    if ( (_DWORD)v26 != 0 )
    {
      if ( (_DWORD)v26 == 1 )
      {
        v44 = (GenLayer *)operator new(0x28u);
        GenLayerShore::GenLayerShore(v44, 0x3E8u, v27);
        v25 = (GenLayerHills *)operator new(0x28u);
        GenLayerSwampRiver::GenLayerSwampRiver(v25, 0x3E8u, v44);
        goto LABEL_9;
      }
    }
    else
    {
      v28 = (GenLayerAddIsland *)operator new(0x28u);
      GenLayerAddIsland::GenLayerAddIsland(v28, 3u, v27);
      v27 = v28;
    }
    v25 = v27;
LABEL_9:
    ++v26;
  }
  while ( v40 > (int)v26 );
  v29 = (GenLayerSmooth *)operator new(0x28u);
  GenLayerSmooth::GenLayerSmooth(v29, 0x3E8u, v25);
  v30 = (GenLayerRiverMix *)operator new(0x30u);
  GenLayerRiverMix::GenLayerRiverMix(v30, 0x64u, v29, v41);
  v31 = (GenLayerVoronoiZoom *)operator new(0x28u);
  GenLayerVoronoiZoom::GenLayerVoronoiZoom(v31, 0xAu, v30);
  (**(void (__fastcall ***)(GenLayerRiverMix *, _DWORD, int, int))v30)(v30, **(_DWORD **)v30, a1, a2);
  result = (**(int (__fastcall ***)(GenLayerVoronoiZoom *, _DWORD, int, int))v31)(v31, **(_DWORD **)v31, a1, a2);
  *a4 = v30;
  *a5 = v31;
  return result;
}


//======================================================================
// GenLayer::releaseAllBiomeGenerators(void)
// address: 0x002DF918   size: 0x24 (36 bytes)
//======================================================================
int __fastcall GenLayer::releaseAllBiomeGenerators(GenLayer *this)
{
  unsigned int i; // r4
  int result; // r0

  for ( i = 0; ; ++i )
  {
    result = dword_517418;
    if ( i >= (dword_517418 - dword_517414) >> 2 )
      break;
    operator delete(*(void **)(4 * i + dword_517414));
  }
  dword_517418 = dword_517414;
  return result;
}


//======================================================================
// GenLayer::GenLayer(unsigned long long,GenLayer*)
// address: 0x002DF9C0   size: 0xBA (186 bytes)
//======================================================================
// Alternative name is '_ZN8GenLayerC1EyPS_'
void __fastcall GenLayer::GenLayer(GenLayer *this, unsigned __int64 a2, GenLayer *a3)
{
  __int64 v4; // [sp+0h] [bp-10h]
  GenLayer *v5; // [sp+Ch] [bp-4h] BYREF

  *((_DWORD *)this + 8) = a3;
  *(_DWORD *)this = &off_461238;
  *((_DWORD *)this + 9) = 1;
  v4 = (0x5851F42D4C957F2DLL * ((0x5851F42D4C957F2DLL * a2 + 0x14057B7EF767814FLL) * a2 + a2) + 0x14057B7EF767814FLL)
     * ((0x5851F42D4C957F2DLL * a2 + 0x14057B7EF767814FLL) * a2 + a2)
     + a2;
  *((_QWORD *)this + 3) = a2 + (0x5851F42D4C957F2DLL * v4 + 0x14057B7EF767814FLL) * v4;
  v5 = this;
  if ( dword_517418 == dword_51741C )
  {
    std::vector<GenLayer *>::_M_emplace_back_aux<GenLayer * const&>((int)&dword_517414, &v5);
  }
  else
  {
    if ( dword_517418 != 0 )
      *(_DWORD *)dword_517418 = this;
    dword_517418 += 4;
  }
}

