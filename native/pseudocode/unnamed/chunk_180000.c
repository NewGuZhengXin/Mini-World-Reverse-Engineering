// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_180000

//======================================================================
// sub_180D54
// address: 0x00180D54   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_180D54(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_181564
// address: 0x00181564   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_181564(_DWORD *a1)
{
  int v2; // r0

  while ( 1 )
  {
    a1[6] = 2;
    v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    a1[6] = v2;
    if ( v2 == 0 )
      break;
    if ( v2 == 1 )
    {
      if ( a1[5] == 1 )
      {
        a1[5] = 0;
        return 0;
      }
      Ogre::OSEvent::wait((Ogre::OSEvent *)(a1 + 2), 0xFFFFFFFF);
    }
  }
  return 0;
}


//======================================================================
// sub_181ABC
// address: 0x00181ABC   size: 0x19E (414 bytes)
//======================================================================
float __fastcall sub_181ABC(int a1, Ogre::DynamicBufferPool **a2, const Ogre::ShaderEnvData *a3)
{
  Ogre::DynamicIndexBuffer *v4; // r5
  void *v5; // r0
  _DWORD *v6; // r3
  int i; // r12
  _DWORD *v8; // r2
  _BYTE *v9; // r2
  int v10; // r2
  int v11; // r3
  float *WorldMatrix; // r6
  float *v13; // r5
  float v14; // r0
  Ogre::SceneRenderer *v15; // r1
  float result; // r0
  int v17; // [sp+20h] [bp-56Ch]
  int j; // [sp+20h] [bp-56Ch]
  Ogre::SceneRenderer *v20; // [sp+28h] [bp-564h]
  Ogre::DynamicVertexBuffer *v21; // [sp+2Ch] [bp-560h]
  Ogre::ShaderContext *v22; // [sp+2Ch] [bp-560h]
  _BYTE v24[56]; // [sp+38h] [bp-554h] BYREF
  float v25; // [sp+70h] [bp-51Ch]
  _DWORD v26[325]; // [sp+78h] [bp-514h] BYREF

  v21 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                       a2,
                                       (const Ogre::VertexFormat *)(a1 + 126296),
                                       *(_DWORD *)(a1 + 126320));
  v4 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(a2, 3 * *(_DWORD *)(a1 + 126324));
  v17 = Ogre::DynamicVertexBuffer::lock(v21);
  v5 = (void *)Ogre::DynamicIndexBuffer::lock(v4);
  v6 = (_DWORD *)v17;
  for ( i = 0; i < *(_DWORD *)(a1 + 126320); ++i )
  {
    v8 = (_DWORD *)(*(_DWORD *)(a1 + 126308) + 12 * i);
    *v6 = *v8;
    v6[1] = v8[1];
    v6[2] = v8[2];
    v9 = (_BYTE *)(v17 + 24 * i);
    v9[12] = -1;
    v9[13] = -1;
    v9[14] = -1;
    v9[15] = -1;
    v6[4] = *(_DWORD *)(*(_DWORD *)(a1 + 126312) + 8 * i);
    v10 = *(_DWORD *)(*(_DWORD *)(a1 + 126312) + 8 * i + 4);
    v6[5] = v10;
    v6 += 6;
  }
  j_memcpy(v5, *(const void **)(a1 + 126316), 6 * *(_DWORD *)(a1 + 126324));
  v11 = *(_DWORD *)(a1 + 126320);
  *((_DWORD *)v4 + 4) = 0;
  *((_DWORD *)v4 + 5) = v11;
  Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v26, a3);
  Ogre::ShaderEnvData::clearFlags((Ogre::ShaderEnvData *)v26);
  v22 = Ogre::SceneRenderer::newContext(
          (int)a2,
          2,
          v26,
          *(Ogre::Material **)(a1 + 126280),
          *(_DWORD *)(a1 + 126276),
          v21,
          v4,
          4,
          *(_DWORD *)(a1 + 126324),
          1);
  Ogre::ShaderContext::setInstanceEnvData(v22, (Ogre::SceneRenderer *)a2, nullptr, a3, nullptr);
  WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)a1);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v24);
  for ( j = 0; j != 64; j += 16 )
  {
    v13 = (float *)((char *)a3 + 956);
    v20 = nullptr;
    do
    {
      v14 = (float)((float)((float)(*WorldMatrix * *v13) + (float)(WorldMatrix[1] * v13[4]))
                  + (float)(WorldMatrix[2] * v13[8]))
          + (float)(WorldMatrix[3] * v13[12]);
      v15 = v20;
      ++v13;
      *(float *)&v24[j + (_DWORD)v20] = v14;
      v20 = (Ogre::SceneRenderer *)((char *)v20 + 4);
    }
    while ( v15 != (Ogre::SceneRenderer *)&byte_9[3] );
    WorldMatrix += 4;
  }
  result = (float)(v25 * 0.02) + (float)((float)*(int *)(a1 + 126336) * 0.0001);
  *((float *)v22 + 5) = result;
  return result;
}


//======================================================================
// sub_18578C
// address: 0x0018578C   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_18578C(int result, char *a2, unsigned int a3)
{
  char *i; // r3
  int v4; // r4

  for ( i = a2; i - a2 < a3; i += 4 )
  {
    *(_WORD *)result = *(_DWORD *)i;
    *(_BYTE *)(result + 2) = *((_WORD *)i + 1);
    v4 = *(_DWORD *)i;
    *(_BYTE *)(result + 3) = HIBYTE(v4);
    result += 4;
  }
  return result;
}


//======================================================================
// sub_1857B0
// address: 0x001857B0   size: 0x768 (1896 bytes)
//======================================================================
int __fastcall sub_1857B0(int *a1, unsigned __int8 *a2)
{
  int i; // r2
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r5
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r5
  int v15; // r0
  int v16; // r4
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r7
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r0
  int v37; // r1
  int v38; // r12
  int v39; // r1
  int v40; // r2
  int v41; // r0
  int v42; // r3
  int v43; // r1
  int v44; // r2
  int v45; // r12
  int v46; // r2
  int v47; // r3
  int v48; // r0
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r6
  int v53; // r3
  int v54; // r0
  int v55; // r2
  int v56; // r1
  int v57; // r3
  int v58; // r0
  int v59; // r2
  int v60; // r1
  int v61; // r3
  int v62; // r0
  int v63; // r2
  int v64; // r1
  int v65; // r3
  int v66; // r12
  int v67; // r3
  int v68; // r2
  int v69; // r1
  int v70; // r0
  int v71; // r3
  int v72; // r4
  int v75; // [sp+8h] [bp-94h]
  int v76; // [sp+Ch] [bp-90h]
  int v77; // [sp+50h] [bp-4Ch]
  int v78; // [sp+54h] [bp-48h]
  int v79; // [sp+58h] [bp-44h] BYREF
  int v80; // [sp+5Ch] [bp-40h]
  int v81; // [sp+60h] [bp-3Ch]
  int v82; // [sp+64h] [bp-38h]
  int v83; // [sp+68h] [bp-34h]
  int v84; // [sp+6Ch] [bp-30h]
  int v85; // [sp+70h] [bp-2Ch]
  int v86; // [sp+74h] [bp-28h]
  int v87; // [sp+78h] [bp-24h]
  int v88; // [sp+7Ch] [bp-20h]
  int v89; // [sp+80h] [bp-1Ch]
  int v90; // [sp+84h] [bp-18h]
  int v91; // [sp+88h] [bp-14h]
  int v92; // [sp+8Ch] [bp-10h]
  int v93; // [sp+90h] [bp-Ch]
  int v94; // [sp+94h] [bp-8h]

  v75 = a1[1];
  v78 = *a1;
  v76 = a1[2];
  v77 = a1[3];
  for ( i = 0; i != 64; i += 4 )
  {
    *(int *)((char *)&v79 + i) = (a2[3] << 24) | (a2[1] << 8) | (a2[2] << 16) | *a2;
    a2 += 4;
  }
  v3 = __ROR4__(v79 - 680876936 + v78 + (v77 & ~v75 | v75 & v76), 25) + v75;
  v4 = __ROR4__(v80 - 389564586 + v77 + (v75 & v3 | v76 & ~v3), 20) + v3;
  v5 = __ROR4__(v81 + 606105819 + v76 + (v3 & v4 | v75 & ~v4), 15) + v4;
  v6 = __ROR4__(v82 - 1044525330 + v75 + (v4 & v5 | v3 & ~v5), 10) + v5;
  v7 = __ROR4__(v3 + v83 - 176418897 + (v5 & v6 | v4 & ~v6), 25) + v6;
  v8 = __ROR4__(v4 + v84 + 1200080426 + (v6 & v7 | v5 & ~v7), 20) + v7;
  v9 = __ROR4__(v5 + v85 - 1473231341 + (v7 & v8 | v6 & ~v8), 15) + v8;
  v10 = __ROR4__(v6 + v86 - 45705983 + (v8 & v9 | v7 & ~v9), 10) + v9;
  v11 = __ROR4__(v7 + v87 + 1770035416 + (v9 & v10 | v8 & ~v10), 25) + v10;
  v12 = __ROR4__(v8 + v88 - 1958414417 + (v10 & v11 | v9 & ~v11), 20) + v11;
  v13 = __ROR4__(v9 + v89 - 42063 + (v11 & v12 | v10 & ~v12), 15) + v12;
  v14 = __ROR4__(v10 + v90 - 1990404162 + (v12 & v13 | v11 & ~v13), 10) + v13;
  v15 = __ROR4__(v11 + v91 + 1804603682 + (v13 & v14 | v12 & ~v14), 25) + v14;
  v16 = __ROR4__(v92 - 40341101 + v12 + (v14 & v15 | v13 & ~v15), 20) + v15;
  v17 = __ROR4__(v13 + v93 - 1502002290 + (v15 & v16 | v14 & ~v16), 15) + v16;
  v18 = __ROR4__(v14 + v94 + 1236535329 + (v16 & v17 | v15 & ~v17), 10) + v17;
  v19 = __ROR4__(v15 + v80 - 165796510 + (~v16 & v17 | v16 & v18), 27);
  v20 = v19 + v18;
  v21 = __ROR4__(v85 - 1069501632 + v16 + (~v17 & v18 | v17 & (v19 + v18)), 23) + v19 + v18;
  v22 = __ROR4__(v90 + 643717713 + v17 + ((v19 + v18) & ~v18 | v18 & v21), 18) + v21;
  v23 = __ROR4__(v79 - 373897302 + v18 + (v21 & ~(v19 + v18) | (v19 + v18) & v22), 12) + v22;
  v24 = __ROR4__(v20 + v84 - 701558691 + (v22 & ~v21 | v21 & v23), 27) + v23;
  v25 = __ROR4__(v21 + v89 + 38016083 + (v23 & ~v22 | v22 & v24), 23) + v24;
  v26 = __ROR4__(v22 + v94 - 660478335 + (v24 & ~v23 | v23 & v25), 18) + v25;
  v27 = __ROR4__(v23 + v83 - 405537848 + (v25 & ~v24 | v24 & v26), 12) + v26;
  v28 = __ROR4__(v24 + v88 + 568446438 + (v26 & ~v25 | v25 & v27), 27) + v27;
  v29 = __ROR4__(v25 + v93 - 1019803690 + (v27 & ~v26 | v26 & v28), 23) + v28;
  v30 = __ROR4__(v26 + v82 - 187363961 + (v28 & ~v27 | v27 & v29), 18) + v29;
  v31 = __ROR4__(v27 + v87 + 1163531501 + (v29 & ~v28 | v28 & v30), 12) + v30;
  v32 = __ROR4__(v28 + v92 - 1444681467 + (v30 & ~v29 | v29 & v31), 27) + v31;
  v33 = __ROR4__(v29 + v81 - 51403784 + (v31 & ~v30 | v30 & v32), 23) + v32;
  v34 = __ROR4__(v30 + v86 + 1735328473 + (v32 & ~v31 | v31 & v33), 18) + v33;
  v35 = __ROR4__(v91 - 1926607734 + v31 + (v33 & ~v32 | v32 & v34), 12) + v34;
  v36 = __ROR4__(v84 - 378558 + v32 + (v34 ^ v33 ^ v35), 28) + v35;
  v37 = __ROR4__(v87 - 2022574463 + v33 + (v35 ^ v34 ^ v36), 21);
  v38 = v37 + v36;
  v39 = __ROR4__(v90 + 1839030562 + v34 + (v36 ^ v35 ^ (v37 + v36)), 16) + v37 + v36;
  v40 = __ROR4__(v93 - 35309556 + v35 + (v38 ^ v36 ^ v39), 9) + v39;
  v41 = __ROR4__(v80 - 1530992060 + v36 + (v38 ^ v39 ^ v40), 28) + v40;
  v42 = __ROR4__((v40 ^ v39 ^ v41) + v38 + v83 + 1272893353, 21) + v41;
  v43 = __ROR4__((v41 ^ v40 ^ v42) + v86 - 155497632 + v39, 16) + v42;
  v44 = __ROR4__((v42 ^ v41 ^ v43) + v89 - 1094730640 + v40, 9);
  v45 = v44 + v43;
  v46 = __ROR4__(v92 + 681279174 + v41 + (v43 ^ v42 ^ (v44 + v43)), 28) + v44 + v43;
  v47 = __ROR4__(v79 - 358537222 + v42 + (v45 ^ v43 ^ v46), 21) + v46;
  v48 = __ROR4__(v82 - 722521979 + v43 + (v45 ^ v46 ^ v47), 16) + v47;
  v49 = __ROR4__((v47 ^ v46 ^ v48) + v45 + v85 + 76029189, 9) + v48;
  v50 = __ROR4__((v48 ^ v47 ^ v49) + v88 - 640364487 + v46, 28) + v49;
  v51 = __ROR4__(v47 + v91 - 421815835 + (v49 ^ v48 ^ v50), 21);
  v52 = v51 + v50;
  v53 = __ROR4__(v48 + v94 + 530742520 + (v50 ^ v49 ^ (v51 + v50)), 16) + v51 + v50;
  v54 = __ROR4__(v81 - 995338651 + v49 + (v52 ^ v50 ^ v53), 9) + v53;
  v55 = __ROR4__(v79 - 198630844 + v50 + ((~v52 | v54) ^ v53), 26) + v54;
  v56 = __ROR4__(v86 + 1126891415 + v52 + ((~v53 | v55) ^ v54), 22) + v55;
  v57 = __ROR4__(v93 - 1416354905 + v53 + ((~v54 | v56) ^ v55), 17) + v56;
  v58 = __ROR4__(v84 - 57434055 + v54 + ((~v55 | v57) ^ v56), 11) + v57;
  v59 = __ROR4__(((~v56 | v58) ^ v57) + v91 + 1700485571 + v55, 26) + v58;
  v60 = __ROR4__(((~v57 | v59) ^ v58) + v82 - 1894986606 + v56, 22) + v59;
  v61 = __ROR4__(((~v58 | v60) ^ v59) + v89 - 1051523 + v57, 17) + v60;
  v62 = __ROR4__(((~v59 | v61) ^ v60) + v80 - 2054922799 + v58, 11) + v61;
  v63 = __ROR4__(((~v60 | v62) ^ v61) + v87 + 1873313359 + v59, 26) + v62;
  v64 = __ROR4__(((~v61 | v63) ^ v62) + v94 - 30611744 + v60, 22) + v63;
  v65 = __ROR4__(((~v62 | v64) ^ v63) + v85 - 1560198380 + v61, 17);
  v66 = v65 + v64;
  v67 = __ROR4__(v92 + 1309151649 + v62 + ((~v63 | (v65 + v64)) ^ v64), 11) + v65 + v64;
  v68 = __ROR4__(v83 - 145523070 + v63 + ((~v64 | v67) ^ v66), 26) + v67;
  v69 = __ROR4__(v90 - 1120210379 + v64 + ((~v66 | v68) ^ v67), 22) + v68;
  v70 = __ROR4__(v81 + 718787259 + v66 + ((~v67 | v69) ^ v68), 17) + v69;
  v71 = v88 - 343485551 + v67 + ((~v68 | v70) ^ v69);
  *a1 = v68 + v78;
  v72 = v70 + v75;
  a1[2] = v70 + v76;
  a1[1] = v72 + __ROR4__(v71, 11);
  a1[3] = v69 + v77;
  return v77;
}


//======================================================================
// sub_1861B6
// address: 0x001861B6   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_1861B6(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_1861C0
// address: 0x001861C0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_1861C0(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_1868DC
// address: 0x001868DC   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_1868DC(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_1868E6
// address: 0x001868E6   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_1868E6(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_18B51C
// address: 0x0018B51C   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_18B51C(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_18B528
// address: 0x0018B528   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_18B528(unsigned int a1)
{
  if ( a1 > 0x3FFFFFFF )
    sub_3BCEB4(a1);
  return operator new(4 * a1);
}


//======================================================================
// sub_18EEB0
// address: 0x0018EEB0   size: 0x21A (538 bytes)
//======================================================================
float __fastcall sub_18EEB0(int a1, Ogre::SceneRenderer *a2, Ogre::ShaderEnvData *a3)
{
  unsigned int v4; // r3
  int v5; // r4
  float v6; // r7
  unsigned int v7; // r0
  _DWORD *v8; // r3
  float v9; // r2
  _BYTE *v10; // r3
  int v11; // r2
  float v12; // r0
  Ogre::DynamicIndexBuffer *v13; // r2
  Ogre::ShaderEnvData *v14; // r1
  int v15; // r3
  float v16; // r0
  float v17; // r1
  float v18; // r0
  float v19; // r1
  float v20; // r5
  int v21; // r5
  float *v22; // r4
  int v23; // r6
  float v24; // r3
  float v25; // r1
  float v26; // r7
  float v27; // r0
  float result; // r0
  Ogre::Matrix4 *v29; // [sp+0h] [bp-5ECh] BYREF
  int v30; // [sp+1Ch] [bp-5D0h]
  unsigned int v31; // [sp+2Ch] [bp-5C0h]
  float v32; // [sp+34h] [bp-5B8h]
  Ogre::DynamicIndexBuffer *v33; // [sp+38h] [bp-5B4h]
  Ogre::SceneRenderer *v34; // [sp+3Ch] [bp-5B0h]
  float v35; // [sp+40h] [bp-5ACh]
  Ogre::ShaderEnvData *v36; // [sp+44h] [bp-5A8h]
  Ogre::DynamicVertexBuffer *v37; // [sp+48h] [bp-5A4h]
  void *v38; // [sp+4Ch] [bp-5A0h]
  _BYTE *v39; // [sp+50h] [bp-59Ch]
  float *v40; // [sp+54h] [bp-598h]
  float v41[16]; // [sp+58h] [bp-594h] BYREF
  _BYTE v42[56]; // [sp+98h] [bp-554h] BYREF
  float v43; // [sp+D0h] [bp-51Ch]
  _DWORD v44[325]; // [sp+D8h] [bp-514h] BYREF

  v4 = *(_DWORD *)(a1 + 126300);
  v36 = a3;
  v34 = a2;
  v31 = v4;
  *(float *)&v37 = COERCE_FLOAT(
                     Ogre::SceneRenderer::newDynamicVB(
                       (Ogre::DynamicBufferPool **)a2,
                       (const Ogre::VertexFormat *)(a1 + 126288),
                       v4));
  v5 = 0;
  v33 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(
                                      (Ogre::DynamicBufferPool **)v34,
                                      3 * *(_DWORD *)(a1 + 126304));
  v35 = COERCE_FLOAT(Ogre::DynamicVertexBuffer::lock(v37));
  v6 = v35;
  *(float *)&v38 = COERCE_FLOAT(Ogre::DynamicIndexBuffer::lock(v33));
  while ( v5 < *(_DWORD *)(a1 + 126300) )
  {
    v7 = (unsigned int)(float)(*(float *)(4 * (v5 / (*(_DWORD *)(a1 + 126264) + 1)) + *(_DWORD *)(a1 + 126440)) * 255.0);
    v8 = (_DWORD *)(*(_DWORD *)(a1 + 126360) + 12 * v5);
    *(_DWORD *)LODWORD(v6) = *v8;
    *(_DWORD *)(LODWORD(v6) + 4) = v8[1];
    v9 = v35;
    *(_DWORD *)(LODWORD(v6) + 8) = v8[2];
    v10 = (_BYTE *)(LODWORD(v9) + 24 * v5);
    v10[12] = -1;
    v10[13] = -1;
    v10[14] = -1;
    v10[15] = v7;
    v11 = *(_DWORD *)(a1 + 126364);
    LODWORD(v32) = 8 * v5;
    v12 = *(float *)(v11 + 8 * v5++);
    *(float *)(LODWORD(v6) + 16) = v12 * *(float *)(a1 + 126268);
    *(_DWORD *)(LODWORD(v6) + 20) = *(_DWORD *)(*(_DWORD *)(a1 + 126364) + LODWORD(v32) + 4);
    LODWORD(v6) += 24;
  }
  v30 = *(_DWORD *)(a1 + 126304);
  j_memcpy(v38, *(const void **)(a1 + 126368), 6 * v30);
  v13 = v33;
  v14 = v36;
  v15 = *(_DWORD *)(a1 + 126300);
  *((_DWORD *)v33 + 4) = 0;
  *((_DWORD *)v13 + 5) = v15;
  Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v44, v14);
  Ogre::ShaderEnvData::clearFlags((Ogre::ShaderEnvData *)v44);
  v33 = Ogre::SceneRenderer::newContext(
          (int)v34,
          2,
          v44,
          *(Ogre::Material **)(a1 + 126276),
          *(_DWORD *)(a1 + 126272),
          v37,
          v33,
          4,
          *(_DWORD *)(a1 + 126304),
          1);
  Ogre::ShaderContext::setInstanceEnvData(v33, v34, nullptr, v36, nullptr);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v41);
  v16 = *(float *)(a1 + 126324);
  v17 = *(float *)(a1 + 126336);
  v34 = (Ogre::SceneRenderer *)(a1 + 126320);
  v18 = v16 + v17;
  v19 = *(float *)(a1 + 126340);
  *(float *)&v37 = v18 * 0.5;
  v20 = (float)(*(float *)(a1 + 126328) + v19) * 0.5;
  v41[12] = (float)(*(float *)(a1 + 126320) + *(float *)(a1 + 126332)) * 0.5;
  v41[13] = v18 * 0.5;
  v41[14] = v20;
  v41[15] = 1.0;
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v42);
  v21 = 0;
  v34 = (Ogre::SceneRenderer *)v41;
  v40 = (float *)((char *)v36 + 956);
  v36 = (Ogre::ShaderEnvData *)v42;
  do
  {
    v22 = v40;
    v37 = *(Ogre::Matrix4 **)((char *)&v29 + v21 * 4 + 88);
    v23 = 0;
    v35 = v41[v21 + 1];
    v24 = v41[v21 + 3];
    v32 = v41[v21 + 2];
    *(float *)&v38 = v24;
    do
    {
      v25 = *v22;
      v39 = &v42[v21 * 4];
      v26 = (float)((float)(*(float *)&v37 * v25) + (float)(v35 * v22[4])) + (float)(v32 * v22[8]);
      v27 = *(float *)&v38 * v22[12];
      ++v22;
      *(float *)&v39[v23] = v26 + v27;
      v23 += 4;
    }
    while ( v23 != 16 );
    v21 += 4;
  }
  while ( v21 != 16 );
  result = v43 * 0.0001;
  *((float *)v33 + 5) = v43 * 0.0001;
  return result;
}


//======================================================================
// sub_18F4D4
// address: 0x0018F4D4   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_18F4D4(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_18F4DE
// address: 0x0018F4DE   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_18F4DE(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}

