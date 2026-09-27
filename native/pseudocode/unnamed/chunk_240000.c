// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_240000

//======================================================================
// sub_240730
// address: 0x00240730   size: 0x54 (84 bytes)
//======================================================================
void __fastcall sub_240730(_DWORD *a1)
{
  int i; // r6
  _DWORD *v3; // r0
  void *v4; // r0
  void *v5; // r0

  if ( a1[15] != 0 )
  {
    for ( i = 0; ; ++i )
    {
      v3 = (_DWORD *)a1[15];
      if ( i >= a1[16] )
        break;
      v4 = (void *)v3[i];
      if ( v4 != nullptr )
      {
        Curl_cfree(v4);
        *(_DWORD *)(a1[15] + 4 * i) = 0;
      }
    }
    Curl_cfree(v3);
    a1[15] = 0;
    a1[16] = 0;
  }
  v5 = (void *)a1[18];
  if ( v5 != nullptr )
  {
    Curl_cfree(v5);
    a1[18] = 0;
  }
}


//======================================================================
// sub_24078C
// address: 0x0024078C   size: 0x24 (36 bytes)
//======================================================================
void __fastcall __noreturn sub_24078C(int a1)
{
  const char *v1; // r2

  v1 = *(const char **)(*(_DWORD *)(*(_DWORD *)a1 + 328) + 4);
  if ( v1 == nullptr )
    v1 = (const char *)&unk_3FB8EA;
  Curl_pp_sendf(a1 + 888, "USER %s", v1);
}


//======================================================================
// sub_2407CC
// address: 0x002407CC   size: 0x16 (22 bytes)
//======================================================================
void __fastcall __noreturn sub_2407CC(int a1)
{
  Curl_pp_sendf(a1 + 888, "%s", "PWD");
}


//======================================================================
// sub_2407F4
// address: 0x002407F4   size: 0x2E (46 bytes)
//======================================================================
void __fastcall __noreturn sub_2407F4(int a1)
{
  if ( *(_BYTE *)(a1 + 356) != 0 )
    Curl_pp_sendf(a1 + 888, "PBSZ %d", 0);
  sub_2407CC(a1);
}


//======================================================================
// sub_240828
// address: 0x00240828   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall sub_240828(int a1, int a2)
{
  int v3; // r1
  void *v4; // r0
  void *v5; // r0

  if ( a2 != 0 )
    *(_BYTE *)(a1 + 965) = 0;
  if ( *(_BYTE *)(a1 + 965) != 0 )
    Curl_pp_sendf(a1 + 888, "%s", "QUIT");
  v3 = *(_DWORD *)(a1 + 944);
  if ( v3 != 0 )
  {
    if ( *(_DWORD *)(*(_DWORD *)a1 + 34364) == v3 )
      *(_DWORD *)(*(_DWORD *)a1 + 34364) = 0;
    Curl_cfree(*(void **)(a1 + 944));
    *(_DWORD *)(a1 + 944) = 0;
  }
  sub_240730((_DWORD *)(a1 + 888));
  v4 = *(void **)(a1 + 972);
  if ( v4 != nullptr )
  {
    Curl_cfree(v4);
    *(_DWORD *)(a1 + 972) = 0;
  }
  v5 = *(void **)(a1 + 1008);
  if ( v5 != nullptr )
  {
    Curl_cfree(v5);
    *(_DWORD *)(a1 + 1008) = 0;
  }
  Curl_pp_disconnect(a1 + 888);
  return 0;
}


//======================================================================
// sub_240908
// address: 0x00240908   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_240908(int a1, bool *a2)
{
  int v2; // r4
  int result; // r0

  v2 = a1 + 888;
  result = Curl_pp_statemach(a1 + 888, 0);
  *a2 = *(_DWORD *)(v2 + 104) == 0;
  return result;
}


//======================================================================
// sub_240924
// address: 0x00240924   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_240924(int a1)
{
  return Curl_pp_getsock(a1 + 888);
}


//======================================================================
// sub_240934
// address: 0x00240934   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_240934(int a1, bool *a2)
{
  int v2; // r4
  int v5; // r3
  int result; // r0

  *a2 = false;
  *(_BYTE *)(a1 + 440) = 0;
  v2 = a1 + 888;
  *(_DWORD *)(a1 + 932) = a1;
  *(_DWORD *)(a1 + 928) = 1800000;
  *(_DWORD *)(a1 + 936) = sub_242800;
  *(_DWORD *)(a1 + 940) = sub_241930;
  v5 = *(_DWORD *)(a1 + 484);
  result = 4;
  if ( (*(_DWORD *)(v5 + 64) & 1) == 0 )
  {
    Curl_pp_init(v2);
    *(_DWORD *)(v2 + 104) = 1;
    return sub_240908(a1, a2);
  }
  return result;
}


//======================================================================
// sub_24098C
// address: 0x0024098C   size: 0x164 (356 bytes)
//======================================================================
int __fastcall sub_24098C(int a1, __int64 a2)
{
  int v3; // r4
  __int64 v5; // r2
  int v6; // r5
  int v8; // [sp+14h] [bp-20h]
  _QWORD *v10; // [sp+2Ch] [bp-8h]

  v3 = *(_DWORD *)a1;
  v8 = *(_DWORD *)(v3 + 328);
  if ( *(_QWORD *)(v3 + 728) != 0 && a2 > *(_QWORD *)(v3 + 728) )
    Curl_failf(v3, "Maximum file size exceeded");
  *(_QWORD *)(v8 + 16) = a2;
  v5 = *(_QWORD *)(v3 + 34408);
  v10 = (_QWORD *)(v3 + 34408);
  if ( v5 == 0 )
    Curl_pp_sendf(a1 + 888, "RETR %s", *(const char **)(a1 + 960));
  if ( a2 == -1 )
  {
    Curl_infof(v3, "ftp server doesn't support SIZE\n");
  }
  else if ( v5 >= 0 )
  {
    if ( v5 > a2 )
      Curl_failf(v3, "Offset (%lld) was beyond file size (%lld)");
    *(_QWORD *)(v8 + 16) = a2 - v5;
  }
  else
  {
    if ( -v5 > a2 )
      Curl_failf(v3, "Offset (%lld) was beyond file size (%lld)");
    *(_QWORD *)(v8 + 16) = -v5;
    *(_QWORD *)(v3 + 34408) = a2 + v5;
  }
  v6 = *(_DWORD *)(v8 + 16) | *(_DWORD *)(v8 + 20);
  if ( *(_QWORD *)(v8 + 16) != 0 )
  {
    Curl_infof(v3, "Instructs server to resume from offset %lld\n", *v10);
    Curl_pp_sendf(a1 + 888, "REST %lld", *v10);
  }
  Curl_setup_transfer(a1, -1, -1, -1, v6, v6, -1, v6);
  Curl_infof(v3, "File already completely downloaded\n");
  *(_DWORD *)(v8 + 12) = 2;
  *(_DWORD *)(a1 + 992) = v6;
  return v6;
}


//======================================================================
// sub_240B14
// address: 0x00240B14   size: 0x3C (60 bytes)
//======================================================================
void __fastcall __noreturn sub_240B14(int a1)
{
  if ( *(_BYTE *)(a1 + 456) == 0 && *(_BYTE *)(a1 + 447) != 0 )
    *(_BYTE *)(a1 + 456) = 1;
  Curl_pp_sendf(a1 + 888, "%s", &aEpsv[5 * (*(unsigned __int8 *)(a1 + 456) ^ 1)]);
}


//======================================================================
// sub_240B74
// address: 0x00240B74   size: 0x194 (404 bytes)
//======================================================================
int __fastcall sub_240B74(int a1, int a2)
{
  int v2; // r4
  __int64 v4; // r2
  int (__fastcall *v5)(_DWORD); // r1
  __int64 v6; // r2
  int v7; // r0
  __int64 v8; // r6
  __int64 v9; // r0
  unsigned int v10; // r0
  __int64 v11; // r2
  int v13; // r5
  unsigned int v14; // [sp+18h] [bp-Ch]
  int v15; // [sp+1Ch] [bp-8h]

  v2 = *(_DWORD *)a1;
  v15 = *(_DWORD *)(*(_DWORD *)a1 + 328);
  v4 = *(_QWORD *)(*(_DWORD *)a1 + 34408);
  if ( v4 == 0 )
    goto LABEL_24;
  if ( a2 != 0 )
  {
    if ( v4 <= 0 )
      goto LABEL_24;
  }
  else if ( v4 < 0 )
  {
    Curl_pp_sendf(a1 + 888, "SIZE %s", *(const char **)(a1 + 960));
  }
  *(_BYTE *)(v2 + 756) = 1;
  v5 = *(int (__fastcall **)(_DWORD))(a1 + 572);
  if ( v5 != nullptr )
  {
    v7 = v5(*(_DWORD *)(a1 + 576));
    if ( v7 != 0 )
    {
      if ( v7 != 2 )
        Curl_failf(v2, "Could not seek stream");
      v8 = 0;
      do
      {
        v9 = *(_QWORD *)(v2 + 34408) - v8;
        if ( v9 > 0x4000 )
        {
          v14 = 0x4000;
          v10 = (*(int (__fastcall **)(int, int, int, _DWORD))(a1 + 580))(v2 + 1388, 1, 0x4000, *(_DWORD *)(a1 + 584));
        }
        else
        {
          v14 = curlx_sotouz(v9, HIDWORD(v9));
          v10 = (*(int (__fastcall **)(int, int, unsigned int, _DWORD))(a1 + 580))(
                  v2 + 1388,
                  1,
                  v14,
                  *(_DWORD *)(a1 + 584));
        }
        v8 += v10;
        if ( v10 == 0 || v10 > v14 )
          Curl_failf(v2, "Failed to read data");
      }
      while ( *(_QWORD *)(v2 + 34408) > v8 );
    }
  }
  v6 = *(_QWORD *)(v2 + 536);
  if ( v6 <= 0 || (v11 = v6 - *(_QWORD *)(v2 + 34408), *(_QWORD *)(v2 + 536) = v11, v11 > 0) )
  {
LABEL_24:
    v13 = a1 + 888;
    if ( *(_BYTE *)(v2 + 756) != 0 )
      Curl_pp_sendf(v13, "APPE %s", *(_DWORD *)(v13 + 72));
    Curl_pp_sendf(v13, "STOR %s", *(_DWORD *)(v13 + 72));
  }
  Curl_infof(v2, "File already completely uploaded\n");
  Curl_setup_transfer(a1, -1, -1, -1, 0, 0, -1, 0);
  *(_DWORD *)(v15 + 12) = 2;
  *(_DWORD *)(a1 + 992) = 0;
  return 0;
}


//======================================================================
// sub_240D28
// address: 0x00240D28   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall sub_240D28(const char *a1)
{
  char *v2; // r0
  int v3; // r3

  v2 = j_strchr(a1, 13);
  v3 = 1;
  if ( v2 == nullptr )
    return j_strchr(a1, 10) != nullptr;
  return v3;
}


//======================================================================
// sub_240D4C
// address: 0x00240D4C   size: 0x466 (1126 bytes)
//======================================================================
int __fastcall sub_240D4C(int *a1)
{
  const char *v2; // r4
  size_t v3; // r0
  char *v4; // r5
  int v5; // r3
  char *v6; // r0
  char *v7; // r7
  const char *v8; // r1
  size_t v9; // r2
  char *v10; // r0
  _DWORD *v11; // r0
  const char *v12; // r0
  char *v13; // r1
  char *v15; // r0
  const char *v16; // r4
  unsigned int v17; // r0
  char *v18; // r0
  unsigned int v19; // r0
  int v20; // [sp+8h] [bp-9B4h]
  socklen_t v21; // [sp+28h] [bp-994h] BYREF
  int v22; // [sp+2Ch] [bp-990h] BYREF
  struct sockaddr buf[8]; // [sp+30h] [bp-98Ch] BYREF
  char v24[4]; // [sp+B0h] [bp-90Ch]
  _BYTE v25[252]; // [sp+B4h] [bp-908h] BYREF
  char v26[1036]; // [sp+5B0h] [bp-40Ch] BYREF

  v20 = *a1;
  *(_DWORD *)v24 = 0;
  j_memset(v25, 0, sizeof(v25));
  v2 = *(const char **)(v20 + 860);
  v22 = 0;
  if ( v2 == nullptr || (v3 = j_strlen(v2)) <= 1 )
  {
LABEL_16:
    v21 = 128;
    if ( j_getsockname(a1[80], buf, &v21) != 0 )
    {
      v11 = (_DWORD *)j___errno();
      v12 = (const char *)Curl_strerror(a1, *v11);
      Curl_failf(v20, "getsockname() failed: %s", v12);
    }
    v13 = &buf[0].sa_data[6];
    if ( buf[0].sa_family != 10 )
      v13 = &buf[0].sa_data[2];
    j_inet_ntop(buf[0].sa_family, v13, v26, 0x401u);
    Curl_resolv((int)a1, v26, 0, &v22);
  }
  if ( v3 <= 0x2D )
    v3 = 46;
  v4 = (char *)Curl_ccalloc(v3 + 1, 1);
  if ( v4 == nullptr )
    return 27;
  v5 = *(unsigned __int8 *)v2;
  if ( v5 == 91 )
  {
    v6 = j_strchr(v2, 93);
    v7 = v6;
    if ( v6 == nullptr )
      goto LABEL_24;
    v8 = v2 + 1;
    v9 = v6 - (v2 + 1);
    v10 = v4;
    goto LABEL_14;
  }
  if ( v5 != 58 )
  {
    v7 = j_strchr(v2, 58);
    if ( v7 == nullptr || j_inet_pton(10, v2, buf) == 1 )
    {
      j_strcpy(v4, v2);
      goto LABEL_24;
    }
    v9 = v7 - v2;
    v10 = v4;
    v8 = v2;
LABEL_14:
    j_strncpy(v10, v8, v9);
    v2 = v7;
  }
  v15 = j_strchr(v2, 58);
  v16 = v15;
  if ( v15 != nullptr )
  {
    v17 = j_strtoul(v15 + 1, nullptr, 10);
    curlx_ultous(v17);
    v18 = j_strchr(v16, 45);
    if ( v18 != nullptr )
    {
      v19 = j_strtoul(v18 + 1, nullptr, 10);
      curlx_ultous(v19);
    }
  }
LABEL_24:
  if ( *v4 == 0 )
    goto LABEL_16;
  return 30;
}


//======================================================================
// sub_2411D4
// address: 0x002411D4   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2411D4(_DWORD *a1, __suseconds_t a2, __time_t a3)
{
  int v3; // r4
  int result; // r0
  struct timeval v6; // [sp+0h] [bp-14h] BYREF
  struct timeval v7; // [sp+8h] [bp-Ch] BYREF

  v3 = a1[130];
  if ( v3 <= 0 )
    v3 = 60000;
  curlx_tvnow(&v6, a2, a3, 520);
  v7 = v6;
  result = Curl_timeleft(a1, &v7, 0);
  if ( result == 0 || result >= v3 )
  {
    result = v3 - curlx_tvdiff(v7.tv_sec, v7.tv_usec, a1[312], a1[313]);
    if ( result == 0 )
      return -1;
  }
  return result;
}


//======================================================================
// sub_24122C
// address: 0x0024122C   size: 0xBE (190 bytes)
//======================================================================
int __fastcall sub_24122C(int a1)
{
  int v1; // r6
  int v3; // r4
  int (__fastcall *v4)(_DWORD, int); // r3
  int v6; // [sp+4h] [bp-98h]
  int fd; // [sp+8h] [bp-94h]
  socklen_t v8; // [sp+10h] [bp-8Ch] BYREF
  struct sockaddr v9; // [sp+14h] [bp-88h] BYREF

  v1 = a1 + 252;
  v6 = *(_DWORD *)a1;
  fd = *(_DWORD *)(a1 + 324);
  v8 = 128;
  if ( j_getsockname(fd, &v9, &v8) != 0 )
  {
    v3 = -1;
  }
  else
  {
    v8 = 128;
    v3 = j_accept(fd, &v9, &v8);
  }
  Curl_closesocket(a1, fd);
  if ( v3 == -1 )
    Curl_failf(v6, "Error accept()ing server connect");
  Curl_infof(v6, "Connection accepted from server\n");
  *(_DWORD *)(v1 + 72) = v3;
  curlx_nonblock(v3, 1);
  *(_BYTE *)(a1 + 337) = 1;
  v4 = *(int (__fastcall **)(_DWORD, int))(v6 + 464);
  if ( v4 == nullptr || v4(*(_DWORD *)(v6 + 468), v3) == 0 )
    return 0;
  Curl_closesocket(a1, v3);
  *(_DWORD *)(v1 + 72) = -1;
  return 42;
}


//======================================================================
// sub_2412F8
// address: 0x002412F8   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_2412F8(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r6
  int v4; // r5
  _DWORD *v6; // r1

  v2 = *(_DWORD **)a1;
  v3 = (_DWORD *)v2[82];
  v4 = *(unsigned __int8 *)(a1 + 364);
  if ( *(_BYTE *)(a1 + 364) != 0 )
  {
    Curl_infof((int)v2, "Doing the SSL/TLS handshake on the data stream\n");
    return 4;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 996) == 33 )
    {
      v6 = (_DWORD *)*v3;
      *v6 = 0;
      v6[1] = 0;
      Curl_pgrsSetUploadSize(v2, (int)v6, v2[134], v2[135]);
      Curl_setup_transfer(a1, -1, -1, -1, v4, v4, 1, *v3);
    }
    else
    {
      Curl_setup_transfer(
        a1,
        1,
        *(_DWORD *)(a1 + 1000),
        *(_DWORD *)(a1 + 1004),
        *(unsigned __int8 *)(a1 + 364),
        *v3,
        -1,
        v4);
    }
    *(_BYTE *)(a1 + 904) = 1;
    *(_DWORD *)(a1 + 992) = 0;
    return 0;
  }
}


//======================================================================
// sub_241390
// address: 0x00241390   size: 0x18 (24 bytes)
//======================================================================
void __fastcall sub_241390(void *a1)
{
  if ( a1 != nullptr )
  {
    Curl_ftp_parselist_data_free();
    Curl_cfree(a1);
  }
}


//======================================================================
// sub_2413AC
// address: 0x002413AC   size: 0x30C (780 bytes)
//======================================================================
int __fastcall sub_2413AC(int *a1)
{
  _DWORD *v2; // r5
  const char *v3; // r4
  int v4; // r2
  _DWORD *v5; // r6
  int v6; // r0
  int v7; // r0
  void *v8; // r0
  int v9; // r0
  void *v10; // r4
  int v11; // r3
  int v12; // r2
  int v13; // r1
  void *v14; // r0
  const char *v15; // r0
  int result; // r0
  void *v17; // r6
  const char *v18; // r0
  int v19; // r5
  size_t v20; // r0
  int v21; // r5
  const char *v22; // r0
  size_t v23; // r0
  char *v24; // [sp+8h] [bp-24h]
  _DWORD *v25; // [sp+8h] [bp-24h]
  char *v26; // [sp+8h] [bp-24h]
  _DWORD *v27; // [sp+8h] [bp-24h]
  int v28; // [sp+Ch] [bp-20h]
  int v29; // [sp+10h] [bp-1Ch]
  _BOOL4 v30; // [sp+10h] [bp-1Ch]
  void *v31; // [sp+10h] [bp-1Ch]
  _DWORD *v32; // [sp+18h] [bp-14h]
  int v33; // [sp+18h] [bp-14h]
  int v34; // [sp+1Ch] [bp-10h]
  int v35; // [sp+24h] [bp-8h] BYREF

  v28 = *a1;
  v34 = *(_DWORD *)(*a1 + 328);
  v2 = a1 + 222;
  v3 = *(const char **)(*a1 + 34396);
  *((_BYTE *)a1 + 965) = 0;
  *((_BYTE *)a1 + 967) = 0;
  v4 = *(_DWORD *)(v28 + 736);
  if ( v4 != 2 )
  {
    if ( v4 == 3 )
    {
      if ( *v3 == 0 )
      {
        a1[238] = *(unsigned __int8 *)v3;
        goto LABEL_41;
      }
      v24 = j_strrchr(v3, 47);
      if ( v24 == nullptr )
        goto LABEL_36;
      v5 = Curl_ccalloc(1u, 4u);
      v2[15] = v5;
      if ( v5 == nullptr )
        return 27;
      v6 = v24 - v3;
      if ( v24 == v3 )
        v6 = 1;
      v29 = *a1;
      v7 = curlx_uztosi(v6);
      *v5 = curl_easy_unescape(v29, v3, v7, 0);
      if ( *(_DWORD *)a1[237] == 0 )
      {
LABEL_48:
        sub_240730(v2);
        return 27;
      }
      a1[238] = 1;
      v3 = v24 + 1;
    }
    else
    {
      a1[238] = 0;
      a1[239] = 5;
      v8 = Curl_ccalloc(5u, 4u);
      v2[15] = v8;
      if ( v8 == nullptr )
        return 27;
      if ( curl_strequal(v3, "/") != 0 )
      {
        v25 = (_DWORD *)v2[15];
        ++v3;
        *v25 = Curl_cstrdup("/");
        ++v2[16];
      }
      else
      {
        while ( 1 )
        {
          v26 = j_strchr(v3, 47);
          if ( v26 == nullptr )
            break;
          v30 = (int)&v3[-*(_DWORD *)(v28 + 34396)] > 0 && a1[238] == 0;
          if ( v26 == v3 )
          {
            v3 = v26 + 1;
            if ( a1[238] == 0 )
            {
              v27 = (_DWORD *)a1[237];
              *v27 = Curl_cstrdup("/");
              v11 = a1[238];
              v12 = a1[237];
              a1[238] = v11 + 1;
              if ( *(_DWORD *)(4 * v11 + v12) == 0 )
                Curl_failf(v28, "no memory");
            }
          }
          else
          {
            v9 = curlx_sztosi(v26 - v3 + v30);
            v32 = (_DWORD *)(a1[237] + 4 * a1[238]);
            *v32 = curl_easy_unescape(*a1, &v3[-v30], v9, 0);
            v33 = a1[238];
            v10 = *(void **)(4 * v33 + a1[237]);
            v31 = (void *)a1[237];
            if ( v10 == nullptr )
              Curl_failf(v28, "no memory");
            if ( sub_240D28((const char *)v10) )
            {
              Curl_cfree(v10);
              goto LABEL_40;
            }
            v13 = a1[239];
            v3 = v26 + 1;
            a1[238] = v33 + 1;
            if ( v33 + 1 >= v13 )
            {
              a1[239] = 2 * v13;
              v14 = Curl_crealloc(v31, 8 * v13);
              if ( v14 == nullptr )
                goto LABEL_48;
              a1[237] = (int)v14;
            }
          }
        }
      }
    }
    if ( v3 != nullptr )
      goto LABEL_36;
LABEL_41:
    a1[240] = 0;
    goto LABEL_42;
  }
  v3 = *(const char **)(v28 + 34396);
  if ( v3 == nullptr || *v3 == 0 || v3[j_strlen(*(const char **)(v28 + 34396)) - 1] == 47 )
    goto LABEL_41;
LABEL_36:
  if ( *v3 == 0 )
    goto LABEL_41;
  v15 = (const char *)curl_easy_unescape(*a1, v3, 0, 0);
  a1[240] = (int)v15;
  if ( v15 == nullptr )
  {
    sub_240730(v2);
    Curl_failf(v28, "no memory");
  }
  if ( sub_240D28(v15) )
  {
LABEL_40:
    sub_240730(v2);
    return 3;
  }
LABEL_42:
  if ( *(_BYTE *)(v28 + 769) != 0 && a1[240] == 0 && *(_DWORD *)(v34 + 12) == 0 )
    Curl_failf(v28, "Uploading to a URL without a file name!");
  *((_BYTE *)a1 + 966) = 0;
  result = a1[243];
  if ( result != 0 )
  {
    v17 = (void *)curl_easy_unescape(*a1, *(_DWORD *)(v28 + 34396), 0, &v35);
    if ( v17 == nullptr )
      goto LABEL_48;
    v18 = (const char *)a1[240];
    v19 = v35;
    if ( v18 != nullptr )
    {
      v20 = j_strlen(v18);
      v18 = (const char *)curlx_uztosi(v20);
    }
    v21 = v19 - (_DWORD)v18;
    v22 = (const char *)a1[243];
    v35 = v21;
    v23 = j_strlen(v22);
    if ( v21 == curlx_uztosi(v23) && curl_strnequal(v17, a1[243], v35) != 0 )
    {
      Curl_infof(v28, "Request has same path as previous transfer\n");
      *((_BYTE *)a1 + 966) = 1;
    }
    Curl_cfree(v17);
    return 0;
  }
  return result;
}


//======================================================================
// sub_2416FC
// address: 0x002416FC   size: 0xF6 (246 bytes)
//======================================================================
int __fastcall sub_2416FC(int a1)
{
  int v2; // r6
  _BOOL4 v3; // r0
  _DWORD *v4; // r5
  const char *v5; // r0
  char *v6; // r0
  int v7; // r0
  int v8; // r2
  const char *v9; // r0
  const char *v10; // r6
  int v11; // r5
  _DWORD *v12; // r4

  v2 = *(_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 443) != 0 && *(_BYTE *)(v2 + 754) == 0 )
  {
    if ( *(char ***)(a1 + 484) != &Curl_handler_ftp )
      Curl_failf(*(_DWORD *)a1, "FTPS not supported!");
    *(_DWORD *)(a1 + 484) = &off_459DD4;
    return Curl_http_setup_conn((int *)a1);
  }
  v4 = Curl_cmalloc(0x18u);
  *(_DWORD *)(v2 + 328) = v4;
  if ( v4 == nullptr )
    return 27;
  v5 = (const char *)(*(_DWORD *)(v2 + 34396) + 1);
  *(_DWORD *)(v2 + 34396) = v5;
  *(_BYTE *)(v2 + 34400) = 1;
  v6 = j_strstr(v5, ";type=");
  if ( v6 != nullptr || (v6 = j_strstr(*(const char **)(a1 + 128), ";type=")) != nullptr )
  {
    *v6 = 0;
    v7 = Curl_raw_toupper((unsigned __int8)v6[6]);
    *(_BYTE *)(a1 + 464) = 1;
    if ( v7 == 65 )
    {
      v8 = 755;
    }
    else
    {
      if ( v7 != 68 )
      {
        *(_BYTE *)(v2 + 755) = 0;
        goto LABEL_15;
      }
      v8 = 757;
    }
    *(_BYTE *)(v2 + v8) = 1;
  }
LABEL_15:
  *v4 = *(_DWORD *)a1 + 112;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v9 = *(const char **)(a1 + 268);
  v4[1] = v9;
  v10 = *(const char **)(a1 + 272);
  v4[2] = v10;
  v11 = 3;
  if ( !sub_240D28(v9) )
  {
    v3 = sub_240D28(v10);
    if ( !v3 )
    {
      v12 = (_DWORD *)(a1 + 1016);
      *v12 = -1;
      v12[1] = -1;
      return v3;
    }
  }
  return v11;
}


//======================================================================
// sub_24181C
// address: 0x0024181C   size: 0xC6 (198 bytes)
//======================================================================
void __fastcall __noreturn sub_24181C(int *a1, int a2)
{
  int v3; // r0
  const char *v4; // r2
  const char *v5; // r2
  const char *v6; // r2

  v3 = *a1;
  if ( a2 == 331 && a1[248] == 3 )
  {
    v4 = *(const char **)(*(_DWORD *)(v3 + 328) + 8);
    if ( v4 == nullptr )
      v4 = (const char *)&unk_3FB8EA;
    Curl_pp_sendf(a1 + 222, "PASS %s", v4);
  }
  if ( (unsigned int)(a2 - 200) <= 0x63 )
    sub_2407F4((int)a1);
  if ( a2 == 332 )
  {
    v5 = *(const char **)(v3 + 852);
    if ( v5 != nullptr )
      Curl_pp_sendf(a1 + 222, "ACCT %s", v5);
    Curl_failf(v3, "ACCT requested but none available");
  }
  v6 = *(const char **)(v3 + 856);
  if ( v6 != nullptr && *(_BYTE *)(v3 + 34368) == 0 )
    Curl_pp_sendf(a1 + 222, "%s", v6);
  Curl_failf(v3, "Access denied: %03d", a2);
}


//======================================================================
// sub_241900
// address: 0x00241900   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_241900(int a1, _DWORD *a2, int a3)
{
  int result; // r0
  int v5; // r3

  result = 0;
  if ( a3 != 0 )
  {
    if ( *(_DWORD *)(a1 + 992) != 0 )
    {
      return Curl_pp_getsock(a1 + 888);
    }
    else
    {
      v5 = a1 + 252;
      *a2 = *(_DWORD *)(v5 + 68);
      a2[1] = *(_DWORD *)(v5 + 72);
      return 131073;
    }
  }
  return result;
}


//======================================================================
// sub_241930
// address: 0x00241930   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_241930(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  int v5; // r4
  int v6; // r0

  v5 = 0;
  if ( a3 > 3
    && (unsigned int)(unsigned __int8)*a2 - 48 <= 9
    && (unsigned int)(unsigned __int8)a2[1] - 48 <= 9
    && (unsigned int)(unsigned __int8)a2[2] - 48 <= 9
    && a2[3] == 32 )
  {
    v6 = j_strtol(a2, nullptr, 10);
    v5 = 1;
    *a4 = curlx_sltosi(v6);
  }
  return v5;
}


//======================================================================
// sub_241970
// address: 0x00241970   size: 0x30 (48 bytes)
//======================================================================
void __fastcall __noreturn sub_241970(int a1)
{
  Curl_infof(*(_DWORD *)a1, "Failed EPSV attempt. Disabling EPSV\n");
  *(_BYTE *)(a1 + 456) = 0;
  *(_BYTE *)(*(_DWORD *)a1 + 34200) = 0;
  Curl_pp_sendf(a1 + 888, "%s", "PASV");
}


//======================================================================
// sub_2419C4
// address: 0x002419C4   size: 0x2C0 (704 bytes)
//======================================================================
void __fastcall __noreturn sub_2419C4(int a1, int a2)
{
  int v2; // r7
  const char *v3; // r5
  char *v5; // r0
  char *v6; // r5
  char *v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // [sp+14h] [bp-130h]
  unsigned int v11; // [sp+24h] [bp-120h] BYREF
  int v12; // [sp+28h] [bp-11Ch] BYREF
  int v13; // [sp+2Ch] [bp-118h] BYREF
  int v14; // [sp+30h] [bp-114h] BYREF
  int v15; // [sp+34h] [bp-110h] BYREF
  int v16; // [sp+38h] [bp-10Ch] BYREF

  v2 = *(_DWORD *)a1;
  v3 = (const char *)(*(_DWORD *)a1 + 1392);
  v10 = *(_DWORD *)(a1 + 980);
  if ( v10 == 0 )
  {
    if ( a2 != 229 )
      sub_241970(a1);
    v5 = j_strchr((const char *)(v2 + 1392), 40);
    if ( v5 != nullptr )
    {
      v6 = v5 + 1;
      if ( j_sscanf(v5 + 1, "%c%c%c%u%c", &v13, (char *)&v13 + 1, (char *)&v13 + 2, &v11, (char *)&v13 + 3) == 5 )
      {
        if ( (unsigned __int8)v13 == BYTE1(v13) && BYTE2(v13) == (unsigned __int8)v13 )
          v7 = HIBYTE(v13) == BYTE2(v13) ? v6 : nullptr;
        else
          v7 = nullptr;
        if ( v11 > 0xFFFF )
          Curl_failf(v2, "Illegal port number in EPSV reply");
        if ( v7 != nullptr )
        {
          *(_WORD *)(a1 + 1072) = v11;
          v8 = a1 + 1024;
          if ( *(_BYTE *)(a1 + 453) == 0 && (unsigned int)(*(_DWORD *)(a1 + 292) - 4) > 3 )
            curl_msnprintf(v8, 48, "%s", a1 + 72);
          curl_msnprintf(v8, 48, "%s", *(_DWORD *)(a1 + 136));
        }
      }
    }
    Curl_failf(v2, "Weirdly formatted EPSV reply");
  }
  if ( v10 == 1 && a2 == 227 )
  {
    while ( *v3 != 0 && j_sscanf(v3, "%d,%d,%d,%d,%d,%d", &v13, &v14, &v15, &v16, &v11, &v12) != 6 )
      ++v3;
    if ( *v3 == 0 )
      Curl_failf(v2, "Couldn't interpret the 227-response");
    if ( *(_BYTE *)(v2 + 800) != 0 )
    {
      Curl_infof(
        v2,
        "Skips %d.%d.%d.%d for data connection, uses %s instead\n",
        v13,
        v14,
        v15,
        v16,
        (const char *)(a1 + 72));
      v9 = a1 + 1024;
      if ( *(_BYTE *)(a1 + 453) != 0 || (unsigned int)(*(_DWORD *)(a1 + 292) - 4) <= 3 )
        curl_msnprintf(v9, 48, "%s", *(_DWORD *)(a1 + 136));
      curl_msnprintf(v9, 48, "%s", a1 + 72);
    }
    curl_msnprintf(a1 + 1024, 48, "%d.%d.%d.%d", v13, v14, v15, v16);
  }
  Curl_failf(v2, "Bad PASV/EPSV response: %03d", a2);
}


//======================================================================
// sub_241CC8
// address: 0x00241CC8   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_241CC8(int a1, int a2, int a3)
{
  int v3; // r4

  v3 = 73;
  if ( a2 != 0 )
    v3 = 65;
  if ( *(unsigned __int8 *)(a1 + 976) != v3 )
    Curl_pp_sendf(a1 + 888, "TYPE %c", v3);
  *(_DWORD *)(a1 + 992) = a3;
  return sub_242018();
}


//======================================================================
// sub_241D0C
// address: 0x00241D0C   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_241D0C(int a1)
{
  int v1; // r3
  int v2; // r2

  v1 = *(_DWORD *)a1;
  if ( *(_BYTE *)(*(_DWORD *)a1 + 767) == 0 || *(_DWORD *)(a1 + 960) == 0 )
    return sub_241FE0();
  v2 = 73;
  if ( *(_BYTE *)(v1 + 755) != 0 )
    v2 = 65;
  if ( *(unsigned __int8 *)(a1 + 976) == v2 )
    return sub_241FE0();
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 328) + 12) = 1;
  return sub_241CC8(a1, *(unsigned __int8 *)(v1 + 755), 19);
}


//======================================================================
// sub_241D60
// address: 0x00241D60   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_241D60(_DWORD *a1)
{
  const char *v1; // r2

  if ( *(_BYTE *)(*a1 + 753) != 0 || *(_DWORD *)(*a1 + 620) != 0 )
  {
    v1 = (const char *)a1[240];
    if ( v1 != nullptr )
      Curl_pp_sendf(a1 + 222, "MDTM %s", v1);
  }
  return sub_241D0C((int)a1);
}


//======================================================================
// sub_241DA4
// address: 0x00241DA4   size: 0x12E (302 bytes)
//======================================================================
int __fastcall sub_241DA4(int a1, int a2, unsigned int a3)
{
  _DWORD *v4; // r0
  int v6; // r7
  int v7; // r3
  int v8; // r3
  int v9; // r2
  int i; // r2
  const char *v11; // r2
  int v12; // r3
  int v14; // r3
  int v15; // r2
  int v16; // r2
  int v17; // r3
  int v18; // r1

  v4 = *(_DWORD **)a1;
  v6 = v4[82];
  if ( a3 < 0xD || (v7 = 149, a3 > 0xE) && (v7 = 148, a3 != 15) )
    v7 = 147;
  v8 = v4[v7];
  v9 = 0;
  if ( a2 == 0 )
    v9 = *(_DWORD *)(a1 + 980) + 1;
  *(_DWORD *)(a1 + 980) = v9;
  if ( v8 != 0 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 980); ++i )
    {
      if ( v8 == 0 )
        goto LABEL_17;
      v8 = *(_DWORD *)(v8 + 4);
    }
    if ( v8 != 0 )
    {
      v11 = *(const char **)v8;
      if ( **(_BYTE **)v8 == 42 )
      {
        ++v11;
        v12 = 1;
      }
      else
      {
        v12 = 0;
      }
      *(_DWORD *)(a1 + 984) = v12;
      Curl_pp_sendf(a1 + 888, "%s", v11);
    }
  }
LABEL_17:
  switch ( a3 )
  {
    case 0xEu:
      return sub_240B74(a1, 0);
    case 0xFu:
      return 0;
    case 0xDu:
      if ( *(_DWORD *)(v6 + 12) != 0 )
      {
        *(_DWORD *)(a1 + 992) = 0;
        return 0;
      }
      else
      {
        v16 = *(_DWORD *)(a1 + 1016);
        v17 = *(_DWORD *)(a1 + 1020);
        v18 = v16 + 1;
        if ( v16 == -1 )
        {
          v18 = v17 + 1;
          if ( v17 == -1 )
            Curl_pp_sendf(a1 + 888, "SIZE %s", *(const char **)(a1 + 960));
        }
        Curl_pgrsSetDownloadSize(v4, v18, v16, v17);
        return sub_24098C(a1, *(_QWORD *)(a1 + 1016));
      }
    default:
      v14 = *(unsigned __int8 *)(a1 + 966);
      if ( *(_BYTE *)(a1 + 966) == 0 )
      {
        *(_DWORD *)(a1 + 984) = v14;
        *(_DWORD *)(a1 + 988) = v4[185] == 2;
        if ( *(_BYTE *)(a1 + 441) != 0 )
        {
          v15 = *(_DWORD *)(a1 + 944);
          if ( v15 != 0 )
          {
            *(_DWORD *)(a1 + 980) = v14;
            Curl_pp_sendf(a1 + 888, "CWD %s", v15);
          }
        }
        if ( *(_DWORD *)(a1 + 952) != 0 )
        {
          *(_DWORD *)(a1 + 980) = 1;
          Curl_pp_sendf(a1 + 888, "CWD %s", **(_DWORD **)(a1 + 948));
        }
      }
      return sub_241D60((_DWORD *)a1);
  }
}


//======================================================================
// sub_241EE8
// address: 0x00241EE8   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_241EE8(int *a1)
{
  int v1; // r3
  int v3; // r2
  const char *v4; // r2
  int *v5; // r0

  v1 = *a1;
  if ( *(_DWORD *)(*(_DWORD *)(*a1 + 328) + 12) != 0 )
  {
    a1[248] = 13;
    return sub_241DA4((int)a1, 1, 0xDu);
  }
  else
  {
    if ( *(_BYTE *)(v1 + 758) == 0 )
    {
      if ( *(_BYTE *)(v1 + 782) != 0 )
      {
        v3 = a1[240];
        if ( v3 == 0 )
        {
          v4 = *(const char **)(v1 + 840);
          if ( v4 == nullptr )
          {
            if ( *(_BYTE *)(v1 + 757) != 0 )
              v4 = "NLST";
            else
              v4 = "LIST";
          }
          Curl_pp_sendf(a1 + 222, "PRET %s", v4);
        }
        v5 = a1 + 222;
        if ( *(_BYTE *)(v1 + 769) != 0 )
          Curl_pp_sendf(v5, "PRET STOR %s", v3);
        Curl_pp_sendf(v5, "PRET RETR %s", v3);
      }
      sub_240B14((int)a1);
    }
    return sub_240D4C(a1);
  }
}


//======================================================================
// sub_241FA4
// address: 0x00241FA4   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_241FA4(int *a1)
{
  if ( *(_DWORD *)(*(_DWORD *)(*a1 + 328) + 12) != 0 && a1[240] != 0 )
    Curl_pp_sendf(a1 + 222, "REST %d", 0);
  return sub_241EE8(a1);
}


//======================================================================
// sub_241FE0
// address: 0x00241FE0   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_241FE0(int *a1)
{
  const char *v1; // r2

  if ( *(_DWORD *)(*(_DWORD *)(*a1 + 328) + 12) == 1 )
  {
    v1 = (const char *)a1[240];
    if ( v1 != nullptr )
      Curl_pp_sendf(a1 + 222, "SIZE %s", v1);
  }
  return sub_241FA4(a1);
}


//======================================================================
// sub_242018
// address: 0x00242018   size: 0x110 (272 bytes)
//======================================================================
int __fastcall sub_242018(int *a1, int a2)
{
  int v3; // r2
  const char *v4; // r4
  const char *v5; // r5
  const char *v6; // r0
  char *v7; // r0
  const char *v8; // r1
  const char *v9; // r3
  const char *v10; // r2
  int v11; // r5
  unsigned int v12; // r2
  int v14; // [sp+0h] [bp-Ch]

  if ( a2 == 19 )
    return sub_241FE0(a1);
  if ( a2 != 20 )
  {
    if ( a2 == 21 )
    {
      v12 = 13;
    }
    else
    {
      v11 = 0;
      if ( a2 != 22 )
        return v11;
      v12 = 14;
    }
    return sub_241DA4((int)a1, 1, v12);
  }
  v3 = *a1;
  v14 = *a1;
  v4 = nullptr;
  if ( *(_DWORD *)(*a1 + 736) != 2 )
    goto LABEL_12;
  v5 = *(const char **)(v3 + 34396);
  if ( v5 == nullptr || *v5 == 0 || j_strchr(*(const char **)(v3 + 34396), 47) == nullptr )
    goto LABEL_12;
  v6 = Curl_cstrdup(v5);
  v4 = v6;
  if ( v6 != nullptr )
  {
    if ( v6[j_strlen(v6) - 1] != 47 )
    {
      v7 = j_strrchr(v4, 47);
      if ( v7 != nullptr )
        v7[1] = 0;
    }
LABEL_12:
    v8 = *(const char **)(v14 + 840);
    if ( v8 == nullptr )
    {
      if ( *(_BYTE *)(v14 + 757) != 0 )
        v8 = "NLST";
      else
        v8 = "LIST";
    }
    if ( v4 != nullptr )
    {
      v9 = v4;
      v10 = " ";
    }
    else
    {
      v10 = (const char *)&unk_3FB8EA;
      v9 = (const char *)&unk_3FB8EA;
    }
    curl_maprintf("%s%s%s", v8, v10, v9);
  }
  return 27;
}


//======================================================================
// sub_242284
// address: 0x00242284   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_242284(int a1, _BYTE *a2, __time_t a3)
{
  int v3; // r7
  _DWORD *v4; // r4
  int v6; // r5
  unsigned __int8 *v7; // r3
  int v8; // r0
  int v9; // r5
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+8h] [bp-Ch] BYREF
  int v14[2]; // [sp+Ch] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 320);
  v4 = *(_DWORD **)a1;
  v12 = *(_DWORD *)(a1 + 324);
  *a2 = 0;
  v6 = sub_2411D4(v4, (__suseconds_t)a2, a3);
  Curl_infof((int)v4, "Checking for server connect\n");
  if ( v6 < 0 )
    Curl_failf((int)v4, "Accept timeout occurred while waiting server connect");
  if ( *(_DWORD *)(a1 + 892) != 0 )
  {
    v7 = *(unsigned __int8 **)(a1 + 888);
    if ( v7 != nullptr && *v7 > 0x33u )
    {
      Curl_infof((int)v4, "There is negative response in cache while serv connect\n");
      Curl_GetFTPResponse(&v13, a1, v14);
      return 10;
    }
  }
  v8 = Curl_socket_check(v3, v12, -1, 0);
  if ( v8 == -1 )
    Curl_failf((int)v4, "Error while waiting for server connect");
  v9 = 0;
  if ( v8 != 0 )
  {
    if ( (v8 & 8) != 0 )
    {
      Curl_infof((int)v4, "Ready to accept data connection from server\n");
      *a2 = 1;
    }
    else if ( (v8 & 1) != 0 )
    {
      v9 = 8;
      Curl_infof((int)v4, "Ctrl conn has data while waiting for data conn\n");
      Curl_GetFTPResponse(&v13, a1, v14);
      if ( v14[0] > 399 )
        return 10;
    }
  }
  return v9;
}


//======================================================================
// sub_242374
// address: 0x00242374   size: 0x72 (114 bytes)
//======================================================================
int __fastcall sub_242374(int *a1, _BYTE *a2)
{
  int v2; // r4
  __time_t v5; // r2
  __suseconds_t v6; // r3
  __suseconds_t v7; // r1
  __time_t v8; // r2
  __time_t v9; // r2
  int v10; // r5
  int v11; // r1

  v2 = *a1;
  *a2 = 0;
  Curl_infof(v2, "Preparing for accepting server on data port\n");
  v7 = (unsigned __int64)Curl_pgrsTime((struct timeval)((unsigned int)v2 | 0x800000000LL), v5, v6) >> 32;
  if ( sub_2411D4((_DWORD *)v2, v7, v8) < 0 )
    Curl_failf(v2, "Accept timeout occurred while waiting server connect");
  v10 = sub_242284((int)a1, a2, v9);
  if ( v10 == 0 )
  {
    if ( *a2 != 0 )
    {
      v10 = sub_24122C((int)a1);
      if ( v10 == 0 )
        return sub_2412F8((int)a1);
    }
    else
    {
      v11 = *(_DWORD *)(v2 + 520);
      if ( v11 <= 0 )
        v11 = 60000;
      Curl_expire(v2, v11);
    }
  }
  return v10;
}


//======================================================================
// sub_2423F4
// address: 0x002423F4   size: 0x376 (886 bytes)
//======================================================================
int __fastcall sub_2423F4(int a1, int *a2)
{
  int v3; // r0
  int v4; // r4
  int v5; // r7
  int result; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r7
  int v10; // r0
  _BYTE *v11; // r6
  int v12; // r2
  _DWORD *v13; // r4
  const char *v14; // r0
  __int64 v15; // r6
  int v16; // r3
  __int64 v17; // r0
  __int64 *v18; // r4
  int v19; // r3
  int v20; // r0
  int v21; // r1
  int v22; // r2
  char *v23; // [sp+18h] [bp-84h]
  unsigned __int8 *v24; // [sp+1Ch] [bp-80h]
  int v26; // [sp+24h] [bp-78h]
  _DWORD *v27; // [sp+28h] [bp-74h]
  int v28; // [sp+2Ch] [bp-70h]
  char v29; // [sp+32h] [bp-6Ah] BYREF
  bool v30; // [sp+33h] [bp-69h] BYREF
  char *v31; // [sp+34h] [bp-68h] BYREF
  char *v32[25]; // [sp+38h] [bp-64h] BYREF

  v3 = *(_DWORD *)a1;
  v4 = 0;
  v30 = false;
  v27 = *(_DWORD **)(v3 + 328);
  v5 = *(unsigned __int8 *)(a1 + 450);
  v24 = (unsigned __int8 *)v3;
  v29 = 0;
  if ( v5 != 0 )
    goto LABEL_22;
  if ( *(_DWORD *)(a1 + 1108) == 1 )
    return Curl_proxyCONNECT(a1, 1, 0, 0);
  result = Curl_is_connected(a1, 1, &v29);
  v4 = result;
  if ( v29 != 0 )
  {
    if ( *(_BYTE *)(a1 + 442) != 0 )
    {
      Curl_infof((int)v24, "Connection to proxy confirmed\n");
      v26 = *(unsigned __int16 *)(a1 + 1072);
      v23 = (char *)(a1 + 1024);
      v28 = *(_DWORD *)a1;
      v7 = *(_DWORD *)(a1 + 292);
      v29 = 0;
      switch ( v7 )
      {
        case 0:
        case 1:
          v4 = 0;
          goto LABEL_13;
        case 4:
          v4 = Curl_SOCKS4(*(_DWORD *)(a1 + 284), v23, v26, 1, a1, 0);
          v29 = 1;
          goto LABEL_13;
        case 5:
        case 7:
          v8 = Curl_SOCKS5(*(_DWORD *)(a1 + 284), *(_DWORD *)(a1 + 288), v23, v26, 1, a1);
          goto LABEL_10;
        case 6:
          v8 = Curl_SOCKS4(*(_DWORD *)(a1 + 284), v23, v26, 1, a1, 1);
LABEL_10:
          v4 = v8;
          v29 = 1;
LABEL_13:
          if ( *(_BYTE *)(a1 + 453) != 0 && *(_BYTE *)(a1 + 443) != 0 )
          {
            v9 = *(_DWORD *)(v28 + 328);
            j_memset(v32, 0, 0x60u);
            *(_DWORD *)(v28 + 328) = v32;
            v10 = Curl_proxyCONNECT(a1, 1, v23, v26);
            *(_DWORD *)(v28 + 328) = v9;
            v4 = v10;
            if ( v10 == 0 )
            {
              if ( *(_DWORD *)(a1 + 1108) == 2 )
                v29 = 1;
              else
                *(_DWORD *)(a1 + 992) = 0;
            }
          }
          break;
        default:
          Curl_failf(v28, "unknown proxytype option given");
      }
    }
LABEL_22:
    if ( *(_DWORD *)(a1 + 992) != 0 )
    {
      result = sub_240908(a1, &v30);
      v4 = result;
      *a2 = v30;
      if ( result != 0 )
        return result;
      if ( *(_BYTE *)(a1 + 968) == 0 )
        return 0;
      *a2 = 0;
    }
    v11 = (_BYTE *)(a1 + 968);
    if ( v27[3] > 1u )
    {
      if ( v4 == 0 )
        Curl_setup_transfer(a1, -1, -1, -1, 0, 0, -1, 0);
      result = v4;
      if ( *v11 != 0 )
        return result;
      v19 = 1;
LABEL_67:
      *a2 = v19;
      return result;
    }
    if ( *v11 != 0 )
    {
      result = sub_242284(a1, v32, 968);
      if ( result != 0 )
        return result;
      if ( LOBYTE(v32[0]) == 0 )
        return 0;
      result = sub_24122C(a1);
      *v11 = 0;
      if ( result == 0 )
      {
        result = sub_2412F8(a1);
        if ( result == 0 )
        {
          *a2 = 1;
          return 0;
        }
      }
      return result;
    }
    v12 = v24[769];
    if ( v24[769] != 0 )
    {
      result = sub_241CC8(a1, v24[755], 22);
      if ( result == 0 )
      {
        result = sub_240908(a1, &v30);
        *a2 = v30;
      }
      return result;
    }
    v27[4] = -1;
    v27[5] = -1;
    v13 = *(_DWORD **)a1;
    if ( *(_BYTE *)(*(_DWORD *)a1 + 34401) == 0 || (v14 = (const char *)v13[8601]) == nullptr )
    {
      v13[24] = -1;
      v13[25] = -1;
      goto LABEL_55;
    }
    v15 = j_strtoll(v14, &v31, v12);
    while ( 1 )
    {
      v16 = (unsigned __int8)*v31;
      if ( *v31 == 0 || (*(_BYTE *)(ctype_ + v16 + 1) & 8) == 0 && v16 != 45 )
        break;
      ++v31;
    }
    v17 = j_strtoll(v31, v32, 0);
    if ( v31 == v32[0] || v17 == -1 )
    {
      if ( v15 >= 0 )
      {
        v18 = (__int64 *)(v13 + 8602);
LABEL_53:
        *v18 = v15;
        *(_BYTE *)(a1 + 964) = 1;
LABEL_55:
        if ( v24[757] == 0 && *(_DWORD *)(a1 + 960) != 0 )
        {
          v20 = a1;
          v21 = v24[755];
          v22 = 21;
        }
        else
        {
          if ( v27[3] != 0 )
          {
LABEL_58:
            result = sub_240908(a1, &v30);
            v19 = v30;
            goto LABEL_67;
          }
          v20 = a1;
          v21 = 1;
          v22 = 20;
        }
        result = sub_241CC8(v20, v21, v22);
        if ( result != 0 )
          return result;
        goto LABEL_58;
      }
    }
    else if ( v15 >= 0 )
    {
      *((_QWORD *)v13 + 12) = v17 - v15 + 1;
      v18 = (__int64 *)(v13 + 8602);
      goto LABEL_53;
    }
    *((_QWORD *)v13 + 12) = -v15;
    v18 = (__int64 *)(v13 + 8602);
    goto LABEL_53;
  }
  if ( result == 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 980) == 0 )
  {
    *a2 = -1;
    sub_241970(a1);
  }
  return result;
}


//======================================================================
// sub_24276C
// address: 0x0024276C   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_24276C(int a1, int a2)
{
  int v4; // r7
  int v5; // r6
  int v6; // r1
  int v8; // [sp+14h] [bp-8h] BYREF

  v4 = *(_DWORD *)(*(_DWORD *)a1 + 328);
  if ( a2 != 0 && (v5 = sub_2423F4(a1, &v8)) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 324);
    if ( v6 != -1 )
    {
      Curl_closesocket(a1, v6);
      *(_DWORD *)(a1 + 324) = -1;
    }
    return v5;
  }
  else
  {
    if ( *(_DWORD *)(v4 + 12) != 0 )
    {
      Curl_setup_transfer(a1, -1, -1, -1, 0, 0, -1, 0);
    }
    else if ( a2 == 0 )
    {
      *(_BYTE *)(a1 + 448) = 1;
    }
    *(_BYTE *)(a1 + 965) = 1;
    return 0;
  }
}


//======================================================================
// sub_2427E0
// address: 0x002427E0   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_2427E0(int a1, bool *a2)
{
  int v4; // r1

  v4 = sub_240908(a1, a2);
  if ( v4 == 0 && *a2 )
    return sub_24276C(a1, 0);
  return v4;
}


//======================================================================
// sub_242800
// address: 0x00242800   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_242800(int a1)
{
  int v2; // r0
  int v3; // r0
  int *v4; // r4
  int v5; // r6
  __int64 v6; // r0
  int v7; // r5
  int v8; // r3
  int v9; // r0
  int v10; // r2
  int v11; // r2
  _BYTE *v12; // r0
  _BYTE *v13; // r5
  char *v14; // r3
  char *v15; // r1
  int v16; // r2
  unsigned __int8 *v17; // r3
  _BYTE *i; // r2
  int v19; // r1
  void *v20; // r0
  _BYTE *j; // r3
  _BYTE *v22; // r2
  _DWORD *v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r0
  int v27; // r3
  int v28; // r6
  int v29; // r0
  int v30; // r3
  int v31; // r2
  int v32; // r3
  int v33; // r3
  int v35; // r0
  int v36; // r6
  __int64 v37; // kr00_8
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r4
  int v42; // r0
  int v43; // r0
  int v44; // r6
  char *v45; // r0
  char *v46; // r3
  int v47; // r2
  int v48; // r5
  __int64 v49; // kr08_8
  __int64 v50; // r2
  _BYTE *v51; // r3
  int v52; // r0
  _DWORD *v53; // [sp+18h] [bp-84h]
  int v54; // [sp+18h] [bp-84h]
  int v55; // [sp+18h] [bp-84h]
  int v56; // [sp+18h] [bp-84h]
  unsigned int v57; // [sp+1Ch] [bp-80h]
  int v58; // [sp+20h] [bp-7Ch]
  int v59; // [sp+20h] [bp-7Ch]
  int v60; // [sp+34h] [bp-68h] BYREF
  int v61; // [sp+38h] [bp-64h] BYREF
  int v62; // [sp+3Ch] [bp-60h] BYREF
  int v63; // [sp+40h] [bp-5Ch] BYREF
  int v64; // [sp+44h] [bp-58h] BYREF
  int v65; // [sp+48h] [bp-54h] BYREF
  int v66; // [sp+4Ch] [bp-50h] BYREF
  _DWORD v67[6]; // [sp+50h] [bp-4Ch] BYREF
  int v68; // [sp+68h] [bp-34h]
  char v69[24]; // [sp+7Ch] [bp-20h] BYREF

  v53 = *(_DWORD **)a1;
  v2 = *(_DWORD *)(a1 + 320);
  v58 = a1 + 888;
  v60 = 0;
  if ( *(_DWORD *)(a1 + 912) != 0 )
  {
    v3 = Curl_pp_flushsend(v58);
    goto LABEL_3;
  }
  v4 = *(int **)(a1 + 932);
  v5 = *v4;
  LODWORD(v6) = Curl_pp_readresp(v2, v58, v67, &v60);
  v7 = v67[0];
  *(_DWORD *)(v5 + 34460) = v67[0];
  if ( v7 == 421 )
  {
    Curl_infof(v5, "We got a 421 - timeout!\n");
    v4[248] = 0;
    LODWORD(v6) = ((int (*)(void))sub_243360)();
  }
  if ( (_DWORD)v6 != 0 )
    LODWORD(v6) = ((int (*)(void))sub_243360)();
  if ( v7 == 0 )
    sub_243360(v6);
  LODWORD(v6) = *(_DWORD *)(a1 + 992) - 1;
  v57 = *(_DWORD *)(a1 + 992);
  if ( (unsigned int)v6 > 0x20 )
    LODWORD(v6) = sub_24335C();
  switch ( (int)v6 )
  {
    case 0:
      if ( v7 != 230 )
        JUMPOUT(0x2428F4);
      goto LABEL_14;
    case 1:
      if ( v7 == 234 )
        sub_243370();
      if ( v7 == 334 )
        sub_243370();
      v8 = *(_DWORD *)(a1 + 988);
      if ( v8 <= 0 )
      {
        v9 = *(_DWORD *)(a1 + 984);
        *(_DWORD *)(a1 + 988) = v8 + 1;
        v10 = *(_DWORD *)(a1 + 980) + v9;
        *(_DWORD *)(a1 + 980) = v10;
        Curl_pp_sendf(v58, "AUTH %s", &aSsl[4 * v10]);
      }
      v3 = 64;
      if ( v53[196] <= 1u )
        sub_24078C(a1);
      goto LABEL_3;
    case 2:
    case 3:
LABEL_14:
      sub_24181C((int *)a1, v7);
    case 4:
      if ( v7 != 230 )
        Curl_failf(*(_DWORD *)a1, "ACCT rejected by server: %03d", v7);
      sub_2407F4(a1);
    case 5:
      v11 = 80;
      if ( v53[196] == 2 )
        v11 = 67;
      Curl_pp_sendf(v58, "PROT %c", v11);
    case 6:
      if ( (unsigned int)(v7 - 200) > 0x63 )
      {
        if ( v53[196] > 2u )
          sub_243360(v6);
      }
      else
      {
        *(_BYTE *)(a1 + 364) = *((_BYTE *)v53 + 784) - 2 - (*((_BYTE *)v53 + 784) - 3 + (v53[196] == 2));
      }
      if ( v53[198] != 0 )
        Curl_pp_sendf(v58, "%s", "CCC");
      goto LABEL_37;
    case 7:
      if ( v7 <= 499 )
        Curl_failf(*(_DWORD *)a1, "Failed to clear the command channel (CCC)");
LABEL_37:
      sub_2407CC(a1);
    case 8:
      if ( v7 != 257 )
        goto LABEL_123;
      v12 = Curl_cmalloc(v60 + 1);
      v13 = v12;
      if ( v12 == nullptr )
        goto LABEL_41;
      v14 = (char *)(v53 + 348);
      v15 = (char *)v53 + 17773;
      goto LABEL_46;
    case 9:
      if ( v7 != 215 )
        goto LABEL_123;
      v12 = Curl_cmalloc(v60 + 1);
      v13 = v12;
      if ( v12 == nullptr )
      {
LABEL_41:
        sub_243360(v12);
        do
        {
          v16 = (unsigned __int8)*v14;
          if ( v16 == 10 || *v14 == 0 || v16 == 34 )
            break;
          ++v14;
LABEL_46:
          ;
        }
        while ( v14 < v15 );
        if ( *v14 != 34 )
        {
          Curl_cfree(v13);
          LODWORD(v6) = Curl_infof((int)v53, "Failed to figure out path\n");
          goto LABEL_123;
        }
        v17 = (unsigned __int8 *)(v14 + 1);
        for ( i = v13; ; ++i )
        {
          v19 = *v17;
          if ( *v17 == 0 )
            goto LABEL_58;
          if ( v19 == 34 )
          {
            if ( v17[1] != 34 )
            {
              *i = 0;
LABEL_58:
              if ( *(_DWORD *)(a1 + 1008) == 0 && *v13 != 47 )
                Curl_pp_sendf(v58, "%s", "SYST");
              v20 = *(void **)(a1 + 944);
              if ( v20 != nullptr )
                Curl_cfree(v20);
              *(_DWORD *)(a1 + 944) = v13;
              Curl_infof((int)v53, "Entry path is '%s'\n", v13);
              LODWORD(v6) = v53;
              v53[8591] = *(_DWORD *)(a1 + 944);
              goto LABEL_123;
            }
            *i = 34;
            ++v17;
          }
          else
          {
            *i = v19;
          }
          ++v17;
        }
      }
      for ( j = v53 + 348; *j == 32; ++j )
        ;
      v22 = v12;
      while ( (*j & 0xDF) != 0 )
        *v22++ = *j++;
      *v22 = 0;
      if ( curl_strequal(v12, "OS/400") != 0 )
        Curl_pp_sendf(v58, "%s", "SITE NAMEFMT 1");
      LODWORD(v6) = *(_DWORD *)(a1 + 1008);
      if ( (_DWORD)v6 != 0 )
        Curl_cfree((void *)v6);
      *(_DWORD *)(a1 + 1008) = v13;
      goto LABEL_123;
    case 10:
      if ( v7 == 250 )
        sub_2407CC(a1);
      goto LABEL_84;
    case 11:
    case 12:
    case 13:
    case 14:
      if ( v7 > 399 && *(_DWORD *)(a1 + 984) == 0 )
        Curl_failf(*(_DWORD *)a1, "QUOT command failed with %03d", v7);
      v3 = sub_241DA4(a1, 0, v57);
      goto LABEL_3;
    case 15:
      if ( (unsigned int)(v7 - 200) > 0x63 )
      {
        if ( *(_DWORD *)(*(_DWORD *)a1 + 740) != 0 )
        {
          v24 = *(_DWORD *)(a1 + 980);
          if ( v24 != 0 && *(_DWORD *)(a1 + 984) == 0 )
          {
            *(_DWORD *)(a1 + 984) = 1;
            Curl_pp_sendf(a1 + 888, "MKD %s", *(const char **)(4 * (v24 + 0x3FFFFFFF) + *(_DWORD *)(a1 + 948)));
          }
        }
        Curl_failf((int)v53, "Server denied you to change to the given directory");
      }
      *(_DWORD *)(a1 + 984) = 0;
      v25 = *(_DWORD *)(a1 + 980);
      v26 = *(_DWORD *)(a1 + 952);
      *(_DWORD *)(a1 + 980) = v25 + 1;
      if ( v25 + 1 <= v26 )
        Curl_pp_sendf(a1 + 888, "CWD %s", *(_DWORD *)(4 * v25 + *(_DWORD *)(a1 + 948)));
      v3 = sub_241D60((_DWORD *)a1);
      goto LABEL_3;
    case 16:
      if ( (unsigned int)(v7 - 200) > 0x63 )
      {
        v27 = *(_DWORD *)(a1 + 988);
        *(_DWORD *)(a1 + 988) = v27 - 1;
        if ( v27 == 0 )
          Curl_failf((int)v53, "Failed to MKD dir: %03d", v7);
      }
      *(_DWORD *)(a1 + 992) = 16;
      Curl_pp_sendf(a1 + 888, "CWD %s", *(_DWORD *)(4 * (*(_DWORD *)(a1 + 980) + 0x3FFFFFFF) + *(_DWORD *)(a1 + 948)));
    case 17:
      v28 = *(_DWORD *)a1;
      v59 = *(_DWORD *)(*(_DWORD *)a1 + 328);
      if ( v7 == 213 )
      {
        if ( j_sscanf((const char *)(v28 + 1392), "%04d%02d%02d%02d%02d%02d", &v61, &v62, &v63, &v64, &v65, &v66) == 6 )
        {
          v67[0] = j_time(nullptr);
          curl_msnprintf(v28 + 1388, 16385, "%04d%02d%02d %02d:%02d:%02d GMT", v61, v62, v63, v64, v65, v66);
        }
        if ( *(_BYTE *)(v28 + 767) == 0 )
          goto LABEL_117;
        if ( *(_DWORD *)(a1 + 960) == 0 )
          goto LABEL_117;
        if ( *(_BYTE *)(v28 + 753) == 0 )
          goto LABEL_117;
        v29 = *(_DWORD *)(v28 + 34472);
        if ( v29 < 0 )
          goto LABEL_117;
        v3 = Curl_gmtime(v29, v67);
        if ( v3 == 0 )
        {
          v30 = 6;
          if ( v68 != 0 )
            v30 = v68 - 1;
          curl_msnprintf(
            v28 + 1388,
            0x3FFF,
            "Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
            Curl_wkday[v30],
            v67[3],
            Curl_month[v67[4]],
            v67[5] + 1900,
            v67[2],
            v67[1],
            v67[0]);
        }
LABEL_3:
        sub_2428EE(v3);
      }
      if ( v7 == 550 )
        Curl_failf(v28, "Given file does not exist");
      Curl_infof(v28, "unsupported MDTM reply format\n");
LABEL_117:
      v55 = *(_DWORD *)(v28 + 620);
      if ( v55 == 0 )
        goto LABEL_128;
      v31 = *(_DWORD *)(v28 + 34472);
      if ( v31 <= 0 || (v32 = *(_DWORD *)(v28 + 624)) <= 0 )
      {
        Curl_infof(v28, "Skipping time comparison\n");
        goto LABEL_128;
      }
      if ( v55 == 2 )
      {
        if ( v31 > v32 )
        {
          Curl_infof(v28, "The requested document is not old enough\n");
          LODWORD(v6) = v59;
          *(_DWORD *)(v59 + 12) = 2;
          *(_BYTE *)(v28 + 34476) = 1;
          v33 = a1 + 888;
          goto LABEL_126;
        }
        goto LABEL_128;
      }
      if ( v31 > v32 )
      {
LABEL_128:
        v3 = sub_241D0C(a1);
        goto LABEL_3;
      }
      LODWORD(v6) = Curl_infof(v28, "The requested document is not new enough\n");
      *(_DWORD *)(v59 + 12) = 2;
      *(_BYTE *)(v28 + 34476) = 1;
LABEL_123:
      v33 = a1 + 888;
LABEL_126:
      *(_DWORD *)(v33 + 104) = 0;
      return sub_243360(v6);
    case 18:
    case 19:
    case 20:
    case 21:
      v35 = *(_DWORD *)a1;
      if ( (unsigned int)(v7 - 200) > 0x63 )
        Curl_failf(v35, "Couldn't set desired mode");
      if ( v7 != 200 )
        Curl_infof(v35, "Got a %03d response code instead of the assumed 200\n", v7);
      v3 = sub_242018((int *)a1, v57);
      goto LABEL_3;
    case 22:
    case 23:
    case 24:
      v36 = *(_DWORD *)a1;
      if ( v7 == 213 )
      {
        v6 = j_strtoll((const char *)(v36 + 1392), nullptr, 0);
        v37 = v6;
        if ( v57 == 23 )
        {
          if ( (_DWORD)v6 != -1 || (++HIDWORD(v6), HIDWORD(v6) != 0) )
            curl_msnprintf(v36 + 1388, 16385, "Content-Length: %lld\r\n", v37);
          goto LABEL_140;
        }
      }
      else
      {
        v37 = -1;
        if ( v57 == 23 )
        {
LABEL_140:
          Curl_pgrsSetDownloadSize((_DWORD *)v36, SHIDWORD(v6), -1, SHIDWORD(v37));
          v3 = sub_241FA4((int *)a1);
          goto LABEL_3;
        }
      }
      if ( v57 == 24 )
      {
        Curl_pgrsSetDownloadSize((_DWORD *)v36, SHIDWORD(v6), v37, SHIDWORD(v37));
        v3 = sub_24098C(a1, v37);
      }
      else
      {
        *(_QWORD *)(v36 + 34408) = v37;
        v3 = sub_240B74(a1, 1);
      }
      goto LABEL_3;
    case 25:
    case 26:
      if ( v57 != 27 )
      {
        if ( v7 == 350 )
        {
          strcpy(v69, "Accept-ranges: bytes\r\n");
          v69[23] = 0;
          v38 = Curl_client_write(a1, 3, v69, 0);
          if ( v38 != 0 )
            sub_2428EE(v38);
        }
        v39 = sub_241EE8((int *)a1);
        sub_2428EE(v39);
      }
      if ( v7 != 350 )
        Curl_failf(*(_DWORD *)a1, "Couldn't use REST");
      Curl_pp_sendf(a1 + 888, "RETR %s", *(const char **)(a1 + 960));
    case 27:
      v40 = *(_DWORD *)a1;
      v41 = *(_DWORD *)(a1 + 980);
      if ( v7 != 200 )
      {
        if ( v41 != 0 )
        {
          if ( v41 == 1 )
            Curl_failf(v40, "Failed to do PORT");
        }
        else
        {
          Curl_infof(v40, "disabling EPRT usage\n");
          *(_BYTE *)(a1 + 457) = 0;
        }
        v42 = sub_240D4C((int *)a1);
        sub_2428EE(v42);
      }
      Curl_infof(v40, "Connect data stream actively\n");
      *(_DWORD *)(a1 + 992) = 0;
      v43 = sub_24276C(a1, 0);
      sub_2428EE(v43);
    case 28:
      if ( v7 != 200 )
        Curl_failf((int)v53, "PRET command not accepted: %03d", v7);
      sub_240B14(a1);
    case 29:
      sub_2419C4(a1, v7);
    case 30:
    case 31:
      v54 = *(_DWORD *)a1;
      v23 = *(_DWORD **)(*(_DWORD *)a1 + 328);
      if ( v7 != 150 && v7 != 125 )
      {
        if ( v57 != 31 || v7 != 450 )
          Curl_failf(v54, "RETR response: %03d", v7);
        v23[3] = 2;
LABEL_84:
        *(_DWORD *)(a1 + 992) = 0;
        return sub_243360(v6);
      }
      v44 = v23[5];
      if ( v57 == 31 || *(_BYTE *)(v54 + 755) != 0 || v44 > 0 || v44 == 0 && v23[4] != 0 )
      {
        v48 = v23[4];
        if ( v44 >= 0 )
          goto LABEL_177;
      }
      else
      {
        v45 = j_strstr((const char *)(v54 + 1388), " bytes");
        v46 = v45 - 1;
        if ( v45 == nullptr )
          goto LABEL_176;
        while ( &v46[-1389 - v54] != nullptr )
        {
          v47 = (unsigned __int8)*v46;
          if ( v47 == 40 )
            break;
          if ( (unsigned int)(v47 - 48) > 9 )
            goto LABEL_176;
          --v46;
        }
        if ( v46 != nullptr )
        {
          v49 = j_strtoll(v46 + 1, nullptr, 0);
          v44 = HIDWORD(v49);
          v48 = v49;
          goto LABEL_177;
        }
      }
LABEL_176:
      v48 = -1;
      v44 = -1;
LABEL_177:
      v50 = *(_QWORD *)(v54 + 96);
      if ( __SPAIR64__(v44, v48) <= v50 || v50 <= 0 )
      {
        if ( v57 != 31 && *(_BYTE *)(v54 + 755) != 0 )
        {
          v48 = -1;
          v44 = -1;
        }
      }
      else
      {
        v48 = *(_DWORD *)(v54 + 96);
        v44 = *(_DWORD *)(v54 + 100);
        *(_QWORD *)(v54 + 80) = v50;
      }
      Curl_infof(v54, "Maxdownload = %lld\n", v50);
      if ( v57 != 31 )
        Curl_infof(v54, "Getting file with size: %lld\n", __PAIR64__(v44, v48));
      *(_DWORD *)(a1 + 996) = v57;
      *(_DWORD *)(a1 + 1000) = v48;
      *(_DWORD *)(a1 + 1004) = v44;
      if ( *(_BYTE *)(v54 + 758) == 0 )
      {
LABEL_199:
        v52 = sub_2412F8(a1);
        sub_2428EE(v52);
      }
      LODWORD(v6) = sub_242374((int *)a1, v67);
      if ( (_DWORD)v6 != 0 )
        sub_2428EE(v6);
      if ( LOBYTE(v67[0]) == 0 )
      {
        Curl_infof(v54, "Data conn was not available immediately\n");
        LODWORD(v6) = 968;
        *(_DWORD *)(a1 + 992) = 0;
        v51 = (_BYTE *)(a1 + 968);
LABEL_198:
        *v51 = 1;
      }
      return sub_243360(v6);
    case 32:
      v56 = *(_DWORD *)a1;
      if ( v7 > 399 )
        Curl_failf(v56, "Failed FTP upload: %0d", v7);
      *(_DWORD *)(a1 + 996) = 33;
      if ( *(_BYTE *)(v56 + 758) == 0 )
        goto LABEL_199;
      *(_DWORD *)(a1 + 992) = 0;
      LODWORD(v6) = sub_242374((int *)a1, v67);
      if ( (_DWORD)v6 != 0 )
        ((void (__noreturn *)(void))sub_2428EE)();
      if ( LOBYTE(v67[0]) != 0 )
        return sub_243360(v6);
      LODWORD(v6) = Curl_infof(v56, "Data conn was not available immediately\n");
      v51 = (_BYTE *)(a1 + 968);
      goto LABEL_198;
  }
}


//======================================================================
// sub_2428EE
// address: 0x002428EE   size: 0x8A (138 bytes)
//======================================================================
void __fastcall __noreturn sub_2428EE(
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
        int a13)
{
  int v13; // r5
  _DWORD *v14; // r6
  int v15; // r7
  int v16; // r3
  unsigned int v17; // r2

  sub_243360(a1);
  if ( v13 != 220 )
    Curl_failf(a11, "Got a %03d ftp-server response when 220 was expected", v13);
  if ( *(_DWORD *)(a11 + 784) != 0 )
  {
    v16 = *(unsigned __int8 *)(v15 + 356);
    if ( *(_BYTE *)(v15 + 356) == 0 )
    {
      v14[25] = v16;
      v17 = *(_DWORD *)(a11 + 788);
      if ( v17 <= 1 )
      {
        v14[24] = 1;
      }
      else
      {
        if ( v17 != 2 )
          Curl_failf(a11, "unsupported parameter to CURLOPT_FTPSSLAUTH: %d", v17);
        v14[24] = -1;
        v16 = 1;
      }
      v14[23] = v16;
      Curl_pp_sendf(a13, "AUTH %s", &aSsl[4 * v14[23]]);
    }
  }
  sub_24078C(v15);
}


//======================================================================
// sub_242978
// address: 0x00242978   size: 0x2 (2 bytes)
//======================================================================
// attributes: thunk
void __fastcall __noreturn sub_242978(
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
        int a13)
{
  sub_2428EE(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}


//======================================================================
// sub_2429E4
// address: 0x002429E4   size: 0x4 (4 bytes)
//======================================================================
void __fastcall __noreturn sub_2429E4(
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
        int a13)
{
  sub_2428EE(11, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}


//======================================================================
// sub_2429EE
// address: 0x002429EE   size: 0x2 (2 bytes)
//======================================================================
// attributes: thunk
void __fastcall __noreturn sub_2429EE(
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
        int a13)
{
  sub_2428EE(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}


//======================================================================
// sub_242A84
// address: 0x00242A84   size: 0x2 (2 bytes)
//======================================================================
// attributes: thunk
void __fastcall __noreturn sub_242A84(
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
        int a13)
{
  sub_2428EE(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}


//======================================================================
// sub_242C92
// address: 0x00242C92   size: 0x2 (2 bytes)
//======================================================================
// attributes: thunk
int __fastcall sub_242C92(int a1)
{
  return sub_243360(a1);
}


//======================================================================
// sub_242CDE
// address: 0x00242CDE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_242CDE(int a1)
{
  return sub_243360(a1);
}


//======================================================================
// sub_242DA2
// address: 0x00242DA2   size: 0x2 (2 bytes)
//======================================================================
// attributes: thunk
void __fastcall __noreturn sub_242DA2(
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
        int a13)
{
  sub_2428EE(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}


//======================================================================
// sub_242FB0
// address: 0x00242FB0   size: 0x2 (2 bytes)
//======================================================================
// attributes: thunk
int __fastcall sub_242FB0(int a1)
{
  return sub_243360(a1);
}


//======================================================================
// sub_2430B8
// address: 0x002430B8   size: 0x2 (2 bytes)
//======================================================================
// attributes: thunk
int __fastcall sub_2430B8(int a1)
{
  return sub_243360(a1);
}


//======================================================================
// sub_2430E0
// address: 0x002430E0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_2430E0(int a1)
{
  return sub_243360(a1);
}


//======================================================================
// sub_243306
// address: 0x00243306   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_243306(int a1)
{
  int v1; // r6

  *(_DWORD *)(v1 + 104) = 0;
  return sub_243360(a1);
}


//======================================================================
// sub_24335C
// address: 0x0024335C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_24335C(
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
        int a13)
{
  int v13; // r4

  *(_DWORD *)(a13 + 104) = v13;
  return sub_243360(a1);
}


//======================================================================
// sub_243360
// address: 0x00243360   size: 0x10 (16 bytes)
//======================================================================
void sub_243360()
{
  JUMPOUT(0x243376);
}


//======================================================================
// sub_243370
// address: 0x00243370   size: 0xA (10 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00243370  MOVS    R0, #4
//   00243372  BL      sub_2428EE
//   00243376  ADD     SP, SP, #0x9C
//   00243378  POP     {R4-R7,PC}

//======================================================================
// sub_2433A8
// address: 0x002433A8   size: 0x456 (1110 bytes)
//======================================================================
int __fastcall sub_2433A8(int a1, bool *a2)
{
  const char *v3; // r6
  char *v4; // r0
  char *v5; // r5
  char *v6; // r0
  char *v7; // r0
  int *v8; // r6
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0
  int v12; // r3
  _DWORD *v13; // r3
  void (__fastcall *v14)(_DWORD); // r3
  _DWORD *v15; // r0
  int v16; // r3
  _DWORD *v17; // r5
  int v18; // r1
  int v19; // r1
  int v20; // r1
  int v21; // r1
  int v22; // r7
  int v23; // r0
  int v24; // r6
  int v25; // r5
  char *v27; // [sp+4h] [bp-18h]
  _DWORD *v28; // [sp+8h] [bp-14h]
  int v29; // [sp+Ch] [bp-10h]
  int v30; // [sp+Ch] [bp-10h]

  *a2 = false;
  *(_BYTE *)(a1 + 968) = 0;
  if ( *(_BYTE *)(*(_DWORD *)a1 + 1020) == 0 )
  {
    v22 = sub_2413AC((int *)a1);
    goto LABEL_52;
  }
  while ( 2 )
  {
    v28 = *(_DWORD **)a1;
    switch ( *(_DWORD *)(*(_DWORD *)a1 + 34432) )
    {
      case 0:
        v3 = (const char *)v28[8599];
        v4 = j_strrchr(v3, 47);
        v5 = v4;
        if ( v4 != nullptr )
        {
          if ( v4[1] == 0 )
          {
            v28[8608] = 3;
LABEL_13:
            v22 = sub_2413AC((int *)a1);
            goto LABEL_34;
          }
          v6 = Curl_cstrdup(v4 + 1);
          v28[8610] = v6;
          if ( v6 == nullptr )
            goto LABEL_21;
          v5[1] = 0;
        }
        else
        {
          if ( *v3 == 0 )
          {
            v28[8608] = 3;
            goto LABEL_13;
          }
          v7 = Curl_cstrdup(v3);
          v28[8610] = v7;
          if ( v7 == nullptr )
            goto LABEL_21;
          *v3 = 0;
        }
        v8 = (int *)Curl_ccalloc(1u, 0xCu);
        if ( v8 == nullptr )
        {
          v9 = (void *)v28[8610];
          if ( v9 != nullptr )
          {
            Curl_cfree(v9);
            v28[8610] = 0;
          }
LABEL_21:
          v22 = 27;
          goto LABEL_34;
        }
        v29 = Curl_ftp_parselist_data_alloc();
        *v8 = v29;
        if ( v29 == 0 )
        {
          if ( v28[8610] != 0 )
          {
            ((void (*)(void))Curl_cfree)();
            v28[8610] = 0;
          }
          Curl_cfree(v8);
          goto LABEL_21;
        }
        v28[8612] = v8;
        v28[8613] = sub_241390;
        if ( *(_DWORD *)(*(_DWORD *)a1 + 736) == 2 )
          *(_DWORD *)(*(_DWORD *)a1 + 736) = 1;
        v30 = sub_2413AC((int *)a1);
        if ( v30 != 0 )
        {
          v10 = (void *)v28[8610];
          if ( v10 != nullptr )
          {
            Curl_cfree(v10);
            v28[8610] = 0;
          }
          ((void (__fastcall *)(_DWORD))v28[8613])(v28[8612]);
          v28[8613] = 0;
          v28[8612] = 0;
        }
        else
        {
          v27 = Curl_cstrdup(*(const char **)(*(_DWORD *)a1 + 34396));
          v28[8609] = v27;
          if ( v27 == nullptr )
          {
            v11 = (void *)v28[8610];
            if ( v11 != nullptr )
            {
              Curl_cfree(v11);
              v28[8610] = 0;
            }
            ((void (__fastcall *)(_DWORD))v28[8613])(v28[8612]);
            v28[8613] = 0;
            v28[8612] = 0;
            goto LABEL_21;
          }
          v8[1] = *(_DWORD *)(*(_DWORD *)a1 + 424);
          *(_DWORD *)(*(_DWORD *)a1 + 424) = Curl_ftp_parselist;
          v8[2] = *(_DWORD *)(*(_DWORD *)a1 + 352);
          *(_DWORD *)(*(_DWORD *)a1 + 352) = a1;
          Curl_infof(*(_DWORD *)a1, "Wildcard - Parsing started\n");
        }
        v22 = v30;
LABEL_34:
        if ( v28[8608] != 3 )
        {
          v12 = 1;
          if ( v22 != 0 )
            v12 = 5;
          v28[8608] = v12;
        }
LABEL_51:
        v21 = 34432;
        if ( (*(_DWORD *)(*(_DWORD *)a1 + 34432) & 0xFFFFFFFD) == 4 )
          return 0;
LABEL_52:
        if ( v22 != 0 )
          return v22;
        v17 = *(_DWORD **)a1;
        v17[20] = -1;
        v17[21] = -1;
        Curl_pgrsSetUploadCounter((int)v17, v21, 0, 0);
        Curl_pgrsSetDownloadCounter((int)v17, v18, 0, 0);
        Curl_pgrsSetUploadSize(v17, v19, 0, 0);
        Curl_pgrsSetDownloadSize(v17, v20, 0, 0);
        *(_BYTE *)(a1 + 965) = 1;
        if ( *(_BYTE *)(*(_DWORD *)a1 + 767) != 0 )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 328) + 12) = 1;
        *a2 = false;
        v22 = sub_241DA4(a1, 1, 0xCu);
        if ( v22 != 0 )
        {
LABEL_60:
          sub_240730((_DWORD *)(a1 + 888));
          return v22;
        }
        v23 = sub_240908(a1, a2);
        v24 = *(unsigned __int8 *)(a1 + 450);
        v25 = v23;
        Curl_infof(*(_DWORD *)a1, "ftp_perform ends with SECONDARY: %d\n", v24);
        if ( v25 != 0 )
        {
          v22 = v25;
          goto LABEL_60;
        }
        if ( *a2 )
          return sub_24276C(a1, v24);
        return v22;
      case 1:
        v13 = (_DWORD *)v28[8612];
        v28[106] = v13[1];
        *(_DWORD *)(*(_DWORD *)a1 + 352) = v13[2];
        v13[1] = 0;
        v13[2] = 0;
        v28[8608] = 2;
        if ( Curl_ftp_parselist_geterror(*v13) != 0 )
        {
          v28[8608] = 3;
        }
        else if ( *(_DWORD *)(v28[8611] + 12) == 0 )
        {
          v22 = 78;
          v28[8608] = 3;
          goto LABEL_51;
        }
        continue;
      case 2:
        curl_maprintf("%s%s", (const char *)v28[8609], ***(const char ****)v28[8611]);
      case 3:
        v15 = (_DWORD *)v28[8612];
        if ( v15 != nullptr )
        {
          v15 = (_DWORD *)Curl_ftp_parselist_geterror(*v15);
          v16 = (v15 == nullptr) + 5;
        }
        else
        {
          v16 = 6;
        }
        v22 = (int)v15;
        v28[8608] = v16;
        goto LABEL_51;
      case 4:
        v14 = (void (__fastcall *)(_DWORD))v28[257];
        if ( v14 != nullptr )
          v14(v28[8614]);
        Curl_llist_remove(v28[8611], *(_DWORD *)v28[8611], 0);
        v28[8608] = 3 - (*(_DWORD *)(v28[8611] + 12) != 0);
        continue;
      default:
        v22 = 0;
        goto LABEL_51;
    }
  }
}


//======================================================================
// sub_243810
// address: 0x00243810   size: 0x49E (1182 bytes)
//======================================================================
int __fastcall sub_243810(int a1, unsigned int a2, int a3)
{
  int v3; // r6
  __int64 **v4; // r7
  int v6; // r4
  void *v7; // r0
  void (__fastcall *v8)(_DWORD); // r3
  char *v9; // r4
  const char *v10; // r0
  size_t v11; // r0
  char v12; // r2
  size_t v13; // r0
  const char *v14; // r2
  int v15; // r1
  __time_t v16; // r2
  int FTPResponse; // r4
  int v18; // r0
  int result; // r0
  __int64 v20; // r0
  __int64 v21; // r2
  __int64 v22; // r0
  unsigned int v23; // r2
  const char *v24; // r6
  __int64 v25; // [sp+18h] [bp-34h]
  const char *v26; // [sp+20h] [bp-2Ch]
  unsigned int v27; // [sp+20h] [bp-2Ch]
  struct timeval *v28; // [sp+24h] [bp-28h]
  int v30; // [sp+2Ch] [bp-20h]
  struct timeval v31; // [sp+30h] [bp-1Ch] BYREF
  int v32; // [sp+38h] [bp-14h] BYREF
  int v33; // [sp+3Ch] [bp-10h] BYREF

  v3 = *(_DWORD *)a1;
  v4 = *(__int64 ***)(*(_DWORD *)a1 + 328);
  v28 = (struct timeval *)(a1 + 888);
  HIDWORD(v25) = a2;
  v6 = *(_DWORD *)(*(_DWORD *)a1 + 34396);
  if ( v4 == nullptr )
    return 0;
  if ( a2 > 0x13 )
  {
    if ( a2 != 30 )
    {
      if ( a2 > 0x1E )
      {
        if ( a2 != 63 && a2 != 78 && a2 != 36 )
          goto LABEL_19;
      }
      else if ( a2 != 23 && a2 != 25 )
      {
        goto LABEL_19;
      }
    }
LABEL_18:
    LODWORD(v25) = 0;
    if ( a3 == 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( a2 >= 0x11 )
    goto LABEL_18;
  if ( a2 > 0xA )
  {
    if ( a2 - 12 <= 1 )
      goto LABEL_18;
  }
  else if ( a2 >= 9 || a2 == 0 )
  {
    goto LABEL_18;
  }
LABEL_19:
  *(_BYTE *)(a1 + 965) = 0;
  *(_BYTE *)(a1 + 967) = 1;
  *(_BYTE *)(a1 + 440) = 1;
  LODWORD(v25) = a2;
LABEL_20:
  v7 = *(void **)(a1 + 972);
  if ( v7 != nullptr )
    Curl_cfree(v7);
  if ( *(_BYTE *)(v3 + 1020) != 0 )
  {
    v8 = *(void (__fastcall **)(_DWORD))(v3 + 1028);
    if ( v8 != nullptr && *(_DWORD *)(a1 + 960) != 0 )
      v8(*(_DWORD *)(v3 + 34456));
    *(_QWORD *)(a1 + 1016) = -1;
  }
  v9 = (char *)curl_easy_unescape(v3, v6, 0, 0);
  if ( v9 != nullptr )
  {
    v10 = *(const char **)(a1 + 960);
    if ( v10 != nullptr )
      v10 = (const char *)j_strlen(v10);
    v26 = v10;
    v11 = j_strlen(v9);
    v12 = *(_BYTE *)(a1 + 967);
    if ( v12 != 0 )
    {
      *(_DWORD *)(a1 + 972) = 0;
      Curl_cfree(v9);
    }
    else
    {
      v13 = v11 - (_DWORD)v26;
      if ( v13 == 0 || *(_DWORD *)(v3 + 736) == 2 )
      {
        *(_DWORD *)(a1 + 972) = Curl_cstrdup((const char *)&unk_3FB8EA);
        Curl_cfree(v9);
      }
      else
      {
        *(_DWORD *)(a1 + 972) = v9;
        if ( v26 != nullptr )
          v9[v13] = v12;
      }
      v14 = *(const char **)(a1 + 972);
      if ( v14 != nullptr )
        Curl_infof(v3, "Remembering we are in dir \"%s\"\n", v14);
    }
  }
  else
  {
    if ( (_DWORD)v25 == 0 )
      LODWORD(v25) = 27;
    *(_BYTE *)(a1 + 965) = 0;
    *(_BYTE *)(a1 + 440) = 1;
    *(_DWORD *)(a1 + 972) = 0;
  }
  sub_240730(v28);
  if ( *(_DWORD *)(a1 + 324) != -1 )
  {
    if ( (_DWORD)v25 == 0 && *(_BYTE *)(a1 + 964) != 0 && *(__int64 *)(v3 + 96) > 0 )
      Curl_pp_sendf(v28, "%s", "ABOR");
    v15 = *(_DWORD *)(a1 + 324);
    if ( v15 != -1 )
    {
      Curl_closesocket(a1, v15);
      *(_DWORD *)(a1 + 324) = -1;
      v16 = 0;
      *(_BYTE *)(a1 + 450) = 0;
    }
  }
  if ( (_DWORD)v25 != 0 )
    goto LABEL_82;
  if ( v4[3] == nullptr && *(_BYTE *)(a1 + 965) != 0 && *(_BYTE *)(a1 + 904) != 0 )
  {
    if ( a3 == 0 )
    {
      v30 = *(_DWORD *)(a1 + 928);
      *(_DWORD *)(a1 + 928) = 60000;
      curlx_tvnow(&v31, v15, v16, 60000);
      v28[4] = v31;
      FTPResponse = Curl_GetFTPResponse(&v32, a1, &v33);
      v18 = v32;
      *(_DWORD *)(a1 + 928) = v30;
      if ( v18 == 0 && FTPResponse == 28 )
        Curl_failf(v3, "control connection looks dead");
      if ( FTPResponse != 0 )
        return FTPResponse;
      if ( *(_BYTE *)(a1 + 964) != 0 )
      {
        if ( *(__int64 *)(v3 + 96) > 0 )
        {
          Curl_infof(v3, "partial download completed, closing connection\n");
          *(_BYTE *)(a1 + 440) = 1;
          return 0;
        }
      }
      else if ( v33 != 226 && v33 != 250 )
      {
        Curl_failf(v3, "server did not report OK, got %d", v33);
      }
      goto LABEL_66;
    }
  }
  else if ( a3 == 0 )
  {
LABEL_66:
    if ( *(_BYTE *)(v3 + 769) != 0 )
    {
      v20 = *(_QWORD *)(v3 + 536);
      if ( v20 != -1 )
      {
        v21 = **v4;
        if ( v20 != v21 && *(_BYTE *)(v3 + 585) == 0 && v4[3] == nullptr )
          Curl_failf(v3, "Uploaded unaligned file size (%lld out of %lld bytes)", v21, *(_QWORD *)(v3 + 536));
      }
    }
    else
    {
      v22 = *(_QWORD *)(v3 + 80);
      if ( v22 != -1 )
      {
        v23 = *(_DWORD *)*v4;
        v27 = *((_DWORD *)*v4 + 1);
        if ( v22 != **v4
          && *(_QWORD *)(v3 + 34384) + v22 != __PAIR64__(v27, v23)
          && (*(_DWORD *)(v3 + 96) != v23 || *(_DWORD *)(v3 + 100) != v27) )
        {
          Curl_failf(v3, "Received only partial file: %lld bytes");
        }
      }
      if ( *(_BYTE *)(a1 + 964) == 0 && **v4 == 0 && v22 > 0 )
        Curl_failf(v3, "No data was received!");
    }
  }
LABEL_82:
  v4[3] = nullptr;
  *(_BYTE *)(a1 + 964) = 0;
  result = v25;
  if ( v25 != 0 )
    return result;
  if ( a3 != 0 )
    return 0;
  FTPResponse = *(_DWORD *)(v3 + 592);
  if ( FTPResponse == 0 )
    return 0;
  do
  {
    v24 = *(const char **)FTPResponse;
    if ( *(_DWORD *)FTPResponse != 0 )
    {
      if ( *v24 == 42 )
        ++v24;
      Curl_pp_sendf(v28, "%s", v24);
    }
    FTPResponse = *(_DWORD *)(FTPResponse + 4);
  }
  while ( FTPResponse != 0 );
  return FTPResponse;
}


//======================================================================
// sub_243D7C
// address: 0x00243D7C   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_243D7C(void **a1, char *a2)
{
  void *v3; // r0
  char *v5; // r0

  v3 = *a1;
  if ( v3 != nullptr )
  {
    Curl_cfree(v3);
    *a1 = nullptr;
  }
  if ( a2 == nullptr )
    return 0;
  v5 = Curl_cstrdup(a2);
  if ( v5 != nullptr )
  {
    *a1 = v5;
    return 0;
  }
  return 27;
}


//======================================================================
// sub_243DC0
// address: 0x00243DC0   size: 0x1D6 (470 bytes)
//======================================================================
int __fastcall sub_243DC0(const char *a1, size_t a2, void **a3, void **a4, void **a5)
{
  char *v6; // r0
  char *v7; // r6
  char *v8; // r0
  char *v9; // r7
  int v10; // r3
  const char *v11; // r4
  void *v12; // r4
  void *p; // [sp+4h] [bp-20h]
  size_t v16; // [sp+8h] [bp-1Ch]
  void *v17; // [sp+Ch] [bp-18h]
  int v18; // [sp+10h] [bp-14h]
  size_t v19; // [sp+14h] [bp-10h]

  if ( a4 != nullptr )
  {
    v6 = j_strchr(a1, 58);
    v7 = v6 < &a1[a2] ? v6 : nullptr;
  }
  else
  {
    v7 = nullptr;
  }
  if ( a5 != nullptr && (v8 = j_strchr(a1, 59), v9 = v8, v8 < &a1[a2]) )
  {
    if ( v7 != nullptr )
    {
      if ( v8 != nullptr && v7 > v8 )
      {
        v16 = v8 - a1;
        goto LABEL_14;
      }
LABEL_10:
      v16 = v7 - a1;
      if ( v9 == nullptr )
      {
LABEL_16:
        v10 = &a1[a2] - v7 - 1;
        goto LABEL_17;
      }
LABEL_14:
      if ( v9 > v7 )
      {
        v18 = v9 - v7 - 1;
LABEL_19:
        if ( v7 > v9 )
        {
          v11 = (const char *)(v7 - v9);
LABEL_22:
          v19 = (size_t)(v11 - 1);
          goto LABEL_24;
        }
LABEL_21:
        v11 = (const char *)(&a1[a2] - v9);
        goto LABEL_22;
      }
      goto LABEL_16;
    }
    if ( v8 != nullptr )
      v16 = v8 - a1;
    else
      v16 = a2;
  }
  else
  {
    v9 = nullptr;
    if ( v7 != nullptr )
      goto LABEL_10;
    v16 = a2;
    v9 = nullptr;
  }
  v10 = 0;
LABEL_17:
  v18 = v10;
  if ( v9 != nullptr )
  {
    if ( v7 == nullptr )
      goto LABEL_21;
    goto LABEL_19;
  }
  v19 = 0;
LABEL_24:
  if ( a3 != nullptr )
  {
    v12 = nullptr;
    if ( v16 != 0 )
    {
      v12 = Curl_cmalloc(v16 + 1);
      if ( v12 == nullptr )
        return 27;
    }
  }
  else
  {
    v12 = nullptr;
  }
  if ( a4 != nullptr )
  {
    p = nullptr;
    if ( v18 != 0 )
    {
      p = Curl_cmalloc(v18 + 1);
      if ( p == nullptr )
      {
LABEL_41:
        if ( v12 != nullptr )
          Curl_cfree(v12);
        return 27;
      }
    }
  }
  else
  {
    p = nullptr;
  }
  if ( a5 != nullptr )
  {
    v17 = nullptr;
    if ( v19 != 0 )
    {
      v17 = Curl_cmalloc(v19 + 1);
      if ( v17 == nullptr )
      {
        if ( p != nullptr )
          Curl_cfree(p);
        goto LABEL_41;
      }
    }
  }
  else
  {
    v17 = nullptr;
  }
  if ( v12 != nullptr )
  {
    j_memcpy(v12, a1, v16);
    *((_BYTE *)v12 + v16) = 0;
    if ( *a3 != nullptr )
      Curl_cfree(*a3);
    *a3 = v12;
  }
  if ( p != nullptr )
  {
    j_memcpy(p, v7 + 1, v18);
    *((_BYTE *)p + v18) = 0;
    if ( *a4 != nullptr )
      Curl_cfree(*a4);
    *a4 = p;
  }
  if ( v17 != nullptr )
  {
    j_memcpy(v17, v9 + 1, v19);
    *((_BYTE *)v17 + v19) = 0;
    if ( *a5 != nullptr )
      Curl_cfree(*a5);
    *a5 = v17;
  }
  return 0;
}


//======================================================================
// sub_243FA4
// address: 0x00243FA4   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_243FA4(const char *a1, void **a2, void **a3)
{
  int v5; // r5
  size_t v6; // r1
  void **v7; // r2
  void **v8; // r3
  char *v11; // [sp+10h] [bp-Ch] BYREF
  void *v12; // [sp+14h] [bp-8h] BYREF

  v11 = nullptr;
  v12 = nullptr;
  if ( a1 == nullptr
    || ((v6 = j_strlen(a1), a2 == nullptr) ? (v7 = nullptr) : (v7 = (void **)&v11),
        a3 == nullptr ? (v8 = nullptr) : (v8 = &v12),
        (v5 = sub_243DC0(a1, v6, v7, v8, nullptr)) == 0) )
  {
    v5 = (int)a2;
    if ( a2 != nullptr )
    {
      if ( v11 != nullptr || a1 == nullptr || *a1 != 58 || (v11 = Curl_cstrdup((const char *)&unk_3FB8EA)) != nullptr )
        v5 = 0;
      else
        v5 = 27;
      if ( *a2 != nullptr )
        Curl_cfree(*a2);
      *a2 = v11;
    }
    if ( a3 != nullptr )
    {
      if ( *a3 != nullptr )
        Curl_cfree(*a3);
      *a3 = v12;
    }
  }
  return v5;
}


//======================================================================
// sub_244054
// address: 0x00244054   size: 0x1CE (462 bytes)
//======================================================================
void __fastcall sub_244054(int a1)
{
  _DWORD *v2; // r6
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0
  void *v13; // r0
  void *v14; // r0
  void *v15; // r0
  void *v16; // r0
  void *v17; // r0
  void *v18; // r0
  void *v19; // r0
  void *v20; // r0
  void *v21; // r0
  void *v22; // r0
  void *v23; // r0
  void *v24; // r0
  void *v25; // r0
  void *v26; // r0
  void *v27; // r0

  if ( a1 != 0 )
  {
    v2 = (_DWORD *)(a1 + 252);
    v3 = *(_DWORD *)(a1 + 324);
    if ( v3 != -1 )
      Curl_closesocket(a1, v3);
    v4 = v2[17];
    if ( v4 != -1 )
      Curl_closesocket(a1, v4);
    v5 = v2[19];
    if ( v5 != -1 )
      Curl_closesocket(a1, v5);
    v6 = v2[20];
    if ( v6 != -1 )
      Curl_closesocket(a1, v6);
    v7 = (void *)v2[4];
    if ( v7 != nullptr )
    {
      Curl_cfree(v7);
      v2[4] = 0;
    }
    v8 = (void *)v2[5];
    if ( v8 != nullptr )
    {
      Curl_cfree(v8);
      v2[5] = 0;
    }
    v9 = (void *)v2[7];
    if ( v9 != nullptr )
    {
      Curl_cfree(v9);
      v2[7] = 0;
    }
    v10 = (void *)v2[6];
    if ( v10 != nullptr )
    {
      Curl_cfree(v10);
      v2[6] = 0;
    }
    v11 = (void *)v2[8];
    if ( v11 != nullptr )
    {
      Curl_cfree(v11);
      v2[8] = 0;
    }
    v12 = (void *)v2[9];
    if ( v12 != nullptr )
    {
      Curl_cfree(v12);
      v2[9] = 0;
    }
    v13 = *(void **)(a1 + 504);
    if ( v13 != nullptr )
    {
      Curl_cfree(v13);
      *(_DWORD *)(a1 + 504) = 0;
    }
    v14 = *(void **)(a1 + 508);
    if ( v14 != nullptr )
    {
      Curl_cfree(v14);
      *(_DWORD *)(a1 + 508) = 0;
    }
    v15 = *(void **)(a1 + 516);
    if ( v15 != nullptr )
    {
      Curl_cfree(v15);
      *(_DWORD *)(a1 + 516) = 0;
    }
    v16 = *(void **)(a1 + 512);
    if ( v16 != nullptr )
    {
      Curl_cfree(v16);
      *(_DWORD *)(a1 + 512) = 0;
    }
    v17 = *(void **)(a1 + 540);
    if ( v17 != nullptr )
    {
      Curl_cfree(v17);
      *(_DWORD *)(a1 + 540) = 0;
    }
    v18 = *(void **)(a1 + 520);
    if ( v18 != nullptr )
    {
      Curl_cfree(v18);
      *(_DWORD *)(a1 + 520) = 0;
    }
    v19 = *(void **)(a1 + 524);
    if ( v19 != nullptr )
    {
      Curl_cfree(v19);
      *(_DWORD *)(a1 + 524) = 0;
    }
    v20 = *(void **)(a1 + 528);
    if ( v20 != nullptr )
    {
      Curl_cfree(v20);
      *(_DWORD *)(a1 + 528) = 0;
    }
    v21 = *(void **)(a1 + 532);
    if ( v21 != nullptr )
    {
      Curl_cfree(v21);
      *(_DWORD *)(a1 + 532) = 0;
    }
    v22 = *(void **)(a1 + 536);
    if ( v22 != nullptr )
    {
      Curl_cfree(v22);
      *(_DWORD *)(a1 + 536) = 0;
    }
    v23 = *(void **)(a1 + 876);
    if ( v23 != nullptr )
    {
      Curl_cfree(v23);
      *(_DWORD *)(a1 + 876) = 0;
    }
    v24 = *(void **)(a1 + 128);
    if ( v24 != nullptr )
    {
      Curl_cfree(v24);
      *(_DWORD *)(a1 + 128) = 0;
    }
    v25 = *(void **)(a1 + 144);
    if ( v25 != nullptr )
    {
      Curl_cfree(v25);
      *(_DWORD *)(a1 + 144) = 0;
    }
    v26 = *(void **)(a1 + 560);
    if ( v26 != nullptr )
    {
      Curl_cfree(v26);
      *(_DWORD *)(a1 + 560) = 0;
    }
    Curl_llist_destroy(*(void **)(a1 + 552));
    Curl_llist_destroy(*(void **)(a1 + 556));
    *(_DWORD *)(a1 + 552) = 0;
    *(_DWORD *)(a1 + 556) = 0;
    v27 = *(void **)(a1 + 1092);
    if ( v27 != nullptr )
    {
      Curl_cfree(v27);
      *(_DWORD *)(a1 + 1092) = 0;
    }
    Curl_free_ssl_config(a1 + 372);
    Curl_cfree((void *)a1);
  }
}


//======================================================================
// sub_24422C
// address: 0x0024422C   size: 0x30 (48 bytes)
//======================================================================
__int64 __fastcall sub_24422C(__time_t *a1)
{
  __time_t v1; // r2
  __time_t v2; // r3
  __suseconds_t v3; // r3
  struct timeval v4; // r0

  *(_BYTE *)(*a1 + 324) = 0;
  v1 = a1[125];
  v2 = a1[124];
  if ( v2 < v1 )
    v2 = a1[125];
  v3 = v2 + 1;
  *(_DWORD *)(*a1 + 296) = v3;
  v4.tv_sec = *a1;
  v4.tv_usec = 4;
  return Curl_pgrsTime(v4, v1, v3);
}


//======================================================================
// sub_24425C
// address: 0x0024425C   size: 0xAC (172 bytes)
//======================================================================
int __fastcall sub_24425C(int a1, int a2)
{
  const char *v4; // r1
  const char *v5; // r1
  int v6; // r0
  int v7; // r7
  int v9; // r0
  char v10[256]; // [sp+Ch] [bp-208h] BYREF
  char v11[256]; // [sp+10Ch] [bp-108h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  v4 = *(const char **)(a1 + 948);
  if ( v4 != nullptr )
  {
    j_strncpy(v10, v4, 0x100u);
    v10[255] = 0;
  }
  v5 = *(const char **)(a1 + 952);
  if ( v5 != nullptr )
  {
    j_strncpy(v11, v5, 0x100u);
    v11[255] = 0;
  }
  v6 = curl_easy_unescape(a1, v10, 0, 0);
  v7 = a2 + 252;
  *(_DWORD *)(v7 + 32) = v6;
  if ( v6 != 0 && (v9 = curl_easy_unescape(a1, v11, 0, 0), *(_DWORD *)(v7 + 36) = v9, v9 != 0) )
    return 0;
  else
    return 27;
}


//======================================================================
// sub_244314
// address: 0x00244314   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_244314(const char *a1, const char *a2)
{
  int v4; // r3
  int v5; // r0
  char *v6; // r0
  size_t v7; // r0
  size_t i; // r4
  size_t j; // r6
  size_t v10; // r4
  char *v12; // [sp+0h] [bp-14h]
  unsigned int v13; // [sp+4h] [bp-10h]
  size_t v14; // [sp+8h] [bp-Ch]
  const char *v15; // [sp+Ch] [bp-8h]

  if ( a2 == nullptr )
    return 0;
  v4 = 0;
  if ( *a2 != 0 )
  {
    v5 = Curl_raw_equal("*", a2);
    v4 = 1;
    if ( v5 == 0 )
    {
      v14 = j_strlen(a2);
      v6 = j_strchr(a1, 58);
      if ( v6 != nullptr )
        v7 = v6 - a1;
      else
        v7 = j_strlen(a1);
      v13 = v7;
      for ( i = 0; i < v14; i = j + 1 )
      {
        do
        {
          if ( j_strchr(", ", (unsigned __int8)a2[i]) == nullptr )
            break;
          ++i;
        }
        while ( i < v14 );
        if ( i == v14 )
          break;
        for ( j = i; j < v14 && j_strchr(", ", (unsigned __int8)a2[j]) == nullptr; ++j )
          ;
        v10 = i + (a2[i] == 46);
        v12 = (char *)(j - v10);
        if ( j - v10 <= v13 )
        {
          v15 = &a1[v13 - j + v10];
          if ( Curl_raw_nequal(&a2[v10], v15, v12) != 0 && (v12 == (char *)v13 || *(v15 - 1) == 46) )
            return 1;
        }
      }
      return 0;
    }
  }
  return v4;
}


//======================================================================
// sub_2443F8
// address: 0x002443F8   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_2443F8(_DWORD *a1, __suseconds_t a2, __time_t a3, int a4)
{
  int element; // r0
  _DWORD *i; // r4
  int v7; // r5
  int v8; // r0
  int v10; // [sp+0h] [bp-24h]
  int v11; // [sp+4h] [bp-20h]
  struct timeval v12; // [sp+Ch] [bp-18h] BYREF
  _BYTE v13[16]; // [sp+14h] [bp-10h] BYREF

  curlx_tvnow(&v12, a2, a3, a4);
  Curl_hash_start_iterate(*a1, v13);
  element = Curl_hash_next_element(v13);
  v10 = 0;
  v11 = -1;
  while ( element != 0 )
  {
    for ( i = **(_DWORD ***)(*(_DWORD *)element + 8); i != nullptr; i = (_DWORD *)i[2] )
    {
      v7 = *i;
      if ( *(_BYTE *)(*i + 48) == 0 )
      {
        v8 = curlx_tvdiff(v12.tv_sec, v12.tv_usec, *(_DWORD *)(v7 + 304), *(_DWORD *)(v7 + 308));
        if ( v8 > v11 )
        {
          v10 = v7;
          v11 = v8;
        }
      }
    }
    element = Curl_hash_next_element(v13);
  }
  return v10;
}


//======================================================================
// sub_24446C
// address: 0x0024446C   size: 0x2A (42 bytes)
//======================================================================
_DWORD **__fastcall sub_24446C(_DWORD **result)
{
  _DWORD **v1; // r5
  _DWORD *i; // r4
  _DWORD *v3; // r6

  v1 = result;
  if ( result != nullptr )
  {
    for ( i = *result; i != nullptr; i = v3 )
    {
      v3 = (_DWORD *)i[2];
      *(_BYTE *)(*i + 34377) = 1;
      Curl_multi_handlePipeBreak();
      result = (_DWORD **)Curl_llist_remove(v1, i, 0);
    }
  }
  return result;
}


//======================================================================
// sub_245380
// address: 0x00245380   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_245380(int a1, int a2, _DWORD *a3)
{
  char **v3; // r6
  int v4; // r0
  char **v5; // r2
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  char **v10; // r2
  int v11; // r0
  int v12; // r0

  *(_DWORD *)(a1 + 708) = *a3;
  v4 = sub_246084(0);
  v6 = sub_243D7C((void **)(v4 + 912), *v5);
  v7 = sub_246084(v6);
  v8 = sub_243D7C((void **)(v7 + 920), *v3);
  v9 = sub_246084(v8);
  v11 = sub_243D7C((void **)(v9 + 916), *v10);
  v12 = sub_246084(v11);
  return sub_2453BE(v12);
}


//======================================================================
// sub_2453BE
// address: 0x002453BE   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_2453BE(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_BYTE *)(a1 + 778) = *a3 != 0;
  v3 = sub_246084(0);
  return sub_2453CE(v3);
}


//======================================================================
// sub_2453CE
// address: 0x002453CE   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_2453CE(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_BYTE *)(a1 + 779) = *a3 != 0;
  v3 = sub_246084(0);
  return sub_2453DE(v3);
}


//======================================================================
// sub_2453DE
// address: 0x002453DE   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_2453DE(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_BYTE *)(a1 + 776) = *a3 != 0;
  v3 = sub_246084(0);
  return sub_2453F0(v3);
}


//======================================================================
// sub_2453F0
// address: 0x002453F0   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_2453F0(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_BYTE *)(a1 + 764) = *a3 != 0;
  v3 = sub_246084(0);
  return sub_245402(v3);
}


//======================================================================
// sub_245402
// address: 0x00245402   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_245402(int a1, int a2, int *a3)
{
  int v3; // r4
  int v4; // r0
  int v5; // r2
  int v6; // r0
  int v7; // r3
  int v8; // r0

  v4 = *a3;
  v5 = 16;
  v6 = v4 != 0;
  *(_BYTE *)(v3 + 759) = v6;
  v7 = 1152;
  if ( v6 != 0 )
  {
    *(_DWORD *)(v3 + 1152) |= 0x10u;
    v6 = sub_246084(0);
  }
  *(_DWORD *)(v3 + v7) &= ~v5;
  v8 = sub_246084(v6);
  return sub_24542C(v8);
}


//======================================================================
// sub_24542C
// address: 0x0024542C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_24542C(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_BYTE *)(a1 + 767) = *a3 != 0;
  v3 = sub_246084(0);
  return sub_24543C(v3);
}


//======================================================================
// sub_24543C
// address: 0x0024543C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_24543C(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_BYTE *)(a1 + 760) = *a3 != 0;
  v3 = sub_246084(0);
  return sub_24544E(v3);
}


//======================================================================
// sub_24544E
// address: 0x0024544E   size: 0x28 (40 bytes)
//======================================================================
int sub_24544E()
{
  int v0; // r4
  _DWORD *v1; // r6
  int v2; // r0
  int v3; // r3
  int v4; // r0

  v2 = *v1 != 0;
  *(_BYTE *)(v0 + 769) = v2;
  v3 = 628;
  if ( v2 != 0 )
  {
    *(_DWORD *)(v0 + 628) = 4;
    *(_BYTE *)(v0 + 767) = 0;
    v2 = sub_246084(0);
  }
  *(_DWORD *)(v0 + v3) = 1;
  v4 = sub_246084(v2);
  return sub_245476(v4);
}


//======================================================================
// sub_245476
// address: 0x00245476   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245476(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_BYTE *)(a1 + 753) = *a3 != 0;
  v3 = sub_246084(0);
  return sub_245486(v3);
}


//======================================================================
// sub_245486
// address: 0x00245486   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_245486(int a1, int a2, int *a3)
{
  int v3; // r4
  int v4; // r0
  int v5; // r0

  v4 = *a3;
  if ( *a3 == 1 )
  {
LABEL_6:
    *(_DWORD *)(v3 + 740) = v4;
    v4 = sub_246084(0);
    goto LABEL_7;
  }
  if ( v4 != 2 )
  {
    if ( v4 != 0 )
      v4 = sub_24606A();
    *(_DWORD *)(v3 + 740) = v4;
    v4 = sub_246084(v4);
    goto LABEL_6;
  }
LABEL_7:
  *(_DWORD *)(v3 + 740) = v4;
  v5 = sub_246084(0);
  return sub_2454BA(v5);
}


//======================================================================
// sub_2454BA
// address: 0x002454BA   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_2454BA(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_DWORD *)(a1 + 524) = 1000 * *a3;
  v3 = sub_246084(0);
  return sub_2454CE(v3);
}


//======================================================================
// sub_2454CE
// address: 0x002454CE   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_2454CE(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_BYTE *)(a1 + 757) = *a3 != 0;
  v3 = sub_246084(0);
  return sub_2454DE(v3);
}


//======================================================================
// sub_2454DE
// address: 0x002454DE   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_2454DE(int a1, int a2, _DWORD *a3)
{
  char **v3; // r6
  int v4; // r0
  int v5; // r0
  int v6; // r0

  *(_DWORD *)(a1 + 772) = *a3;
  v4 = sub_246084(0);
  v5 = sub_243D7C((void **)(v4 + 880), *v3);
  v6 = sub_246084(v5);
  return sub_2454FC(v6);
}


//======================================================================
// sub_2454FC
// address: 0x002454FC   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_2454FC(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_DWORD *)(a1 + 620) = *a3;
  v3 = sub_246084(0);
  return sub_24550A(v3);
}


//======================================================================
// sub_24550A
// address: 0x0024550A   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_24550A(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_DWORD *)(a1 + 636) = *a3;
  v3 = sub_246084(0);
  return sub_245518(v3);
}


//======================================================================
// sub_245518
// address: 0x00245518   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_245518(int a1, int a2, _DWORD *a3)
{
  int v3; // r0
  char **v4; // r2
  char *v5; // r1
  void **v6; // r0
  int v7; // r0
  int v8; // r0

  *(_BYTE *)(a1 + 766) = *a3 != 0;
  v3 = sub_246084(0);
  v5 = *v4;
  v6 = (void **)(v3 + 848);
  if ( *v4 != nullptr && *v5 == 0 )
    v5 = "deflate, gzip";
  v7 = sub_243D7C(v6, v5);
  v8 = sub_246084(v7);
  return sub_245546(v8);
}


//======================================================================
// sub_245546
// address: 0x00245546   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245546(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_BYTE *)(a1 + 762) = *a3 != 0;
  v3 = sub_246084(0);
  return sub_245556(v3);
}


//======================================================================
// sub_245556
// address: 0x00245556   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245556(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_BYTE *)(a1 + 761) = *a3 != 0;
  v3 = sub_246084(0);
  return sub_245566(v3);
}


//======================================================================
// sub_245566
// address: 0x00245566   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245566(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_DWORD *)(a1 + 384) = *a3;
  v3 = sub_246084(0);
  return sub_245574(v3);
}


//======================================================================
// sub_245574
// address: 0x00245574   size: 0x9E (158 bytes)
//======================================================================
int __fastcall sub_245574(int a1, int a2, _DWORD *a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r3
  char **v6; // r2
  char *v7; // r7
  size_t *v8; // r6
  int v9; // r1
  int v10; // r0
  size_t v11; // r0
  void *v12; // r0
  void *v13; // r5
  int v14; // r0

  v5 = 628;
  if ( *a3 != 0 )
  {
    *(_DWORD *)(a1 + 628) = 2;
    *(_BYTE *)(v3 + 767) = 0;
    a1 = sub_246084(0);
  }
  *(_DWORD *)(a1 + v5) = 1;
  sub_246084(0);
  v7 = *v6;
  if ( *v6 == nullptr
    || (v8 = (size_t *)(v3 + 408), v9 = *(_DWORD *)(v3 + 412), *(_DWORD *)(v3 + 408) == -1) && v9 == -1 )
  {
    v10 = sub_243D7C((void **)(v3 + 884), v7);
  }
  else
  {
    if ( v9 != 0 )
      goto LABEL_8;
    sub_243D7C((void **)(v3 + 884), nullptr);
    v11 = 1;
    if ( *(_QWORD *)v8 != 0 )
      v11 = *v8;
    v12 = (void *)(**(int (__fastcall ***)(size_t, int))(v4 - 3468))(v11, *(_DWORD *)(v3 + 412) | *(_DWORD *)(v3 + 408));
    v13 = v12;
    if ( v12 == nullptr )
    {
LABEL_8:
      v10 = 27;
    }
    else
    {
      if ( *(_QWORD *)(v3 + 408) != 0 )
        j_memcpy(v12, v7, *v8);
      *(_DWORD *)(v3 + 884) = v13;
      v10 = 0;
    }
  }
  *(_DWORD *)(v3 + 396) = *(_DWORD *)(v3 + 884);
  *(_DWORD *)(v3 + 628) = 2;
  v14 = sub_246084(v10);
  return sub_245612(v14);
}


//======================================================================
// sub_245612
// address: 0x00245612   size: 0x22 (34 bytes)
//======================================================================
void __fastcall sub_245612(int a1, int a2, _DWORD *a3)
{
  int v3; // r4

  *(_DWORD *)(a1 + 396) = *a3;
  sub_243D7C((void **)(a1 + 884), nullptr);
  *(_DWORD *)(v3 + 628) = 2;
  sub_246084(0);
  JUMPOUT(0x245634);
}


//======================================================================
// sub_24570C
// address: 0x0024570C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_24570C(int a1, int a2, _DWORD *a3)
{
  int v3; // r4
  int v4; // r0

  *(_DWORD *)(a1 + 580) = *a3;
  *(_DWORD *)(a1 + 628) = 3;
  *(_BYTE *)(v3 + 767) = 0;
  v4 = sub_246084(0);
  return sub_245726(v4);
}


//======================================================================
// sub_245726
// address: 0x00245726   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_245726(int a1)
{
  int v1; // r4
  int v2; // r5
  char **v3; // r6
  int v4; // r0
  int v5; // r0

  if ( *(_BYTE *)(a1 + 1076) != 0 )
  {
    if ( *(_DWORD *)(a1 + 1072) != 0 )
    {
      (**(void (***)(void))(v2 - 3480))();
      *(_DWORD *)(v1 + 1072) = 0;
    }
    *(_BYTE *)(v1 + 1076) = 0;
  }
  v4 = sub_243D7C((void **)(v1 + 896), *v3);
  *(_DWORD *)(v1 + 1072) = *(_DWORD *)(v1 + 896);
  v5 = sub_246084(v4);
  return sub_245762(v5);
}


//======================================================================
// sub_245762
// address: 0x00245762   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245762(int a1)
{
  char **v1; // r6
  int v2; // r0
  int v3; // r0

  v2 = sub_243D7C((void **)(a1 + 924), *v1);
  v3 = sub_246084(v2);
  return sub_245772(v3);
}


//======================================================================
// sub_245772
// address: 0x00245772   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245772(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_DWORD *)(a1 + 576) = *a3;
  v3 = sub_246084(0);
  return sub_245780(v3);
}


//======================================================================
// sub_245780
// address: 0x00245780   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_245780(int a1, int a2, char **a3)
{
  int v3; // r4
  char *v4; // r1
  int v5; // r0
  int v6; // r0

  v4 = *a3;
  if ( *a3 == nullptr )
    a1 = sub_246084(0);
  v5 = curl_slist_append(*(_DWORD *)(a1 + 1080), v4);
  if ( v5 == 0 )
  {
    curl_slist_free_all(*(_DWORD *)(v3 + 1080));
    *(_DWORD *)(v3 + 1080) = 0;
    v5 = sub_246084(27);
  }
  *(_DWORD *)(v3 + 1080) = v5;
  v6 = sub_246084(0);
  return sub_2457B0(v6);
}


//======================================================================
// sub_2457B0
// address: 0x002457B0   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_2457B0(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  *(_BYTE *)(a1 + 584) = *a3 != 0;
  v3 = sub_246084(0);
  return sub_2457C2(v3);
}


//======================================================================
// sub_2457C2
// address: 0x002457C2   size: 0xCC (204 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   002457C2  LDR     R6, [R2]
//   002457C4  CMP     R6, #0
//   002457C6  BEQ     loc_245786
//   002457C8  MOVS    R1, #2
//   002457CA  MOVS    R2, R1
//   002457CC  BL      Curl_share_lock
//   002457D0  LDR     R1, =(aAll - 0x2457D8); "ALL"
//   002457D2  MOVS    R0, R6
//   002457D4  ADD     R1, PC; "ALL"
//   002457D6  BL      Curl_raw_equal
//   002457DA  STR     R0, [SP,#arg_C]
//   002457DC  CMP     R0, #0
//   002457DE  BEQ     loc_2457EE
//   002457E0  MOVS    R3, #0x440
//   002457E4  LDR     R0, [R4,R3]
//   002457E6  BL      Curl_cookie_clearall
//   002457EA  MOVS    R7, #0
//   002457EC  B       loc_245880
//   002457EE  LDR     R1, =(aSess - 0x2457F6); "SESS"
//   002457F0  MOVS    R0, R6
//   002457F2  ADD     R1, PC; "SESS"
//   002457F4  BL      Curl_raw_equal
//   002457F8  SUBS    R7, R0, #0
//   002457FA  BEQ     loc_245808
//   002457FC  MOVS    R3, #0x440
//   00245800  LDR     R0, [R4,R3]
//   00245802  BL      Curl_cookie_clearsess
//   00245806  B       loc_2457EA
//   00245808  LDR     R1, =(aFlush - 0x245810); "FLUSH"
//   0024580A  MOVS    R0, R6
//   0024580C  ADD     R1, PC; "FLUSH"
//   0024580E  BL      Curl_raw_equal
//   00245812  CMP     R0, #0
//   00245814  BEQ     loc_245820
//   00245816  MOVS    R0, R4
//   00245818  MOVS    R1, R7
//   0024581A  BL      Curl_flush_cookies
//   0024581E  B       loc_245880
//   00245820  MOVS    R7, #0x440
//   00245824  LDR     R2, [R4,R7]
//   00245826  CMP     R2, #0
//   00245828  BNE     loc_245836
//   0024582A  MOVS    R0, R4
//   0024582C  MOVS    R1, R2
//   0024582E  MOVS    R3, #1
//   00245830  BL      Curl_cookie_init
//   00245834  STR     R0, [R4,R7]
//   00245836  LDR     R3, =0xFFFFF284
//   00245838  MOVS    R0, R6
//   0024583A  LDR     R3, [R5,R3]
//   0024583C  LDR     R3, [R3]
//   0024583E  BLX     R3
//   00245840  SUBS    R6, R0, #0
//   00245842  BEQ     loc_24587E
//   00245844  LDR     R0, =(aSetCookie - 0x24584E); "Set-Cookie:"
//   00245846  MOVS    R1, R6
//   00245848  MOVS    R2, #0xB
//   0024584A  ADD     R0, PC; "Set-Cookie:"
//   0024584C  BL      Curl_raw_nequal
//   00245850  LDR     R1, [R4,R7]
//   00245852  SUBS    R2, R0, #0
//   00245854  BEQ     loc_245866
//   00245856  MOVS    R3, #0
//   00245858  STR     R3, [SP,#arg_0]
//   0024585A  STR     R3, [SP,#arg_4]
//   0024585C  MOVS    R3, R6
//   0024585E  MOVS    R0, R4
//   00245860  MOVS    R2, #1
//   00245862  ADDS    R3, #0xB
//   00245864  B       loc_24586E
//   00245866  STR     R0, [SP,#arg_0]
//   00245868  STR     R0, [SP,#arg_4]
//   0024586A  MOVS    R3, R6
//   0024586C  MOVS    R0, R4
//   0024586E  BL      Curl_cookie_add
//   00245872  LDR     R3, =0xFFFFF268
//   00245874  MOVS    R0, R6
//   00245876  LDR     R3, [R5,R3]
//   00245878  LDR     R3, [R3]
//   0024587A  BLX     R3
//   0024587C  B       loc_2457EA
//   0024587E  MOVS    R7, #0x1B
//   00245880  MOVS    R0, R4
//   00245882  MOVS    R1, #2
//   00245884  BL      Curl_share_unlock
//   00245888  MOVS    R0, R7
//   0024588A  BL      sub_246084

//======================================================================
// sub_24588E
// address: 0x0024588E   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_24588E(int a1, int a2, _DWORD *a3)
{
  int v3; // r4

  if ( *a3 == 0 )
    JUMPOUT(0x245786);
  *(_DWORD *)(a1 + 628) = 1;
  *(_BYTE *)(v3 + 769) = 0;
  *(_BYTE *)(v3 + 767) = 0;
  return sub_246084(0);
}


//======================================================================
// sub_2458AA
// address: 0x002458AA   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_2458AA(int a1, int a2, _DWORD *a3)
{
  if ( *a3 == 3 )
    return sub_246084(1);
  *(_DWORD *)(a1 + 632) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_2458BC
// address: 0x002458BC   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_2458BC(int a1, int a2, unsigned int *a3)
{
  int v3; // r4
  unsigned int v4; // r0
  unsigned int v5; // r0
  int i; // r3

  v4 = *a3;
  if ( *a3 != 0 )
  {
    *(_BYTE *)(v3 + 34302) = (*a3 & 0x10) != 0;
    if ( (v4 & 0x10) != 0 )
      v4 = v4 & 0xFFFFFFED | 2;
    v5 = v4 & 0xFFFFFFD3;
    for ( i = 0; ; ++i )
    {
      if ( ((v5 >> i) & 1) != 0 )
      {
        *(_DWORD *)(v3 + 372) = v5;
        return sub_246084(0);
      }
      if ( i == 30 )
        break;
    }
    return sub_246084(4);
  }
  else
  {
    *(_DWORD *)(v3 + 372) = 0;
    return sub_246084(0);
  }
}


//======================================================================
// sub_2458FA
// address: 0x002458FA   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_2458FA(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 840), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245908
// address: 0x00245908   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245908(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 754) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_245916
// address: 0x00245916   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_245916(int a1, int a2, unsigned int *a3)
{
  int v3; // r4
  unsigned int v4; // r0
  unsigned int v5; // r0
  int i; // r3

  v4 = *a3;
  if ( *a3 != 0 )
  {
    *(_BYTE *)(v3 + 34318) = (*a3 & 0x10) != 0;
    if ( (v4 & 0x10) != 0 )
      v4 = v4 & 0xFFFFFFED | 2;
    v5 = v4 & 0xFFFFFFD3;
    for ( i = 0; ((v5 >> i) & 1) == 0; ++i )
    {
      if ( i == 30 )
        JUMPOUT(0x2458F2);
    }
    *(_DWORD *)(v3 + 376) = v5;
    return sub_246084(0);
  }
  else
  {
    *(_DWORD *)(v3 + 376) = 0;
    return sub_246084(0);
  }
}


//======================================================================
// sub_245950
// address: 0x00245950   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245950(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 888), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_24595E
// address: 0x0024595E   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_24595E(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 704) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_24596A
// address: 0x0024596A   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_24596A(int a1, int a2, _DWORD *a3)
{
  int v3; // r4

  if ( *a3 != 0 )
  {
    if ( *a3 != 1 )
      return sub_246084(48);
    *(_BYTE *)(v3 + 820) = 1;
  }
  else
  {
    *(_BYTE *)(v3 + 820) = 0;
  }
  return sub_246084(0);
}


//======================================================================
// sub_245988
// address: 0x00245988   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_245988(int a1, int a2, _DWORD *a3)
{
  int v3; // r4

  *(_DWORD *)(v3 + 344) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245992
// address: 0x00245992   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_245992(int a1)
{
  int v1; // r4
  char **v2; // r6
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 860), *v2);
  *(_BYTE *)(v1 + 758) = *(_DWORD *)(v1 + 860) != 0;
  return sub_246084(v3);
}


//======================================================================
// sub_2459AE
// address: 0x002459AE   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_2459AE(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 781) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_2459BC
// address: 0x002459BC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_2459BC(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 780) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_2459CC
// address: 0x002459CC   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_2459CC(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 792) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_2459D8
// address: 0x002459D8   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_2459D8(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 800) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_2459E8
// address: 0x002459E8   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_2459E8(int a1, int a2, int *a3)
{
  *(_QWORD *)(a1 + 536) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_2459FA
// address: 0x002459FA   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_2459FA(int a1)
{
  int v1; // r6
  _DWORD *v2; // r6
  int v3; // r3

  v2 = (_DWORD *)((v1 + 7) & 0xFFFFFFF8);
  v3 = v2[1];
  *(_DWORD *)(a1 + 536) = *v2;
  *(_DWORD *)(a1 + 540) = v3;
  return sub_246084(0);
}


//======================================================================
// sub_245A2A
// address: 0x00245A2A   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245A2A(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 548) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245A70
// address: 0x00245A70   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_245A70(int a1)
{
  int v1; // r4
  int v2; // r5
  char **v3; // r6
  int v4; // r0

  if ( *(_BYTE *)(a1 + 1068) != 0 )
  {
    if ( *(_DWORD *)(a1 + 1064) != 0 )
    {
      (**(void (***)(void))(v2 - 3480))();
      *(_DWORD *)(v1 + 1064) = 0;
    }
    *(_BYTE *)(v1 + 1068) = 0;
  }
  v4 = sub_243D7C((void **)(v1 + 900), *v3);
  *(_DWORD *)(v1 + 1064) = *(_DWORD *)(v1 + 900);
  return sub_246084(v4);
}


//======================================================================
// sub_245AAA
// address: 0x00245AAA   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_245AAA(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 512) = 1000 * *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245ABC
// address: 0x00245ABC   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245ABC(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 516) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245AC8
// address: 0x00245AC8   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245AC8(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 520) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245AD4
// address: 0x00245AD4   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245AD4(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 940), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245AE2
// address: 0x00245AE2   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245AE2(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 988), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245AF0
// address: 0x00245AF0   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245AF0(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 592) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245AFC
// address: 0x00245AFC   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245AFC(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 588) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245B08
// address: 0x00245B08   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245B08(int a1, int a2, int *a3)
{
  int v3; // r3

  v3 = *a3;
  *(_DWORD *)(a1 + 616) = *a3;
  *(_DWORD *)(a1 + 1084) = v3;
  return sub_246084(0);
}


//======================================================================
// sub_245B18
// address: 0x00245B18   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_245B18(int a1, int a2, int *a3)
{
  int v3; // r4
  int v4; // r0

  v4 = *a3;
  *(_DWORD *)(v3 + 448) = *a3;
  *(_BYTE *)(v3 + 1144) = v4 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_245B34
// address: 0x00245B34   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_245B34(int a1, int a2, int *a3)
{
  int v3; // r4
  int v4; // r0

  v4 = *a3;
  *(_DWORD *)(v3 + 452) = *a3;
  *(_BYTE *)(v3 + 1144) = v4 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_245B50
// address: 0x00245B50   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245B50(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 504) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245B5C
// address: 0x00245B5C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_245B5C(int a1, int a2, const char **a3)
{
  int v3; // r4
  int v4; // r0

  v4 = sub_243FA4(*a3, (void **)(v3 + 948), (void **)(v3 + 952));
  return sub_246084(v4);
}


//======================================================================
// sub_245B70
// address: 0x00245B70   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245B70(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 948), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245B7E
// address: 0x00245B7E   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245B7E(int a1)
{
  char **v1; // r6
  int v2; // r0

  v2 = sub_243D7C((void **)(a1 + 956), *v1);
  return sub_246084(v2);
}


//======================================================================
// sub_245B8C
// address: 0x00245B8C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245B8C(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 892), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245B9A
// address: 0x00245B9A   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_245B9A(int a1, int a2, int *a3)
{
  *(_QWORD *)(a1 + 568) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245BAC
// address: 0x00245BAC   size: 0x18 (24 bytes)
//======================================================================
int sub_245BAC()
{
  int v0; // r4
  int v1; // r6
  _DWORD *v2; // r4
  _DWORD *v3; // r6
  int v4; // r3

  v2 = (_DWORD *)(v0 + 568);
  v3 = (_DWORD *)((v1 + 7) & 0xFFFFFFF8);
  v4 = v3[1];
  *v2 = *v3;
  v2[1] = v4;
  return sub_246084(0);
}


//======================================================================
// sub_245BC4
// address: 0x00245BC4   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245BC4(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 456) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245BD0
// address: 0x00245BD0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_245BD0(int a1, int a2, _DWORD *a3)
{
  int v3; // r4

  *(_DWORD *)(v3 + 340) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245BDA
// address: 0x00245BDA   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_245BDA(int a1, int a2, int *a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r4

  v5 = *a3;
  v6 = v3 + 252;
  *(_DWORD *)(v6 + 84) = *a3;
  if ( v5 != 0 )
    JUMPOUT(0x245786);
  *(_DWORD *)(v6 + 84) = *(_DWORD *)(v4 - 5152) + 168;
  return sub_246084(0);
}


//======================================================================
// sub_245BF2
// address: 0x00245BF2   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245BF2(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 428) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245BFE
// address: 0x00245BFE   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_245BFE(int a1, int a2, int *a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r0

  v5 = *a3;
  *(_DWORD *)(v3 + 424) = *a3;
  if ( v5 != 0 )
  {
    *(_DWORD *)(v3 + 444) = 1;
  }
  else
  {
    *(_DWORD *)(v3 + 444) = 0;
    *(_DWORD *)(v3 + 424) = *(_DWORD *)(v4 - 3432);
  }
  return sub_246084(0);
}


//======================================================================
// sub_245C20
// address: 0x00245C20   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_245C20(int a1, int a2, int *a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r0

  v5 = *a3;
  *(_DWORD *)(v3 + 436) = *a3;
  if ( v5 != 0 )
  {
    *(_DWORD *)(v3 + 440) = 1;
  }
  else
  {
    *(_DWORD *)(v3 + 440) = 0;
    *(_DWORD *)(v3 + 436) = *(_DWORD *)(v4 - 3428);
  }
  return sub_246084(0);
}


//======================================================================
// sub_245C42
// address: 0x00245C42   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245C42(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 492) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245C4E
// address: 0x00245C4E   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245C4E(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 496) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245C5A
// address: 0x00245C5A   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245C5A(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 508) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245C66
// address: 0x00245C66   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245C66(int a1)
{
  char **v1; // r6
  int v2; // r0

  v2 = sub_243D7C((void **)(a1 + 828), *v1);
  return sub_246084(v2);
}


//======================================================================
// sub_245C74
// address: 0x00245C74   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245C74(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 872), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245C82
// address: 0x00245C82   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245C82(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 868), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245C90
// address: 0x00245C90   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_245C90(int a1, int a2, _DWORD *a3)
{
  if ( *a3 == 0 || *(_BYTE *)*a3 == 0 )
    JUMPOUT(0x245786);
  return sub_246084(4);
}


//======================================================================
// sub_245CA4
// address: 0x00245CA4   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245CA4(int a1, int a2, _DWORD *a3)
{
  int v3; // r4

  *(_WORD *)(v3 + 416) = curlx_sltous(*a3);
  return sub_246084(0);
}


//======================================================================
// sub_245CB4
// address: 0x00245CB4   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245CB4(int a1, int a2, _DWORD *a3)
{
  int v3; // r4

  *(_DWORD *)(v3 + 420) = curlx_sltosi(*a3);
  return sub_246084(0);
}


//======================================================================
// sub_245CC4
// address: 0x00245CC4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_245CC4(int a1, int a2, char **a3)
{
  int v3; // r4
  int v4; // r0

  v4 = sub_243D7C((void **)(a1 + 876), *a3);
  *(_BYTE *)(v3 + 777) = *(_DWORD *)(v3 + 876) != 0;
  return sub_246084(v4);
}


//======================================================================
// sub_245CE0
// address: 0x00245CE0   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_245CE0(int a1, int a2, _DWORD *a3)
{
  if ( *a3 == 1 )
    Curl_failf(a1, "CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!");
  *(_BYTE *)(a1 + 645) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_245CFE
// address: 0x00245CFE   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245CFE(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 908), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245D0C
// address: 0x00245D0C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245D0C(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 904), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245D1A
// address: 0x00245D1A   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245D1A(int a1)
{
  char **v1; // r6
  int v2; // r0

  v2 = sub_243D7C((void **)(a1 + 928), *v1);
  return sub_246084(v2);
}


//======================================================================
// sub_245D28
// address: 0x00245D28   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245D28(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 932), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245D36
// address: 0x00245D36   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_245D36(int a1, int a2, int *a3)
{
  int v3; // r4
  int v4; // r2

  v4 = *a3;
  if ( (unsigned int)(v4 - 1) <= 0x3FFE )
  {
    *(_DWORD *)(v3 + 712) = v4;
    JUMPOUT(0x245786);
  }
  *(_DWORD *)(v3 + 712) = 0;
  return sub_246084(0);
}


//======================================================================
// sub_245D4E
// address: 0x00245D4E   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245D4E(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 796) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_245D88
// address: 0x00245D88   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall sub_245D88(int a1, int a2, int *a3)
{
  _DWORD *v3; // r4
  int v4; // r5
  _DWORD *v5; // r3
  int v6; // r3
  int v7; // r2
  _DWORD *v8; // r0
  int v9; // r3

  v4 = *a3;
  if ( *(_DWORD *)(a1 + 72) != 0 )
  {
    Curl_share_lock(v3, 1, 2);
    if ( v3[15] == 3 )
    {
      v3[14] = 0;
      v3[15] = 0;
    }
    v5 = (_DWORD *)v3[18];
    if ( v5[6] == v3[272] )
      v3[272] = 0;
    if ( v5[7] == v3[8544] )
      v3[8544] = 0;
    --v5[1];
    Curl_share_unlock(v3, 1);
  }
  v3[18] = v4;
  if ( v4 == 0 )
    JUMPOUT(0x245786);
  Curl_share_lock(v3, 1, 2);
  ++*(_DWORD *)(v3[18] + 4);
  v6 = v3[18];
  v7 = *(_DWORD *)(v6 + 20);
  if ( v7 != 0 )
  {
    v3[14] = v7;
    v3[15] = 3;
  }
  if ( *(_DWORD *)(v6 + 24) != 0 )
  {
    v8 = (_DWORD *)v3[272];
    if ( v8 != nullptr )
      Curl_cookie_cleanup(v8);
    v3[272] = *(_DWORD *)(v3[18] + 24);
  }
  v9 = v3[18];
  if ( *(_DWORD *)(v9 + 28) != 0 )
  {
    v3[169] = *(_DWORD *)(v9 + 32);
    v3[8544] = *(_DWORD *)(v9 + 28);
  }
  Curl_share_unlock(v3, 1);
  return sub_246084(0);
}


//======================================================================
// sub_245E3A
// address: 0x00245E3A   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245E3A(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 716) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245E46
// address: 0x00245E46   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_245E46(int a1, int a2, int *a3)
{
  int v3; // r4

  *(_QWORD *)(v3 + 728) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245E58
// address: 0x00245E58   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245E58(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 798) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_245E66
// address: 0x00245E66   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245E66(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 799) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_245E74
// address: 0x00245E74   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245E74(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 856), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245E82
// address: 0x00245E82   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245E82(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 464) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245E8E
// address: 0x00245E8E   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245E8E(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 472) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245E9A
// address: 0x00245E9A   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245E9A(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 476) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245EA6
// address: 0x00245EA6   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245EA6(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 480) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245EB2
// address: 0x00245EB2   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245EB2(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 484) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245EBE
// address: 0x00245EBE   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245EBE(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 688) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_245ECE
// address: 0x00245ECE   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245ECE(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 808) = *a3 == 0;
  return sub_246084(0);
}


//======================================================================
// sub_245EDE
// address: 0x00245EDE   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245EDE(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 812) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245EEA
// address: 0x00245EEA   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245EEA(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 816) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245EF6
// address: 0x00245EF6   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245EF6(int a1, int a2, _DWORD *a3)
{
  int v3; // r4

  *(_DWORD *)(v3 + 992) = curlx_sltoui(*a3);
  return sub_246084(0);
}


//======================================================================
// sub_245F06
// address: 0x00245F06   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245F06(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 996) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245F12
// address: 0x00245F12   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245F12(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 1000) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245F1E
// address: 0x00245F1E   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245F1E(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 972), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245F2C
// address: 0x00245F2C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245F2C(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 976), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245F3A
// address: 0x00245F3A   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245F3A(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 1008) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_245F4A
// address: 0x00245F4A   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_245F4A(int a1, int a2, _DWORD *a3)
{
  int v3; // r4
  int v4; // r3
  unsigned int v5; // r2

  v4 = 0;
  v5 = *a3 - 1;
  if ( v5 <= 0xA )
    v4 = byte_444B0A[v5];
  *(_DWORD *)(v3 + 1012) = v4;
  return sub_246084(0);
}


//======================================================================
// sub_245F64
// address: 0x00245F64   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245F64(int a1)
{
  char **v1; // r6
  int v2; // r0

  v2 = sub_243D7C((void **)(a1 + 960), *v1);
  return sub_246084(v2);
}


//======================================================================
// sub_245F72
// address: 0x00245F72   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_245F72(int a1, int a2, char **a3)
{
  int v3; // r0

  v3 = sub_243D7C((void **)(a1 + 964), *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_245F80
// address: 0x00245F80   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_245F80(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 34416) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245F8A
// address: 0x00245F8A   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_245F8A(int a1, int a2, _DWORD *a3)
{
  int v3; // r4

  *(_DWORD *)(v3 + 364) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245F94
// address: 0x00245F94   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245F94(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 432) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245FA0
// address: 0x00245FA0   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_245FA0(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 1020) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_245FB0
// address: 0x00245FB0   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245FB0(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 1024) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245FBC
// address: 0x00245FBC   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_245FBC(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 1032) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245FC8
// address: 0x00245FC8   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_245FC8(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 34456) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_245FD2
// address: 0x00245FD2   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_245FD2(int a1, int a2, char **a3)
{
  int v3; // r4
  int v4; // r0

  v4 = sub_243D7C((void **)(a1 + 980), *a3);
  if ( *(_DWORD *)(v3 + 980) != 0 && *(_DWORD *)(v3 + 700) == 0 )
    *(_DWORD *)(v3 + 700) = 1;
  return sub_246084(v4);
}


//======================================================================
// sub_245FF8
// address: 0x00245FF8   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_245FF8(int a1, int a2, char **a3)
{
  int v3; // r4
  int v4; // r0

  v4 = sub_243D7C((void **)(a1 + 984), *a3);
  if ( *(_DWORD *)(v3 + 980) != 0 && *(_DWORD *)(v3 + 700) == 0 )
    *(_DWORD *)(v3 + 700) = 1;
  return sub_246084(v4);
}


//======================================================================
// sub_24601E
// address: 0x0024601E   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_24601E(int a1, int a2, _DWORD *a3)
{
  int v3; // r4

  *(_DWORD *)(v3 + 700) = curl_strnequal(*a3, "SRP", 3) != 0;
  return sub_246084(0);
}


//======================================================================
// sub_24603E
// address: 0x0024603E   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_24603E(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  v3 = Curl_set_dns_local_ip4(a1, *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_246046
// address: 0x00246046   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_246046(int a1, int a2, _DWORD *a3)
{
  int v3; // r0

  v3 = Curl_set_dns_local_ip6(a1, *a3);
  return sub_246084(v3);
}


//======================================================================
// sub_24604E
// address: 0x0024604E   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_24604E(int a1, int a2, _DWORD *a3)
{
  *(_BYTE *)(a1 + 1044) = *a3 != 0;
  return sub_246084(0);
}


//======================================================================
// sub_24605C
// address: 0x0024605C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_24605C(int a1, int a2, _DWORD *a3)
{
  *(_DWORD *)(a1 + 1052) = *a3;
  return sub_246084(0);
}


//======================================================================
// sub_246066
// address: 0x00246066   size: 0x4 (4 bytes)
//======================================================================
int sub_246066()
{
  return sub_246084(48);
}


//======================================================================
// sub_24606A
// address: 0x0024606A   size: 0x4 (4 bytes)
//======================================================================
int sub_24606A()
{
  return sub_246084(48);
}


//======================================================================
// sub_246084
// address: 0x00246084   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_246084(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_246F38
// address: 0x00246F38   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_246F38(
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
        void *a39)
{
  return sub_247302(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39);
}


//======================================================================
// sub_2472FA
// address: 0x002472FA   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_2472FA(
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
        void *a39)
{
  if ( a39 != nullptr )
    return sub_247302(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22,
             a23,
             a24,
             a25,
             a26,
             a27,
             a28,
             a29,
             a30,
             a31,
             a32,
             a33,
             a34,
             a35,
             a36,
             a37,
             a38,
             a39);
  else
    return sub_24738E();
}


//======================================================================
// sub_247302
// address: 0x00247302   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_247302(
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
        void *p,
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
        int a50,
        int a51,
        int a52,
        int a53,
        void *a54,
        void *a55)
{
  __int64 v55; // r0
  int v56; // r2
  int v57; // r3

  v55 = ((__int64 (__fastcall *)(void *, int, int))**(_DWORD **)(a35 - 3480))(p, a2, a3);
  return sub_247390(
           v55,
           SHIDWORD(v55),
           v56,
           v57,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           (int)p,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49,
           a50,
           a51,
           a52,
           a53,
           a54,
           a55);
}


//======================================================================
// sub_24738E
// address: 0x0024738E   size: 0x2 (2 bytes)
//======================================================================
int __fastcall sub_24738E(
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
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        void *a54,
        void *a55)
{
  return sub_247390(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49,
           a50,
           a51,
           a52,
           a53,
           a54,
           a55);
}


//======================================================================
// sub_247390
// address: 0x00247390   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_247390(
        int a1,
        int a2,
        __time_t a3,
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
        int *a40,
        int a41,
        int a42,
        _BYTE *a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        _BYTE *a49,
        int a50,
        int a51,
        int a52,
        int a53,
        void *a54,
        void *p)
{
  int v55; // r4
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r1
  int v60; // r2
  int v61; // r3

  if ( p != nullptr )
    (**(void (__fastcall ***)(void *, int, __time_t))(a35 - 3480))(p, a2, a3);
  v56 = (int)a54;
  if ( a54 != nullptr )
    v56 = (**(int (***)(void))(a35 - 3480))();
  if ( v55 != 0 )
    sub_24825A(v56);
  v57 = *a40;
  if ( *(_DWORD *)(*(_DWORD *)(*a40 + 552) + 12) != 0 || *(_DWORD *)(*(_DWORD *)(v57 + 556) + 12) != 0 )
  {
    *a49 = 1;
    goto LABEL_13;
  }
  if ( *a43 != 0 )
LABEL_13:
    JUMPOUT(0x247414);
  v58 = Curl_setup_conn(v57, a49, a3, (unsigned __int8)*a43);
  if ( v58 != 89 )
  {
    if ( v58 != 0 )
      sub_247402(
        v58,
        v59,
        v60,
        v61,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        a15,
        a16,
        a17,
        a18,
        a19,
        a20,
        a21,
        a22,
        a23,
        a24,
        a25,
        a26,
        a27,
        a28,
        a29,
        a30,
        a31,
        a32,
        a33,
        a34,
        a35,
        a36,
        a37,
        a38,
        a39,
        a40,
        a41,
        a42,
        a43,
        a44,
        a45,
        a46,
        a47,
        a48,
        a49,
        a50,
        a51);
    goto LABEL_13;
  }
  return sub_2473F4(
           89,
           v59,
           v60,
           v61,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49,
           a50,
           a51);
}


//======================================================================
// sub_2473F4
// address: 0x002473F4   size: 0xA (10 bytes)
//======================================================================
void __fastcall sub_2473F4(
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
        _DWORD *a40)
{
  *a40 = 0;
  JUMPOUT(0x247414);
}


//======================================================================
// sub_247402
// address: 0x00247402   size: 0x1C0 (448 bytes)
//======================================================================
void __fastcall __noreturn sub_247402(
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
        char *a39,
        int *a40)
{
  int v40; // r4

  if ( *a40 != 0 )
  {
    Curl_disconnect(*a40, 0);
    *a40 = 0;
  }
  sub_248266(v40);
}


//======================================================================
// sub_248254
// address: 0x00248254   size: 0x6 (6 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00248254  MOVS    R4, #3
//   00248256  BL      sub_247390

//======================================================================
// sub_24825A
// address: 0x0024825A   size: 0xC (12 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0024825A  CMP     R4, #0x59 ; 'Y'
//   0024825C  BEQ     loc_248262
//   0024825E  BL      sub_247402
//   00248262  BL      sub_2473F4

//======================================================================
// sub_248266
// address: 0x00248266   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_248266(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_2484B0
// address: 0x002484B0   size: 0x64 (100 bytes)
//======================================================================
_BYTE *__fastcall sub_2484B0(int a1, int a2, int a3)
{
  _BYTE *v3; // r5
  _BYTE *v5; // r4
  _BYTE *v6; // r1
  int i; // r2
  unsigned int v8; // r3
  _DWORD v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v3 = (_BYTE *)curl_easy_unescape(a1, a2, 0, v9);
  if ( v3 == nullptr )
    return nullptr;
  v5 = Curl_cmalloc(2 * v9[0] + 1);
  if ( v5 == nullptr )
    return nullptr;
  v6 = v3;
  for ( i = 0; ; ++i )
  {
    v8 = (unsigned __int8)*v6;
    if ( *v6 == 0 )
      break;
    if ( v8 <= 0x20 || v8 == 127 || v8 == 39 || v8 == 34 || v8 == 92 )
      v5[i++] = 92;
    v5[i] = v8;
    ++v6;
  }
  v5[i] = v8;
  Curl_cfree(v3);
  return v5;
}


//======================================================================
// sub_24851C
// address: 0x0024851C   size: 0x25A (602 bytes)
//======================================================================
char *__fastcall sub_24851C(int *a1, _BYTE *a2)
{
  const char *v3; // r4
  char *v4; // r0
  char *v5; // r5
  const char *v6; // r6
  char *v7; // r0
  const char *v8; // r2
  char *v9; // r0
  char *v10; // r0
  char *result; // r0
  char *v12; // r0
  char *v13; // r6
  const char *v14; // r4
  const char *v15; // r5
  char *v16; // r0
  int v17; // r2
  char *v18; // r0
  _BYTE *i; // r2
  int v20; // [sp+10h] [bp-14h]
  const char *v21; // [sp+14h] [bp-10h]
  int v22; // [sp+18h] [bp-Ch]

  v22 = a1[80];
  v20 = *a1;
  v3 = *(const char **)(*a1 + 34396);
  *a2 = 1;
  if ( Curl_raw_nequal(v3, "/MATCH:", 7) != 0
    || Curl_raw_nequal(v3, "/M:", 3) != 0
    || Curl_raw_nequal(v3, "/FIND:", 6) != 0 )
  {
    v4 = j_strchr(v3, 58);
    v5 = v4;
    if ( v4 != nullptr )
    {
      v21 = v4 + 1;
      v7 = j_strchr(v4 + 1, 58);
      if ( v7 != nullptr )
      {
        v6 = v7 + 1;
        *v7 = 0;
        v9 = j_strchr(v7 + 1, 58);
        if ( v9 != nullptr )
        {
          *v9 = 0;
          v10 = j_strchr(v9 + 1, 58);
          if ( v10 != nullptr )
          {
            v8 = nullptr;
            *v10 = 0;
          }
        }
      }
      else
      {
        v6 = nullptr;
      }
      if ( v21 != nullptr && v5[1] != 0 )
        goto LABEL_15;
    }
    else
    {
      v6 = nullptr;
    }
    Curl_infof(v20, "lookup word is missing\n");
    v8 = "default";
    v21 = "default";
LABEL_15:
    if ( v6 != nullptr )
    {
      if ( *v6 == 0 )
        v6 = "!";
    }
    else
    {
      v6 = "!";
    }
    if ( sub_2484B0(v20, (int)v21, (int)v8) != nullptr )
      Curl_sendf(v22, (int)a1, (int)"CLIENT libcurl 7.34.0\r\nMATCH %s %s %s\r\nQUIT\r\n", (int)v6);
    return (_BYTE *)(&dword_18 + 3);
  }
  if ( Curl_raw_nequal(v3, "/DEFINE:", 8) != 0
    || Curl_raw_nequal(v3, "/D:", 3) != 0
    || Curl_raw_nequal(v3, "/LOOKUP:", 8) != 0 )
  {
    v12 = j_strchr(v3, 58);
    v13 = v12;
    v14 = v12;
    if ( v12 == nullptr )
      goto LABEL_34;
    v15 = v12 + 1;
    v16 = j_strchr(v12 + 1, 58);
    if ( v16 != nullptr )
    {
      v14 = v16 + 1;
      *v16 = 0;
      v18 = j_strchr(v16 + 1, 58);
      if ( v18 != nullptr )
        *v18 = 0;
    }
    else
    {
      v14 = nullptr;
    }
    if ( v15 == nullptr || v13[1] == 0 )
    {
LABEL_34:
      Curl_infof(v20, "lookup word is missing\n");
      v15 = "default";
    }
    if ( v14 != nullptr )
    {
      if ( *v14 == 0 )
        v14 = "!";
    }
    else
    {
      v14 = "!";
    }
    if ( sub_2484B0(v20, (int)v15, v17) != nullptr )
      Curl_sendf(v22, (int)a1, (int)"CLIENT libcurl 7.34.0\r\nDEFINE %s %s\r\nQUIT\r\n", (int)v14);
    return (_BYTE *)(&dword_18 + 3);
  }
  result = j_strchr(v3, 47);
  if ( result != nullptr )
  {
    for ( i = result + 1; *i != 0; ++i )
    {
      if ( *i == 58 )
        *i = 32;
    }
    Curl_sendf(v22, (int)a1, (int)"CLIENT libcurl 7.34.0\r\n%s\r\nQUIT\r\n", (int)(result + 1));
  }
  return result;
}


//======================================================================
// sub_248B48
// address: 0x00248B48   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall sub_248B48(_BYTE *a1, _DWORD *a2)
{
  unsigned int i; // r3
  unsigned int v3; // r2
  int v4; // r2

  for ( i = 0; ; i = 10 * i + v3 )
  {
    v3 = (unsigned __int8)*a1 - 48;
    if ( v3 > 9 )
      break;
    ++a1;
  }
  v4 = 0;
  if ( i != 0 && *a1 == 36 )
  {
    *a2 = a1 + 1;
    return i;
  }
  return v4;
}


//======================================================================
// sub_248B74
// address: 0x00248B74   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_248B74(int result, _DWORD *a2)
{
  if ( a2[1] >= a2[2] )
    return -1;
  *(_BYTE *)(*a2)++ = result;
  ++a2[1];
  return (unsigned __int8)result;
}


//======================================================================
// sub_248BA0
// address: 0x00248BA0   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_248BA0(unsigned __int8 a1, int a2)
{
  void *v2; // r6
  void *v6; // r0
  unsigned int v7; // r1
  void *v8; // r0
  int v10; // r2

  v2 = *(void **)a2;
  if ( *(_DWORD *)a2 != 0 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    if ( *(_DWORD *)(a2 + 4) + 1 < v7 )
      goto LABEL_8;
    v8 = Curl_crealloc(v2, 2 * v7);
    if ( v8 != nullptr )
    {
      v10 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)a2 = v8;
      *(_DWORD *)(a2 + 8) = 2 * v10;
      goto LABEL_8;
    }
LABEL_6:
    *(_DWORD *)(a2 + 12) = 1;
    return -1;
  }
  v6 = Curl_cmalloc(0x20u);
  *(_DWORD *)a2 = v6;
  if ( v6 == nullptr )
    goto LABEL_6;
  *(_DWORD *)(a2 + 8) = 32;
  *(_DWORD *)(a2 + 4) = 0;
LABEL_8:
  *(_BYTE *)(*(_DWORD *)a2 + (*(_DWORD *)(a2 + 4))++) = a1;
  return a1;
}


//======================================================================
// sub_248C10
// address: 0x00248C10   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_248C10(int result, _DWORD *a2)
{
  *(_BYTE *)(*a2)++ = result;
  return (unsigned __int8)result;
}


//======================================================================
// sub_248C38
// address: 0x00248C38   size: 0x2C (44 bytes)
//======================================================================
void __noreturn sub_248C38()
{
  sub_248C64();
}


//======================================================================
// sub_248C64
// address: 0x00248C64   size: 0x3A (58 bytes)
//======================================================================
void __fastcall __noreturn sub_248C64(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        signed int a7,
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
        _BYTE *a22)
{
  int v22; // r6
  _BYTE *v23; // r3
  _BYTE *v24; // r0
  signed int v25; // r6
  int v26; // r1
  int v27; // r2
  int v28; // r3
  signed int v29; // r7
  signed int v30; // r0

  while ( 1 )
  {
    v23 = a22;
    if ( *a22 == 0 )
      break;
    v24 = ++a22;
    if ( *v23 == 37 )
    {
      if ( v23[1] != 37 )
      {
        v25 = v22 + 1;
        v29 = sub_248B48(v24, &a22);
        if ( v29 == 0 )
          v29 = v25;
        v30 = a7;
        if ( a7 < v29 )
          a7 = v29;
        sub_248C9E(v30, v26, v27, v28, a5, a6, a7, 0, 0, a10, a11, a12, a13, a14, a15, a16, a17, a18);
      }
      a22 = v23 + 2;
    }
  }
  JUMPOUT(0x248D02);
}


//======================================================================
// sub_248C9E
// address: 0x00248C9E   size: 0x90A (2314 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00248C9E  LDR     R1, [SP,#arg_44]; int
//   00248CA0  LDRB    R3, [R1]
//   00248CA2  CMP     R3, #0x39 ; '9'
//   00248CA4  BHI     loc_248CD4
//   00248CA6  CMP     R3, #0x30 ; '0'
//   00248CA8  BCC     loc_248CAC
//   00248CAA  B       loc_24945A
//   00248CAC  CMP     R3, #0x2B ; '+'
//   00248CAE  BHI     loc_248CC6
//   00248CB0  CMP     R3, #0x2A ; '*'
//   00248CB2  BCC     loc_248CB6
//   00248CB4  B       loc_24945A
//   00248CB6  CMP     R3, #0x20 ; ' '
//   00248CB8  BNE     loc_248CBC
//   00248CBA  B       loc_24945A
//   00248CBC  CMP     R3, #0x23 ; '#'
//   00248CBE  BEQ     loc_248CC4
//   00248CC0  BL      sub_2495A8
//   00248CC4  B       loc_24945A
//   00248CC6  MOVS    R2, R3
//   00248CC8  SUBS    R2, #0x2D ; '-'
//   00248CCA  CMP     R2, #1
//   00248CCC  BLS     loc_248CD2
//   00248CCE  BL      sub_2495A8
//   00248CD2  B       loc_24945A
//   00248CD4  CMP     R3, #0x68 ; 'h'
//   00248CD6  BNE     loc_248CDA
//   00248CD8  B       loc_24945A
//   00248CDA  BHI     loc_248CEC
//   00248CDC  CMP     R3, #0x4C ; 'L'
//   00248CDE  BNE     loc_248CE2
//   00248CE0  B       loc_24945A
//   00248CE2  CMP     R3, #0x4F ; 'O'
//   00248CE4  BEQ     loc_248CEA
//   00248CE6  BL      sub_2495A8
//   00248CEA  B       loc_24945A
//   00248CEC  CMP     R3, #0x71 ; 'q'
//   00248CEE  BNE     loc_248CF2
//   00248CF0  B       loc_24945A
//   00248CF2  CMP     R3, #0x7A ; 'z'
//   00248CF4  BNE     loc_248CF8
//   00248CF6  B       loc_24945A
//   00248CF8  CMP     R3, #0x6C ; 'l'
//   00248CFA  BEQ     loc_248D00
//   00248CFC  BL      sub_2495A8
//   00248D00  B       loc_24945A
//   00248D02  ADD     R3, SP, #arg_258
//   00248D04  MOVS    R5, #7
//   00248D06  LDR     R6, [SP,#arg_8]
//   00248D08  CMP     R2, R6
//   00248D0A  BGE     loc_248DBE
//   00248D0C  LDR     R6, [SP,#arg_8]
//   00248D0E  ADDS    R2, #1
//   00248D10  CMP     R2, R6
//   00248D12  BGE     loc_248D24
//   00248D14  LDR     R7, [R3,#8]
//   00248D16  CMP     R7, #9
//   00248D18  BNE     loc_248D24
//   00248D1A  LDR     R1, [R4]
//   00248D1C  ADDS    R4, #4
//   00248D1E  STR     R1, [R3,#0x18]
//   00248D20  ASRS    R1, R1, #0x1F
//   00248D22  STR     R1, [R3,#0x1C]
//   00248D24  MOVS    R1, R3
//   00248D26  SUBS    R1, #0x10
//   00248D28  LDR     R0, [R1]
//   00248D2A  CMP     R0, #9; switch 10 cases
//   00248D2C  BHI     def_248D2E; jumptable 00248D2E default case, cases 5,6,8
//   00248D2E  BL      __gnu_thumb1_case_uqi; switch jump
//   00248D32  DCB 8; jump table for switch statement
//   00248D33  DCB 5
//   00248D34  DCB 8
//   00248D35  DCB 0xC
//   00248D36  DCB 8
//   00248D37  DCB 0x44
//   00248D38  DCB 0x44
//   00248D39  DCB 0x39
//   00248D3A  DCB 0x44
//   00248D3B  DCB 0x42
//   00248D3C  LDR     R0, [R4]; jumptable 00248D2E case 1
//   00248D3E  STR     R0, [R3]
//   00248D40  B       loc_248D46
//   00248D42  LDR     R1, [R4]; jumptable 00248D2E cases 0,2,4
//   00248D44  STR     R1, [R3]
//   00248D46  ADDS    R4, #4
//   00248D48  B       def_248D2E; jumptable 00248D2E default case, cases 5,6,8
//   00248D4A  LDR     R1, [R1,#4]; jumptable 00248D2E case 3
//   00248D4C  MOVS    R0, #0x240
//   00248D50  MOVS    R6, #0x90
//   00248D52  ANDS    R0, R1
//   00248D54  LSLS    R6, R6, #2
//   00248D56  CMP     R0, R6
//   00248D58  BEQ     loc_248D66
//   00248D5A  MOVS    R0, R3
//   00248D5C  SUBS    R0, #0xC
//   00248D5E  LDR     R0, [R0]
//   00248D60  MOVS    R6, #0x40 ; '@'
//   00248D62  ANDS    R6, R0
//   00248D64  BEQ     loc_248D78
//   00248D66  ADDS    R1, R4, #7
//   00248D68  BICS    R1, R5
//   00248D6A  MOVS    R4, R1
//   00248D6C  LDR     R6, [R1]
//   00248D6E  LDR     R7, [R1,#4]
//   00248D70  ADDS    R4, #8
//   00248D72  STR     R6, [R3]
//   00248D74  STR     R7, [R3,#4]
//   00248D76  B       def_248D2E; jumptable 00248D2E default case, cases 5,6,8
//   00248D78  MOVS    R7, #0x220
//   00248D7C  ANDS    R1, R7
//   00248D7E  MOV     R12, R1
//   00248D80  ADDS    R1, R4, #4
//   00248D82  CMP     R12, R7
//   00248D84  BEQ     loc_248D9C
//   00248D86  MOVS    R6, #0x20 ; ' '
//   00248D88  ANDS    R6, R0
//   00248D8A  BEQ     loc_248D98
//   00248D8C  LDR     R0, [R4]
//   00248D8E  STR     R0, [R3]
//   00248D90  ASRS    R0, R0, #0x1F
//   00248D92  STR     R0, [R3,#4]
//   00248D94  MOVS    R4, R1
//   00248D96  B       def_248D2E; jumptable 00248D2E default case, cases 5,6,8
//   00248D98  LSLS    R7, R0, #0x16
//   00248D9A  BPL     loc_248D8C
//   00248D9C  LDR     R4, [R4]
//   00248D9E  STR     R6, [R3,#4]
//   00248DA0  STR     R4, [R3]
//   00248DA2  B       loc_248D94
//   00248DA4  ADDS    R1, R4, #7; jumptable 00248D2E case 7
//   00248DA6  BICS    R1, R5
//   00248DA8  MOVS    R4, R1
//   00248DAA  LDR     R6, [R1]
//   00248DAC  LDR     R7, [R1,#4]
//   00248DAE  ADDS    R4, #8
//   00248DB0  STR     R6, [R3]
//   00248DB2  STR     R7, [R3,#4]
//   00248DB4  B       def_248D2E; jumptable 00248D2E default case, cases 5,6,8
//   00248DB6  MOVS    R7, #3; jumptable 00248D2E case 9
//   00248DB8  STR     R7, [R1]
//   00248DBA  ADDS    R3, #0x18; jumptable 00248D2E default case, cases 5,6,8
//   00248DBC  B       loc_248D06
//   00248DBE  LDR     R7, [SP,#arg_28]
//   00248DC0  ADD     R6, SP, #arg_48
//   00248DC2  MOVS    R5, #0
//   00248DC4  STR     R7, [SP,#arg_44]
//   00248DC6  LDR     R7, =(a0123456789abcd_0 - 0x248DD0); "0123456789abcdefghijklmnopqrstuvwxyz"
//   00248DC8  STR     R6, [SP,#arg_30]
//   00248DCA  MOVS    R6, R5
//   00248DCC  ADD     R7, PC; "0123456789abcdefghijklmnopqrstuvwxyz"
//   00248DCE  STR     R7, [SP,#arg_28]
//   00248DD0  LDR     R3, [SP,#arg_44]
//   00248DD2  LDRB    R2, [R3]
//   00248DD4  CMP     R2, #0
//   00248DD6  BNE     loc_248DDA
//   00248DD8  B       loc_249444
//   00248DDA  CMP     R2, #0x25 ; '%'
//   00248DDC  BEQ     loc_248E02
//   00248DDE  LDR     R1, [SP,#arg_44]
//   00248DE0  LDR     R7, [SP,#arg_18]
//   00248DE2  LDRB    R0, [R1]
//   00248DE4  LDR     R1, [SP,#arg_14]
//   00248DE6  BLX     R7
//   00248DE8  ADDS    R0, #1
//   00248DEA  BNE     loc_248DEE
//   00248DEC  B       loc_249444
//   00248DEE  LDR     R3, [SP,#arg_44]
//   00248DF0  ADDS    R6, #1
//   00248DF2  ADDS    R2, R3, #1
//   00248DF4  STR     R2, [SP,#arg_44]
//   00248DF6  LDRB    R3, [R3,#1]
//   00248DF8  CMP     R3, #0
//   00248DFA  BEQ     loc_248DD0
//   00248DFC  CMP     R3, #0x25 ; '%'
//   00248DFE  BNE     loc_248DDE
//   00248E00  B       loc_248DD0
//   00248E02  ADDS    R2, R3, #1
//   00248E04  STR     R2, [SP,#arg_44]
//   00248E06  LDRB    R0, [R3,#1]
//   00248E08  CMP     R0, #0x25 ; '%'
//   00248E0A  BNE     loc_248E20
//   00248E0C  ADDS    R3, #2
//   00248E0E  LDR     R1, [SP,#arg_14]
//   00248E10  LDR     R7, [SP,#arg_18]
//   00248E12  STR     R3, [SP,#arg_44]
//   00248E14  BLX     R7
//   00248E16  ADDS    R0, #1
//   00248E18  BNE     loc_248E1C
//   00248E1A  B       loc_249444
//   00248E1C  ADDS    R6, #1
//   00248E1E  B       loc_248DD0
//   00248E20  MOVS    R0, R2
//   00248E22  ADD     R1, SP, #arg_44
//   00248E24  BL      sub_248B48
//   00248E28  MOVS    R4, R5
//   00248E2A  CMP     R0, #0
//   00248E2C  BEQ     loc_248E30
//   00248E2E  SUBS    R4, R0, #1
//   00248E30  MOVS    R2, #0x18
//   00248E32  MULS    R4, R2

//======================================================================
// sub_2495A8
// address: 0x002495A8   size: 0x216 (534 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   002495A8  SUBS    R7, #1
//   002495AA  MOVS    R2, #0x18
//   002495AC  CMP     R3, #0x66 ; 'f'
//   002495AE  BNE     loc_24964C
//   002495B0  MULS    R2, R7
//   002495B2  MOVS    R0, #0xF7
//   002495B4  LDR     R3, =0xFFFFF2D8
//   002495B6  LSLS    R0, R0, #4
//   002495B8  ADD     R0, SP
//   002495BA  ADDS    R2, R0, R2
//   002495BC  ADDS    R2, R2, R3
//   002495BE  MOVS    R3, #7
//   002495C0  STR     R3, [R2]
//   002495C2  B       loc_2495E0
//   002495C4  CMP     R3, #0x58 ; 'X'
//   002495C6  BLS     loc_24969A
//   002495C8  CMP     R3, #0x64 ; 'd'
//   002495CA  BEQ     loc_2495CE
//   002495CC  B       loc_249704
//   002495CE  MULS    R0, R7
//   002495D0  MOVS    R2, #0xF7
//   002495D2  LDR     R3, =0xFFFFF2D8
//   002495D4  LSLS    R2, R2, #4
//   002495D6  ADD     R2, SP
//   002495D8  ADDS    R0, R2, R0
//   002495DA  ADDS    R0, R0, R3
//   002495DC  MOVS    R3, #3
//   002495DE  STR     R3, [R0]
//   002495E0  MOVS    R3, #0x18
//   002495E2  MOV     R12, R3
//   002495E4  MOV     R2, R12
//   002495E6  MULS    R2, R7
//   002495E8  LDR     R3, [SP,#arg_C]
//   002495EA  ADD     R0, SP, #arg_248
//   002495EC  ADDS    R2, R0, R2
//   002495EE  STR     R3, [R2,#8]
//   002495F0  LDR     R3, [SP,#arg_10]
//   002495F2  STR     R5, [R2,#4]
//   002495F4  STR     R3, [R2,#0xC]
//   002495F6  LSLS    R3, R5, #0x11
//   002495F8  BPL     loc_249612
//   002495FA  LDR     R7, [SP,#arg_C]
//   002495FC  SUBS    R7, #1
//   002495FE  MOV     R3, R12
//   00249600  MULS    R3, R7
//   00249602  STR     R7, [R2,#8]
//   00249604  ADDS    R3, R0, R3
//   00249606  MOVS    R2, #9
//   00249608  STR     R2, [R3]
//   0024960A  MOVS    R2, #0
//   0024960C  STR     R2, [R3,#4]
//   0024960E  STR     R2, [R3,#8]
//   00249610  STR     R2, [R3,#0xC]
//   00249612  LSLS    R0, R5, #0xF
//   00249614  BPL     loc_24963E
//   00249616  MOVS    R2, #0x18
//   00249618  MULS    R7, R2
//   0024961A  MOVS    R0, #0xF70
//   0024961E  ADD     R0, SP
//   00249620  ADDS    R7, R0, R7
//   00249622  LDR     R3, [SP,#arg_10]
//   00249624  LDR     R0, =0xFFFFF2D8
//   00249626  SUBS    R3, #1
//   00249628  ADDS    R7, R7, R0
//   0024962A  STR     R3, [R7,#0xC]
//   0024962C  MULS    R3, R2
//   0024962E  ADD     R2, SP, #arg_248
//   00249630  ADDS    R3, R2, R3
//   00249632  MOVS    R2, #9
//   00249634  STR     R2, [R3]
//   00249636  MOVS    R2, #0
//   00249638  STR     R2, [R3,#4]
//   0024963A  STR     R2, [R3,#8]
//   0024963C  STR     R2, [R3,#0xC]
//   0024963E  LDR     R7, [SP,#arg_1C]
//   00249640  ADDS    R1, #1
//   00249642  STR     R1, [R7]
//   00249644  ADDS    R7, #4
//   00249646  STR     R7, [SP,#arg_1C]
//   00249648  BL      sub_248C64
//   0024964C  MOVS    R0, R2
//   0024964E  CMP     R3, #0x66 ; 'f'
//   00249650  BHI     loc_24973A
//   00249652  CMP     R3, #0x58 ; 'X'
//   00249654  BNE     loc_2495C4
//   00249656  MULS    R2, R7
//   00249658  MOVS    R0, #0xF7
//   0024965A  LDR     R3, =0xFFFFF2D8
//   0024965C  LSLS    R0, R0, #4
//   0024965E  ADD     R0, SP
//   00249660  ADDS    R2, R0, R2
//   00249662  ADDS    R2, R2, R3
//   00249664  MOVS    R3, #3
//   00249666  STR     R3, [R2]
//   00249668  MOVS    R3, #0x1A00
//   0024966C  B       loc_249696
//   0024966E  CMP     R3, #0x6F ; 'o'
//   00249670  BLS     loc_249756
//   00249672  CMP     R3, #0x73 ; 's'
//   00249674  BEQ     loc_2496BE
//   00249676  BHI     loc_24967A
//   00249678  B       loc_24978C
//   0024967A  CMP     R3, #0x75 ; 'u'
//   0024967C  BEQ     loc_249680
//   0024967E  B       loc_2497A2
//   00249680  MULS    R2, R7
//   00249682  MOVS    R0, #0xF7
//   00249684  LDR     R3, =0xFFFFF2D8
//   00249686  LSLS    R0, R0, #4
//   00249688  ADD     R0, SP
//   0024968A  ADDS    R2, R0, R2
//   0024968C  ADDS    R2, R2, R3
//   0024968E  MOVS    R3, #3
//   00249690  STR     R3, [R2]
//   00249692  MOVS    R3, #0x200
//   00249696  ORRS    R5, R3
//   00249698  B       loc_2495E0
//   0024969A  CMP     R3, #0x47 ; 'G'
//   0024969C  BNE     loc_2496B6
//   0024969E  MULS    R2, R7
//   002496A0  MOVS    R0, #0xF7
//   002496A2  LDR     R3, =0xFFFFF2D8
//   002496A4  LSLS    R0, R0, #4
//   002496A6  ADD     R0, SP
//   002496A8  ADDS    R2, R0, R2
//   002496AA  ADDS    R2, R2, R3
//   002496AC  MOVS    R3, #7
//   002496AE  STR     R3, [R2]
//   002496B0  MOVS    R3, #0x81
//   002496B2  LSLS    R3, R3, #0xC
//   002496B4  B       loc_249696
//   002496B6  CMP     R3, #0x53 ; 'S'
//   002496B8  BNE     loc_2496E8
//   002496BA  MOVS    R3, #8
//   002496BC  ORRS    R5, R3
//   002496BE  MOVS    R3, #0x18
//   002496C0  MULS    R3, R7
//   002496C2  MOVS    R2, #0xF70
//   002496C6  LDR     R0, =0xFFFFF2D8
//   002496C8  ADD     R2, SP
//   002496CA  ADDS    R3, R2, R3
//   002496CC  ADDS    R3, R3, R0
//   002496CE  MOVS    R2, #1
//   002496D0  B       loc_2496E4
//   002496D2  MOVS    R3, #0x18
//   002496D4  MULS    R3, R7
//   002496D6  MOVS    R0, #0xF7
//   002496D8  LDR     R2, =0xFFFFF2D8
//   002496DA  LSLS    R0, R0, #4
//   002496DC  ADD     R0, SP
//   002496DE  ADDS    R3, R0, R3
//   002496E0  ADDS    R3, R3, R2
//   002496E2  MOVS    R2, #0
//   002496E4  STR     R2, [R3]
//   002496E6  B       loc_2495E0
//   002496E8  CMP     R3, #0x45 ; 'E'
//   002496EA  BNE     loc_2496D2
//   002496EC  MULS    R2, R7
//   002496EE  MOVS    R0, #0xF7
//   002496F0  LDR     R3, =0xFFFFF2D8
//   002496F2  LSLS    R0, R0, #4
//   002496F4  ADD     R0, SP
//   002496F6  ADDS    R2, R0, R2
//   002496F8  ADDS    R2, R2, R3
//   002496FA  MOVS    R3, #7
//   002496FC  STR     R3, [R2]
//   002496FE  MOVS    R3, #0x82
//   00249700  LSLS    R3, R3, #0xB
//   00249702  B       loc_249696
//   00249704  CMP     R3, #0x64 ; 'd'
//   00249706  BLS     loc_24971E
//   00249708  MULS    R2, R7
//   0024970A  MOVS    R0, #0xF7
//   0024970C  LDR     R3, =0xFFFFF2D8
//   0024970E  LSLS    R0, R0, #4
//   00249710  ADD     R0, SP
//   00249712  ADDS    R2, R0, R2
//   00249714  ADDS    R2, R2, R3
//   00249716  MOVS    R3, #7
//   00249718  STR     R3, [R2]
//   0024971A  MOVS    R3, #0x80
//   0024971C  B       loc_249700
//   0024971E  CMP     R3, #0x63 ; 'c'
//   00249720  BNE     loc_2496D2
//   00249722  MULS    R2, R7
//   00249724  MOVS    R0, #0xF7
//   00249726  LDR     R3, =0xFFFFF2D8
//   00249728  LSLS    R0, R0, #4
//   0024972A  ADD     R0, SP
//   0024972C  ADDS    R2, R0, R2
//   0024972E  ADDS    R2, R2, R3
//   00249730  MOVS    R3, #3
//   00249732  STR     R3, [R2]
//   00249734  MOVS    R3, #0x20000
//   00249738  B       loc_249696
//   0024973A  CMP     R3, #0x6F ; 'o'
//   0024973C  BNE     loc_24966E
//   0024973E  MULS    R2, R7
//   00249740  MOVS    R0, #0xF7
//   00249742  LDR     R3, =0xFFFFF2D8

//======================================================================
// sub_2499C4
// address: 0x002499C4   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_2499C4(int a1)
{
  int v2; // r5
  void *v3; // r0

  v2 = *(_DWORD *)(*(_DWORD *)a1 + 328);
  if ( v2 != 0 )
  {
    curl_slist_free_all(*(_DWORD *)(v2 + 7340));
    *(_DWORD *)(v2 + 7340) = 0;
    v3 = *(void **)(*(_DWORD *)a1 + 328);
    if ( v3 != nullptr )
    {
      Curl_cfree(v3);
      *(_DWORD *)(*(_DWORD *)a1 + 328) = 0;
    }
  }
  return 0;
}


//======================================================================
// sub_249A04
// address: 0x00249A04   size: 0x18C (396 bytes)
//======================================================================
const char **__fastcall sub_249A04(int a1)
{
  int v1; // r4
  const char **i; // r5
  int v3; // r3
  int v4; // r0
  int v6; // [sp+8h] [bp-194h]
  char v7[128]; // [sp+14h] [bp-188h] BYREF
  char s[256]; // [sp+94h] [bp-108h] BYREF

  v6 = *(_DWORD *)a1;
  v1 = *(_DWORD *)(*(_DWORD *)a1 + 328);
  if ( *(_BYTE *)(a1 + 444) != 0 )
    curl_msnprintf((int)s, 256, "USER,%s", *(const char **)(a1 + 268));
  for ( i = *(const char ***)(v6 + 612); i != nullptr; i = (const char **)i[1] )
  {
    if ( j_sscanf(*i, "%127[^= ]%*[ =]%255s", v7, s) != 2 )
      Curl_failf(v6, "Syntax error in telnet option: %s", *i);
    if ( Curl_raw_equal(v7, "TTYPE") != 0 )
    {
      j_strncpy((char *)(v1 + 7176), s, 0x1Fu);
      *(_BYTE *)(v1 + 7207) = 0;
      v3 = 2152;
LABEL_10:
      *(_DWORD *)(v1 + v3) = 1;
      continue;
    }
    if ( Curl_raw_equal(v7, "XDISPLOC") != 0 )
    {
      j_strncpy((char *)(v1 + 7208), s, 0x7Fu);
      *(_BYTE *)(v1 + 7335) = 0;
      v3 = 2196;
      goto LABEL_10;
    }
    if ( Curl_raw_equal(v7, "NEW_ENV") != 0 )
    {
      v4 = curl_slist_append(*(_DWORD *)(v1 + 7340), s);
      if ( v4 == 0 )
      {
        i = (const char **)(&dword_18 + 3);
        curl_slist_free_all(*(_DWORD *)(v1 + 7340));
        *(_DWORD *)(v1 + 7340) = 0;
        return i;
      }
      *(_DWORD *)(v1 + 7340) = v4;
      v3 = 2212;
      goto LABEL_10;
    }
    if ( Curl_raw_equal(v7, "WS") != 0 )
    {
      if ( j_sscanf(s, "%hu%*[xX]%hu", v1 + 7336, v1 + 7338) != 2 )
        Curl_failf(v6, "Syntax error in telnet option: %s", *i);
      v3 = 2180;
      goto LABEL_10;
    }
    if ( Curl_raw_equal(v7, "BINARY") == 0 )
      Curl_failf(v6, "Unknown telnet option %s", *i);
    if ( j_atoi(s) != 1 )
    {
      *(_DWORD *)(v1 + 2056) = 0;
      *(_DWORD *)(v1 + 5128) = 0;
    }
  }
  return i;
}


//======================================================================
// sub_249BF4
// address: 0x00249BF4   size: 0x72 (114 bytes)
//======================================================================
int __fastcall sub_249BF4(int a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // r4
  int v4; // r6
  int v5; // r5
  int result; // r0
  _BYTE *v8; // [sp+Ch] [bp-18h]
  _BYTE v9[4]; // [sp+10h] [bp-14h] BYREF
  int v10; // [sp+14h] [bp-10h] BYREF
  struct pollfd fds; // [sp+18h] [bp-Ch] BYREF

  v3 = a2;
  v8 = &a2[a3];
  while ( v3 != v8 )
  {
    v4 = 1;
    v9[0] = *v3;
    if ( v9[0] == 255 )
    {
      v9[1] = -1;
      v4 = 2;
    }
    v5 = 0;
    do
    {
      fds.fd = *(_DWORD *)(a1 + 320);
      fds.events = 4;
      if ( (unsigned int)(Curl_poll(&fds) + 1) <= 1 )
        return 55;
      v10 = 0;
      result = Curl_write(a1, *(_DWORD *)(a1 + 320), (int)&v9[v5], v4 - v5, &v10);
      v5 += v10;
      if ( result != 0 )
        return result;
    }
    while ( v5 < v4 );
    ++v3;
  }
  return 0;
}


//======================================================================
// sub_249C68
// address: 0x00249C68   size: 0x220 (544 bytes)
//======================================================================
__int64 __fastcall sub_249C68(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  int v4; // r4
  unsigned int v6; // r7
  const char *v7; // r2
  unsigned int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r2
  int v11; // r3
  unsigned __int8 *i; // r7
  _BYTE *v13; // r7
  int v14; // r2
  __int64 v16; // [sp+0h] [bp-Ch]

  v16 = a1;
  v4 = a1;
  if ( *(_BYTE *)(a1 + 776) == 0 )
    return v16;
  v6 = 0;
  if ( HIDWORD(a1) != 0 )
  {
    if ( HIDWORD(a1) == 60 )
      v7 = "RCVD";
    else
      v7 = "SENT";
    v6 = 0;
    Curl_infof(a1, "%s IAC SB ", v7);
    if ( a3 > 2 )
    {
      v6 = a2[a3 - 2];
      LODWORD(v16) = a2[a3 - 1];
      if ( v6 != 255 || a2[a3 - 1] != 240 )
      {
        Curl_infof(v4, "(terminated by ");
        if ( v6 > 0x27 )
        {
          if ( v6 - 236 > 0x13 )
            Curl_infof(v4, "%u ", v6);
          else
            Curl_infof(v4, "%s ", off_453374[v6 - 228]);
        }
        else
        {
          Curl_infof(v4, "%s ", off_4532F4[v6]);
        }
        if ( (int)v16 > 39 )
        {
          if ( (unsigned int)(v16 - 236) > 0x13 )
            Curl_infof(v4, "%d", (_DWORD)v16);
          else
            Curl_infof(v4, "%s", off_453374[(_DWORD)v16 - 228]);
        }
        else
        {
          Curl_infof(v4, "%s", off_4532F4[(_DWORD)v16]);
        }
        Curl_infof(v4, ", not IAC SE!) ");
      }
    }
    a3 -= 2;
  }
  if ( a3 == 0 )
  {
    Curl_infof(v4, "(Empty suboption?)");
    return v16;
  }
  v8 = *a2;
  if ( v8 > 0x27 )
  {
    Curl_infof(v4, "%d (unknown)", a2[v6]);
  }
  else
  {
    v9 = (unsigned __int8)(v8 - 24);
    v10 = v8;
    if ( v9 <= 0xF && ((1 << v9) & 0x8881) != 0 )
      Curl_infof(v4, "%s", off_4532F4[v10]);
    else
      Curl_infof(v4, "%s (unsupported)", off_4532F4[v10]);
  }
  if ( *a2 == 31 )
  {
    Curl_infof(
      v4,
      "Width: %hu ; Height: %hu",
      (unsigned __int16)(*(_WORD *)(a2 + 1) << 8) | HIBYTE(*(_WORD *)(a2 + 1)),
      (unsigned __int16)(*(_WORD *)(a2 + 3) << 8) | HIBYTE(*(_WORD *)(a2 + 3)));
  }
  else
  {
    switch ( a2[1] )
    {
      case 0u:
        Curl_infof(v4, " IS");
        break;
      case 1u:
        Curl_infof(v4, " SEND");
        break;
      case 2u:
        Curl_infof(v4, " INFO/REPLY");
        break;
      case 3u:
        Curl_infof(v4, " NAME");
        break;
      default:
        break;
    }
    v11 = *a2;
    switch ( v11 )
    {
      case 35:
        goto LABEL_40;
      case 39:
        if ( a2[1] == 0 )
        {
          v13 = a2 + 3;
          Curl_infof(v4, " ");
          while ( v13 - a2 < a3 )
          {
            v14 = (unsigned __int8)*v13;
            if ( *v13 != 0 )
            {
              if ( v14 == 1 )
                Curl_infof(v4, " = ");
              else
                Curl_infof(v4, "%c", v14);
            }
            else
            {
              Curl_infof(v4, ", ");
            }
            ++v13;
          }
        }
        break;
      case 24:
LABEL_40:
        a2[a3] = 0;
        Curl_infof(v4, " \"%s\"", (const char *)a2 + 2);
        break;
      default:
        for ( i = a2 + 2; i - a2 < a3; ++i )
          Curl_infof(v4, " %.2x", *i);
        break;
    }
  }
  if ( HIDWORD(v16) != 0 )
    Curl_infof(v4, "\n");
  return v16;
}


//======================================================================
// sub_249F10
// address: 0x00249F10   size: 0x1E6 (486 bytes)
//======================================================================
int __fastcall sub_249F10(int a1)
{
  int v1; // r4
  __int64 v2; // r0
  int result; // r0
  unsigned __int8 *v4; // r3
  int v5; // r6
  const char *v6; // r4
  const char *v7; // r4
  _BYTE v8[2056]; // [sp+12Ch] [bp-808h] BYREF

  v1 = *(_DWORD *)(*(_DWORD *)a1 + 328);
  LODWORD(v2) = *(_DWORD *)a1;
  HIDWORD(v2) = 60;
  result = sub_249C68(v2, (unsigned __int8 *)(v1 + 7344), *(_DWORD *)(v1 + 7860) - *(_DWORD *)(v1 + 7856) + 2);
  v4 = *(unsigned __int8 **)(v1 + 7856);
  *(_DWORD *)(v1 + 7856) = v4 + 1;
  v5 = *v4;
  switch ( v5 )
  {
    case 35:
      v7 = (const char *)(v1 + 7208);
      j_strlen(v7);
      curl_msnprintf((int)v8, 2048, "%c%c%c%c%s%c%c", 255, 250, 35, 0, v7, 255, 240);
    case 39:
      curl_msnprintf((int)v8, 2048, "%c%c%c%c", 255, 250, 39, 0);
    case 24:
      v6 = (const char *)(v1 + 7176);
      j_strlen(v6);
      curl_msnprintf((int)v8, 2048, "%c%c%c%c%s%c%c", 255, 250, 24, 0, v6, 255, 240);
    default:
      break;
  }
  return result;
}


//======================================================================
// sub_24A148
// address: 0x0024A148   size: 0x14E (334 bytes)
//======================================================================
ssize_t __fastcall sub_24A148(ssize_t result, int a2)
{
  int v2; // r5
  int v3; // r6
  int v4; // r4
  unsigned int v5; // r3
  _BYTE *v6; // r1
  _BYTE *v7; // r1
  _BYTE *v8; // r1
  _BYTE *v9; // r1
  _BYTE *v10; // r1
  _BYTE *v11; // r1
  _BYTE *v12; // r1
  int v13; // r3
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  void *v16; // [sp+4h] [bp-10h]
  __int16 v17; // [sp+Ch] [bp-8h]
  __int16 v18; // [sp+Eh] [bp-6h]

  v2 = *(_DWORD *)result;
  v3 = result;
  v4 = *(_DWORD *)(*(_DWORD *)result + 328);
  if ( a2 == 31 )
  {
    v16 = (void *)(v4 + 7344);
    v5 = v4 + 7856;
    *(_DWORD *)(v4 + 7856) = v4 + 7345;
    *(_BYTE *)(v4 + 7344) = -1;
    if ( v4 + 7345 < (unsigned int)(v4 + 7856) )
    {
      *(_DWORD *)(v4 + 7856) = v4 + 7346;
      *(_BYTE *)(v4 + 7345) = -6;
    }
    v6 = *(_BYTE **)(v4 + 7856);
    if ( (unsigned int)v6 < v5 )
    {
      *(_DWORD *)(v4 + 7856) = v6 + 1;
      *v6 = 31;
    }
    v17 = HIBYTE(*(_WORD *)(v4 + 7336)) | (*(_WORD *)(v4 + 7336) << 8);
    v18 = HIBYTE(*(_WORD *)(v4 + 7338)) | (*(_WORD *)(v4 + 7338) << 8);
    v7 = *(_BYTE **)(v4 + 7856);
    if ( (unsigned int)v7 < v5 )
    {
      *(_DWORD *)(v4 + 7856) = v7 + 1;
      *v7 = v17;
    }
    v8 = *(_BYTE **)(v4 + 7856);
    if ( (unsigned int)v8 < v5 )
    {
      *(_DWORD *)(v4 + 7856) = v8 + 1;
      *v8 = HIBYTE(v17);
    }
    v9 = *(_BYTE **)(v4 + 7856);
    if ( (unsigned int)v9 < v5 )
    {
      *(_DWORD *)(v4 + 7856) = v9 + 1;
      *v9 = v18;
    }
    v10 = *(_BYTE **)(v4 + 7856);
    if ( (unsigned int)v10 < v5 )
    {
      *(_DWORD *)(v4 + 7856) = v10 + 1;
      *v10 = HIBYTE(v18);
    }
    v11 = *(_BYTE **)(v4 + 7856);
    if ( (unsigned int)v11 < v5 )
    {
      *(_DWORD *)(v4 + 7856) = v11 + 1;
      *v11 = -1;
    }
    v12 = *(_BYTE **)(v4 + 7856);
    if ( (unsigned int)v12 < v5 )
    {
      *(_DWORD *)(v4 + 7856) = v12 + 1;
      *v12 = -16;
    }
    v13 = *(_DWORD *)(v4 + 7856);
    *(_DWORD *)(v4 + 7860) = v13;
    *(_DWORD *)(v4 + 7856) = v16;
    sub_249C68((unsigned int)v2 | 0x3E00000000LL, (unsigned __int8 *)(v4 + 7346), v13 - (_DWORD)v16 - 2);
    if ( j_send(*(_DWORD *)(v3 + 320), v16, 3u, 0x4000) < 0 )
    {
      v14 = (_DWORD *)j___errno();
      Curl_failf(v2, "Sending data failed (%d)", *v14);
    }
    sub_249BF4(v3, (_BYTE *)(v4 + 7347), 4);
    result = j_send(*(_DWORD *)(v3 + 320), (const void *)(v4 + 7351), 2u, 0x4000);
    if ( result < 0 )
    {
      v15 = (_DWORD *)j___errno();
      Curl_failf(v2, "Sending data failed (%d)", *v15);
    }
  }
  return result;
}


//======================================================================
// sub_24A2C4
// address: 0x0024A2C4   size: 0xA0 (160 bytes)
//======================================================================
__int64 __fastcall sub_24A2C4(__int64 a1, const char *a2, int a3)
{
  int v4; // r6
  const char *v6; // r3
  const char *v7; // r2
  int v8; // r2
  __int64 v10; // [sp+0h] [bp-8h]
  const char *v11; // [sp+0h] [bp-8h]

  v10 = a1;
  v4 = HIDWORD(a1);
  if ( *(_BYTE *)(a1 + 776) != 0 )
  {
    if ( a2 == (_BYTE *)&off_FC + 3 )
    {
      if ( (unsigned int)(a3 - 236) > 0x13 )
        Curl_infof(a1, "%s IAC %d\n", HIDWORD(a1), a3);
      else
        Curl_infof(a1, "%s IAC %s\n", HIDWORD(a1), off_453374[a3 - 228]);
      return v10;
    }
    if ( a2 == (_BYTE *)&dword_F8 + 3 )
    {
      v6 = "WILL";
    }
    else if ( a2 == (const char *)&off_FC )
    {
      v6 = "WONT";
    }
    else if ( a2 == (_BYTE *)&off_FC + 1 )
    {
      v6 = "DO";
    }
    else
    {
      if ( a2 != (_BYTE *)&off_FC + 2 )
      {
        v11 = (const char *)a3;
        v8 = HIDWORD(a1);
        HIDWORD(a1) = "%s %d %d\n";
        v6 = a2;
        goto LABEL_23;
      }
      v6 = "DONT";
    }
    if ( a3 > 39 )
    {
      if ( a3 != 255 )
      {
LABEL_20:
        v11 = (const char *)a3;
        HIDWORD(a1) = "%s %s %d\n";
        goto LABEL_21;
      }
      v7 = "EXOPL";
    }
    else
    {
      v7 = off_4532F4[a3];
      if ( v7 == nullptr )
        goto LABEL_20;
    }
    v11 = v7;
    HIDWORD(a1) = "%s %s %s\n";
LABEL_21:
    v8 = v4;
LABEL_23:
    Curl_infof(a1, (const char *)HIDWORD(a1), v8, v6, v11);
  }
  return v10;
}


//======================================================================
// sub_24A394
// address: 0x0024A394   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall sub_24A394(__int64 a1, int a2)
{
  const char *v2; // r6
  _DWORD *v3; // r4
  int v4; // r7
  _DWORD *v6; // r0
  __int64 v7; // r0
  __int64 v9; // [sp+0h] [bp-Ch] BYREF
  int v10; // [sp+8h] [bp-4h]

  v9 = a1;
  v10 = a2;
  v2 = (const char *)HIDWORD(a1);
  BYTE4(v9) = -1;
  v3 = (_DWORD *)a1;
  v4 = *(_DWORD *)a1;
  LODWORD(a1) = *(_DWORD *)(a1 + 320);
  BYTE6(v9) = a2;
  BYTE5(v9) = BYTE4(a1);
  if ( j_send(a1, (char *)&v9 + 4, 3u, 0x4000) < 0 )
  {
    v6 = (_DWORD *)j___errno();
    Curl_failf(v4, "Sending data failed (%d)", *v6);
  }
  LODWORD(v7) = *v3;
  HIDWORD(v7) = "SENT";
  sub_24A2C4(v7, v2, a2);
  return v9;
}


//======================================================================
// sub_24A3E4
// address: 0x0024A3E4   size: 0x790 (1936 bytes)
//======================================================================
const char **__fastcall sub_24A3E4(int a1, _BYTE *a2)
{
  _DWORD *v3; // r0
  size_t (**v4)(void *, size_t, size_t, FILE *); // r0
  int v5; // r3
  int v6; // r0
  __suseconds_t v7; // r1
  _BOOL4 v8; // r4
  int v9; // r0
  __time_t v10; // r2
  int p_fds; // r3
  _DWORD *v12; // r4
  int v13; // r5
  int v14; // r0
  char *v15; // r2
  size_t v16; // r3
  int v17; // r0
  _DWORD *v18; // r3
  _BYTE *v19; // r2
  _BYTE *v20; // r2
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r3
  _DWORD *v25; // r3
  int v26; // r1
  __int64 v27; // r0
  int v28; // r1
  int v29; // r6
  int v30; // r3
  __int64 v31; // r0
  _DWORD *v32; // r6
  int v33; // r3
  int v34; // r3
  int v35; // r3
  int v36; // r3
  int v37; // r3
  int v38; // r2
  __int64 v39; // r0
  int v40; // r2
  _BYTE *v41; // r3
  _BYTE *v42; // r2
  _BYTE *v43; // r2
  _BYTE *v44; // r2
  int v45; // r4
  int v46; // r5
  int v47; // r1
  int v48; // r3
  int v49; // r2
  int v50; // r3
  int v51; // r2
  int v52; // r0
  const char **result; // r0
  int v54; // [sp+24h] [bp-70h]
  int v55; // [sp+28h] [bp-6Ch]
  int v56; // [sp+2Ch] [bp-68h]
  unsigned __int8 *buf; // [sp+30h] [bp-64h]
  int v58; // [sp+34h] [bp-60h]
  __int64 v59; // [sp+38h] [bp-5Ch]
  __int64 v60; // [sp+40h] [bp-54h]
  int v61; // [sp+48h] [bp-4Ch]
  _DWORD *v62; // [sp+4Ch] [bp-48h]
  int v63; // [sp+50h] [bp-44h]
  int v64; // [sp+54h] [bp-40h]
  ssize_t v65; // [sp+6Ch] [bp-28h]
  ssize_t v66; // [sp+74h] [bp-20h] BYREF
  struct timeval v67; // [sp+78h] [bp-1Ch] BYREF
  struct pollfd fds; // [sp+80h] [bp-14h] BYREF
  int fd; // [sp+88h] [bp-Ch]
  __int16 v70; // [sp+8Ch] [bp-8h]
  __int16 v71; // [sp+8Eh] [bp-6h]

  v64 = *(_DWORD *)(a1 + 320);
  v58 = *(_DWORD *)a1;
  *a2 = 1;
  v3 = Curl_ccalloc(1u, 0x1EBCu);
  if ( v3 == nullptr )
    return (const char **)(&dword_18 + 3);
  *(_DWORD *)(*(_DWORD *)a1 + 328) = v3;
  v3[1966] = 0;
  v3[1964] = v3 + 1836;
  v3[517] = 1;
  v3[1285] = 1;
  v3[514] = 1;
  v3[1282] = 1;
  v3[1283] = 1;
  v3[1569] = 1;
  v62 = *(_DWORD **)(v58 + 328);
  result = sub_249A04(a1);
  v55 = (int)result;
  if ( result == nullptr )
  {
    v4 = *(size_t (***)(void *, size_t, size_t, FILE *))(a1 + 580);
    fds.fd = v64;
    fds.events = 1;
    if ( v4 == &fread )
    {
      v5 = *(_DWORD *)(a1 + 584);
      v70 = 1;
      v63 = 2;
      fd = *(__int16 *)(v5 + 14);
    }
    else
    {
      v63 = 1;
    }
    v59 = 0;
    v60 = 0;
    buf = (unsigned __int8 *)(v58 + 1388);
    while ( 1 )
    {
      v6 = Curl_poll(&fds);
      if ( v6 == -1 )
        goto LABEL_173;
      if ( v6 == 0 )
      {
        fds.revents = 0;
        v71 = 0;
      }
      v8 = true;
      if ( (fds.revents & 1) == 0 )
        goto LABEL_156;
      v9 = Curl_read(a1, v64, buf, 0x3FFFu, (size_t *)&v66);
      v55 = v9;
      if ( v9 != 81 )
      {
        v8 = false;
        if ( v9 == 0 )
        {
          p_fds = v66;
          v8 = false;
          if ( v66 > 0 )
          {
            v60 += v66;
            Curl_pgrsSetDownloadCounter(v58, v66 >> 31, v60, SHIDWORD(v60));
            v65 = v66;
            v12 = *(_DWORD **)(*(_DWORD *)a1 + 328);
            v61 = *(_DWORD *)a1;
            v54 = -1;
            v56 = v55;
            while ( v56 != v65 )
            {
              v7 = 7864;
              v13 = buf[v56];
              switch ( v12[1966] )
              {
                case 0:
                  if ( v13 != 255 )
                  {
                    if ( v13 == 13 )
                      v12[1966] = 6;
                    if ( v54 == -1 )
                      v54 = v56;
                    goto LABEL_125;
                  }
                  v7 = 1;
                  v12[1966] = 1;
                  if ( v54 == -1 )
                    goto LABEL_20;
                  v14 = a1;
                  v15 = (char *)&buf[v54];
                  v16 = v56 - v54;
                  goto LABEL_25;
                case 1:
                  goto LABEL_38;
                case 2:
                  sub_24A2C4(__SPAIR64__("RCVD", v61), (_BYTE *)&dword_F8 + 3, buf[v56]);
                  *v12 = 1;
                  v25 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 328) + 4 * v13);
                  v26 = v25[770];
                  if ( v26 == 2 )
                  {
                    v29 = v25[1026];
                    if ( v29 == 0 )
                    {
                      v25[770] = 1;
                      goto LABEL_63;
                    }
                    if ( v29 != 1 )
                      goto LABEL_63;
                    v25[770] = 3;
                    v25[1026] = 0;
                    goto LABEL_61;
                  }
                  if ( v26 != 3 )
                  {
                    if ( v26 != 0 )
                      goto LABEL_63;
                    if ( v25[1282] == 1 )
                    {
                      v25[770] = 1;
                      v27 = (unsigned int)a1 | 0xFD00000000LL;
LABEL_62:
                      sub_24A394(v27, v13);
                      goto LABEL_63;
                    }
LABEL_61:
                    v27 = (unsigned int)a1 | 0xFE00000000LL;
                    goto LABEL_62;
                  }
                  v28 = v25[1026];
                  if ( v28 != 0 )
                  {
                    if ( v28 == 1 )
                    {
                      v25[770] = 1;
                      v25[1026] = 0;
                    }
                  }
                  else
                  {
                    v25[770] = 0;
                  }
LABEL_63:
                  v23 = 0;
LABEL_118:
                  v7 = 7864;
                  v12[1966] = v23;
LABEL_125:
                  ++v56;
                  break;
                case 3:
                  sub_24A2C4(__SPAIR64__("RCVD", v61), (const char *)&off_FC, buf[v56]);
                  *v12 = 1;
                  v30 = *(_DWORD *)(*(_DWORD *)a1 + 328) + 4 * v13;
                  v7 = *(_DWORD *)(v30 + 3080);
                  if ( v7 != 2 )
                  {
                    if ( v7 != 3 )
                    {
                      if ( v7 != 1 )
                        goto LABEL_76;
                      *(_DWORD *)(v30 + 3080) = 0;
                      v31 = (unsigned int)a1 | 0xFE00000000LL;
LABEL_71:
                      v7 = (unsigned __int64)sub_24A394(v31, v13) >> 32;
                      goto LABEL_76;
                    }
                    v7 = *(_DWORD *)(v30 + 4104);
                    if ( v7 != 0 )
                    {
                      if ( v7 != 1 )
                        goto LABEL_76;
                      *(_DWORD *)(v30 + 3080) = 2;
                      *(_DWORD *)(v30 + 4104) = 0;
                      v31 = (unsigned int)a1 | 0xFD00000000LL;
                      goto LABEL_71;
                    }
LABEL_75:
                    *(_DWORD *)(v30 + 3080) = v7;
                    goto LABEL_76;
                  }
                  v7 = *(_DWORD *)(v30 + 4104);
                  if ( v7 == 0 )
                    goto LABEL_75;
                  if ( v7 == 1 )
                  {
                    v7 = 0;
                    *(_DWORD *)(v30 + 3080) = 0;
                    *(_DWORD *)(v30 + 4104) = 0;
                  }
LABEL_76:
                  v24 = 0;
LABEL_77:
                  v12[1966] = v24;
                  goto LABEL_125;
                case 4:
                  v7 = (unsigned __int64)sub_24A2C4(__SPAIR64__("RCVD", v61), (_BYTE *)&off_FC + 1, buf[v56]) >> 32;
                  *v12 = 1;
                  v32 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 328) + 4 * v13);
                  v33 = v32[2];
                  if ( v33 == 2 )
                  {
                    v36 = v32[258];
                    if ( v36 == 0 )
                    {
                      v32[2] = 1;
                      v34 = v32[1538];
                      goto LABEL_93;
                    }
                    if ( v36 != 1 )
                      goto LABEL_124;
                    v32[2] = 3;
                    v32[1026] = 0;
LABEL_95:
                    v7 = (unsigned __int64)sub_24A394((unsigned int)a1 | 0xFC00000000LL, v13) >> 32;
                    goto LABEL_124;
                  }
                  if ( v33 != 3 )
                  {
                    if ( v33 != 0 )
                      goto LABEL_124;
                    if ( v32[514] == 1 )
                    {
                      v32[2] = 1;
                      sub_24A394((unsigned int)a1 | 0xFB00000000LL, v13);
                      v7 = 6152;
                      v34 = v32[1538];
LABEL_93:
                      if ( v34 != 1 )
                        goto LABEL_124;
LABEL_94:
                      sub_24A148(a1, v13);
                      goto LABEL_124;
                    }
                    if ( v32[1538] == 1 )
                    {
                      v32[2] = 1;
                      sub_24A394((unsigned int)a1 | 0xFB00000000LL, v13);
                      goto LABEL_94;
                    }
                    goto LABEL_95;
                  }
                  v35 = v32[258];
                  if ( v35 != 0 )
                  {
                    if ( v35 == 1 )
                    {
                      v32[2] = 1;
                      v32[258] = 0;
                    }
                  }
                  else
                  {
                    v32[2] = 0;
                  }
LABEL_124:
                  v12[1966] = 0;
                  goto LABEL_125;
                case 5:
                  v7 = (unsigned __int64)sub_24A2C4(__SPAIR64__("RCVD", v61), (_BYTE *)&off_FC + 2, buf[v56]) >> 32;
                  *v12 = 1;
                  v37 = *(_DWORD *)(*(_DWORD *)a1 + 328) + 4 * v13;
                  v38 = *(_DWORD *)(v37 + 8);
                  if ( v38 != 2 )
                  {
                    if ( v38 != 3 )
                    {
                      if ( v38 != 1 )
                        goto LABEL_108;
                      *(_DWORD *)(v37 + 8) = 0;
                      v39 = (unsigned int)a1 | 0xFC00000000LL;
LABEL_103:
                      v7 = (unsigned __int64)sub_24A394(v39, v13) >> 32;
                      goto LABEL_108;
                    }
                    v7 = 1032;
                    v40 = *(_DWORD *)(v37 + 1032);
                    if ( v40 != 0 )
                    {
                      if ( v40 != 1 )
                        goto LABEL_108;
                      *(_DWORD *)(v37 + 8) = 2;
                      *(_DWORD *)(v37 + 1032) = 0;
                      v39 = (unsigned int)a1 | 0xFB00000000LL;
                      goto LABEL_103;
                    }
LABEL_107:
                    *(_DWORD *)(v37 + 8) = v40;
                    goto LABEL_108;
                  }
                  v7 = 1032;
                  v40 = *(_DWORD *)(v37 + 1032);
                  if ( v40 == 0 )
                    goto LABEL_107;
                  if ( v40 == 1 )
                  {
                    *(_DWORD *)(v37 + 8) = 0;
                    *(_DWORD *)(v37 + 1032) = 0;
                  }
LABEL_108:
                  v21 = 0;
LABEL_109:
                  v12[1966] = v21;
                  goto LABEL_125;
                case 6:
                  v12[1966] = 0;
                  if ( v13 != 0 )
                  {
LABEL_45:
                    if ( v54 == -1 )
                      v54 = v56;
                  }
                  else
                  {
                    if ( v54 != -1 )
                    {
                      v14 = a1;
                      v15 = (char *)&buf[v54];
                      v16 = v56 - v54;
LABEL_25:
                      v17 = Curl_client_write(v14, 1, v15, v16);
                      if ( v17 != 0 )
                        goto LABEL_174;
                    }
LABEL_20:
                    v54 = -1;
                  }
                  goto LABEL_125;
                case 7:
                  if ( v13 == 255 )
                  {
                    v22 = 8;
LABEL_112:
                    v12[1966] = v22;
                  }
                  else
                  {
                    v7 = 7856;
                    v41 = (_BYTE *)v12[1964];
                    if ( v41 < (_BYTE *)v12 + 7856 )
                    {
                      v7 = (__suseconds_t)(v41 + 1);
                      v12[1964] = v41 + 1;
                      *v41 = v13;
                    }
                  }
                  goto LABEL_125;
                case 8:
                  v18 = v12 + 1964;
                  if ( v13 == 240 )
                  {
                    v43 = (_BYTE *)v12[1964];
                    if ( v43 < (_BYTE *)v18 )
                    {
                      v12[1964] = v43 + 1;
                      *v43 = -1;
                    }
                    v44 = (_BYTE *)v12[1964];
                    if ( v44 < (_BYTE *)v18 )
                    {
                      v12[1964] = v44 + 1;
                      *v44 = -16;
                    }
                    v12[1965] = v12[1964] - 2;
                    v12[1964] = v12 + 1836;
                    sub_249F10(a1);
                    goto LABEL_124;
                  }
                  if ( v13 == 255 )
                  {
                    v42 = (_BYTE *)v12[1964];
                    if ( v42 < (_BYTE *)v18 )
                    {
                      v12[1964] = v42 + 1;
                      *v42 = -1;
                    }
                    v23 = 7;
                    goto LABEL_118;
                  }
                  v19 = (_BYTE *)v12[1964];
                  if ( v19 < (_BYTE *)v18 )
                  {
                    v12[1964] = v19 + 1;
                    *v19 = -1;
                  }
                  v20 = (_BYTE *)v12[1964];
                  if ( v20 < (_BYTE *)v18 )
                  {
                    v12[1964] = v20 + 1;
                    *v20 = v13;
                  }
                  v12[1965] = v12[1964] - 2;
                  v12[1964] = v12 + 1836;
                  sub_24A2C4(__SPAIR64__("In SUBOPTION processing, RCVD", v61), (_BYTE *)&off_FC + 3, v13);
                  sub_249F10(a1);
                  v12[1966] = 1;
LABEL_38:
                  switch ( v13 )
                  {
                    case 250:
                      v12[1964] = v12 + 1836;
                      v22 = 7;
                      goto LABEL_112;
                    case 251:
                      v21 = 2;
                      goto LABEL_109;
                    case 252:
                      v22 = 3;
                      goto LABEL_112;
                    case 253:
                      v23 = 4;
                      goto LABEL_118;
                    case 254:
                      v24 = 5;
                      goto LABEL_77;
                    case 255:
                      v7 = 7864;
                      v12[1966] = 0;
                      goto LABEL_45;
                    default:
                      v12[1966] = 0;
                      v7 = (unsigned __int64)sub_24A2C4(__SPAIR64__("RCVD", v61), (_BYTE *)&off_FC + 3, v13) >> 32;
                      break;
                  }
                  goto LABEL_125;
                default:
                  goto LABEL_125;
              }
            }
            if ( v54 == -1 || (v17 = Curl_client_write(a1, 1, (char *)&buf[v54], v56 - v54)) == 0 )
            {
              if ( *v62 != 0 )
              {
                v45 = v62[1];
                if ( v45 == 0 )
                {
                  v46 = *(_DWORD *)(*(_DWORD *)a1 + 328);
                  while ( 2 )
                  {
                    if ( v45 == 1 )
                      goto LABEL_154;
                    v47 = *(_DWORD *)(v46 + 2056);
                    if ( v47 == 1 )
                    {
                      v48 = *(_DWORD *)(*(_DWORD *)a1 + 328) + 4 * v45;
                      v49 = *(_DWORD *)(v48 + 8);
                      if ( v49 == 2 )
                      {
                        if ( *(_DWORD *)(v48 + 1032) == 1 )
                        {
                          v47 = 0;
                          goto LABEL_143;
                        }
                      }
                      else
                      {
                        if ( v49 != 3 )
                        {
                          if ( v49 == 0 )
                          {
                            *(_DWORD *)(v48 + 8) = 2;
                            sub_24A394((unsigned int)a1 | 0xFB00000000LL, v45);
                          }
                          goto LABEL_144;
                        }
                        if ( *(_DWORD *)(v48 + 1032) == 0 )
LABEL_143:
                          *(_DWORD *)(v48 + 1032) = v47;
                      }
                    }
LABEL_144:
                    v7 = *(_DWORD *)(v46 + 5128);
                    if ( v7 == 1 )
                    {
                      v50 = *(_DWORD *)(*(_DWORD *)a1 + 328) + 4 * v45;
                      v51 = *(_DWORD *)(v50 + 3080);
                      if ( v51 == 2 )
                      {
                        if ( *(_DWORD *)(v50 + 4104) == 1 )
                        {
                          v7 = 0;
LABEL_153:
                          *(_DWORD *)(v50 + 4104) = v7;
                        }
                      }
                      else
                      {
                        if ( v51 != 3 )
                        {
                          if ( v51 == 0 )
                          {
                            *(_DWORD *)(v50 + 3080) = 2;
                            v7 = (unsigned __int64)sub_24A394((unsigned int)a1 | 0xFD00000000LL, v45) >> 32;
                          }
                          goto LABEL_154;
                        }
                        if ( *(_DWORD *)(v50 + 4104) == 0 )
                          goto LABEL_153;
                      }
                    }
LABEL_154:
                    ++v45;
                    v46 += 4;
                    if ( v45 == 40 )
                    {
                      v62[1] = 1;
                      break;
                    }
                    continue;
                  }
                }
              }
LABEL_156:
              v8 = false;
              v66 = 0;
              if ( v63 == 2 )
              {
                p_fds = (int)&fds;
                if ( (v71 & 1) != 0 )
                  v66 = j_read(fd, buf, 0x3FFFu);
                goto LABEL_161;
              }
              v52 = (*(int (__fastcall **)(unsigned __int8 *, int, int, _DWORD))(a1 + 580))(
                      buf,
                      1,
                      0x3FFF,
                      *(_DWORD *)(a1 + 584));
              v66 = v52;
              p_fds = 0x10000000;
              if ( v52 == 0x10000000 )
                goto LABEL_166;
              p_fds = 268435457;
              if ( v52 != 268435457 )
              {
LABEL_161:
                v10 = v66;
                if ( v66 <= 0 )
                {
                  v8 = v66 == 0;
                  goto LABEL_166;
                }
                v8 = false;
                v55 = sub_249BF4(a1, buf, v66);
                if ( v55 != 0 )
                  goto LABEL_166;
                v59 += v66;
                Curl_pgrsSetUploadCounter(v58, v66 >> 31, v59, SHIDWORD(v59));
              }
              v8 = true;
              goto LABEL_166;
            }
LABEL_174:
            v55 = v17;
            v8 = false;
          }
        }
      }
LABEL_166:
      if ( *(_DWORD *)(v58 + 512) != 0 )
      {
        curlx_tvnow(&v67, v7, v10, p_fds);
        if ( curlx_tvdiff(v67.tv_sec, v67.tv_usec, *(_DWORD *)(a1 + 312), *(_DWORD *)(a1 + 316)) >= *(_DWORD *)(v58 + 512) )
          Curl_failf(v58, "Time-out");
      }
      if ( Curl_pgrsUpdate((int *)a1, v7, v10) != 0 )
      {
        v55 = 42;
LABEL_173:
        Curl_setup_transfer(a1, -1, -1, -1, 0, 0, -1, 0);
        return (const char **)v55;
      }
      if ( !v8 )
        goto LABEL_173;
    }
  }
  return result;
}


//======================================================================
// sub_24B180
// address: 0x0024B180   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_24B180(_BYTE *a1)
{
  int v1; // r1
  int v2; // r3
  int v3; // r2

  v1 = 1;
  v2 = 0;
  while ( 1 )
  {
    v3 = (unsigned __int8)*a1;
    if ( *a1 == 0 )
      return v2;
    if ( v3 == 32 )
    {
      if ( v1 != 0 )
      {
        v2 += 3;
        goto LABEL_8;
      }
    }
    else
    {
      v1 &= -(v3 != 63);
    }
    ++v2;
LABEL_8:
    ++a1;
  }
}


//======================================================================
// sub_24B1AE
// address: 0x0024B1AE   size: 0x44 (68 bytes)
//======================================================================
void __fastcall __spoils<R2,R3> sub_24B1AE(_BYTE *a1, _BYTE *a2)
{
  int v2; // r2
  int v3; // r3

  v2 = 1;
  while ( 1 )
  {
    v3 = (unsigned __int8)*a2;
    if ( *a2 == 0 )
      break;
    if ( v3 == 32 )
    {
      if ( v2 != 0 )
      {
        *a1 = 37;
        a1[1] = 50;
        a1[2] = 48;
        a1 += 3;
        goto LABEL_9;
      }
      *a1 = 43;
    }
    else
    {
      v2 &= -(v3 != 63);
      *a1 = v3;
    }
    ++a1;
LABEL_9:
    ++a2;
  }
  *a1 = v3;
}


//======================================================================
// sub_24BFE6
// address: 0x0024BFE6   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_24BFE6(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_24C7FC
// address: 0x0024C7FC   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_24C7FC(int a1, int *a2, int a3)
{
  int v5; // r0
  int v6; // r3

  if ( a1 == 0 )
    return 43;
  if ( *(_BYTE *)(a1 + 801) == 0 )
    Curl_failf(a1, "CONNECT_ONLY is required!");
  v5 = Curl_getconnectinfo(a1, a3);
  v6 = 0;
  *a2 = v5;
  if ( v5 == -1 )
    Curl_failf(a1, "Failed to get recent socket");
  return v6;
}


//======================================================================
// sub_24CE64
// address: 0x0024CE64   size: 0x5DA (1498 bytes)
//======================================================================
int __fastcall sub_24CE64(unsigned __int8 *a1, _BYTE *a2)
{
  int v4; // r3
  _BYTE *v6; // r6
  int v7; // r2
  unsigned int v8; // r3
  int v9; // r6
  int v10; // r6
  int v11; // r3
  int v12; // r2
  int v13; // r2
  _BYTE *v14; // r3
  _BYTE *v15; // r3
  _BYTE *v16; // r3
  unsigned int v17; // r6
  int v18; // r3
  unsigned int i; // r1
  int v20; // r3
  int v21; // r2
  int v22; // r3
  int v23; // r2
  unsigned int v24; // [sp+4h] [bp-140h]
  int v25; // [sp+8h] [bp-13Ch]
  int v26; // [sp+Ch] [bp-138h]
  int v27; // [sp+10h] [bp-134h]
  int v28; // [sp+14h] [bp-130h]
  unsigned __int8 *v29; // [sp+18h] [bp-12Ch]
  char v30[12]; // [sp+20h] [bp-124h] BYREF
  _BYTE v31[280]; // [sp+2Ch] [bp-118h] BYREF

  j_memset(v31, 0, 0x10Fu);
  v26 = 0;
LABEL_2:
  if ( v26 != 0 )
  {
    v20 = *a1;
    if ( (*(_BYTE *)(ctype_ + v20 + 1) & 0x97) == 0 )
      return 2;
    ++a1;
    v6 = a2 + 1;
    if ( (unsigned __int8)*a2 == v20 )
    {
      v26 = 0;
      goto LABEL_13;
    }
    return 1;
  }
  v4 = *a1;
  if ( v4 == 42 )
  {
    while ( a1[1] == 42 )
      ++a1;
    if ( *a2 == 0 && a1[1] == 0 || sub_24CE64(a1 + 1, a2) == 0 )
      return 0;
    if ( *a2 != 0 )
    {
      v6 = a2 + 1;
      goto LABEL_13;
    }
    return 1;
  }
  if ( v4 == 63 )
  {
    if ( (*(_BYTE *)(ctype_ + (unsigned __int8)*a2 + 1) & 0x97) != 0 )
    {
      v6 = a2 + 1;
      ++a1;
      goto LABEL_13;
    }
    if ( *a2 != 0 )
      return 2;
    return 1;
  }
  if ( *a1 == 0 )
    return *a2 != 0;
  ++a1;
  if ( v4 == 92 )
  {
    v6 = a2;
    v26 = 1;
    goto LABEL_13;
  }
  if ( v4 != 91 )
  {
    v6 = a2 + 1;
    if ( (unsigned __int8)*a2 == v4 )
      goto LABEL_13;
    return 1;
  }
  v7 = 0;
  v28 = 0;
  v24 = 0;
  while ( 2 )
  {
    v25 = v7;
LABEL_26:
    v8 = *a1;
    switch ( v25 )
    {
      case 0:
        v27 = ctype_;
        v9 = *(_BYTE *)(ctype_ + v8 + 1) & 7;
        if ( (*(_BYTE *)(ctype_ + v8 + 1) & 7) != 0 )
        {
          v7 = 1;
          v31[v8] = 1;
          ++a1;
          v24 = v8;
          continue;
        }
        if ( v8 == 93 )
        {
          if ( v7 != 0 )
            goto LABEL_130;
          v7 = 1;
          v31[93] = 1;
          ++a1;
          v10 = 3;
LABEL_32:
          v25 = v10;
          goto LABEL_26;
        }
        if ( v8 != 91 )
        {
          switch ( v8 )
          {
            case '?':
            case '*':
LABEL_83:
              v16 = &v31[v8];
              v7 = 1;
LABEL_84:
              *v16 = 1;
              ++a1;
              break;
            case '^':
            case '!':
              if ( v7 != 0 )
              {
                v31[v8] = 1;
              }
              else if ( v31[256] != 0 )
              {
                v31[v8] = 1;
                v7 = 1;
              }
              else
              {
                v31[256] = 1;
              }
              ++a1;
              break;
            case '\\':
              v17 = a1[1];
              v24 = v17;
              if ( (*(_BYTE *)(ctype_ + v17 + 1) & 0x97) == 0 )
                return 2;
              v7 = 1;
              v31[v17] = 1;
              a1 += 2;
              continue;
            default:
              if ( *a1 == 0 )
                return 2;
              goto LABEL_83;
          }
          goto LABEL_26;
        }
        if ( a1[1] != 58 )
        {
          v7 = 1;
          v16 = &v31[91];
          goto LABEL_84;
        }
        v29 = a1 + 2;
        j_memset(v30, 0, 0xAu);
        a1 += 2;
        v11 = 0;
        while ( 2 )
        {
          ++a1;
          v12 = v29[v11];
          if ( v11 == 10 )
            return 2;
          if ( v9 == 1 )
          {
            if ( v12 != 93 )
              return 2;
LABEL_45:
            v13 = v9;
          }
          else
          {
            if ( (*(_BYTE *)(v27 + v12 + 1) & 3) != 0 && (*(_BYTE *)(v27 + v12 + 1) & 2) != 0 )
            {
              v30[v11] = v12;
              v9 = 0;
              goto LABEL_45;
            }
            if ( v12 != 58 )
              return 2;
            v13 = 0;
            v9 = 1;
          }
          ++v11;
          if ( v13 == 0 )
            continue;
          break;
        }
        if ( j_strcmp(v30, "digit") == 0 )
        {
          v14 = &v31[3];
          goto LABEL_65;
        }
        if ( j_strcmp(v30, "alnum") == 0 )
        {
          v14 = &v31[2];
          goto LABEL_65;
        }
        if ( j_strcmp(v30, "alpha") == 0 )
        {
          v15 = &v31[260];
LABEL_66:
          *v15 = 1;
          v7 = 1;
          goto LABEL_26;
        }
        if ( j_strcmp(v30, "xdigit") == 0 )
        {
          v14 = &v31[4];
LABEL_65:
          v15 = v14 + 255;
          goto LABEL_66;
        }
        if ( j_strcmp(v30, "print") == 0 )
        {
          v14 = &v31[6];
          goto LABEL_65;
        }
        if ( j_strcmp(v30, "graph") == 0 )
        {
          v15 = &v31[264];
          goto LABEL_66;
        }
        if ( j_strcmp(v30, "space") == 0 )
        {
          v14 = &v31[10];
          goto LABEL_65;
        }
        if ( j_strcmp(v30, "blank") == 0 )
        {
          v14 = &v31[7];
          goto LABEL_65;
        }
        if ( j_strcmp(v30, "upper") == 0 )
        {
          v14 = &v31[11];
          goto LABEL_65;
        }
        if ( j_strcmp(v30, "lower") == 0 )
        {
          v14 = &v31[8];
          goto LABEL_65;
        }
        return 2;
      case 1:
        if ( v8 == 45 )
        {
          v31[45] = 1;
          ++a1;
          v28 = 45;
          v10 = 2;
          goto LABEL_32;
        }
        if ( v8 == 91 )
        {
LABEL_88:
          v10 = 0;
          goto LABEL_32;
        }
        if ( *(unsigned __int8 *)(ctype_ + v8 + 1) << 29 != 0 )
        {
          v31[v8] = 1;
          ++a1;
          goto LABEL_26;
        }
        if ( v8 == 92 )
        {
          v18 = a1[1];
          if ( (*(_BYTE *)(ctype_ + v18 + 1) & 0x97) == 0 )
            return 2;
          v31[v18] = 1;
          a1 += 2;
          goto LABEL_26;
        }
        if ( v8 != 93 )
          return 2;
LABEL_130:
        v21 = (unsigned __int8)*a2;
        v22 = 1;
        if ( v31[v21] == 0 )
        {
          if ( v31[257] != 0 )
          {
            v23 = *(unsigned __int8 *)(ctype_ + v21 + 1);
            v22 = 7;
            goto LABEL_135;
          }
          if ( v31[260] != 0 )
          {
            v23 = *(unsigned __int8 *)(ctype_ + v21 + 1);
            v22 = 3;
            goto LABEL_135;
          }
          if ( v31[258] != 0 )
          {
            v22 = v31[260] + ((unsigned int)(v21 - 48) <= 9) + v31[260];
            goto LABEL_154;
          }
          if ( v31[259] != 0 )
          {
            v23 = *(unsigned __int8 *)(ctype_ + v21 + 1);
            v22 = 68;
LABEL_135:
            v22 &= v23;
            goto LABEL_154;
          }
          if ( v31[261] != 0 )
          {
            v22 = *(_BYTE *)(ctype_ + v21 + 1) & 0x97;
          }
          else
          {
            if ( v31[265] != 0 )
            {
              v23 = *(unsigned __int8 *)(ctype_ + v21 + 1);
              v22 = 8;
              goto LABEL_135;
            }
            if ( v31[266] != 0 )
            {
              v23 = *(unsigned __int8 *)(ctype_ + v21 + 1);
              goto LABEL_135;
            }
            if ( v31[263] != 0 )
            {
              v23 = *(unsigned __int8 *)(ctype_ + v21 + 1);
              v22 = 2;
              goto LABEL_135;
            }
            if ( v31[262] != 0 )
            {
              v22 = v21 == 32 || v21 == 9;
            }
            else
            {
              v22 = 0;
              if ( v31[264] != 0 )
              {
                v23 = *(unsigned __int8 *)(ctype_ + v21 + 1);
                v22 = 23;
                goto LABEL_135;
              }
            }
          }
        }
LABEL_154:
        if ( v31[256] != 0 )
          v22 = v22 == 0;
        if ( v22 == 0 )
          return 1;
        ++a1;
        v6 = a2 + 1;
        j_memset(v31, 0, 0x10Fu);
LABEL_13:
        a2 = v6;
        goto LABEL_2;
      case 2:
        if ( v8 == 92 )
        {
          v8 = a1[1];
          if ( (*(_BYTE *)(ctype_ + v8 + 1) & 0x97) == 0 )
            return 2;
          if ( v8 == 93 )
          {
            ++a1;
            goto LABEL_130;
          }
          if ( v8 == 92 )
          {
            v8 = a1[2];
            if ( (*(_BYTE *)(ctype_ + v8 + 1) & 0x97) == 0 )
              return 2;
            v31[v8] = 1;
            a1 += 3;
            v25 = 0;
          }
          else
          {
            ++a1;
          }
        }
        else if ( v8 == 93 )
        {
          goto LABEL_130;
        }
        if ( v8 < v24 )
          goto LABEL_26;
        if ( ((*(_BYTE *)(ctype_ + v8 + 1) & 2) == 0 || (*(_BYTE *)(v24 + ctype_ + 1) & 2) == 0)
          && (v8 - 48 > 9 || v24 - 48 > 9)
          && ((*(_BYTE *)(ctype_ + v8 + 1) & 1) == 0 || (*(_BYTE *)(ctype_ + v24 + 1) & 1) == 0) )
        {
          return 2;
        }
        v31[v28] = 0;
        for ( i = (unsigned __int8)(v24 + 1); ; i = (unsigned __int8)(i + 1) )
        {
          v24 = (unsigned __int8)(i + 1);
          if ( i > v8 )
            break;
          v31[v24 - 1] = 1;
        }
        ++a1;
        goto LABEL_88;
      case 3:
        if ( v8 == 91 )
        {
          v31[91] = 1;
          ++a1;
          v10 = 4;
          goto LABEL_32;
        }
        if ( v8 == 93 )
          goto LABEL_130;
        if ( *a1 == 0 || (*(_BYTE *)(ctype_ + v8 + 1) & 0x97) == 0 )
          return 2;
LABEL_122:
        v31[v8] = 1;
        ++a1;
        goto LABEL_88;
      case 4:
        if ( v8 != 93 )
          goto LABEL_122;
        goto LABEL_130;
    }
  }
}


//======================================================================
// sub_24D4A8
// address: 0x0024D4A8   size: 0x1E (30 bytes)
//======================================================================
void __fastcall sub_24D4A8(int a1, int a2)
{
  int *v3; // r3
  int v4; // r4
  _DWORD *v5; // r1

  v3 = *(int **)(a1 + 34448);
  v4 = *v3;
  v5 = *(_DWORD **)(*v3 + 16);
  if ( v5 != nullptr )
    Curl_fileinfo_dtor(0, v5);
  *(_DWORD *)(v4 + 12) = a2;
  *(_DWORD *)(v4 + 16) = 0;
}


//======================================================================
// sub_24D4CC
// address: 0x0024D4CC   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_24D4CC(int *a1, _DWORD *a2)
{
  int v3; // r5
  int v4; // r6
  _DWORD *v5; // r1
  int v6; // r3
  int v7; // r12
  int v8; // r12
  int v9; // r12
  int v10; // r7
  int v11; // r1
  int (__fastcall *v12)(int, unsigned __int8 *, _BYTE *); // r3
  const char *v13; // r0
  int v15; // [sp+0h] [bp-Ch]
  int v16; // [sp+0h] [bp-Ch]
  int v17; // [sp+0h] [bp-Ch]
  int v18; // [sp+4h] [bp-8h]

  v3 = *(_DWORD *)(*a1 + 34448);
  v18 = *a1;
  v4 = *(_DWORD *)(*a1 + 34444);
  v5 = *(_DWORD **)v3;
  v6 = a2[15];
  *a2 = v6 + *(_DWORD *)(*(_DWORD *)v3 + 28);
  v7 = v5[9];
  v15 = 0;
  if ( v7 != 0 )
    v15 = v6 + v7;
  a2[12] = v15;
  v8 = v5[11];
  v16 = 0;
  if ( v8 != 0 )
    v16 = v6 + v8;
  a2[10] = v16;
  v9 = v5[12];
  v17 = 0;
  if ( v9 != 0 )
    v17 = v6 + v9;
  a2[13] = v17;
  a2[9] = v5[10] + v6;
  v10 = v5[8];
  v11 = 0;
  if ( v10 != 0 )
    v11 = v6 + v10;
  a2[11] = v11;
  v12 = *(int (__fastcall **)(int, unsigned __int8 *, _BYTE *))(*a1 + 1032);
  if ( v12 == nullptr )
    v12 = Curl_fnmatch;
  if ( ((int (__fastcall *)(_DWORD, _DWORD))v12)(*(_DWORD *)(*a1 + 1036), *(_DWORD *)(v18 + 34440)) != 0
    || a2[1] == 2 && (v13 = (const char *)a2[13]) != nullptr && j_strstr(v13, " -> ") != nullptr )
  {
    Curl_fileinfo_dtor(0, a2);
  }
  else if ( Curl_llist_insert_next(v4, *(_DWORD *)(v4 + 4), a2) == 0 )
  {
    Curl_fileinfo_dtor(0, a2);
    *(_DWORD *)(*(_DWORD *)v3 + 16) = 0;
    return 27;
  }
  *(_DWORD *)(*(_DWORD *)v3 + 16) = 0;
  return 0;
}


//======================================================================
// sub_24D63C
// address: 0x0024D63C   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_24D63C(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char *a12)
{
  int v12; // r4
  unsigned int v13; // r5
  int *v14; // r7
  _DWORD *v15; // r6
  int v16; // r2
  int v17; // r3

  if ( v13 >= a7 )
    sub_24DE6C(a7);
  if ( *(_DWORD *)(v12 + 16) != 0 )
    JUMPOUT(0x24D696);
  v15 = Curl_fileinfo_alloc();
  *(_DWORD *)(v12 + 16) = v15;
  if ( v15 == nullptr )
  {
    *(_DWORD *)(v12 + 12) = 27;
    JUMPOUT(0x24D686);
  }
  v15[15] = (**(int (__fastcall ***)(int))(a8 - 3468))(160);
  v17 = *(_DWORD *)(v12 + 16);
  if ( *(_DWORD *)(v17 + 60) != 0 )
    JUMPOUT(0x24D68C);
  return sub_24D682(*v14, 27, v16, v17, a5, 0, a7, a8, v13, a10, a11, a12);
}


//======================================================================
// sub_24D682
// address: 0x0024D682   size: 0x7EA (2026 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0024D682  BL      sub_24D4A8
//   0024D686  LDR     R0, [SP,#arg_8]
//   0024D688  BL      sub_24DE6C
//   0024D68C  MOVS    R2, #0xA0
//   0024D68E  STR     R2, [R3,#0x40]
//   0024D690  LDR     R2, [SP,#arg_4]
//   0024D692  STR     R2, [R4,#0x18]
//   0024D694  STR     R2, [R4,#0x14]
//   0024D696  LDR     R6, [R4,#0x10]
//   0024D698  LDR     R3, [R6,#0x44]
//   0024D69A  LDR     R0, [R6,#0x3C]
//   0024D69C  ADDS    R2, R3, #1
//   0024D69E  STR     R2, [R6,#0x44]
//   0024D6A0  STRB    R5, [R0,R3]
//   0024D6A2  LDR     R1, [R6,#0x40]
//   0024D6A4  LDR     R2, [R6,#0x44]
//   0024D6A6  SUBS    R3, R1, #1
//   0024D6A8  CMP     R2, R3
//   0024D6AA  BCC     loc_24D6DC
//   0024D6AC  LDR     R0, [SP,#arg_C]
//   0024D6AE  LDR     R3, =0xFFFFF288
//   0024D6B0  ADDS    R1, #0xA0; byte_count
//   0024D6B2  LDR     R3, [R0,R3]
//   0024D6B4  LDR     R0, [R6,#0x3C]; p
//   0024D6B6  LDR     R3, [R3]
//   0024D6B8  BLX     R3
//   0024D6BA  STR     R0, [SP,#arg_4]
//   0024D6BC  CMP     R0, #0
//   0024D6BE  BEQ     loc_24D6CA
//   0024D6C0  LDR     R3, [R6,#0x40]
//   0024D6C2  STR     R0, [R6,#0x3C]
//   0024D6C4  ADDS    R3, #0xA0
//   0024D6C6  STR     R3, [R6,#0x40]
//   0024D6C8  B       loc_24D6DC
//   0024D6CA  LDR     R1, [R4,#0x10]
//   0024D6CC  LDR     R0, [SP,#arg_4]
//   0024D6CE  BL      Curl_fileinfo_dtor
//   0024D6D2  LDR     R5, [SP,#arg_4]
//   0024D6D4  MOVS    R1, #0x1B
//   0024D6D6  STR     R1, [R4,#0xC]
//   0024D6D8  STR     R5, [R4,#0x10]
//   0024D6DA  B       loc_24DE4A
//   0024D6DC  LDR     R3, [R4]
//   0024D6DE  CMP     R3, #1
//   0024D6E0  BEQ     loc_24D6EA
//   0024D6E2  CMP     R3, #2
//   0024D6E4  BNE     loc_24D6E8
//   0024D6E6  B       loc_24DCC2
//   0024D6E8  B       loc_24DE5E
//   0024D6EA  LDR     R0, [R4,#4]
//   0024D6EC  CMP     R0, #9; switch 10 cases
//   0024D6EE  BLS     loc_24D6F2
//   0024D6F0  B       def_24D6F2; jumptable 0024D6F2 default case
//   0024D6F2  BL      __gnu_thumb1_case_uhi; switch jump
//   0024D6F6  DCW 0xA; jump table for switch statement
//   0024D6F8  DCW 0x4A
//   0024D6FA  DCW 0x75
//   0024D6FC  DCW 0x117
//   0024D6FE  DCW 0x145
//   0024D700  DCW 0x15D
//   0024D702  DCW 0x178
//   0024D704  DCW 0x1B7
//   0024D706  DCW 0x230
//   0024D708  DCW 0x262
//   0024D70A  LDR     R3, [R4,#8]; jumptable 0024D6F2 case 0
//   0024D70C  CMP     R3, #0
//   0024D70E  BEQ     loc_24D716
//   0024D710  CMP     R3, #1
//   0024D712  BEQ     loc_24D730
//   0024D714  B       def_24D6F2; jumptable 0024D6F2 default case
//   0024D716  MOVS    R2, #1
//   0024D718  CMP     R5, #0x74 ; 't'
//   0024D71A  BNE     loc_24D724
//   0024D71C  LDR     R3, [R4,#0x14]
//   0024D71E  STR     R2, [R4,#8]
//   0024D720  ADDS    R3, R3, R2
//   0024D722  B       loc_24DC72
//   0024D724  LDR     R5, [SP,#arg_10]
//   0024D726  STR     R2, [R4,#4]
//   0024D728  STR     R3, [R6,#0x44]
//   0024D72A  SUBS    R5, #1
//   0024D72C  STR     R5, [SP,#arg_10]
//   0024D72E  B       def_24D6F2; jumptable 0024D6F2 default case
//   0024D730  LDR     R3, [R4,#0x14]
//   0024D732  ADDS    R2, R3, #1
//   0024D734  STR     R2, [R4,#0x14]
//   0024D736  CMP     R5, #0xD
//   0024D738  BNE     loc_24D742
//   0024D73A  STR     R3, [R4,#0x14]
//   0024D73C  LDR     R3, [R6,#0x44]
//   0024D73E  SUBS    R3, #1
//   0024D740  B       loc_24D786
//   0024D742  CMP     R5, #0xA
//   0024D744  BEQ     loc_24D748
//   0024D746  B       def_24D6F2; jumptable 0024D6F2 default case
//   0024D748  LDR     R0, [R6,#0x3C]
//   0024D74A  MOVS    R2, #0
//   0024D74C  STRB    R2, [R0,R3]
//   0024D74E  LDR     R5, [R6,#0x3C]
//   0024D750  LDR     R0, =(aTotal - 0x24D75A); "total "
//   0024D752  MOVS    R2, #6; size_t
//   0024D754  MOVS    R1, R5; char *
//   0024D756  ADD     R0, PC; "total "
//   0024D758  BL      j_strncmp
//   0024D75C  CMP     R0, #0
//   0024D75E  BEQ     loc_24D762
//   0024D760  B       loc_24DE56
//   0024D762  LDR     R3, =0xFFFFEFA0
//   0024D764  LDR     R1, [SP,#arg_C]
//   0024D766  ADDS    R5, #6
//   0024D768  MOVS    R2, #8
//   0024D76A  LDR     R3, [R1,R3]
//   0024D76C  LDR     R0, [R3]
//   0024D76E  LDRB    R3, [R5]
//   0024D770  ADDS    R1, R0, R3
//   0024D772  LDRB    R1, [R1,#1]
//   0024D774  TST     R1, R2
//   0024D776  BEQ     loc_24D77C
//   0024D778  ADDS    R5, #1
//   0024D77A  B       loc_24D76E
//   0024D77C  CMP     R3, #0
//   0024D77E  BEQ     loc_24D782
//   0024D780  B       loc_24DE56
//   0024D782  MOVS    R2, #1
//   0024D784  STR     R2, [R4,#4]
//   0024D786  STR     R3, [R6,#0x44]
//   0024D788  B       def_24D6F2; jumptable 0024D6F2 default case
//   0024D78A  CMP     R5, #0x63 ; 'c'; jumptable 0024D6F2 case 1
//   0024D78C  BEQ     loc_24D7C8
//   0024D78E  BHI     loc_24D7A2
//   0024D790  CMP     R5, #0x44 ; 'D'
//   0024D792  BEQ     loc_24D7D0
//   0024D794  CMP     R5, #0x62 ; 'b'
//   0024D796  BEQ     loc_24D7CC
//   0024D798  CMP     R5, #0x2D ; '-'
//   0024D79A  BEQ     loc_24D79E
//   0024D79C  B       loc_24DE56
//   0024D79E  MOVS    R3, #0
//   0024D7A0  B       loc_24D7D2
//   0024D7A2  CMP     R5, #0x6C ; 'l'
//   0024D7A4  BEQ     loc_24D7C0
//   0024D7A6  BHI     loc_24D7B2
//   0024D7A8  CMP     R5, #0x64 ; 'd'
//   0024D7AA  BEQ     loc_24D7AE
//   0024D7AC  B       loc_24DE56
//   0024D7AE  MOVS    R3, #1
//   0024D7B0  B       loc_24D7D2
//   0024D7B2  CMP     R5, #0x70 ; 'p'
//   0024D7B4  BEQ     loc_24D7C4
//   0024D7B6  CMP     R5, #0x73 ; 's'
//   0024D7B8  BEQ     loc_24D7BC
//   0024D7BA  B       loc_24DE56
//   0024D7BC  MOVS    R3, #6
//   0024D7BE  B       loc_24D7D2
//   0024D7C0  MOVS    R3, #2
//   0024D7C2  B       loc_24D7D2
//   0024D7C4  MOVS    R3, #5
//   0024D7C6  B       loc_24D7D2
//   0024D7C8  MOVS    R3, #4
//   0024D7CA  B       loc_24D7D2
//   0024D7CC  MOVS    R3, #3
//   0024D7CE  B       loc_24D7D2
//   0024D7D0  MOVS    R3, #7
//   0024D7D2  STR     R3, [R6,#4]
//   0024D7D4  MOVS    R3, #2
//   0024D7D6  STR     R3, [R4,#4]
//   0024D7D8  MOVS    R3, #0
//   0024D7DA  STR     R3, [R4,#0x14]
//   0024D7DC  MOVS    R3, #1
//   0024D7DE  B       loc_24DC4A
//   0024D7E0  LDR     R3, [R4,#0x14]; jumptable 0024D6F2 case 2
//   0024D7E2  ADDS    R3, #1
//   0024D7E4  STR     R3, [R4,#0x14]
//   0024D7E6  CMP     R3, #9
//   0024D7E8  BHI     loc_24D7F0
//   0024D7EA  LDR     R0, =(aRwxTtss - 0x24D7F0); "rwx-tTsS"
//   0024D7EC  ADD     R0, PC; "rwx-tTsS"
//   0024D7EE  B       loc_24DD3E
//   0024D7F0  CMP     R3, #0xA
//   0024D7F2  BEQ     loc_24D7F6
//   0024D7F4  B       def_24D6F2; jumptable 0024D6F2 default case
//   0024D7F6  CMP     R5, #0x20 ; ' '
//   0024D7F8  BEQ     loc_24D7FC
//   0024D7FA  B       loc_24DE56
//   0024D7FC  LDR     R2, [R6,#0x3C]
//   0024D7FE  MOVS    R3, #0
//   0024D800  STRB    R3, [R2,#0xA]
//   0024D802  LDR     R3, [R4,#0x18]
//   0024D804  LDR     R1, [R6,#0x3C]
//   0024D806  MOVS    R2, #0x1000000
//   0024D80A  ADDS    R1, R1, R3
//   0024D80C  LDRB    R3, [R1]
//   0024D80E  CMP     R3, #0x72 ; 'r'
//   0024D810  BEQ     loc_24D81C
//   0024D812  SUBS    R3, #0x2D ; '-'
//   0024D814  SUBS    R0, R3, #1
//   0024D816  SBCS    R3, R0
//   0024D818  LSLS    R3, R3, #0x18
//   0024D81A  B       loc_24D820
//   0024D81C  MOVS    R3, #0x100

//======================================================================
// sub_24DE6C
// address: 0x0024DE6C   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_24DE6C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_24E1D0
// address: 0x0024E1D0   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_24E1D0(int a1, int a2)
{
  int result; // r0

  result = 0;
  if ( a1 == *(_DWORD *)a2 )
  {
    *(_BYTE *)(a2 + 4) = 1;
    return 1;
  }
  return result;
}


//======================================================================
// sub_24E1E4
// address: 0x0024E1E4   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_24E1E4(const char *a1, char *buf, _DWORD *a3)
{
  int v3; // r4
  const void *v7; // r1
  int v8; // r0

  v3 = *(unsigned __int16 *)a1;
  switch ( v3 )
  {
    case 2:
      v7 = a1 + 4;
      v8 = 2;
      break;
    case 10:
      v8 = 10;
      v7 = a1 + 8;
      break;
    case 1:
      curl_msnprintf((int)buf, 46, "%s", a1 + 2);
    default:
      goto LABEL_9;
  }
  if ( j_inet_ntop(v8, v7, buf, 0x2Eu) != nullptr )
  {
    *a3 = (unsigned __int16)((*((_WORD *)a1 + 1) << 8) | HIBYTE(*((_WORD *)a1 + 1)));
    return 1;
  }
LABEL_9:
  *buf = 0;
  *a3 = 0;
  return 0;
}


//======================================================================
// sub_24E244
// address: 0x0024E244   size: 0x3E (62 bytes)
//======================================================================
bool __fastcall sub_24E244(int a1, _DWORD *a2)
{
  _BOOL4 result; // r0
  int v4; // [sp+8h] [bp-8h] BYREF
  socklen_t v5; // [sp+Ch] [bp-4h] BYREF

  v4 = 0;
  v5 = 4;
  if ( j_getsockopt(a1, 1, 4, &v4, &v5) != 0 )
    v4 = *(_DWORD *)j___errno();
  result = true;
  if ( v4 != 0 )
    result = v4 == 106;
  if ( a2 != nullptr )
    *a2 = v4;
  return result;
}


//======================================================================
// sub_24E5BC
// address: 0x0024E5BC   size: 0x4D6 (1238 bytes)
//======================================================================
int __fastcall sub_24E5BC(int a1, int a2, int *a3)
{
  int v3; // r7
  int v5; // r5
  int v6; // r6
  const char *v7; // r0
  int v8; // r5
  _DWORD *v9; // r0
  const char *v10; // r0
  int v11; // r5
  int (__fastcall *v12)(_DWORD, int, _DWORD); // r3
  int v13; // r0
  int v14; // r3
  const char *v15; // r5
  const char *v16; // r5
  int v17; // r3
  int v18; // r6
  int *v19; // r0
  int v20; // r5
  int v21; // r3
  __suseconds_t v22; // r1
  __time_t v23; // r2
  int v24; // r3
  int *v25; // r0
  int v26; // r5
  int v27; // r3
  int v28; // r6
  const char *v29; // r0
  int v30; // r1
  int v32; // r5
  int v33; // [sp+8h] [bp-30Ch]
  int af; // [sp+Ch] [bp-308h]
  int afa; // [sp+Ch] [bp-308h]
  unsigned int v36; // [sp+10h] [bp-304h]
  __int16 i; // [sp+10h] [bp-304h]
  int v38; // [sp+14h] [bp-300h]
  int v39; // [sp+18h] [bp-2FCh]
  int v40; // [sp+1Ch] [bp-2F8h]
  int v42; // [sp+28h] [bp-2ECh]
  struct timeval v43; // [sp+30h] [bp-2E4h] BYREF
  int fd; // [sp+3Ch] [bp-2D8h] BYREF
  int v45; // [sp+40h] [bp-2D4h] BYREF
  int v46; // [sp+44h] [bp-2D0h] BYREF
  socklen_t v47; // [sp+48h] [bp-2CCh] BYREF
  char v48[48]; // [sp+4Ch] [bp-2C8h] BYREF
  struct sockaddr buf[8]; // [sp+7Ch] [bp-298h] BYREF
  struct sockaddr v50[8]; // [sp+FCh] [bp-218h] BYREF
  int v51[4]; // [sp+17Ch] [bp-198h] BYREF
  struct sockaddr v52; // [sp+18Ch] [bp-188h] BYREF
  char cp[4]; // [sp+20Ch] [bp-108h]
  _BYTE v54[252]; // [sp+210h] [bp-104h] BYREF

  v3 = *(_DWORD *)a1;
  *a3 = -1;
  v5 = 0;
  if ( Curl_socket((int *)a1, a2, v51, &fd) != 0 )
    return v5;
  if ( sub_24E1E4((const char *)&v52, v48, &v45) == 0 )
  {
    v6 = *(_DWORD *)j___errno();
    v7 = (const char *)Curl_strerror(a1, v6);
    Curl_failf(v3, "sa_addr inet_ntop() failed with errno %d: %s", v6, v7);
  }
  Curl_infof(v3, "  Trying %s...\n", v48);
  if ( *(_BYTE *)(v3 + 798) != 0 )
  {
    v8 = *(_DWORD *)a1;
    v47 = *(unsigned __int8 *)(*(_DWORD *)a1 + 798);
    if ( j_setsockopt(fd, 6, 1, &v47, 4u) >= 0 )
    {
      Curl_infof(v8, "TCP_NODELAY set\n");
    }
    else
    {
      v9 = (_DWORD *)j___errno();
      v10 = (const char *)Curl_strerror(a1, *v9);
      Curl_infof(v8, "Could not set TCP_NODELAY: %s\n", v10);
    }
  }
  if ( *(_BYTE *)(v3 + 1044) != 0 )
  {
    v11 = fd;
    v47 = 1;
    if ( j_setsockopt(fd, 1, 9, &v47, 4u) >= 0 )
    {
      v47 = curlx_sltosi(*(_DWORD *)(v3 + 1048));
      if ( j_setsockopt(v11, 6, 4, &v47, 4u) < 0 )
        Curl_infof(v3, "Failed to set TCP_KEEPIDLE on fd %d\n", v11);
      v47 = curlx_sltosi(*(_DWORD *)(v3 + 1052));
      if ( j_setsockopt(v11, 6, 5, &v47, 4u) < 0 )
        Curl_infof(v3, "Failed to set TCP_KEEPINTVL on fd %d\n", v11);
    }
    else
    {
      Curl_infof(v3, "Failed to set SO_KEEPALIVE on fd %d\n", v11);
    }
  }
  v12 = *(int (__fastcall **)(_DWORD, int, _DWORD))(v3 + 464);
  if ( v12 == nullptr )
    goto LABEL_19;
  v13 = v12(*(_DWORD *)(v3 + 468), fd, 0);
  v38 = v13;
  if ( v13 != 2 )
  {
    if ( v13 != 0 )
    {
      Curl_closesocket(a1, fd);
      return 42;
    }
LABEL_19:
    v40 = 0;
    v38 = 0;
    goto LABEL_21;
  }
  v40 = 1;
LABEL_21:
  v33 = *(_DWORD *)a1;
  v42 = fd;
  af = v51[0];
  v36 = *(unsigned __int16 *)(*(_DWORD *)a1 + 416);
  v14 = *(_DWORD *)(*(_DWORD *)a1 + 420);
  v46 = 0;
  v39 = v14;
  v15 = *(const char **)(v33 + 844);
  *(_DWORD *)cp = 0;
  j_memset(v54, 0, sizeof(v54));
  if ( v15 != nullptr || v36 != 0 )
  {
    j_memset(buf, 0, sizeof(buf));
    if ( v15 != nullptr && j_strlen(v15) <= 0xFE )
    {
      if ( j_strncmp("if!", v15, 3u) == 0 || j_strncmp("host!", v15, 5u) != 0 )
      {
        Curl_closesocket(a1, fd);
        return 0;
      }
      v16 = v15 + 5;
      v17 = 1;
      if ( af != 2 )
      {
        if ( af != 10 )
          goto LABEL_31;
        v17 = 2;
      }
      *(_DWORD *)(a1 + 492) = v17;
LABEL_31:
      Curl_resolv(a1, v16, 0, &v46);
    }
    if ( v51[0] == 10 )
    {
      buf[0].sa_family = 10;
      *(_WORD *)buf[0].sa_data = ((_WORD)v36 << 8) | (v36 >> 8);
      v32 = 28;
    }
    else
    {
      v32 = 0;
      if ( v51[0] == 2 )
      {
        buf[0].sa_family = 2;
        v32 = 16;
        *(_WORD *)buf[0].sa_data = ((_WORD)v36 << 8) | (v36 >> 8);
      }
    }
    v18 = v39;
    for ( i = v36 + v39; ; *(_WORD *)buf[0].sa_data = ((unsigned __int16)(i - v18) >> 8) | ((i - (_WORD)v18) << 8) )
    {
      afa = (unsigned __int16)(i - v18);
      if ( j_bind(v42, buf, v32) >= 0 )
        break;
      if ( --v18 <= 0 )
      {
        v25 = (int *)j___errno();
        v26 = *v25;
        *(_DWORD *)(v33 + 34204) = *v25;
        v27 = Curl_strerror(a1, v26);
        Curl_failf(v33, "bind failed with errno %d: %s", v26, v27);
      }
      Curl_infof(v33, "Bind to local port %hu failed, trying next\n", afa);
    }
    v47 = 128;
    j_memset(v50, 0, sizeof(v50));
    if ( j_getsockname(v42, v50, &v47) < 0 )
    {
      v19 = (int *)j___errno();
      v20 = *v19;
      *(_DWORD *)(v33 + 34204) = *v19;
      v21 = Curl_strerror(a1, v20);
      Curl_failf(v33, "getsockname() failed with errno %d: %s", v20, v21);
    }
    Curl_infof(v33, "Local port: %hu\n", afa);
    *(_BYTE *)(a1 + 463) = 1;
  }
  curlx_nonblock(fd, 1);
  curlx_tvnow(&v43, v22, v23, v24);
  *(struct timeval *)(a1 + 468) = v43;
  v5 = 0;
  if ( *(int *)(a1 + 476) > 1 )
    Curl_expire(v3, *(_DWORD *)(a1 + 480));
  if ( v40 != 0 || *(_DWORD *)(a1 + 124) != 1 )
  {
    *a3 = fd;
  }
  else
  {
    v28 = j_connect(fd, &v52, v51[3]);
    if ( v28 == -1 )
      v38 = *(_DWORD *)j___errno();
    *(_BYTE *)(a1 + 447) = v51[0] == 10;
    if ( v28 != -1 || v38 == 11 || v38 == 115 )
    {
      *a3 = fd;
    }
    else
    {
      v29 = (const char *)Curl_strerror(a1, v38);
      Curl_infof(v3, "Immediate connect fail for %s: %s\n", v48, v29);
      v30 = fd;
      v5 = 7;
      *(_DWORD *)(v3 + 34204) = v38;
      Curl_closesocket(a1, v30);
    }
  }
  return v5;
}


//======================================================================
// sub_24EAAC
// address: 0x0024EAAC   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_24EAAC(int a1, int a2, int a3)
{
  int v3; // r7
  int v5; // r6
  int v6; // r3
  int v7; // r2
  int i; // r4
  int v9; // r0
  int v11; // [sp+4h] [bp-10h]
  int fd; // [sp+8h] [bp-Ch]

  v3 = a1 + 4 * a3;
  fd = *(_DWORD *)(v3 + 328);
  *(_DWORD *)(v3 + 328) = -1;
  if ( a2 != 0 )
    goto LABEL_2;
  v6 = *(_DWORD *)(v3 + 64);
  if ( v6 != 0 )
  {
    v7 = *(_DWORD *)(v6 + 4);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 64);
    v11 = 2;
    if ( *(_DWORD *)(v6 + 4) != 2 )
      goto LABEL_8;
    v7 = 10;
  }
  v11 = v7;
LABEL_8:
  for ( i = *(_DWORD *)(v6 + 28); i != 0; i = *(_DWORD *)(i + 28) )
  {
    if ( *(_DWORD *)(i + 4) == v11 )
    {
      v9 = sub_24E5BC(a1, i, (int *)(a1 + 4 * (a3 + 82)));
      *(_DWORD *)(v3 + 64) = i;
      v5 = v9;
      if ( v9 != 7 )
        goto LABEL_13;
    }
  }
LABEL_2:
  v5 = 7;
LABEL_13:
  if ( fd != -1 )
    Curl_closesocket(a1, fd);
  return v5;
}


//======================================================================
// sub_24EFDC
// address: 0x0024EFDC   size: 0x34 (52 bytes)
//======================================================================
void __fastcall sub_24EFDC(int a1, _DWORD *a2)
{
  void *v3; // r0

  v3 = (void *)a2[1];
  if ( v3 != nullptr )
  {
    Curl_cfree(v3);
    a2[1] = 0;
  }
  if ( *a2 != 0 )
  {
    (*(void (**)(void))(a1 + 12))();
    *a2 = 0;
  }
  a2[2] = 0;
  Curl_cfree(a2);
}


//======================================================================
// sub_24F3A4
// address: 0x0024F3A4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall sub_24F3A4(void *a1)
{
  if ( a1 != nullptr )
    Curl_cfree(a1);
}


//======================================================================
// sub_24F3BC
// address: 0x0024F3BC   size: 0xC (12 bytes)
//======================================================================
bool __fastcall sub_24F3BC(_DWORD *a1, int a2, _DWORD *a3)
{
  return *a1 == *a3;
}


//======================================================================
// sub_24F3C8
// address: 0x0024F3C8   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_24F3C8(_DWORD *a1, int a2, int a3)
{
  return *a1 % a3;
}


//======================================================================
// sub_24F3D8
// address: 0x0024F3D8   size: 0x10 (16 bytes)
//======================================================================
void __fastcall sub_24F3D8(int a1, void *a2)
{
  Curl_cfree(a2);
}


//======================================================================
// sub_24F3EC
// address: 0x0024F3EC   size: 0x20 (32 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> sub_24F3EC(int *a1, int a2, int a3)
{
  _DWORD v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[1] = a3;
  if ( Curl_hash_pick(a1, (int)v4, 4) != 0 )
    Curl_hash_delete((int)a1, (int)v4, 4);
}


//======================================================================
// sub_24F40C
// address: 0x0024F40C   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_24F40C(int *a1, _QWORD *a2)
{
  int *v4; // r0
  int v5; // r3
  int *v6; // r4
  int v7; // r7
  int i; // r5
  _DWORD *inserted; // r0

  v4 = (int *)Curl_cmalloc(8u);
  v5 = 3;
  v6 = v4;
  if ( v4 != nullptr )
  {
    *(_QWORD *)v4 = *a2;
    v7 = 0;
    if ( Curl_llist_count((int)a1) != 0 )
    {
      for ( i = *a1;
            i != 0 && curlx_tvdiff(**(_DWORD **)i, *(_DWORD *)(*(_DWORD *)i + 4), *v6, v6[1]) <= 0;
            i = *(_DWORD *)(i + 8) )
      {
        v7 = i;
      }
    }
    inserted = Curl_llist_insert_next(a1, v7, (int)v6);
    v5 = 0;
    if ( inserted == nullptr )
    {
      Curl_cfree(v6);
      return 3;
    }
  }
  return v5;
}


//======================================================================
// sub_24F480
// address: 0x0024F480   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_24F480(int result)
{
  --*(_DWORD *)(*(_DWORD *)(result + 64) + 16);
  return result;
}


//======================================================================
// sub_24F48A
// address: 0x0024F48A   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_24F48A(int result, int a2)
{
  if ( *(_DWORD *)(result + 12) != a2 )
  {
    *(_DWORD *)(result + 12) = a2;
    if ( a2 == 16 )
      return sub_24F480(result);
  }
  return result;
}


//======================================================================
// sub_24F4A0
// address: 0x0024F4A0   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_24F4A0(int *a1, int *a2, __time_t a3, int a4)
{
  __time_t tv_sec; // r6
  int result; // r0
  __time_t v8; // r2
  int v9; // r3
  __suseconds_t tv_usec; // [sp+4h] [bp-10h]
  struct timeval v11; // [sp+8h] [bp-Ch] BYREF

  curlx_tvnow(&v11, (__suseconds_t)a2, a3, a4);
  tv_usec = v11.tv_usec;
  tv_sec = v11.tv_sec;
  result = Curl_splay(0, 0, *a1);
  *a1 = result;
  v8 = *(_DWORD *)(result + 12);
  if ( v8 < tv_sec || v8 <= tv_sec && *(_DWORD *)(result + 16) <= tv_usec )
  {
    v9 = 0;
  }
  else
  {
    result = curlx_tvdiff(*(_DWORD *)(result + 12), *(_DWORD *)(result + 16), v11.tv_sec, v11.tv_usec);
    if ( result != 0 )
    {
      *a2 = result;
      return result;
    }
    v9 = 1;
  }
  *a2 = v9;
  return result;
}


//======================================================================
// sub_24F4FC
// address: 0x0024F4FC   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_24F4FC(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int ***v6; // r6
  int **i; // r5
  int **v8; // r5
  int **v10; // [sp+0h] [bp-14h]
  _DWORD *v11; // [sp+4h] [bp-10h]

  v6 = (int ***)a4[8590];
  v11 = a4 + 8582;
  for ( i = *v6; i != nullptr; i = v10 )
  {
    v10 = (int **)i[2];
    if ( curlx_tvdiff(**i, (*i)[1], a1, a2) > 0 )
      break;
    Curl_llist_remove((int)v6, i, 0);
  }
  v8 = *v6;
  if ( *v6 != nullptr )
  {
    *(_QWORD *)v11 = *(_QWORD *)*v8;
    Curl_llist_remove((int)v6, v8, 0);
    *a3 = Curl_splayinsert(*v11, v11[1], *a3, a4 + 8584);
  }
  else
  {
    a4[8582] = 0;
    a4[8583] = 0;
  }
  return 0;
}


//======================================================================
// sub_24F580
// address: 0x0024F580   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall sub_24F580(int a1, _DWORD *a2)
{
  int v3; // r2
  int result; // r0
  _DWORD *v5; // r2
  _DWORD *v6; // r4
  int v7; // r2
  int v8; // r2
  int v9; // r5
  int (*v10)(void); // r3

  v3 = *(unsigned __int8 *)(a1 + 34377);
  result = 0;
  if ( v3 == 0 )
  {
    v5 = *(_DWORD **)(a1 + 8);
    if ( v5 != nullptr )
    {
      if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 3) <= 0xC )
        *v5 = a1;
      switch ( *(_DWORD *)(a1 + 12) )
      {
        case 4:
        case 5:
          v6 = *(_DWORD **)(a1 + 8);
          v7 = v6[82];
          if ( v7 == -1 )
          {
            result = 0;
            v8 = 0;
          }
          else
          {
            *a2 = v7;
            result = 0x10000;
            v8 = 1;
          }
          v9 = v6[83];
          if ( v9 != -1 )
          {
            a2[v8] = v9;
            result |= 1 << (v8 + 16);
          }
          if ( v6[276] == 1 )
          {
            *a2 = v6[80];
            result = 1;
          }
          break;
        case 6:
          result = Curl_protocol_getsock(*(_DWORD *)(a1 + 8));
          break;
        case 8:
        case 9:
          result = Curl_doing_getsock(*(_DWORD *)(a1 + 8));
          break;
        case 0xA:
          result = *(_DWORD *)(a1 + 8);
          if ( result != 0 )
          {
            v10 = *(int (**)(void))(*(_DWORD *)(result + 484) + 40);
            if ( v10 != nullptr )
              result = v10();
            else
              result = 0;
          }
          break;
        case 0xB:
        case 0xC:
        case 0xD:
          result = Curl_single_getsock(*(int **)(a1 + 8), a2, 5);
          break;
        default:
          result = 0;
          break;
      }
    }
  }
  return result;
}


//======================================================================
// sub_24F634
// address: 0x0024F634   size: 0x1D2 (466 bytes)
//======================================================================
void __fastcall sub_24F634(int a1, _DWORD *a2)
{
  int v4; // r6
  int *v5; // r0
  int v6; // r0
  _DWORD *v7; // r4
  int *v8; // r6
  _DWORD *v9; // r0
  void (__fastcall *v10)(_DWORD *, int, int, _DWORD, _DWORD); // r6
  int j; // r4
  int v12; // r2
  int v13; // r3
  _DWORD *v14; // r0
  int v15; // r2
  void (__fastcall *v16)(_DWORD *, int, int, _DWORD, _DWORD); // r6
  _DWORD *v17; // r1
  int v18; // r3
  _DWORD **v19; // r1
  _DWORD *v20; // r6
  _DWORD *v21; // r3
  _DWORD *v22; // r2
  int v23; // [sp+8h] [bp-34h]
  int i; // [sp+Ch] [bp-30h]
  int v25; // [sp+10h] [bp-2Ch]
  int v26; // [sp+14h] [bp-28h]
  int v27; // [sp+1Ch] [bp-20h] BYREF
  int v28; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v29[6]; // [sp+24h] [bp-18h] BYREF

  memset(v29, 255, 20);
  v26 = sub_24F580((int)a2, v29);
  for ( i = 0; i != 5; ++i )
  {
    v4 = 1 << i;
    v25 = 1 << (i + 16);
    if ( (v26 & (v25 | (1 << i))) == 0 )
      break;
    v5 = *(int **)(a1 + 40);
    v27 = v29[i];
    v6 = Curl_hash_pick(v5, (int)&v27, 4);
    v7 = (_DWORD *)v6;
    v23 = (v4 & v26) != 0;
    if ( (v26 & v25) != 0 )
      v23 = ((v4 & v26) != 0) | 2;
    if ( v6 == 0 )
    {
      v8 = *(int **)(a1 + 40);
      v28 = v27;
      v7 = (_DWORD *)Curl_hash_pick(v8, (int)&v28, 4);
      if ( v7 == nullptr )
      {
        v9 = Curl_ccalloc(1u, 0x14u);
        v7 = v9;
        if ( v9 == nullptr )
          return;
        *v9 = a2;
        v9[3] = v28;
        if ( Curl_hash_add((int)v8, &v28, 4u, (int)v9) == 0 )
        {
          Curl_cfree(v7);
          return;
        }
      }
LABEL_12:
      v10 = *(void (__fastcall **)(_DWORD *, int, int, _DWORD, _DWORD))(a1 + 24);
      if ( v10 != nullptr )
        v10(a2, v27, v23, *(_DWORD *)(a1 + 28), v7[4]);
      v7[2] = v23;
      continue;
    }
    if ( *(_DWORD *)(v6 + 8) != v23 )
      goto LABEL_12;
  }
  for ( j = 0; j < a2[13]; ++j )
  {
    v12 = a2[j + 8];
    v13 = 0;
    v27 = v12;
    while ( v13 < i )
    {
      if ( v12 == v29[v13] )
      {
        v27 = -1;
        break;
      }
      ++v13;
    }
    if ( v27 != -1 )
    {
      v14 = (_DWORD *)Curl_hash_pick(*(int **)(a1 + 40), (int)&v27, 4);
      if ( v14 != nullptr )
      {
        v15 = a2[2];
        if ( v15 == 0 )
          goto LABEL_26;
        v17 = *(_DWORD **)(v15 + 556);
        if ( v17 != nullptr && v17[3] > 1u )
        {
          v18 = 0;
          if ( (_DWORD *)*v14 == a2 )
          {
            v19 = (_DWORD **)*v17;
            v20 = *v19;
            if ( v19 != nullptr && v20 == a2 )
            {
              *v14 = *v19[2];
            }
            else
            {
              *v14 = v20;
              v18 = 0;
            }
          }
        }
        else
        {
          v18 = 1;
        }
        v15 = *(_DWORD *)(v15 + 552);
        if ( v15 == 0 || *(_DWORD *)(v15 + 12) <= 1u )
        {
          if ( v18 == 0 )
            continue;
LABEL_26:
          v16 = *(void (__fastcall **)(_DWORD *, int, int, _DWORD, _DWORD))(a1 + 24);
          if ( v16 != nullptr )
            v16(a2, v27, 4, *(_DWORD *)(a1 + 28), v14[4]);
          sub_24F3EC(*(int **)(a1 + 40), v27, v15);
          continue;
        }
        if ( (_DWORD *)*v14 == a2 )
        {
          v21 = *(_DWORD **)v15;
          v22 = **(_DWORD ***)v15;
          if ( v21 != nullptr && v22 == a2 )
            *v14 = *(_DWORD *)v21[2];
          else
            *v14 = v22;
        }
      }
    }
  }
  j_memcpy(a2 + 8, v29, 4 * i);
  a2[13] = i;
}


//======================================================================
// sub_24F810
// address: 0x0024F810   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_24F810(int *a1, int a2, int a3, int a4)
{
  __time_t v6; // r2
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // [sp+4h] [bp-4h] BYREF

  v11 = a2;
  if ( a1[22] == 0 )
    return 0;
  v6 = a1[9];
  if ( v6 != 0 )
    sub_24F4A0(a1 + 9, &v11, v6, a4);
  else
    v11 = -1;
  v7 = v11;
  v8 = a1[24];
  if ( v11 < 0 )
  {
    if ( v8 != 0 || a1[25] != 0 )
    {
      a1[24] = 0;
      a1[25] = 0;
      return ((int (__fastcall *)(int *, int, int))a1[22])(a1, -1, a1[23]);
    }
    return 0;
  }
  v9 = a1[9];
  if ( *(_DWORD *)(v9 + 12) == v8 && *(_DWORD *)(v9 + 16) == a1[25] )
    return 0;
  a1[24] = *(_DWORD *)(v9 + 12);
  v10 = a1[23];
  a1[25] = *(_DWORD *)(v9 + 16);
  return ((int (__fastcall *)(int *, int, int))a1[22])(a1, v7, v10);
}

