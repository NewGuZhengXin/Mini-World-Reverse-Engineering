// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_250000

//======================================================================
// sub_250284
// address: 0x00250284   size: 0x8D8 (2264 bytes)
//======================================================================
int __fastcall sub_250284(int a1, int a2, int a3, int a4)
{
  struct timeval *v4; // r6
  int *v6; // r0
  char *v7; // r7
  unsigned int v8; // r3
  __int64 v9; // r2
  __suseconds_t v10; // r1
  int v11; // r1
  int tv_sec; // r0
  int v13; // r2
  int v14; // r2
  int v15; // r0
  int v16; // r0
  int v18; // r0
  int v19; // r5
  int v20; // r0
  int v21; // r0
  int v22; // r3
  int v23; // r3
  int v24; // r0
  _BYTE *v25; // r2
  int v26; // r1
  int v27; // r3
  int is_connected; // r0
  int v29; // r1
  int **v30; // r0
  int v31; // r1
  int v32; // r2
  _DWORD *v33; // r1
  void *v34; // r6
  int v35; // r0
  int v36; // r3
  int v37; // r1
  int v38; // r3
  int v39; // r0
  int v40; // r0
  int (__fastcall *v41)(int *, int, int); // r0
  void *v42; // r1
  int v43; // r0
  int v44; // r0
  int v45; // r1
  int v46; // r0
  int v47; // r1
  __time_t v48; // r2
  _DWORD *v49; // r1
  __int64 v50; // r0
  __int64 v51; // r2
  int v52; // r5
  __suseconds_t v53; // r1
  int *v54; // r0
  int v55; // r3
  int v56; // r1
  __time_t v57; // r2
  int **v58; // r3
  void *v59; // r3
  int v60; // r5
  int (__fastcall *v61)(int *, int, int); // r0
  int v62; // r0
  void *v63; // r1
  int v64; // r0
  int v65; // r3
  int v66; // r1
  __time_t v67; // r2
  int (__fastcall *v68)(int *, int, int); // r0
  unsigned int v69; // r3
  int v70; // r0
  int v71; // r1
  __time_t v72; // r2
  int v74[3]; // [sp+20h] [bp+20h] BYREF
  unsigned __int8 v75; // [sp+2Fh] [bp+2Fh] BYREF
  char v76; // [sp+30h] [bp+30h] BYREF
  char v77; // [sp+31h] [bp+31h] BYREF
  unsigned __int8 v78; // [sp+32h] [bp+32h] BYREF
  char v79; // [sp+33h] [bp+33h] BYREF
  void *p[2]; // [sp+34h] [bp+34h] BYREF

  v4 = (struct timeval *)v74;
  v74[1] = a3;
  v74[0] = a2;
  v6 = &GLOBAL_OFFSET_TABLE_;
  v7 = &v77;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  if ( a4 == 0 )
    v6 = (int *)sub_250B92();
  if ( *(_DWORD *)(a4 + 34628) != -1059136595 )
    def_2503D2(v6);
  if ( *(_BYTE *)(a4 + 34377) != 0 )
  {
    Curl_infof(a4, "Pipe broke: handle 0x%p, url = %s\n", (const void *)a4, *(const char **)(a4 + 34396));
    v8 = *(_DWORD *)(a4 + 12);
    v7 = nullptr;
    v4 = nullptr;
    if ( v8 <= 0xF )
    {
      if ( v8 != 2 )
        *(_DWORD *)(a4 + 12) = 2;
      *(_DWORD *)(a4 + 16) = 0;
      v4 = (struct timeval *)-1;
    }
    *(_BYTE *)(a4 + 34377) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    sub_250B5C();
  }
  HIDWORD(v9) = *(_DWORD *)(a4 + 8);
  LODWORD(v9) = *(_DWORD *)(a4 + 12);
  if ( HIDWORD(v9) != 0 )
  {
    LODWORD(v9) = v9 - 3;
    if ( (unsigned int)v9 <= 0xC )
      *(_DWORD *)HIDWORD(v9) = a4;
  }
  else if ( (unsigned int)(v9 - 3) <= 0xB )
  {
    Curl_failf(a4, "In state %d with no easy_conn, bail out!\n", (_DWORD)v9);
  }
  v10 = *(_DWORD *)(a4 + 8);
  if ( v10 != 0 )
  {
    HIDWORD(v9) = *(_DWORD *)(a4 + 12);
    LODWORD(v9) = HIDWORD(v9) - 2;
    if ( (unsigned int)(HIDWORD(v9) - 2) <= 0xD && Curl_timeleft((_DWORD *)a4, v4, HIDWORD(v9) <= 7) < 0 )
    {
      v11 = *(_DWORD *)(a4 + 12);
      tv_sec = v4->tv_sec;
      if ( v11 == 3 )
      {
        v13 = curlx_tvdiff(tv_sec, v4->tv_usec, *(_DWORD *)(a4 + 1240), *(_DWORD *)(a4 + 1244));
        Curl_failf(a4, "Resolving timed out after %ld milliseconds", v13);
      }
      if ( v11 == 4 )
      {
        v14 = curlx_tvdiff(tv_sec, v4->tv_usec, *(_DWORD *)(a4 + 1240), *(_DWORD *)(a4 + 1244));
        Curl_failf(a4, "Connection timed out after %ld milliseconds", v14);
      }
      v15 = curlx_tvdiff(tv_sec, v4->tv_usec, *(_DWORD *)(a4 + 1240), *(_DWORD *)(a4 + 1244));
      Curl_failf(
        a4,
        "Operation timed out after %ld milliseconds with %lld out of %lld bytes received",
        v15,
        *(_QWORD *)(a4 + 112),
        *(_QWORD *)(a4 + 80));
    }
  }
  v16 = *(_DWORD *)(a4 + 12);
  HIDWORD(v9) = 0;
  switch ( v16 )
  {
    case 0:
      v18 = Curl_pretransfer(a4);
      *(_DWORD *)(a4 + 16) = v18;
      if ( v18 != 0 )
        goto LABEL_199;
      LODWORD(v9) = *(_DWORD *)(a4 + 12);
      if ( (_DWORD)v9 == 2 )
        goto LABEL_196;
      *(_DWORD *)(a4 + 12) = 2;
      v19 = 0;
      goto LABEL_201;
    case 1:
      goto LABEL_199;
    case 2:
      Curl_pgrsTime((struct timeval)((unsigned int)a4 | 0x700000000LL), v9, 0);
      v20 = ((int (__fastcall *)(int, int, char *, char *))Curl_connect)(a4, a4 + 8, &v76, v7);
      *(_DWORD *)(a4 + 16) = v20;
      if ( v20 == 89 )
      {
        if ( *(_DWORD *)(a4 + 12) != 1 )
          *(_DWORD *)(a4 + 12) = 1;
        v19 = 0;
        *(_DWORD *)(a4 + 16) = 0;
        goto LABEL_201;
      }
      if ( v20 != 0 )
        goto LABEL_199;
      v21 = Curl_add_handle_to_pipeline(a4, *(_DWORD *)(a4 + 8));
      *(_DWORD *)(a4 + 16) = v21;
      if ( v21 != 0 )
        goto LABEL_123;
      if ( v76 != 0 )
      {
        if ( *(_DWORD *)(a4 + 12) == 3 )
          goto LABEL_199;
        v22 = 3;
        goto LABEL_91;
      }
      v19 = (unsigned __int8)*v7;
      if ( *v7 != 0 )
      {
        v19 = 0;
        sub_24F48A(a4, (*(_BYTE *)(a1 + 44) == 0) + 7);
        goto LABEL_201;
      }
      LODWORD(v9) = *(_DWORD *)(*(_DWORD *)(a4 + 8) + 1104);
      HIDWORD(v9) = *(_DWORD *)(a4 + 12);
      if ( (_DWORD)v9 == 1 )
        goto LABEL_61;
      if ( HIDWORD(v9) == 4 )
        goto LABEL_196;
      v23 = 4;
      goto LABEL_75;
    case 3:
      *(_DWORD *)(a4 + 16) = 6;
      sub_24F634(a1, (_DWORD *)a4);
      v19 = *(_DWORD *)(a4 + 16) != 0;
      goto LABEL_201;
    case 4:
      is_connected = Curl_is_connected(*(_DWORD *)(a4 + 8), 0, &v75);
      HIDWORD(v9) = v75;
      *(_DWORD *)(a4 + 16) = is_connected;
      if ( HIDWORD(v9) != 0 && is_connected == 0 )
        *(_DWORD *)(a4 + 16) = Curl_protocol_connect(*(_DWORD *)(a4 + 8), v7);
      if ( *(_DWORD *)(a4 + 16) != 0 )
        goto LABEL_123;
      if ( v75 == 0 )
        goto LABEL_199;
      v19 = (unsigned __int8)*v7;
      if ( *v7 != 0 )
      {
        sub_24F48A(a4, (*(_BYTE *)(a1 + 44) == 0) + 7);
        v19 = 0;
        goto LABEL_201;
      }
      LODWORD(v9) = *(_DWORD *)(*(_DWORD *)(a4 + 8) + 1104);
      HIDWORD(v9) = *(_DWORD *)(a4 + 12);
      if ( (_DWORD)v9 == 1 )
      {
LABEL_61:
        if ( HIDWORD(v9) == 5 )
          goto LABEL_196;
        v23 = 5;
      }
      else
      {
        if ( HIDWORD(v9) == 6 )
          goto LABEL_196;
        v23 = 6;
      }
      goto LABEL_75;
    case 5:
      v24 = Curl_http_connect(*(_DWORD *)(a4 + 8), v7);
      HIDWORD(v9) = *(_DWORD *)(a4 + 8);
      *(_DWORD *)(a4 + 16) = v24;
      LODWORD(v9) = *(unsigned __int8 *)(HIDWORD(v9) + 462);
      if ( *(_BYTE *)(HIDWORD(v9) + 462) != 0 )
      {
        v25 = *(_BYTE **)(a4 + 344);
        if ( v25 != nullptr )
          *v25 = 0;
        LODWORD(v9) = 34200;
        *(_BYTE *)(a4 + 34200) = 0;
        v26 = *(_DWORD *)(a4 + 12);
        *(_DWORD *)(a4 + 16) = 0;
        if ( v26 != 2 )
        {
          v27 = 2;
LABEL_126:
          *(_DWORD *)(a4 + 12) = v27;
        }
        goto LABEL_196;
      }
      if ( v24 == 0 )
      {
        LODWORD(v9) = 1104;
        if ( *(_DWORD *)(HIDWORD(v9) + 1104) == 2 )
        {
          LODWORD(v9) = *(_DWORD *)(a4 + 12);
          if ( (_DWORD)v9 != 4 )
          {
            v22 = 4;
            goto LABEL_91;
          }
        }
      }
      goto LABEL_199;
    case 6:
      v19 = Curl_protocol_connecting(*(_DWORD *)(a4 + 8), v7);
      *(_DWORD *)(a4 + 16) = v19;
      if ( v19 != 0 )
      {
        Curl_posttransfer();
        v30 = (int **)(a4 + 8);
        v31 = *(_DWORD *)(a4 + 16);
        v32 = 1;
        goto LABEL_122;
      }
      if ( *v7 == 0 )
        goto LABEL_199;
      v29 = (*(_BYTE *)(a1 + 44) == 0) + 7;
LABEL_114:
      sub_24F48A(a4, v29);
      goto LABEL_201;
    case 7:
      HIDWORD(v9) = *(_DWORD *)(a4 + 8);
      LODWORD(v9) = 549;
      v19 = *(unsigned __int8 *)(HIDWORD(v9) + 549);
      if ( *(_BYTE *)(HIDWORD(v9) + 549) != 0 )
        goto LABEL_199;
      v33 = **(_DWORD ***)(HIDWORD(v9) + 552);
      if ( v33 == nullptr || *v33 != a4 )
        goto LABEL_199;
      *(_BYTE *)(HIDWORD(v9) + 549) = 1;
      if ( *(_DWORD *)(a4 + 12) == 8 )
        goto LABEL_196;
      v23 = 8;
      goto LABEL_75;
    case 8:
      v34 = (void *)*(unsigned __int8 *)(a4 + 801);
      if ( *(_BYTE *)(a4 + 801) != 0 )
      {
        LODWORD(v9) = 440;
        *(_BYTE *)(*(_DWORD *)(a4 + 8) + 440) = 0;
        if ( *(_DWORD *)(a4 + 12) != 15 )
        {
          LODWORD(v9) = 15;
          *(_DWORD *)(a4 + 12) = 15;
        }
        *(_DWORD *)(a4 + 16) = 0;
        goto LABEL_196;
      }
      v35 = Curl_do((__time_t **)(a4 + 8), &v78);
      *(_DWORD *)(a4 + 16) = v35;
      if ( v35 != 0 )
      {
        if ( v35 == 55 && *(_BYTE *)((v39 = *(_DWORD *)(a4 + 8)) + 441) != 0 )
        {
          p[0] = v34;
          v40 = Curl_retry_request(v39, (char **)p);
          if ( v40 != 0 )
          {
            *(_DWORD *)(a4 + 16) = v40;
            v19 = 1;
          }
          else
          {
            v19 = 0;
            v34 = (void *)(p[0] != nullptr);
          }
          Curl_posttransfer();
          v41 = Curl_done((int **)(a4 + 8), *(_DWORD *)(a4 + 16), 0);
          if ( v34 != nullptr )
          {
            v42 = p[0];
            if ( v41 != nullptr && v41 != (int (__fastcall *)(int *, int, int))((char *)&dword_34 + 3) )
            {
              *(_DWORD *)(a4 + 16) = v41;
              Curl_cfree(v42);
            }
            else
            {
              v43 = Curl_follow(a4, (char *)p[0], 2);
              if ( v43 != 0 )
              {
                *(_DWORD *)(a4 + 16) = v43;
                Curl_cfree(p[0]);
              }
              else
              {
                LODWORD(v9) = *(_DWORD *)(a4 + 12);
                if ( (_DWORD)v9 != 2 )
                  *(_DWORD *)(a4 + 12) = 2;
                *(_DWORD *)(a4 + 16) = 0;
              }
            }
            goto LABEL_201;
          }
        }
        else
        {
          Curl_posttransfer();
          if ( *(_DWORD *)(a4 + 8) != 0 )
          {
            v30 = (int **)(a4 + 8);
LABEL_121:
            v31 = *(_DWORD *)(a4 + 16);
            v32 = 0;
LABEL_122:
            Curl_done(v30, v31, v32);
LABEL_123:
            v19 = 1;
            goto LABEL_201;
          }
        }
        v19 = 1;
        goto LABEL_201;
      }
      v19 = v78;
      if ( v78 == 0 )
      {
        if ( *(_BYTE *)(a4 + 1020) != 0 )
        {
          LODWORD(v9) = 2;
          if ( (*(_DWORD *)(a4 + 34432) & 0xFFFFFFFD) == 4 )
          {
            Curl_done((int **)(a4 + 8), 0, 0);
            LODWORD(v9) = *(_DWORD *)(a4 + 12);
            if ( (_DWORD)v9 != 15 )
            {
              v23 = 15;
LABEL_75:
              *(_DWORD *)(a4 + 12) = v23;
              goto LABEL_201;
            }
            goto LABEL_196;
          }
        }
        if ( *(_DWORD *)(a4 + 12) != 9 )
        {
          v36 = 9;
LABEL_141:
          *(_DWORD *)(a4 + 12) = v36;
        }
        goto LABEL_199;
      }
      v37 = *(_DWORD *)(a4 + 8);
      v19 = *(unsigned __int8 *)(v37 + 448);
      v38 = *(_DWORD *)(a4 + 12);
      if ( *(_BYTE *)(v37 + 448) == 0 )
      {
        if ( v38 != 11 )
        {
          v23 = 11;
          goto LABEL_75;
        }
LABEL_196:
        v19 = 0;
        goto LABEL_201;
      }
      if ( v38 == 10 )
      {
LABEL_199:
        v19 = 0;
        goto LABEL_201;
      }
      v22 = 10;
LABEL_91:
      *(_DWORD *)(a4 + 12) = v22;
      v19 = 0;
LABEL_201:
      v69 = *(_DWORD *)(a4 + 12);
      if ( v69 <= 0xF )
      {
        v70 = *(_DWORD *)(a4 + 8);
        if ( *(_DWORD *)(a4 + 16) != 0 )
        {
          *(_BYTE *)(a4 + 34377) = 0;
          if ( v70 != 0 )
          {
            *(_BYTE *)(v70 + 549) = 0;
            *(_BYTE *)(*(_DWORD *)(a4 + 8) + 548) = 0;
            Curl_removeHandleFromPipeline(a4, *(_DWORD ***)(*(_DWORD *)(a4 + 8) + 552));
            Curl_removeHandleFromPipeline(a4, *(_DWORD ***)(*(_DWORD *)(a4 + 8) + 556));
            Curl_multi_process_pending_handles((int *)a1, v71, v72);
            if ( v19 != 0 )
            {
              Curl_disconnect(*(_DWORD *)(a4 + 8), 0);
              *(_DWORD *)(a4 + 8) = 0;
            }
          }
          else if ( v69 == 2 )
          {
            Curl_posttransfer();
          }
          sub_24F48A(a4, 16);
        }
        else if ( v70 != 0 && Curl_pgrsUpdate((int *)v70, 0, v9) != 0 )
        {
          *(_BYTE *)(*(_DWORD *)(a4 + 8) + 440) = 1;
          sub_24F48A(a4, (*(_DWORD *)(a4 + 12) > 0xEu) + 15);
        }
      }
      return sub_250B5C();
    case 9:
      v19 = Curl_protocol_doing(*(_DWORD *)(a4 + 8), &v78);
      *(_DWORD *)(a4 + 16) = v19;
      if ( v19 != 0 )
        goto LABEL_120;
      if ( v78 == 0 )
        goto LABEL_199;
      v29 = (*(_BYTE *)(*(_DWORD *)(a4 + 8) + 448) == 0) + 10;
      goto LABEL_114;
    case 10:
      v44 = Curl_do_more(*(__time_t **)(a4 + 8), p);
      *(_DWORD *)(a4 + 16) = v44;
      if ( v44 != 0 )
      {
LABEL_120:
        Curl_posttransfer();
        v30 = (int **)(a4 + 8);
        goto LABEL_121;
      }
      if ( p[0] == nullptr )
        goto LABEL_199;
      v45 = 9;
      if ( p[0] == (char *)&dword_0 + 1 )
        v45 = 11;
      v46 = a4;
      goto LABEL_195;
    case 11:
      Curl_move_handle_from_send_to_recv_pipe(a4, *(_DWORD *)(a4 + 8));
      Curl_multi_process_pending_handles((int *)a1, v47, v48);
      if ( *(_DWORD *)(a4 + 12) == 12 )
        goto LABEL_196;
      v27 = 12;
      goto LABEL_126;
    case 12:
      HIDWORD(v9) = *(_DWORD *)(a4 + 8);
      LODWORD(v9) = 548;
      v19 = *(unsigned __int8 *)(HIDWORD(v9) + 548);
      if ( *(_BYTE *)(HIDWORD(v9) + 548) != 0 )
        goto LABEL_199;
      v49 = **(_DWORD ***)(HIDWORD(v9) + 556);
      if ( v49 == nullptr || *v49 != a4 )
        goto LABEL_199;
      *(_BYTE *)(HIDWORD(v9) + 548) = 1;
      LODWORD(v9) = *(_DWORD *)(a4 + 12);
      if ( (_DWORD)v9 == 13 )
        goto LABEL_196;
      v23 = 13;
      goto LABEL_75;
    case 13:
      p[0] = nullptr;
      v50 = *(_QWORD *)(a4 + 552);
      if ( v50 > 0 && (v51 = *(_QWORD *)(a4 + 1176)) > v50
        || (v50 = *(_QWORD *)(a4 + 560)) > 0 && (v51 = *(_QWORD *)(a4 + 1168)) > v50 )
      {
        *(_DWORD *)(a4 + 12) = 14;
        v52 = *(_DWORD *)(a4 + 712);
        if ( v52 == 0 )
          v52 = 0x4000;
        v53 = Curl_sleep_time(v50, v51, HIDWORD(v51), v52);
        v54 = (int *)a4;
LABEL_198:
        Curl_expire(v54, v53, v9, SHIDWORD(v9));
        goto LABEL_199;
      }
      *(_DWORD *)(a4 + 16) = Curl_readwrite(*(_DWORD *)(a4 + 8), (__suseconds_t)&v79);
      if ( (*(_DWORD *)(a4 + 300) & 1) == 0 )
        *(_BYTE *)(*(_DWORD *)(a4 + 8) + 548) = 0;
      LODWORD(v9) = *(_DWORD *)(a4 + 300);
      if ( (v9 & 2) == 0 )
      {
        LODWORD(v9) = 549;
        *(_BYTE *)(*(_DWORD *)(a4 + 8) + 549) = 0;
      }
      if ( (v79 != 0 || *(_DWORD *)(a4 + 16) == 56)
        && Curl_retry_request(*(_DWORD *)(a4 + 8), (char **)p) == 0
        && (*(void **)&v9 = p[0], p[0] != nullptr) )
      {
        v19 = 1;
        *(_DWORD *)(a4 + 16) = 0;
        v79 = 1;
      }
      else
      {
        v19 = 0;
      }
      if ( *(_DWORD *)(a4 + 16) != 0 )
      {
        v55 = *(_DWORD *)(a4 + 8);
        if ( (*(_DWORD *)(*(_DWORD *)(v55 + 484) + 64) & 2) == 0 )
          *(_BYTE *)(v55 + 440) = 1;
        Curl_posttransfer();
        Curl_done((int **)(a4 + 8), *(_DWORD *)(a4 + 16), 0);
        goto LABEL_164;
      }
      if ( v79 == 0 )
      {
LABEL_164:
        v19 = 0;
LABEL_185:
        if ( p[0] != nullptr )
          Curl_cfree(p[0]);
        goto LABEL_201;
      }
      Curl_posttransfer();
      Curl_removeHandleFromPipeline(a4, *(_DWORD ***)(*(_DWORD *)(a4 + 8) + 556));
      v58 = **(int ****)(*(_DWORD *)(a4 + 8) + 556);
      if ( v58 != nullptr )
        Curl_expire(*v58, 1, v57, (int)v58);
      Curl_multi_process_pending_handles((int *)a1, v56, v57);
      v59 = *(void **)(a4 + 312);
      if ( v59 != nullptr )
      {
        if ( v19 == 0 )
        {
          *(_DWORD *)(a4 + 312) = 0;
          p[0] = v59;
          v60 = 3;
LABEL_173:
          v61 = Curl_done((int **)(a4 + 8), 0, 0);
          *(_DWORD *)(a4 + 16) = v61;
          if ( v61 == nullptr )
          {
            v62 = Curl_follow(a4, (char *)p[0], v60);
            *(_DWORD *)(a4 + 16) = v62;
            if ( v62 == 0 )
            {
              if ( *(_DWORD *)(a4 + 12) != 2 )
                *(_DWORD *)(a4 + 12) = 2;
              v19 = 0;
              p[0] = nullptr;
              goto LABEL_185;
            }
          }
          goto LABEL_164;
        }
      }
      else if ( v19 == 0 )
      {
        if ( *(_DWORD *)(a4 + 308) != 0 )
        {
          if ( p[0] != nullptr )
            Curl_cfree(p[0]);
          v63 = *(void **)(a4 + 308);
          *(_DWORD *)(a4 + 308) = 0;
          p[0] = v63;
          v64 = Curl_follow(a4, (char *)v63, 1);
          v19 = 1;
          *(_DWORD *)(a4 + 16) = v64;
          if ( v64 == 0 )
          {
            p[0] = nullptr;
            v19 = 0;
          }
        }
        LODWORD(v9) = *(_DWORD *)(a4 + 12);
        if ( (_DWORD)v9 != 15 )
          *(_DWORD *)(a4 + 12) = 15;
        goto LABEL_185;
      }
      v60 = 2;
      goto LABEL_173;
    case 14:
      if ( Curl_pgrsUpdate(*(int **)(a4 + 8), v10, v9) != 0 )
        *(_DWORD *)(a4 + 16) = 42;
      else
        *(_DWORD *)(a4 + 16) = Curl_speedcheck((_DWORD *)a4, v74[0], v4->tv_usec);
      LODWORD(v9) = *(_DWORD *)(a4 + 552);
      if ( *(_QWORD *)(a4 + 552) != 0 )
      {
        HIDWORD(v9) = *(_DWORD *)(a4 + 556);
        if ( *(_QWORD *)(a4 + 1176) >= v9 )
          goto LABEL_199;
      }
      LODWORD(v9) = *(_DWORD *)(a4 + 560);
      if ( *(_QWORD *)(a4 + 560) != 0 )
      {
        HIDWORD(v9) = *(_DWORD *)(a4 + 564);
        if ( *(_QWORD *)(a4 + 1168) >= v9 )
          goto LABEL_199;
      }
      if ( *(_DWORD *)(a4 + 12) == 13 )
        goto LABEL_199;
      v36 = 13;
      goto LABEL_141;
    case 15:
      v65 = *(_DWORD *)(a4 + 8);
      if ( v65 != 0 )
      {
        Curl_removeHandleFromPipeline(a4, *(_DWORD ***)(v65 + 556));
        Curl_multi_process_pending_handles((int *)a1, v66, v67);
        v68 = Curl_done((int **)(a4 + 8), 0, 0);
        LODWORD(v9) = *(_DWORD *)(a4 + 8);
        *(_DWORD *)(a4 + 16) = v68;
        if ( (_DWORD)v9 != 0 )
          *(_DWORD *)(a4 + 8) = 0;
      }
      if ( *(_BYTE *)(a4 + 1020) == 0 || *(_DWORD *)(a4 + 34432) == 6 )
      {
        v46 = a4;
        v45 = 16;
LABEL_195:
        sub_24F48A(v46, v45);
        goto LABEL_196;
      }
      if ( *(_DWORD *)(a4 + 12) == 0 )
        goto LABEL_196;
      v19 = 0;
      *(_DWORD *)(a4 + 12) = 0;
      goto LABEL_201;
    case 16:
      *(_DWORD *)(a4 + 8) = 0;
      v54 = (int *)a4;
      v53 = 0;
      goto LABEL_198;
    default:
      return def_2503D2(v16);
  }
}


//======================================================================
// sub_250B5C
// address: 0x00250B5C   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_250B5C(
        _DWORD *inserted,
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
        int a12)
{
  _DWORD *v12; // r4
  int v14; // r0

  if ( v12[3] == 16 )
  {
    v14 = v12[4];
    v12[5] = 1;
    v12[6] = v12;
    v12[7] = v14;
    inserted = Curl_llist_insert_next(*(_DWORD **)(a12 + 20), *(_DWORD *)(*(_DWORD *)(a12 + 20) + 4), (int)(v12 + 5));
    if ( v12[3] != 17 )
      v12[3] = 17;
  }
  return def_2503D2(inserted);
}


//======================================================================
// sub_250B92
// address: 0x00250B92   size: 0x2 (2 bytes)
//======================================================================
int __fastcall sub_250B92(int a1)
{
  return def_2503D2(a1);
}


//======================================================================
// sub_250C84
// address: 0x00250C84   size: 0x15E (350 bytes)
//======================================================================
int __fastcall sub_250C84(int a1, __suseconds_t a2, __time_t a3, int a4, int *a5)
{
  __time_t v8; // r2
  int v9; // r3
  __suseconds_t tv_usec; // r7
  int v11; // r0
  _DWORD *v12; // r5
  int v13; // r6
  _DWORD **v14; // r0
  _DWORD *v15; // r5
  int result; // r0
  int v17; // r3
  _DWORD *v18; // r2
  _DWORD **v19; // r2
  _DWORD *v20; // r3
  _DWORD **v21; // r3
  int v22; // r3
  int v23; // r0
  int v24; // r3
  __suseconds_t v25; // r5
  _DWORD *v26; // r7
  int v27; // r2
  int v28; // r0
  int v29; // r3
  int v30; // r0
  __time_t tv_sec; // [sp+8h] [bp-1Ch]
  __time_t v32[2]; // [sp+Ch] [bp-18h] BYREF
  int v33; // [sp+14h] [bp-10h] BYREF
  struct timeval v34; // [sp+18h] [bp-Ch] BYREF

  v32[0] = a3;
  curlx_tvnow(&v34, a2, a3, a4);
  tv_usec = v34.tv_usec;
  tv_sec = v34.tv_sec;
  if ( a2 != 0 )
  {
    v11 = curl_multi_perform((int *)a1, a5, v8, v9);
    v12 = *(_DWORD **)(a1 + 4);
    v13 = v11;
    while ( v12 != nullptr )
    {
      sub_24F634(a1, v12);
      v12 = (_DWORD *)*v12;
    }
  }
  else
  {
    if ( v32[0] == -1 || (v14 = (_DWORD **)Curl_hash_pick(*(int **)(a1 + 40), (int)v32, 4)) == nullptr )
    {
      v13 = 0;
    }
    else
    {
      v15 = *v14;
      result = 4;
      if ( v15[8657] != -1059136595 )
        return result;
      v17 = v15[2];
      if ( v17 != 0 )
      {
        if ( (a4 & 2) != 0 && (v18 = *(_DWORD **)(v17 + 552)) != nullptr && (v19 = (_DWORD **)*v18) != nullptr )
        {
          v15 = *v19;
        }
        else if ( (a4 & 1) != 0 )
        {
          v20 = *(_DWORD **)(v17 + 556);
          if ( v20 != nullptr )
          {
            v21 = (_DWORD **)*v20;
            if ( v21 != nullptr )
              v15 = *v21;
          }
        }
      }
      v22 = v15[2];
      if ( v22 != 0 && (*(_DWORD *)(*(_DWORD *)(v22 + 484) + 64) & 8) == 0 )
        *(_DWORD *)(v22 + 1080) = a4;
      do
      {
        v34.tv_sec = tv_sec;
        v34.tv_usec = tv_usec;
        v23 = sub_250284(a1, tv_sec, tv_usec, (int)v15);
        v13 = v23;
      }
      while ( v23 == -1 );
      v24 = v15[2];
      if ( v24 != 0 && (*(_DWORD *)(*(_DWORD *)(v24 + 484) + 64) & 8) == 0 )
        *(_DWORD *)(v24 + 1080) = 0;
      if ( v23 <= 0 )
        sub_24F634(a1, v15);
    }
    v25 = tv_usec + 3000;
    if ( tv_usec + 3000 > 999999 )
    {
      ++tv_sec;
      v25 = tv_usec - 997000;
    }
    v26 = nullptr;
    while ( 1 )
    {
      v27 = *(_DWORD *)(a1 + 36);
      v34.tv_sec = tv_sec;
      v34.tv_usec = v25;
      v28 = Curl_splaygetbest(tv_sec, v25, v27, &v33);
      v29 = v33;
      *(_DWORD *)(a1 + 36) = v28;
      if ( v29 != 0 )
      {
        v26 = *(_DWORD **)(v29 + 20);
        sub_24F4FC(v34.tv_sec, v34.tv_usec, (_DWORD *)(a1 + 36), v26);
      }
      if ( v33 == 0 )
        break;
      if ( v26 != nullptr )
      {
        do
        {
          v30 = sub_250284(a1, tv_sec, v25, (int)v26);
          v13 = v30;
        }
        while ( v30 == -1 );
        if ( v30 <= 0 )
          sub_24F634(a1, v26);
      }
    }
    *a5 = *(_DWORD *)(a1 + 16);
  }
  return v13;
}


//======================================================================
// sub_250E58
// address: 0x00250E58   size: 0x12 (18 bytes)
//======================================================================
void *__fastcall sub_250E58(int a1, size_t a2, size_t a3)
{
  return Curl_ccalloc(a2, a3);
}


//======================================================================
// sub_250E70
// address: 0x00250E70   size: 0x10 (16 bytes)
//======================================================================
void __fastcall sub_250E70(int a1, void *a2)
{
  Curl_cfree(a2);
}


//======================================================================
// sub_250E84
// address: 0x00250E84   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_250E84(unsigned __int8 *a1, int a2, _DWORD *a3)
{
  int v3; // r3
  int v5; // r6
  int result; // r0
  int v7; // r3
  _BYTE *v8; // r4
  int v9; // r5
  int v10; // r0

  v3 = a1[2];
  v5 = a1[3];
  result = 1;
  if ( v3 == 8 && (v5 & 0xFFFFFFE0) == 0 )
  {
    v7 = a2 - 10;
    v8 = a1 + 10;
    if ( (v5 & 4) != 0 )
    {
      result = 2;
      if ( v7 <= 1 )
        return result;
      v9 = (a1[11] << 8) | a1[10];
      if ( v9 + 1 >= v7 )
        return result;
      v7 = v7 - v9 - 2;
      v8 += v9 + 2;
    }
    if ( (v5 & 8) != 0 )
    {
      while ( v7 != 0 )
      {
        v10 = (unsigned __int8)*v8;
        --v7;
        ++v8;
        if ( v10 == 0 )
          goto LABEL_10;
      }
      return 2;
    }
LABEL_10:
    if ( (v5 & 0x10) != 0 )
    {
      while ( v7 != 0 )
      {
        --v7;
        if ( *v8 == 0 )
          goto LABEL_14;
        ++v8;
      }
      return 2;
    }
LABEL_14:
    result = 2;
    if ( (v5 & 2) != 0 )
    {
      if ( v7 <= 1 )
        return result;
      v7 -= 2;
    }
    *a3 = a2 - v7;
    return 0;
  }
  return result;
}


//======================================================================
// sub_250F04
// address: 0x00250F04   size: 0x1C (28 bytes)
//======================================================================
void __fastcall __noreturn sub_250F04(int a1, const char *a2)
{
  if ( a2 != nullptr )
    Curl_failf(a1, "Error while processing content unencoding: %s", a2);
  Curl_failf(a1, "Error while processing content unencoding: Unknown failure within decompression software.");
}


//======================================================================
// sub_250F28
// address: 0x00250F28   size: 0x164 (356 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00250F28  PUSH    {R4-R7,LR}
//   00250F2A  MOVS    R5, R1
//   00250F2C  ADDS    R5, #0x90
//   00250F2E  LDR     R3, [R5]
//   00250F30  SUB     SP, SP, #0x1C
//   00250F32  LDR     R2, [R5,#4]
//   00250F34  LDR     R6, =(_GLOBAL_OFFSET_TABLE_ - 0x250F40)
//   00250F36  STR     R3, [SP,#0x1C+var_8]
//   00250F38  LDR     R3, =(Curl_cmalloc_ptr - 0x467AA8)
//   00250F3A  STR     R0, [SP,#0x1C+var_14]
//   00250F3C  ADD     R6, PC; _GLOBAL_OFFSET_TABLE_
//   00250F3E  STR     R2, [SP,#0x1C+var_C]
//   00250F40  LDR     R3, [R6,R3]; Curl_cmalloc
//   00250F42  MOVS    R0, #0x4000; byte_count
//   00250F46  LDR     R3, [R3]; __imp_malloc
//   00250F48  MOVS    R4, R1
//   00250F4A  BLX     R3
//   00250F4C  STR     R0, [SP,#0x1C+p]
//   00250F4E  CMP     R0, #0
//   00250F50  BEQ     loc_250F56
//   00250F52  MOVS    R2, #1
//   00250F54  B       loc_250F82
//   00250F56  MOVS    R0, R5
//   00250F58  BL      inflateEnd
//   00250F5C  LDR     R3, [SP,#0x1C+p]
//   00250F5E  ADDS    R4, #0x8C
//   00250F60  MOVS    R0, #0x1B
//   00250F62  STR     R3, [R4]
//   00250F64  B       loc_251088
//   00250F66  LDR     R3, [R7,#0x10]
//   00250F68  MOVS    R2, #0x4000
//   00250F6C  CMP     R3, R2
//   00250F6E  BNE     loc_250FA2
//   00250F70  LDR     R2, [SP,#0x1C+var_10]
//   00250F72  CMP     R2, #1
//   00250F74  BEQ     loc_250FD8
//   00250F76  MOVS    R3, R4
//   00250F78  ADDS    R3, #0x90
//   00250F7A  LDR     R7, [R3,#4]
//   00250F7C  CMP     R7, #0
//   00250F7E  BEQ     loc_251014
//   00250F80  MOVS    R2, #0
//   00250F82  LDR     R3, [SP,#0x1C+p]
//   00250F84  STR     R2, [SP,#0x1C+var_18]
//   00250F86  MOVS    R7, R4
//   00250F88  MOVS    R2, #0x80
//   00250F8A  ADDS    R7, #0x90
//   00250F8C  LSLS    R2, R2, #7
//   00250F8E  STR     R3, [R7,#0xC]
//   00250F90  STR     R2, [R7,#0x10]
//   00250F92  MOVS    R0, R5
//   00250F94  MOVS    R1, #2
//   00250F96  BL      inflate
//   00250F9A  STR     R0, [SP,#0x1C+var_10]
//   00250F9C  CMP     R0, #1
//   00250F9E  BHI     loc_251020
//   00250FA0  B       loc_250F66
//   00250FA2  MOVS    R2, R4
//   00250FA4  ADDS    R2, #0xE1
//   00250FA6  LDRB    R2, [R2]
//   00250FA8  STR     R2, [SP,#0x1C+var_18]
//   00250FAA  CMP     R2, #0
//   00250FAC  BNE     loc_250F70
//   00250FAE  MOVS    R2, #0x4000
//   00250FB2  SUBS    R3, R2, R3; size_t
//   00250FB4  LDR     R0, [SP,#0x1C+var_14]; int
//   00250FB6  MOVS    R1, #1; int
//   00250FB8  LDR     R2, [SP,#0x1C+p]; char *
//   00250FBA  BL      Curl_client_write
//   00250FBE  SUBS    R7, R0, #0
//   00250FC0  BEQ     loc_250F70
//   00250FC2  LDR     R3, =(Curl_cfree_ptr - 0x467AA8)
//   00250FC4  LDR     R0, [SP,#0x1C+p]; p
//   00250FC6  ADDS    R4, #0x8C
//   00250FC8  LDR     R3, [R6,R3]; Curl_cfree
//   00250FCA  LDR     R3, [R3]; __imp_free
//   00250FCC  BLX     R3
//   00250FCE  MOVS    R0, R5
//   00250FD0  BL      inflateEnd
//   00250FD4  LDR     R3, [SP,#0x1C+var_18]
//   00250FD6  B       loc_251084
//   00250FD8  LDR     R3, =(Curl_cfree_ptr - 0x467AA8)
//   00250FDA  LDR     R0, [SP,#0x1C+p]; p
//   00250FDC  LDR     R3, [R6,R3]; Curl_cfree
//   00250FDE  MOVS    R6, R4
//   00250FE0  ADDS    R6, #0x8C
//   00250FE2  LDR     R3, [R3]; __imp_free
//   00250FE4  BLX     R3
//   00250FE6  MOVS    R0, R5
//   00250FE8  BL      inflateEnd
//   00250FEC  SUBS    R7, R0, #0
//   00250FEE  BNE     loc_250FFA
//   00250FF0  MOVS    R0, R5
//   00250FF2  BL      inflateEnd
//   00250FF6  STR     R7, [R6]
//   00250FF8  B       loc_251086
//   00250FFA  LDR     R3, [SP,#0x1C+var_14]
//   00250FFC  ADDS    R4, #0xA8
//   00250FFE  LDR     R1, [R4]
//   00251000  LDR     R0, [R3]
//   00251002  BL      sub_250F04
//   00251006  MOVS    R7, R0
//   00251008  MOVS    R0, R5
//   0025100A  BL      inflateEnd
//   0025100E  MOVS    R3, #0
//   00251010  STR     R3, [R6]
//   00251012  B       loc_251086
//   00251014  LDR     R3, =(Curl_cfree_ptr - 0x467AA8)
//   00251016  LDR     R0, [SP,#0x1C+p]; p
//   00251018  LDR     R3, [R6,R3]; Curl_cfree
//   0025101A  LDR     R3, [R3]; __imp_free
//   0025101C  BLX     R3
//   0025101E  B       loc_251086
//   00251020  LDR     R2, [SP,#0x1C+var_18]
//   00251022  CMP     R2, #0
//   00251024  BEQ     loc_251060
//   00251026  LDR     R3, [SP,#0x1C+var_10]
//   00251028  ADDS    R3, #3
//   0025102A  BNE     loc_251060
//   0025102C  MOVS    R0, R5
//   0025102E  BL      inflateEnd
//   00251032  LDR     R2, =(a123 - 0x25103E); "1.2.3"
//   00251034  MOVS    R1, #0xF
//   00251036  MOVS    R0, R5
//   00251038  NEGS    R1, R1
//   0025103A  ADD     R2, PC; "1.2.3"
//   0025103C  MOVS    R3, #0x38 ; '8'
//   0025103E  BL      inflateInit2_
//   00251042  CMP     R0, #0
//   00251044  BEQ     loc_251056
//   00251046  LDR     R3, =(Curl_cfree_ptr - 0x467AA8)
//   00251048  LDR     R0, [SP,#0x1C+p]; p
//   0025104A  LDR     R3, [R6,R3]; Curl_cfree
//   0025104C  LDR     R3, [R3]; __imp_free
//   0025104E  BLX     R3
//   00251050  LDR     R2, [SP,#0x1C+var_14]
//   00251052  LDR     R0, [R2]
//   00251054  B       loc_25106E
//   00251056  LDR     R3, [SP,#0x1C+var_8]
//   00251058  LDR     R2, [SP,#0x1C+var_C]
//   0025105A  STR     R3, [R7]
//   0025105C  STR     R2, [R7,#4]
//   0025105E  B       loc_250F80
//   00251060  LDR     R3, =(Curl_cfree_ptr - 0x467AA8)
//   00251062  LDR     R0, [SP,#0x1C+p]; p
//   00251064  LDR     R3, [R6,R3]; Curl_cfree
//   00251066  LDR     R3, [R3]; __imp_free
//   00251068  BLX     R3
//   0025106A  LDR     R3, [SP,#0x1C+var_14]
//   0025106C  LDR     R0, [R3]
//   0025106E  MOVS    R3, R4
//   00251070  ADDS    R3, #0xA8
//   00251072  LDR     R1, [R3]
//   00251074  BL      sub_250F04
//   00251078  MOVS    R7, R0
//   0025107A  MOVS    R0, R5
//   0025107C  BL      inflateEnd
//   00251080  ADDS    R4, #0x8C
//   00251082  MOVS    R3, #0
//   00251084  STR     R3, [R4]
//   00251086  MOVS    R0, R7
//   00251088  ADD     SP, SP, #0x1C
//   0025108A  POP     {R4-R7,PC}

//======================================================================
// sub_251504
// address: 0x00251504   size: 0x7E (126 bytes)
//======================================================================
void __fastcall sub_251504(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0

  v2 = *(void **)a1;
  if ( v2 != nullptr )
  {
    Curl_cfree(v2);
    *(_DWORD *)a1 = 0;
  }
  v3 = *(void **)(a1 + 4);
  if ( v3 != nullptr )
  {
    Curl_cfree(v3);
    *(_DWORD *)(a1 + 4) = 0;
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 != nullptr )
  {
    Curl_cfree(v4);
    *(_DWORD *)(a1 + 8) = 0;
  }
  v5 = *(void **)(a1 + 20);
  if ( v5 != nullptr )
  {
    Curl_cfree(v5);
    *(_DWORD *)(a1 + 20) = 0;
  }
  v6 = *(void **)(a1 + 24);
  if ( v6 != nullptr )
  {
    Curl_cfree(v6);
    *(_DWORD *)(a1 + 24) = 0;
  }
  v7 = *(void **)(a1 + 28);
  if ( v7 != nullptr )
  {
    Curl_cfree(v7);
    *(_DWORD *)(a1 + 28) = 0;
  }
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 16) = 0;
}


//======================================================================
// sub_25158C
// address: 0x0025158C   size: 0x20 (32 bytes)
//======================================================================
void __fastcall __noreturn sub_25158C(unsigned __int8 *a1, int a2)
{
  curl_msnprintf(a2, 3, "%02x", *a1);
}


//======================================================================
// sub_251CE4
// address: 0x00251CE4   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall sub_251CE4(_DWORD *result)
{
  result[5] = 0;
  result[4] = 0;
  *result = 1732584193;
  result[1] = -271733879;
  result[2] = -1732584194;
  result[3] = 271733878;
  return result;
}


//======================================================================
// sub_251D0C
// address: 0x00251D0C   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_251D0C(int result, char *a2, unsigned int a3)
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
// sub_251D30
// address: 0x00251D30   size: 0x74C (1868 bytes)
//======================================================================
void *__fastcall sub_251D30(int *a1, unsigned __int8 *a2)
{
  int v2; // r7
  int v3; // r6
  int v4; // r2
  int v5; // r3
  int v6; // r5
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r5
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r6
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r6
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r6
  int v23; // r7
  int v24; // r6
  int v25; // r2
  int v26; // r5
  int v27; // r1
  int v28; // r7
  int v29; // r2
  int v30; // r3
  int v31; // r5
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // r5
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r5
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r5
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r5
  int v48; // r1
  int v49; // r2
  int v50; // r3
  int v51; // r5
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r5
  int v56; // r1
  int v57; // r2
  int v58; // r4
  int v59; // r2
  int v60; // r5
  int v61; // r1
  int v62; // r3
  int v63; // r2
  int v64; // r5
  int v65; // r1
  int v66; // r3
  int v67; // r2
  int v68; // r5
  int v69; // r1
  int v70; // r3
  int v72; // [sp+Ch] [bp-58h]
  size_t v73; // [sp+10h] [bp-54h]
  int v74; // [sp+14h] [bp-50h]
  int v75; // [sp+18h] [bp-4Ch]
  int v76; // [sp+1Ch] [bp-48h]
  _DWORD v77[17]; // [sp+20h] [bp-44h] BYREF

  v76 = *a1;
  v72 = a1[1];
  v74 = a1[2];
  v75 = a1[3];
  v73 = 0;
  do
  {
    v2 = v73 * 4;
    v77[v73++] = (a2[3] << 24) | (a2[1] << 8) | (a2[2] << 16) | *a2;
    a2 += 4;
  }
  while ( v2 != 60 );
  v3 = __ROR4__(v77[0] - 680876936 + v76 + (v75 & ~v72 | v72 & v74), 25) + v72;
  v4 = __ROR4__(v77[1] - 389564586 + v75 + (v72 & v3 | v74 & ~v3), 20) + v3;
  v5 = __ROR4__(v77[2] + 606105819 + v74 + (v3 & v4 | v72 & ~v4), 15) + v4;
  v6 = __ROR4__(v77[3] - 1044525330 + v72 + (v4 & v5 | v3 & ~v5), 10) + v5;
  v7 = __ROR4__(v3 + v77[4] - 176418897 + (v5 & v6 | v4 & ~v6), 25) + v6;
  v8 = __ROR4__(v4 + v77[5] + 1200080426 + (v6 & v7 | v5 & ~v7), 20) + v7;
  v9 = __ROR4__(v5 + v77[6] - 1473231341 + (v7 & v8 | v6 & ~v8), 15) + v8;
  v10 = __ROR4__(v6 + v77[7] - 45705983 + (v8 & v9 | v7 & ~v9), 10) + v9;
  v11 = __ROR4__(v7 + v77[8] + 1770035416 + (v9 & v10 | v8 & ~v10), 25) + v10;
  v12 = __ROR4__(v8 + v77[9] - 1958414417 + (v10 & v11 | v9 & ~v11), 20) + v11;
  v13 = __ROR4__(v9 + v77[10] - 42063 + (v11 & v12 | v10 & ~v12), 15) + v12;
  v14 = __ROR4__(v10 + v77[11] - 1990404162 + (v12 & v13 | v11 & ~v13), 10) + v13;
  v15 = __ROR4__(v11 + v77[12] + 1804603682 + (v13 & v14 | v12 & ~v14), 25) + v14;
  v16 = __ROR4__(v12 + v77[13] - 40341101 + (v14 & v15 | v13 & ~v15), 20) + v15;
  v17 = __ROR4__(v77[14] - 1502002290 + v13 + (v15 & v16 | ~v16 & v14), 15) + v16;
  v18 = __ROR4__(v77[15] + 1236535329 + v14 + (v16 & v17 | v15 & ~v17), 10) + v17;
  v19 = __ROR4__(v77[1] - 165796510 + v15 + (v16 & v18 | ~v16 & v17), 27) + v18;
  v20 = __ROR4__(v16 + v77[6] - 1069501632 + (~v17 & v18 | v17 & v19), 23) + v19;
  v21 = __ROR4__(v77[11] + 643717713 + v17 + (v19 & ~v18 | v18 & v20), 18) + v20;
  v22 = __ROR4__(v77[0] - 373897302 + v18 + (v20 & ~v19 | v19 & v21), 12);
  v23 = v22 + v21;
  v24 = __ROR4__(v77[5] - 701558691 + v19 + (v21 & ~v20 | v20 & (v22 + v21)), 27) + v22 + v21;
  v25 = __ROR4__(v77[10] + 38016083 + v20 + (v23 & ~v21 | v21 & v24), 23);
  v26 = v25 + v24;
  v27 = __ROR4__(v77[15] - 660478335 + v21 + (v24 & ~v23 | v23 & (v25 + v24)), 18) + v25 + v24;
  v28 = __ROR4__(v77[4] - 405537848 + v23 + ((v25 + v24) & ~v24 | v24 & v27), 12);
  v29 = v28 + v27;
  v30 = __ROR4__(v77[9] + 568446438 + v24 + (v27 & ~v26 | v26 & (v28 + v27)), 27) + v28 + v27;
  v31 = __ROR4__(v77[14] - 1019803690 + v26 + ((v28 + v27) & ~v27 | v27 & v30), 23) + v30;
  v32 = __ROR4__(v77[3] - 187363961 + v27 + (v30 & ~v29 | v29 & v31), 18) + v31;
  v33 = __ROR4__(v77[8] + 1163531501 + v29 + (v31 & ~v30 | v30 & v32), 12) + v32;
  v34 = __ROR4__(v77[13] - 1444681467 + v30 + (v32 & ~v31 | v31 & v33), 27) + v33;
  v35 = __ROR4__(v77[2] - 51403784 + v31 + (v33 & ~v32 | v32 & v34), 23) + v34;
  v36 = __ROR4__(v77[7] + 1735328473 + v32 + (v34 & ~v33 | v33 & v35), 18) + v35;
  v37 = __ROR4__(v33 + v77[12] - 1926607734 + (v35 & ~v34 | v34 & v36), 12) + v36;
  v38 = __ROR4__(v77[5] - 378558 + v34 + (v36 ^ v35 ^ v37), 28) + v37;
  v39 = __ROR4__(v77[8] - 2022574463 + v35 + (v37 ^ v36 ^ v38), 21) + v38;
  v40 = __ROR4__(v77[11] + 1839030562 + v36 + (v38 ^ v37 ^ v39), 16) + v39;
  v41 = __ROR4__(v77[14] - 35309556 + v37 + (v39 ^ v38 ^ v40), 9) + v40;
  v42 = __ROR4__((v40 ^ v39 ^ v41) + v77[1] - 1530992060 + v38, 28) + v41;
  v43 = __ROR4__((v41 ^ v40 ^ v42) + v77[4] + 1272893353 + v39, 21) + v42;
  v44 = __ROR4__((v42 ^ v41 ^ v43) + v77[7] - 155497632 + v40, 16) + v43;
  v45 = __ROR4__((v43 ^ v42 ^ v44) + v77[10] - 1094730640 + v41, 9) + v44;
  v46 = __ROR4__((v44 ^ v43 ^ v45) + v77[13] + 681279174 + v42, 28) + v45;
  v47 = __ROR4__((v45 ^ v44 ^ v46) + v77[0] - 358537222 + v43, 21) + v46;
  v48 = __ROR4__((v46 ^ v45 ^ v47) + v77[3] - 722521979 + v44, 16) + v47;
  v49 = __ROR4__((v47 ^ v46 ^ v48) + v77[6] + 76029189 + v45, 9) + v48;
  v50 = __ROR4__((v48 ^ v47 ^ v49) + v77[9] - 640364487 + v46, 28) + v49;
  v51 = __ROR4__((v49 ^ v48 ^ v50) + v77[12] - 421815835 + v47, 21) + v50;
  v52 = __ROR4__(v77[15] + 530742520 + v48 + (v50 ^ v49 ^ v51), 16) + v51;
  v53 = __ROR4__(v49 + v77[2] - 995338651 + (v51 ^ v50 ^ v52), 9) + v52;
  v54 = __ROR4__(v77[0] - 198630844 + v50 + ((~v51 | v53) ^ v52), 26) + v53;
  v55 = __ROR4__(v77[7] + 1126891415 + v51 + ((~v52 | v54) ^ v53), 22) + v54;
  v56 = __ROR4__(v77[14] - 1416354905 + v52 + ((~v53 | v55) ^ v54), 17) + v55;
  v57 = __ROR4__(v77[5] - 57434055 + v53 + ((~v54 | v56) ^ v55), 11);
  v58 = v57 + v56;
  v59 = __ROR4__(v54 + v77[12] + 1700485571 + ((~v55 | (v57 + v56)) ^ v56), 26) + v57 + v56;
  v60 = __ROR4__(v55 + v77[3] - 1894986606 + ((~v56 | v59) ^ v58), 22) + v59;
  v61 = __ROR4__(v56 + v77[10] - 1051523 + ((~v58 | v60) ^ v59), 17) + v60;
  v62 = __ROR4__(((~v59 | v61) ^ v60) + v77[1] - 2054922799 + v58, 11) + v61;
  v63 = __ROR4__(((~v60 | v62) ^ v61) + v77[8] + 1873313359 + v59, 26) + v62;
  v64 = __ROR4__(v60 + v77[15] - 30611744 + ((~v61 | v63) ^ v62), 22) + v63;
  v65 = __ROR4__(v61 + v77[6] - 1560198380 + ((~v62 | v64) ^ v63), 17) + v64;
  v66 = __ROR4__(v62 + v77[13] + 1309151649 + ((~v63 | v65) ^ v64), 11) + v65;
  v67 = __ROR4__(v63 + v77[4] - 145523070 + ((~v64 | v66) ^ v65), 26) + v66;
  v68 = __ROR4__(v64 + v77[11] - 1120210379 + ((~v65 | v67) ^ v66), 22) + v67;
  v69 = __ROR4__(v65 + v77[2] + 718787259 + ((~v66 | v68) ^ v67), 17) + v68;
  v70 = v77[9] - 343485551 + v66 + ((~v67 | v69) ^ v68);
  *a1 = v67 + v76;
  a1[1] = v69 + v72 + __ROR4__(v70, 11);
  a1[2] = v69 + v74;
  a1[3] = v68 + v75;
  return j_memset(v77, 0, 0x40u);
}


//======================================================================
// sub_2524E0
// address: 0x002524E0   size: 0x6C (108 bytes)
//======================================================================
void *__fastcall sub_2524E0(int a1, char *a2, unsigned int a3)
{
  int v3; // r3
  unsigned int v5; // r2
  unsigned int v7; // r0
  unsigned int v8; // r3
  unsigned int v10; // r0
  size_t v11; // r5

  v3 = *(_DWORD *)(a1 + 16);
  v5 = 8 * a3;
  v7 = v3 << 23;
  v8 = v5 + v3;
  v10 = v7 >> 26;
  *(_DWORD *)(a1 + 16) = v8;
  if ( v8 < v5 )
    ++*(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) += a3 >> 29;
  v11 = 64 - v10;
  if ( a3 < 64 - v10 )
  {
    v11 = 0;
  }
  else
  {
    j_memcpy((void *)(a1 + v10 + 24), a2, v11);
    sub_251D30((int *)a1, (unsigned __int8 *)(a1 + 24));
    while ( v11 + 63 < a3 )
    {
      sub_251D30((int *)a1, (unsigned __int8 *)&a2[v11]);
      v11 += 64;
    }
    v10 = 0;
  }
  return j_memcpy((void *)(a1 + v10 + 24), &a2[v11], a3 - v11);
}


//======================================================================
// sub_25254C
// address: 0x0025254C   size: 0x66 (102 bytes)
//======================================================================
void *__fastcall sub_25254C(int a1, char *a2)
{
  unsigned int v4; // r3
  int v5; // r2
  char v7[8]; // [sp+4h] [bp-10h] BYREF

  sub_251D0C((int)v7, a2 + 16, 8u);
  v4 = *((_DWORD *)a2 + 4) << 23 >> 26;
  v5 = 56;
  if ( v4 > 0x37 )
    v5 = 120;
  sub_2524E0((int)a2, byte_444B74, v5 - v4);
  sub_2524E0((int)a2, v7, 8u);
  sub_251D0C(a1, a2, 0x10u);
  return j_memset(a2, 0, 0x58u);
}


//======================================================================
// sub_2533E0
// address: 0x002533E0   size: 0x1E (30 bytes)
//======================================================================
bool __fastcall sub_2533E0(int a1, int a2)
{
  if ( a1 == 0 )
    return a2 == 0;
  if ( a2 != 0 )
    return Curl_raw_equal(a1, a2) != 0;
  return a2;
}


//======================================================================
// sub_2535F4
// address: 0x002535F4   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_2535F4(int a1)
{
  int result; // r0

  if ( a1 == -100 )
    return 0;
  if ( a1 == 2 )
    return 69;
  if ( a1 <= 2 )
  {
    if ( a1 == -98 )
      return 7;
    if ( a1 <= -98 )
    {
      result = 28;
      if ( a1 == -99 )
        return result;
      return 42;
    }
    if ( a1 != 0 )
    {
      result = 68;
      if ( a1 == 1 )
        return result;
      return 42;
    }
    return 71;
  }
  if ( a1 == 5 )
    return 72;
  if ( a1 <= 5 )
  {
    result = 70;
    if ( a1 == 3 )
      return result;
    if ( a1 != 4 )
      return 42;
    return 71;
  }
  result = 73;
  if ( a1 != 6 )
  {
    result = 74;
    if ( a1 != 7 )
      return 42;
  }
  return result;
}


//======================================================================
// sub_25365C
// address: 0x0025365C   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_25365C(int a1)
{
  _DWORD *v1; // r6
  void *v2; // r0
  void *v3; // r0

  v1 = *(_DWORD **)(a1 + 888);
  if ( v1 != nullptr )
  {
    v2 = (void *)v1[82];
    if ( v2 != nullptr )
    {
      Curl_cfree(v2);
      v1[82] = 0;
    }
    v3 = (void *)v1[83];
    if ( v3 != nullptr )
    {
      Curl_cfree(v3);
      v1[83] = 0;
    }
    Curl_cfree(v1);
  }
  return 0;
}


//======================================================================
// sub_25369C
// address: 0x0025369C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_25369C(int a1, _DWORD *a2, int a3)
{
  int v3; // r3

  v3 = 0;
  if ( a3 != 0 )
  {
    v3 = 1;
    *a2 = *(_DWORD *)(a1 + 320);
  }
  return v3;
}


//======================================================================
// sub_2536B0
// address: 0x002536B0   size: 0xEA (234 bytes)
//======================================================================
int __fastcall sub_2536B0(int a1)
{
  __time_t v2; // r5
  int v3; // r0
  int *v4; // r7
  int v5; // r6
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int v11; // [sp+Ch] [bp-8h]

  v2 = *(_DWORD *)a1 == 0;
  j_time((time_t *)(a1 + 36));
  v3 = Curl_timeleft(**(_DWORD ***)(a1 + 16), nullptr, v2);
  v4 = *(int **)(a1 + 16);
  if ( v3 < 0 )
    Curl_failf(*v4, "Connection time-out");
  v5 = *(_DWORD *)(a1 + 36);
  if ( v2 != 0 )
  {
    v6 = (v3 + 500) / 1000;
    *(_DWORD *)(a1 + 40) = v5 + v6;
    v7 = v6;
    v8 = v6 / 5;
    if ( v8 <= 0 )
      *(_DWORD *)(a1 + 32) = 1;
    else
      *(_DWORD *)(a1 + 32) = v8;
    v9 = v7 / *(_DWORD *)(a1 + 32);
    if ( v9 <= 0 )
      *(_DWORD *)(a1 + 28) = 1;
    else
      *(_DWORD *)(a1 + 28) = v9;
  }
  else
  {
    if ( v3 != 0 )
      v7 = (v3 + 500) / 1000;
    else
      v7 = 3600;
    *(_DWORD *)(a1 + 40) = v5 + v7;
    *(_DWORD *)(a1 + 32) = v7 / 5;
  }
  if ( *(int *)(a1 + 32) <= 2 )
    *(_DWORD *)(a1 + 32) = 3;
  if ( *(int *)(a1 + 32) > 50 )
    *(_DWORD *)(a1 + 32) = 50;
  v11 = *(_DWORD *)(a1 + 32);
  if ( v7 / v11 <= 0 )
    *(_DWORD *)(a1 + 28) = 1;
  else
    *(_DWORD *)(a1 + 28) = v7 / v11;
  Curl_infof(
    *v4,
    "set timeouts for state %d; Total %ld, retry %d maxtry %d\n",
    *(_DWORD *)a1,
    *(_DWORD *)(a1 + 40) - v5,
    *(_DWORD *)(a1 + 28),
    v11);
  j_time((time_t *)(a1 + 44));
  return 0;
}


//======================================================================
// sub_2537A4
// address: 0x002537A4   size: 0x102 (258 bytes)
//======================================================================
int __fastcall sub_2537A4(struct timeval **a1, _BYTE *a2)
{
  char *v3; // r5
  int result; // r0
  int tv_sec; // r6
  void *v6; // r0
  void *v7; // r0
  __suseconds_t v8; // r1
  int v9; // r2
  int v10; // r5
  int *v11; // r0
  const char *v12; // r0

  v3 = (char *)Curl_ccalloc(1u, 0x150u);
  a1[222] = (struct timeval *)v3;
  if ( v3 == nullptr )
    return 27;
  tv_sec = (*a1)[66].tv_sec;
  if ( tv_sec != 0 )
  {
    result = 71;
    if ( (unsigned int)(tv_sec - 8) > 0xFFB0 )
      return result;
  }
  else
  {
    tv_sec = 512;
  }
  if ( *((_DWORD *)v3 + 82) == 0 )
  {
    v6 = Curl_ccalloc(1, tv_sec + 4);
    *((_DWORD *)v3 + 82) = v6;
    if ( v6 == nullptr )
      return 27;
  }
  if ( *((_DWORD *)v3 + 83) == 0 )
  {
    v7 = Curl_ccalloc(1, tv_sec + 4);
    *((_DWORD *)v3 + 83) = v7;
    if ( v7 == nullptr )
      return 27;
  }
  *((_BYTE *)a1 + 440) = 1;
  *((_DWORD *)v3 + 4) = a1;
  *((_DWORD *)v3 + 5) = a1[80];
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 2) = -100;
  *((_DWORD *)v3 + 81) = tv_sec;
  *((_DWORD *)v3 + 80) = 512;
  *((_WORD *)v3 + 26) = a1[15]->tv_usec;
  sub_2536B0((int)v3);
  if ( *((_BYTE *)a1 + 463) == 0 )
  {
    if ( j_bind(*((_DWORD *)v3 + 5), (const struct sockaddr *)(v3 + 52), a1[15][2].tv_sec) != 0 )
    {
      v10 = (int)*a1;
      v11 = (int *)j___errno();
      v12 = (const char *)Curl_strerror((int)a1, *v11);
      Curl_failf(v10, "bind() failed; %s", v12);
    }
    v9 = 1;
    *((_BYTE *)a1 + 463) = 1;
  }
  Curl_pgrsStartNow(*a1, v8, v9);
  *a2 = 1;
  return 0;
}


//======================================================================
// sub_2538B4
// address: 0x002538B4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_2538B4(int *a1, __suseconds_t a2)
{
  int v2; // r4
  int v3; // r3
  int result; // r0

  v2 = a1[222];
  v3 = Curl_pgrsDone(a1, a2);
  result = 42;
  if ( v3 == 0 )
    return sub_2535F4(*(_DWORD *)(v2 + 8));
  return result;
}


//======================================================================
// sub_2538D0
// address: 0x002538D0   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_2538D0(int *a1)
{
  int v1; // r4
  char *v3; // r0
  int v4; // r0

  a1[31] = 2;
  v1 = *a1;
  v3 = j_strstr(*(const char **)(*a1 + 34396), ";mode=");
  if ( v3 != nullptr || (v3 = j_strstr((const char *)a1[32], ";mode=")) != nullptr )
  {
    *v3 = 0;
    v4 = Curl_raw_toupper((unsigned __int8)v3[6]);
    *(_BYTE *)(v1 + 755) = v4 == 65 || v4 == 78;
  }
  return 0;
}


//======================================================================
// sub_253928
// address: 0x00253928   size: 0x2C (44 bytes)
//======================================================================
size_t __fastcall sub_253928(unsigned int a1, int a2, char *a3, char *a4)
{
  size_t v7; // r7
  size_t result; // r0

  v7 = a2 + 1 + j_strlen(a4);
  result = 0;
  if ( v7 <= a1 )
  {
    j_strcpy(a3, a4);
    return j_strlen(a4) + 1;
  }
  return result;
}


//======================================================================
// sub_253954
// address: 0x00253954   size: 0x1CA (458 bytes)
//======================================================================
int __fastcall sub_253954(int a1, int a2)
{
  int *v2; // r3
  int v4; // r6
  int v5; // r2
  int v6; // r7
  int v7; // r3
  __int16 v8; // r3
  int v9; // r4
  int *v10; // r0
  int v11; // r2
  int v12; // r3
  __int16 v13; // r3
  int v14; // r4
  int *v15; // r0
  int v16; // r2
  int v17; // r3
  unsigned int v18; // r2
  int v19; // r4
  int *v20; // r0
  int v21; // r2
  __int16 v22; // r3

  v2 = *(int **)(a1 + 16);
  v4 = *v2;
  switch ( a2 )
  {
    case 3:
      v5 = *(unsigned __int16 *)(a1 + 48);
      v6 = (*(unsigned __int8 *)(*(_DWORD *)(a1 + 328) + 2) << 8) | *(unsigned __int8 *)(*(_DWORD *)(a1 + 328) + 3);
      v7 = (unsigned __int16)(v5 + 1);
      if ( v7 == v6 )
      {
        *(_DWORD *)(a1 + 24) = 0;
      }
      else
      {
        if ( v5 != v6 )
        {
          Curl_infof(
            v4,
            "Received unexpected DATA packet block %d, expecting block %d\n",
            (*(unsigned __int8 *)(*(_DWORD *)(a1 + 328) + 2) << 8) | *(unsigned __int8 *)(*(_DWORD *)(a1 + 328) + 3),
            v7);
          return 0;
        }
        Curl_infof(
          v4,
          "Received last DATA packet block %d again.\n",
          (*(unsigned __int8 *)(*(_DWORD *)(a1 + 328) + 2) << 8) | *(unsigned __int8 *)(*(_DWORD *)(a1 + 328) + 3));
      }
      *(_WORD *)(a1 + 48) = v6;
      **(_BYTE **)(a1 + 332) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 1) = 4;
      v8 = *(_WORD *)(a1 + 48);
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 2) = HIBYTE(v8);
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 3) = v8;
      if ( j_sendto(
             *(_DWORD *)(a1 + 20),
             *(const void **)(a1 + 332),
             4u,
             0x4000,
             (const struct sockaddr *)(a1 + 180),
             *(_DWORD *)(a1 + 308)) < 0 )
      {
        v9 = *(_DWORD *)(a1 + 16);
        v10 = (int *)j___errno();
        v11 = Curl_strerror(v9, *v10);
        Curl_failf(v4, "%s", v11);
      }
      if ( *(_DWORD *)(a1 + 320) + 3 < *(_DWORD *)(a1 + 312) )
LABEL_11:
        v12 = 1;
      else
        v12 = 3;
      *(_DWORD *)a1 = v12;
      j_time((time_t *)(a1 + 44));
      return 0;
    case 5:
      **(_BYTE **)(a1 + 332) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 1) = 5;
      v22 = *(_WORD *)(a1 + 48);
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 2) = HIBYTE(v22);
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 3) = v22;
      j_sendto(
        *(_DWORD *)(a1 + 20),
        *(const void **)(a1 + 332),
        4u,
        0x4000,
        (const struct sockaddr *)(a1 + 180),
        *(_DWORD *)(a1 + 308));
      goto LABEL_20;
    case 6:
      *(_WORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 24) = 0;
      **(_BYTE **)(a1 + 332) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 1) = 4;
      v13 = *(_WORD *)(a1 + 48);
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 2) = HIBYTE(v13);
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 3) = v13;
      if ( j_sendto(
             *(_DWORD *)(a1 + 20),
             *(const void **)(a1 + 332),
             4u,
             0x4000,
             (const struct sockaddr *)(a1 + 180),
             *(_DWORD *)(a1 + 308)) < 0 )
      {
        v14 = *(_DWORD *)(a1 + 16);
        v15 = (int *)j___errno();
        v16 = Curl_strerror(v14, *v15);
        Curl_failf(v4, "%s", v16);
      }
      goto LABEL_11;
    case 7:
      v17 = *(_DWORD *)(a1 + 24) + 1;
      v18 = (*(unsigned __int16 *)(a1 + 48) + 1) << 16;
      *(_DWORD *)(a1 + 24) = v17;
      Curl_infof(v4, "Timeout waiting for block %d ACK.  Retries = %d\n", HIWORD(v18), v17);
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 32) )
      {
        if ( j_sendto(
               *(_DWORD *)(a1 + 20),
               *(const void **)(a1 + 332),
               4u,
               0x4000,
               (const struct sockaddr *)(a1 + 180),
               *(_DWORD *)(a1 + 308)) < 0 )
        {
          v19 = *(_DWORD *)(a1 + 16);
          v20 = (int *)j___errno();
          v21 = Curl_strerror(v19, *v20);
          Curl_failf(v4, "%s", v21);
        }
      }
      else
      {
        *(_DWORD *)(a1 + 8) = -99;
LABEL_20:
        *(_DWORD *)a1 = 3;
      }
      return 0;
    default:
      Curl_failf(*v2, "%s", "tftp_rx: internal error");
  }
}


//======================================================================
// sub_253B40
// address: 0x00253B40   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_253B40(int a1, int a2)
{
  int result; // r0

  Curl_infof(**(_DWORD **)(a1 + 16), "%s\n", "Connected for receive");
  *(_DWORD *)a1 = 1;
  result = sub_2536B0(a1);
  if ( result == 0 )
    return sub_253954(a1, a2);
  return result;
}


//======================================================================
// sub_253B78
// address: 0x00253B78   size: 0x1FA (506 bytes)
//======================================================================
int __fastcall sub_253B78(int a1, int a2)
{
  int *v2; // r3
  int v4; // r5
  __int16 v5; // r3
  int v6; // r2
  int v7; // r3
  int v8; // r0
  int v9; // r3
  int v10; // r4
  int v11; // r4
  int *v12; // r0
  int v13; // r2
  __int16 v14; // r2
  int v15; // r4
  int *v16; // r0
  int v17; // r2
  __int64 v18; // r0
  __int64 v19; // r2
  int v20; // r3
  int v21; // r2
  int v22; // r1
  int v23; // r4
  int *v24; // r0
  int v25; // r2
  __int16 v26; // r2

  v2 = *(int **)(a1 + 16);
  v4 = *v2;
  switch ( a2 )
  {
    case 4:
    case 6:
      v5 = 1;
      if ( a2 != 4 )
        goto LABEL_11;
      v6 = (*(unsigned __int8 *)(*(_DWORD *)(a1 + 328) + 2) << 8) | *(unsigned __int8 *)(*(_DWORD *)(a1 + 328) + 3);
      v7 = *(unsigned __int16 *)(a1 + 48);
      if ( v6 == v7 || *(_WORD *)(a1 + 48) == 0 && v6 == 0xFFFF )
      {
        j_time((time_t *)(a1 + 44));
        v5 = *(_WORD *)(a1 + 48) + 1;
LABEL_11:
        v10 = 0;
        *(_WORD *)(a1 + 48) = v5;
        *(_DWORD *)(a1 + 24) = 0;
        **(_BYTE **)(a1 + 332) = 0;
        *(_BYTE *)(*(_DWORD *)(a1 + 332) + 1) = 3;
        v14 = *(_WORD *)(a1 + 48);
        *(_BYTE *)(*(_DWORD *)(a1 + 332) + 2) = HIBYTE(v14);
        *(_BYTE *)(*(_DWORD *)(a1 + 332) + 3) = v14;
        if ( *(unsigned __int16 *)(a1 + 48) <= 1u || *(_DWORD *)(a1 + 316) >= *(_DWORD *)(a1 + 320) )
        {
          v10 = Curl_fillreadbuffer(*(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 320), (unsigned int *)(a1 + 316));
          if ( v10 == 0 )
          {
            if ( j_sendto(
                   *(_DWORD *)(a1 + 20),
                   *(const void **)(a1 + 332),
                   *(_DWORD *)(a1 + 316) + 4,
                   0x4000,
                   (const struct sockaddr *)(a1 + 180),
                   *(_DWORD *)(a1 + 308)) < 0 )
            {
              v15 = *(_DWORD *)(a1 + 16);
              v16 = (int *)j___errno();
              v17 = Curl_strerror(v15, *v16);
              Curl_failf(v4, "%s", v17);
            }
            v18 = *(_QWORD *)(v4 + 120);
            v19 = *(int *)(a1 + 316) + v18;
            *(_QWORD *)(v4 + 120) = v19;
            Curl_pgrsSetUploadCounter(v4, SHIDWORD(v18), v19, SHIDWORD(v19));
          }
        }
        else
        {
          *(_DWORD *)a1 = 3;
        }
      }
      else
      {
        Curl_infof(v4, "Received ACK for block %d, expecting %d\n", v6, v7);
        v8 = *(_DWORD *)(a1 + 32);
        v9 = *(_DWORD *)(a1 + 24) + 1;
        *(_DWORD *)(a1 + 24) = v9;
        if ( v9 > v8 )
          Curl_failf(v4, "tftp_tx: giving up waiting for block %d ack", *(unsigned __int16 *)(a1 + 48));
        v10 = 0;
        if ( j_sendto(
               *(_DWORD *)(a1 + 20),
               *(const void **)(a1 + 332),
               *(_DWORD *)(a1 + 316) + 4,
               0x4000,
               (const struct sockaddr *)(a1 + 180),
               *(_DWORD *)(a1 + 308)) < 0 )
        {
          v11 = *(_DWORD *)(a1 + 16);
          v12 = (int *)j___errno();
          v13 = Curl_strerror(v11, *v12);
          Curl_failf(v4, "%s", v13);
        }
      }
      return v10;
    case 5:
      *(_DWORD *)a1 = 3;
      v10 = 0;
      **(_BYTE **)(a1 + 332) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 1) = 5;
      v26 = *(_WORD *)(a1 + 48);
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 2) = HIBYTE(v26);
      *(_BYTE *)(*(_DWORD *)(a1 + 332) + 3) = v26;
      j_sendto(
        *(_DWORD *)(a1 + 20),
        *(const void **)(a1 + 332),
        4u,
        0x4000,
        (const struct sockaddr *)(a1 + 180),
        *(_DWORD *)(a1 + 308));
      *(_DWORD *)a1 = 3;
      return v10;
    case 7:
      v20 = *(_DWORD *)(a1 + 24) + 1;
      v21 = (unsigned __int16)(*(_WORD *)(a1 + 48) + 1);
      *(_DWORD *)(a1 + 24) = v20;
      Curl_infof(v4, "Timeout waiting for block %d ACK.  Retries = %d\n", v21, v20);
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 32) )
      {
        if ( j_sendto(
               *(_DWORD *)(a1 + 20),
               *(const void **)(a1 + 332),
               *(_DWORD *)(a1 + 316) + 4,
               0x4000,
               (const struct sockaddr *)(a1 + 180),
               *(_DWORD *)(a1 + 308)) < 0 )
        {
          v23 = *(_DWORD *)(a1 + 16);
          v24 = (int *)j___errno();
          v25 = Curl_strerror(v23, *v24);
          Curl_failf(v4, "%s", v25);
        }
        Curl_pgrsSetUploadCounter(v4, v22, *(_DWORD *)(v4 + 120), *(_DWORD *)(v4 + 124));
      }
      else
      {
        *(_DWORD *)(a1 + 8) = -99;
        *(_DWORD *)a1 = 3;
      }
      return 0;
    default:
      Curl_failf(*v2, "tftp_tx: internal error, event: %i", a2);
  }
}


//======================================================================
// sub_253D94
// address: 0x00253D94   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_253D94(int a1, int a2)
{
  int result; // r0

  Curl_infof(**(_DWORD **)(a1 + 16), "%s\n", "Connected for transmit");
  *(_DWORD *)a1 = 2;
  result = sub_2536B0(a1);
  if ( result == 0 )
    return sub_253B78(a1, a2);
  return result;
}


//======================================================================
// sub_253DCC
// address: 0x00253DCC   size: 0x274 (628 bytes)
//======================================================================
int __fastcall sub_253DCC(int a1, int a2)
{
  int *v3; // r2
  int v4; // r6
  const char *v5; // r5
  int v6; // r1
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int result; // r0
  int v12; // r1
  char *v13; // [sp+18h] [bp-54h]

  v3 = *(int **)(a1 + 16);
  v4 = *v3;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      if ( *(_BYTE *)(v4 + 755) != 0 )
        v5 = "netascii";
      else
        v5 = "octet";
      switch ( a2 )
      {
        case 0:
        case 7:
          v6 = *(_DWORD *)(a1 + 32);
          v7 = *(_DWORD *)(a1 + 24) + 1;
          *(_DWORD *)(a1 + 24) = v7;
          if ( v7 <= v6 )
          {
            if ( *(_BYTE *)(v4 + 769) != 0 )
            {
              **(_BYTE **)(a1 + 332) = 0;
              *(_BYTE *)(*(_DWORD *)(a1 + 332) + 1) = 2;
              *(_DWORD *)(**(_DWORD **)(a1 + 16) + 320) = *(_DWORD *)(a1 + 332) + 4;
              v8 = *(_DWORD *)(v4 + 536);
              v9 = *(_DWORD *)(v4 + 540);
              v10 = v8 + 1;
              if ( v8 != -1 || (v10 = v9 + 1, v9 != -1) )
                Curl_pgrsSetUploadSize((_DWORD *)v4, v10, v8, v9);
            }
            else
            {
              **(_BYTE **)(a1 + 332) = 0;
              *(_BYTE *)(*(_DWORD *)(a1 + 332) + 1) = 1;
            }
            v13 = (char *)curl_easy_unescape(v4, (char *)(*(_DWORD *)(**(_DWORD **)(a1 + 16) + 34396) + 1), 0, nullptr);
            result = 27;
            if ( v13 != nullptr )
              curl_msnprintf(*(_DWORD *)(a1 + 332) + 2, *(_DWORD *)(a1 + 320), "%s%c%s%c", v13, 0, v5, 0);
            return result;
          }
          *(_DWORD *)(a1 + 8) = -98;
LABEL_21:
          *(_DWORD *)a1 = 3;
          break;
        case 3:
          v12 = 3;
          return sub_253B40(a1, v12);
        case 4:
          v12 = 4;
          return sub_253D94(a1, v12);
        case 5:
          goto LABEL_21;
        case 6:
          v12 = 6;
          if ( *(_BYTE *)(v4 + 769) != 0 )
            return sub_253D94(a1, v12);
          else
            return sub_253B40(a1, v12);
        default:
          Curl_failf(*v3, "tftp_send_first: internal error");
      }
      return 0;
    case 1:
      return sub_253954(a1, a2);
    case 2:
      return sub_253B78(a1, a2);
    case 3:
      Curl_infof(*v3, "%s\n", "TFTP finished");
      return 0;
    default:
      Curl_failf(*v3, "%s", "Internal state machine error");
  }
}


//======================================================================
// sub_254090
// address: 0x00254090   size: 0x3E8 (1000 bytes)
//======================================================================
int __fastcall sub_254090(int a1, _BYTE *a2)
{
  _DWORD *v2; // r7
  int v3; // r4
  int v4; // r2
  int v5; // r3
  int result; // r0
  _BOOL4 v7; // r3
  int v8; // r0
  int *v9; // r0
  const char *v10; // r0
  int v11; // r6
  int v12; // r4
  int v13; // r3
  char *v14; // r2
  __suseconds_t v15; // r1
  int v16; // r0
  int v17; // r5
  __int64 v18; // r0
  __int64 v19; // r2
  unsigned __int8 *v20; // r4
  unsigned __int8 *v21; // r3
  _BYTE *v22; // r0
  char *v23; // r5
  char *v24; // r3
  size_t v25; // r5
  _BYTE *v26; // r0
  size_t v27; // r5
  size_t v28; // r0
  int v29; // r0
  int v30; // r2
  size_t v31; // r0
  int v32; // r4
  int v33; // r1
  int v34; // [sp+14h] [bp-B0h]
  char *v35; // [sp+18h] [bp-ACh]
  char *v36; // [sp+18h] [bp-ACh]
  char *v38; // [sp+20h] [bp-A4h]
  char *v39; // [sp+20h] [bp-A4h]
  __suseconds_t v41; // [sp+28h] [bp-9Ch]
  char *v42; // [sp+2Ch] [bp-98h]
  char *v43; // [sp+30h] [bp-94h]
  time_t timer; // [sp+38h] [bp-8Ch] BYREF
  struct sockaddr v45; // [sp+3Ch] [bp-88h] BYREF

  v2 = *(_DWORD **)(a1 + 888);
  v3 = *(_DWORD *)a1;
  j_time(&timer);
  if ( timer <= v2[10] )
  {
    if ( timer <= v2[11] + v2[7] )
    {
      v4 = -1;
    }
    else
    {
      j_time(v2 + 11);
      v4 = 7;
    }
    v5 = v2[10] - timer;
  }
  else
  {
    v2[2] = -99;
    *v2 = 3;
    v4 = -1;
    v5 = 0;
  }
  *a2 = 0;
  if ( v5 <= 0 )
    Curl_failf(v3, "TFTP response timeout", v4);
  if ( v4 == -1 )
  {
    v8 = Curl_socket_check(v2[5], -1, -1, 0);
    if ( v8 == -1 )
    {
      v9 = (int *)j___errno();
      v10 = (const char *)Curl_strerror(a1, *v9);
      Curl_failf(v3, "%s", v10);
    }
    if ( v8 == 0 )
      return 0;
    timer = 128;
    v11 = *(_DWORD *)(a1 + 888);
    v12 = *(_DWORD *)a1;
    *(_DWORD *)(v11 + 312) = j_recvfrom(
                               *(_DWORD *)(v11 + 20),
                               *(void **)(v11 + 328),
                               *(_DWORD *)(v11 + 320) + 4,
                               0,
                               &v45,
                               (socklen_t *)&timer);
    if ( *(_DWORD *)(v11 + 308) == 0 )
    {
      j_memcpy((void *)(v11 + 180), &v45, timer);
      *(_DWORD *)(v11 + 308) = timer;
    }
    v13 = *(_DWORD *)(v11 + 312);
    if ( v13 <= 3 )
      Curl_failf(v12, "Received too short packet");
    v14 = *(char **)(v11 + 328);
    v15 = (unsigned __int8)v14[1];
    v16 = ((unsigned __int8)*v14 << 8) | v15;
    *(_DWORD *)(v11 + 12) = v16;
    switch ( v16 )
    {
      case 3:
        if ( v13 != 4 )
        {
          v15 = (unsigned __int16)(*(_WORD *)(v11 + 48) + 1);
          if ( v15 != (((unsigned __int8)v14[2] << 8) | (unsigned __int8)v14[3]) )
            goto LABEL_57;
          v17 = Curl_client_write(a1, 1, v14 + 4, v13 - 4);
          if ( v17 != 0 )
          {
            sub_253DCC(v11, 5);
            return v17;
          }
          v18 = *(_QWORD *)(v12 + 112);
          v19 = *(_DWORD *)(v11 + 312) - 4 + v18;
          *(_QWORD *)(v12 + 112) = v19;
          Curl_pgrsSetDownloadCounter(v12, SHIDWORD(v18), v19, SHIDWORD(v19));
        }
LABEL_57:
        if ( Curl_pgrsUpdate((int *)a1, v15, (__time_t)v14) != 0 )
        {
          sub_253DCC(v11, 5);
          return 42;
        }
        result = sub_253DCC((int)v2, v2[3]);
        if ( result != 0 )
          return result;
        v7 = *v2 == 3;
        *a2 = v7;
        break;
      case 4:
        goto LABEL_57;
      case 5:
        *(_DWORD *)(v11 + 8) = ((unsigned __int8)v14[2] << 8) | (unsigned __int8)v14[3];
        Curl_infof(v12, "%s\n", v14 + 4);
        goto LABEL_57;
      case 6:
        v43 = (char *)(v13 - 2);
        v41 = (__suseconds_t)(v14 + 2);
        v20 = (unsigned __int8 *)(v14 + 2);
        v34 = **(_DWORD **)(v11 + 16);
        *(_DWORD *)(v11 + 320) = 512;
        while ( 1 )
        {
          v15 = v41;
          v14 = v43;
          v21 = (unsigned __int8 *)&v43[v41];
          if ( v20 >= (unsigned __int8 *)&v43[v41] )
            goto LABEL_57;
          v35 = (char *)(v21 - v20);
          v22 = j_memchr(v20, 0, v21 - v20);
          if ( v22 != nullptr )
            v38 = (char *)(v22 - v20);
          else
            v38 = v35;
          v23 = v38 + 1;
          if ( v38 + 1 >= v35 )
            goto LABEL_39;
          v24 = &v23[(_DWORD)v20];
          v25 = v35 - v23;
          v42 = v24;
          v26 = j_memchr(v24, 0, v25);
          if ( v26 != nullptr )
            v25 = v26 - v42;
          v27 = (size_t)&v38[v25 + 2];
          if ( v27 > (unsigned int)v35
            || (v36 = (char *)&v20[j_strlen((const char *)v20) + 1], v39 = (char *)&v20[v27], &v20[v27] == nullptr) )
          {
LABEL_39:
            Curl_failf(v34, "Malformed ACK packet, rejecting");
          }
          Curl_infof(v34, "got option=(%s) value=(%s)\n", (const char *)v20, v36);
          v28 = j_strlen((const char *)v20);
          if ( Curl_raw_nequal(v20, "blksize", v28) != 0 )
          {
            v29 = j_strtol(v36, nullptr, 10);
            if ( v29 == 0 )
              Curl_failf(v34, "invalid blocksize value in OACK packet");
            if ( v29 > 65464 )
              Curl_failf(v34, "%s (%d)", "blksize is larger than max supported", 65464);
            if ( v29 <= 7 )
              Curl_failf(v34, "%s (%d)", "blksize is smaller than min supported", 8);
            v30 = *(_DWORD *)(v11 + 324);
            if ( v29 > v30 )
              Curl_failf(v34, "%s (%ld)", "server requested blksize larger than allocated", v29);
            *(_DWORD *)(v11 + 320) = v29;
            Curl_infof(v34, "%s (%d) %s (%d)\n", "blksize parsed from OACK", v29, "requested", v30);
          }
          else
          {
            v31 = j_strlen((const char *)v20);
            if ( Curl_raw_nequal(v20, "tsize", v31) != 0 )
            {
              v32 = j_strtol(v36, nullptr, 10);
              Curl_infof(v34, "%s (%ld)\n", "tsize parsed from OACK", v32);
              if ( *(_BYTE *)(v34 + 769) == 0 )
              {
                if ( v32 == 0 )
                  Curl_failf(v34, "invalid tsize -:%s:- value in OACK packet", v36);
                Curl_pgrsSetDownloadSize((_DWORD *)v34, v33, v32, v32 >> 31);
              }
            }
          }
          v20 = (unsigned __int8 *)v39;
        }
      default:
        Curl_failf(v12, "%s", "Internal error: Unexpected packet");
    }
  }
  else
  {
    result = sub_253DCC((int)v2, v4);
    if ( result != 0 )
      return result;
    v7 = *v2 == 3;
    *a2 = v7;
  }
  if ( v7 )
    Curl_setup_transfer((struct timeval)((unsigned int)a1 | 0xFFFFFFFF00000000LL), -1, 0, 0, -1, 0);
  return 0;
}


//======================================================================
// sub_254494
// address: 0x00254494   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_254494(int *a1, _BYTE *a2, int a3)
{
  int v5; // r0
  __suseconds_t v6; // r1
  int v7; // r3
  int v8; // r0
  __suseconds_t v9; // r1
  __time_t v10; // r2
  _DWORD *v11; // r5
  struct timeval v13; // [sp+0h] [bp-Ch] BYREF
  int v14; // [sp+8h] [bp-4h]

  v13.tv_sec = (__time_t)a1;
  v13.tv_usec = (__suseconds_t)a2;
  v14 = a3;
  v5 = sub_254090((int)a1, a2);
  v7 = v5;
  if ( *a2 == 0 && v5 == 0 )
  {
    v8 = Curl_pgrsUpdate(a1, v6, (unsigned __int8)*a2);
    v7 = 42;
    if ( v8 == 0 )
    {
      v11 = (_DWORD *)*a1;
      curlx_tvnow(&v13, v9, v10, 42);
      return Curl_speedcheck(v11, v13.tv_sec, v13.tv_usec);
    }
  }
  return v7;
}


//======================================================================
// sub_2544CE
// address: 0x002544CE   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_2544CE(int a1, _BYTE *a2)
{
  _DWORD *v4; // r6
  int result; // r0

  *a2 = 0;
  if ( *(_DWORD *)(a1 + 888) != 0 || (result = sub_2537A4((struct timeval **)a1, a2)) == 0 )
  {
    v4 = *(_DWORD **)(a1 + 888);
    *a2 = 0;
    result = sub_253DCC((int)v4, 0);
    if ( *v4 == 3 )
    {
      if ( result != 0 )
        return result;
    }
    else
    {
      if ( result != 0 )
        return result;
      sub_254090(a1, a2);
    }
    return sub_2535F4(v4[2]);
  }
  return result;
}


//======================================================================
// sub_25553C
// address: 0x0025553C   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_25553C(unsigned int a1)
{
  if ( a1 > 0x5A )
  {
    if ( a1 <= 0x7A )
      return a1 >= 0x61 || a1 == 95;
    return a1 == 126;
  }
  if ( a1 >= 0x40 )
    return 1;
  if ( a1 > 0x3A )
    return a1 == 61;
  return a1 >= 0x24 || a1 == 33;
}


//======================================================================
// sub_255574
// address: 0x00255574   size: 0x44 (68 bytes)
//======================================================================
void __fastcall __noreturn sub_255574(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v6; // r0

  v4 = a1 + 888;
  *(_DWORD *)(a1 + 968) = (*(_DWORD *)(a1 + 968) + 1) % 1000;
  v6 = curlx_sltosi(*(_DWORD *)(a1 + 52) % 26);
  curl_msnprintf(a1 + 972, 5, "%c%03d", v6 + 65, *(_DWORD *)(v4 + 80));
}


//======================================================================
// sub_255600
// address: 0x00255600   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_255600(int a1)
{
  int result; // r0

  for ( result = 0; *(_DWORD *)(a1 + 944) != 0 && result == 0; result = Curl_pp_statemach(a1 + 888, 1) )
    ;
  return result;
}


//======================================================================
// sub_255624
// address: 0x00255624   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_255624(int a1, int a2)
{
  _DWORD *v3; // r4
  int v4; // r3
  int v5; // r3
  void *v6; // r0
  void *v7; // r0

  v3 = (_DWORD *)(a1 + 888);
  if ( a2 == 0 )
  {
    v4 = *(_DWORD *)(a1 + 932);
    if ( v4 != 0 )
    {
      v5 = *(unsigned __int8 *)(v4 + 451);
      if ( v5 != 0 )
        sub_255574(a1, (int)"LOGOUT", 451, v5);
    }
  }
  Curl_pp_disconnect(a1 + 888);
  Curl_sasl_cleanup(a1, v3[19]);
  v6 = (void *)v3[23];
  if ( v6 != nullptr )
  {
    Curl_cfree(v6);
    *(_DWORD *)(a1 + 980) = 0;
  }
  v7 = (void *)v3[24];
  if ( v7 != nullptr )
  {
    Curl_cfree(v7);
    v3[24] = 0;
  }
  return 0;
}


//======================================================================
// sub_2556A4
// address: 0x002556A4   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_2556A4(int a1)
{
  return Curl_pp_getsock(a1 + 888);
}


//======================================================================
// sub_2556B4
// address: 0x002556B4   size: 0x9C (156 bytes)
//======================================================================
char *__fastcall sub_2556B4(const char *a1)
{
  const char *v1; // r4
  int v2; // r5
  const char *v3; // r2
  __int64 v4; // r6
  int v5; // r3
  int v6; // r6
  char *result; // r0
  char *v8; // r3
  int v9; // r2
  char v10; // r2

  v1 = a1;
  if ( a1 != nullptr )
  {
    v2 = 0;
    v3 = a1;
    v4 = 0;
    while ( 1 )
    {
      v5 = *(unsigned __int8 *)v3;
      if ( *v3 == 0 )
        break;
      switch ( v5 )
      {
        case '\\':
          ++HIDWORD(v4);
          break;
        case '"':
          LODWORD(v4) = v4 + 1;
          break;
        case ' ':
          v2 = 1;
          break;
        default:
          break;
      }
      ++v3;
    }
    if ( v4 == 0 && v2 == 0 )
      return Curl_cstrdup(a1);
    v6 = v4 + HIDWORD(v4) + j_strlen(a1) + 2 * v2;
    result = (char *)Curl_cmalloc(v6 + 1);
    if ( result != nullptr )
    {
      v8 = result;
      if ( v2 != 0 )
      {
        *result = 34;
        result[v6 - 1] = 34;
        v8 = result + 1;
      }
      while ( 1 )
      {
        v9 = *(unsigned __int8 *)v1;
        if ( *v1 == 0 )
          break;
        if ( v9 == 92 || v9 == 34 )
          *v8++ = 92;
        v10 = *v1++;
        *v8++ = v10;
      }
      result[v6] = v9;
      return result;
    }
  }
  return nullptr;
}


//======================================================================
// sub_255758
// address: 0x00255758   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_255758(int a1)
{
  _DWORD *v2; // r3
  int v3; // r2
  void *v4; // r3
  const char *v5; // r0
  int v6; // r3
  char *v7; // r5
  int result; // r0

  v2 = *(_DWORD **)(*(_DWORD *)a1 + 328);
  v3 = v2[5];
  if ( v3 != 0 )
  {
    v4 = (void *)v2[6];
    if ( v4 == nullptr )
      v4 = &unk_3FB8EA;
    sub_255574(a1, (int)"%s%s", v3, (int)v4);
  }
  v5 = (const char *)v2[1];
  if ( v5 == nullptr )
    v5 = (const char *)&unk_3FB8EA;
  v7 = sub_2556B4(v5);
  result = 27;
  if ( v7 != nullptr )
    sub_255574(a1, (int)"LIST \"%s\" *", (int)v7, v6);
  return result;
}


//======================================================================
// sub_2557D4
// address: 0x002557D4   size: 0x3C (60 bytes)
//======================================================================
size_t __fastcall sub_2557D4(int a1, const char **a2)
{
  const char *i; // r4
  int v4; // r3
  size_t result; // r0
  int v6; // r3

  for ( i = (const char *)(a1 + 2); ; ++i )
  {
    v4 = *(unsigned __int8 *)i;
    if ( v4 != 32 && v4 != 9 )
      break;
  }
  for ( result = j_strlen(i); result != 0; --result )
  {
    v6 = (unsigned __int8)i[result - 1];
    if ( v6 != 13 && v6 != 32 && (unsigned int)(v6 - 9) > 1 )
    {
      i[result] = 0;
      break;
    }
  }
  *a2 = i;
  return result;
}


//======================================================================
// sub_255810
// address: 0x00255810   size: 0x32 (50 bytes)
//======================================================================
void __fastcall __noreturn sub_255810(int *a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r2
  void *v5; // r3

  v2 = *a1;
  v3 = *(_DWORD *)(v2 + 328);
  v4 = *(_DWORD *)(v3 + 12);
  if ( v4 == 0 )
    Curl_failf(v2, "Cannot FETCH without a UID.");
  v5 = *(void **)(v3 + 16);
  if ( v5 == nullptr )
    v5 = &unk_3FB8EA;
  sub_255574((int)a1, (int)"FETCH %s BODY[%s]", v4, (int)v5);
}


//======================================================================
// sub_255860
// address: 0x00255860   size: 0x5C (92 bytes)
//======================================================================
bool __fastcall sub_255860(int a1, int a2, char *a3)
{
  unsigned int v4; // r4
  size_t v6; // r0
  unsigned __int8 *v7; // r3
  unsigned __int8 *v9; // r5

  v4 = a1 + a2;
  v6 = j_strlen(a3);
  v7 = (unsigned __int8 *)(a1 + 2);
  if ( a1 + 2 < v4 && (unsigned int)*(unsigned __int8 *)(a1 + 2) - 48 <= 9 )
  {
    while ( ++v7 != (unsigned __int8 *)v4 )
    {
      if ( (unsigned int)*v7 - 48 > 9 )
      {
        if ( *v7 != 32 )
          return false;
        ++v7;
        goto LABEL_8;
      }
    }
    return false;
  }
LABEL_8:
  v9 = &v7[v6];
  if ( (unsigned int)&v7[v6] > v4 || !Curl_raw_nequal(v7, a3, v6) )
    return false;
  return *v9 == 32 || v9 == (unsigned __int8 *)v4;
}


//======================================================================
// sub_2558BC
// address: 0x002558BC   size: 0x1F8 (504 bytes)
//======================================================================
int __fastcall sub_2558BC(int a1, _BYTE *a2, unsigned int a3, int *a4)
{
  int v7; // r7
  unsigned int v8; // r5
  _BYTE *v9; // r4
  int v10; // r0
  int v11; // r3
  int result; // r0
  int v13; // r0
  unsigned int v14; // r3
  int v15; // r0
  int v16; // r1
  char *v17; // r2
  char *v18; // r2
  const char *v19; // r4
  unsigned int v20; // r3
  size_t v22; // [sp+8h] [bp-14h]
  int v23; // [sp+Ch] [bp-10h]
  void *v24; // [sp+10h] [bp-Ch]

  v7 = *(_DWORD *)(*(_DWORD *)a1 + 328);
  v23 = *(_DWORD *)a1;
  v24 = (void *)(a1 + 972);
  v22 = j_strlen((const char *)(a1 + 972));
  if ( a3 >= v22 + 1 && j_memcmp(v24, a2, v22) == 0 && a2[v22] == 32 )
  {
    v8 = a3 - v22 - 1;
    if ( v8 > 1 )
    {
      v9 = &a2[v22 + 1];
      v10 = j_memcmp(v9, "OK", 2u);
      v11 = 79;
      if ( v10 == 0 )
      {
LABEL_8:
        *a4 = v11;
        return 1;
      }
      if ( j_memcmp(v9, "NO", 2u) == 0 )
      {
        v11 = 78;
        goto LABEL_8;
      }
      if ( v8 != 2 )
      {
        v13 = j_memcmp(v9, "BAD", 3u);
        v11 = 66;
        if ( v13 == 0 )
          goto LABEL_8;
      }
    }
    Curl_failf(v23, "Bad tagged response");
  }
  if ( a3 <= 1 )
    return 0;
  if ( j_memcmp("* ", a2, 2u) == 0 )
  {
    v14 = *(_DWORD *)(a1 + 944);
    if ( v14 == 17 )
    {
      if ( *(_DWORD *)(v7 + 20) != 0 || sub_255860((int)a2, a3, "LIST") )
      {
        v18 = *(char **)(v7 + 20);
        if ( v18 == nullptr
          || sub_255860((int)a2, a3, v18)
          || j_strcmp(*(const char **)(v7 + 20), "STORE") == 0 && sub_255860((int)a2, a3, "FETCH") )
        {
          goto LABEL_40;
        }
        v19 = *(const char **)(v7 + 20);
        if ( j_strcmp(v19, "SELECT") == 0
          || j_strcmp(v19, "EXAMINE") == 0
          || j_strcmp(v19, "SEARCH") == 0
          || j_strcmp(v19, "EXPUNGE") == 0
          || j_strcmp(v19, "LSUB") == 0
          || j_strcmp(v19, "UID") == 0
          || j_strcmp(v19, "NOOP") == 0 )
        {
          goto LABEL_40;
        }
      }
    }
    else
    {
      if ( v14 > 0x11 )
      {
        if ( v14 == 18 )
        {
LABEL_40:
          v11 = 42;
          goto LABEL_8;
        }
        if ( v14 != 19 )
          return 0;
        v15 = (int)a2;
        v16 = a3;
        v17 = "FETCH";
        goto LABEL_39;
      }
      if ( v14 == 2 )
      {
        v15 = (int)a2;
        v16 = a3;
        v17 = "CAPABILITY";
LABEL_39:
        if ( sub_255860(v15, v16, v17) )
          goto LABEL_40;
      }
    }
    return 0;
  }
  if ( (a3 != 3 || *a2 != 43) && j_memcmp("+ ", a2, 2u) != 0 )
    return 0;
  v20 = *(_DWORD *)(a1 + 944) - 5;
  if ( v20 > 0x10 || (result = 1, ((1 << v20) & 0x105FF) == 0) )
    Curl_failf(v23, "Unexpected continuation response");
  *a4 = 43;
  return result;
}


//======================================================================
// sub_255B04
// address: 0x00255B04   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_255B04(int a1, int a2)
{
  int v2; // r3
  _DWORD *v3; // r4
  int v4; // r6
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0

  v2 = *(_DWORD *)a1;
  v3 = *(_DWORD **)(*(_DWORD *)a1 + 328);
  v4 = a2;
  if ( v3 == nullptr )
    return 0;
  if ( a2 != 0 )
  {
    *(_BYTE *)(a1 + 440) = 1;
  }
  else if ( *(_BYTE *)(v2 + 801) == 0 && v3[5] == 0 && (v3[3] != 0 || *(_BYTE *)(v2 + 769) != 0) )
  {
    if ( *(_BYTE *)(v2 + 769) != 0 )
      Curl_pp_sendf(a1 + 888, "%s", (const char *)&unk_3FB8EA);
    *(_DWORD *)(a1 + 944) = 20;
    v4 = sub_255600(a1);
  }
  v5 = (void *)v3[1];
  if ( v5 != nullptr )
  {
    Curl_cfree(v5);
    v3[1] = 0;
  }
  v6 = (void *)v3[2];
  if ( v6 != nullptr )
  {
    Curl_cfree(v6);
    v3[2] = 0;
  }
  v7 = (void *)v3[3];
  if ( v7 != nullptr )
  {
    Curl_cfree(v7);
    v3[3] = 0;
  }
  v8 = (void *)v3[4];
  if ( v8 != nullptr )
  {
    Curl_cfree(v8);
    v3[4] = 0;
  }
  v9 = (void *)v3[5];
  if ( v9 != nullptr )
  {
    Curl_cfree(v9);
    v3[5] = 0;
  }
  v10 = (void *)v3[6];
  if ( v10 != nullptr )
  {
    Curl_cfree(v10);
    v3[6] = 0;
  }
  *v3 = 0;
  return v4;
}


//======================================================================
// sub_255C08
// address: 0x00255C08   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_255C08(int a1, bool *a2)
{
  int v4; // r2
  int result; // r0
  int v6; // r4

  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 484) + 64) & 1) == 0 || (v4 = *(unsigned __int8 *)(a1 + 948), result = 4, v4 != 0) )
  {
    v6 = a1 + 888;
    result = Curl_pp_statemach(a1 + 888, 0);
    *a2 = *(_DWORD *)(v6 + 56) == 0;
  }
  return result;
}


//======================================================================
// sub_255C40
// address: 0x00255C40   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_255C40(struct timeval a1)
{
  if ( **(_DWORD **)(*(_DWORD *)a1.tv_sec + 328) != 0 )
  {
    a1.tv_usec = -1;
    Curl_setup_transfer(a1, -1, 0, 0, -1, 0);
  }
  return 0;
}


//======================================================================
// sub_255C6C
// address: 0x00255C6C   size: 0x1C (28 bytes)
//======================================================================
__time_t __fastcall sub_255C6C(int a1, bool *a2)
{
  struct timeval v4; // r0

  v4.tv_sec = sub_255C08(a1, a2);
  if ( v4.tv_sec == 0 && *a2 )
  {
    v4.tv_sec = a1;
    v4.tv_sec = sub_255C40(v4);
  }
  return v4.tv_sec;
}


//======================================================================
// sub_255C88
// address: 0x00255C88   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_255C88(int a1)
{
  int v1; // r6
  int v3; // r5
  char *v4; // r7
  char *v5; // r0
  char *v6; // r2
  char *v7; // r3

  v1 = *(unsigned __int8 *)(a1 + 444);
  if ( *(_BYTE *)(a1 + 444) != 0 )
  {
    v3 = a1 + 252;
    v4 = sub_2556B4(*(const char **)(a1 + 268));
    v5 = sub_2556B4(*(const char **)(v3 + 20));
    v6 = v4;
    if ( v4 == nullptr )
      v6 = (char *)&unk_3FB8EA;
    v7 = v5;
    if ( v5 == nullptr )
      v7 = (char *)&unk_3FB8EA;
    sub_255574(a1, (int)"LOGIN %s %s", (int)v6, (int)v7);
  }
  *(_DWORD *)(a1 + 944) = v1;
  return v1;
}


//======================================================================
// sub_255D18
// address: 0x00255D18   size: 0x1B6 (438 bytes)
//======================================================================
int __fastcall sub_255D18(int a1)
{
  int login_message; // r6
  int v3; // r0
  int v4; // r3
  const char *v5; // r2
  int v6; // r2
  int v8; // [sp+10h] [bp-Ch] BYREF
  _DWORD v9[2]; // [sp+14h] [bp-8h] BYREF

  login_message = *(unsigned __int8 *)(a1 + 444);
  v3 = *(_DWORD *)a1;
  v8 = 0;
  v9[0] = 0;
  if ( login_message == 0 )
  {
    *(_DWORD *)(a1 + 944) = 0;
    return login_message;
  }
  v4 = *(_DWORD *)(a1 + 952);
  if ( (v4 & 8) != 0 && (*(_DWORD *)(a1 + 960) & 8) != 0 )
  {
    *(_DWORD *)(a1 + 964) = 8;
    v5 = "DIGEST-MD5";
    goto LABEL_28;
  }
  if ( (v4 & 4) != 0 && (*(_DWORD *)(a1 + 960) & 4) != 0 )
  {
    *(_DWORD *)(a1 + 964) = 4;
    v5 = "CRAM-MD5";
    goto LABEL_28;
  }
  if ( (v4 & 0x80) != 0 && ((v6 = *(_DWORD *)(a1 + 960)) & 0x80) != 0 && v6 != -1 || *(_DWORD *)(a1 + 280) != 0 )
  {
    *(_DWORD *)(a1 + 964) = 128;
    if ( *(_BYTE *)(a1 + 979) != 0 || *(_BYTE *)(v3 + 1008) != 0 )
      Curl_sasl_create_xoauth2_message(v3, *(_DWORD *)(a1 + 268), *(_DWORD *)(a1 + 280), &v8, v9);
    v5 = "XOAUTH2";
    goto LABEL_28;
  }
  if ( (v4 & 1) != 0 && (*(_DWORD *)(a1 + 960) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 964) = 1;
    if ( *(_BYTE *)(a1 + 979) != 0 || *(_BYTE *)(v3 + 1008) != 0 )
    {
      login_message = Curl_sasl_create_login_message(v3, *(char **)(a1 + 268));
      v5 = "LOGIN";
      goto LABEL_27;
    }
    v5 = "LOGIN";
    goto LABEL_28;
  }
  if ( (v4 & 2) != 0 && (*(_DWORD *)(a1 + 960) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 964) = 2;
    if ( *(_BYTE *)(a1 + 979) != 0 || *(_BYTE *)(v3 + 1008) != 0 )
    {
      login_message = Curl_sasl_create_plain_message(v3, *(char **)(a1 + 268), *(_DWORD *)(a1 + 272), (int)&v8, (int)v9);
      v5 = "PLAIN";
LABEL_27:
      if ( login_message != 0 )
        return login_message;
      goto LABEL_28;
    }
    v5 = "PLAIN";
LABEL_28:
    if ( (*(_DWORD *)(a1 + 956) & 2) != 0 )
    {
      if ( v8 != 0 )
        sub_255574(a1, (int)"AUTHENTICATE %s %s", (int)v5, v8);
      sub_255574(a1, (int)"AUTHENTICATE %s", (int)v5, 0);
    }
  }
  if ( *(_BYTE *)(a1 + 978) == 0 && (*(_DWORD *)(a1 + 956) & 1) != 0 )
    return sub_255C88(a1);
  login_message = 67;
  Curl_infof(*(_DWORD *)a1, "No known authentication mechanisms supported!\n");
  return login_message;
}


//======================================================================
// sub_255F08
// address: 0x00255F08   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_255F08(int a1)
{
  int v1; // r4
  void *v3; // r0

  v1 = *(_DWORD *)a1;
  v3 = Curl_ccalloc(0x1Cu, 1u);
  *(_DWORD *)(v1 + 328) = v3;
  if ( v3 == nullptr )
    return 27;
  if ( *(_BYTE *)(a1 + 443) == 0 || *(_BYTE *)(v1 + 754) != 0 )
  {
    ++*(_DWORD *)(v1 + 34396);
    return 0;
  }
  else
  {
    if ( *(char ***)(a1 + 484) != &Curl_handler_imap )
      Curl_failf(v1, "IMAPS not supported!");
    *(_DWORD *)(a1 + 484) = &off_459E48;
    return Curl_http_setup_conn((int *)a1);
  }
}


//======================================================================
// sub_255F8C
// address: 0x00255F8C   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_255F8C(int *a1, int a2)
{
  int v3; // r5
  int v4; // r5
  const char *v6; // [sp+18h] [bp-114h] BYREF
  char *v7; // [sp+1Ch] [bp-110h] BYREF
  int v8; // [sp+20h] [bp-10Ch] BYREF
  _BYTE v9[64]; // [sp+24h] [bp-108h] BYREF
  char v10[64]; // [sp+64h] [bp-C8h] BYREF
  _BYTE v11[128]; // [sp+A4h] [bp-88h] BYREF

  v3 = *a1;
  v6 = nullptr;
  v7 = nullptr;
  v8 = 0;
  if ( a2 != 43 )
    Curl_failf(v3, "Access denied: %d", a2);
  sub_2557D4(v3 + 1388, &v6);
  if ( Curl_sasl_decode_digest_md5_message(v6, v9) != 0 || j_strcmp(v10, "md5-sess") != 0 )
    Curl_pp_sendf(a1 + 222, "%s", "*");
  v4 = Curl_sasl_create_digest_md5_message(v3, v9, v11, a1[67], a1[68], "imap", &v7, &v8);
  if ( v4 == 0 && v7 != nullptr )
    Curl_pp_sendf(a1 + 222, "%s", v7);
  if ( v7 != nullptr )
    Curl_cfree(v7);
  return v4;
}


//======================================================================
// sub_25609C
// address: 0x0025609C   size: 0x830 (2096 bytes)
//======================================================================
int __fastcall sub_25609C(int a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // r0
  int v5; // r6
  int plain_message; // r4
  int v7; // r0
  unsigned __int8 *i; // r5
  int v9; // r3
  unsigned __int8 *v10; // r3
  int v11; // r2
  unsigned int v12; // r4
  int v13; // r1
  _BYTE *v14; // r3
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  char *v24; // r0
  int v25; // r5
  int v26; // r0
  int v27; // r3
  char *v28; // r5
  size_t v29; // r0
  char *v30; // r4
  int v31; // r5
  void *v32; // r0
  const char *v33; // r0
  const char *v34; // r1
  int j; // r4
  int v37; // r1
  char *v38; // r2
  size_t v39; // r5
  unsigned int v40; // r2
  void *v41; // r0
  int v42; // [sp+30h] [bp-5Ch]
  int v43; // [sp+30h] [bp-5Ch]
  int v44; // [sp+3Ch] [bp-50h]
  __int64 v45; // [sp+40h] [bp-4Ch]
  int v46; // [sp+50h] [bp-3Ch]
  int v47; // [sp+58h] [bp-34h] BYREF
  int v48; // [sp+5Ch] [bp-30h] BYREF
  char *v49; // [sp+60h] [bp-2Ch] BYREF
  const char *v50; // [sp+64h] [bp-28h] BYREF
  char *v51; // [sp+68h] [bp-24h] BYREF
  char *v52; // [sp+6Ch] [bp-20h] BYREF
  char v53[20]; // [sp+70h] [bp-1Ch] BYREF

  v2 = a1 + 888;
  v44 = a1 + 888;
  v46 = *(_DWORD *)(a1 + 320);
  v48 = 0;
  if ( *(_DWORD *)(a1 + 944) == 4 )
    ((void (*)(void))sub_2568CC)();
  if ( *(_DWORD *)(v2 + 24) != 0 )
  {
    v3 = Curl_pp_flushsend(v2);
    sub_2568CC(v3);
LABEL_5:
    Curl_pp_sendf(v44, "%s", (const char *)&unk_3FB8EA);
  }
  while ( 2 )
  {
    v4 = Curl_pp_readresp(v46, v44, &v47, &v48);
    v5 = v4;
    if ( v4 != 0 )
      sub_2568CC(v4);
    plain_message = v47;
    if ( v47 == -1 )
      sub_2569B8(0);
    if ( plain_message == 0 )
LABEL_13:
      sub_2568CC(0);
    switch ( *(_DWORD *)(a1 + 944) )
    {
      case 1:
        if ( plain_message != 79 )
          Curl_failf(*(_DWORD *)a1, "Got unexpected imap-server response");
        *(_DWORD *)(a1 + 952) = 0;
        *(_DWORD *)(a1 + 964) = 0;
        *(_BYTE *)(a1 + 977) = 0;
        sub_255574(a1, (int)"CAPABILITY", a1 + 977, 0);
      case 2:
        v7 = *(_DWORD *)a1;
        if ( plain_message == 42 )
        {
          for ( i = (unsigned __int8 *)(v7 + 1390); ; i += v12 )
          {
            while ( 1 )
            {
              v9 = *i;
              if ( *i == 0 )
                goto LABEL_155;
              if ( v9 != 32 && (unsigned int)(v9 - 9) > 1 && v9 != 13 )
                break;
              ++i;
            }
            v10 = i;
            do
            {
              v11 = *v10;
              v12 = v10 - i;
              if ( (v11 & 0xDF) == 0 )
                break;
              if ( (unsigned int)(v11 - 9) <= 1 )
                break;
              ++v10;
            }
            while ( v11 != 13 );
            switch ( v12 )
            {
              case 8u:
                if ( j_memcmp(i, "STARTTLS", 8u) == 0 )
                {
                  v13 = 977;
                  goto LABEL_41;
                }
                break;
              case 0xDu:
                if ( j_memcmp(i, "LOGINDISABLED", 0xDu) == 0 )
                {
                  v14 = (_BYTE *)(a1 + 978);
                  goto LABEL_37;
                }
                break;
              case 7u:
                if ( j_memcmp(i, "SASL-IR", 7u) == 0 )
                {
                  v13 = 979;
LABEL_41:
                  v14 = (_BYTE *)(a1 + v13);
LABEL_37:
                  *v14 = 1;
                  continue;
                }
                break;
              default:
                if ( v12 <= 5 )
                  continue;
                break;
            }
            if ( j_memcmp(i, "AUTH=", 5u) == 0 )
            {
              v12 -= 5;
              i += 5;
              switch ( v12 )
              {
                case 5u:
                  if ( j_memcmp(i, "LOGIN", 5u) == 0 )
                  {
                    v15 = a1 + 888;
                    v16 = 1;
                  }
                  else
                  {
                    if ( j_memcmp(i, "PLAIN", 5u) != 0 )
                      continue;
                    v15 = a1 + 888;
                    v16 = 2;
                  }
                  goto LABEL_67;
                case 8u:
                  if ( j_memcmp(i, "CRAM-MD5", 8u) == 0 )
                  {
                    v15 = a1 + 888;
                    v16 = 4;
                  }
                  else
                  {
                    v12 = 8;
                    if ( j_memcmp(i, "EXTERNAL", 8u) != 0 )
                      continue;
                    v15 = a1 + 888;
                    v16 = 32;
                  }
                  goto LABEL_67;
                case 0xAu:
                  if ( j_memcmp(i, "DIGEST-MD5", 0xAu) != 0 )
                    continue;
                  v15 = a1 + 888;
                  v16 = 8;
                  goto LABEL_67;
                case 6u:
                  if ( j_memcmp(i, "GSSAPI", 6u) != 0 )
                    continue;
                  v15 = a1 + 888;
                  v16 = 16;
                  goto LABEL_67;
                case 4u:
                  if ( j_memcmp(i, "NTLM", 4u) != 0 )
                    continue;
                  v15 = a1 + 888;
                  v16 = 64;
                  goto LABEL_67;
                default:
                  break;
              }
              if ( v12 == 7 && j_memcmp(i, "XOAUTH2", 7u) == 0 )
              {
                v15 = a1 + 888;
                v16 = 128;
LABEL_67:
                *(_DWORD *)(v15 + 64) |= v16;
                continue;
              }
            }
          }
        }
        if ( plain_message == 79 )
        {
          v17 = *(_DWORD *)(v7 + 784);
          if ( v17 != 0 && *(_BYTE *)(a1 + 356) == 0 )
          {
            if ( *(_BYTE *)(a1 + 977) != 0 )
              sub_255574(a1, (int)"STARTTLS", *(unsigned __int8 *)(a1 + 977), v17);
            if ( v17 != 1 )
              Curl_failf(v7, "STARTTLS not supported.");
          }
          v18 = sub_255D18(a1);
        }
        else
        {
          v18 = sub_255C88(a1);
        }
LABEL_141:
        v5 = v18;
LABEL_155:
        plain_message = v5;
        goto LABEL_165;
      case 3:
        v19 = *(_DWORD *)a1;
        if ( plain_message != 79 )
        {
          if ( *(_DWORD *)(v19 + 784) != 1 )
            Curl_failf(v19, "STARTTLS denied. %c", plain_message);
          v20 = sub_255D18(a1);
LABEL_112:
          plain_message = v20;
LABEL_165:
          if ( plain_message != 0 )
            return sub_2568CC(plain_message);
LABEL_6:
          if ( *(_DWORD *)(a1 + 944) == 0 || Curl_pp_moredata(v44) == 0 )
            goto LABEL_13;
          continue;
        }
        plain_message = 4;
        return sub_2568CC(plain_message);
      case 5:
        v21 = *(_DWORD *)a1;
        v51 = nullptr;
        v52 = nullptr;
        if ( plain_message != 43 )
          Curl_failf(v21, "Access denied. %c", plain_message);
        plain_message = Curl_sasl_create_plain_message(
                          v21,
                          *(char **)(a1 + 268),
                          *(_DWORD *)(a1 + 272),
                          (int)&v52,
                          (int)&v51);
        if ( plain_message == 0 && v52 != nullptr )
          Curl_pp_sendf(v44, "%s");
        goto LABEL_98;
      case 6:
        v22 = *(_DWORD *)a1;
        v51 = nullptr;
        v52 = nullptr;
        if ( plain_message != 43 )
          Curl_failf(v22, "Access denied: %d", plain_message);
        plain_message = Curl_sasl_create_login_message(v22, *(char **)(a1 + 268));
        if ( plain_message == 0 && v52 != nullptr )
          Curl_pp_sendf(v44, "%s", v52);
        goto LABEL_98;
      case 7:
        v23 = *(_DWORD *)a1;
        v51 = nullptr;
        v52 = nullptr;
        if ( plain_message != 43 )
          Curl_failf(v23, "Access denied: %d", plain_message);
        plain_message = Curl_sasl_create_login_message(v23, *(char **)(a1 + 272));
        if ( plain_message == 0 && v52 != nullptr )
          Curl_pp_sendf(v44, "%s");
LABEL_98:
        v24 = v52;
        goto LABEL_109;
      case 8:
        v25 = *(_DWORD *)a1;
        v49 = nullptr;
        v50 = nullptr;
        v51 = nullptr;
        v52 = nullptr;
        if ( plain_message != 43 )
          Curl_failf(v25, "Access denied: %d", plain_message);
        sub_2557D4(v25 + 1388, &v50);
        if ( Curl_sasl_decode_cram_md5_message(v50, &v49, &v52) != 0 )
          Curl_pp_sendf(v44, "%s", "*");
        plain_message = Curl_sasl_create_cram_md5_message(
                          v25,
                          v49,
                          *(_DWORD *)(a1 + 268),
                          *(_DWORD *)(a1 + 272),
                          (int)&v51,
                          (int)&v52);
        if ( plain_message == 0 && v51 != nullptr )
          Curl_pp_sendf(v44, "%s", v51);
        if ( v49 != nullptr )
        {
          Curl_cfree(v49);
          v49 = nullptr;
        }
        v24 = v51;
LABEL_109:
        if ( v24 != nullptr )
          Curl_cfree(v24);
        goto LABEL_165;
      case 9:
        v20 = sub_255F8C((int *)a1, plain_message);
        goto LABEL_112;
      case 0xA:
        if ( plain_message != 43 )
          Curl_failf(*(_DWORD *)a1, "Authentication failed: %d", plain_message);
        goto LABEL_5;
      case 0xD:
        v26 = *(_DWORD *)a1;
        v51 = nullptr;
        v52 = nullptr;
        if ( plain_message != 43 )
          Curl_failf(v26, "Access denied: %d", plain_message);
        Curl_sasl_create_xoauth2_message(v26, *(_DWORD *)(a1 + 268), *(_DWORD *)(a1 + 280), &v52, &v51);
      case 0xE:
        Curl_failf(*(_DWORD *)a1, "Authentication cancelled");
      case 0xF:
        if ( plain_message != 79 )
          Curl_failf(*(_DWORD *)a1, "Authentication failed: %d", plain_message);
        goto LABEL_153;
      case 0x10:
        if ( plain_message != 79 )
          Curl_failf(*(_DWORD *)a1, "Access denied. %c", plain_message);
        v27 = a1 + 888;
        goto LABEL_154;
      case 0x11:
        v28 = (char *)(*(_DWORD *)a1 + 1388);
        v29 = j_strlen(v28);
        if ( plain_message == 42 )
        {
          v30 = &v28[v29];
          v28[v29] = 10;
          v5 = Curl_client_write(a1, 1, v28, v29 + 1);
          *v30 = 0;
          goto LABEL_155;
        }
        if ( plain_message == 79 )
          goto LABEL_153;
        v5 = 21;
        goto LABEL_155;
      case 0x12:
        v42 = *(_DWORD *)a1;
        v31 = *(_DWORD *)(*(_DWORD *)a1 + 328);
        if ( plain_message == 42 )
        {
          if ( j_sscanf((const char *)(*(_DWORD *)a1 + 1390), "OK [UIDVALIDITY %19[0123456789]]", v53) == 1 )
          {
            v32 = *(void **)(a1 + 984);
            if ( v32 != nullptr )
            {
              Curl_cfree(v32);
              *(_DWORD *)(a1 + 984) = 0;
            }
            *(_DWORD *)(a1 + 984) = Curl_cstrdup(v53);
          }
          goto LABEL_155;
        }
        if ( plain_message != 79 )
          Curl_failf(v42, "Select failed");
        v33 = *(const char **)(v31 + 8);
        if ( v33 != nullptr )
        {
          v34 = *(const char **)(a1 + 984);
          if ( v34 != nullptr && j_strcmp(v33, v34) != 0 )
            Curl_failf(v42, "Mailbox UIDVALIDITY has changed");
        }
        *(_DWORD *)(a1 + 980) = Curl_cstrdup(*(const char **)(v31 + 4));
        if ( *(_DWORD *)(v31 + 20) == 0 )
          sub_255810((int *)a1);
        v18 = sub_255758(a1);
        goto LABEL_141;
      case 0x13:
        v43 = *(_DWORD *)a1;
        if ( plain_message != 42 )
        {
          Curl_pgrsSetDownloadSize((_DWORD *)v43, 888, 0, 0);
          *(_DWORD *)(a1 + 944) = 0;
          plain_message = 78;
          return sub_2568CC(plain_message);
        }
        for ( j = *(_DWORD *)a1 + 1388; ; ++j )
        {
          if ( *(_BYTE *)j == 0 )
            goto LABEL_152;
          if ( *(_BYTE *)j == 123 )
            break;
        }
        v45 = j_strtoll((const char *)(j + 1), &v52, 10);
        if ( (int)&v52[-j] <= 1 || *v52 != 125 || v52[1] != 13 || v52[2] != 0 )
LABEL_152:
          Curl_failf(**(_DWORD **)(a1 + 932), "Failed to parse FETCH response.");
        Curl_infof(v43, "Found %llu bytes to download\n", v45);
        Curl_pgrsSetDownloadSize((_DWORD *)v43, v37, v45, SHIDWORD(v45));
        v38 = *(char **)(a1 + 888);
        if ( v38 != nullptr )
        {
          v39 = *(_DWORD *)(a1 + 892);
          if ( v39 > (unsigned int)v45 )
            v39 = v45;
          plain_message = Curl_client_write(a1, 1, v38, v39);
          if ( plain_message != 0 )
            return sub_2568CC(plain_message);
          *(_QWORD *)(v43 + 112) += v39;
          Curl_infof(v43, "Written %llu bytes, %llu bytes are left for transfer\n", (unsigned __int64)v39, v45 - v39);
          v40 = *(_DWORD *)(a1 + 892);
          if ( v40 <= v39 )
          {
            v41 = *(void **)(a1 + 888);
            if ( v41 != nullptr )
            {
              Curl_cfree(v41);
              *(_DWORD *)(a1 + 888) = 0;
            }
            *(_DWORD *)(a1 + 892) = 0;
          }
          else
          {
            j_memmove(*(void **)(a1 + 888), (const void *)(*(_DWORD *)(a1 + 888) + v39), v40 - v39);
            *(_DWORD *)(a1 + 892) -= v39;
          }
        }
        if ( *(_QWORD *)(v43 + 112) == v45 )
        {
          Curl_setup_transfer((struct timeval)((unsigned int)a1 | 0xFFFFFFFF00000000LL), -1, 0, 0, -1, 0);
        }
        else
        {
          *(_QWORD *)(v43 + 96) = v45;
          Curl_setup_transfer((struct timeval)(unsigned int)a1, v45, 0, 0, -1, 0);
        }
LABEL_153:
        v27 = a1 + 888;
LABEL_154:
        *(_DWORD *)(v27 + 56) = 0;
        goto LABEL_155;
      case 0x14:
        if ( plain_message == 79 )
          goto LABEL_164;
        return sub_2569B8(*(_DWORD *)(a1 + 944) - 1);
      case 0x15:
        if ( plain_message == 43 )
        {
          Curl_pgrsSetUploadSize(
            *(_DWORD **)a1,
            536,
            *(_DWORD *)(*(_DWORD *)a1 + 536),
            *(_DWORD *)(*(_DWORD *)a1 + 540));
          Curl_setup_transfer((struct timeval)((unsigned int)a1 | 0xFFFFFFFF00000000LL), -1, 0, 0, 0, 0);
          *(_DWORD *)(a1 + 944) = 0;
        }
        else
        {
          v5 = 25;
        }
        goto LABEL_155;
      case 0x16:
        if ( plain_message == 79 )
          goto LABEL_164;
        return sub_2568CC(25);
      default:
LABEL_164:
        *(_DWORD *)(a1 + 944) = 0;
        goto LABEL_6;
    }
  }
}


//======================================================================
// sub_2568CC
// address: 0x002568CC   size: 0xE (14 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2568CC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_2569B8
// address: 0x002569B8   size: 0x4 (4 bytes)
//======================================================================
void __fastcall sub_2569B8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  sub_2568CC(8, a2, a3, a4, a5, a6, a7, a8, a9);
}


//======================================================================
// sub_2569EC
// address: 0x002569EC   size: 0x132 (306 bytes)
//======================================================================
int __fastcall sub_2569EC(int a1, bool *a2)
{
  _DWORD *v2; // r4
  const char *v5; // r0
  _BYTE *i; // r5
  const char *v8; // r5
  int v9; // r3

  *a2 = false;
  *(_BYTE *)(a1 + 440) = 0;
  v2 = (_DWORD *)(a1 + 888);
  *(_DWORD *)(a1 + 928) = 1800000;
  *(_DWORD *)(a1 + 932) = a1;
  *(_DWORD *)(a1 + 936) = sub_25609C;
  *(_DWORD *)(a1 + 956) = -1;
  *(_DWORD *)(a1 + 940) = sub_2558BC;
  *(_DWORD *)(a1 + 960) = -1;
  Curl_pp_init(a1 + 888);
  v5 = *(const char **)(a1 + 276);
  if ( v5 == nullptr )
    goto LABEL_27;
  for ( i = *(_BYTE **)(a1 + 276); *i != 0 && *i != 61; ++i )
    ;
  if ( !curl_strnequal(v5, "AUTH", 4u) )
    return 3;
  v8 = i + 1;
  if ( curl_strequal(v8, "*") )
  {
    v9 = -1;
LABEL_14:
    v2[17] = v9;
    goto LABEL_25;
  }
  if ( curl_strequal(v8, "LOGIN") )
  {
    v2[17] = 2;
    v9 = 1;
  }
  else
  {
    if ( curl_strequal(v8, "PLAIN") )
    {
      v9 = 2;
      goto LABEL_14;
    }
    if ( curl_strequal(v8, "CRAM-MD5") )
    {
      v2[17] = 2;
      v9 = 4;
    }
    else if ( curl_strequal(v8, "DIGEST-MD5") )
    {
      v2[17] = 2;
      v9 = 8;
    }
    else if ( curl_strequal(v8, "GSSAPI") )
    {
      v2[17] = 2;
      v9 = 16;
    }
    else if ( curl_strequal(v8, "NTLM") )
    {
      v2[17] = 2;
      v9 = 64;
    }
    else
    {
      if ( !curl_strequal(v8, "XOAUTH2") )
      {
        v2[17] = 0;
        v2[18] = 0;
        goto LABEL_27;
      }
      v2[17] = 2;
      v9 = 128;
    }
  }
LABEL_25:
  v2[18] = v9;
LABEL_27:
  v2[14] = 1;
  j_strcpy((char *)(a1 + 972), "*");
  return sub_255C08(a1, a2);
}


//======================================================================
// sub_256B54
// address: 0x00256B54   size: 0x418 (1048 bytes)
//======================================================================
int __fastcall sub_256B54(int *a1, bool *a2)
{
  _DWORD *v3; // r6
  char *v4; // r4
  char *i; // r5
  unsigned __int8 *v6; // r2
  int result; // r0
  int tv_sec; // r4
  _BYTE *j; // r4
  int v10; // r5
  char *v11; // r1
  const char *k; // r4
  char *v13; // r4
  char *v14; // r3
  char *v15; // r3
  char *v16; // r3
  _DWORD *v17; // r4
  int v18; // r1
  int v19; // r1
  int v20; // r1
  int v21; // r4
  int v22; // r5
  const char *v23; // r1
  int v24; // r0
  _BOOL4 v25; // r2
  const char *v26; // r0
  const char *v27; // r1
  int v28; // r0
  char *v29; // r0
  int v30; // r0
  int v31; // r2
  int v32; // r4
  void *v33; // r0
  void *v34; // r0
  const char *v35; // r0
  int v36; // r3
  char *v37; // r6
  struct timeval v38; // r0
  int v39; // [sp+10h] [bp-1Ch]
  _BYTE *v41; // [sp+1Ch] [bp-10h] BYREF
  char *v42; // [sp+20h] [bp-Ch] BYREF
  int v43; // [sp+24h] [bp-8h] BYREF

  *a2 = false;
  v3 = *(_DWORD **)(*a1 + 328);
  v39 = *a1;
  v4 = *(char **)(*a1 + 34396);
  for ( i = v4; sub_25553C((unsigned __int8)*i) != 0; ++i )
    ;
  if ( i == v4 )
  {
    v3[1] = 0;
    goto LABEL_20;
  }
  v6 = (unsigned __int8 *)i;
  if ( i > v4 && *(i - 1) == 47 )
    v6 = (unsigned __int8 *)(i - 1);
  result = Curl_urldecode(v39, v4, v6 - (unsigned __int8 *)v4, v3 + 1, nullptr, 1);
  if ( result == 0 )
  {
LABEL_20:
    while ( *i == 59 )
    {
      for ( j = i + 1; ; ++j )
      {
        if ( *j == 0 )
          return 3;
        if ( *j == 61 )
          break;
      }
      result = Curl_urldecode(v39, i + 1, j - (i + 1), &v41, nullptr, 1);
      if ( result != 0 )
        return result;
      v13 = j + 1;
      for ( i = v13; sub_25553C((unsigned __int8)*i) != 0; ++i )
        ;
      tv_sec = Curl_urldecode(v39, v13, i - v13, &v42, &v43, 1);
      if ( tv_sec != 0 )
      {
        if ( v41 != nullptr )
          Curl_cfree(v41);
        return tv_sec;
      }
      if ( !Curl_raw_equal(v41, "UIDVALIDITY") || v3[2] != 0 )
      {
        if ( !Curl_raw_equal(v41, "UID") || v3[3] != 0 )
        {
          if ( !Curl_raw_equal(v41, "SECTION") || v3[4] != 0 )
          {
            if ( v41 != nullptr )
            {
              Curl_cfree(v41);
              v41 = nullptr;
            }
            if ( v42 != nullptr )
              Curl_cfree(v42);
            return 3;
          }
          if ( v43 != 0 )
          {
            v16 = &v42[v43 - 1];
            if ( *v16 == 47 )
              *v16 = 0;
          }
          v3[4] = v42;
        }
        else
        {
          if ( v43 != 0 )
          {
            v15 = &v42[v43 - 1];
            if ( *v15 == 47 )
              *v15 = 0;
          }
          v3[3] = v42;
        }
      }
      else
      {
        if ( v43 != 0 )
        {
          v14 = &v42[v43 - 1];
          if ( *v14 == 47 )
            *v14 = 0;
        }
        v3[2] = v42;
      }
      v42 = nullptr;
      if ( v41 != nullptr )
      {
        Curl_cfree(v41);
        v41 = nullptr;
      }
      if ( v42 != nullptr )
        Curl_cfree(v42);
    }
    result = 3;
    if ( *i != 0 )
      return result;
    v10 = *(_DWORD *)(*a1 + 328);
    v11 = *(char **)(*a1 + 840);
    if ( v11 != nullptr )
    {
      result = Curl_urldecode(*a1, v11, 0, (_DWORD *)(v10 + 20), nullptr, 1);
      if ( result != 0 )
        return result;
      for ( k = *(const char **)(v10 + 20); *k != 0; ++k )
      {
        if ( *k == 32 )
        {
          *(_DWORD *)(v10 + 24) = Curl_cstrdup(k);
          *k = 0;
          result = 27;
          if ( *(_DWORD *)(v10 + 24) == 0 )
            return result;
          break;
        }
      }
    }
    v17 = (_DWORD *)*a1;
    v17[20] = -1;
    v17[21] = -1;
    Curl_pgrsSetUploadCounter((int)v17, (int)v11, 0, 0);
    Curl_pgrsSetDownloadCounter((int)v17, v18, 0, 0);
    Curl_pgrsSetUploadSize(v17, v19, 0, 0);
    Curl_pgrsSetDownloadSize(v17, v20, 0, 0);
    v21 = *(_DWORD *)(*a1 + 328);
    if ( *(_BYTE *)(*a1 + 767) != 0 )
      *(_DWORD *)v21 = 1;
    *a2 = false;
    v22 = *(_DWORD *)(v21 + 4);
    if ( v22 != 0 )
    {
      v23 = (const char *)a1[245];
      if ( v23 != nullptr )
      {
        v24 = j_strcmp(*(const char **)(v21 + 4), v23);
        v25 = false;
        if ( v24 == 0 )
        {
          v26 = *(const char **)(v21 + 8);
          v25 = v26 == nullptr || (v27 = (const char *)a1[246]) == nullptr || j_strcmp(v26, v27) == 0;
        }
      }
      else
      {
        v25 = false;
      }
    }
    else
    {
      v25 = false;
    }
    v28 = *a1;
    if ( *(_BYTE *)(*a1 + 769) != 0 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v28 + 328) + 4) == 0 )
        Curl_failf(v28, "Cannot APPEND without a mailbox.", v25);
      if ( *(int *)(v28 + 540) < 0 )
        Curl_failf(v28, "Cannot APPEND with unknown input file size\n");
      v29 = sub_2556B4(*(const char **)(*(_DWORD *)(v28 + 328) + 4));
      tv_sec = 27;
      if ( v29 != nullptr )
        sub_255574((int)a1, (int)"APPEND %s (\\Seen) {%lld}", (int)v29, *a1 + 536);
      return tv_sec;
    }
    if ( *(_DWORD *)(v21 + 20) != 0 )
    {
      if ( v25 || v22 == 0 )
        goto LABEL_80;
    }
    else
    {
      if ( v25 )
      {
        if ( *(_DWORD *)(v21 + 12) != 0 )
          sub_255810(a1);
        goto LABEL_80;
      }
      if ( v22 == 0 || *(_DWORD *)(v21 + 12) == 0 )
      {
LABEL_80:
        v30 = sub_255758((int)a1);
        tv_sec = v30;
        if ( v30 == 0 )
        {
          v38.tv_sec = sub_255C08((int)a1, a2);
          tv_sec = v38.tv_sec;
          if ( v38.tv_sec == 0 && *a2 )
          {
            v38.tv_sec = (__time_t)a1;
            return sub_255C40(v38);
          }
        }
        return tv_sec;
      }
    }
    v31 = 888;
    v32 = *(_DWORD *)(v28 + 328);
    v33 = (void *)a1[245];
    if ( v33 != nullptr )
    {
      Curl_cfree(v33);
      a1[245] = 0;
    }
    v34 = (void *)a1[246];
    if ( v34 != nullptr )
    {
      Curl_cfree(v34);
      a1[246] = 0;
    }
    v35 = *(const char **)(v32 + 4);
    if ( v35 == nullptr )
      Curl_failf(*a1, "Cannot SELECT without a mailbox.", v31);
    tv_sec = 27;
    v37 = sub_2556B4(v35);
    if ( v37 != nullptr )
      sub_255574((int)a1, (int)"SELECT %s", (int)v37, v36);
    return tv_sec;
  }
  return result;
}


//======================================================================
// sub_256F78
// address: 0x00256F78   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_256F78(_BYTE *a1, int a2)
{
  _DWORD *v3; // r4
  void *v4; // r0
  void *v5; // r0

  v3 = *(_DWORD **)(*(_DWORD *)a1 + 328);
  if ( v3 == nullptr )
    return 0;
  if ( a2 != 0 )
    a1[440] = 1;
  v4 = (void *)v3[1];
  if ( v4 != nullptr )
  {
    Curl_cfree(v4);
    v3[1] = 0;
  }
  v5 = (void *)v3[2];
  if ( v5 != nullptr )
  {
    Curl_cfree(v5);
    v3[2] = 0;
  }
  *v3 = 0;
  return a2;
}


//======================================================================
// sub_256FD0
// address: 0x00256FD0   size: 0x76 (118 bytes)
//======================================================================
int __fastcall sub_256FD0(int a1, int a2)
{
  int v3; // r4
  void *v4; // r0
  int v5; // r3

  v3 = a1 + 888;
  if ( a2 == 0 )
  {
    v5 = *(_DWORD *)(a1 + 932);
    if ( v5 != 0 && *(_BYTE *)(v5 + 451) != 0 )
      Curl_pp_sendf(a1 + 888, "%s", "QUIT");
  }
  Curl_pp_disconnect(a1 + 888);
  Curl_sasl_cleanup(a1, *(_DWORD *)(v3 + 88));
  v4 = *(void **)(v3 + 92);
  if ( v4 != nullptr )
  {
    Curl_cfree(v4);
    *(_DWORD *)(a1 + 980) = 0;
  }
  return 0;
}


//======================================================================
// sub_257054
// address: 0x00257054   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_257054(int a1)
{
  return Curl_pp_getsock(a1 + 888);
}


//======================================================================
// sub_257064
// address: 0x00257064   size: 0x232 (562 bytes)
//======================================================================
int __fastcall sub_257064(int a1, unsigned __int8 *a2, unsigned int a3, int *a4)
{
  int v7; // r0
  int v8; // r3
  char *v9; // r3
  int v10; // r1
  unsigned int v11; // r6
  void *v12; // r0
  size_t v13; // r6
  int result; // r0
  int v15; // r3
  unsigned __int8 *v16; // r5
  unsigned int i; // r6
  int v18; // r3
  int v19; // r7
  int v20; // r3
  int v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  char *v29; // [sp+0h] [bp-Ch]
  char *v30; // [sp+0h] [bp-Ch]

  if ( a3 > 3 )
  {
    v7 = j_memcmp("-ERR", a2, 4u);
    v8 = 45;
    if ( v7 == 0 )
      goto LABEL_63;
  }
  v29 = *(char **)(a1 + 944);
  if ( v29 != (_BYTE *)&dword_0 + 1 )
  {
    if ( v29 != (_BYTE *)&dword_0 + 2 )
    {
      if ( a3 > 2 )
        goto LABEL_60;
LABEL_64:
      if ( a3 == 0 )
        return 0;
      goto LABEL_61;
    }
    if ( a3 == 0 )
      return 0;
    if ( *a2 == 46 )
      goto LABEL_62;
    if ( a3 <= 3 )
      return 0;
    result = j_memcmp(a2, "STLS", 4u);
    if ( result == 0 )
    {
      *(_BYTE *)(a1 + 984) = 1;
      return result;
    }
    result = j_memcmp(a2, "USER", 4u);
    v15 = 1;
    if ( result == 0 )
    {
LABEL_21:
      *(_DWORD *)(a1 + 960) |= v15;
      return result;
    }
    result = j_memcmp(a2, "APOP", 4u);
    if ( result == 0 )
    {
      v15 = 2;
      goto LABEL_21;
    }
    if ( a3 == 4 || j_memcmp(a2, "SASL ", 5u) != 0 )
      return 0;
    v16 = a2 + 5;
    *(_DWORD *)(a1 + 960) |= 4u;
    for ( i = a3 - 5; ; i -= v19 )
    {
      while ( 1 )
      {
        if ( i == 0 )
          return 0;
        v18 = *v16;
        if ( v18 != 32 && (unsigned int)(v18 - 9) > 1 )
        {
          v19 = 0;
          if ( v18 != 13 )
            break;
        }
        ++v16;
        --i;
      }
      do
      {
        v20 = v16[v19];
        if ( v20 == 32 )
          break;
        if ( (unsigned int)(v20 - 9) <= 1 )
          break;
        if ( v20 == 13 )
          break;
        ++v19;
      }
      while ( v19 != i );
      switch ( v19 )
      {
        case 5:
          v21 = j_memcmp(v16, "LOGIN", 5u);
          v22 = 1;
          if ( v21 == 0 )
            goto LABEL_57;
          v23 = j_memcmp(v16, "PLAIN", 5u);
          v22 = 2;
          if ( v23 == 0 )
            goto LABEL_57;
          break;
        case 8:
          v24 = j_memcmp(v16, "CRAM-MD5", 8u);
          v22 = 4;
          if ( v24 == 0 )
            goto LABEL_57;
          v27 = j_memcmp(v16, "EXTERNAL", 8u);
          v22 = 32;
          if ( v27 == 0 )
            goto LABEL_57;
          break;
        case 10:
          v25 = j_memcmp(v16, "DIGEST-MD5", 0xAu);
          v22 = 8;
          if ( v25 == 0 )
            goto LABEL_57;
          break;
        case 6:
          v26 = j_memcmp(v16, "GSSAPI", 6u);
          v22 = 16;
          if ( v26 == 0 )
            goto LABEL_57;
          break;
        case 4:
          v28 = j_memcmp(v16, "NTLM", 4u);
          v22 = 64;
          if ( v28 == 0 )
            goto LABEL_57;
          break;
        default:
          if ( v19 == 7 && j_memcmp(v16, "XOAUTH2", 7u) == 0 )
          {
            v22 = 128;
LABEL_57:
            *(_DWORD *)(a1 + 964) |= v22;
          }
          break;
      }
      v16 += v19;
    }
  }
  if ( a3 <= 2 )
    goto LABEL_64;
  if ( a2[a3 - 3] == 62 )
  {
    v9 = (char *)a2;
    while ( 1 )
    {
      v10 = v9 - (char *)a2;
      if ( v9 - (char *)a2 >= a3 - 3 )
        break;
      v30 = v9++;
      if ( *(v9 - 1) == 60 )
      {
        v11 = a3 - v10;
        v12 = Curl_ccalloc(1u, v11 - 1);
        *(_DWORD *)(a1 + 980) = v12;
        if ( v12 != nullptr )
        {
          v13 = v11 - 2;
          j_memcpy(v12, v30, v13);
          *(_BYTE *)(*(_DWORD *)(a1 + 980) + v13) = 0;
        }
        break;
      }
    }
  }
LABEL_60:
  if ( j_memcmp("+OK", a2, 3u) != 0 )
  {
LABEL_61:
    if ( *a2 == 43 )
      goto LABEL_62;
    return 0;
  }
LABEL_62:
  v8 = 43;
LABEL_63:
  *a4 = v8;
  return 1;
}


//======================================================================
// sub_2572D4
// address: 0x002572D4   size: 0x3C (60 bytes)
//======================================================================
size_t __fastcall sub_2572D4(int a1, const char **a2)
{
  const char *i; // r4
  int v4; // r3
  size_t result; // r0
  int v6; // r3

  for ( i = (const char *)(a1 + 2); ; ++i )
  {
    v4 = *(unsigned __int8 *)i;
    if ( v4 != 32 && v4 != 9 )
      break;
  }
  for ( result = j_strlen(i); result != 0; --result )
  {
    v6 = (unsigned __int8)i[result - 1];
    if ( v6 != 13 && v6 != 32 && (unsigned int)(v6 - 9) > 1 )
    {
      i[result] = 0;
      break;
    }
  }
  *a2 = i;
  return result;
}


//======================================================================
// sub_257310
// address: 0x00257310   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_257310(int a1, bool *a2)
{
  int v4; // r2
  int result; // r0
  int v6; // r4

  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 484) + 64) & 1) == 0 || (v4 = *(unsigned __int8 *)(a1 + 948), result = 4, v4 != 0) )
  {
    v6 = a1 + 888;
    result = Curl_pp_statemach(a1 + 888, 0);
    *a2 = *(_DWORD *)(v6 + 56) == 0;
  }
  return result;
}


//======================================================================
// sub_257348
// address: 0x00257348   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_257348(int a1, bool *a2)
{
  return sub_257310(a1, a2);
}


//======================================================================
// sub_257350
// address: 0x00257350   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_257350(int a1)
{
  int v1; // r4
  void *v3; // r0

  v1 = *(_DWORD *)a1;
  v3 = Curl_ccalloc(0xCu, 1u);
  *(_DWORD *)(v1 + 328) = v3;
  if ( v3 == nullptr )
    return 27;
  if ( *(_BYTE *)(a1 + 443) == 0 || *(_BYTE *)(v1 + 754) != 0 )
  {
    ++*(_DWORD *)(v1 + 34396);
    return 0;
  }
  else
  {
    if ( *(char ***)(a1 + 484) != &Curl_handler_pop3 )
      Curl_failf(v1, "POP3S not supported!");
    *(_DWORD *)(a1 + 484) = &off_459E8C;
    return Curl_http_setup_conn((int *)a1);
  }
}


//======================================================================
// sub_2573D4
// address: 0x002573D4   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_2573D4(int *a1, int a2)
{
  int v3; // r5
  int v4; // r5
  const char *v6; // [sp+18h] [bp-114h] BYREF
  char *v7; // [sp+1Ch] [bp-110h] BYREF
  int v8; // [sp+20h] [bp-10Ch] BYREF
  _BYTE v9[64]; // [sp+24h] [bp-108h] BYREF
  char v10[64]; // [sp+64h] [bp-C8h] BYREF
  _BYTE v11[128]; // [sp+A4h] [bp-88h] BYREF

  v3 = *a1;
  v6 = nullptr;
  v7 = nullptr;
  v8 = 0;
  if ( a2 != 43 )
    Curl_failf(v3, "Access denied: %d", a2);
  sub_2572D4(v3 + 1388, &v6);
  if ( Curl_sasl_decode_digest_md5_message(v6, v9) != 0 || j_strcmp(v10, "md5-sess") != 0 )
    Curl_pp_sendf(a1 + 222, "%s", "*");
  v4 = Curl_sasl_create_digest_md5_message(v3, v9, v11, a1[67], a1[68], "pop", &v7, &v8);
  if ( v4 == 0 && v7 != nullptr )
    Curl_pp_sendf(a1 + 222, "%s", v7);
  if ( v7 != nullptr )
    Curl_cfree(v7);
  return v4;
}


//======================================================================
// sub_2574E4
// address: 0x002574E4   size: 0x138 (312 bytes)
//======================================================================
int __fastcall sub_2574E4(int a1, bool *a2)
{
  _DWORD *v2; // r4
  const char *v5; // r0
  _BYTE *i; // r5
  const char *v8; // r5
  int v9; // r3
  _BOOL4 v10; // r0
  _BOOL4 v11; // r0

  *a2 = false;
  *(_BYTE *)(a1 + 440) = 0;
  v2 = (_DWORD *)(a1 + 888);
  *(_DWORD *)(a1 + 928) = 1800000;
  *(_DWORD *)(a1 + 932) = a1;
  *(_DWORD *)(a1 + 936) = sub_257B90;
  *(_DWORD *)(a1 + 968) = -1;
  *(_DWORD *)(a1 + 940) = sub_257064;
  *(_DWORD *)(a1 + 972) = -1;
  Curl_pp_init(a1 + 888);
  v5 = *(const char **)(a1 + 276);
  if ( v5 == nullptr )
    goto LABEL_27;
  for ( i = *(_BYTE **)(a1 + 276); *i != 0 && *i != 61; ++i )
    ;
  if ( !curl_strnequal(v5, "AUTH", 4u) )
    return 3;
  v8 = i + 1;
  if ( curl_strequal(v8, "*") )
  {
    v9 = -1;
LABEL_25:
    v2[20] = v9;
    goto LABEL_26;
  }
  if ( curl_strequal(v8, "+APOP") )
  {
    v2[20] = 2;
    v9 = 0;
  }
  else if ( curl_strequal(v8, "LOGIN") )
  {
    v2[20] = 4;
    v9 = 1;
  }
  else if ( curl_strequal(v8, "PLAIN") )
  {
    v2[20] = 4;
    v9 = 2;
  }
  else
  {
    v10 = curl_strequal(v8, "CRAM-MD5");
    v9 = 4;
    if ( v10 )
      goto LABEL_25;
    if ( curl_strequal(v8, "DIGEST-MD5") )
    {
      v2[20] = 4;
      v9 = 8;
    }
    else if ( curl_strequal(v8, "GSSAPI") )
    {
      v2[20] = 4;
      v9 = 16;
    }
    else if ( curl_strequal(v8, "NTLM") )
    {
      v2[20] = 4;
      v9 = 64;
    }
    else
    {
      v11 = curl_strequal(v8, "XOAUTH2");
      v9 = 0;
      if ( !v11 )
        goto LABEL_25;
      v2[20] = 4;
      v9 = 128;
    }
  }
LABEL_26:
  v2[21] = v9;
LABEL_27:
  v2[14] = 1;
  return sub_257310(a1, a2);
}


//======================================================================
// sub_257650
// address: 0x00257650   size: 0x114 (276 bytes)
//======================================================================
int __fastcall sub_257650(int *a1, _BYTE *a2)
{
  int v4; // r2
  char *v5; // r1
  _DWORD *v6; // r5
  int v7; // r1
  int v8; // r1
  int v9; // r1
  _DWORD *v10; // r2
  const char *v11; // r3
  const char *v12; // r1
  const char *v13; // r2

  *a2 = 0;
  v4 = Curl_urldecode(*a1, *(char **)(*a1 + 34396), 0, (_DWORD *)(*(_DWORD *)(*a1 + 328) + 4), nullptr, 1);
  if ( v4 == 0 )
  {
    v5 = *(char **)(*a1 + 840);
    if ( v5 == nullptr || (v4 = Curl_urldecode(*a1, v5, 0, (_DWORD *)(*(_DWORD *)(*a1 + 328) + 8), nullptr, 1)) == 0 )
    {
      v6 = (_DWORD *)*a1;
      v6[20] = -1;
      v6[21] = -1;
      Curl_pgrsSetUploadCounter((int)v6, (int)v5, 0, 0);
      Curl_pgrsSetDownloadCounter((int)v6, v7, 0, 0);
      Curl_pgrsSetUploadSize(v6, v8, 0, 0);
      Curl_pgrsSetDownloadSize(v6, v9, 0, 0);
      if ( *(_BYTE *)(*a1 + 767) != 0 )
        **(_DWORD **)(*a1 + 328) = 1;
      *a2 = 0;
      v10 = *(_DWORD **)(*a1 + 328);
      v11 = (const char *)v10[1];
      if ( *v11 != 0 )
      {
        if ( *(_BYTE *)(*a1 + 757) != 0 )
        {
          *v10 = 1;
          v12 = "LIST";
        }
        else
        {
          v12 = "RETR";
        }
      }
      else
      {
        v12 = "LIST";
      }
      v13 = (const char *)v10[2];
      if ( *v11 != 0 )
      {
        if ( v13 == nullptr || *v13 == 0 )
          v13 = v12;
        Curl_pp_sendf(a1 + 222, "%s %s", v13, v11);
      }
      if ( v13 == nullptr || *v13 == 0 )
        v13 = v12;
      Curl_pp_sendf(a1 + 222, "%s", v13);
    }
  }
  return v4;
}


//======================================================================
// sub_257784
// address: 0x00257784   size: 0x2B0 (688 bytes)
//======================================================================
int __fastcall sub_257784(int a1)
{
  int login_message; // r4
  int v3; // r0
  int v4; // r2
  const char *v5; // r6
  int v6; // r1
  int v7; // r2
  void **v8; // r7
  size_t v9; // r0
  size_t v10; // r0
  const char *v11; // r2
  const char *v13; // [sp+18h] [bp-44h] BYREF
  int v14; // [sp+1Ch] [bp-40h] BYREF
  _BYTE v15[16]; // [sp+20h] [bp-3Ch] BYREF
  _BYTE v16[36]; // [sp+30h] [bp-2Ch] BYREF

  login_message = *(unsigned __int8 *)(a1 + 444);
  v3 = *(_DWORD *)a1;
  v13 = nullptr;
  v14 = 0;
  if ( login_message == 0 )
  {
    *(_DWORD *)(a1 + 944) = 0;
    return login_message;
  }
  if ( (*(_DWORD *)(a1 + 960) & 4) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 964);
    if ( (v4 & 8) != 0 && (*(_DWORD *)(a1 + 972) & 8) != 0 )
    {
      *(_DWORD *)(a1 + 976) = 8;
      v5 = "DIGEST-MD5";
      goto LABEL_28;
    }
    if ( (v4 & 4) != 0 && (*(_DWORD *)(a1 + 972) & 4) != 0 )
    {
      *(_DWORD *)(a1 + 976) = 4;
      v5 = "CRAM-MD5";
      goto LABEL_28;
    }
    if ( (v4 & 0x80) != 0 && ((v6 = *(_DWORD *)(a1 + 972)) & 0x80) != 0 && v6 != -1 || *(_DWORD *)(a1 + 280) != 0 )
    {
      *(_DWORD *)(a1 + 976) = 128;
      if ( *(_BYTE *)(v3 + 1008) != 0 )
        Curl_sasl_create_xoauth2_message(v3, *(_DWORD *)(a1 + 268), *(_DWORD *)(a1 + 280), &v13, &v14);
      v5 = "XOAUTH2";
      goto LABEL_28;
    }
    if ( (v4 & 1) != 0 && (*(_DWORD *)(a1 + 972) & 1) != 0 )
    {
      *(_DWORD *)(a1 + 976) = 1;
      if ( *(_BYTE *)(v3 + 1008) == 0 )
      {
        v5 = "LOGIN";
        goto LABEL_28;
      }
      login_message = Curl_sasl_create_login_message(v3, *(char **)(a1 + 268));
      v5 = "LOGIN";
    }
    else
    {
      if ( (v4 & 2) == 0 || (*(_DWORD *)(a1 + 972) & 2) == 0 )
        goto LABEL_33;
      *(_DWORD *)(a1 + 976) = 2;
      if ( *(_BYTE *)(v3 + 1008) == 0 )
      {
        v5 = "PLAIN";
LABEL_28:
        if ( (*(_DWORD *)(a1 + 968) & 4) != 0 )
        {
          if ( v13 != nullptr && v14 + 8 + j_strlen(v5) <= 0xFF )
            Curl_pp_sendf(a1 + 888, "AUTH %s %s", v5, v13);
          Curl_pp_sendf(a1 + 888, "AUTH %s", v5);
        }
        goto LABEL_33;
      }
      login_message = Curl_sasl_create_plain_message(
                        v3,
                        *(char **)(a1 + 268),
                        *(_DWORD *)(a1 + 272),
                        (int)&v13,
                        (int)&v14);
      v5 = "PLAIN";
    }
    if ( login_message != 0 )
      return login_message;
    goto LABEL_28;
  }
LABEL_33:
  v7 = *(_DWORD *)(a1 + 960);
  if ( (v7 & 2) == 0 || (*(_DWORD *)(a1 + 968) & 2) == 0 )
  {
    if ( (v7 & 1) == 0 || (*(_DWORD *)(a1 + 968) & 1) == 0 )
    {
      login_message = 67;
      Curl_infof(*(_DWORD *)a1, "No known authentication mechanisms supported!\n");
      return login_message;
    }
    login_message = *(unsigned __int8 *)(a1 + 444);
    if ( *(_BYTE *)(a1 + 444) != 0 )
    {
      v11 = *(const char **)(a1 + 268);
      if ( v11 == nullptr )
        v11 = (const char *)&unk_3FB8EA;
      Curl_pp_sendf(a1 + 888, "USER %s", v11);
    }
    goto LABEL_41;
  }
  login_message = *(unsigned __int8 *)(a1 + 444);
  if ( *(_BYTE *)(a1 + 444) == 0 )
  {
LABEL_41:
    *(_DWORD *)(a1 + 944) = login_message;
    return login_message;
  }
  login_message = 27;
  v8 = (void **)Curl_MD5_init((int)&Curl_DIGEST_MD5);
  if ( v8 != nullptr )
  {
    v9 = j_strlen(*(const char **)(a1 + 980));
    curlx_uztoui(v9);
    Curl_MD5_update(v8);
    v10 = j_strlen(*(const char **)(a1 + 272));
    curlx_uztoui(v10);
    Curl_MD5_update(v8);
    Curl_MD5_final(v8, (int)v15);
    curl_msnprintf((int)v16, 3, "%02x", v15[0]);
  }
  return login_message;
}


//======================================================================
// sub_257B90
// address: 0x00257B90   size: 0x4E2 (1250 bytes)
//======================================================================
int __fastcall sub_257B90(int a1)
{
  int *v1; // r5
  int v2; // r3
  int v4; // r6
  int result; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r3
  int v9; // r4
  const char *v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r3
  int v14; // r0
  int plain_message; // r6
  int v16; // r0
  int v17; // r0
  char *v18; // r0
  int v19; // r0
  const char *v20; // r2
  int v21; // r6
  _DWORD *v22; // r1
  int v23; // r1
  void *v24; // r0
  int v25; // r4
  int v26; // [sp+10h] [bp-24h]
  int v27; // [sp+18h] [bp-1Ch] BYREF
  int v28; // [sp+1Ch] [bp-18h] BYREF
  char *v29; // [sp+20h] [bp-14h] BYREF
  const char *v30; // [sp+24h] [bp-10h] BYREF
  char *v31; // [sp+28h] [bp-Ch] BYREF
  const char *v32[2]; // [sp+2Ch] [bp-8h] BYREF

  v1 = (int *)(a1 + 888);
  v28 = 0;
  v2 = *(_DWORD *)(a1 + 944);
  v4 = a1 + 252;
  result = 4;
  if ( v2 != 4 )
  {
    if ( v1[6] != 0 )
    {
      return Curl_pp_flushsend(v1);
    }
    else
    {
      result = Curl_pp_readresp(*(_DWORD *)(v4 + 68), v1, &v27, &v28);
      v6 = result;
      if ( result == 0 && v27 != 0 )
      {
        switch ( v1[14] )
        {
          case 1:
            if ( v27 != 43 )
              Curl_failf(*(_DWORD *)a1, "Got unexpected pop3-server response");
            v1[19] = 0;
            v1[22] = 0;
            *(_BYTE *)(a1 + 984) = 0;
            Curl_pp_sendf(v1, "%s", "CAPA");
          case 2:
            v7 = *(_DWORD *)a1;
            if ( v27 == 43 )
            {
              v11 = *(_DWORD *)(v7 + 784);
              if ( v11 != 0 && *(_BYTE *)(a1 + 356) == 0 )
              {
                if ( *(_BYTE *)(a1 + 984) != 0 )
                  Curl_pp_sendf(v1, "%s", "STLS");
                if ( v11 != 1 )
                  Curl_failf(v7, "STLS not supported.");
              }
              return sub_257784(a1);
            }
            else
            {
              v8 = *(unsigned __int8 *)(a1 + 444);
              if ( *(_BYTE *)(a1 + 444) != 0 )
              {
                v10 = *(const char **)(v4 + 16);
                if ( v10 == nullptr )
                  v10 = (const char *)&unk_3FB8EA;
                Curl_pp_sendf(v1, "USER %s", v10);
              }
              v9 = a1 + 888;
LABEL_78:
              *(_DWORD *)(v9 + 56) = v8;
            }
            return v6;
          case 3:
            v12 = *(_DWORD *)a1;
            v13 = 4;
            if ( v27 != 43 )
            {
              if ( *(_DWORD *)(v12 + 784) != 1 )
                Curl_failf(v12, "STARTTLS denied. %c", v27);
              v13 = sub_257784(a1);
            }
            goto LABEL_93;
          case 5:
            v14 = *(_DWORD *)a1;
            v31 = nullptr;
            v32[0] = nullptr;
            if ( v27 != 43 )
              Curl_failf(v14, "Access denied. %c");
            plain_message = Curl_sasl_create_plain_message(
                              v14,
                              *(char **)(v4 + 16),
                              *(_DWORD *)(v4 + 20),
                              (int)v32,
                              (int)&v31);
            if ( plain_message == 0 && v32[0] != nullptr )
              Curl_pp_sendf(v1, "%s", v32[0]);
            goto LABEL_59;
          case 6:
            v16 = *(_DWORD *)a1;
            v31 = nullptr;
            v32[0] = nullptr;
            if ( v27 != 43 )
              Curl_failf(v16, "Access denied: %d");
            plain_message = Curl_sasl_create_login_message(v16, *(char **)(v4 + 16));
            if ( plain_message == 0 && v32[0] != nullptr )
              Curl_pp_sendf(v1, "%s", v32[0]);
            goto LABEL_59;
          case 7:
            v17 = *(_DWORD *)a1;
            v31 = nullptr;
            v32[0] = nullptr;
            if ( v27 != 43 )
              Curl_failf(v17, "Access denied: %d");
            plain_message = Curl_sasl_create_login_message(v17, *(char **)(v4 + 20));
            if ( plain_message == 0 && v32[0] != nullptr )
              Curl_pp_sendf(v1, "%s", v32[0]);
LABEL_59:
            v18 = (char *)v32[0];
            goto LABEL_60;
          case 8:
            v26 = *(_DWORD *)a1;
            v29 = nullptr;
            v30 = nullptr;
            v31 = nullptr;
            v32[0] = nullptr;
            if ( v27 != 43 )
              Curl_failf(v26, "Access denied: %d");
            sub_2572D4(v26 + 1388, &v30);
            if ( Curl_sasl_decode_cram_md5_message(v30, &v29, v32) != 0 )
              Curl_pp_sendf(v1, "%s", "*");
            plain_message = Curl_sasl_create_cram_md5_message(
                              v26,
                              v29,
                              *(_DWORD *)(v4 + 16),
                              *(_DWORD *)(v4 + 20),
                              (int)&v31,
                              (int)v32);
            if ( plain_message == 0 && v31 != nullptr )
              Curl_pp_sendf(v1, "%s", v31);
            if ( v29 != nullptr )
            {
              Curl_cfree(v29);
              v29 = nullptr;
            }
            v18 = v31;
LABEL_60:
            if ( v18 != nullptr )
              Curl_cfree(v18);
            return plain_message;
          case 9:
            return sub_2573D4((int *)a1, v27);
          case 10:
            if ( v27 != 43 )
              Curl_failf(*(_DWORD *)a1, "Authentication failed: %d");
            Curl_pp_sendf(v1, "%s", (const char *)&unk_3FB8EA);
          case 13:
            v19 = *(_DWORD *)a1;
            v31 = nullptr;
            v32[0] = nullptr;
            if ( v27 != 43 )
              Curl_failf(v19, "Access denied: %d");
            Curl_sasl_create_xoauth2_message(v19, *(_DWORD *)(v4 + 16), *(_DWORD *)(v4 + 28), v32, &v31);
          case 14:
            Curl_failf(*(_DWORD *)a1, "Authentication cancelled");
          case 15:
            if ( v27 != 43 )
              Curl_failf(*(_DWORD *)a1, "Authentication failed: %d");
            goto LABEL_76;
          case 16:
            if ( v27 != 43 )
              Curl_failf(*(_DWORD *)a1, "Authentication failed: %d");
            v9 = a1 + 888;
            goto LABEL_77;
          case 17:
            if ( v27 != 43 )
              Curl_failf(*(_DWORD *)a1, "Access denied. %c");
            v20 = *(const char **)(v4 + 20);
            if ( v20 == nullptr )
              v20 = (const char *)&unk_3FB8EA;
            Curl_pp_sendf(v1, "PASS %s", v20);
          case 18:
            if ( v27 != 43 )
              Curl_failf(*(_DWORD *)a1, "Access denied. %c");
LABEL_76:
            v9 = a1 + 888;
LABEL_77:
            v8 = 0;
            goto LABEL_78;
          case 19:
            v21 = *(_DWORD *)a1;
            v22 = *(_DWORD **)(*(_DWORD *)a1 + 328);
            if ( v27 != 43 )
            {
              *(_DWORD *)(a1 + 944) = 0;
              return 56;
            }
            v1[16] = 2;
            v1[17] = 2;
            if ( *v22 != 0 )
              goto LABEL_90;
            Curl_setup_transfer((struct timeval)(unsigned int)a1, -1, 0, 0, -1, 0);
            v23 = *(_DWORD *)(a1 + 888);
            if ( v23 == 0 )
              goto LABEL_90;
            if ( *(_BYTE *)(v21 + 767) != 0 || (result = Curl_pop3_write((int *)a1, v23, v1[1])) == 0 )
            {
              v24 = *(void **)(a1 + 888);
              if ( v24 != nullptr )
              {
                Curl_cfree(v24);
                *(_DWORD *)(a1 + 888) = 0;
              }
              *(_DWORD *)(a1 + 892) = 0;
LABEL_90:
              v25 = a1 + 888;
LABEL_92:
              v13 = 0;
              *(_DWORD *)(v25 + 56) = 0;
LABEL_93:
              result = v13;
            }
            break;
          default:
            v25 = a1 + 888;
            goto LABEL_92;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_2580A8
// address: 0x002580A8   size: 0x60 (96 bytes)
//======================================================================
void __fastcall __noreturn sub_2580A8(int a1)
{
  int v1; // r2
  const char **v2; // r3
  const char *v3; // r2

  v1 = *(_DWORD *)(*(_DWORD *)a1 + 328);
  v2 = *(const char ***)(v1 + 8);
  v3 = *(const char **)(v1 + 4);
  if ( v2 != nullptr )
  {
    if ( v3 != nullptr )
    {
      if ( *v3 == 0 )
        v3 = "VRFY";
    }
    else
    {
      v3 = "VRFY";
    }
    Curl_pp_sendf(a1 + 888, "%s %s", v3, *v2);
  }
  if ( v3 != nullptr )
  {
    if ( *v3 == 0 )
      v3 = "HELP";
  }
  else
  {
    v3 = "HELP";
  }
  Curl_pp_sendf(a1 + 888, "%s", v3);
}


//======================================================================
// sub_258120
// address: 0x00258120   size: 0x28 (40 bytes)
//======================================================================
void __fastcall __noreturn sub_258120(int a1)
{
  int v1; // r3
  int v2; // r0

  v1 = *(_DWORD *)(*(_DWORD *)a1 + 328);
  v2 = a1 + 888;
  if ( ***(_BYTE ***)(v1 + 8) == 60 )
    Curl_pp_sendf(v2, "RCPT TO:%s");
  Curl_pp_sendf(v2, "RCPT TO:<%s>");
}


//======================================================================
// sub_25815C
// address: 0x0025815C   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_25815C(int a1)
{
  int result; // r0

  for ( result = 0; *(_DWORD *)(a1 + 944) != 0 && result == 0; result = Curl_pp_statemach(a1 + 888, 1) )
    ;
  return result;
}


//======================================================================
// sub_258180
// address: 0x00258180   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_258180(int a1, int a2)
{
  int v3; // r4
  int v4; // r3
  void *v5; // r0

  v3 = a1 + 888;
  if ( a2 == 0 )
  {
    v4 = *(_DWORD *)(a1 + 932);
    if ( v4 != 0 && *(_BYTE *)(v4 + 451) != 0 )
      Curl_pp_sendf(a1 + 888, "%s", "QUIT");
  }
  Curl_pp_disconnect(a1 + 888);
  Curl_sasl_cleanup(a1, *(_DWORD *)(v3 + 76));
  v5 = *(void **)(v3 + 64);
  if ( v5 != nullptr )
  {
    Curl_cfree(v5);
    *(_DWORD *)(a1 + 952) = 0;
  }
  return 0;
}


//======================================================================
// sub_2581F4
// address: 0x002581F4   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_2581F4(int a1)
{
  return Curl_pp_getsock(a1 + 888);
}


//======================================================================
// sub_258202
// address: 0x00258202   size: 0x3C (60 bytes)
//======================================================================
size_t __fastcall sub_258202(int a1, const char **a2)
{
  const char *i; // r4
  int v4; // r3
  size_t result; // r0
  int v6; // r3

  for ( i = (const char *)(a1 + 4); ; ++i )
  {
    v4 = *(unsigned __int8 *)i;
    if ( v4 != 32 && v4 != 9 )
      break;
  }
  for ( result = j_strlen(i); result != 0; --result )
  {
    v6 = (unsigned __int8)i[result - 1];
    if ( v6 != 13 && v6 != 32 && (unsigned int)(v6 - 9) > 1 )
    {
      i[result] = 0;
      break;
    }
  }
  *a2 = i;
  return result;
}


//======================================================================
// sub_258240
// address: 0x00258240   size: 0x18E (398 bytes)
//======================================================================
int __fastcall sub_258240(int a1)
{
  int login_message; // r5
  int v3; // r0
  int v4; // r4
  int v5; // r3
  const char *v6; // r6
  int v7; // r1
  const char *v9; // [sp+10h] [bp-Ch] BYREF
  _DWORD v10[2]; // [sp+14h] [bp-8h] BYREF

  login_message = *(unsigned __int8 *)(a1 + 444);
  v3 = *(_DWORD *)a1;
  v9 = nullptr;
  v10[0] = 0;
  v4 = a1 + 888;
  if ( login_message != 0 )
  {
    v5 = *(_DWORD *)(a1 + 956);
    if ( (v5 & 8) != 0 && (*(_DWORD *)(a1 + 960) & 8) != 0 )
    {
      *(_DWORD *)(a1 + 964) = 8;
      v6 = "DIGEST-MD5";
    }
    else if ( (v5 & 4) != 0 && (*(_DWORD *)(a1 + 960) & 4) != 0 )
    {
      *(_DWORD *)(a1 + 964) = 4;
      v6 = "CRAM-MD5";
    }
    else if ( (v5 & 0x80) != 0 && ((v7 = *(_DWORD *)(a1 + 960)) & 0x80) != 0 && v7 != -1 || *(_DWORD *)(a1 + 280) != 0 )
    {
      *(_DWORD *)(a1 + 964) = 128;
      if ( *(_BYTE *)(v3 + 1008) != 0 )
        Curl_sasl_create_xoauth2_message(v3, *(_DWORD *)(a1 + 268), *(_DWORD *)(a1 + 280), &v9, v10);
      v6 = "XOAUTH2";
    }
    else
    {
      if ( (v5 & 1) != 0 && (*(_DWORD *)(a1 + 960) & 1) != 0 )
      {
        *(_DWORD *)(a1 + 964) = 1;
        if ( *(_BYTE *)(v3 + 1008) == 0 )
        {
          v6 = "LOGIN";
          goto LABEL_24;
        }
        login_message = Curl_sasl_create_login_message(v3, *(char **)(a1 + 268));
        v6 = "LOGIN";
      }
      else
      {
        if ( (v5 & 2) == 0 || (*(_DWORD *)(a1 + 960) & 2) == 0 )
        {
          login_message = 67;
          Curl_infof(v3, "No known authentication mechanisms supported!\n");
          return login_message;
        }
        *(_DWORD *)(a1 + 964) = 2;
        if ( *(_BYTE *)(v3 + 1008) == 0 )
        {
          v6 = "PLAIN";
          goto LABEL_24;
        }
        login_message = Curl_sasl_create_plain_message(
                          v3,
                          *(char **)(a1 + 268),
                          *(_DWORD *)(a1 + 272),
                          (int)&v9,
                          (int)v10);
        v6 = "PLAIN";
      }
      if ( login_message != 0 )
        return login_message;
    }
LABEL_24:
    if ( v9 != nullptr && v10[0] + 8 + j_strlen(v6) <= 0x200 )
      Curl_pp_sendf(v4, "AUTH %s %s", v6, v9);
    Curl_pp_sendf(v4, "AUTH %s", v6);
  }
  *(_DWORD *)(a1 + 944) = 0;
  return login_message;
}


//======================================================================
// sub_258400
// address: 0x00258400   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_258400(int *a1)
{
  char *v2; // r1
  int v3; // r0
  _BYTE v5[1012]; // [sp+8h] [bp-408h] BYREF

  v2 = *(char **)(*a1 + 34396);
  if ( *v2 == 0 )
  {
    v3 = Curl_gethostname(v5, 1025);
    v2 = v5;
    if ( v3 != 0 )
      v2 = "localhost";
  }
  return Curl_urldecode(*a1, v2, 0, a1 + 238, nullptr, 1);
}


//======================================================================
// sub_258478
// address: 0x00258478   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_258478(int a1, int a2)
{
  int v2; // r3
  int v4; // r5
  int v5; // r6
  int v6; // r6
  const char *v7; // r7
  int result; // r0
  __suseconds_t v9; // r1
  char *v10; // r0
  __time_t v11; // r2
  void *v12; // r0
  struct timeval v13; // [sp+10h] [bp-14h] BYREF
  __time_t v14[2]; // [sp+1Ch] [bp-8h] BYREF

  v2 = *(_DWORD *)a1;
  v4 = *(_DWORD *)(*(_DWORD *)a1 + 328);
  v5 = a2;
  if ( v4 == 0 )
    return 0;
  if ( a2 != 0 )
  {
    *(_BYTE *)(a1 + 440) = 1;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(v2 + 801) == 0 && *(_BYTE *)(v2 + 769) != 0 && *(_DWORD *)(v2 + 1004) != 0 )
  {
    if ( *(_BYTE *)(v4 + 16) != 0 )
    {
      v6 = 3;
    }
    else
    {
      if ( *(_QWORD *)(v2 + 536) != 0 )
      {
        v6 = 5;
        v7 = "\r\n.\r\n";
        goto LABEL_13;
      }
      v6 = 3;
    }
    v7 = ".\r\n";
LABEL_13:
    result = Curl_write(a1, *(_DWORD *)(a1 + 500), (int)v7, v6, v14);
    if ( result != 0 )
      return result;
    if ( v14[0] == v6 )
    {
      curlx_tvnow(&v13, v9, v14[0], 920);
      *(struct timeval *)(a1 + 920) = v13;
    }
    else
    {
      v10 = Curl_cstrdup(v7);
      v11 = v14[0];
      *(_DWORD *)(a1 + 916) = v6;
      *(_DWORD *)(a1 + 908) = v10;
      *(_DWORD *)(a1 + 912) = v6 - v11;
    }
    *(_DWORD *)(a1 + 944) = 21;
    v5 = sub_25815C(a1);
  }
LABEL_18:
  v12 = *(void **)(v4 + 4);
  if ( v12 != nullptr )
  {
    Curl_cfree(v12);
    *(_DWORD *)(v4 + 4) = 0;
  }
  *(_DWORD *)v4 = 0;
  return v5;
}


//======================================================================
// sub_258584
// address: 0x00258584   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_258584(int a1, bool *a2)
{
  int v4; // r2
  int result; // r0
  int v6; // r4

  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 484) + 64) & 1) == 0 || (v4 = *(unsigned __int8 *)(a1 + 948), result = 4, v4 != 0) )
  {
    v6 = a1 + 888;
    result = Curl_pp_statemach(a1 + 888, 0);
    *a2 = *(_DWORD *)(v6 + 56) == 0;
  }
  return result;
}


//======================================================================
// sub_2585BC
// address: 0x002585BC   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_2585BC(struct timeval a1)
{
  if ( **(_DWORD **)(*(_DWORD *)a1.tv_sec + 328) != 0 )
  {
    a1.tv_usec = -1;
    Curl_setup_transfer(a1, -1, 0, 0, -1, 0);
  }
  return 0;
}


//======================================================================
// sub_2585E8
// address: 0x002585E8   size: 0x1C (28 bytes)
//======================================================================
__time_t __fastcall sub_2585E8(int a1, bool *a2)
{
  struct timeval v4; // r0

  v4.tv_sec = sub_258584(a1, a2);
  if ( v4.tv_sec == 0 && *a2 )
  {
    v4.tv_sec = a1;
    v4.tv_sec = sub_2585BC(v4);
  }
  return v4.tv_sec;
}


//======================================================================
// sub_258604
// address: 0x00258604   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_258604(int a1, char *a2, unsigned int a3, int *a4)
{
  int v5; // r3
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r2
  int v10; // r3

  v5 = 0;
  if ( a3 > 3
    && (unsigned int)(unsigned __int8)*a2 - 48 <= 9
    && (unsigned int)(unsigned __int8)a2[1] - 48 <= 9
    && (unsigned int)(unsigned __int8)a2[2] - 48 <= 9 )
  {
    v6 = (unsigned __int8)a2[3];
    if ( v6 == 32 || a3 == 5 )
    {
      v7 = j_strtol(a2, nullptr, 10);
      v8 = curlx_sltosi(v7);
      if ( v8 == 1 )
        *a4 = 0;
      else
        *a4 = v8;
      return 1;
    }
    else
    {
      v9 = 0;
      if ( v6 == 45 )
      {
        v10 = *(_DWORD *)(a1 + 944);
        if ( v10 == 2 || v10 == 17 )
        {
          v9 = 1;
          *a4 = 1;
        }
      }
    }
    return v9;
  }
  return v5;
}


//======================================================================
// sub_258670
// address: 0x00258670   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_258670(int a1)
{
  int v1; // r4
  void *v3; // r0

  v1 = *(_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 443) == 0 || *(_BYTE *)(v1 + 754) != 0 )
  {
    v3 = Curl_ccalloc(0x14u, 1u);
    *(_DWORD *)(v1 + 328) = v3;
    if ( v3 != nullptr )
    {
      ++*(_DWORD *)(v1 + 34396);
      return 0;
    }
    else
    {
      return 27;
    }
  }
  else
  {
    if ( *(char ***)(a1 + 484) != &Curl_handler_smtp )
      Curl_failf(*(_DWORD *)a1, "SMTPS not supported!");
    *(_DWORD *)(a1 + 484) = &off_459ED0;
    return Curl_http_setup_conn((int *)a1);
  }
}


//======================================================================
// sub_2586F0
// address: 0x002586F0   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall sub_2586F0(int *a1, int a2)
{
  int v3; // r5
  int v4; // r5
  const char *v6; // [sp+18h] [bp-114h] BYREF
  char *v7; // [sp+1Ch] [bp-110h] BYREF
  int v8; // [sp+20h] [bp-10Ch] BYREF
  _BYTE v9[64]; // [sp+24h] [bp-108h] BYREF
  char v10[64]; // [sp+64h] [bp-C8h] BYREF
  _BYTE v11[128]; // [sp+A4h] [bp-88h] BYREF

  v3 = *a1;
  v6 = nullptr;
  v7 = nullptr;
  v8 = 0;
  if ( a2 != 334 )
    Curl_failf(v3, "Access denied: %d", a2);
  sub_258202(v3 + 1388, &v6);
  if ( Curl_sasl_decode_digest_md5_message(v6, v9) != 0 || j_strcmp(v10, "md5-sess") != 0 )
    Curl_pp_sendf(a1 + 222, "%s", "*");
  v4 = Curl_sasl_create_digest_md5_message(v3, v9, v11, a1[67], a1[68], "smtp", &v7, &v8);
  if ( v4 == 0 && v7 != nullptr )
    Curl_pp_sendf(a1 + 222, "%s", v7);
  if ( v7 != nullptr )
    Curl_cfree(v7);
  return v4;
}


//======================================================================
// sub_258804
// address: 0x00258804   size: 0x7AA (1962 bytes)
//======================================================================
int __fastcall sub_258804(int a1)
{
  int v1; // r3
  int v3; // r0
  unsigned int v5; // r6
  const void *v6; // r4
  int plain_message; // r4
  int v8; // r1
  int v9; // r7
  int v10; // r1
  int v11; // r3
  int v12; // r4
  int v13; // r3
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r3
  int v23; // r3
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r4
  int v30; // r0
  int v31; // r6
  size_t v32; // r0
  unsigned int v33; // r3
  int v34; // r3
  int v35; // r2
  int v36; // r3
  _DWORD *v37; // r0
  unsigned __int8 *v38; // [sp+18h] [bp-3Ch]
  _BYTE *v39; // [sp+18h] [bp-3Ch]
  char *v40; // [sp+18h] [bp-3Ch]
  int v41; // [sp+1Ch] [bp-38h]
  size_t v42; // [sp+20h] [bp-34h]
  size_t i; // [sp+20h] [bp-34h]
  char *v44; // [sp+24h] [bp-30h]
  char *v45; // [sp+24h] [bp-30h]
  int v46; // [sp+2Ch] [bp-28h]
  int v47; // [sp+30h] [bp-24h]
  int v48; // [sp+38h] [bp-1Ch] BYREF
  int v49; // [sp+3Ch] [bp-18h] BYREF
  char *v50; // [sp+40h] [bp-14h] BYREF
  const char *v51; // [sp+44h] [bp-10h] BYREF
  const char *v52; // [sp+48h] [bp-Ch] BYREF
  const char *v53[2]; // [sp+4Ch] [bp-8h] BYREF

  v46 = *(_DWORD *)(a1 + 320);
  v49 = 0;
  v1 = a1 + 888;
  v47 = *(_DWORD *)a1;
  v41 = a1 + 888;
  if ( *(_DWORD *)(a1 + 944) == 5 )
    sub_258FAE(4);
  if ( *(_DWORD *)(v1 + 24) != 0 )
  {
    v3 = Curl_pp_flushsend(v1);
    return sub_258FAE(v3);
  }
  while ( 1 )
  {
    plain_message = Curl_pp_readresp(v46, v41, &v48, &v49);
    if ( plain_message != 0 )
      return sub_258FAE(plain_message);
    v8 = *(_DWORD *)(a1 + 944);
    v9 = v48;
    if ( v8 == 22 )
      goto LABEL_15;
    if ( v48 != 1 )
    {
      *(_DWORD *)(v47 + 34460) = v48;
LABEL_15:
      if ( v9 == 0 )
        return sub_258FAE(0);
    }
    switch ( *(_DWORD *)(a1 + 944) )
    {
      case 1:
        if ( (unsigned int)(v9 - 200) > 0x63 )
          Curl_failf(*(_DWORD *)a1, "Got unexpected smtp-server response: %d", v9);
        *(_DWORD *)(a1 + 956) = 0;
        *(_DWORD *)(a1 + 964) = 0;
        *(_BYTE *)(a1 + 968) = 0;
        Curl_pp_sendf(v41, "EHLO %s", *(const char **)(a1 + 952));
      case 2:
        v44 = *(char **)a1;
        v42 = j_strlen((const char *)(*(_DWORD *)a1 + 1388));
        if ( (unsigned int)(v9 - 200) > 0x63 && v9 != 1 )
        {
          if ( (*((_DWORD *)v44 + 196) <= 1u || *(_BYTE *)(a1 + 356) != 0) && *(_BYTE *)(a1 + 444) == 0 )
          {
            *(_DWORD *)(a1 + 964) = *(unsigned __int8 *)(a1 + 444);
            Curl_pp_sendf(v41, "HELO %s", *(const char **)(a1 + 952));
          }
          Curl_failf((int)v44, "Remote access denied: %d", v9);
        }
        v5 = v42 - 4;
        v6 = v44 + 1392;
        if ( v42 - 4 > 7 )
        {
          if ( j_memcmp(v44 + 1392, "STARTTLS", 8u) == 0 )
          {
            v10 = 968;
LABEL_31:
            *(_BYTE *)(a1 + v10) = 1;
            goto LABEL_8;
          }
        }
        else if ( v5 <= 3 )
        {
          goto LABEL_8;
        }
        if ( j_memcmp(v6, "SIZE", 4u) == 0 )
        {
          v10 = 969;
          goto LABEL_31;
        }
        if ( v5 > 4 && j_memcmp(v6, "AUTH ", 5u) == 0 )
        {
          v38 = (unsigned __int8 *)(v44 + 1397);
          for ( i = v42 - 9; ; i -= v12 )
          {
            while ( 1 )
            {
              if ( i == 0 )
                goto LABEL_8;
              v11 = *v38;
              if ( v11 != 32 && (unsigned int)(v11 - 9) > 1 )
              {
                v12 = 0;
                if ( v11 != 13 )
                  break;
              }
              ++v38;
              --i;
            }
            do
            {
              v13 = v38[v12];
              if ( v13 == 32 )
                break;
              if ( (unsigned int)(v13 - 9) <= 1 )
                break;
              if ( v13 == 13 )
                break;
              ++v12;
            }
            while ( v12 != i );
            switch ( v12 )
            {
              case 5:
                v14 = j_memcmp(v38, "LOGIN", 5u);
                v15 = 1;
                if ( v14 == 0 )
                  goto LABEL_64;
                v16 = j_memcmp(v38, "PLAIN", 5u);
                v17 = 2;
                if ( v16 == 0 )
                  goto LABEL_68;
                break;
              case 8:
                v18 = j_memcmp(v38, "CRAM-MD5", 8u);
                v15 = 4;
                if ( v18 == 0 )
                  goto LABEL_64;
                v21 = j_memcmp(v38, "EXTERNAL", 8u);
                v17 = 32;
                if ( v21 == 0 )
                  goto LABEL_68;
                break;
              case 10:
                v19 = j_memcmp(v38, "DIGEST-MD5", 0xAu);
                v17 = 8;
                if ( v19 == 0 )
                  goto LABEL_68;
                break;
              case 6:
                v20 = j_memcmp(v38, "GSSAPI", 6u);
                v15 = 16;
                if ( v20 == 0 )
                  goto LABEL_64;
                break;
              case 4:
                if ( j_memcmp(v38, "NTLM", 4u) != 0 )
                  break;
                v15 = 64;
LABEL_64:
                v22 = v15 | *(_DWORD *)(a1 + 956);
                goto LABEL_69;
              default:
                if ( v12 == 7 && j_memcmp(v38, "XOAUTH2", 7u) == 0 )
                {
                  v17 = 128;
LABEL_68:
                  v22 = v17 | *(_DWORD *)(a1 + 956);
LABEL_69:
                  *(_DWORD *)(a1 + 956) = v22;
                }
                break;
            }
            v38 += v12;
          }
        }
LABEL_8:
        if ( v9 == 1 )
          goto LABEL_9;
        v23 = *((_DWORD *)v44 + 196);
        if ( v23 != 0 && *(_BYTE *)(a1 + 356) == 0 )
        {
          if ( *(_BYTE *)(a1 + 968) != 0 )
            Curl_pp_sendf(v41, "%s", "STARTTLS");
          if ( v23 != 1 )
            Curl_failf((int)v44, "STARTTLS not supported.");
        }
        goto LABEL_82;
      case 3:
        if ( (unsigned int)(v9 - 200) > 0x63 )
          Curl_failf(*(_DWORD *)a1, "Remote access denied: %d", v9);
        goto LABEL_150;
      case 4:
        v24 = *(_DWORD *)a1;
        if ( v9 == 220 )
          return sub_258FAE(4);
        if ( *(_DWORD *)(v24 + 784) != 1 )
          Curl_failf(v24, "STARTTLS denied. %c", v9);
LABEL_82:
        v25 = sub_258240(a1);
LABEL_111:
        plain_message = v25;
LABEL_151:
        if ( plain_message != 0 )
          return sub_258FAE(plain_message);
LABEL_9:
        if ( *(_DWORD *)(a1 + 944) == 0 || Curl_pp_moredata(v41) == 0 )
          return sub_258FAE(0);
        break;
      case 6:
        v52 = nullptr;
        v53[0] = nullptr;
        v26 = *(_DWORD *)a1;
        if ( v9 != 334 )
          Curl_failf(v26, "Access denied: %d", v9);
        plain_message = Curl_sasl_create_plain_message(
                          v26,
                          *(char **)(a1 + 268),
                          *(_DWORD *)(a1 + 272),
                          (int)v53,
                          (int)&v52);
        if ( plain_message == 0 && v53[0] != nullptr )
          Curl_pp_sendf(v41, "%s");
        goto LABEL_118;
      case 7:
        v52 = nullptr;
        v53[0] = nullptr;
        v27 = *(_DWORD *)a1;
        if ( v9 != 334 )
          Curl_failf(v27, "Access denied: %d", v9);
        plain_message = Curl_sasl_create_login_message(v27, *(char **)(a1 + 268));
        if ( plain_message == 0 && v53[0] != nullptr )
          Curl_pp_sendf(v41, "%s", v53[0]);
        goto LABEL_118;
      case 8:
        v52 = nullptr;
        v53[0] = nullptr;
        v28 = *(_DWORD *)a1;
        if ( v9 != 334 )
          Curl_failf(v28, "Access denied: %d", v9);
        plain_message = Curl_sasl_create_login_message(v28, *(char **)(a1 + 272));
        if ( plain_message == 0 && v53[0] != nullptr )
          Curl_pp_sendf(v41, "%s");
LABEL_118:
        if ( v53[0] != nullptr )
          goto LABEL_119;
        goto LABEL_151;
      case 9:
        v50 = nullptr;
        v51 = nullptr;
        v52 = nullptr;
        v53[0] = nullptr;
        v29 = *(_DWORD *)a1;
        if ( v9 != 334 )
          Curl_failf(*(_DWORD *)a1, "Access denied: %d", v9);
        sub_258202(v29 + 1388, &v51);
        if ( Curl_sasl_decode_cram_md5_message(v51, &v50, v53) != 0 )
          Curl_pp_sendf(v41, "%s", "*");
        plain_message = Curl_sasl_create_cram_md5_message(
                          v29,
                          v50,
                          *(_DWORD *)(a1 + 268),
                          *(_DWORD *)(a1 + 272),
                          (int)&v52,
                          (int)v53);
        if ( plain_message == 0 && v52 != nullptr )
          Curl_pp_sendf(v41, "%s", v52);
        if ( v50 != nullptr )
        {
          Curl_cfree(v50);
          v50 = nullptr;
        }
        if ( v52 != nullptr )
LABEL_119:
          ((void (*)(void))Curl_cfree)();
        goto LABEL_151;
      case 0xA:
        v25 = sub_2586F0((int *)a1, v9);
        goto LABEL_111;
      case 0xB:
        if ( v9 != 334 )
          Curl_failf(*(_DWORD *)a1, "Authentication failed: %d", v9);
        Curl_pp_sendf(v41, "%s", (const char *)&unk_3FB8EA);
      case 0xE:
        v52 = nullptr;
        v53[0] = nullptr;
        v30 = *(_DWORD *)a1;
        if ( v9 != 334 )
          Curl_failf(v30, "Access denied: %d", v9);
        Curl_sasl_create_xoauth2_message(v30, *(_DWORD *)(a1 + 268), *(_DWORD *)(a1 + 280), v53, &v52);
      case 0xF:
        Curl_failf(*(_DWORD *)a1, "Authentication cancelled");
      case 0x10:
        if ( v9 != 235 )
          Curl_failf(*(_DWORD *)a1, "Authentication failed: %d", v9);
        goto LABEL_150;
      case 0x11:
        v39 = *(_BYTE **)a1;
        v31 = *(_DWORD *)(*(_DWORD *)a1 + 328);
        v45 = (char *)(*(_DWORD *)a1 + 1388);
        v32 = j_strlen(v45);
        v33 = v9 - 200;
        if ( *(_DWORD *)(v31 + 8) != 0 )
        {
          if ( v33 <= 0x63 || v9 == 553 )
            goto LABEL_130;
        }
        else if ( v33 <= 0x63 )
        {
          goto LABEL_130;
        }
        if ( v9 != 1 )
          Curl_failf((int)v39, "Command failed: %d", v9);
LABEL_130:
        if ( v39[767] == 0 )
        {
          v40 = &v45[v32];
          v45[v32] = 10;
          plain_message = Curl_client_write(a1, 1, v45, v32 + 1);
          *v40 = 0;
        }
        if ( v9 != 1 )
        {
          v34 = *(_DWORD *)(v31 + 8);
          if ( v34 != 0 )
          {
            v34 = *(_DWORD *)(v34 + 4);
            *(_DWORD *)(v31 + 8) = v34;
            if ( v34 != 0 )
              sub_2580A8(a1);
          }
          *(_DWORD *)(a1 + 944) = v34;
        }
        goto LABEL_151;
      case 0x12:
        if ( (unsigned int)(v9 - 200) > 0x63 )
          Curl_failf(*(_DWORD *)a1, "MAIL failed: %d", v9);
        goto LABEL_142;
      case 0x13:
        v35 = *(_DWORD *)(*(_DWORD *)a1 + 328);
        if ( (unsigned int)(v9 - 200) > 0x63 )
          Curl_failf(*(_DWORD *)a1, "RCPT failed: %d", v9);
        v36 = *(_DWORD *)(*(_DWORD *)(v35 + 8) + 4);
        *(_DWORD *)(v35 + 8) = v36;
        if ( v36 == 0 )
          Curl_pp_sendf(v41, "%s", "DATA");
LABEL_142:
        sub_258120(a1);
      case 0x14:
        v37 = *(_DWORD **)a1;
        if ( v9 != 354 )
          Curl_failf((int)v37, "DATA failed: %d", v9);
        Curl_pgrsSetUploadSize(v37, v8, v37[134], v37[135]);
        Curl_setup_transfer((struct timeval)((unsigned int)a1 | 0xFFFFFFFF00000000LL), -1, 0, 0, 0, 0);
        *(_DWORD *)(a1 + 944) = 0;
        goto LABEL_9;
      case 0x15:
        if ( v9 != 250 )
          plain_message = 56;
        *(_DWORD *)(a1 + 944) = 0;
        goto LABEL_151;
      default:
LABEL_150:
        *(_DWORD *)(a1 + 944) = 0;
        goto LABEL_9;
    }
  }
}


//======================================================================
// sub_258FAE
// address: 0x00258FAE   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_258FAE(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_258FCC
// address: 0x00258FCC   size: 0x104 (260 bytes)
//======================================================================
int __fastcall sub_258FCC(int a1, bool *a2)
{
  int v2; // r4
  const char *v5; // r0
  _BYTE *i; // r5
  int result; // r0
  const char *v8; // r5
  int v9; // r3
  _BOOL4 v10; // r0
  _BOOL4 v11; // r0
  _BOOL4 v12; // r0
  _BOOL4 v13; // r0
  _BOOL4 v14; // r0
  _BOOL4 v15; // r0

  *a2 = false;
  *(_BYTE *)(a1 + 440) = 0;
  v2 = a1 + 888;
  *(_DWORD *)(a1 + 928) = 1800000;
  *(_DWORD *)(a1 + 932) = a1;
  *(_DWORD *)(a1 + 936) = sub_258804;
  *(_DWORD *)(a1 + 960) = -1;
  *(_DWORD *)(a1 + 940) = sub_258604;
  Curl_pp_init(a1 + 888);
  v5 = *(const char **)(a1 + 276);
  if ( v5 == nullptr )
    goto LABEL_20;
  for ( i = *(_BYTE **)(a1 + 276); *i != 0 && *i != 61; ++i )
    ;
  if ( !curl_strnequal(v5, "AUTH", 4u) )
    return 3;
  v8 = i + 1;
  if ( curl_strequal(v8, "*") )
  {
    v9 = -1;
LABEL_18:
    *(_DWORD *)(v2 + 72) = v9;
    goto LABEL_20;
  }
  v10 = curl_strequal(v8, "LOGIN");
  v9 = 1;
  if ( v10 )
    goto LABEL_18;
  v11 = curl_strequal(v8, "PLAIN");
  v9 = 2;
  if ( v11 )
    goto LABEL_18;
  v12 = curl_strequal(v8, "CRAM-MD5");
  v9 = 4;
  if ( v12 )
    goto LABEL_18;
  v13 = curl_strequal(v8, "DIGEST-MD5");
  v9 = 8;
  if ( v13 )
    goto LABEL_18;
  v14 = curl_strequal(v8, "GSSAPI");
  v9 = 16;
  if ( v14 )
    goto LABEL_18;
  v15 = curl_strequal(v8, "NTLM");
  v9 = 64;
  if ( v15 )
    goto LABEL_18;
  if ( curl_strequal(v8, "XOAUTH2") )
  {
    v9 = 128;
    goto LABEL_18;
  }
  *(_DWORD *)(v2 + 72) = 0;
LABEL_20:
  result = sub_258400((int *)a1);
  if ( result == 0 )
  {
    *(_DWORD *)(v2 + 56) = 1;
    return sub_258584(a1, a2);
  }
  return result;
}


//======================================================================
// sub_259100
// address: 0x00259100   size: 0x210 (528 bytes)
//======================================================================
int __fastcall sub_259100(int a1, _BYTE *a2)
{
  int v3; // r0
  char *v4; // r1
  _DWORD *v5; // r5
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r3
  _DWORD *v10; // r1
  int result; // r0
  int v12; // r5
  _BYTE *v13; // r1
  char *v14; // r0
  const char *v15; // r1
  const char *v16; // r4
  int v17; // r0
  char *v18; // [sp+Ch] [bp-10h]

  *a2 = 0;
  v3 = *(_DWORD *)a1;
  v4 = *(char **)(v3 + 840);
  if ( v4 == nullptr || (result = Curl_urldecode(v3, v4, 0, (_DWORD *)(*(_DWORD *)(v3 + 328) + 4), nullptr, 1)) == 0 )
  {
    v5 = *(_DWORD **)a1;
    v5[20] = -1;
    v5[21] = -1;
    Curl_pgrsSetUploadCounter((int)v5, (int)v4, 0, 0);
    Curl_pgrsSetDownloadCounter((int)v5, v6, 0, 0);
    Curl_pgrsSetUploadSize(v5, v7, 0, 0);
    Curl_pgrsSetDownloadSize(v5, v8, 0, 0);
    v9 = *(_DWORD *)a1;
    v10 = *(_DWORD **)(*(_DWORD *)a1 + 328);
    if ( *(_BYTE *)(*(_DWORD *)a1 + 767) != 0 )
      *v10 = 1;
    *a2 = 0;
    v10[2] = *(_DWORD *)(v9 + 1004);
    if ( *(_BYTE *)(v9 + 769) == 0 || *(_DWORD *)(v9 + 1004) == 0 )
      sub_2580A8(a1);
    v12 = *(_DWORD *)a1;
    v13 = *(_BYTE **)(*(_DWORD *)a1 + 972);
    if ( v13 != nullptr )
    {
      if ( *v13 == 60 )
        curl_maprintf("%s");
      curl_maprintf("<%s>");
    }
    v14 = Curl_cstrdup("<>");
    v18 = v14;
    if ( v14 == nullptr )
      return 27;
    v15 = *(const char **)(v12 + 976);
    if ( v15 != nullptr )
    {
      if ( *(_DWORD *)(a1 + 964) != 0 )
      {
        if ( *v15 != 0 )
          curl_maprintf("%s", v15);
        v16 = Curl_cstrdup("<>");
        if ( v16 == nullptr )
        {
          Curl_cfree(v18);
          return 27;
        }
      }
      else
      {
        v16 = nullptr;
      }
    }
    else
    {
      v16 = nullptr;
    }
    if ( *(_BYTE *)(a1 + 969) != 0 && *(__int64 *)(*(_DWORD *)a1 + 536) > 0 )
      curl_maprintf("%lld", *(_QWORD *)(v12 + 536));
    v17 = a1 + 888;
    if ( v16 != nullptr )
      Curl_pp_sendf(v17, "MAIL FROM:%s AUTH=%s", v18, v16);
    Curl_pp_sendf(v17, "MAIL FROM:%s", v18);
  }
  return result;
}


//======================================================================
// sub_259930
// address: 0x00259930   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_259930(int a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 320);
  return 0x10000;
}


//======================================================================
// sub_25993C
// address: 0x0025993C   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_25993C(int *a1)
{
  int v1; // r4
  void *v2; // r0
  int v3; // r3

  v1 = *a1;
  v2 = Curl_ccalloc(1u, 0x68u);
  v3 = 0;
  *(_DWORD *)(v1 + 328) = v2;
  if ( v2 == nullptr )
    return 27;
  return v3;
}


//======================================================================
// sub_259964
// address: 0x00259964   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_259964(int a1)
{
  void *v2; // r0

  v2 = *(void **)(a1 + 888);
  if ( v2 != nullptr )
  {
    Curl_cfree(v2);
    *(_DWORD *)(a1 + 888) = 0;
  }
  return 0;
}


//======================================================================
// sub_259988
// address: 0x00259988   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_259988(int *a1, _BYTE *a2)
{
  int v3; // r4
  int result; // r0

  v3 = *a1;
  result = Curl_http_connect((int)a1, a2);
  if ( *(_DWORD *)(v3 + 34416) == 0 )
    *(_DWORD *)(v3 + 34416) = 1;
  if ( *(_DWORD *)(v3 + 34420) == 0 )
    *(_DWORD *)(v3 + 34420) = 1;
  a1[224] = -1;
  return result;
}


//======================================================================
// sub_2599C0
// address: 0x002599C0   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_2599C0(int *a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r7
  int v6; // r0
  int v7; // r2
  int v8; // r3
  int v9; // r5

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 + 328);
  if ( *(_DWORD *)(*a1 + 1012) == 11 )
    a3 = 1;
  v6 = Curl_http_done(a1, a2, a3);
  if ( v4 == 0 )
    return v6;
  v7 = *(_DWORD *)(v4 + 96);
  v8 = *(_DWORD *)(v4 + 100);
  if ( *(_DWORD *)(v3 + 1012) != 11 )
  {
    if ( v7 != v8 )
      Curl_failf(v3, "The CSeq of this request %ld did not match the response %ld", v7, v8);
    return v6;
  }
  v9 = v6;
  if ( a1[224] == -1 )
    Curl_infof(v3, "Got an RTP Receive with a CSeq of %ld\n", *(_DWORD *)(v4 + 100));
  return v9;
}


//======================================================================
// sub_259A28
// address: 0x00259A28   size: 0x62E (1582 bytes)
//======================================================================
int __fastcall sub_259A28(int *a1, _BYTE *a2)
{
  int v2; // r4
  const char *v4; // r5
  const char *v5; // r2
  int v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0
  const char *v13; // r2
  const char *v15; // [sp+1Ch] [bp-30h]
  int v16; // [sp+24h] [bp-28h]
  int v17; // [sp+2Ch] [bp-20h]
  int v18; // [sp+30h] [bp-1Ch]
  const char *v19; // [sp+38h] [bp-14h]

  v2 = *a1;
  v16 = *(_DWORD *)(*a1 + 1012);
  v17 = *(_DWORD *)(*a1 + 328);
  *a2 = 1;
  *(_DWORD *)(v17 + 96) = *(_DWORD *)(v2 + 34416);
  *(_DWORD *)(v17 + 100) = 0;
  *(_BYTE *)(v2 + 767) = 1;
  switch ( v16 )
  {
    case 0:
      Curl_failf(v2, "Got invalid RTSP request: RTSPREQ_NONE");
    case 1:
      v4 = "OPTIONS";
      goto LABEL_16;
    case 2:
      *(_BYTE *)(v2 + 767) = 0;
      v4 = "DESCRIBE";
      goto LABEL_16;
    case 3:
      v4 = "ANNOUNCE";
      goto LABEL_16;
    case 4:
      v4 = "SETUP";
      goto LABEL_16;
    case 5:
      v4 = "PLAY";
      goto LABEL_16;
    case 6:
      v4 = "PAUSE";
      goto LABEL_16;
    case 7:
      v4 = "TEARDOWN";
      goto LABEL_16;
    case 8:
      *(_BYTE *)(v2 + 767) = 0;
      v4 = "GET_PARAMETER";
      goto LABEL_16;
    case 9:
      v4 = "SET_PARAMETER";
      goto LABEL_16;
    case 10:
      v4 = "RECORD";
LABEL_16:
      v15 = v4;
      goto LABEL_17;
    case 11:
      *(_BYTE *)(v2 + 767) = 0;
      goto LABEL_14;
    case 12:
      Curl_failf(v2, "Got invalid RTSP request: RTSPREQ_LAST");
    default:
      v15 = nullptr;
      if ( v16 == 11 )
      {
LABEL_14:
        Curl_setup_transfer((struct timeval)(unsigned int)a1, -1, 1, v17 + 32, -1, 0);
        return 0;
      }
      else
      {
LABEL_17:
        if ( *(_DWORD *)(v2 + 960) == 0 && (v16 & 0xFFFFFFF8) != 0 )
        {
          v5 = v15;
          if ( v15 == nullptr )
            v5 = (const char *)&unk_3FB8EA;
          Curl_failf(v2, "Refusing to issue an RTSP request [%s] without a session ID.", v5);
        }
        v19 = *(const char **)(v2 + 964);
        if ( v19 == nullptr )
          v19 = "*";
        v6 = Curl_checkheaders(v2, "Transport:");
        v18 = v6;
        if ( v16 == 4 )
        {
          if ( v6 == 0 )
          {
            if ( *(_DWORD *)(v2 + 968) != 0 )
            {
              v7 = (void *)a1[134];
              if ( v7 != nullptr )
              {
                Curl_cfree(v7);
                a1[134] = v18;
              }
              curl_maprintf("Transport: %s\r\n", *(const char **)(v2 + 968));
            }
            Curl_failf(v2, "Refusing to issue an RTSP SETUP without a Transport: header.");
          }
        }
        else if ( v16 == 2 )
        {
          Curl_checkheaders(v2, "Accept:");
          if ( Curl_checkheaders(v2, "Accept-Encoding:") == 0 && *(_DWORD *)(v2 + 848) != 0 )
          {
            v8 = (void *)a1[128];
            if ( v8 != nullptr )
            {
              Curl_cfree(v8);
              a1[128] = 0;
            }
            curl_maprintf("Accept-Encoding: %s\r\n", *(const char **)(v2 + 848));
          }
        }
        if ( Curl_checkheaders(v2, "User-Agent:") != 0 && (v9 = (void *)a1[127]) != nullptr )
        {
          Curl_cfree(v9);
          a1[127] = 0;
        }
        else
        {
          Curl_checkheaders(v2, "User-Agent:");
        }
        v10 = (void *)a1[131];
        if ( v10 != nullptr )
        {
          Curl_cfree(v10);
          a1[131] = 0;
        }
        if ( *(_DWORD *)(v2 + 1072) != 0 && Curl_checkheaders(v2, "Referer:") == 0 )
          curl_maprintf("Referer: %s\r\n", *(const char **)(v2 + 1072));
        a1[131] = 0;
        if ( *(_BYTE *)(v2 + 34401) != 0
          && v16 << 28 != 0
          && Curl_checkheaders(v2, "Range:") == 0
          && *(_DWORD *)(v2 + 34404) != 0 )
        {
          v11 = (void *)a1[130];
          if ( v11 != nullptr )
          {
            Curl_cfree(v11);
            a1[130] = 0;
          }
          curl_maprintf("Range: %s\r\n", *(const char **)(v2 + 34404));
        }
        if ( Curl_checkheaders(v2, "CSeq:") != 0 )
          Curl_failf(v2, "CSeq cannot be set as a custom header.");
        if ( Curl_checkheaders(v2, "Session:") != 0 )
          Curl_failf(v2, "Session ID cannot be set as a custom header.");
        v12 = Curl_add_buffer_init();
        if ( v12 != nullptr )
        {
          v13 = v15;
          if ( v15 == nullptr )
            v13 = (const char *)&unk_3FB8EA;
          Curl_add_bufferf((int)v12, (int)"%s %s RTSP/1.0\r\nCSeq: %ld\r\n", (int)v13, (int)v19);
        }
        return 27;
      }
  }
}


//======================================================================
// sub_25A0B8
// address: 0x0025A0B8   size: 0x20A (522 bytes)
//======================================================================
int __fastcall sub_25A0B8(int a1, _DWORD *a2, size_t *a3, _BYTE *a4)
{
  void *v6; // r0
  char *v8; // r0
  void *v9; // r0
  int v10; // r2
  _BYTE *v11; // r6
  int (__fastcall *v12)(_BYTE *, int, int, _DWORD); // r12
  int v13; // r0
  void *v14; // r0
  void *v16; // r0
  void *v17; // r0
  int v18; // [sp+0h] [bp-1Ch]
  _DWORD *v19; // [sp+4h] [bp-18h]
  void *v20; // [sp+4h] [bp-18h]
  int v21; // [sp+Ch] [bp-10h]

  v6 = (void *)a2[222];
  if ( v6 != nullptr )
  {
    v8 = (char *)Curl_crealloc(v6, a2[223] + *a3);
    if ( v8 != nullptr )
    {
      a2[222] = v8;
      j_memcpy(&v8[a2[223]], *(const void **)(a1 + 172), *a3);
      v10 = a2[223] + *a3;
      a2[223] = v10;
      v18 = v10;
      v11 = (_BYTE *)a2[222];
      goto LABEL_10;
    }
    v9 = (void *)a2[222];
    if ( v9 != nullptr )
      Curl_cfree(v9);
    a2[222] = 0;
    a2[223] = 0;
    return 27;
  }
  v11 = *(_BYTE **)(a1 + 172);
  v18 = *a3;
LABEL_10:
  while ( v18 > 0 )
  {
    if ( *v11 != 36 )
      goto LABEL_23;
    if ( v18 <= 4 )
    {
      *a4 = 1;
      goto LABEL_23;
    }
    a2[224] = (unsigned __int8)v11[1];
    v21 = ((unsigned __int8)v11[2] << 8) | (unsigned __int8)v11[3];
    if ( v21 + 3 >= v18 )
    {
      *a4 = 1;
      goto LABEL_23;
    }
    v19 = (_DWORD *)*a2;
    v12 = *(int (__fastcall **)(_BYTE *, int, int, _DWORD))(*a2 + 432);
    if ( v12 == nullptr )
      v12 = *(int (__fastcall **)(_BYTE *, int, int, _DWORD))(*a2 + 424);
    v13 = v12(v11, 1, v21 + 4, v19[91]);
    if ( v13 == 268435457 )
      Curl_failf((int)v19, "Cannot pause RTP");
    if ( v13 != v21 + 4 )
      Curl_failf((int)v19, "Failed writing RTP data");
    v11 += v13;
    v18 = v18 - v21 - 4;
    if ( *(_DWORD *)(a1 + 1012) == 11 )
      *(_DWORD *)(a1 + 300) &= ~1u;
  }
  if ( v18 == 0 )
  {
LABEL_32:
    *(_DWORD *)(a1 + 172) += *a3 - v18;
    *a3 = v18;
    v17 = (void *)a2[222];
    if ( v17 != nullptr )
      Curl_cfree(v17);
    a2[222] = 0;
    a2[223] = 0;
    return 0;
  }
LABEL_23:
  if ( *v11 != 36 )
    goto LABEL_32;
  v20 = Curl_cmalloc(v18);
  if ( v20 == nullptr )
  {
    v14 = (void *)a2[222];
    if ( v14 != nullptr )
      Curl_cfree(v14);
    a2[222] = 0;
    a2[223] = 0;
    return 27;
  }
  j_memcpy(v20, v11, v18);
  v16 = (void *)a2[222];
  if ( v16 != nullptr )
    Curl_cfree(v16);
  a2[222] = v20;
  a2[223] = v18;
  *a3 = 0;
  return 0;
}


//======================================================================
// sub_25A5E4
// address: 0x0025A5E4   size: 0x130 (304 bytes)
//======================================================================
int __fastcall sub_25A5E4(int *a1, _BYTE *a2)
{
  const char *v3; // r4
  char *v4; // r6
  const char *v5; // r0
  int v6; // r7
  char *v7; // r4
  char *v8; // r6
  int v9; // r0
  int v10; // r3
  int v12; // [sp+10h] [bp-1Ch]
  int v13; // [sp+14h] [bp-18h]
  int v14; // [sp+1Ch] [bp-10h]
  size_t v15[2]; // [sp+24h] [bp-8h] BYREF

  v12 = *a1;
  v14 = a1[80];
  v3 = *(const char **)(*a1 + 34396);
  *a2 = 1;
  if ( j_strlen(v3) <= 2 )
  {
    v8 = nullptr;
    v7 = (char *)&unk_3FB8EA;
  }
  else
  {
    v4 = (char *)(v3 + 2);
    v5 = &v3[j_strlen(v3 + 2)];
    while ( v3 != v5 )
    {
      if ( v3[2] == 63 )
        *((_BYTE *)v3 + 2) = 9;
      ++v3;
    }
    v6 = 27;
    v7 = (char *)curl_easy_unescape(v12, v4, 0, v15);
    v8 = v7;
    if ( v7 == nullptr )
      return v6;
  }
  j_strlen(v7);
  curlx_uztosz();
  v13 = v9;
  while ( 1 )
  {
    if ( Curl_write((int)a1, v14, (int)v7, v13, (int *)v15) != 0 )
      Curl_failf(v12, "Failed sending Gopher request");
    v6 = Curl_client_write((int)a1, 2, v7, v15[0]);
    if ( v6 != 0 )
      break;
    v10 = v15[0];
    v7 += v15[0];
    v13 -= v15[0];
    if ( v13 <= 0 )
    {
      if ( v8 != nullptr )
        Curl_cfree(v8);
      Curl_sendf(v14, (int)a1, (int)"\r\n", v10);
    }
    Curl_socket_check(-1, -1, v14, 100);
  }
  if ( v8 != nullptr )
    Curl_cfree(v8);
  return v6;
}


//======================================================================
// sub_25AF56
// address: 0x0025AF56   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_25AF56(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_25AFCA
// address: 0x0025AFCA   size: 0x42 (66 bytes)
//======================================================================
char *__fastcall sub_25AFCA(const char *a1, const char *a2, int a3, int a4, unsigned __int8 a5)
{
  char *result; // r0
  unsigned int v9; // r7
  char *v10; // r4
  unsigned int i; // r3
  int v12; // r2

  result = j_strstr(a1, a2);
  if ( result != nullptr )
  {
    v9 = a4 - 1;
    v10 = &result[j_strlen(a2)];
    for ( i = 0; ; ++i )
    {
      v12 = (unsigned __int8)v10[i];
      if ( v10[i] == 0 || v12 == a5 || i >= v9 )
        break;
      *(_BYTE *)(a3 + i) = v12;
    }
    *(_BYTE *)(a3 + i) = 0;
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// sub_25B66E
// address: 0x0025B66E   size: 0xA (10 bytes)
//======================================================================
void __fastcall sub_25B66E(int a1, int a2)
{
  *(_DWORD *)(a2 + 1112) = 0;
}


//======================================================================
// sub_25B750
// address: 0x0025B750   size: 0x8 (8 bytes)
//======================================================================
void __fastcall sub_25B750(_DWORD *a1)
{
  Curl_bundle_destroy(a1);
}


//======================================================================
// sub_25B758
// address: 0x0025B758   size: 0x30 (48 bytes)
//======================================================================
int *__fastcall sub_25B758(int *a1, int a2, int a3, int a4)
{
  _DWORD *element; // r0
  _DWORD v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[1] = a3;
  v9[2] = a4;
  if ( a1 != nullptr )
  {
    Curl_hash_start_iterate(*a1, v9);
    while ( 1 )
    {
      element = (_DWORD *)Curl_hash_next_element((int)v9);
      if ( element == nullptr )
        break;
      if ( *element == a2 )
      {
        Curl_hash_delete(*a1, element[1], element[2]);
        return a1;
      }
    }
  }
  return a1;
}


//======================================================================
// sub_25B93C
// address: 0x0025B93C   size: 0x20 (32 bytes)
//======================================================================
void __fastcall sub_25B93C(int a1, void **a2)
{
  if ( *a2 != nullptr )
  {
    Curl_cfree(*a2);
    *a2 = nullptr;
  }
  Curl_cfree(a2);
}


//======================================================================
// sub_25B960
// address: 0x0025B960   size: 0x14 (20 bytes)
//======================================================================
void __fastcall sub_25B960(int a1, void *a2)
{
  if ( a2 != nullptr )
    Curl_cfree(a2);
}


//======================================================================
// sub_25BE90
// address: 0x0025BE90   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall sub_25BE90(_DWORD *a1)
{
  lua_pushstring((int)a1, ".set");
  lua_rawget(a1, -4);
  if ( lua_type(a1, -1) == 5 && (lua_pushvalue(a1, 2), lua_rawget(a1, -2), lua_iscfunction(a1, -1)) )
  {
    lua_pushvalue(a1, 1);
    lua_pushvalue(a1, 3);
    lua_call((int)a1, 2, 0);
  }
  else
  {
    if ( lua_getmetatable(a1, 1) != 0 && lua_getmetatable(a1, -1) != 0 )
    {
      lua_pushstring((int)a1, "__newindex");
      lua_rawget(a1, -2);
      if ( lua_type(a1, -1) == 6 )
      {
        lua_pushvalue(a1, 1);
        lua_pushvalue(a1, 2);
        lua_pushvalue(a1, 3);
        lua_call((int)a1, 3, 0);
      }
    }
    lua_settop((int)a1, 3);
    lua_rawset(a1, -3);
  }
  return 0;
}


//======================================================================
// sub_25BF6C
// address: 0x0025BF6C   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_25BF6C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1

  lua_pushstring((int)a1, ".get");
  lua_rawget(a1, -3);
  if ( lua_type(a1, -1) == 5 )
  {
    lua_pushvalue(a1, 2);
    lua_rawget(a1, -2);
    if ( lua_iscfunction(a1, -1) )
    {
      v2 = (int)a1;
      v3 = 0;
LABEL_10:
      lua_call(v2, v3, 1);
      return 1;
    }
    if ( lua_type(a1, -1) == 5 )
      return 1;
  }
  if ( lua_getmetatable(a1, 1) == 0 )
    goto LABEL_13;
  lua_pushstring((int)a1, "__index");
  lua_rawget(a1, -2);
  lua_pushvalue(a1, 1);
  lua_pushvalue(a1, 2);
  if ( lua_type(a1, -1) == 6 )
  {
    v2 = (int)a1;
    v3 = 2;
    goto LABEL_10;
  }
  if ( lua_type(a1, -1) != 5 )
  {
LABEL_13:
    lua_pushnil((int)a1);
    return 1;
  }
  lua_gettable(a1, -3);
  return 1;
}


//======================================================================
// sub_25C040
// address: 0x0025C040   size: 0x8A (138 bytes)
//======================================================================
int __fastcall sub_25C040(_DWORD *a1, char *a2)
{
  if ( lua_isuserdata(a1, 1) )
  {
    lua_pushvalue(a1, 1);
    while ( lua_getmetatable(a1, -1) != 0 )
    {
      lua_remove(a1, -2);
      lua_pushstring((int)a1, a2);
      lua_rawget(a1, -2);
      if ( lua_type(a1, -1) == 6 )
      {
        lua_pushvalue(a1, 1);
        lua_pushvalue(a1, 2);
        lua_call((int)a1, 2, 1);
        return 1;
      }
      lua_settop((int)a1, 3);
    }
  }
  tolua_error(a1, "Attempt to perform operation on an invalid operand", 0);
  return 0;
}


//======================================================================
// sub_25C0D0
// address: 0x0025C0D0   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_25C0D0(_DWORD *a1)
{
  return sub_25C040(a1, ".le");
}


//======================================================================
// sub_25C0E0
// address: 0x0025C0E0   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_25C0E0(_DWORD *a1)
{
  return sub_25C040(a1, ".lt");
}


//======================================================================
// sub_25C0F0
// address: 0x0025C0F0   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_25C0F0(_DWORD *a1)
{
  return sub_25C040(a1, ".div");
}


//======================================================================
// sub_25C100
// address: 0x0025C100   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_25C100(_DWORD *a1)
{
  return sub_25C040(a1, ".mul");
}


//======================================================================
// sub_25C110
// address: 0x0025C110   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_25C110(_DWORD *a1)
{
  return sub_25C040(a1, ".sub");
}


//======================================================================
// sub_25C120
// address: 0x0025C120   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_25C120(_DWORD *a1)
{
  return sub_25C040(a1, ".add");
}


//======================================================================
// sub_25C130
// address: 0x0025C130   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_25C130(_DWORD *a1)
{
  if ( lua_isuserdata(a1, 1) )
  {
    lua_pushvalue(a1, 1);
    while ( lua_getmetatable(a1, -1) != 0 )
    {
      lua_remove(a1, -2);
      lua_pushstring((int)a1, ".eq");
      lua_rawget(a1, -2);
      if ( lua_type(a1, -1) == 6 )
      {
        lua_pushvalue(a1, 1);
        lua_pushvalue(a1, 2);
        lua_call((int)a1, 2, 1);
        return 1;
      }
      lua_settop((int)a1, 3);
    }
  }
  lua_settop((int)a1, 3);
  lua_pushboolean((unsigned int)a1);
  return 1;
}


//======================================================================
// sub_25C1C0
// address: 0x0025C1C0   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_25C1C0(_DWORD *a1)
{
  int v2; // r0

  if ( lua_type(a1, 1) == 5 && (lua_pushstring((int)a1, ".call"), lua_rawget(a1, 1), lua_type(a1, -1) == 6) )
  {
    lua_insert(a1, 1);
    v2 = lua_gettop((int)a1);
    lua_call((int)a1, v2 - 1, 1);
    return 1;
  }
  else
  {
    tolua_error(a1, "Attempt to call a non-callable object.", 0);
    return 0;
  }
}


//======================================================================
// sub_25C224
// address: 0x0025C224   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_25C224(_DWORD *a1)
{
  lua_getfenv(a1, 1);
  if ( lua_rawequal(a1, -1, -10000) != 0 )
  {
    lua_settop((int)a1, -2);
    lua_createtable((int)a1, 0, 0);
    lua_pushvalue(a1, -1);
    lua_setfenv(a1, 1);
  }
  lua_insert(a1, -3);
  lua_settable(a1, -3);
  return lua_settop((int)a1, -2);
}


//======================================================================
// sub_25C288
// address: 0x0025C288   size: 0x1C0 (448 bytes)
//======================================================================
int __fastcall sub_25C288(_DWORD *a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r6

  v2 = lua_type(a1, 1);
  if ( v2 != 7 )
  {
    if ( v2 == 5 )
    {
      sub_25BF6C(a1);
      return 1;
    }
    goto LABEL_17;
  }
  lua_getfenv(a1, 1);
  if ( lua_rawequal(a1, -1, -10000) != 0 || (lua_pushvalue(a1, 2), lua_gettable(a1, -2), lua_type(a1, -1) == 0) )
  {
    lua_settop((int)a1, 2);
    lua_pushvalue(a1, 1);
    while ( lua_getmetatable(a1, -1) != 0 )
    {
      lua_remove(a1, -2);
      if ( lua_isnumber(a1, 2, v3, v4) )
      {
        lua_pushstring((int)a1, ".geti");
        lua_rawget(a1, -2);
        if ( lua_type(a1, -1) == 6 )
          goto LABEL_14;
      }
      else
      {
        lua_pushvalue(a1, 2);
        lua_rawget(a1, -2);
        if ( lua_type(a1, -1) != 0 )
          return 1;
        lua_settop((int)a1, -2);
        lua_pushstring((int)a1, ".get");
        lua_rawget(a1, -2);
        if ( lua_type(a1, -1) == 5 )
        {
          lua_pushvalue(a1, 2);
          lua_rawget(a1, -2);
          if ( lua_iscfunction(a1, -1) )
          {
LABEL_14:
            lua_pushvalue(a1, 1);
            lua_pushvalue(a1, 2);
            lua_call((int)a1, 2, 1);
            return 1;
          }
          if ( lua_type(a1, -1) == 5 )
          {
            v5 = *(_DWORD *)lua_touserdata(a1, 1);
            lua_createtable((int)a1, 0, 0);
            lua_pushstring((int)a1, ".self");
            lua_pushlightuserdata((int)a1, v5);
            lua_rawset(a1, -3);
            lua_insert(a1, -2);
            lua_setmetatable(a1, -2);
            lua_pushvalue(a1, -1);
            lua_pushvalue(a1, 2);
            lua_insert(a1, -2);
            sub_25C224(a1);
            return 1;
          }
        }
      }
      lua_settop((int)a1, 3);
    }
LABEL_17:
    lua_pushnil((int)a1);
  }
  return 1;
}


//======================================================================
// sub_25C458
// address: 0x0025C458   size: 0x124 (292 bytes)
//======================================================================
int __fastcall sub_25C458(_DWORD *a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r0
  int v6; // r1

  v2 = lua_type(a1, 1);
  if ( v2 == 7 )
  {
    lua_getmetatable(a1, 1);
    while ( lua_type(a1, -1) == 5 )
    {
      if ( lua_isnumber(a1, 2, v3, v4) )
      {
        lua_pushstring((int)a1, ".seti");
        lua_rawget(a1, -2);
        if ( lua_type(a1, -1) == 6 )
        {
          lua_pushvalue(a1, 1);
          lua_pushvalue(a1, 2);
          lua_pushvalue(a1, 3);
          v5 = (int)a1;
          v6 = 3;
LABEL_10:
          lua_call(v5, v6, 0);
          return 0;
        }
      }
      else
      {
        lua_pushstring((int)a1, ".set");
        lua_rawget(a1, -2);
        if ( lua_type(a1, -1) == 5 )
        {
          lua_pushvalue(a1, 2);
          lua_rawget(a1, -2);
          if ( lua_iscfunction(a1, -1) )
          {
            lua_pushvalue(a1, 1);
            lua_pushvalue(a1, 3);
            v5 = (int)a1;
            v6 = 2;
            goto LABEL_10;
          }
          lua_settop((int)a1, -2);
        }
        lua_settop((int)a1, -2);
        if ( lua_getmetatable(a1, -1) == 0 )
          lua_pushnil((int)a1);
        lua_remove(a1, -2);
      }
    }
    lua_settop((int)a1, 3);
    sub_25C224(a1);
  }
  else if ( v2 == 5 )
  {
    sub_25BE90(a1);
  }
  return 0;
}


//======================================================================
// sub_25D1D4
// address: 0x0025D1D4   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_25D1D4(_DWORD *a1)
{
  lua_pushstring((int)a1, ".c_instance");
  lua_pushvalue(a1, -2);
  lua_rawset(a1, -4);
  return 0;
}


//======================================================================
// sub_25D1FC
// address: 0x0025D1FC   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_25D1FC(_DWORD *a1)
{
  if ( !lua_isuserdata(a1, -2) )
  {
    lua_pushstring((int)a1, "Invalid argument #1 to setpeer: userdata expected.");
    lua_error((int)a1);
  }
  if ( lua_type(a1, -1) == 0 )
  {
    lua_settop((int)a1, -2);
    lua_pushvalue(a1, -10000);
  }
  lua_setfenv(a1, -2);
  return 0;
}


//======================================================================
// sub_25D254
// address: 0x0025D254   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_25D254(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r2

  if ( lua_type(a1, 1) == 2 )
    v2 = tolua_touserdata(a1, 1, 0);
  else
    v2 = tolua_tousertype(a1, 1, 0);
  v3 = v2;
  v4 = tolua_tostring(a1, 2, 0);
  if ( v3 != 0 && v4 != 0 )
    tolua_pushusertype(a1, v3, v4);
  else
    lua_pushnil((int)a1);
  return 1;
}


//======================================================================
// sub_25D2A0
// address: 0x0025D2A0   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_25D2A0(_DWORD *a1)
{
  __int64 v2; // r0
  int v3; // r5

  if ( lua_isuserdata(a1, 1)
    && (v3 = *(_DWORD *)lua_touserdata(a1, 1),
        lua_gc((int)a1, 2, 0),
        lua_pushstring((int)a1, "tolua_gc"),
        lua_rawget(a1, -10000),
        lua_pushlightuserdata((int)a1, v3),
        lua_rawget(a1, -2),
        lua_getmetatable(a1, 1),
        lua_rawequal(a1, -1, -2) != 0) )
  {
    lua_pushlightuserdata((int)a1, v3);
    lua_pushnil((int)a1);
    lua_rawset(a1, -5);
    HIDWORD(v2) = 1;
  }
  else
  {
    HIDWORD(v2) = 0;
  }
  LODWORD(v2) = a1;
  lua_pushboolean(v2);
  return 1;
}


//======================================================================
// sub_25D330
// address: 0x0025D330   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_25D330(_DWORD *a1)
{
  int v2; // r0

  v2 = lua_gettop((int)a1);
  tolua_typename(a1, v2);
  return 1;
}


//======================================================================
// sub_25D344
// address: 0x0025D344   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_25D344(_DWORD *a1, char *a2, int a3, int a4)
{
  int v6; // r5

  v6 = luaL_newmetatable(a1, a2, a3, a4);
  if ( v6 != 0 )
  {
    lua_pushvalue(a1, -1);
    lua_pushstring((int)a1, a2);
    lua_settable(a1, -10000);
    tolua_classevents(a1);
  }
  lua_settop((int)a1, -2);
  return v6;
}


//======================================================================
// sub_25D384
// address: 0x0025D384   size: 0x3C (60 bytes)
//======================================================================
_DWORD *__fastcall sub_25D384(_DWORD *result, const char *a2, int a3)
{
  _DWORD *v3; // r4

  v3 = result;
  if ( a3 != 0 )
  {
    lua_getfield(result, -10000, a2, (int)a2);
    lua_pushstring((int)v3, ".collector");
    lua_pushcclosure(v3, a3, 0);
    lua_rawset(v3, -3);
    return (_DWORD *)lua_settop((int)v3, -2);
  }
  return result;
}


//======================================================================
// sub_25D3C8
// address: 0x0025D3C8   size: 0x102 (258 bytes)
//======================================================================
int __fastcall sub_25D3C8(_DWORD *a1, const char *a2, const char *a3)
{
  _DWORD *v5; // r0
  int v6; // r3
  const char *v7; // r2
  int v8; // r0
  int v9; // r1

  lua_getfield(a1, -10000, a2, (int)a2);
  v5 = a1;
  if ( a3 != nullptr && (v6 = *(unsigned __int8 *)a3, *a3 != 0) )
  {
    v7 = a3;
  }
  else
  {
    if ( lua_getmetatable(a1, -1) != 0 )
    {
      v8 = (int)a1;
      v9 = 3;
      return lua_settop(v8, -v9);
    }
    v5 = a1;
    v7 = "tolua_commonclass";
  }
  lua_getfield(v5, -10000, v7, v6);
  if ( lua_type(a1, -1) != 0 )
  {
    lua_pushstring((int)a1, "tolua_ubox");
    lua_rawget(a1, -2);
  }
  else
  {
    lua_pushnil((int)a1);
  }
  if ( lua_type(a1, -1) != 0 )
  {
    lua_pushstring((int)a1, "tolua_ubox");
    lua_insert(a1, -2);
  }
  else
  {
    lua_settop((int)a1, -2);
    lua_pushstring((int)a1, "tolua_ubox");
    lua_createtable((int)a1, 0, 0);
    lua_createtable((int)a1, 0, 0);
    lua_pushlstring((int)a1, (int)"__mode", 6u);
    lua_pushlstring((int)a1, (int)"v", 1u);
    lua_rawset(a1, -3);
    lua_setmetatable(a1, -2);
  }
  lua_rawset(a1, -4);
  lua_setmetatable(a1, -2);
  v8 = (int)a1;
  v9 = 2;
  return lua_settop(v8, -v9);
}


//======================================================================
// sub_25D4E8
// address: 0x0025D4E8   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_25D4E8(int a1, const char *a2, char *a3)
{
  int v6; // r3
  int v7; // r3
  int v8; // r3

  lua_pushstring(a1, "tolua_super");
  lua_rawget((_DWORD *)a1, -10000);
  lua_getfield((_DWORD *)a1, -10000, a2, v6);
  lua_rawget((_DWORD *)a1, -2);
  if ( lua_type((_DWORD *)a1, -1) == 0 )
  {
    lua_settop(a1, -2);
    lua_createtable(a1, 0, 0);
    lua_getfield((_DWORD *)a1, -10000, a2, v7);
    lua_pushvalue((_DWORD *)a1, -2);
    lua_rawset((_DWORD *)a1, -4);
  }
  lua_pushstring(a1, a3);
  lua_pushboolean((unsigned int)a1 | 0x100000000LL);
  lua_rawset((_DWORD *)a1, -3);
  lua_getfield((_DWORD *)a1, -10000, a3, v8);
  lua_rawget((_DWORD *)a1, -3);
  if ( lua_type((_DWORD *)a1, -1) == 5 )
  {
    lua_pushnil(a1);
    while ( lua_next((_DWORD *)a1, -2) != 0 )
    {
      lua_pushvalue((_DWORD *)a1, -2);
      lua_insert((_DWORD *)a1, -2);
      lua_rawset((_DWORD *)a1, -5);
    }
  }
  return lua_settop(a1, -4);
}


//======================================================================
// sub_25D5D8
// address: 0x0025D5D8   size: 0xE (14 bytes)
//======================================================================
void __fastcall __noreturn sub_25D5D8(int a1)
{
  luaL_error(a1, (int)"value of const array cannot be changed");
}


//======================================================================
// sub_25D5EC
// address: 0x0025D5EC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_25D5EC(_DWORD *a1)
{
  lua_getfenv(a1, -1);
  if ( lua_rawequal(a1, -1, -10000) != 0 )
  {
    lua_settop((int)a1, -2);
    lua_pushnil((int)a1);
  }
  return 1;
}


//======================================================================
// sub_25D6D8
// address: 0x0025D6D8   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_25D6D8(_DWORD *a1)
{
  int v2; // r0
  __int64 v3; // r0

  if ( lua_isuserdata(a1, 1) && lua_getmetatable(a1, 1) != 0 )
  {
    lua_settop((int)a1, -2);
    lua_gc((int)a1, 2, 0);
    v2 = tolua_register_gc(a1, 1);
  }
  else
  {
    v2 = 0;
  }
  HIDWORD(v3) = v2 != 0;
  LODWORD(v3) = a1;
  lua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_25F55A
// address: 0x0025F55A   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_25F55A(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r3
  _DWORD *result; // r0

  v3 = (_DWORD *)a1[1];
  for ( result = (_DWORD *)*a1; result != v3 && (result[3] != 0 || result[1] != a2 || result[2] != a3); result += 4 )
    ;
  return result;
}


//======================================================================
// sub_25FDB4
// address: 0x0025FDB4   size: 0x36 (54 bytes)
//======================================================================
unsigned __int64 __fastcall sub_25FDB4(int a1, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // r1
  int v5; // r6
  unsigned __int64 v7; // [sp+0h] [bp-10h] BYREF
  int v8; // [sp+8h] [bp-8h]
  int v9; // [sp+Ch] [bp-4h]

  v8 = a4;
  v7 = __PAIR64__(a3, a2);
  v9 = 1;
  v4 = *(_DWORD **)(a1 + 4);
  if ( v4 == *(_DWORD **)(a1 + 8) )
  {
    std::vector<Ogre::OGLHardwarePixelBufferManager::BufferObject>::_M_insert_aux(a1, v4, (int *)&v7);
  }
  else
  {
    if ( v4 != nullptr )
    {
      v5 = v8;
      *(_QWORD *)v4 = v7;
      v4[2] = v5;
      v4[3] = v9;
    }
    *(_DWORD *)(a1 + 4) += 16;
  }
  return v7;
}

