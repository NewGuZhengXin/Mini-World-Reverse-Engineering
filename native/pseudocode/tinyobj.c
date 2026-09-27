// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: tinyobj

//======================================================================
// tinyobj::pushNormal(std::vector<float,std::allocator<float>> &,float *)
// address: 0x002B5EFC   size: 0xB2 (178 bytes)
//======================================================================
signed int __fastcall tinyobj::pushNormal(__int64 a1)
{
  float *v1; // r5
  __int64 v3; // r0
  __int64 v4; // r0
  signed int i; // [sp+0h] [bp-Ch]
  signed int v7; // [sp+4h] [bp-8h]

  v1 = *(float **)a1;
  v7 = ((*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 2) / 3u;
  for ( i = 0; ; ++i )
  {
    if ( i >= v7 )
    {
      std::vector<float>::push_back(a1);
      HIDWORD(v3) = HIDWORD(a1) + 4;
      LODWORD(v3) = a1;
      std::vector<float>::push_back(v3);
      LODWORD(v4) = a1;
      HIDWORD(v4) = HIDWORD(a1) + 8;
      std::vector<float>::push_back(v4);
      return v7;
    }
    if ( (float)(*v1 - *(float *)HIDWORD(a1)) > -0.01
      && (float)(*v1 - *(float *)HIDWORD(a1)) < 0.01
      && (float)(v1[1] - *(float *)(HIDWORD(a1) + 4)) > -0.01
      && (float)(v1[1] - *(float *)(HIDWORD(a1) + 4)) < 0.01
      && (float)(v1[2] - *(float *)(HIDWORD(a1) + 8)) > -0.01
      && (float)(v1[2] - *(float *)(HIDWORD(a1) + 8)) < 0.01 )
    {
      break;
    }
    v1 += 3;
  }
  return i;
}


//======================================================================
// tinyobj::InitMaterial(tinyobj::material_t &)
// address: 0x002B60F0   size: 0x72 (114 bytes)
//======================================================================
void __fastcall tinyobj::InitMaterial(tinyobj *this, tinyobj::material_t *a2)
{
  int v3; // r5
  tinyobj *v4; // r3

  sub_3BE508((int)this, (char *)&unk_3FB8EA);
  sub_3BE508((int)this + 80, (char *)&unk_3FB8EA);
  sub_3BE508((int)this + 84, (char *)&unk_3FB8EA);
  sub_3BE508((int)this + 88, (char *)&unk_3FB8EA);
  sub_3BE508((int)this + 92, (char *)&unk_3FB8EA);
  v3 = 3;
  v4 = this;
  do
  {
    --v3;
    *((_DWORD *)v4 + 1) = 0;
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 7) = 0;
    *((_DWORD *)v4 + 10) = 0;
    *((_DWORD *)v4 + 13) = 0;
    v4 = (tinyobj *)((char *)v4 + 4);
  }
  while ( v3 != 0 );
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 18) = 1065353216;
  *((_DWORD *)this + 16) = 1065353216;
  *((_DWORD *)this + 17) = 1065353216;
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)this + 96,
    *((_DWORD **)this + 26));
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 27) = (char *)this + 100;
  *((_DWORD *)this + 28) = (char *)this + 100;
}


//======================================================================
// tinyobj::LoadMtl(std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>> &,std::vector<tinyobj::material_t,std::allocator<tinyobj::material_t>> &,std::istream &)
// address: 0x002B7500   size: 0x556 (1366 bytes)
//======================================================================
int __fastcall tinyobj::LoadMtl(int a1, int a2, _DWORD *a3, int a4)
{
  int v6; // r5
  int v7; // r5
  char *v8; // r4
  char *v9; // r4
  int v10; // r5
  tinyobj::material_t *v11; // r1
  int v12; // r3
  char *v13; // r5
  int v15; // r5
  int v21; // r3
  int v23; // r0
  char *v24; // r4
  int v25; // r5
  char *v27; // r4
  char *v30; // r1
  char **v31; // r0
  int v34; // [sp+4h] [bp-1198h]
  char *v37; // [sp+1Ch] [bp-1180h] BYREF
  char *v38; // [sp+20h] [bp-117Ch] BYREF
  _DWORD v39[2]; // [sp+24h] [bp-1178h] BYREF
  _BYTE v40[8]; // [sp+2Ch] [bp-1170h] BYREF
  int v41; // [sp+34h] [bp-1168h] BYREF
  _BYTE v42[4]; // [sp+38h] [bp-1164h] BYREF
  float v43[2]; // [sp+3Ch] [bp-1160h] BYREF
  float v44[2]; // [sp+44h] [bp-1158h] BYREF
  float v45[2]; // [sp+4Ch] [bp-1150h] BYREF
  char *v46[3]; // [sp+54h] [bp-1148h] BYREF
  _DWORD v47[20]; // [sp+60h] [bp-113Ch] BYREF
  char *v48; // [sp+B0h] [bp-10ECh] BYREF
  char *v49; // [sp+B4h] [bp-10E8h] BYREF
  char *v50; // [sp+B8h] [bp-10E4h] BYREF
  char *v51; // [sp+BCh] [bp-10E0h] BYREF
  int v52; // [sp+C0h] [bp-10DCh] BYREF
  _DWORD v53[5]; // [sp+C4h] [bp-10D8h] BYREF
  _BYTE v54[12]; // [sp+D8h] [bp-10C4h] BYREF
  _BYTE v55[176]; // [sp+E4h] [bp-10B8h] BYREF
  char v56; // [sp+194h] [bp-1008h] BYREF

  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(
    a2,
    *(_DWORD **)(a2 + 8));
  *(_DWORD *)(a2 + 12) = a2 + 4;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 16) = a2 + 4;
  *(_DWORD *)(a2 + 20) = 0;
  sub_3A3350(v54, 24);
  v47[0] = &byte_55FB88;
  v48 = &byte_55FB88;
  v49 = &byte_55FB88;
  v50 = &byte_55FB88;
  v51 = &byte_55FB88;
  memset(v53, 0, sizeof(v53));
  v53[2] = v53;
  v53[3] = v53;
  std::vector<char>::vector(v46, 0x2000u);
  while ( sub_39E318(a4) != -1 )
  {
    sub_39D934(a4, v46[0], 0x2000);
    sub_3BF0BC((int)&v37, v46[0]);
    v6 = *((_DWORD *)v37 - 3);
    if ( v6 != 0 )
    {
      sub_3BE0DC(&v37);
      if ( v37[v6 - 1] == 10 )
        sub_3BE210(&v37, *((_DWORD *)v37 - 3) - 1, -1);
    }
    v7 = *((_DWORD *)v37 - 3);
    if ( v7 != 0 )
    {
      sub_3BE0DC(&v37);
      if ( v37[v7 - 1] == 13 )
        sub_3BE210(&v37, *((_DWORD *)v37 - 3) - 1, -1);
    }
    v8 = v37;
    if ( *((_DWORD *)v37 - 3) != 0 )
    {
      v38 = v37;
      v9 = &v8[j_strspn(v37, " \t")];
      v38 = v9;
      v10 = (unsigned __int8)*v9;
      if ( *v9 != 0 && v10 != 35 )
      {
        if ( j_strncmp(v9, "newmtl", 6u) == 0 && sub_2B5D34((unsigned __int8)v9[6]) )
        {
          if ( *(_DWORD *)(v47[0] - 12) != 0 )
          {
            v15 = -286331153 * ((a3[1] - *a3) >> 3);
            sub_3BEB1C(v39, v47);
            v39[1] = v15;
            std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_insert_unique<std::pair<std::string,int>>(
              (int)v40,
              a2,
              v39);
            sub_3BDF80(v39);
            std::vector<tinyobj::material_t>::push_back((int)a3, (const tinyobj::material_t *)v47);
          }
          tinyobj::InitMaterial((tinyobj *)v47, v11);
          v38 += 7;
          j_sscanf(v38, "%s", &v56);
          v31 = (char **)v47;
          v30 = &v56;
          goto LABEL_80;
        }
        if ( v10 == 75 )
        {
          v12 = (unsigned __int8)v9[1];
          switch ( v12 )
          {
            case 'a':
              if ( sub_2B5D34((unsigned __int8)v9[2]) )
              {
                v38 = v9 + 2;
                sub_2B5E10(v43, v44, v45, (const char **)&v38);
                *(float *)&v47[1] = v43[0];
                *(float *)&v47[2] = v44[0];
                *(float *)&v47[3] = v45[0];
                goto LABEL_45;
              }
              break;
            case 'd':
              if ( sub_2B5D34((unsigned __int8)v9[2]) )
              {
                v38 = v9 + 2;
                sub_2B5E10(v43, v44, v45, (const char **)&v38);
                *(float *)&v47[4] = v43[0];
                *(float *)&v47[5] = v44[0];
                *(float *)&v47[6] = v45[0];
                goto LABEL_45;
              }
              break;
            case 's':
              if ( sub_2B5D34((unsigned __int8)v9[2]) )
              {
                v38 = v9 + 2;
                sub_2B5E10(v43, v44, v45, (const char **)&v38);
                *(float *)&v47[7] = v43[0];
                *(float *)&v47[8] = v44[0];
                *(float *)&v47[9] = v45[0];
                goto LABEL_45;
              }
              break;
            case 't':
              if ( sub_2B5D34((unsigned __int8)v9[2]) )
              {
                v38 = v9 + 2;
                sub_2B5E10(v43, v44, v45, (const char **)&v38);
                *(float *)&v47[10] = v43[0];
                *(float *)&v47[11] = v44[0];
                *(float *)&v47[12] = v45[0];
                goto LABEL_45;
              }
              break;
            case 'e':
              if ( sub_2B5D34((unsigned __int8)v9[2]) )
              {
                v38 = v9 + 2;
                sub_2B5E10(v43, v44, v45, (const char **)&v38);
                *(float *)&v47[13] = v43[0];
                *(float *)&v47[14] = v44[0];
                *(float *)&v47[15] = v45[0];
                goto LABEL_45;
              }
              break;
            default:
              break;
          }
        }
        else if ( v10 == 78 )
        {
          v21 = (unsigned __int8)v9[1];
          if ( v21 == 105 )
          {
            if ( sub_2B5D34((unsigned __int8)v9[2]) )
            {
              v38 = v9 + 2;
              v47[17] = sub_2B5DD0((const char **)&v38);
              goto LABEL_45;
            }
          }
          else if ( v21 == 115 && sub_2B5D34((unsigned __int8)v9[2]) )
          {
            v38 = v9 + 2;
            v47[16] = sub_2B5DD0((const char **)&v38);
            goto LABEL_45;
          }
        }
        if ( j_strncmp(v9, "illum", 5u) == 0 && sub_2B5D34((unsigned __int8)v9[5]) )
        {
          v38 = v9 + 6;
          v38 += j_strspn(v38, " \t");
          v23 = j_atoi(v38);
          v24 = v38;
          v25 = v23;
          v38 = &v24[j_strcspn(v38, " \t\r")];
          v47[19] = v25;
          goto LABEL_45;
        }
        if ( v10 == 100 )
        {
          if ( sub_2B5D34((unsigned __int8)v9[1]) )
          {
            v27 = v9 + 1;
LABEL_73:
            v38 = v27;
            v47[18] = sub_2B5DD0((const char **)&v38);
            goto LABEL_45;
          }
        }
        else if ( v10 == 84 && v9[1] == 114 && sub_2B5D34((unsigned __int8)v9[2]) )
        {
          v27 = v9 + 2;
          goto LABEL_73;
        }
        if ( j_strncmp(v9, "map_Ka", 6u) == 0 && sub_2B5D34((unsigned __int8)v9[6]) )
        {
          v30 = v9 + 7;
          v38 = v9 + 7;
          v31 = &v48;
LABEL_80:
          sub_3BE508((int)v31, v30);
          goto LABEL_45;
        }
        if ( j_strncmp(v9, "map_Kd", 6u) == 0 && sub_2B5D34((unsigned __int8)v9[6]) )
        {
          v30 = v9 + 7;
          v38 = v9 + 7;
          v31 = &v49;
          goto LABEL_80;
        }
        if ( j_strncmp(v9, "map_Ks", 6u) == 0 && sub_2B5D34((unsigned __int8)v9[6]) )
        {
          v30 = v9 + 7;
          v38 = v9 + 7;
          v31 = &v50;
          goto LABEL_80;
        }
        if ( j_strncmp(v9, "map_Ns", 6u) == 0 && sub_2B5D34((unsigned __int8)v9[6]) )
        {
          v30 = v9 + 7;
          v38 = v9 + 7;
          v31 = &v51;
          goto LABEL_80;
        }
        v13 = j_strchr(v9, 32);
        if ( v13 != nullptr || (v13 = j_strchr(v9, 9)) != nullptr )
        {
          sub_3BEE2C(v44, v9, v13 - v9, v45);
          sub_3BF0BC((int)v45, v13 + 1);
          sub_3BEB1C(&v41, v44);
          sub_3BEB1C(v42, v45);
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique<std::pair<std::string,std::string>>(
            (int)v43,
            &v52,
            &v41);
          sub_3BDF80(v42);
          sub_3BDF80(&v41);
          sub_3BDF80(v45);
          sub_3BDF80(v44);
        }
      }
    }
LABEL_45:
    sub_3BDF80(&v37);
  }
  v34 = -286331153 * ((a3[1] - *a3) >> 3);
  sub_3BEB1C(v44, v47);
  LODWORD(v44[1]) = v34;
  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_insert_unique<std::pair<std::string,int>>(
    (int)v45,
    a2,
    v44);
  sub_3BDF80(v44);
  std::vector<tinyobj::material_t>::push_back((int)a3, (const tinyobj::material_t *)v47);
  sub_3A2244(a1, v55);
  std::_Vector_base<char>::~_Vector_base((void **)v46);
  tinyobj::material_t::~material_t((tinyobj::material_t *)v47);
  sub_3A1ECC(v54);
  return a1;
}


//======================================================================
// tinyobj::LoadObj(std::vector<tinyobj::shape_t,std::allocator<tinyobj::shape_t>> &,std::vector&<tinyobj::material_t,std::allocator<std::vector&>>,std::istream &,tinyobj::MaterialReader &)
// address: 0x002B7C98   size: 0x862 (2146 bytes)
//======================================================================
void **__fastcall tinyobj::LoadObj(void **a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v6; // r4
  char *v7; // r4
  char *v8; // r4
  int v9; // r5
  int v10; // r6
  __int64 v11; // r0
  __int64 v12; // r0
  int v13; // r6
  void (__fastcall *v14)(void **, int, _BYTE *, int, int *); // r7
  __int64 v16; // r0
  __int64 v17; // r0
  __int64 v18; // r0
  __int64 v19; // r0
  int v20; // r3
  __int64 v21; // r0
  int v22; // r6
  void *v23; // r7
  unsigned int v24; // r5
  int v25; // r4
  void *v26; // r0
  char *v27; // r4
  char *v28; // r4
  int v29; // r0
  void *v30; // r3
  char *v31; // r4
  char *v32; // r0
  int v33; // r0
  void *v34; // r3
  char *v35; // r4
  char *v36; // r4
  int v37; // r0
  void *v38; // r3
  void **v39; // r3
  char *v40; // r4
  _DWORD *v41; // r4
  _DWORD **v42; // r5
  _DWORD *v43; // r3
  void **v44; // r0
  int v45; // r4
  int v46; // r2
  int v47; // r3
  char *v48; // r5
  char *v49; // r4
  char *v50; // r6
  int v51; // r0
  int v52; // r7
  char *v53; // r4
  char *v54; // r6
  int v55; // r3
  int v56; // r4
  int v57; // r2
  int v58; // r3
  int v59; // [sp+14h] [bp-1228h]
  size_t v60; // [sp+14h] [bp-1228h]
  int v61; // [sp+18h] [bp-1224h]
  void *v62; // [sp+1Ch] [bp-1220h]
  size_t v63; // [sp+1Ch] [bp-1220h]
  char *v68; // [sp+40h] [bp-11FCh] BYREF
  char *v69; // [sp+44h] [bp-11F8h] BYREF
  char *v70; // [sp+48h] [bp-11F4h] BYREF
  _BYTE v71[4]; // [sp+4Ch] [bp-11F0h] BYREF
  int v72; // [sp+50h] [bp-11ECh] BYREF
  _BYTE v73[4]; // [sp+54h] [bp-11E8h] BYREF
  _BYTE v74[4]; // [sp+58h] [bp-11E4h] BYREF
  void *v75; // [sp+5Ch] [bp-11E0h] BYREF
  int v76; // [sp+60h] [bp-11DCh]
  int v77; // [sp+64h] [bp-11D8h]
  void *v78; // [sp+68h] [bp-11D4h] BYREF
  int v79; // [sp+6Ch] [bp-11D0h]
  int v80; // [sp+70h] [bp-11CCh]
  void *v81; // [sp+74h] [bp-11C8h] BYREF
  int v82; // [sp+78h] [bp-11C4h]
  int v83; // [sp+7Ch] [bp-11C0h]
  void **v84; // [sp+80h] [bp-11BCh] BYREF
  _DWORD *v85; // [sp+84h] [bp-11B8h]
  _DWORD *v86; // [sp+88h] [bp-11B4h]
  char *v87[3]; // [sp+8Ch] [bp-11B0h] BYREF
  int v88; // [sp+98h] [bp-11A4h] BYREF
  _DWORD *v89[5]; // [sp+9Ch] [bp-11A0h] BYREF
  _BYTE v90[4]; // [sp+B0h] [bp-118Ch] BYREF
  _DWORD v91[5]; // [sp+B4h] [bp-1188h] BYREF
  float v92[6]; // [sp+C8h] [bp-1174h] BYREF
  float v93; // [sp+E0h] [bp-115Ch] BYREF
  void **v94; // [sp+E4h] [bp-1158h]
  void **v95; // [sp+E8h] [bp-1154h]
  int v96; // [sp+F8h] [bp-1144h] BYREF
  _DWORD v97[15]; // [sp+FCh] [bp-1140h] BYREF
  void *v98[16]; // [sp+138h] [bp-1104h] BYREF
  _BYTE v99[12]; // [sp+178h] [bp-10C4h] BYREF
  _BYTE v100[176]; // [sp+184h] [bp-10B8h] BYREF
  char v101[4104]; // [sp+234h] [bp-1008h] BYREF

  sub_3A3350(v99, 24);
  v68 = &byte_55FB88;
  v75 = nullptr;
  v76 = 0;
  v77 = 0;
  v78 = nullptr;
  v79 = 0;
  v80 = 0;
  v81 = nullptr;
  v82 = 0;
  v83 = 0;
  v84 = nullptr;
  v85 = nullptr;
  v86 = nullptr;
  memset(v89, 0, sizeof(v89));
  v89[2] = v89;
  v89[3] = v89;
  memset(v91, 0, sizeof(v91));
  v91[2] = v91;
  v91[3] = v91;
  sub_2B5D48(&v96);
  std::vector<char>::vector(v87, 0x2000u);
  v61 = -1;
  while ( sub_39E318(a4) != -1 )
  {
    sub_39D934(a4, v87[0], 0x2000);
    sub_3BF0BC((int)&v69, v87[0]);
    v5 = *((_DWORD *)v69 - 3);
    if ( v5 != 0 )
    {
      sub_3BE0DC(&v69);
      if ( v69[v5 - 1] == 10 )
        sub_3BE210(&v69, *((_DWORD *)v69 - 3) - 1, -1);
    }
    v6 = *((_DWORD *)v69 - 3);
    if ( v6 != 0 )
    {
      sub_3BE0DC(&v69);
      if ( v69[v6 - 1] == 13 )
        sub_3BE210(&v69, *((_DWORD *)v69 - 3) - 1, -1);
    }
    v7 = v69;
    if ( *((_DWORD *)v69 - 3) == 0 )
      goto LABEL_26;
    v70 = v69;
    v8 = &v7[j_strspn(v69, " \t")];
    v70 = v8;
    v9 = (unsigned __int8)*v8;
    if ( *v8 == 0 || v9 == 35 )
      goto LABEL_26;
    if ( v9 == 118 )
    {
      v10 = (unsigned __int8)v8[1];
      if ( sub_2B5D34(v10) )
      {
        v70 = v8 + 2;
        sub_2B5E10(v92, &v93, (float *)v98, (const char **)&v70);
        LODWORD(v11) = &v75;
        HIDWORD(v11) = v92;
        std::vector<float>::push_back(v11);
        LODWORD(v12) = &v75;
        HIDWORD(v12) = &v93;
        std::vector<float>::push_back(v12);
        LODWORD(v18) = &v75;
        goto LABEL_25;
      }
      if ( v10 == 110 )
      {
        if ( sub_2B5D34((unsigned __int8)v8[2]) )
        {
          v70 = v8 + 3;
          sub_2B5E10(v92, &v93, (float *)v98, (const char **)&v70);
          LODWORD(v16) = &v78;
          HIDWORD(v16) = v92;
          std::vector<float>::push_back(v16);
          LODWORD(v17) = &v78;
          HIDWORD(v17) = &v93;
          std::vector<float>::push_back(v17);
          LODWORD(v18) = &v78;
LABEL_25:
          HIDWORD(v18) = v98;
          std::vector<float>::push_back(v18);
          goto LABEL_26;
        }
      }
      else if ( v10 == 116 && sub_2B5D34((unsigned __int8)v8[2]) )
      {
        v70 = v8 + 3;
        v93 = sub_2B5DD0((const char **)&v70);
        v98[0] = COERCE_VOID_(sub_2B5DD0((const char **)&v70));
        HIDWORD(v19) = &v93;
        LODWORD(v19) = &v81;
        std::vector<float>::push_back(v19);
        LODWORD(v18) = &v81;
        goto LABEL_25;
      }
      goto LABEL_33;
    }
    if ( v9 == 102 && sub_2B5D34((unsigned __int8)v8[1]) )
    {
      v70 = v8 + 2;
      v70 += j_strspn(v70, " \t");
      v93 = 0.0;
      v94 = nullptr;
      v95 = nullptr;
      while ( 1 )
      {
        v20 = (unsigned __int8)*v70;
        if ( v20 == 13 || v20 == 10 || *v70 == 0 )
        {
          LODWORD(v21) = &v84;
          if ( v85 == v86 )
          {
            HIDWORD(v21) = &v93;
            std::vector<std::vector<tinyobj::vertex_index>>::_M_emplace_back_aux<std::vector<tinyobj::vertex_index> const&>(v21);
          }
          else
          {
            __gnu_cxx::new_allocator<std::vector<tinyobj::vertex_index>>::construct<std::vector<tinyobj::vertex_index><std::vector<tinyobj::vertex_index> const&>>(
              &v84,
              v85,
              (char **)&v93);
            v85 += 3;
          }
          std::_Vector_base<tinyobj::vertex_index>::~_Vector_base((void **)&v93);
          goto LABEL_26;
        }
        v22 = v76;
        v23 = v75;
        v24 = ((v79 - (int)v78) >> 2) / 3u;
        v59 = v82;
        v62 = v81;
        memset(v98, 255, 12);
        v25 = j_atoi(v70);
        v26 = (void *)(v25 - 1);
        if ( v25 <= 0 )
        {
          v26 = nullptr;
          if ( v25 != 0 )
            v26 = (void *)(((v22 - (int)v23) >> 2) / 3u + v25);
        }
        v27 = v70;
        v98[0] = v26;
        v28 = &v27[j_strcspn(v70, "/ \t\r")];
        v70 = v28;
        if ( *v28 == 47 )
        {
          v70 = v28 + 1;
          if ( v28[1] == 47 )
          {
            v70 = v28 + 2;
            v29 = j_atoi(v28 + 2);
            if ( v29 <= 0 )
            {
              v30 = nullptr;
              if ( v29 != 0 )
                v30 = (void *)(v24 + v29);
            }
            else
            {
              v30 = (void *)(v29 - 1);
            }
            v31 = v70;
            v98[2] = v30;
            v32 = v70;
LABEL_69:
            v70 = &v31[j_strcspn(v32, "/ \t\r")];
            goto LABEL_70;
          }
          v33 = j_atoi(v28 + 1);
          if ( v33 <= 0 )
          {
            v34 = nullptr;
            if ( v33 != 0 )
              v34 = (void *)(((unsigned int)((v59 - (int)v62) >> 2) >> 1) + v33);
          }
          else
          {
            v34 = (void *)(v33 - 1);
          }
          v35 = v70;
          v98[1] = v34;
          v36 = &v35[j_strcspn(v70, "/ \t\r")];
          v70 = v36;
          if ( *v36 == 47 )
          {
            v70 = v36 + 1;
            v37 = j_atoi(v36 + 1);
            if ( v37 <= 0 )
            {
              v38 = nullptr;
              if ( v37 != 0 )
                v38 = (void *)(v24 + v37);
            }
            else
            {
              v38 = (void *)(v37 - 1);
            }
            v31 = v70;
            v98[2] = v38;
            v32 = v70;
            goto LABEL_69;
          }
        }
LABEL_70:
        v39 = v94;
        if ( v94 == v95 )
        {
          std::vector<tinyobj::vertex_index>::_M_emplace_back_aux<tinyobj::vertex_index const&>((int *)&v93, v98);
        }
        else
        {
          if ( v94 != nullptr )
          {
            *v94 = v98[0];
            v39[1] = v98[1];
            v39[2] = v98[2];
          }
          v94 += 3;
        }
        v40 = v70;
        v70 = &v40[j_strspn(v70, " \t\r")];
      }
    }
LABEL_33:
    if ( j_strncmp(v8, "usemtl", 6u) == 0 && sub_2B5D34((unsigned __int8)v8[6]) )
    {
      v70 = v8 + 7;
      j_sscanf(v8 + 7, "%s", v101);
      std::vector<std::vector<tinyobj::vertex_index>>::clear(&v84);
      sub_3BF0BC((int)v71, v101);
      v41 = v89[1];
      v42 = v89;
      while ( v41 != nullptr )
      {
        if ( std::operator<<char>() != 0 )
        {
          v43 = (_DWORD *)v41[3];
          v41 = v42;
        }
        else
        {
          v43 = (_DWORD *)v41[2];
        }
        v42 = (_DWORD **)v41;
        v41 = v43;
      }
      if ( v42 != v89 && std::operator<<char>() != 0 )
        v42 = v89;
      sub_3BDF80(v71);
      if ( v42 == v89 )
      {
        v61 = -1;
        goto LABEL_26;
      }
      sub_3BF0BC((int)&v72, v101);
      v61 = *std::map<std::string,int>::operator[](&v88, &v72);
      v44 = (void **)&v72;
      goto LABEL_87;
    }
    if ( j_strncmp(v8, "mtllib", 6u) == 0 && sub_2B5D34((unsigned __int8)v8[6]) )
    {
      v70 = v8 + 7;
      j_sscanf(v8 + 7, "%s", v101);
      v14 = *(void (__fastcall **)(void **, int, _BYTE *, int, int *))(*(_DWORD *)a5 + 8);
      sub_3BF0BC((int)v73, v101);
      v14(v98, a5, v73, a3, &v88);
      sub_3BDF80(v73);
      if ( *((_DWORD *)v98[0] - 3) != 0 )
      {
        std::vector<std::vector<tinyobj::vertex_index>>::clear(&v84);
        *a1 = v98[0];
        v98[0] = &byte_55FB88;
        sub_3BDF80(v98);
        sub_3BDF80(&v69);
        goto LABEL_41;
      }
      v44 = v98;
LABEL_87:
      sub_3BDF80(v44);
      goto LABEL_26;
    }
    if ( v9 != 103 )
    {
      if ( v9 != 111 || !sub_2B5D34((unsigned __int8)v8[1]) )
        goto LABEL_26;
      std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_Rb_tree(
        &v93,
        (int)v90);
      v56 = sub_2B6CD8(&v96, (int)&v93, &v75, (int)&v78, &v81, (int *)&v84, v61);
      std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::~_Rb_tree((int)&v93);
      if ( v56 != 0 )
        std::vector<tinyobj::shape_t>::push_back(a2, (int)&v96);
      std::vector<std::vector<tinyobj::vertex_index>>::clear(&v84);
      j_memset(v98, 0, sizeof(v98));
      sub_2B5D48(v98);
      sub_3BD870(&v96, v98);
      tinyobj::mesh_t::operator=(v97, &v98[1], v57, v58);
      tinyobj::shape_t::~shape_t((tinyobj::shape_t *)v98);
      v70 += 2;
      j_sscanf(v70, "%s", v101);
      sub_3BF0BC((int)v74, v101);
      sub_3BD870(&v68, v74);
      v44 = (void **)v74;
      goto LABEL_87;
    }
    if ( sub_2B5D34((unsigned __int8)v8[1]) )
    {
      std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_Rb_tree(
        v92,
        (int)v90);
      v45 = sub_2B6CD8(&v96, (int)v92, &v75, (int)&v78, &v81, (int *)&v84, v61);
      std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::~_Rb_tree((int)v92);
      if ( v45 != 0 )
        std::vector<tinyobj::shape_t>::push_back(a2, (int)&v96);
      j_memset(v98, 0, sizeof(v98));
      sub_2B5D48(v98);
      sub_3BD870(&v96, v98);
      tinyobj::mesh_t::operator=(v97, &v98[1], v46, v47);
      tinyobj::shape_t::~shape_t((tinyobj::shape_t *)v98);
      std::vector<std::vector<tinyobj::vertex_index>>::clear(&v84);
      memset(v98, 0, 12);
      while ( 1 )
      {
        v54 = v70;
        v55 = (unsigned __int8)*v70;
        if ( v55 == 13 || v55 == 10 || *v70 == 0 )
          break;
        v48 = &byte_55FB88;
        LODWORD(v92[0]) = &byte_55FB88;
        v60 = j_strspn(v70, " \t");
        v63 = j_strcspn(v54, " \t\r");
        v49 = &v54[v60];
        v50 = &v54[v63];
        if ( v49 != v50 )
        {
          if ( v49 == nullptr && v50 != nullptr )
            sub_3BCF44("basic_string::_S_construct null not valid");
          v51 = sub_3BDE88(v50 - v49, 0, v74);
          v48 = (char *)(v51 + 12);
          v52 = v51;
          sub_3BD734(v51 + 12, v49, v50);
          sub_3BDE68(v52, v50 - v49);
        }
        v93 = *(float *)&v48;
        sub_3BD870(v92, &v93);
        sub_3BDF80(&v93);
        v70 += v63 - v60;
        if ( v98[1] == v98[2] )
        {
          std::vector<std::string>::_M_emplace_back_aux<std::string const&>((int *)v98, (int)v92);
        }
        else
        {
          if ( v98[1] != nullptr )
            sub_3BEB1C(v98[1], v92);
          v98[1] = (char *)v98[1] + 4;
        }
        v53 = v70;
        v70 = &v53[j_strspn(v70, " \t\r")];
        sub_3BDF80(v92);
      }
      if ( (unsigned int)((char *)v98[1] - (char *)v98[0]) <= 7 )
        sub_3BE508((int)&v68, (char *)&unk_3FB8EA);
      else
        sub_3BEBBC(&v68);
      std::vector<std::string>::~vector(v98);
    }
LABEL_26:
    sub_3BDF80(&v69);
  }
  std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_Rb_tree(
    v98,
    (int)v90);
  v13 = sub_2B6CD8(&v96, (int)v98, &v75, (int)&v78, &v81, (int *)&v84, v61);
  std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::~_Rb_tree((int)v98);
  if ( v13 != 0 )
    std::vector<tinyobj::shape_t>::push_back(a2, (int)&v96);
  std::vector<std::vector<tinyobj::vertex_index>>::clear(&v84);
  sub_3A2244(a1, v100);
LABEL_41:
  std::_Vector_base<char>::~_Vector_base((void **)v87);
  tinyobj::shape_t::~shape_t((tinyobj::shape_t *)&v96);
  std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::~_Rb_tree((int)v90);
  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(
    (int)&v88,
    v89[1]);
  sub_3BDF80(&v68);
  std::vector<std::vector<tinyobj::vertex_index>>::~vector(&v84);
  std::_Vector_base<float>::~_Vector_base(&v81);
  std::_Vector_base<float>::~_Vector_base(&v78);
  std::_Vector_base<float>::~_Vector_base(&v75);
  sub_3A1ECC(v99);
  return a1;
}


//======================================================================
// tinyobj::LoadObj(std::vector<tinyobj::shape_t,std::allocator<tinyobj::shape_t>> &,std::vector&<tinyobj::material_t,std::allocator<std::vector&>>,char const*,char const*)
// address: 0x002B8508   size: 0xFA (250 bytes)
//======================================================================
void **__fastcall tinyobj::LoadObj(void **a1, tinyobj::shape_t **a2, int a3, char *a4, char *a5)
{
  tinyobj::shape_t *v5; // r7
  tinyobj::shape_t *i; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r0
  tinyobj::shape_t *v13; // [sp+Ch] [bp-1D0h]
  char *v16; // [sp+18h] [bp-1C4h] BYREF
  _UNKNOWN **v17; // [sp+1Ch] [bp-1C0h] BYREF
  _BYTE v18[4]; // [sp+20h] [bp-1BCh] BYREF
  _BYTE v19[8]; // [sp+24h] [bp-1B8h] BYREF
  _BYTE v20[4]; // [sp+2Ch] [bp-1B0h] BYREF
  _BYTE v21[176]; // [sp+30h] [bp-1ACh] BYREF
  _BYTE v22[252]; // [sp+E0h] [bp-FCh] BYREF

  v5 = *a2;
  v13 = a2[1];
  for ( i = *a2; i != v13; i = (tinyobj::shape_t *)((char *)i + 64) )
    tinyobj::shape_t::~shape_t(i);
  a2[1] = v5;
  sub_3A3350(v19, 24);
  sub_3BA21C(v22, a4, 8);
  if ( (v22[132] & 5) != 0 )
  {
    v9 = sub_3B452C((int)v20, "Cannot open file [");
    v10 = sub_3B452C(v9, a4);
    v11 = sub_3B452C(v10, "]");
    sub_3B4108(v11);
    sub_3A2244(a1, v21);
  }
  else
  {
    v16 = &byte_55FB88;
    if ( a5 != nullptr )
      sub_3BE508((int)&v16, a5);
    v17 = &off_45E570;
    sub_3BEB1C(v18, &v16);
    tinyobj::LoadObj(a1, (int)a2, a3, (int)v22, (int)&v17);
    tinyobj::MaterialFileReader::~MaterialFileReader((tinyobj::MaterialFileReader *)&v17);
    sub_3BDF80(&v16);
  }
  sub_3B98A8(v22);
  sub_3A1ECC(v19);
  return a1;
}

