// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerVoronoiZoom

//======================================================================
// GenLayerVoronoiZoom::GenLayerVoronoiZoom(unsigned long long,GenLayer *)
// address: 0x002E3EB8   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN19GenLayerVoronoiZoomC2EyP8GenLayer'
void __fastcall GenLayerVoronoiZoom::GenLayerVoronoiZoom(GenLayerVoronoiZoom *this, unsigned __int64 a2, GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_4616C0;
}


//======================================================================
// GenLayerVoronoiZoom::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002E3ED8   size: 0x53C (1340 bytes)
//======================================================================
void **__fastcall GenLayerVoronoiZoom::getInts(GenLayer *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // r2
  int v7; // r3
  int v9; // r0
  int v10; // r0
  unsigned int v11; // r4
  char *v12; // r0
  int v13; // r3
  int v14; // r1
  int v15; // r7
  int v16; // r3
  int v17; // r4
  int v18; // r7
  int v19; // r5
  int v20; // r4
  double v21; // r0
  int v22; // r7
  double v23; // r0
  double v24; // r4
  int v25; // r0
  unsigned int v26; // r3
  unsigned int v27; // r1
  __int64 v28; // r0
  int v29; // r5
  int v30; // r4
  size_t k; // r6
  int v32; // r1
  double v34; // [sp+10h] [bp-FCh]
  double v36; // [sp+20h] [bp-ECh]
  double v37; // [sp+28h] [bp-E4h]
  int v38; // [sp+30h] [bp-DCh]
  int v39; // [sp+34h] [bp-D8h]
  int v40; // [sp+38h] [bp-D4h]
  int j; // [sp+3Ch] [bp-D0h]
  int i; // [sp+40h] [bp-CCh]
  int v43; // [sp+48h] [bp-C4h]
  int v44; // [sp+4Ch] [bp-C0h]
  int v45; // [sp+50h] [bp-BCh]
  int v46; // [sp+58h] [bp-B4h]
  int v47; // [sp+5Ch] [bp-B0h]
  int v48; // [sp+60h] [bp-ACh]
  char v49; // [sp+64h] [bp-A8h]
  char v50; // [sp+68h] [bp-A4h]
  int v51; // [sp+70h] [bp-9Ch]
  int v52; // [sp+74h] [bp-98h]
  int v53; // [sp+78h] [bp-94h]
  int v54; // [sp+7Ch] [bp-90h]
  int v55; // [sp+80h] [bp-8Ch]
  int v56; // [sp+84h] [bp-88h]
  double v57; // [sp+88h] [bp-84h]
  double v58; // [sp+90h] [bp-7Ch]
  double v59; // [sp+98h] [bp-74h]
  double v60; // [sp+A0h] [bp-6Ch]
  double v61; // [sp+A8h] [bp-64h]
  double v62; // [sp+B0h] [bp-5Ch]
  double v63; // [sp+B8h] [bp-54h]
  double v64; // [sp+C0h] [bp-4Ch]
  double v65; // [sp+C8h] [bp-44h]
  double v66; // [sp+D0h] [bp-3Ch]
  double v67; // [sp+D8h] [bp-34h]
  double v68; // [sp+E0h] [bp-2Ch]
  int v69; // [sp+E8h] [bp-24h]
  void *v70[3]; // [sp+F0h] [bp-1Ch] BYREF
  char *v71; // [sp+FCh] [bp-10h] BYREF
  char *v72; // [sp+100h] [bp-Ch]
  char *v73; // [sp+104h] [bp-8h]

  v6 = a3 - 2;
  v7 = a4 - 2;
  v43 = v6 >> 2;
  v44 = v7 >> 2;
  v45 = a5 >> 2;
  v9 = *((_DWORD *)a1 + 8);
  v50 = v7;
  memset(v70, 0, sizeof(v70));
  v49 = v6;
  v10 = (*(int (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v9 + 8))(
          v9,
          v70,
          v6 >> 2,
          v7 >> 2,
          (a5 >> 2) + 3,
          (a6 >> 2) + 3);
  v11 = 4 * ((a6 >> 2) + 3) * 4 * ((a5 >> 2) + 3);
  v38 = 4 * ((a5 >> 2) + 3);
  v71 = nullptr;
  v72 = nullptr;
  v73 = nullptr;
  if ( v11 != 0 )
  {
    if ( v11 > 0x3FFFFFFF )
      sub_3BCEB4(v10);
    v12 = (char *)operator new(4 * v11);
  }
  else
  {
    v12 = nullptr;
  }
  v73 = &v12[4 * v11];
  v71 = v12;
  memset(v12, 0, 4 * v11);
  v13 = v44;
  v39 = 0;
  v72 = v73;
  while ( v13 - v44 < (a6 >> 2) + 2 )
  {
    v14 = 4 * (v13 - v44);
    v47 = *((_DWORD *)v70[0] + v39);
    v40 = 4 * v39 + 4;
    v15 = 4 * v13;
    v16 = v13 + 1;
    v51 = v15;
    v52 = 4 * v16;
    v69 = v38 * v14;
    v17 = v43;
    v48 = *((_DWORD *)v70[0] + v45 + v39 + 3);
    v55 = v16;
    while ( 1 )
    {
      v18 = v17 - v43;
      if ( v17 - v43 >= v45 + 2 )
        break;
      v19 = 4 * v17;
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, 4 * v17, v51);
      v57 = ((double)(int)GenLayer::nextInt(a1, 0x400u) * 0.0009765625 - 0.5) * 3.6;
      v56 = v17 + 1;
      v20 = 4 * (v17 + 1);
      v58 = ((double)(int)GenLayer::nextInt(a1, 0x400u) * 0.0009765625 - 0.5) * 3.6;
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, v20, v51);
      v59 = ((double)(int)GenLayer::nextInt(a1, 0x400u) * 0.0009765625 - 0.5) * 3.6 + 4.0;
      v60 = ((double)(int)GenLayer::nextInt(a1, 0x400u) * 0.0009765625 - 0.5) * 3.6;
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, v19, v52);
      v61 = ((double)(int)GenLayer::nextInt(a1, 0x400u) * 0.0009765625 - 0.5) * 3.6;
      v62 = ((double)(int)GenLayer::nextInt(a1, 0x400u) * 0.0009765625 - 0.5) * 3.6 + 4.0;
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, v20, v52);
      v63 = ((double)(int)GenLayer::nextInt(a1, 0x400u) * 0.0009765625 - 0.5) * 3.6 + 4.0;
      v64 = ((double)(int)GenLayer::nextInt(a1, 0x400u) * 0.0009765625 - 0.5) * 3.6 + 4.0;
      v53 = *(_DWORD *)((char *)v70[0] + v40);
      v54 = *(_DWORD *)((char *)v70[0] + 4 * v45 + v40 + 12);
      v46 = v69 + 4 * v18 + 1;
      for ( i = 0; i != 4; ++i )
      {
        v21 = (double)i;
        v65 = (v21 - v58) * (v21 - v58);
        v66 = (v21 - v60) * (v21 - v60);
        v67 = (v21 - v62) * (v21 - v62);
        v68 = (v21 - v64) * (v21 - v64);
        v22 = 4 * (v46 + 0x3FFFFFFF);
        for ( j = 0; j != 4; ++j )
        {
          v23 = (double)j;
          v34 = v65 + (v23 - v57) * (v23 - v57);
          v36 = v66 + (v23 - v59) * (v23 - v59);
          v37 = v67 + (v23 - v61) * (v23 - v61);
          v24 = v68 + (v23 - v63) * (v23 - v63);
          if ( v34 >= v36 || v34 >= v37 || v34 >= v24 )
          {
            if ( v36 >= v34 || v36 >= v37 || v36 >= v24 )
            {
              if ( v37 >= v34 || v37 >= v36 || v37 >= v24 )
                v25 = v54;
              else
                v25 = v48;
            }
            else
            {
              v25 = v53;
            }
          }
          else
          {
            v25 = v47;
          }
          *(_DWORD *)&v71[v22] = v25;
          v22 += 4;
        }
        v46 += v38;
      }
      v17 = v56;
      v40 += 4;
      v48 = v54;
      v47 = v53;
    }
    v13 = v55;
    v39 += (a5 >> 2) + 3;
  }
  v26 = a6 * a5;
  v27 = (a2[1] - *a2) >> 2;
  if ( a6 * a5 <= v27 )
  {
    if ( v26 < v27 )
      a2[1] = *a2 + 4 * v26;
  }
  else
  {
    HIDWORD(v28) = v26 - v27;
    LODWORD(v28) = a2;
    std::vector<int>::_M_default_append(v28);
  }
  v29 = 0;
  v30 = 0;
  for ( k = 4 * a5; ; j_memcpy((void *)(*a2 + v29 - 4 * a5), &v71[4 * v32 + 4 * (v49 & 3)], k) )
  {
    v29 += k;
    if ( v30 >= a6 )
      break;
    v32 = (v30 + (v50 & 3)) * v38;
    ++v30;
  }
  std::_Vector_base<int>::~_Vector_base((void **)&v71);
  return std::_Vector_base<int>::~_Vector_base(v70);
}

