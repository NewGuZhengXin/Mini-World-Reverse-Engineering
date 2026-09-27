// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_310000

//======================================================================
// sub_313B22
// address: 0x00313B22   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_313B22(int result, char *a2, unsigned int a3)
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
// sub_313B48
// address: 0x00313B48   size: 0x768 (1896 bytes)
//======================================================================
int __fastcall sub_313B48(int *a1, unsigned __int8 *a2)
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
// sub_3145B8
// address: 0x003145B8   size: 0x10 (16 bytes)
//======================================================================
size_t __fastcall sub_3145B8(void *a1, size_t n, FILE *stream)
{
  return j_fread(a1, 1u, n, stream);
}


//======================================================================
// sub_3145C8
// address: 0x003145C8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3145C8(FILE *a1)
{
  return j_fclose(a1);
}


//======================================================================
// sub_3145D0
// address: 0x003145D0   size: 0xC (12 bytes)
//======================================================================
FILE *__fastcall sub_3145D0(const char *a1)
{
  return j_fopen(a1, "rb");
}


//======================================================================
// sub_31B832
// address: 0x0031B832   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_31B832(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45)
{
  int v45; // r4

  if ( v45 == a45 )
    a1 = sub_31C330();
  return sub_31B842(a1);
}


//======================================================================
// sub_31B842
// address: 0x0031B842   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_31B842(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46)
{
  int v46; // r4

  if ( v46 == a46 )
    a1 = ((int (*)(void))loc_31C316)();
  return sub_31B852(a1);
}


//======================================================================
// sub_31B852
// address: 0x0031B852   size: 0xA8C (2700 bytes)
//======================================================================
int __fastcall sub_31B852(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int *a36,
        int a37,
        unsigned int a38,
        unsigned int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        unsigned int a45,
        unsigned int a46,
        unsigned int a47,
        unsigned int a48)
{
  unsigned int v48; // r4
  double *v49; // r6
  int v50; // r7
  int v51; // kr00_4
  int v52; // r7
  double v53; // r4
  int v54; // r0
  double v55; // r4
  double v56; // r2
  int v57; // r0
  double v58; // r4
  double v59; // r2
  double v61; // r4
  double v62; // r4
  double v63; // r4
  double v64; // r4
  double v65; // r4
  double v66; // r4
  double v67; // r4
  double v68; // r4
  double v69; // r4
  double v70; // [sp+30h] [bp+30h]
  double v71; // [sp+30h] [bp+30h]
  double v72; // [sp+30h] [bp+30h]
  double v73; // [sp+30h] [bp+30h]
  double v74; // [sp+30h] [bp+30h]
  double v75; // [sp+38h] [bp+38h]
  double v76; // [sp+38h] [bp+38h]
  double v77; // [sp+38h] [bp+38h]
  double v78; // [sp+38h] [bp+38h]
  double v79; // [sp+40h] [bp+40h]
  double v80; // [sp+48h] [bp+48h]
  double v81; // [sp+48h] [bp+48h]
  double v82; // [sp+48h] [bp+48h]
  double v83; // [sp+48h] [bp+48h]
  double v84; // [sp+50h] [bp+50h]
  double v85; // [sp+50h] [bp+50h]
  double v86; // [sp+50h] [bp+50h]
  double v87; // [sp+50h] [bp+50h]
  double v88; // [sp+58h] [bp+58h]
  double v89; // [sp+58h] [bp+58h]
  double v90; // [sp+58h] [bp+58h]
  double v91; // [sp+58h] [bp+58h]
  double v92; // [sp+58h] [bp+58h]
  double v93; // [sp+60h] [bp+60h]
  double v94; // [sp+60h] [bp+60h]
  double v95; // [sp+68h] [bp+68h]
  double v96; // [sp+70h] [bp+70h]
  double v97; // [sp+90h] [bp+90h]
  double v98; // [sp+98h] [bp+98h]

  if ( v48 == a47 )
    sub_31C30E();
  v70 = (double)a38 / (double)a45;
  v95 = (double)a39 / (double)a46;
  v96 = (double)v48 / (double)a47;
  if ( a48 > 7 )
LABEL_4:
    sub_31C2DE();
  v51 = v50;
  v52 = *a36;
  switch ( a48 )
  {
    case 0u:
      v53 = *v49 + v70 * (v49[3] - *v49);
      v54 = (*(int (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(v52 + 16))(
              a36,
              *(_DWORD *)(v52 + 16),
              LODWORD(v53),
              HIDWORD(v53));
      sub_31C2E2(v54);
      goto LABEL_7;
    case 1u:
LABEL_7:
      v75 = v49[6];
      v79 = v49[9] - v75;
      v70 = v70 * (v49[3] - *v49) / v79;
      v88 = j_cos(v70 * 6.2831853);
      j_sin(v70 * 6.2831853);
      (*(void (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(v52 + 20))(
        a36,
        *(_DWORD *)(v52 + 20),
        COERCE_UNSIGNED_INT64(v75 + v88 * v79 / 6.2831853),
        HIDWORD(COERCE_UNSIGNED_INT64(v75 + v88 * v79 / 6.2831853)));
      goto LABEL_8;
    case 2u:
LABEL_8:
      v80 = *v49;
      v55 = v95 * (v49[4] - v49[1]) / (v49[10] - v49[7]) * 6.2831853;
      j_cos(v55);
      j_sin(v55);
      v56 = v80 + v70 * (v49[3] - v80);
      v57 = (*(int (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(*a36 + 20))(
              a36,
              *(_DWORD *)(*a36 + 20),
              LODWORD(v56),
              HIDWORD(v56));
      return sub_31C2E2(v57);
    case 3u:
      v81 = *v49;
      v58 = v96 * (v49[5] - v49[2]) / (v49[11] - v49[8]) * 6.2831853;
      j_cos(v58);
      j_sin(v58);
      v59 = v81 + v70 * (v49[3] - v81);
      v57 = (*(int (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(v52 + 20))(
              a36,
              *(_DWORD *)(v52 + 20),
              LODWORD(v59),
              HIDWORD(v59));
      return sub_31C2E2(v57);
    case 4u:
      v76 = v49[6];
      v82 = v49[9] - v76;
      v84 = v49[10] - v49[7];
      v89 = v95 * (v49[4] - v49[1]);
      v61 = v70 * (v49[3] - *v49) / v82 * 6.2831853;
      v71 = j_cos(v61);
      j_sin(v61);
      v62 = v89 / v84 * 6.2831853;
      v72 = v76 + v71 * v82 / 6.2831853;
      j_cos(v62);
      j_sin(v62);
      goto LABEL_16;
    case 5u:
      v77 = v49[6];
      v83 = v49[9] - v77;
      v85 = v49[11] - v49[8];
      v90 = v96 * (v49[5] - v49[2]);
      v63 = v70 * (v49[3] - *v49) / v83 * 6.2831853;
      v73 = j_cos(v63);
      j_sin(v63);
      v64 = v90 / v85 * 6.2831853;
      j_cos(v64);
      j_sin(v64);
      v72 = v77 + v73 * v83 / 6.2831853;
      goto LABEL_16;
    case 6u:
      v93 = *v49;
      v86 = v49[11] - v49[8];
      v91 = v96 * (v49[5] - v49[2]);
      v65 = v95 * (v49[4] - v49[1]) / (v49[10] - v49[7]) * 6.2831853;
      j_cos(v65);
      j_sin(v65);
      v66 = v91 / v86 * 6.2831853;
      j_cos(v66);
      j_sin(v66);
      v72 = v93 + v70 * (v49[3] - v93);
      goto LABEL_16;
    case 7u:
      v78 = v49[6];
      v87 = v49[9] - v78;
      v94 = v49[10] - v49[7];
      v92 = v49[11] - v49[8];
      v97 = v95 * (v49[4] - v49[1]);
      v98 = v96 * (v49[5] - v49[2]);
      v67 = v70 * (v49[3] - *v49) / v87 * 6.2831853;
      v74 = j_cos(v67);
      j_sin(v67);
      v68 = v97 / v94 * 6.2831853;
      j_cos(v68);
      j_sin(v68);
      v69 = v98 / v92 * 6.2831853;
      v72 = v78 + v74 * v87 / 6.2831853;
      j_cos(v69);
      j_sin(v69);
LABEL_16:
      v57 = (*(int (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(v52 + 24))(
              a36,
              *(_DWORD *)(v52 + 24),
              LODWORD(v72),
              HIDWORD(v72));
      return sub_31C2E2(v57);
    default:
      v50 = v51;
      goto LABEL_4;
  }
}


//======================================================================
// sub_31C2DE
// address: 0x0031C2DE   size: 0x4 (4 bytes)
//======================================================================
int sub_31C2DE()
{
  return sub_31C2E2(0);
}


//======================================================================
// sub_31C2E2
// address: 0x0031C2E2   size: 0x2C (44 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0031C2E2  LDR     R4, [SP,#arg_80]
//   0031C2E4  LDR     R2, [SP,#arg_8C]
//   0031C2E6  LDR     R4, [R4,#4]
//   0031C2E8  MOVS    R3, R4
//   0031C2EA  MULS    R3, R2
//   0031C2EC  LDR     R2, [SP,#arg_80]
//   0031C2EE  LDR     R4, [SP,#arg_88]
//   0031C2F0  LDR     R2, [R2]
//   0031C2F2  ADDS    R3, R3, R4
//   0031C2F4  LDR     R4, [SP,#arg_84]
//   0031C2F6  MULS    R3, R2
//   0031C2F8  LDR     R2, [SP,#arg_80]
//   0031C2FA  ADDS    R3, R3, R4
//   0031C2FC  LDR     R4, [SP,#arg_8C]
//   0031C2FE  LDR     R2, [R2,#0xC]
//   0031C300  LSLS    R3, R3, #3
//   0031C302  ADDS    R4, #1
//   0031C304  ADDS    R3, R2, R3
//   0031C306  STR     R0, [R3]
//   0031C308  STR     R1, [R3,#4]
//   0031C30A  BL      sub_31B852

//======================================================================
// sub_31C30E
// address: 0x0031C30E   size: 0x8 (8 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0031C30E  LDR     R4, [SP,#arg_88]
//   0031C310  ADDS    R4, #1
//   0031C312  BL      sub_31B842

//======================================================================
// sub_31C330
// address: 0x0031C330   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_31C330(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_31C354
// address: 0x0031C354   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_31C354(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45)
{
  if ( a38 == a45 )
    a1 = sub_31CE8A();
  return sub_31C364(a1);
}


//======================================================================
// sub_31C364
// address: 0x0031C364   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_31C364(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46)
{
  if ( a39 == a46 )
    a1 = sub_31CE80();
  return sub_31C372(a1);
}


//======================================================================
// sub_31C372
// address: 0x0031C372   size: 0xAAC (2732 bytes)
//======================================================================
int __fastcall sub_31C372(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int *a36,
        int a37,
        unsigned int a38,
        unsigned int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        unsigned int a45,
        unsigned int a46,
        unsigned int a47,
        unsigned int a48,
        char a49)
{
  unsigned int v49; // r4
  int v50; // r7
  unsigned int v51; // r6
  unsigned int v52; // kr00_4
  int v53; // r6
  double v54; // r4
  int v55; // r0
  double v56; // r4
  double v57; // r4
  double v58; // r2
  int v59; // r0
  double v60; // r4
  double v61; // r2
  double v63; // r4
  double v64; // r4
  double v65; // r4
  double v66; // r4
  double v67; // r4
  double v68; // r4
  double v69; // r4
  double v70; // r4
  double v71; // r4
  double v72; // r4
  double v73; // r4
  double v74; // r4
  double v75; // [sp+30h] [bp+30h]
  double v76; // [sp+30h] [bp+30h]
  double v77; // [sp+30h] [bp+30h]
  double v78; // [sp+30h] [bp+30h]
  double v79; // [sp+30h] [bp+30h]
  double v80; // [sp+38h] [bp+38h]
  double v81; // [sp+38h] [bp+38h]
  double v82; // [sp+38h] [bp+38h]
  double v83; // [sp+38h] [bp+38h]
  double v84; // [sp+40h] [bp+40h]
  double v85; // [sp+48h] [bp+48h]
  double v86; // [sp+48h] [bp+48h]
  double v87; // [sp+48h] [bp+48h]
  double v88; // [sp+48h] [bp+48h]
  double v89; // [sp+50h] [bp+50h]
  double v90; // [sp+50h] [bp+50h]
  double v91; // [sp+50h] [bp+50h]
  double v92; // [sp+50h] [bp+50h]
  double v93; // [sp+58h] [bp+58h]
  double v94; // [sp+58h] [bp+58h]
  double v95; // [sp+58h] [bp+58h]
  double v96; // [sp+58h] [bp+58h]
  double v97; // [sp+58h] [bp+58h]
  double v98; // [sp+60h] [bp+60h]
  double v99; // [sp+60h] [bp+60h]
  double v100; // [sp+68h] [bp+68h]
  double v101; // [sp+70h] [bp+70h]
  double v102; // [sp+90h] [bp+90h]
  double v103; // [sp+98h] [bp+98h]

  v51 = a47;
  if ( v49 == a47 )
    ((void (*)(void))loc_31CE60)();
  v75 = (double)a38 / (double)a45;
  v100 = (double)a39 / (double)a46;
  v101 = (double)v49 / (double)a47;
  if ( a48 > 7 )
LABEL_4:
    sub_31CE28();
  v52 = v51;
  v53 = *a36;
  switch ( a48 )
  {
    case 0u:
      v54 = *(double *)v50 + v75 * (*(double *)(v50 + 24) - *(double *)v50);
      v53 = *(_DWORD *)(v53 + 12);
      v55 = ((int (__fastcall *)(char *, int *, _DWORD, _DWORD))v53)(&a49, a36, LODWORD(v54), HIDWORD(v54));
      sub_31CE1E(v55);
      goto LABEL_7;
    case 1u:
LABEL_7:
      HIDWORD(v56) = *(_DWORD *)(v50 + 52);
      LODWORD(v80) = *(_DWORD *)(v50 + 48);
      __SET_PAIR__(HIDWORD(v80), LODWORD(v56), *(_QWORD *)(v50 + 48));
      v84 = *(double *)(v50 + 72) - v56;
      v75 = v75 * (*(double *)(v50 + 24) - *(double *)v50) / v84;
      v93 = j_cos(v75 * 6.2831853);
      j_sin(v75 * 6.2831853);
      (*(void (__fastcall **)(char *, int *, _DWORD, _DWORD))(v53 + 16))(
        &a49,
        a36,
        COERCE_UNSIGNED_INT64(v80 + v93 * v84 / 6.2831853),
        HIDWORD(COERCE_UNSIGNED_INT64(v80 + v93 * v84 / 6.2831853)));
      goto LABEL_8;
    case 2u:
LABEL_8:
      v85 = *(double *)v50;
      v57 = v100
          * (*(double *)(v50 + 32) - *(double *)(v50 + 8))
          / (*(double *)(v50 + 80) - *(double *)(v50 + 56))
          * 6.2831853;
      j_cos(v57);
      j_sin(v57);
      v58 = v85 + v75 * (*(double *)(v50 + 24) - v85);
      v59 = (*(int (__fastcall **)(char *, int *, _DWORD, _DWORD))(*a36 + 16))(&a49, a36, LODWORD(v58), HIDWORD(v58));
      return sub_31CE1E(v59);
    case 3u:
      v86 = *(double *)v50;
      v60 = v101
          * (*(double *)(v50 + 40) - *(double *)(v50 + 16))
          / (*(double *)(v50 + 88) - *(double *)(v50 + 64))
          * 6.2831853;
      j_cos(v60);
      j_sin(v60);
      v61 = v86 + v75 * (*(double *)(v50 + 24) - v86);
      v59 = (*(int (__fastcall **)(char *, int *, _DWORD, _DWORD))(v53 + 16))(&a49, a36, LODWORD(v61), HIDWORD(v61));
      return sub_31CE1E(v59);
    case 4u:
      HIDWORD(v63) = *(_DWORD *)(v50 + 52);
      LODWORD(v81) = *(_DWORD *)(v50 + 48);
      __SET_PAIR__(HIDWORD(v81), LODWORD(v63), *(_QWORD *)(v50 + 48));
      v87 = *(double *)(v50 + 72) - v63;
      v89 = *(double *)(v50 + 80) - *(double *)(v50 + 56);
      v94 = v100 * (*(double *)(v50 + 32) - *(double *)(v50 + 8));
      v64 = v75 * (*(double *)(v50 + 24) - *(double *)v50) / v87 * 6.2831853;
      v76 = j_cos(v64);
      j_sin(v64);
      v65 = v94 / v89 * 6.2831853;
      v77 = v81 + v76 * v87 / 6.2831853;
      j_cos(v65);
      j_sin(v65);
      goto LABEL_16;
    case 5u:
      HIDWORD(v66) = *(_DWORD *)(v50 + 52);
      LODWORD(v82) = *(_DWORD *)(v50 + 48);
      __SET_PAIR__(HIDWORD(v82), LODWORD(v66), *(_QWORD *)(v50 + 48));
      v88 = *(double *)(v50 + 72) - v66;
      v90 = *(double *)(v50 + 88) - *(double *)(v50 + 64);
      v95 = v101 * (*(double *)(v50 + 40) - *(double *)(v50 + 16));
      v67 = v75 * (*(double *)(v50 + 24) - *(double *)v50) / v88 * 6.2831853;
      v78 = j_cos(v67);
      j_sin(v67);
      v68 = v95 / v90 * 6.2831853;
      j_cos(v68);
      j_sin(v68);
      v77 = v82 + v78 * v88 / 6.2831853;
      goto LABEL_16;
    case 6u:
      v98 = *(double *)v50;
      v91 = *(double *)(v50 + 88) - *(double *)(v50 + 64);
      v96 = v101 * (*(double *)(v50 + 40) - *(double *)(v50 + 16));
      v69 = v100
          * (*(double *)(v50 + 32) - *(double *)(v50 + 8))
          / (*(double *)(v50 + 80) - *(double *)(v50 + 56))
          * 6.2831853;
      j_cos(v69);
      j_sin(v69);
      v70 = v96 / v91 * 6.2831853;
      j_cos(v70);
      j_sin(v70);
      v77 = v98 + v75 * (*(double *)(v50 + 24) - v98);
      goto LABEL_16;
    case 7u:
      HIDWORD(v71) = *(_DWORD *)(v50 + 52);
      LODWORD(v83) = *(_DWORD *)(v50 + 48);
      __SET_PAIR__(HIDWORD(v83), LODWORD(v71), *(_QWORD *)(v50 + 48));
      v92 = *(double *)(v50 + 72) - v71;
      v99 = *(double *)(v50 + 80) - *(double *)(v50 + 56);
      v97 = *(double *)(v50 + 88) - *(double *)(v50 + 64);
      v102 = v100 * (*(double *)(v50 + 32) - *(double *)(v50 + 8));
      v103 = v101 * (*(double *)(v50 + 40) - *(double *)(v50 + 16));
      v72 = v75 * (*(double *)(v50 + 24) - *(double *)v50) / v92 * 6.2831853;
      v79 = j_cos(v72);
      j_sin(v72);
      v73 = v102 / v99 * 6.2831853;
      j_cos(v73);
      j_sin(v73);
      v74 = v103 / v97 * 6.2831853;
      v77 = v83 + v79 * v92 / 6.2831853;
      j_cos(v74);
      j_sin(v74);
LABEL_16:
      v59 = (*(int (__fastcall **)(char *, int *, _DWORD, _DWORD))(v53 + 20))(&a49, a36, LODWORD(v77), HIDWORD(v77));
      return sub_31CE1E(v59);
    default:
      v51 = v52;
      goto LABEL_4;
  }
}


//======================================================================
// sub_31CE1E
// address: 0x0031CE1E   size: 0xA (10 bytes)
//======================================================================
void sub_31CE1E()
{
  JUMPOUT(0x31CE30);
}


//======================================================================
// sub_31CE28
// address: 0x0031CE28   size: 0x38 (56 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0031CE28  MOVS    R3, #0
//   0031CE2A  MOVS    R2, R3
//   0031CE2C  MOVS    R1, R3
//   0031CE2E  MOVS    R0, R3
//   0031CE30  LDR     R5, [SP,#arg_80]
//   0031CE32  LDR     R6, [SP,#arg_8C]
//   0031CE34  LDR     R5, [R5,#4]
//   0031CE36  MOVS    R4, R5
//   0031CE38  MULS    R4, R6
//   0031CE3A  LDR     R6, [SP,#arg_80]
//   0031CE3C  LDR     R5, [SP,#arg_88]
//   0031CE3E  LDR     R6, [R6]
//   0031CE40  ADDS    R4, R4, R5
//   0031CE42  LDR     R5, [SP,#arg_84]
//   0031CE44  MULS    R4, R6
//   0031CE46  LDR     R6, [SP,#arg_80]
//   0031CE48  ADDS    R4, R4, R5
//   0031CE4A  LSLS    R4, R4, #4
//   0031CE4C  LDR     R6, [R6,#0xC]
//   0031CE4E  ADDS    R4, R6, R4
//   0031CE50  STR     R0, [R4]
//   0031CE52  STR     R1, [R4,#4]
//   0031CE54  STR     R2, [R4,#8]
//   0031CE56  STR     R3, [R4,#0xC]
//   0031CE58  LDR     R4, [SP,#arg_8C]
//   0031CE5A  ADDS    R4, #1
//   0031CE5C  BL      sub_31C372

//======================================================================
// sub_31CE80
// address: 0x0031CE80   size: 0xA (10 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0031CE80  LDR     R5, [SP,#arg_84]
//   0031CE82  ADDS    R5, #1
//   0031CE84  STR     R5, [SP,#arg_84]
//   0031CE86  BL      sub_31C354

//======================================================================
// sub_31CE8A
// address: 0x0031CE8A   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_31CE8A(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_31D1CE
// address: 0x0031D1CE   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_31D1CE(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40)
{
  int v40; // r4

  if ( v40 == a40 )
    a1 = sub_31DCD2();
  return sub_31D1DE(a1);
}


//======================================================================
// sub_31D1DE
// address: 0x0031D1DE   size: 0xABC (2748 bytes)
//======================================================================
int __fastcall sub_31D1DE(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        _DWORD *a33,
        int a34,
        unsigned int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        unsigned int a40,
        unsigned int a41,
        unsigned int a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        __int64 a46,
        __int64 a47,
        double a48)
{
  unsigned int v48; // r6
  double v49; // r4
  int v50; // r0
  double v51; // r2
  double v52; // r4
  double v53; // r6
  int v54; // r0
  double v55; // r4
  double v56; // r0
  double v57; // r4
  double v58; // r2
  double v59; // r6
  double v60; // r4
  double v61; // r4
  double v62; // r2
  double v63; // r6
  double v64; // r4
  double v65; // r4
  double v66; // r6
  double v67; // r4
  double v68; // r4
  int v69; // r0
  double v70; // r2
  double v71; // r4
  double v72; // r6
  double v73; // r4
  double v74; // r4
  double v75; // r4
  double v77; // [sp+30h] [bp+30h]
  double v78; // [sp+30h] [bp+30h]
  double v79; // [sp+30h] [bp+30h]
  double v80; // [sp+30h] [bp+30h]
  double v81; // [sp+30h] [bp+30h]
  double v82; // [sp+38h] [bp+38h]
  double v83; // [sp+38h] [bp+38h]
  double v84; // [sp+38h] [bp+38h]
  double v85; // [sp+38h] [bp+38h]
  double v86; // [sp+40h] [bp+40h]
  double v87; // [sp+40h] [bp+40h]
  double v88; // [sp+40h] [bp+40h]
  double v89; // [sp+48h] [bp+48h]
  double v90; // [sp+48h] [bp+48h]
  double v91; // [sp+50h] [bp+50h]
  double v92; // [sp+50h] [bp+50h]
  double v93; // [sp+58h] [bp+58h]
  double v94; // [sp+58h] [bp+58h]
  double v95; // [sp+58h] [bp+58h]
  double v96; // [sp+58h] [bp+58h]
  double v97; // [sp+60h] [bp+60h]
  double v98; // [sp+60h] [bp+60h]
  double v99; // [sp+68h] [bp+68h]
  double v100; // [sp+68h] [bp+68h]
  double v101; // [sp+68h] [bp+68h]
  int (__fastcall **v102)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+74h] [bp+74h]
  double v103; // [sp+80h] [bp+80h]

  if ( v48 == a41 )
    sub_31DCCA();
  v77 = (double)a35 / (double)a40;
  v89 = (double)v48 / (double)a41;
  if ( a42 <= 7 )
    goto LABEL_5;
  while ( 1 )
  {
    sub_31DCB0();
LABEL_5:
    v102 = (int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))*a33;
    switch ( a42 )
    {
      case 0u:
        v49 = *(double *)a16 + v77 * (*(double *)(a16 + 24) - *(double *)a16);
        v50 = ((int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD))v102)[4](a33, v102[4], LODWORD(v49), HIDWORD(v49));
        sub_31DCB4(v50);
        goto LABEL_7;
      case 1u:
LABEL_7:
        HIDWORD(v51) = *(_DWORD *)(a16 + 52);
        LODWORD(v82) = *(_DWORD *)(a16 + 48);
        __SET_PAIR__(HIDWORD(v82), LODWORD(v51), *(_QWORD *)(a16 + 48));
        v86 = *(double *)(a16 + 72) - v51;
        v52 = v77 * (*(double *)(a16 + 24) - *(double *)a16) / v86 * 6.283184;
        v53 = j_cos(v52);
        j_sin(v52);
        v54 = ((int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD))v102)[5](
                a33,
                v102[5],
                COERCE_UNSIGNED_INT64(v82 + v53 * v86 / 6.283184),
                HIDWORD(COERCE_UNSIGNED_INT64(v82 + v53 * v86 / 6.283184)));
        goto LABEL_9;
      case 2u:
        v87 = *(double *)a16;
        v55 = v89
            * (*(double *)(a16 + 32) - *(double *)(a16 + 8))
            / (*(double *)(a16 + 80) - *(double *)(a16 + 56))
            * 6.283184;
        j_cos(v55);
        j_sin(v55);
        v77 = v87 + v77 * (*(double *)(a16 + 24) - v87);
        v54 = ((int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD))v102)[5](a33, v102[5], LODWORD(v77), HIDWORD(v77));
        goto LABEL_9;
      case 3u:
        while ( 1 )
        {
          v88 = *(double *)a16;
          v77 = v77 * (*(double *)(a16 + 24) - *(double *)a16);
          v56 = *(double *)(a16 + 40) - *(double *)(a16 + 16);
          v57 = (a48 - *(double *)(a16 + 16)) / v56 * v56 / (*(double *)(a16 + 88) - *(double *)(a16 + 64)) * 6.283184;
          j_cos(v57);
          j_sin(v57);
          v54 = ((int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD))v102)[5](
                  a33,
                  v102[5],
                  COERCE_UNSIGNED_INT64(v88 + v77),
                  HIDWORD(COERCE_UNSIGNED_INT64(v88 + v77)));
LABEL_9:
          sub_31DCB4(v54);
        }
      case 4u:
        HIDWORD(v58) = *(_DWORD *)(a16 + 52);
        LODWORD(v83) = *(_DWORD *)(a16 + 48);
        __SET_PAIR__(HIDWORD(v83), LODWORD(v58), *(_QWORD *)(a16 + 48));
        v91 = *(double *)(a16 + 72) - v58;
        v93 = *(double *)(a16 + 80) - *(double *)(a16 + 56);
        v59 = v89 * (*(double *)(a16 + 32) - *(double *)(a16 + 8));
        v60 = v77 * (*(double *)(a16 + 24) - *(double *)a16) / v91 * 6.283184;
        v78 = j_cos(v60);
        j_sin(v60);
        v61 = v59 / v93 * 6.283184;
        v79 = v83 + v78 * v91 / 6.283184;
        j_cos(v61);
        j_sin(v61);
        goto LABEL_14;
      case 5u:
        HIDWORD(v62) = *(_DWORD *)(a16 + 52);
        LODWORD(v84) = *(_DWORD *)(a16 + 48);
        __SET_PAIR__(HIDWORD(v84), LODWORD(v62), *(_QWORD *)(a16 + 48));
        v92 = *(double *)(a16 + 72) - v62;
        v63 = *(double *)(a16 + 16);
        v94 = *(double *)(a16 + 88) - *(double *)(a16 + 64);
        v99 = *(double *)(a16 + 24);
        v64 = v77 * (v99 - *(double *)a16) / v92 * 6.283184;
        v80 = j_cos(v64);
        j_sin(v64);
        v65 = (a48 - v63) / (*(double *)(a16 + 40) - v63) * (v99 - v63) / v94 * 6.283184;
        j_cos(v65);
        j_sin(v65);
        v79 = v84 + v80 * v92 / 6.283184;
        goto LABEL_14;
      case 6u:
        v97 = *(double *)a16;
        v66 = *(double *)(a16 + 16);
        v95 = *(double *)(a16 + 88) - *(double *)(a16 + 64);
        v100 = *(double *)(a16 + 40) - v66;
        v67 = v89
            * (*(double *)(a16 + 32) - *(double *)(a16 + 8))
            / (*(double *)(a16 + 80) - *(double *)(a16 + 56))
            * 6.283184;
        j_cos(v67);
        j_sin(v67);
        v68 = (a48 - v66) / v100 * v100 / v95 * 6.283184;
        j_cos(v68);
        j_sin(v68);
        v79 = v97 + v77 * (*(double *)(a16 + 24) - v97);
LABEL_14:
        v69 = ((int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD))v102)[6](a33, v102[6], LODWORD(v79), HIDWORD(v79));
        return sub_31DCB4(v69);
      case 7u:
        HIDWORD(v70) = *(_DWORD *)(a16 + 52);
        LODWORD(v85) = *(_DWORD *)(a16 + 48);
        __SET_PAIR__(HIDWORD(v85), LODWORD(v70), *(_QWORD *)(a16 + 48));
        v96 = *(double *)(a16 + 72) - v70;
        v98 = *(double *)(a16 + 80) - *(double *)(a16 + 56);
        v101 = *(double *)(a16 + 88) - *(double *)(a16 + 64);
        v71 = v77 * (*(double *)(a16 + 24) - *(double *)a16);
        v72 = v89 * (*(double *)(a16 + 32) - *(double *)(a16 + 8));
        HIDWORD(v70) = *(_DWORD *)(a16 + 20);
        LODWORD(v81) = *(_DWORD *)(a16 + 16);
        __SET_PAIR__(HIDWORD(v81), LODWORD(v70), *(_QWORD *)(a16 + 16));
        v90 = *(double *)(a16 + 40) - v70;
        v73 = v71 / v96 * 6.283184;
        v103 = j_cos(v73);
        j_sin(v73);
        v74 = v72 / v98 * 6.283184;
        j_cos(v74);
        j_sin(v74);
        v75 = (a48 - v81) / v90 * v90 / v101 * 6.283184;
        j_cos(v75);
        j_sin(v75);
        v69 = ((int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD))v102)[6](
                a33,
                v102[6],
                COERCE_UNSIGNED_INT64(v85 + v103 * v96 / 6.283184),
                HIDWORD(COERCE_UNSIGNED_INT64(v85 + v103 * v96 / 6.283184)));
        return sub_31DCB4(v69);
      default:
        continue;
    }
  }
}


//======================================================================
// sub_31DCB0
// address: 0x0031DCB0   size: 0x4 (4 bytes)
//======================================================================
int sub_31DCB0()
{
  return sub_31DCB4(0);
}


//======================================================================
// sub_31DCB4
// address: 0x0031DCB4   size: 0x16 (22 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0031DCB4  STR     R0, [SP,#arg_0]
//   0031DCB6  STR     R1, [SP,#arg_4]
//   0031DCB8  LDR     R2, [SP,#arg_7C]
//   0031DCBA  LDR     R0, [SP,#arg_88]
//   0031DCBC  LDR     R1, [SP,#arg_78]
//   0031DCBE  BL      _ZN3anl8TArray2DIdE3setEjjd; anl::TArray2D<double>::set(uint,uint,double)
//   0031DCC2  LDR     R6, [SP,#arg_7C]
//   0031DCC4  ADDS    R6, #1
//   0031DCC6  BL      sub_31D1DE

//======================================================================
// sub_31DCCA
// address: 0x0031DCCA   size: 0x8 (8 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0031DCCA  LDR     R4, [SP,#arg_78]
//   0031DCCC  ADDS    R4, #1
//   0031DCCE  BL      sub_31D1CE

//======================================================================
// sub_31DCD2
// address: 0x0031DCD2   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_31DCD2(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_31E158
// address: 0x0031E158   size: 0xE (14 bytes)
//======================================================================
void __fastcall sub_31E158(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40)
{
  if ( a35 == a40 )
    sub_31EC76();
  JUMPOUT(0x31E166);
}


//======================================================================
// sub_31EC2C
// address: 0x0031EC2C   size: 0xA (10 bytes)
//======================================================================
void sub_31EC2C()
{
  JUMPOUT(0x31EC50);
}


//======================================================================
// sub_31EC48
// address: 0x0031EC48   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_31EC48(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        _DWORD *a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50)
{
  _DWORD *v50; // r0
  int v51; // r0

  a47 = 0;
  a48 = 0;
  a49 = 0;
  a50 = 0;
  v50 = anl::TArray2D<TVec4D<float>>::set(a39, a35, a36, &a47);
  v51 = ((int (__fastcall *)(_DWORD *))loc_31E166)(v50);
  return sub_31EC6C(v51);
}


//======================================================================
// sub_31EC6C
// address: 0x0031EC6C   size: 0xA (10 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0031EC6C  LDR     R6, [SP,#arg_78]
//   0031EC6E  ADDS    R6, #1
//   0031EC70  STR     R6, [SP,#arg_78]
//   0031EC72  BL      sub_31E158

//======================================================================
// sub_31EC76
// address: 0x0031EC76   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_31EC76(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}

