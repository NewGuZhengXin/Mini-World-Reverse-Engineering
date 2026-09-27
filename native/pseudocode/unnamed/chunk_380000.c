// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_380000

//======================================================================
// sub_3802EE
// address: 0x003802EE   size: 0x4BC (1212 bytes)
//======================================================================
int sub_3802EE()
{
  int v0; // r4
  int v1; // r6
  int v2; // r0
  unsigned int v3; // r6
  unsigned int v4; // r0
  unsigned int v5; // r6
  int v6; // r0
  int *v7; // r5
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r4
  unsigned int v11; // r6
  unsigned int v12; // r4
  unsigned int *v13; // r3
  _DWORD *v14; // r6
  unsigned int v15; // r7
  int v16; // r3
  _DWORD *v17; // r7
  int v18; // r4
  int v19; // r6
  const char *v20; // r2
  int v21; // r7
  unsigned int v22; // r0
  int v23; // r3
  unsigned int *v24; // r6
  int v25; // r3
  unsigned int v26; // r7
  unsigned int v27; // r3
  int v28; // r1
  int v29; // r2
  int v30; // r1
  int v31; // r5
  unsigned int v32; // r7
  int v33; // r1
  _DWORD *v34; // r5
  unsigned __int64 v35; // r0
  int v36; // r0
  int *v37; // r7
  int v38; // r0
  int v39; // r0
  _DWORD *v40; // r6
  _DWORD *v41; // r3
  unsigned int v42; // r6
  unsigned int v43; // r4
  int v44; // r0
  int v45; // r5
  int v46; // r7
  int v47; // r4
  int v48; // r0
  unsigned int v49; // r0
  unsigned int v50; // r2
  int v51; // r0
  int v52; // r0

  v2 = sub_36CD28(v0, STACK[0x230]);
  v3 = STACK[0x260] + 40 * *(_DWORD *)(v1 + 8);
  STACK[0x248] = v3;
  *(_WORD *)(v3 + 28) = 2562;
  if ( v2 == 6 )
    v4 = 0;
  else
    v4 = *((_DWORD *)&unk_454AE8 + v2 + 20);
  v5 = STACK[0x248];
  *(_DWORD *)(STACK[0x248] + 4) = v4;
  *(_DWORD *)(v5 + 24) = sub_34CF50(v4);
  *(_BYTE *)(v5 + 30) = 1;
  v6 = sub_359790(STACK[0x248], STACK[0x278]);
  sub_380F5A(v6);
  v7 = (int *)(STACK[0x24C] + 44);
  if ( *(_BYTE *)(STACK[0x244] + 62) == 0 )
  {
    v8 = sub_365388((int *)(STACK[0x24C] + 44), (_DWORD *)STACK[0x244], (int)"cannot VACUUM from within a transaction");
    sub_380F5A(v8);
  }
  if ( *(int *)(STACK[0x244] + 140) > 1 )
  {
    v9 = sub_365388(v7, (_DWORD *)STACK[0x244], (int)"cannot VACUUM - SQL statements in progress");
    sub_380F5A(v9);
  }
  v10 = *(_DWORD *)(STACK[0x244] + 80);
  v11 = *(_DWORD *)(STACK[0x244] + 84);
  STACK[0x250] = *(_DWORD *)(STACK[0x244] + 24);
  STACK[0x270] = v10;
  v12 = STACK[0x250];
  v13 = (unsigned int *)STACK[0x244];
  STACK[0x274] = v11;
  v14 = (_DWORD *)STACK[0x244];
  v13 += 41;
  v15 = *v13;
  v14[6] = v12 & 0xFFD5D7FF | 0x202800;
  *v13 = 0;
  v16 = v14[4];
  STACK[0x268] = v15;
  v17 = v14;
  v18 = *(_DWORD *)(v16 + 4);
  v19 = v14[5];
  STACK[0x258] = *(unsigned __int8 *)(**(_DWORD **)(v18 + 4) + 14);
  if ( *((_BYTE *)v17 + 63) == 2 )
    v20 = "ATTACH ':memory:' AS vacuum_db;";
  else
    v20 = "ATTACH '' AS vacuum_db;";
  v21 = sub_381978(STACK[0x244], v7, v20);
  v22 = STACK[0x244];
  STACK[0x230] = 0;
  v23 = *(_DWORD *)(v22 + 20);
  if ( v23 > v19 )
    STACK[0x230] = *(_DWORD *)(v22 + 16) + 16 * (v23 + 0xFFFFFFF);
  if ( v21 == 0 )
  {
    v24 = *(unsigned int **)(*(_DWORD *)(STACK[0x244] + 16) + 16 * (v23 + 0xFFFFFFF) + 4);
    sub_36C950((int)v24);
    sub_3574C2(v18);
    v25 = *(_DWORD *)(v18 + 4);
    v26 = *(_DWORD *)(v25 + 32);
    v27 = *(_DWORD *)(v25 + 36);
    STACK[0x238] = v26;
    STACK[0x284] = v27;
    sub_35655E(v18);
    if ( sub_381978(STACK[0x244], v7, "PRAGMA vacuum_db.synchronous=OFF") == 0
      && sub_381978(STACK[0x244], v7, "BEGIN;") == 0
      && sub_36CDC0(v18, 2) == 0 )
    {
      if ( *(_BYTE *)(**(_DWORD **)(v18 + 4) + 5) == 5 )
        *(_DWORD *)(STACK[0x244] + 72) = 0;
      v28 = *(_DWORD *)(*(_DWORD *)(v18 + 4) + 32);
      v29 = STACK[0x238] - STACK[0x284];
      STACK[0x238] = v29;
      if ( sub_357E18((int)v24, v28, v29, 0) == 0
        && (STACK[0x258] != 0 || sub_357E18((int)v24, *(_DWORD *)(STACK[0x244] + 72), STACK[0x238], STACK[0x258]) == 0)
        && *(_BYTE *)(STACK[0x244] + 64) == 0 )
      {
        v30 = *(char *)(STACK[0x244] + 66);
        if ( v30 < 0 )
          v30 = sub_13A89A(v18);
        sub_357890((int)v24, v30);
        if ( sub_3819D8(
               STACK[0x244],
               v7,
               "SELECT 'CREATE TABLE vacuum_db.' || substr(sql,14)   FROM sqlite_master WHERE type='table' AND name!='sql"
               "ite_sequence'   AND coalesce(rootpage,1)>0") == 0
          && sub_3819D8(
               STACK[0x244],
               v7,
               "SELECT 'CREATE INDEX vacuum_db.' || substr(sql,14)  FROM sqlite_master WHERE sql LIKE 'CREATE INDEX %' ") == 0
          && sub_3819D8(
               STACK[0x244],
               v7,
               "SELECT 'CREATE UNIQUE INDEX vacuum_db.' || substr(sql,21)   FROM sqlite_master WHERE sql LIKE 'CREATE UNIQUE INDEX %'") == 0
          && sub_3819D8(
               STACK[0x244],
               v7,
               "SELECT 'INSERT INTO vacuum_db.' || quote(name) || ' SELECT * FROM main.' || quote(name) || ';'FROM main.s"
               "qlite_master WHERE type = 'table' AND name!='sqlite_sequence'   AND coalesce(rootpage,1)>0") == 0
          && sub_3819D8(
               STACK[0x244],
               v7,
               "SELECT 'DELETE FROM vacuum_db.' || quote(name) || ';' FROM vacuum_db.sqlite_master WHERE name='sqlite_sequence' ") == 0
          && sub_3819D8(
               STACK[0x244],
               v7,
               "SELECT 'INSERT INTO vacuum_db.' || quote(name) || ' SELECT * FROM main.' || quote(name) || ';' FROM vacuu"
               "m_db.sqlite_master WHERE name=='sqlite_sequence';") == 0
          && sub_381978(
               STACK[0x244],
               v7,
               "INSERT INTO vacuum_db.sqlite_master   SELECT type, name, tbl_name, rootpage, sql    FROM main.sqlite_mast"
               "er   WHERE type='view' OR type='trigger'      OR (type='table' AND rootpage=0)") == 0 )
        {
          v31 = 2;
          STACK[0x338] = (unsigned int)&unk_44D41A;
          while ( 1 )
          {
            v32 = STACK[0x338] + v31;
            v33 = *(unsigned __int8 *)(v32 - 2);
            STACK[0x258] = v33;
            sub_357930(v18, v33, &STACK[0x350]);
            if ( sub_367E76((int)v24, STACK[0x258], *(unsigned __int8 *)(v32 - 1) + STACK[0x350]) != 0 )
              break;
            v31 += 2;
            if ( v31 == 12 )
            {
              sub_3574C2(v18);
              sub_3574C2((int)v24);
              v34 = *(_DWORD **)(**(_DWORD **)(v18 + 4) + 60);
              if ( *v34 == 0
                || (v35 = *(int *)(v24[1] + 32) * (unsigned __int64)*(unsigned int *)(v24[1] + 44),
                    STACK[0x378] = v35,
                    STACK[0x37C] = HIDWORD(v35),
                    v36 = sub_34CA7C((int)v34),
                    v37 = (int *)v36,
                    v36 == 12)
                || v36 == 0 )
              {
                j_memset(&STACK[0x378], 0, 0x30u);
                STACK[0x38C] = *v24;
                STACK[0x388] = 1;
                STACK[0x390] = (unsigned int)v24;
                STACK[0x37C] = v18;
                sqlite3_backup_step(&STACK[0x378], 0x7FFFFFFF);
                v37 = sqlite3_backup_finish((int *)&STACK[0x378]);
                if ( v37 != nullptr )
                {
                  v38 = **(_DWORD **)(STACK[0x37C] + 4);
                  if ( (*(_DWORD *)(v38 + 12) & 0xFF00FF) == 0 )
                    sub_356D1C(v38);
                }
                else
                {
                  *(_WORD *)(*(_DWORD *)(v18 + 4) + 22) &= ~2u;
                }
              }
              sub_35655E((int)v24);
              sub_35655E(v18);
              if ( v37 == nullptr && sub_36C950((int)v24) == 0 )
              {
                v39 = sub_13A89A((int)v24);
                sub_357890(v18, v39);
                sub_357E18(v18, *(_DWORD *)(v24[1] + 32), STACK[0x238], 1);
              }
              break;
            }
          }
        }
      }
    }
  }
  v40 = (_DWORD *)STACK[0x244];
  v40[6] = STACK[0x250];
  v41 = v40 + 41;
  v40[20] = STACK[0x270];
  v40[21] = STACK[0x274];
  v42 = STACK[0x268];
  *v41 = STACK[0x268];
  sub_357E18(v18, -1, -1, 1);
  v43 = STACK[0x230];
  *(_BYTE *)(STACK[0x244] + 62) = 1;
  if ( v43 != 0 )
  {
    sub_374D70(*(_DWORD *)(v43 + 4));
    *(_DWORD *)(v43 + 4) = 0;
    *(_DWORD *)(v43 + 12) = 0;
  }
  v44 = sub_3577F4((_DWORD *)STACK[0x244]);
  sub_380F5A(v44);
  v45 = *(_DWORD *)(*(_DWORD *)(STACK[0x244] + 16) + 16 * *(_DWORD *)(v42 + 4) + 4);
  v46 = 101;
  v47 = *(_DWORD *)(v45 + 4);
  sub_3574C2(v45);
  if ( *(_BYTE *)(v47 + 17) != 0 )
  {
    v48 = *(_DWORD *)(*(_DWORD *)(v47 + 12) + 56);
    STACK[0x230] = *(_DWORD *)(v47 + 44);
    STACK[0x238] = sub_34D8D8((unsigned int *)(v48 + 36));
    v49 = sub_34E2C4(v47, STACK[0x230], STACK[0x238]);
    v50 = STACK[0x230];
    STACK[0x250] = v49;
    if ( v50 >= v49 )
    {
      if ( STACK[0x238] != 0 )
      {
        v46 = sub_36AE54(*(_DWORD *)(v47 + 8), 0, 0);
        if ( v46 == 0 )
        {
          sub_356342(*(_DWORD *)(v47 + 8));
          v46 = sub_36B8F8(v47, STACK[0x250], STACK[0x230], 0);
          if ( v46 == 0 )
          {
            v46 = sub_367BA8(*(_DWORD *)(*(_DWORD *)(v47 + 12) + 68));
            sub_34D8F0((_BYTE *)(*(_DWORD *)(*(_DWORD *)(v47 + 12) + 56) + 28), *(_DWORD *)(v47 + 44));
          }
        }
      }
    }
    else
    {
      v46 = sub_35FA58(53975);
    }
  }
  v51 = sub_35655E(v45);
  if ( v46 != 101 )
    v51 = sub_380F5A(v51);
  STACK[0x264] = *(_DWORD *)(v42 + 8) - 1;
  v52 = sub_380F5A(v51);
  if ( *(_DWORD *)(v42 + 4) != 0 )
    *(_BYTE *)(STACK[0x24C] + 88) |= 0x20u;
  else
    v52 = sub_34E530(STACK[0x244]);
  return sub_380F5A(v52);
}


//======================================================================
// sub_3808C6
// address: 0x003808C6   size: 0xC (12 bytes)
//======================================================================
int sub_3808C6()
{
  int v0; // r4
  int v1; // r0

  v1 = sub_355DCE((int *)STACK[0x24C], (void **)(*(_DWORD *)(v0 + 8) + 8));
  return sub_380F5A(v1);
}


//======================================================================
// sub_380B24
// address: 0x00380B24   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_380B24(int a1)
{
  if ( sub_34E3D0(a1) )
    return sub_380FE2();
  else
    return sub_380F5A(0);
}


//======================================================================
// sub_380F2A
// address: 0x00380F2A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_380F2A(int a1)
{
  return sub_380F5A(a1);
}


//======================================================================
// sub_380F2E
// address: 0x00380F2E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_380F2E(int a1)
{
  return sub_380F5A(a1);
}


//======================================================================
// sub_380F32
// address: 0x00380F32   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_380F32(int a1)
{
  return sub_380F5A(a1);
}


//======================================================================
// sub_380F36
// address: 0x00380F36   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_380F36(int a1)
{
  unsigned int v1; // r5

  STACK[0x27C] = v1;
  return sub_380F5A(a1);
}


//======================================================================
// sub_380F3C
// address: 0x00380F3C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_380F3C(int a1)
{
  return sub_380F5A(a1);
}


//======================================================================
// sub_380F40
// address: 0x00380F40   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_380F40(int a1)
{
  return sub_380F5A(a1);
}


//======================================================================
// sub_380F44
// address: 0x00380F44   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_380F44(int a1)
{
  return sub_380F5A(a1);
}


//======================================================================
// sub_380F48
// address: 0x00380F48   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_380F48(int a1)
{
  return sub_380F5A(a1);
}


//======================================================================
// sub_380F4C
// address: 0x00380F4C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_380F4C(int a1)
{
  return sub_380F5A(a1);
}


//======================================================================
// sub_380F50
// address: 0x00380F50   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_380F50(int a1)
{
  return sub_380F5A(a1);
}


//======================================================================
// sub_380F5A
// address: 0x00380F5A   size: 0x10 (16 bytes)
//======================================================================
void sub_380F5A()
{
  int v0; // r7

  ++STACK[0x264];
  if ( v0 == 0 )
    sub_37C34C();
  JUMPOUT(0x380F6C);
}


//======================================================================
// sub_380F6A
// address: 0x00380F6A   size: 0x44 (68 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00380F6A  MOVS    R7, #9
//   00380F6C  LDR     R5, [SP,#arg_24C]
//   00380F6E  LDR     R1, =(aStatementAbort - 0x380F80); "statement aborts at %d: [%s] %s"
//   00380F70  MOVS    R0, R7
//   00380F72  LDR     R6, [R5,#0x2C]
//   00380F74  MOVS    R3, R5
//   00380F76  STR     R7, [R5,#0x50]
//   00380F78  ADDS    R3, #0xA8
//   00380F7A  LDR     R3, [R3]
//   00380F7C  ADD     R1, PC; "statement aborts at %d: [%s] %s"
//   00380F7E  LDR     R2, [SP,#arg_264]
//   00380F80  STR     R6, [SP,#arg_0]
//   00380F82  BL      sqlite3_log
//   00380F86  LDR     R0, [SP,#arg_24C]
//   00380F88  BL      sub_3751D8
//   00380F8C  LDR     R3, =0xC0A
//   00380F8E  CMP     R7, R3
//   00380F90  BNE     loc_380F9A
//   00380F92  LDR     R3, [SP,#arg_244]
//   00380F94  MOVS    R2, #1
//   00380F96  ADDS    R3, #0x40 ; '@'
//   00380F98  STRB    R2, [R3]
//   00380F9A  LDR     R4, [SP,#arg_290]
//   00380F9C  MOVS    R7, #1
//   00380F9E  CMP     R4, #0
//   00380FA0  BEQ     sub_380FB0
//   00380FA2  MOVS    R1, R4
//   00380FA4  SUBS    R1, #1
//   00380FA6  LDR     R0, [SP,#arg_244]
//   00380FA8  BL      sub_355608
//   00380FAC  B       sub_380FB0

//======================================================================
// sub_380FAE
// address: 0x00380FAE   size: 0x2 (2 bytes)
//======================================================================
int __fastcall sub_380FAE(int a1)
{
  return sub_380FB0(a1);
}


//======================================================================
// sub_380FB0
// address: 0x00380FB0   size: 0x32 (50 bytes)
//======================================================================
void __fastcall sub_380FB0(__int64 a1)
{
  unsigned int v1; // r6
  unsigned int v2; // r4
  unsigned int v3; // r5
  unsigned int v4; // r4

  v1 = STACK[0x244];
  v2 = STACK[0x28C];
  *(_DWORD *)(v1 + 32) = STACK[0x288];
  v3 = STACK[0x24C];
  *(_DWORD *)(v1 + 36) = v2;
  v4 = STACK[0x24C];
  *(_DWORD *)(v4 + 124) = *(_DWORD *)(v3 + 124) + STACK[0x280];
  LODWORD(a1) = v4;
  sub_3565A0(a1);
  JUMPOUT(0x3811D0);
}


//======================================================================
// sub_380FE2
// address: 0x00380FE2   size: 0x12 (18 bytes)
//======================================================================
void sub_380FE2()
{
  sub_365388((int *)(STACK[0x24C] + 44), (_DWORD *)STACK[0x244], (int)"string or blob too big");
  JUMPOUT(0x380F6C);
}


//======================================================================
// sub_380FF4
// address: 0x00380FF4   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_380FF4(int a1, unsigned int a2)
{
  STACK[0x280] = a2;
  STACK[0x290] = a2;
  STACK[0x264] = a2;
  return sub_380FFA(a1);
}


//======================================================================
// sub_380FFA
// address: 0x00380FFA   size: 0x1A (26 bytes)
//======================================================================
void sub_380FFA()
{
  unsigned int v0; // r0

  v0 = STACK[0x24C];
  *(_BYTE *)(STACK[0x244] + 64) = 1;
  sub_365388((int *)(v0 + 44), (_DWORD *)STACK[0x244], (int)"out of memory");
  JUMPOUT(0x380F6C);
}


//======================================================================
// sub_381014
// address: 0x00381014   size: 0x2 (2 bytes)
//======================================================================
int __fastcall sub_381014(int a1)
{
  return sub_381016(a1);
}


//======================================================================
// sub_381016
// address: 0x00381016   size: 0x2C (44 bytes)
//======================================================================
void sub_381016()
{
  int v0; // r7
  const char *v1; // r0

  if ( *(_BYTE *)(STACK[0x244] + 64) != 0 )
  {
    v0 = 7;
  }
  else if ( v0 == 3082 )
  {
    goto LABEL_6;
  }
  v1 = sub_353D40(v0);
  sub_365388((int *)(STACK[0x24C] + 44), (_DWORD *)STACK[0x244], (int)"%s", v1);
LABEL_6:
  JUMPOUT(0x380F6C);
}


//======================================================================
// sub_381042
// address: 0x00381042   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_381042(int a1, unsigned int a2)
{
  STACK[0x280] = a2;
  STACK[0x290] = a2;
  STACK[0x264] = a2;
  return sub_381048();
}


//======================================================================
// sub_381048
// address: 0x00381048   size: 0x1C (28 bytes)
//======================================================================
void sub_381048()
{
  unsigned int v0; // r7

  v0 = STACK[0x24C];
  *(_DWORD *)(v0 + 80) = 9;
  sub_365388((int *)(v0 + 44), (_DWORD *)STACK[0x244], (int)"%s", "interrupted");
  JUMPOUT(0x380F6C);
}


//======================================================================
// sub_381064
// address: 0x00381064   size: 0x14 (20 bytes)
//======================================================================
void sub_381064()
{
  const char *v0; // r6

  sub_365388((int *)(STACK[0x24C] + 44), (_DWORD *)STACK[0x244], (int)"no such savepoint: %s", v0);
  sub_380F5A();
}


//======================================================================
// sub_3810EC
// address: 0x003810EC   size: 0x20 (32 bytes)
//======================================================================
void __fastcall sub_3810EC(int a1, int a2, int a3, int a4)
{
  int v4; // r2

  v4 = *(_DWORD *)(STACK[0x244] + 148);
  if ( v4 <= 0 )
    sub_37DFF4(a1, a2, v4, a4);
  sub_365388(
    (int *)(STACK[0x24C] + 44),
    (_DWORD *)STACK[0x244],
    (int)"cannot commit transaction - SQL statements in progress");
  sub_380F5A();
}


//======================================================================
// sub_38110C
// address: 0x0038110C   size: 0x1C (28 bytes)
//======================================================================
int sub_38110C()
{
  int v0; // r4
  int v1; // r5
  int v2; // r6
  unsigned int v3; // r6
  int v4; // r0

  v3 = STACK[0x260] + 40 * *(_DWORD *)(v2 + 12);
  sub_355700((_DWORD *)v3);
  *(_DWORD *)(v3 + 16) = v0;
  *(_DWORD *)(v3 + 20) = v1;
  *(_WORD *)(v3 + 28) = 4;
  v4 = sub_37C634();
  return sub_381128(v4);
}


//======================================================================
// sub_381128
// address: 0x00381128   size: 0xA (10 bytes)
//======================================================================
void sub_381128()
{
  int v0; // r6

  STACK[0x264] = *(_DWORD *)(v0 + 8) - 1;
  sub_380F5A();
}


//======================================================================
// sub_381132
// address: 0x00381132   size: 0x2 (2 bytes)
//======================================================================
int sub_381132()
{
  return sub_381134();
}


//======================================================================
// sub_381134
// address: 0x00381134   size: 0x6 (6 bytes)
//======================================================================
int sub_381134()
{
  unsigned int v0; // r5
  int v1; // r0

  STACK[0x230] = v0;
  v1 = sub_3802EE();
  return sub_38113A(v1);
}


//======================================================================
// sub_38113A
// address: 0x0038113A   size: 0x8A (138 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0038113A  LDR     R2, [SP,#arg_344]
//   0038113C  CMP     R2, #0
//   0038113E  BEQ     loc_381164
//   00381140  MOVS    R3, #0
//   00381142  STR     R3, [SP,#arg_350]
//   00381144  LDR     R3, [SP,#arg_348]; int
//   00381146  LDR     R4, [SP,#arg_34C]
//   00381148  STR     R3, [SP,#arg_0]; int
//   0038114A  STR     R4, [SP,#arg_4]; int
//   0038114C  ADD     R4, SP, #arg_378
//   0038114E  LDR     R0, [SP,#arg_244]; int
//   00381150  MOVS    R2, R4; void *
//   00381152  LDR     R1, [SP,#arg_344]; int
//   00381154  BL      sub_351B72
//   00381158  LDR     R2, [SP,#arg_268]
//   0038115A  LDR     R3, [SP,#arg_26C]
//   0038115C  MOVS    R0, R4
//   0038115E  BL      sub_352308
//   00381162  B       loc_381172
//   00381164  LDR     R0, [SP,#arg_244]
//   00381166  ADD     R1, SP, #arg_344
//   00381168  BL      sub_3579E4
//   0038116C  CMP     R0, #0
//   0038116E  BNE     loc_3811B8
//   00381170  B       loc_381140
//   00381172  LDR     R3, [SP,#arg_350]
//   00381174  ORRS    R3, R7
//   00381176  BNE     loc_3811A8
//   00381178  LDR     R3, [R5,#0x28]
//   0038117A  LDR     R7, [R5,#0x24]
//   0038117C  LDR     R4, [R3,#4]
//   0038117E  MOVS    R3, #0x30 ; '0'
//   00381180  MULS    R4, R3
//   00381182  ADDS    R4, R7, R4
//   00381184  LDR     R2, [R4,#0x14]
//   00381186  ADD     R7, SP, #arg_378
//   00381188  MOVS    R0, R7
//   0038118A  ASRS    R3, R2, #0x1F
//   0038118C  BL      sub_352308
//   00381190  MOVS    R0, R7; int
//   00381192  LDR     R1, [R4,#0x20]; int
//   00381194  LDR     R2, [R4,#0x14]; size_t
//   00381196  BL      sub_350808
//   0038119A  LDR     R0, [SP,#arg_244]
//   0038119C  LDR     R1, [SP,#arg_238]
//   0038119E  ADD     R2, SP, #arg_350
//   003811A0  BL      sub_35DFDC
//   003811A4  MOVS    R7, R0
//   003811A6  B       loc_381172
//   003811A8  LDR     R0, [SP,#arg_244]
//   003811AA  ADD     R1, SP, #arg_378
//   003811AC  ADD     R2, SP, #arg_348
//   003811AE  BL      sub_355648
//   003811B2  CMP     R7, #0
//   003811B4  BEQ     loc_3811B8
//   003811B6  MOVS    R0, R7
//   003811B8  LDR     R4, [SP,#arg_250]
//   003811BA  MOVS    R7, R0
//   003811BC  ADDS    R4, #1
//   003811BE  STR     R4, [SP,#arg_250]
//   003811C0  BL      sub_37EE2C

//======================================================================
// sub_3811C4
// address: 0x003811C4   size: 0x6 (6 bytes)
//======================================================================
int sub_3811C4()
{
  int v0; // r0

  v0 = sub_3808C6();
  return sub_3811CA(v0);
}


//======================================================================
// sub_3811CA
// address: 0x003811CA   size: 0xC (12 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3811CA(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  sub_3808C6();
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_381978
// address: 0x00381978   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_381978(_DWORD *a1, int *a2, char *a3, int a4)
{
  int result; // r0
  const char *v7; // r0
  int v8; // r5
  const char *v9; // r0
  int v10; // [sp+Ch] [bp-4h] BYREF

  v10 = a4;
  result = 7;
  if ( a3 != nullptr )
  {
    if ( sqlite3_prepare((int)a1, a3, -1, &v10, nullptr) != 0 )
    {
      v7 = sqlite3_errmsg((int)a1);
      sub_365388(a2, a1, (int)v7);
      return sqlite3_errcode((int)a1);
    }
    else
    {
      sqlite3_step(v10);
      v8 = sub_37594C(v10);
      if ( v8 != 0 )
      {
        v9 = sqlite3_errmsg((int)a1);
        sub_365388(a2, a1, (int)v9);
      }
      return v8;
    }
  }
  return result;
}


//======================================================================
// sub_3819D8
// address: 0x003819D8   size: 0x66 (102 bytes)
//======================================================================
int sub_3819D8(_DWORD *a1, int *a2, char *a3, int *a4, ...)
{
  int v6; // r5
  char *v7; // r0
  int v8; // r3
  const char *v9; // r0
  int *v11; // [sp+Ch] [bp-4h] BYREF

  v11 = a4;
  v6 = sqlite3_prepare((int)a1, a3, -1, (int *)&v11, nullptr);
  if ( v6 == 0 )
  {
    while ( sqlite3_step((int)v11) == 100 )
    {
      v7 = (char *)sqlite3_column_text(v11, 0);
      v6 = sub_381978(a1, a2, v7, v8);
      if ( v6 != 0 )
      {
        if ( sub_37594C((int)v11) == 0 )
          return v6;
        goto LABEL_7;
      }
    }
    v6 = sub_37594C((int)v11);
    if ( v6 == 0 )
      return v6;
LABEL_7:
    v9 = sqlite3_errmsg((int)a1);
    sub_365388(a2, a1, (int)v9);
  }
  return v6;
}


//======================================================================
// sub_381A40
// address: 0x00381A40   size: 0xE2 (226 bytes)
//======================================================================
int __fastcall sub_381A40(int a1, __int64 a2, int *a3)
{
  int v4; // r7
  int v6; // r6
  int v7; // r5
  int v8; // r5
  unsigned int v9; // r3
  const char *v10; // r2
  unsigned int v11; // r0
  int *v12; // r3
  int v13; // r5
  unsigned int *v14; // r0
  int v15; // r0
  int v16; // r4
  const char *v17; // r0

  v4 = *(_DWORD *)(a1 + 20);
  v6 = 0;
  *(_QWORD *)(*(_DWORD *)(v4 + 60) + 16) = a2;
  v7 = sqlite3_step(*(_DWORD *)(a1 + 20));
  if ( v7 == 100 )
  {
    v8 = **(_DWORD **)(v4 + 56);
    v9 = *(_DWORD *)(4 * (*(_DWORD *)(a1 + 12) + 22) + v8);
    if ( v9 > 0xB )
    {
      v11 = *(_DWORD *)(4 * (*(_DWORD *)(a1 + 12) + 22) + v8);
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(4 * (*(_DWORD *)(a1 + 12) + *(__int16 *)(v8 + 20) + 22) + v8);
      *(_DWORD *)(a1 + 4) = sub_34E514(v11);
      v12 = *(int **)v8;
      *(_DWORD *)(a1 + 16) = *(_DWORD *)v8;
      sub_3574C2(*v12);
      v13 = *(_DWORD *)(a1 + 16);
      sqlite3_free(*(_DWORD *)(v13 + 20));
      *(_DWORD *)(v13 + 20) = 0;
      *(_BYTE *)(v13 + 84) = 1;
      v7 = 0;
      sub_35655E(**(_DWORD **)(a1 + 16));
      goto LABEL_14;
    }
    if ( v9 != 0 )
    {
      if ( v9 == 7 )
        v10 = "real";
      else
        v10 = "integer";
    }
    else
    {
      v10 = "null";
    }
    v7 = 1;
    v6 = sub_36541C(*(_DWORD *)(a1 + 24), "cannot open value of type %s", v10);
    sqlite3_finalize(*(unsigned int **)(a1 + 20));
    *(_DWORD *)(a1 + 20) = 0;
  }
  v14 = *(unsigned int **)(a1 + 20);
  if ( v14 != nullptr )
  {
    v15 = sqlite3_finalize(v14);
    *(_DWORD *)(a1 + 20) = 0;
    v16 = *(_DWORD *)(a1 + 24);
    v7 = v15;
    if ( v15 != 0 )
    {
      v17 = sqlite3_errmsg(v16);
      v6 = sub_36541C(v16, "%s", v17);
    }
    else
    {
      v7 = 1;
      v6 = sub_36541C(v16, "no such rowid: %lld", a2);
    }
  }
LABEL_14:
  *a3 = v6;
  return v7;
}


//======================================================================
// sub_381BB4
// address: 0x00381BB4   size: 0x130 (304 bytes)
//======================================================================
int __fastcall sub_381BB4(int a1, __int64 a2, int a3, int **a4)
{
  int *v6; // r0
  int *v7; // r4
  int v9; // r6
  int v10; // r6
  int *v11; // r0
  void *v12; // r0
  int v13; // r0
  unsigned int v14; // r3
  int v15; // r5
  void *v16; // [sp+4h] [bp-10h]

  v6 = (int *)sub_34FDD4(a1, a2);
  v7 = v6;
  if ( v6 == nullptr )
  {
    sqlite3_bind_int64(*(int **)(a1 + 576), 1, a2, SHIDWORD(a2));
    if ( sqlite3_step(*(_DWORD *)(a1 + 576)) == 100
      && (v16 = (void *)sqlite3_column_blob(*(int **)(a1 + 576), 0),
          (v10 = *(_DWORD *)(a1 + 16)) == sqlite3_column_bytes(*(int **)(a1 + 576), 0)) )
    {
      v11 = (int *)sqlite3_malloc(*(_DWORD *)(a1 + 16) + 32);
      v7 = v11;
      if ( v11 != nullptr )
      {
        v9 = 0;
        *v11 = a3;
        v11[4] = 1;
        v12 = v11 + 8;
        v7[6] = (int)v12;
        *((_QWORD *)v7 + 1) = a2;
        v7[5] = 0;
        v7[7] = 0;
        j_memcpy(v12, v16, *(_DWORD *)(a1 + 16));
        sub_34FD6A(a3);
      }
      else
      {
        v9 = 7;
      }
    }
    else
    {
      v9 = 0;
    }
    v13 = sqlite3_reset(*(_DWORD *)(a1 + 576));
    if ( v13 != 0 )
    {
      v9 = v13;
      if ( v7 == nullptr )
        goto LABEL_18;
    }
    else if ( v7 == nullptr )
    {
      if ( v9 != 0 )
        goto LABEL_18;
      v9 = 267;
      goto LABEL_22;
    }
    if ( a2 != 1
      || (v14 = (*(unsigned __int8 *)v7[6] << 8) + *(unsigned __int8 *)(v7[6] + 1),
          *(_DWORD *)(a1 + 28) = v14,
          v14 <= 0x28) )
    {
      if ( v9 != 0 )
        goto LABEL_18;
      if ( (*(unsigned __int8 *)(v7[6] + 2) << 8) + *(unsigned __int8 *)(v7[6] + 3) <= (*(_DWORD *)(a1 + 16) - 4)
                                                                                     / *(_DWORD *)(a1 + 24) )
      {
        v15 = a1 + 4 * sub_34FD78(*((_QWORD *)v7 + 1));
        v7[7] = *(_DWORD *)(v15 + 40);
        *(_DWORD *)(v15 + 40) = v7;
LABEL_22:
        *a4 = v7;
        return v9;
      }
    }
    v9 = 267;
LABEL_18:
    sqlite3_free(v7);
    *a4 = nullptr;
    return v9;
  }
  if ( a3 != 0 && *v6 == 0 )
  {
    sub_34FD6A(a3);
    *v7 = a3;
  }
  ++v7[4];
  *a4 = v7;
  return 0;
}


//======================================================================
// sub_381CE4
// address: 0x00381CE4   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_381CE4(int a1, int a2, int a3, int a4, int **a5)
{
  __int64 v6; // r0
  int v7; // r6

  *a5 = nullptr;
  sqlite3_bind_int64(*(int **)(a1 + 588), 1, a3, a4);
  if ( sqlite3_step(*(_DWORD *)(a1 + 588)) != 100 )
    return sqlite3_reset(*(_DWORD *)(a1 + 588));
  v6 = sqlite3_column_int64((int *)*(_DWORD *)(a1 + 588), 0);
  v7 = sub_381BB4(a1, v6, 0, a5);
  sqlite3_reset(*(_DWORD *)(a1 + 588));
  return v7;
}


//======================================================================
// sub_381D30
// address: 0x00381D30   size: 0x72 (114 bytes)
//======================================================================
int __fastcall sub_381D30(int *a1, int a2)
{
  int *v2; // r6
  int v5; // r0
  int v6; // r6
  __int64 insert_rowid; // r0
  int *v8; // r5

  v2 = (int *)a1[145];
  if ( *(_QWORD *)(a2 + 8) != 0 )
    sqlite3_bind_int64(v2, 1, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12));
  else
    sqlite3_bind_null(v2, 1);
  sqlite3_bind_blob(v2, 2, *(_BYTE **)(a2 + 24), a1[4], nullptr);
  sqlite3_step((int)v2);
  *(_DWORD *)(a2 + 20) = 0;
  v5 = sqlite3_reset((int)v2);
  v6 = v5;
  if ( *(_QWORD *)(a2 + 8) == 0 && v5 == 0 )
  {
    insert_rowid = sqlite3_last_insert_rowid(a1[3]);
    *(_QWORD *)(a2 + 8) = insert_rowid;
    v8 = &a1[sub_34FD78(insert_rowid)];
    *(_DWORD *)(a2 + 28) = v8[10];
    v8[10] = a2;
  }
  return v6;
}


//======================================================================
// sub_381DA2
// address: 0x00381DA2   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_381DA2(int *a1, _DWORD *a2)
{
  int v4; // r5
  int v5; // r3

  if ( a2 == nullptr )
    return 0;
  v5 = a2[4] - 1;
  a2[4] = v5;
  if ( v5 != 0 )
    return 0;
  if ( a2[2] == 1 && a2[3] == 0 )
    a1[7] = -1;
  if ( *a2 == 0 || (v4 = sub_381DA2(a1)) == 0 )
  {
    v4 = a2[5];
    if ( v4 != 0 )
      v4 = sub_381D30(a1, (int)a2);
  }
  sub_34FE00((int)a1, (int)a2);
  sqlite3_free(a2);
  return v4;
}


//======================================================================
// sub_381E00
// address: 0x00381E00   size: 0x132 (306 bytes)
//======================================================================
int __fastcall sub_381E00(int *a1, int *a2, int a3, _DWORD *a4)
{
  int v5; // r7
  double v6; // r0
  double v8; // [sp+8h] [bp-A4h]
  double v9; // [sp+10h] [bp-9Ch]
  double v10; // [sp+10h] [bp-9Ch]
  int v11; // [sp+1Ch] [bp-90h]
  double v12; // [sp+20h] [bp-8Ch]
  __int64 v13; // [sp+28h] [bp-84h]
  int v14; // [sp+30h] [bp-7Ch]
  int *v18; // [sp+44h] [bp-68h] BYREF
  __int64 v19[6]; // [sp+48h] [bp-64h] BYREF
  int *v20[13]; // [sp+78h] [bp-34h] BYREF

  v11 = 0;
  v5 = sub_381BB4((int)a1, 1, 0, &v18);
  while ( v5 == 0 && v11 < a1[7] - a3 )
  {
    v12 = 0.0;
    v8 = 0.0;
    v13 = 0;
    v14 = (*(unsigned __int8 *)(v18[6] + 2) << 8) + *(unsigned __int8 *)(v18[6] + 3);
    while ( v5 < v14 )
    {
      sub_3571F0((int)a1, (int)v18, v5, v19);
      j_memcpy(v20, v19, 0x30u);
      v9 = COERCE_DOUBLE(sub_34FF28((int)a1, (int)v20));
      sub_353DFC(__SPAIR64__(v20, (unsigned int)a1), a2);
      v10 = COERCE_DOUBLE(sub_34FF28((int)a1, (int)v20)) - v9;
      v6 = COERCE_DOUBLE(sub_34FF28((int)a1, (int)v19));
      if ( v5 == 0 || v10 < v8 || v10 == v8 && v6 < v12 )
      {
        v13 = v19[0];
        v12 = v6;
        v8 = v10;
      }
      ++v5;
    }
    sqlite3_free(0);
    v5 = sub_381BB4((int)a1, v13, (int)v18, v20);
    sub_381DA2(a1, v18);
    v18 = v20[0];
    ++v11;
  }
  *a4 = v18;
  return v5;
}


//======================================================================
// sub_381F40
// address: 0x00381F40   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_381F40(int *a1, __int64 a2, int a3, int a4)
{
  int *v7; // r0
  int *v8; // r7

  if ( a4 == 0 )
    return sub_382650((int)a1, (int)sub_382650, a2, SHIDWORD(a2), *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12));
  if ( a4 > 0 )
  {
    v7 = (int *)sub_34FDD4((int)a1, a2);
    v8 = v7;
    if ( v7 != nullptr )
    {
      sub_381DA2(a1, (_DWORD *)*v7);
      sub_34FD6A(a3);
      *v8 = a3;
    }
  }
  return sub_38267A((int)a1, (int)sub_38267A, a2, SHIDWORD(a2), *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12));
}


//======================================================================
// sub_381FA8
// address: 0x00381FA8   size: 0x26E (622 bytes)
//======================================================================
int __fastcall sub_381FA8(int *a1, _DWORD *a2, int a3, int *a4)
{
  int v5; // r2
  int v6; // r5
  int v7; // r4
  int v8; // r2
  double v9; // r0
  _BOOL4 v10; // r0
  int v11; // r0
  int v12; // r4
  int v13; // r7
  double v14; // r0
  _BOOL4 v15; // r0
  double v16; // r4
  _BOOL4 v17; // r7
  int v18; // r4
  __int64 v19; // r0
  int v20; // r0
  int v21; // r4
  int v22; // r0
  int v24; // [sp+Ch] [bp-60h]
  int i; // [sp+10h] [bp-5Ch]
  double v27; // [sp+18h] [bp-54h]
  int v29; // [sp+24h] [bp-48h]
  int v30; // [sp+28h] [bp-44h]
  int v32; // [sp+30h] [bp-3Ch] BYREF
  _BOOL4 v33; // [sp+34h] [bp-38h] BYREF
  __int64 v34[6]; // [sp+38h] [bp-34h] BYREF

  v29 = a2[1];
  v5 = a2[2];
  v30 = v5;
  if ( a3 == 0 )
  {
    v32 = 0;
    sub_3571F0((int)a1, v29, v5, v34);
    v6 = 0;
    while ( v6 < a2[4] )
    {
      v7 = a2[5] + 24 * v6;
      v8 = 4 * (*(_DWORD *)v7 + 2);
      if ( a1[153] != 0 )
        v9 = (double)*(int *)((char *)v34 + v8);
      else
        v9 = *(float *)((char *)v34 + v8);
      switch ( *(_DWORD *)(v7 + 4) )
      {
        case 'A':
          v10 = v9 == *(double *)(v7 + 8);
          goto LABEL_10;
        case 'B':
          v10 = v9 <= *(double *)(v7 + 8);
          goto LABEL_10;
        case 'C':
          v10 = v9 < *(double *)(v7 + 8);
          goto LABEL_10;
        case 'D':
          v10 = v9 >= *(double *)(v7 + 8);
          goto LABEL_10;
        case 'E':
          v10 = v9 > *(double *)(v7 + 8);
LABEL_10:
          v33 = v10;
          goto LABEL_15;
        default:
          v11 = sub_34FED2((int)a1, a2[5] + 24 * v6, (int)v34, (int)&v33);
          if ( v11 != 0 )
          {
            v24 = v11;
            goto LABEL_36;
          }
LABEL_15:
          if ( !v33 )
          {
            v32 = 1;
            v24 = 0;
            goto LABEL_37;
          }
          ++v6;
          break;
      }
    }
    v24 = 0;
    goto LABEL_37;
  }
  v33 = false;
  sub_3571F0((int)a1, v29, v5, v34);
  v24 = 0;
  for ( i = 0; !v33 && i < a2[4]; ++i )
  {
    v12 = a2[5] + 24 * i;
    v13 = *(int *)v12 >> 1;
    if ( a1[153] != 0 )
    {
      v27 = (double)SLODWORD(v34[v13 + 1]);
      v14 = (double)SHIDWORD(v34[v13 + 1]);
    }
    else
    {
      v27 = *(float *)&v34[v13 + 1];
      v14 = *((float *)&v34[v13 + 1] + 1);
    }
    switch ( *(_DWORD *)(v12 + 4) )
    {
      case 'A':
        v16 = *(double *)(v12 + 8);
        v17 = true;
        if ( v16 <= v14 )
          v17 = v16 < v27;
        v33 = v17;
        break;
      case 'B':
      case 'C':
        v15 = *(double *)(v12 + 8) < v27;
        goto LABEL_29;
      case 'D':
      case 'E':
        v15 = *(double *)(v12 + 8) > v14;
LABEL_29:
        v33 = v15;
        break;
      default:
        v24 = sub_34FED2((int)a1, v12, (int)v34, (int)&v33);
        v33 = !v33;
        break;
    }
  }
  v32 = v33;
LABEL_36:
  if ( v24 == 0 )
  {
LABEL_37:
    if ( v32 == 0 && a3 != 0 )
    {
      v18 = a2[1];
      v19 = sub_34FD18((unsigned __int8 *)(*(_DWORD *)(v18 + 24) + a2[2] * a1[6] + 4));
      v20 = sub_381BB4((int)a1, v19, v18, (int **)v34);
      v21 = v20;
      if ( v20 != 0 )
      {
        v24 = v20;
      }
      else
      {
        sub_381DA2(a1, (_DWORD *)a2[1]);
        a2[1] = v34[0];
        v32 = 1;
        while ( v32 != 0 )
        {
          if ( v21 >= (*(unsigned __int8 *)(*(_DWORD *)(LODWORD(v34[0]) + 24) + 2) << 8)
                    + *(unsigned __int8 *)(*(_DWORD *)(LODWORD(v34[0]) + 24) + 3) )
          {
            sub_34FD6A(v29);
            sub_381DA2(a1, (_DWORD *)v34[0]);
            a2[1] = v29;
            a2[2] = v30;
            v24 = 0;
            break;
          }
          a2[2] = v21;
          v22 = sub_381FA8(a1, a2, a3 - 1, &v32);
          if ( v22 != 0 )
          {
            v24 = v22;
            break;
          }
          ++v21;
        }
      }
    }
  }
  *a4 = v32;
  return v24;
}


//======================================================================
// sub_382216
// address: 0x00382216   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_382216(int a1)
{
  int *v2; // r6
  int i; // r7
  int result; // r0
  unsigned int *v5; // r5
  int v6; // [sp+4h] [bp-10h]
  int v7; // [sp+Ch] [bp-8h] BYREF

  v2 = *(int **)a1;
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    sub_381DA2(*(int **)a1, *(_DWORD **)(a1 + 4));
    *(_DWORD *)(a1 + 4) = 0;
    return 0;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v5 = *(unsigned int **)(a1 + 4);
      if ( v5 == nullptr )
        break;
      v6 = (*(unsigned __int8 *)(v5[6] + 2) << 8) + *(unsigned __int8 *)(v5[6] + 3);
      while ( ++*(_DWORD *)(a1 + 8) < v6 )
      {
        result = sub_381FA8(v2, (_DWORD *)a1, i, &v7);
        if ( result != 0 || v7 == 0 )
          return result;
      }
      *(_DWORD *)(a1 + 4) = *v5;
      result = sub_3563A0((int)v2, v5, (int *)(a1 + 8));
      if ( result != 0 )
        return result;
      sub_34FD6A(*(_DWORD *)(a1 + 4));
      sub_381DA2(v2, v5);
    }
    return 0;
  }
}


//======================================================================
// sub_382298
// address: 0x00382298   size: 0x1CE (462 bytes)
//======================================================================
int __fastcall sub_382298(_DWORD *a1, int a2, unsigned __int8 *a3, int a4, int *a5)
{
  int *v5; // r5
  __int64 v9; // r0
  int v10; // r0
  int *v11; // r3
  int v12; // r6
  void *v13; // r0
  int v14; // r3
  int v15; // r6
  int v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r4
  const void *v19; // r0
  int v20; // r3
  int v21; // r2
  int v22; // r3
  double v23; // r0
  int v24; // r3
  int v25; // r4
  int v26; // r3
  int v27; // r4
  int v28; // r0
  __int64 v31; // [sp+10h] [bp-2Ch]
  size_t v32; // [sp+18h] [bp-24h]
  int *v33; // [sp+1Ch] [bp-20h]
  int v34; // [sp+20h] [bp-1Ch]
  int v35; // [sp+28h] [bp-14h]
  unsigned __int8 *v36; // [sp+2Ch] [bp-10h]
  int *v37; // [sp+30h] [bp-Ch] BYREF
  int *v38[2]; // [sp+34h] [bp-8h] BYREF

  v5 = (int *)*a1;
  ++*(_DWORD *)(*a1 + 552);
  v37 = nullptr;
  sub_352200((int)a1);
  a1[3] = a2;
  if ( a2 == 1 )
  {
    LODWORD(v9) = *a5;
    v31 = sqlite3_value_int64(v9, (int)a5);
    v10 = sub_381CE4((int)v5, SHIDWORD(v31), v31, SHIDWORD(v31), v38);
    v11 = v38[0];
    v12 = v10;
    a1[1] = v38[0];
    if ( v11 != nullptr )
      v12 = sub_35635A((int)v5, v11[6], v31, HIDWORD(v31), a1 + 2);
    goto LABEL_29;
  }
  if ( a4 <= 0 )
  {
LABEL_18:
    a1[1] = 0;
    v12 = sub_381BB4((int)v5, 1, 0, &v37);
    if ( v12 == 0 )
    {
      v38[0] = &dword_0 + 1;
      v24 = v37[6];
      v25 = *(unsigned __int8 *)(v24 + 2);
      v26 = *(unsigned __int8 *)(v24 + 3);
      a1[1] = v37;
      v27 = (v25 << 8) + v26;
      a1[2] = 0;
      while ( a1[2] < v27 )
      {
        v28 = sub_381FA8(v5, a1, v5[7], (int *)v38);
        v12 = v28;
        if ( v38[0] == nullptr )
        {
          if ( v28 != 0 )
            goto LABEL_29;
          break;
        }
        ++a1[2];
        if ( v28 != 0 )
          goto LABEL_29;
      }
      v12 = 0;
      if ( v38[0] != nullptr )
      {
        sub_381DA2(v5, v37);
        a1[1] = 0;
      }
    }
    goto LABEL_29;
  }
  v13 = (void *)sqlite3_malloc(24 * a4);
  a1[4] = a4;
  a1[5] = v13;
  if ( v13 == nullptr )
  {
LABEL_28:
    v12 = 7;
    goto LABEL_29;
  }
  j_memset(v13, 0, 24 * a4);
  v33 = a5;
  v36 = &a3[2 * a4];
  v35 = -12 * (_DWORD)a3;
  while ( 1 )
  {
    v14 = *a3;
    v15 = a1[5] + 12 * (_DWORD)a3 + v35;
    *(_DWORD *)(v15 + 4) = v14;
    *(_DWORD *)v15 = a3[1] - 97;
    if ( v14 != 70 )
    {
      HIDWORD(v23) = *v33;
      LODWORD(v23) = *v33;
      *(_QWORD *)(v15 + 8) = sqlite3_value_double(v23);
      goto LABEL_17;
    }
    v34 = *v33;
    if ( sqlite3_value_type(*v33) != 4 )
      goto LABEL_27;
    v16 = sqlite3_value_bytes(v34);
    v32 = v16;
    if ( v16 <= 23 || (v16 & 7) != 0 )
      goto LABEL_27;
    v17 = (_DWORD *)sqlite3_malloc(v16 + 20);
    v18 = v17;
    if ( v17 == nullptr )
      goto LABEL_28;
    j_memset(v17, 0, 0x14u);
    v19 = (const void *)sqlite3_value_blob(v34);
    j_memcpy(v18 + 5, v19, v32);
    if ( v18[5] != -1995291221 )
      break;
    v20 = v18[8];
    if ( v32 != 8 * (v20 + 2) )
      break;
    v18[1] = v20;
    v21 = v18[7];
    v18[2] = v18 + 9;
    v22 = v18[6];
    *v18 = v21;
    *(_DWORD *)(v15 + 20) = v18;
    *(_DWORD *)(v15 + 16) = v22;
LABEL_17:
    a3 += 2;
    ++v33;
    if ( a3 == v36 )
      goto LABEL_18;
  }
  sqlite3_free(v18);
LABEL_27:
  v12 = 1;
LABEL_29:
  sub_3759F0((int)v5);
  return v12;
}


//======================================================================
// sub_38246C
// address: 0x0038246C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_38246C(int a1)
{
  int *v1; // r5
  int v3; // r5

  v1 = *(int **)a1;
  sub_352200(a1);
  v3 = sub_381DA2(v1, *(_DWORD **)(a1 + 4));
  sqlite3_free(a1);
  return v3;
}


//======================================================================
// sub_38248A
// address: 0x0038248A   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall sub_38248A(int a1, unsigned int *a2, int a3)
{
  _DWORD *v5; // r7
  int v6; // r6
  int v7; // r3
  int result; // r0
  int v10; // [sp+Ch] [bp-8h] BYREF

  v5 = nullptr;
  v6 = sub_3563A0(a1, a2, &v10);
  if ( v6 == 0 )
  {
    v5 = (_DWORD *)*a2;
    *a2 = 0;
    v6 = sub_382532(a1, v5, v10, a3 + 1);
  }
  v7 = sub_381DA2((int *)a1, v5);
  result = v6;
  if ( v6 == 0 )
  {
    if ( v7 != 0 )
    {
      return v7;
    }
    else
    {
      sqlite3_bind_int64(*(int **)(a1 + 584), 1, a2[2], a2[3]);
      sqlite3_step(*(_DWORD *)(a1 + 584));
      result = sqlite3_reset(*(_DWORD *)(a1 + 584));
      if ( result == 0 )
      {
        sqlite3_bind_int64(*(int **)(a1 + 608), 1, a2[2], a2[3]);
        sqlite3_step(*(_DWORD *)(a1 + 608));
        result = sqlite3_reset(*(_DWORD *)(a1 + 608));
        if ( result == 0 )
        {
          sub_34FE00(a1, (int)a2);
          *((_QWORD *)a2 + 1) = a3;
          a2[7] = *(_DWORD *)(a1 + 568);
          ++a2[4];
          *(_DWORD *)(a1 + 568) = a2;
          return 0;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_382532
// address: 0x00382532   size: 0x11E (286 bytes)
//======================================================================
int __fastcall sub_382532(int a1, unsigned int *a2, int a3, int a4)
{
  int *v6; // r7
  int v7; // r2
  int v8; // r3
  int v9; // r5
  __int64 v10; // r0
  unsigned int *i; // r5
  int v12; // r0
  int v13; // r3
  unsigned int v14; // r3
  __int16 v15; // r2

  v6 = (int *)a2;
  while ( 1 )
  {
    v7 = v6[2];
    v8 = v6[3];
    if ( v7 == 1 && v8 == 0 )
      break;
    if ( *v6 != 0 )
      break;
    sqlite3_bind_int64(*(int **)(a1 + 600), 1, v7, v8);
    if ( sqlite3_step(*(_DWORD *)(a1 + 600)) == 100 )
    {
      v10 = sqlite3_column_int64((int *)*(_DWORD *)(a1 + 600), 0);
      for ( i = a2; i != nullptr; i = (unsigned int *)*i )
      {
        if ( *((_QWORD *)i + 1) == v10 )
          goto LABEL_6;
      }
      v9 = sub_381BB4(a1, v10, 0, (int **)v6);
    }
    else
    {
LABEL_6:
      v9 = 0;
    }
    v12 = sqlite3_reset(*(_DWORD *)(a1 + 600));
    v6 = (int *)*v6;
    if ( v12 != 0 )
    {
      v9 = v12;
    }
    else if ( v9 == 0 && v6 == nullptr )
    {
      v9 = 267;
    }
    if ( v9 != 0 )
      return v9;
  }
  v13 = *(_DWORD *)(a1 + 24);
  j_memmove(
    (void *)(a2[6] + a3 * v13 + 4),
    (const void *)(a2[6] + a3 * v13 + 4 + v13),
    ((*(unsigned __int8 *)(a2[6] + 2) << 8) + *(unsigned __int8 *)(a2[6] + 3) - a3 - 1) * v13);
  v14 = a2[6];
  v15 = (*(unsigned __int8 *)(v14 + 2) << 8) + *(unsigned __int8 *)(v14 + 3) - 1;
  *(_BYTE *)(v14 + 2) = HIBYTE(v15);
  *(_BYTE *)(v14 + 3) = v15;
  v9 = *a2;
  a2[5] = 1;
  if ( v9 != 0 )
  {
    if ( (*(unsigned __int8 *)(a2[6] + 2) << 8) + *(unsigned __int8 *)(a2[6] + 3) >= (*(_DWORD *)(a1 + 16) - 4)
                                                                                   / *(_DWORD *)(a1 + 24)
                                                                                   / 3 )
      return sub_35730A(a1, a2);
    else
      return sub_38248A(a1, a2, a4);
  }
  return v9;
}


//======================================================================
// sub_382650
// address: 0x00382650   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_382650(int a1, int a2, int a3, int a4, int a5, int a6)
{
  sqlite3_bind_int64(*(int **)(a1 + 592), 1, a3, a4);
  sqlite3_bind_int64(*(int **)(a1 + 592), 2, a5, a6);
  sqlite3_step(*(_DWORD *)(a1 + 592));
  return sqlite3_reset(*(_DWORD *)(a1 + 592));
}


//======================================================================
// sub_38267A
// address: 0x0038267A   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_38267A(int a1, int a2, int a3, int a4, int a5, int a6)
{
  sqlite3_bind_int64(*(int **)(a1 + 604), 1, a3, a4);
  sqlite3_bind_int64(*(int **)(a1 + 604), 2, a5, a6);
  sqlite3_step(*(_DWORD *)(a1 + 604));
  return sqlite3_reset(*(_DWORD *)(a1 + 604));
}


//======================================================================
// sub_3826A8
// address: 0x003826A8   size: 0x9FC (2556 bytes)
//======================================================================
void __fastcall sub_3826A8(int *a1, int *a2, int a3, int a4)
{
  int **v6; // r0
  int **v7; // r4
  int v8; // r0
  int k; // r4
  int v10; // r2
  _BYTE *v11; // r3
  int v12; // r5
  char *v13; // r0
  int v14; // r5
  int m; // r4
  int v16; // r3
  signed int v17; // r3
  double v18; // r0
  int jj; // r4
  int v20; // r3
  __int64 v21; // r0
  int *v22; // r2
  double v23; // r0
  int kk; // r4
  int *v25; // r3
  float v26; // r0
  float *v27; // r4
  double v28; // r0
  double v29; // r0
  double v30; // r4
  int v31; // r4
  _DWORD **v32; // r5
  signed int v33; // r4
  int v34; // r1
  int v35; // r3
  int v36; // r0
  int v37; // r2
  int v38; // r4
  unsigned int *v39; // r5
  int v40; // r0
  int ii; // r5
  int v42; // r3
  int v43; // r4
  int v44; // r5
  int v45; // r3
  __int64 v46; // r0
  int v47; // r0
  int v48; // r0
  unsigned int v49; // r4
  int v50; // r0
  int v51; // r2
  int v52; // r4
  char *v53; // r2
  int v54; // r5
  unsigned int v55; // r4
  __int64 *v56; // r3
  double v57; // r0
  __int64 *v58; // r3
  double v59; // r0
  int j; // r4
  double *v61; // r5
  int v62; // r4
  int v63; // r5
  double v64; // r0
  int v65; // r5
  int *v66; // r4
  int v67; // r2
  int v68; // r3
  int v69; // r1
  int v70; // r0
  int v71; // r4
  int v72; // [sp+0h] [bp-144h]
  signed int v73; // [sp+50h] [bp-F4h]
  size_t v74; // [sp+50h] [bp-F4h]
  __int64 *v75; // [sp+50h] [bp-F4h]
  double *v76; // [sp+50h] [bp-F4h]
  int *v77; // [sp+54h] [bp-F0h]
  int v78; // [sp+54h] [bp-F0h]
  char *v79; // [sp+58h] [bp-ECh]
  int *v80; // [sp+58h] [bp-ECh]
  double v81; // [sp+58h] [bp-ECh]
  int *v82; // [sp+58h] [bp-ECh]
  int i; // [sp+58h] [bp-ECh]
  int v84; // [sp+58h] [bp-ECh]
  _DWORD **v85; // [sp+60h] [bp-E4h]
  __int64 v86; // [sp+60h] [bp-E4h]
  int v87; // [sp+60h] [bp-E4h]
  int v88; // [sp+60h] [bp-E4h]
  int v89; // [sp+64h] [bp-E0h]
  int *v90; // [sp+64h] [bp-E0h]
  double *v91; // [sp+64h] [bp-E0h]
  int v92; // [sp+64h] [bp-E0h]
  int v93; // [sp+68h] [bp-DCh]
  int v94; // [sp+68h] [bp-DCh]
  int *v95; // [sp+6Ch] [bp-D8h]
  char *v96; // [sp+6Ch] [bp-D8h]
  int n; // [sp+70h] [bp-D4h]
  int v98; // [sp+70h] [bp-D4h]
  double v99; // [sp+70h] [bp-D4h]
  int *v100; // [sp+78h] [bp-CCh]
  char *v101; // [sp+78h] [bp-CCh]
  double v103; // [sp+80h] [bp-C4h]
  double v104; // [sp+80h] [bp-C4h]
  double v105; // [sp+88h] [bp-BCh]
  int v106; // [sp+88h] [bp-BCh]
  signed int v108; // [sp+94h] [bp-B0h]
  int v109; // [sp+94h] [bp-B0h]
  double v110; // [sp+98h] [bp-ACh]
  double v111; // [sp+A0h] [bp-A4h]
  _DWORD **v112; // [sp+A8h] [bp-9Ch]
  void *v113; // [sp+A8h] [bp-9Ch]
  int v114; // [sp+ACh] [bp-98h]
  double v115; // [sp+B0h] [bp-94h]
  double v116; // [sp+B8h] [bp-8Ch]
  int v117; // [sp+C0h] [bp-84h]
  int v118; // [sp+C4h] [bp-80h]
  int v119; // [sp+C8h] [bp-7Ch]
  int v120; // [sp+DCh] [bp-68h] BYREF
  int v121[12]; // [sp+E0h] [bp-64h] BYREF
  _DWORD v122[13]; // [sp+110h] [bp-34h] BYREF

  if ( a4 > 0 )
  {
    v6 = (int **)sub_34FDD4((int)a1, *(_QWORD *)a3);
    v7 = v6;
    if ( v6 != nullptr )
    {
      sub_381DA2(a1, *v6);
      sub_34FD6A((int)a2);
      *v7 = a2;
    }
  }
  if ( !sub_34FE86((int)a1, (int)a2, (int *)a3) )
    sub_3830A4();
  if ( a4 > a1[143] && (a2[2] != 1 || a2[3] != 0) )
  {
    a1[143] = a4;
    j_memset(v122, 0, 0x28u);
    v87 = (*(unsigned __int8 *)(a2[6] + 2) << 8) + *(unsigned __int8 *)(a2[6] + 3);
    v94 = v87 + 1;
    v49 = (v87 + 2) & 0xFFFFFFFE;
    v50 = sqlite3_malloc(v49 << 6);
    v78 = v50;
    if ( v50 != 0 )
    {
      v51 = 48 * v49;
      v52 = 4 * v49;
      v53 = (char *)(v50 + v51);
      v106 = (int)&v53[v52 + v52];
      v96 = v53;
      v101 = &v53[v52];
      v54 = 0;
      v113 = (void *)(v50 + 48 * v87);
      v75 = (__int64 *)v50;
      do
      {
        if ( v54 == v87 )
          j_memcpy(v113, (const void *)a3, 0x30u);
        else
          sub_3571F0((int)a1, (int)a2, v54, v75);
        *(_DWORD *)&v96[4 * v54] = v54;
        v109 = a1[5];
        v55 = 0;
        for ( i = 0; i < v109; ++i )
        {
          v91 = (double *)&v122[v55 / 4];
          v98 = a1[153];
          v56 = &v75[v55 / 8];
          if ( v98 != 0 )
            v57 = (double)*((int *)v56 + 2);
          else
            v57 = *((float *)v56 + 2);
          v104 = *(double *)&v122[v55 / 4] + v57;
          *v91 = v104;
          v58 = &v75[v55 / 8];
          if ( v98 != 0 )
            v59 = (double)*((int *)v58 + 3);
          else
            v59 = *((float *)v58 + 3);
          v55 += 8;
          *v91 = v104 + v59;
        }
        ++v54;
        v75 += 6;
      }
      while ( v54 < v94 );
      for ( j = 0; j < v109; ++j )
      {
        v61 = (double *)&v122[2 * j];
        *v61 = *v61 / ((double)v94 + (double)v94);
      }
      v76 = (double *)v106;
      v92 = v78;
      v84 = 0;
      do
      {
        *(_DWORD *)v76 = 0;
        *((_DWORD *)v76 + 1) = 0;
        v62 = v92;
        v88 = 0;
        v63 = v92;
        while ( v88 < a1[5] )
        {
          if ( a1[153] != 0 )
          {
            v99 = (double)*(int *)(v62 + 12);
            v64 = (double)*(int *)(v62 + 8);
          }
          else
          {
            v99 = *(float *)(v63 + 12);
            v64 = *(float *)(v63 + 8);
          }
          v63 += 8;
          v62 += 8;
          *v76 = *v76 + (v99 - v64 - *(double *)&v122[2 * v88]) * (v99 - v64 - *(double *)&v122[2 * v88]);
          ++v88;
        }
        ++v84;
        ++v76;
        v92 += 48;
      }
      while ( v84 < v94 );
      sub_350A98(v96, v94, v106, v101);
      j_memset((void *)(a2[6] + 2), 0, a1[4] - 2);
      a2[5] = 1;
      v65 = 0;
      do
      {
        if ( v65 >= v94 + ~((a1[4] - 4) / a1[6] / 3) )
          JUMPOUT(0x3830DA);
        v66 = (int *)(v78 + 48 * *(_DWORD *)&v96[4 * v65]);
        sub_34FE86((int)a1, (int)a2, v66);
        v67 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 == *v66 && (v68 = *(_DWORD *)(a3 + 4)) == v66[1] )
        {
          v69 = a2[3];
          v72 = a2[2];
          if ( a4 != 0 )
            v70 = sub_38267A((int)a1, v69, v67, v68, v72, v69);
          else
            v70 = sub_382650((int)a1, v69, v67, v68, v72, v69);
          v71 = v70;
        }
        else
        {
          v71 = 0;
        }
        ++v65;
      }
      while ( v71 == 0 );
      v48 = v78;
      goto LABEL_143;
    }
LABEL_146:
    JUMPOUT(0x3830E6);
  }
  v117 = (*(unsigned __int8 *)(a2[6] + 2) << 8) + *(unsigned __int8 *)(a2[6] + 3);
  v73 = v117 + 1;
  v8 = sqlite3_malloc(52 * (v117 + 1));
  v93 = v8;
  if ( v8 == 0 )
  {
    v95 = nullptr;
    v77 = nullptr;
    goto LABEL_105;
  }
  j_memset((void *)(v8 + 48 * v73), 0, 4 * v73);
  for ( k = 0; k < v117; ++k )
    sub_3571F0((int)a1, (int)a2, k, (__int64 *)(v93 + 48 * k));
  j_memset((void *)(a2[6] + 2), 0, a1[4] - 2);
  a2[5] = 1;
  j_memcpy((void *)(v93 + 48 * v73 - 48), (const void *)a3, 0x30u);
  if ( a2[2] != 1 || a2[3] != 0 )
  {
    v95 = sub_359290(a1 + 4, *a2);
    sub_34FD6A((int)a2);
    v77 = a2;
  }
  else
  {
    v95 = sub_359290(a1 + 4, (int)a2);
    v77 = sub_359290(a1 + 4, (int)a2);
    ++a1[7];
    a2[5] = 1;
    v10 = a1[7];
    v11 = (_BYTE *)a2[6];
    *v11 = BYTE1(v10);
    v11[1] = v10;
    if ( v77 == nullptr )
      goto LABEL_105;
  }
  if ( v95 == nullptr )
    goto LABEL_105;
  j_memset((void *)v77[6], 0, a1[4]);
  j_memset((void *)v95[6], 0, a1[4]);
  v12 = 4 * (a1[5] + 1) * (v117 + 2);
  v13 = (char *)sqlite3_malloc(v12);
  v85 = (_DWORD **)v13;
  if ( v13 == nullptr )
    goto LABEL_105;
  v79 = &v13[4 * v73 * a1[5] + 4 * a1[5]];
  j_memset(v13, 0, v12);
  v14 = 0;
  for ( m = 0; ; ++m )
  {
    v16 = a1[5];
    if ( m >= v16 )
      break;
    v85[m] = &(&v85[v14])[v16];
    v17 = 0;
    do
    {
      v85[m][v17] = v17;
      ++v17;
    }
    while ( v17 < v73 );
    HIDWORD(v18) = v85[m];
    LODWORD(v18) = a1;
    sub_350918(v18, v73, m, v93, v79);
    v14 += v73;
  }
  v116 = 0.0;
  v112 = v85;
  v108 = 0;
  v118 = 0;
  for ( n = 0; ; ++n )
  {
    if ( n >= a1[5] )
    {
      v32 = &v85[v118];
      j_memcpy(v121, (const void *)(v93 + 48 * **v32), sizeof(v121));
      j_memcpy(v122, (const void *)(v93 + 48 * (*v32)[v108]), 0x30u);
      v33 = 0;
      do
      {
        if ( v33 >= v108 )
        {
          v34 = (int)v95;
          v82 = v122;
        }
        else
        {
          v34 = (int)v77;
          v82 = v121;
        }
        v35 = v33++;
        v90 = (int *)(v93 + 48 * (*v32)[v35]);
        sub_34FE86((int)a1, v34, v90);
        sub_353DFC(__SPAIR64__((unsigned int)v82, (unsigned int)a1), v90);
      }
      while ( v33 < v73 );
      sqlite3_free(v85);
      if ( (v95[5] == 0 || sub_381D30(a1, (int)v95) == 0)
        && (*((_QWORD *)v77 + 1) != 0 || v77[5] == 0 || sub_381D30(a1, (int)v77) == 0) )
      {
        v36 = a2[2];
        v37 = v95[3];
        v122[0] = v95[2];
        v122[1] = v37;
        v38 = v77[3];
        v121[0] = v77[2];
        v121[1] = v38;
        v39 = (unsigned int *)*v77;
        if ( v36 != 1 || a2[3] != 0 )
        {
          if ( sub_3563A0((int)a1, (unsigned int *)v77, &v120) != 0 )
            goto LABEL_105;
          sub_34FE30((int)a1, (int)v39, v121, v120);
          v40 = sub_357242((int)a1, v39, v121);
        }
        else
        {
          v40 = sub_3826A8(a1, *v77, v121, a4 + 1);
        }
        if ( v40 == 0 && sub_3826A8(a1, *v95, v122, a4 + 1) == 0 )
        {
          v74 = 0;
          for ( ii = 0; ; ++ii )
          {
            v42 = v95[6];
            if ( ii >= (*(unsigned __int8 *)(v42 + 2) << 8) + *(unsigned __int8 *)(v42 + 3) )
              break;
            v86 = sub_34FD18((unsigned __int8 *)(v42 + a1[6] * ii + 4));
            v43 = sub_381F40(a1, v86, (int)v95, a4);
            if ( *(_QWORD *)a3 == v86 )
              v74 = 1;
            if ( v43 != 0 )
              goto LABEL_105;
          }
          if ( a2[2] != 1 || (v44 = a2[3]) != 0 )
          {
            if ( v74 != 0 || sub_381F40(a1, *(_QWORD *)a3, (int)v77, a4) == 0 )
              goto LABEL_103;
          }
          else
          {
            while ( 1 )
            {
              v45 = v77[6];
              if ( v44 >= (*(unsigned __int8 *)(v45 + 2) << 8) + *(unsigned __int8 *)(v45 + 3) )
                break;
              v46 = sub_34FD18((unsigned __int8 *)(v45 + a1[6] * v44 + 4));
              if ( sub_381F40(a1, v46, (int)v77, a4) != 0 )
                goto LABEL_105;
              ++v44;
            }
LABEL_103:
            v47 = sub_381DA2(a1, v95);
            v95 = nullptr;
            if ( v47 == 0 )
            {
              sub_381DA2(a1, v77);
              v77 = nullptr;
            }
          }
        }
      }
LABEL_105:
      sub_381DA2(a1, v95);
      sub_381DA2(a1, v77);
      v48 = v93;
LABEL_143:
      sqlite3_free(v48);
      goto LABEL_146;
    }
    v89 = (a1[4] - 4) / a1[6] / 3;
    v103 = 0.0;
    v111 = 0.0;
    v110 = 0.0;
    v114 = 0;
    while ( v89 <= v73 + (a1[4] - 4) / a1[6] / -3 )
    {
      j_memcpy(v121, (const void *)(v93 + 48 * **v112), sizeof(v121));
      j_memcpy(v122, (const void *)(v93 + 48 * (*v112)[v73 - 1]), 0x30u);
      for ( jj = 1; jj < v117; ++jj )
      {
        v20 = 48 * (*v112)[jj];
        if ( jj >= v89 )
        {
          v22 = (int *)(v93 + v20);
          v21 = __PAIR64__(v122, (unsigned int)a1);
        }
        else
        {
          v21 = __PAIR64__(v121, (unsigned int)a1);
          v22 = (int *)(v93 + v20);
        }
        sub_353DFC(v21, v22);
      }
      v23 = v110 + COERCE_DOUBLE(sub_34FFA8((int)a1, (int)v121));
      v110 = v23 + COERCE_DOUBLE(sub_34FFA8((int)a1, (int)v122));
      v115 = 1.0;
      v100 = &v121[3];
      v80 = &v122[3];
      for ( kk = 0; ; kk = v119 + 2 )
      {
        v119 = kk;
        if ( kk >= 2 * a1[5] )
          goto LABEL_54;
        v25 = v100 - 1;
        if ( a1[153] != 0 )
        {
          v105 = (double)*(v80 - 1);
          if ( (double)*v25 > v105 )
            v105 = (double)*v25;
          if ( (double)*v100 >= (double)*v80 )
            JUMPOUT(0x3830D6);
          v28 = (double)*v100;
        }
        else
        {
          v26 = *(float *)v25 <= *((float *)v80 - 1) ? *((float *)v80 - 1) : *(float *)v25;
          v105 = v26;
          v27 = (float *)(*(float *)v100 >= *(float *)v80 ? v80 : v100);
          v28 = *v27;
        }
        v100 += 2;
        v80 += 2;
        if ( v28 < v105 )
          break;
        v115 = v115 * (v28 - v105);
      }
      v115 = 0.0;
LABEL_54:
      v81 = v115 + 0.0;
      v29 = COERCE_DOUBLE(sub_34FF28((int)a1, (int)v121));
      v30 = v29 + COERCE_DOUBLE(sub_34FF28((int)a1, (int)v122));
      if ( v89 == (a1[4] - 4) / a1[6] / 3 )
      {
        v114 = v89;
      }
      else if ( v81 < v111 )
      {
        v114 = v89;
      }
      else if ( v81 == v111 )
      {
        if ( v30 >= v103 )
        {
          v81 = v111;
          v30 = v103;
        }
        else
        {
          v114 = v89;
        }
      }
      else
      {
        v30 = v103;
        v81 = v111;
      }
      v103 = v30;
      ++v89;
      v111 = v81;
    }
    v31 = n;
    if ( n == 0 )
      break;
    if ( v110 < v116 )
      goto LABEL_68;
    v110 = v116;
    v114 = v108;
LABEL_70:
    v116 = v110;
    ++v112;
    v108 = v114;
  }
  v31 = 0;
LABEL_68:
  v118 = v31;
  goto LABEL_70;
}


//======================================================================
// sub_3830A4
// address: 0x003830A4   size: 0x48 (72 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3830A4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r6
  unsigned int *v10; // r7
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // [sp-144h] [bp-144h]
  int *v15; // [sp-C8h] [bp-C8h]
  int v16; // [sp-B4h] [bp-B4h]

  if ( sub_357242(v9, v10, v15) == 0 )
  {
    v11 = v10[3];
    v12 = *v15;
    v13 = v15[1];
    v14 = v10[2];
    if ( v16 != 0 )
      sub_38267A(v9, v11, v12, v13, v14, v11);
    else
      sub_382650(v9, v11, v12, v13, v14, v11);
  }
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_3830F8
// address: 0x003830F8   size: 0x19E (414 bytes)
//======================================================================
int __fastcall sub_3830F8(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v7; // r1
  int v8; // r7
  int v9; // r0
  int *v10; // r4
  unsigned __int8 *v11; // r0
  __int64 v12; // r0
  int v13; // r4
  int v14; // r0
  int *v15; // r2
  int v16; // r3
  _BYTE *v17; // r2
  int *v18; // r4
  int v19; // r7
  int v20; // r0
  int v21; // r0
  int v22; // r5
  unsigned int *v23; // r0
  int v25; // [sp+10h] [bp-4Ch]
  int v26; // [sp+14h] [bp-48h]
  unsigned int *i; // [sp+18h] [bp-44h] BYREF
  int v28; // [sp+1Ch] [bp-40h] BYREF
  int *v29; // [sp+20h] [bp-3Ch] BYREF
  int *v30; // [sp+24h] [bp-38h] BYREF
  __int64 v31[6]; // [sp+28h] [bp-34h] BYREF

  i = nullptr;
  v8 = sub_381BB4(a1, 1, 0, &v29);
  if ( v8 != 0 )
    goto LABEL_30;
  v8 = sub_381CE4(a1, v7, a3, a4, (int **)&i);
  if ( v8 != 0 )
    goto LABEL_30;
  v8 = sub_35635A(a1, i[6], a3, a4, &v28);
  if ( v8 == 0 )
    v8 = sub_382532(a1, i, v28, 0);
  v9 = sub_381DA2((int *)a1, i);
  v25 = v9;
  if ( v8 != 0 )
  {
LABEL_30:
    v25 = v8;
  }
  else if ( v9 == 0 )
  {
    sqlite3_bind_int64(*(int **)(a1 + 596), 1, a3, a4);
    sqlite3_step(*(_DWORD *)(a1 + 596));
    v25 = sqlite3_reset(*(_DWORD *)(a1 + 596));
    if ( v25 == 0 && *(int *)(a1 + 28) > 0 )
    {
      v10 = v29;
      v11 = (unsigned __int8 *)v29[6];
      if ( (v11[2] << 8) + v11[3] == 1 )
      {
        v12 = sub_34FD18(v11 + 4);
        v13 = sub_381BB4(a1, v12, (int)v10, (int **)v31);
        if ( v13 == 0 )
          v13 = sub_38248A(a1, (unsigned int *)v31[0], *(_DWORD *)(a1 + 28) - 1);
        v14 = sub_381DA2((int *)a1, (_DWORD *)v31[0]);
        v25 = v14;
        if ( v13 != 0 )
        {
          v25 = v13;
        }
        else if ( v14 == 0 )
        {
          v15 = v29;
          v16 = *(_DWORD *)(a1 + 28) - 1;
          *(_DWORD *)(a1 + 28) = v16;
          v17 = (_BYTE *)v15[6];
          *v17 = BYTE1(v16);
          v17[1] = v16;
          v29[5] = 1;
        }
      }
    }
  }
  for ( i = *(unsigned int **)(a1 + 568); ; i = *(unsigned int **)(a1 + 568) )
  {
    v18 = (int *)i;
    if ( i == nullptr )
      break;
    if ( v25 == 0 )
    {
      v19 = 0;
      v26 = (*(unsigned __int8 *)(i[6] + 2) << 8) + *(unsigned __int8 *)(i[6] + 3);
      while ( v19 < v26 )
      {
        sub_3571F0(a1, (int)v18, v19, v31);
        v20 = sub_381E00((int *)a1, (int *)v31, v18[2], &v30);
        if ( v20 == 0 )
        {
          sub_3826A8((int *)a1, v30, (int)v31, v18[2]);
          v22 = v21;
          v20 = sub_381DA2((int *)a1, v30);
          if ( v22 != 0 )
            v20 = v22;
        }
        ++v19;
        if ( v20 != 0 )
        {
          v25 = v20;
          break;
        }
      }
    }
    v23 = i;
    *(_DWORD *)(a1 + 568) = i[7];
    sqlite3_free(v23);
  }
  if ( v25 == 0 )
    return sub_381DA2((int *)a1, v29);
  sub_381DA2((int *)a1, v29);
  return v25;
}


//======================================================================
// sub_383298
// address: 0x00383298   size: 0x25C (604 bytes)
//======================================================================
int __fastcall sub_383298(int a1, int a2, int *a3, _DWORD *a4)
{
  int v6; // r5
  int v7; // r4
  _DWORD *v8; // r5
  int v9; // r4
  _DWORD *v10; // r4
  double v11; // r0
  unsigned int v12; // r5
  double v13; // r0
  double v14; // r2
  float v15; // r0
  float v16; // r5
  double v17; // r2
  float v18; // r0
  __int64 v19; // r0
  int v20; // r0
  int v21; // r2
  __int64 v22; // r0
  __int64 v23; // r0
  int v24; // r2
  __int64 v25; // r0
  int v26; // r2
  __int64 v27; // r0
  int v28; // r0
  int v29; // r1
  __int64 v30; // r0
  int v31; // r2
  __int64 v32; // r0
  unsigned int v33; // r2
  int v34; // r0
  int v35; // r5
  double v37; // [sp+0h] [bp-54h]
  double v38; // [sp+0h] [bp-54h]
  int v39; // [sp+8h] [bp-4Ch]
  int v40; // [sp+8h] [bp-4Ch]
  int v41; // [sp+Ch] [bp-48h]
  int *v44; // [sp+1Ch] [bp-38h] BYREF
  unsigned int v45[13]; // [sp+20h] [bp-34h] BYREF

  ++*(_DWORD *)(a1 + 552);
  if ( a2 <= 1 )
    goto LABEL_2;
  if ( *(_DWORD *)(a1 + 612) != 0 )
  {
    v8 = a3 + 3;
    v9 = 2;
    while ( 1 )
    {
      HIDWORD(v22) = *(_DWORD *)(a1 + 20);
      if ( v9 - 2 >= 2 * HIDWORD(v22) )
        break;
      LODWORD(v22) = *v8;
      v19 = sqlite3_value_int(v22, 2 * HIDWORD(v22));
      v45[v9] = v19;
      LODWORD(v19) = v8[1];
      v20 = sqlite3_value_int(v19, 4 * v9);
      v21 = v9;
      v9 += 2;
      v45[v21 + 1] = v20;
      v8 += 2;
      if ( (int)v45[v21] > v20 )
        goto LABEL_18;
    }
  }
  else
  {
    v10 = a3 + 4;
    v39 = 2;
    while ( 1 )
    {
      HIDWORD(v11) = *(_DWORD *)(a1 + 20);
      if ( v39 - 2 >= 2 * HIDWORD(v11) )
        break;
      LODWORD(v11) = *(v10 - 1);
      v37 = COERCE_DOUBLE(sqlite3_value_double(v11));
      *(float *)&v13 = v37;
      v12 = LODWORD(v13);
      if ( *(float *)&v13 > v37 )
      {
        if ( v37 >= 0.0 )
          v14 = 0.999999881;
        else
          v14 = 1.00000012;
        *(float *)&v13 = v37 * v14;
        v12 = LODWORD(v13);
      }
      v45[v39] = v12;
      LODWORD(v13) = *v10;
      v41 = v39;
      v38 = COERCE_DOUBLE(sqlite3_value_double(v13));
      v15 = v38;
      v16 = v15;
      if ( v15 < v38 )
      {
        if ( v38 >= 0.0 )
          v17 = 1.00000012;
        else
          v17 = 0.999999881;
        v18 = v38 * v17;
        v16 = v18;
      }
      v10 += 2;
      *(float *)&v45[v41 + 1] = v16;
      v39 += 2;
      if ( *(float *)&v45[v41] > v16 )
        goto LABEL_18;
    }
  }
  if ( sqlite3_value_type(a3[2]) == 5 )
  {
LABEL_2:
    v6 = 0;
    v7 = 0;
  }
  else
  {
    LODWORD(v23) = a3[2];
    *(_QWORD *)v45 = sqlite3_value_int64(v23, v24);
    if ( sqlite3_value_type(*a3) == 5
      || (LODWORD(v25) = *a3, v27 = sqlite3_value_int64(v25, v26), *(_QWORD *)v45 != v27) )
    {
      sqlite3_bind_int64(*(int **)(a1 + 588), 1, v45[0], v45[1]);
      v40 = sqlite3_step(*(_DWORD *)(a1 + 588));
      v7 = sqlite3_reset(*(_DWORD *)(a1 + 588));
      if ( v40 == 100 )
      {
        v28 = sqlite3_vtab_on_conflict(*(_DWORD *)(a1 + 12));
        if ( v28 != 5 )
        {
LABEL_18:
          v7 = 19;
          goto LABEL_40;
        }
        v7 = sub_3830F8(a1, v29, v45[0], v45[1]);
      }
      v6 = 1;
    }
    else
    {
      v6 = 1;
      v7 = 0;
    }
  }
  if ( sqlite3_value_type(*a3) != 5 )
  {
    LODWORD(v30) = *a3;
    v32 = sqlite3_value_int64(v30, v31);
    v7 = sub_3830F8(a1, SHIDWORD(v32), v32, HIDWORD(v32));
  }
  if ( v7 == 0 && a2 > 1 )
  {
    v44 = nullptr;
    if ( v6 == 0 )
    {
      sqlite3_bind_null(*(int **)(a1 + 592), 1);
      sqlite3_bind_null(*(int **)(a1 + 592), 2);
      sqlite3_step(*(_DWORD *)(a1 + 592));
      v7 = sqlite3_reset(*(_DWORD *)(a1 + 592));
      *(_QWORD *)v45 = sqlite3_last_insert_rowid(*(_DWORD *)(a1 + 12));
    }
    v33 = v45[1];
    *a4 = v45[0];
    a4[1] = v33;
    if ( v7 == 0 )
    {
      v7 = sub_381E00((int *)a1, (int *)v45, 0, &v44);
      if ( v7 == 0 )
      {
        *(_DWORD *)(a1 + 572) = -1;
        sub_3826A8((int *)a1, v44, (int)v45, 0);
        v35 = v34;
        v7 = sub_381DA2((int *)a1, v44);
        if ( v35 != 0 )
          v7 = v35;
      }
    }
  }
LABEL_40:
  sub_3759F0(a1);
  return v7;
}


//======================================================================
// sub_383510
// address: 0x00383510   size: 0x24A (586 bytes)
//======================================================================
int __fastcall sub_383510(int a1, int a2, int *a3)
{
  const char *v4; // r3
  int v5; // r6
  int **v6; // r0
  int v7; // r3
  int v8; // r5
  int result; // r0
  int v10; // r0
  int v11; // r0
  const char *v12; // r0
  int i; // r6
  int v14; // r3
  char v15; // r2
  int v16; // r6
  int v17; // r0
  int v18; // r3
  _BYTE *v19; // r2
  int v20; // r3
  int v21; // [sp+8h] [bp-54h]
  int v24; // [sp+14h] [bp-48h]
  char *v25; // [sp+18h] [bp-44h]
  char *v26; // [sp+18h] [bp-44h]
  int v27; // [sp+1Ch] [bp-40h]
  _DWORD v28[4]; // [sp+24h] [bp-38h] BYREF
  int v29[3]; // [sp+34h] [bp-28h] BYREF
  _DWORD v30[2]; // [sp+40h] [bp-1Ch] BYREF
  int v31; // [sp+48h] [bp-14h]
  int v32; // [sp+4Ch] [bp-10h]
  int v33; // [sp+54h] [bp-8h]

  if ( a2 == 1 )
  {
    v4 = "CREATE TEMP TABLE sqlite_temp_master(\n"
         "  type text,\n"
         "  name text,\n"
         "  tbl_name text,\n"
         "  rootpage integer,\n"
         "  sql text\n"
         ")";
    v25 = "sqlite_temp_master";
  }
  else
  {
    v4 = "CREATE TABLE sqlite_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)";
    v25 = "sqlite_master";
  }
  v28[0] = v25;
  v28[2] = v4;
  v28[1] = "1";
  v28[3] = 0;
  v29[2] = a2;
  v29[0] = a1;
  v30[0] = 0;
  v29[1] = (int)a3;
  sub_37BEF0(v29, 3, (int)v28);
  v5 = v30[0];
  if ( v30[0] == 0 )
  {
    v24 = 16 * a2;
    v6 = sub_34EAFE(a1, (unsigned __int8 *)v25, *(_BYTE **)(*(_DWORD *)(a1 + 16) + 16 * a2));
    if ( v6 != nullptr )
      *((_BYTE *)v6 + 44) |= 1u;
    v7 = *(_DWORD *)(a1 + 16);
    v8 = v7 + v24;
    result = *(_DWORD *)(v7 + v24 + 4);
    if ( result == 0 )
    {
      if ( a2 == 1 )
        *(_WORD *)(*(_DWORD *)(v7 + 28) + 78) |= 1u;
      return result;
    }
    sub_3574C2(result);
    v10 = *(_DWORD *)(v8 + 4);
    v27 = 0;
    if ( *(_BYTE *)(v10 + 8) == 0 )
    {
      v11 = sub_36CDC0(v10, *(unsigned __int8 *)(v10 + 8));
      v5 = v11;
      v27 = 1;
      if ( v11 != 0 )
      {
        v12 = sub_353D40(v11);
        sub_365388(a3, (_DWORD *)a1, (int)"%s", v12);
LABEL_46:
        sub_35655E(*(_DWORD *)(v8 + 4));
        goto LABEL_47;
      }
    }
    for ( i = 0; i != 5; sub_357930(*(_DWORD *)(v8 + 4), i, &v30[i]) )
      ++i;
    **(_DWORD **)(v8 + 12) = v30[1];
    v14 = *(_DWORD *)(a1 + 16);
    if ( v33 != 0 )
    {
      if ( a2 != 0 )
      {
        if ( v33 != *(unsigned __int8 *)(*(_DWORD *)(v14 + 12) + 77) )
        {
          sub_365388(a3, (_DWORD *)a1, (int)"attached databases must use the same text encoding as main database");
LABEL_31:
          v5 = 1;
          goto LABEL_44;
        }
      }
      else
      {
        v15 = v33 & 3;
        if ( (v33 & 3) == 0 )
          v15 = 1;
        *(_BYTE *)(*(_DWORD *)(v14 + 12) + 77) = v15;
      }
    }
    else
    {
      *(_WORD *)(*(_DWORD *)(v14 + v24 + 12) + 78) |= 4u;
    }
    *(_BYTE *)(*(_DWORD *)(v8 + 12) + 77) = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) + 77);
    v16 = *(_DWORD *)(v8 + 12);
    if ( *(_DWORD *)(v16 + 80) == 0 )
    {
      v17 = sub_34D970(v32);
      if ( v17 == 0 )
        v17 = 2000;
      *(_DWORD *)(v16 + 80) = v17;
      sub_357834(*(_DWORD *)(v8 + 4), *(_DWORD *)(*(_DWORD *)(v8 + 12) + 80));
    }
    v18 = v31;
    *(_BYTE *)(*(_DWORD *)(v8 + 12) + 76) = v31;
    v19 = (_BYTE *)(*(_DWORD *)(v8 + 12) + 76);
    if ( *v19 == 0 )
      *v19 = 1;
    if ( *(unsigned __int8 *)(*(_DWORD *)(v8 + 12) + 76) > 4u )
    {
      sub_365388(a3, (_DWORD *)a1, (int)"unsupported file format");
      goto LABEL_31;
    }
    if ( a2 == 0 && v18 > 3 )
      *(_DWORD *)(a1 + 24) &= ~0x8000u;
    v26 = (char *)sub_36541C(
                    a1,
                    "SELECT name, rootpage, sql FROM '%q'.%s ORDER BY rowid",
                    *(_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * a2),
                    v25);
    v21 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(a1 + 276) = 0;
    v5 = sqlite3_exec(a1, v26, (int (__fastcall *)(int, int, _DWORD *, _DWORD *))sub_37BEF0, (int)v29, nullptr);
    *(_DWORD *)(a1 + 276) = v21;
    if ( v5 == 0 )
      v5 = v30[0];
    sub_354940((_DWORD *)a1, v26);
    if ( v5 == 0 )
      sub_37C214(a1, a2);
    if ( *(_BYTE *)(a1 + 64) != 0 )
    {
      sub_3577F4((_DWORD *)a1);
      v5 = 7;
    }
    else if ( v5 == 0 )
    {
      goto LABEL_42;
    }
    if ( (*(_DWORD *)(a1 + 24) & 0x10000) == 0 )
    {
LABEL_44:
      if ( v27 != 0 )
        sub_36C950(*(_DWORD *)(v8 + 4));
      goto LABEL_46;
    }
LABEL_42:
    v5 = 0;
    v20 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + v24 + 12);
    *(_WORD *)(v20 + 78) |= 1u;
    goto LABEL_44;
  }
LABEL_47:
  if ( v5 == 7 || (result = v5, v5 == 3082) )
  {
    *(_BYTE *)(a1 + 64) = 1;
    return v5;
  }
  return result;
}


//======================================================================
// sub_38378C
// address: 0x0038378C   size: 0x9E (158 bytes)
//======================================================================
int __fastcall sub_38378C(int a1, int *a2)
{
  int v4; // r6
  int v5; // r3
  int v6; // r5
  _BYTE *v8; // [sp+0h] [bp-Ch]
  int v9; // [sp+4h] [bp-8h]

  v8 = (_BYTE *)(a1 + 137);
  v9 = *(_DWORD *)(a1 + 24);
  *(_BYTE *)(a1 + 137) = 1;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(a1 + 20);
    if ( v4 >= v5 )
      break;
    v6 = 0;
    if ( (*(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * v4 + 12) + 78) & 1) == 0 && v4 != 1 )
    {
      v6 = sub_383510(a1, v4, a2);
      if ( v6 != 0 )
        sub_355608(a1, v4);
    }
    ++v4;
    if ( v6 != 0 )
      goto LABEL_11;
  }
  v6 = 0;
  if ( v5 > 1 )
  {
    v6 = 0;
    if ( (*(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 28) + 78) & 1) == 0 )
    {
      v6 = sub_383510(a1, 1, a2);
      if ( v6 != 0 )
        sub_355608(a1, 1);
    }
  }
LABEL_11:
  *v8 = 0;
  if ( v6 == 0 && (v9 & 2) == 0 )
    *(_DWORD *)(a1 + 24) &= ~2u;
  return v6;
}


//======================================================================
// sub_38382A
// address: 0x0038382A   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_38382A(int *a1)
{
  int v1; // r3
  int result; // r0
  int v4; // r3

  v1 = *a1;
  result = 0;
  if ( *(_BYTE *)(v1 + 137) == 0 )
  {
    result = sub_38378C(v1, a1 + 1);
    if ( result != 0 )
    {
      v4 = a1[17];
      a1[3] = result;
      a1[17] = v4 + 1;
    }
  }
  return result;
}


//======================================================================
// sub_383854
// address: 0x00383854   size: 0x2BA (698 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_383854(int a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v9; // r6
  unsigned __int8 *result; // r0
  int v11; // r1
  unsigned __int8 *v12; // r5
  _BYTE *v13; // r7
  unsigned __int8 *v14; // r7
  unsigned __int8 *v15; // r5
  int v16; // r7
  int v17; // r1
  int v18; // r2
  int v19; // r7
  int v20; // r2
  int v21; // [sp+8h] [bp-1Ch]
  int v22; // [sp+Ch] [bp-18h]
  int v23; // [sp+10h] [bp-14h]
  unsigned int v24; // [sp+14h] [bp-10h]
  _DWORD *v25; // [sp+1Ch] [bp-8h] BYREF

  v9 = *(_DWORD *)a1;
  result = (unsigned __int8 *)sub_360FD8((int *)a1, a2, a3, (int *)&v25);
  v21 = (int)result;
  if ( (int)result < 0 )
    return result;
  if ( a4 != 0 )
  {
    if ( *(_DWORD *)(a3 + 4) != 0 )
    {
      if ( result != (_BYTE *)&dword_0 + 1 )
        return (unsigned __int8 *)sub_360E94((int *)a1, (int)"temporary table name must be unqualified");
    }
    else
    {
      v21 = 1;
    }
  }
  v11 = (int)v25;
  *(_DWORD *)(a1 + 500) = *v25;
  *(_DWORD *)(a1 + 504) = *(_DWORD *)(v11 + 4);
  result = sub_351C1C(v9, v11);
  v12 = result;
  if ( result == nullptr )
    return result;
  if ( sub_36104C((unsigned __int8 *)a1, (char *)result) != 0
    || sub_360F08(a1) != 0
    || HIDWORD(a5) == 0 && sub_360F08(a1) != 0 )
  {
    return (unsigned __int8 *)sub_354940((_DWORD *)v9, v12);
  }
  if ( *(_BYTE *)(a1 + 455) == 0 )
  {
    v13 = *(_BYTE **)(*(_DWORD *)(v9 + 16) + 16 * v21);
    if ( sub_38382A((int *)a1) == 0 )
    {
      if ( sub_34EAFE(v9, v12, v13) != nullptr )
      {
        if ( a6 != 0 )
          sub_36E5E0((int *)a1, v21);
        else
          sub_360E94((int *)a1, (int)"table %T already exists", v25);
        return (unsigned __int8 *)sub_354940((_DWORD *)v9, v12);
      }
      if ( sub_34EB58(v9, v12, v13) == nullptr )
        goto LABEL_22;
      sub_360E94((int *)a1, (int)"there is already an index named %s", v12);
    }
    return (unsigned __int8 *)sub_354940((_DWORD *)v9, v12);
  }
LABEL_22:
  result = (unsigned __int8 *)sub_351894(v9, 0x4Cu);
  v14 = result;
  if ( result == nullptr )
  {
    *(_BYTE *)(v9 + 64) = 1;
    *(_DWORD *)(a1 + 12) = 7;
    ++*(_DWORD *)(a1 + 68);
    return (unsigned __int8 *)sub_354940((_DWORD *)v9, v12);
  }
  *((_WORD *)result + 18) = -1;
  *(_DWORD *)result = v12;
  *((_DWORD *)result + 17) = *(_DWORD *)(*(_DWORD *)(v9 + 16) + 16 * v21 + 12);
  *((_WORD *)result + 20) = 1;
  *((_DWORD *)result + 7) = 0x100000;
  *(_DWORD *)(a1 + 488) = result;
  if ( *(_BYTE *)(a1 + 18) == 0 )
  {
    result = (unsigned __int8 *)j_strcmp((const char *)v12, "sqlite_sequence");
    if ( result == nullptr )
      *(_DWORD *)(*((_DWORD *)v14 + 17) + 72) = v14;
  }
  if ( *(_BYTE *)(v9 + 137) == 0 )
  {
    result = (unsigned __int8 *)sub_35A956(a1);
    v15 = result;
    if ( result != nullptr )
    {
      sub_36E620((int *)a1, 0, v21);
      if ( HIDWORD(a5) != 0 )
        sub_35A948(v15, 140);
      v16 = *(_DWORD *)(a1 + 76);
      v17 = v16 + 1;
      *(_DWORD *)(a1 + 388) = v16 + 1;
      v18 = v16 + 2;
      *(_DWORD *)(a1 + 392) = v16 + 2;
      v19 = v16 + 3;
      v23 = v17;
      v22 = v18;
      *(_DWORD *)(a1 + 76) = v19;
      sub_35A902(v15, 50, v21, v19, 2);
      sub_34E4B0(v15, v21);
      v24 = sub_35AACE(v15, 44, v19);
      v20 = 4;
      if ( (*(_DWORD *)(v9 + 24) & 0x8000) != 0 )
        v20 = 1;
      sub_35AAF0(v15, 25, v20, v19);
      sub_35A902(v15, 51, v21, 2, v19);
      sub_35AAF0(v15, 25, *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v9 + 16) + 12) + 77), v19);
      sub_35A902(v15, 51, v21, 5, v19);
      sub_34E46E((int)v15, v24);
      if ( a5 != 0 )
        sub_35AAF0(v15, 25, 0, v22);
      else
        *(_DWORD *)(a1 + 420) = sub_35AAF0(v15, 117, v21, v22);
      sub_35A9AC(a1, v21);
      sub_35AAF0(v15, 69, 0, v23);
      sub_35AAF0(v15, 28, 0, v19);
      sub_35A902(v15, 70, 0, v19, v23);
      sub_34E458((int)v15, 8);
      return (unsigned __int8 *)sub_35A948(v15, 58);
    }
  }
  return result;
}


//======================================================================
// sub_383B28
// address: 0x00383B28   size: 0x56 (86 bytes)
//======================================================================
int **__fastcall sub_383B28(int a1, int a2, unsigned __int8 *a3, _BYTE *a4)
{
  int **result; // r0
  const char *v9; // r2

  if ( sub_38382A((int *)a1) == 0 )
  {
    result = sub_34EAFE(*(_DWORD *)a1, a3, a4);
    if ( result != nullptr )
      return result;
    if ( a2 != 0 )
      v9 = "no such view";
    else
      v9 = "no such table";
    if ( a4 != nullptr )
      sub_360E94((int *)a1, (int)"%s: %s.%s", v9, a4, (const char *)a3);
    else
      sub_360E94((int *)a1, (int)"%s: %s", v9, (const char *)a3);
    *(_BYTE *)(a1 + 17) = 1;
  }
  return nullptr;
}


//======================================================================
// sub_383B90
// address: 0x00383B90   size: 0x2C (44 bytes)
//======================================================================
int **__fastcall sub_383B90(int *a1, int a2, int a3)
{
  int v6; // r6
  _BYTE *v7; // r3

  if ( *(_DWORD *)a3 != 0 )
  {
    v6 = *a1;
    v7 = *(_BYTE **)(16 * sub_34F2A0(*a1, *(_DWORD *)a3) + *(_DWORD *)(v6 + 16));
  }
  else
  {
    v7 = *(_BYTE **)(a3 + 4);
  }
  return sub_383B28((int)a1, a2, *(unsigned __int8 **)(a3 + 8), v7);
}


//======================================================================
// sub_383BBC
// address: 0x00383BBC   size: 0x898 (2200 bytes)
//======================================================================
int __fastcall sub_383BBC(_DWORD *a1, int a2)
{
  int *v2; // r7
  int v3; // r2
  int v4; // r3
  int v5; // r0
  int i; // r2
  _DWORD *v7; // r2
  int v8; // r4
  int v9; // r0
  int *v10; // r3
  _BYTE *v11; // r6
  int j; // r4
  _DWORD *v13; // r5
  void *v14; // r0
  unsigned int v15; // r2
  _DWORD *v16; // r6
  _BYTE *v17; // r0
  int v18; // r6
  _DWORD *v19; // r1
  int k; // r3
  _DWORD *v21; // r2
  int *v22; // r1
  const char *v23; // r3
  int *v24; // r6
  _DWORD *v25; // r5
  int v26; // r3
  int v27; // r4
  int v28; // r5
  int m; // r0
  int v30; // r4
  int v31; // r3
  int n; // r3
  unsigned __int8 *v33; // r1
  int v34; // r0
  int v35; // r2
  int v36; // r3
  _DWORD *v37; // r0
  _DWORD *v38; // r4
  int *v39; // r5
  int v40; // r0
  int v42; // r5
  int v43; // r4
  int v44; // r4
  int v45; // r3
  int v46; // r1
  _DWORD *v47; // r0
  int v48; // r0
  _WORD *v49; // r6
  int v50; // r6
  _WORD *v51; // r0
  _WORD *v52; // r0
  int v53; // r0
  int v54; // r6
  void *v55; // r0
  char v56; // r3
  int *v57; // [sp+54h] [bp-50h]
  _DWORD *v58; // [sp+54h] [bp-50h]
  unsigned __int8 *v59; // [sp+54h] [bp-50h]
  int v60; // [sp+58h] [bp-4Ch]
  unsigned __int8 *v61; // [sp+58h] [bp-4Ch]
  int v62; // [sp+5Ch] [bp-48h]
  int v63; // [sp+5Ch] [bp-48h]
  _WORD *v64; // [sp+5Ch] [bp-48h]
  _DWORD *v65; // [sp+60h] [bp-44h]
  int v66; // [sp+60h] [bp-44h]
  unsigned __int8 *v67; // [sp+60h] [bp-44h]
  _DWORD *v68; // [sp+60h] [bp-44h]
  int *v69; // [sp+64h] [bp-40h]
  unsigned __int8 *v70; // [sp+64h] [bp-40h]
  unsigned __int8 *v71; // [sp+64h] [bp-40h]
  int v72; // [sp+68h] [bp-3Ch]
  _BOOL4 v73; // [sp+68h] [bp-3Ch]
  int v74; // [sp+68h] [bp-3Ch]
  int ii; // [sp+68h] [bp-3Ch]
  _DWORD *v76; // [sp+6Ch] [bp-38h]
  int v77; // [sp+6Ch] [bp-38h]
  int v78; // [sp+70h] [bp-34h]
  _DWORD *v79; // [sp+74h] [bp-30h]
  int v80; // [sp+74h] [bp-30h]
  _DWORD *v81; // [sp+74h] [bp-30h]
  _DWORD *v83; // [sp+7Ch] [bp-28h]
  unsigned __int8 *v84; // [sp+7Ch] [bp-28h]
  int v85; // [sp+80h] [bp-24h]
  int v86; // [sp+80h] [bp-24h]
  _BOOL4 v87; // [sp+84h] [bp-20h]
  int *v88; // [sp+88h] [bp-1Ch]
  _DWORD *v89; // [sp+8Ch] [bp-18h]
  int v90; // [sp+8Ch] [bp-18h]
  _DWORD *v91; // [sp+90h] [bp-14h]
  _DWORD *v92; // [sp+94h] [bp-10h]
  _DWORD v93[3]; // [sp+98h] [bp-Ch] BYREF

  v2 = (int *)a1[3];
  v76 = a1;
  v3 = *(unsigned __int16 *)(a2 + 6);
  v78 = *v2;
  v4 = 16;
  v5 = a2;
  *(_WORD *)(a2 + 6) = v3 | 0x10;
  if ( *(_BYTE *)(v78 + 64) == 0 )
  {
    v88 = *(int **)(a2 + 40);
    if ( v88 == nullptr )
      v5 = ((int (*)(void))sub_384454)();
    if ( (v3 & v4) != 0 )
      sub_384454(v5);
    v91 = *(_DWORD **)a2;
    for ( i = a2; *(_DWORD *)(i + 64) != 0; i = *(_DWORD *)(i + 64) )
      ;
    v7 = *(_DWORD **)(i + 76);
    if ( v7 != nullptr )
    {
      v7[1] = v2[134];
      v2[134] = (int)v7;
      *((_BYTE *)v2 + 453) = 0;
    }
    sub_34EEB8((int)v2, v88);
    v92 = v88 + 2;
    v60 = (int)(v88 + 7);
    v83 = nullptr;
    goto LABEL_16;
  }
  do
  {
LABEL_13:
    sub_384454(v5);
    do
    {
      if ( (*(_BYTE *)(v60 + 17) & 8) == 0 )
      {
        v69 = (int *)(v60 - 4);
        if ( *(_DWORD *)(v60 - 4) != 0 )
        {
          v9 = sub_34F4B4((int)v76, a2);
          sub_384454(v9);
        }
        v10 = (int *)v76[3];
        v57 = v10;
        v72 = *v10;
        v65 = (_DWORD *)v10[134];
        if ( *(_DWORD *)(v60 - 16) == 0 )
        {
          v11 = *(_BYTE **)(v60 - 12);
          if ( v11 != nullptr )
          {
LABEL_22:
            if ( v65 != nullptr )
            {
              for ( j = 0; ; ++j )
              {
                if ( j >= *v65 )
                {
                  v65 = (_DWORD *)v65[1];
                  goto LABEL_22;
                }
                if ( sqlite3_stricmp(v11, (unsigned __int8 *)v65[4 * j + 2]) == 0 )
                  break;
              }
              v13 = &v65[4 * j + 2];
              if ( v13[3] != 0 )
              {
                v5 = sub_360E94(v57, v13[3], *v13);
                goto LABEL_13;
              }
              v5 = (int)sub_351894(v72, 0x4Cu);
              v8 = v5;
              *v69 = v5;
              if ( v5 == 0 )
                goto LABEL_13;
              *(_WORD *)(v5 + 40) = 1;
              v14 = sub_351BC8(v72, (void *)*v13);
              *(_WORD *)(v8 + 36) = -1;
              *(_DWORD *)(v8 + 28) = 0x100000;
              *(_DWORD *)v8 = v14;
              *(_BYTE *)(v8 + 44) |= 2u;
              v5 = sub_356ABC((_DWORD *)v72, v13[2], 0);
              v62 = v5;
              *(_DWORD *)v60 = v5;
              if ( *(_BYTE *)(v72 + 64) != 0 )
                goto LABEL_13;
              v15 = (unsigned __int8)(*(_BYTE *)(v5 + 4) - 115);
              v73 = v15 <= 1;
              if ( v15 <= 1 )
              {
                v85 = 0;
                v89 = *(_DWORD **)(v5 + 40);
                v16 = v89 + 2;
                while ( v85 < *v89 )
                {
                  if ( v16[1] == 0 )
                  {
                    v17 = (_BYTE *)v16[2];
                    if ( v17 != nullptr && sqlite3_stricmp(v17, (unsigned __int8 *)*v13) == 0 )
                    {
                      v16[4] = v8;
                      *((_BYTE *)v16 + 37) |= 8u;
                      ++*(_WORD *)(v8 + 40);
                      *(_WORD *)(v62 + 6) |= 0x800u;
                    }
                  }
                  v16 += 18;
                  ++v85;
                }
              }
              if ( *(unsigned __int16 *)(v8 + 40) > 2u )
              {
                v5 = sub_360E94(v57, (int)"multiple references to recursive table: %s", *v13);
                goto LABEL_13;
              }
              v13[3] = "circular reference: %s";
              v18 = v57[134];
              v57[134] = (int)v65;
              v19 = (_DWORD *)v62;
              if ( v73 )
                v19 = *(_DWORD **)(v62 + 60);
              sub_352EFA(v76, v19);
              for ( k = v62; *(_DWORD *)(k + 60) != 0; k = *(_DWORD *)(k + 60) )
                ;
              v21 = (_DWORD *)v13[1];
              v22 = *(int **)k;
              if ( v21 != nullptr )
              {
                if ( *v22 != *v21 )
                {
                  v5 = sub_360E94(v57, (int)"table %s has %d values for %d columns", (const char *)*v13, *v22, *v21);
                  v57[134] = v18;
                  goto LABEL_13;
                }
                v22 = (int *)v13[1];
              }
              sub_365624(*v57, v22, (_WORD *)(v8 + 38), (_DWORD *)(v8 + 4));
              if ( v73 )
              {
                if ( (*(_WORD *)(v62 + 6) & 0x800) != 0 )
                  v23 = "multiple recursive references: %s";
                else
                  v23 = "recursive reference in a subquery: %s";
                v13[3] = v23;
                sub_352EFA(v76, (_DWORD *)v62);
              }
              v13[3] = 0;
              v57[134] = v18;
            }
          }
        }
        if ( *v69 == 0 )
        {
          if ( *(_DWORD *)(v60 - 12) != 0 )
          {
            v5 = (int)sub_383B90(v2, *v69, (int)v79);
            v44 = v5;
            *v69 = v5;
            if ( v5 == 0 )
              goto LABEL_13;
            v45 = *(unsigned __int16 *)(v5 + 40);
            if ( v45 == 0xFFFF )
            {
              sub_360E94(v2, (int)"too many references to \"%s\": max 65535", *(const char **)v5);
              v5 = (int)v79;
              v79[4] = 0;
              goto LABEL_13;
            }
            v46 = *(_DWORD *)(v5 + 12);
            *(_WORD *)(v5 + 40) = v45 + 1;
            if ( v46 != 0 || (*(_BYTE *)(v5 + 44) & 0x10) != 0 )
            {
              v5 = sub_365850(v2, (_DWORD *)v5);
              if ( v5 != 0 )
                goto LABEL_13;
              v47 = (_DWORD *)sub_356ABC((_DWORD *)v78, *(_DWORD *)(v44 + 12), 0);
              *(_DWORD *)v60 = v47;
              sub_352EFA(v76, v47);
            }
          }
          else
          {
            v42 = *(_DWORD *)v60;
            sub_352EFA(v76, *(_DWORD **)v60);
            v5 = (int)sub_351894(v78, 0x4Cu);
            v43 = v5;
            *v69 = v5;
            if ( v5 == 0 )
              goto LABEL_13;
            *(_WORD *)(v5 + 40) = 1;
            *(_DWORD *)v5 = sub_36541C(v78, "sqlite_sq_%p", (const void *)v5);
            while ( *(_DWORD *)(v42 + 60) != 0 )
              v42 = *(_DWORD *)(v42 + 60);
            sub_365624(*v2, *(int **)v42, (_WORD *)(v43 + 38), (_DWORD *)(v43 + 4));
            *(_WORD *)(v43 + 36) = -1;
            *(_DWORD *)(v43 + 28) = 0x100000;
            *(_BYTE *)(v43 + 44) |= 2u;
          }
        }
        v5 = sub_3610A0((int)v2, v79);
        if ( v5 != 0 )
          goto LABEL_13;
      }
      v83 = (_DWORD *)((char *)v83 + 1);
      v60 += 72;
LABEL_16:
      v5 = (int)v83;
      v79 = (_DWORD *)(v60 - 20);
    }
    while ( (int)v83 < *v88 );
  }
  while ( *(_BYTE *)(v78 + 64) != 0 );
  v60 = 1;
  v58 = *(_DWORD **)(a2 + 40);
  v83 = v58 + 2;
  v24 = v58 + 31;
  while ( v60 - 1 < *v58 - 1 )
  {
    v63 = *(v24 - 7);
    if ( v83[18 * v60 - 14] != 0 && v63 != 0 )
    {
      v26 = *((unsigned __int8 *)v24 - 8);
      v76 = (_DWORD *)((unsigned int)(v26 << 26) >> 31);
      if ( (v26 & 4) != 0 )
      {
        if ( *v24 != 0 || (v27 = v24[1]) != 0 )
        {
          v5 = sub_360E94(v2, (int)"a NATURAL join may not have an ON or USING clause");
          goto LABEL_13;
        }
        while ( v27 < *(__int16 *)(v63 + 38) )
        {
          v28 = 0;
          v67 = *(unsigned __int8 **)(24 * v27 + *(_DWORD *)(v63 + 4));
          for ( m = sub_34F2C8(v58[6], v67); m < 0; m = sub_34F2C8(v58[18 * v28 + 6], v67) )
          {
            if ( ++v28 >= v60 )
              goto LABEL_74;
          }
          sub_3612CE(v2, (int)v58, v28, m, v60, v27, (int)v76, (_DWORD **)(a2 + 44));
LABEL_74:
          ++v27;
        }
      }
      if ( *v24 != 0 )
      {
        if ( v24[1] != 0 )
        {
          v5 = sub_360E94(v2, (int)"cannot have both ON and USING clauses in the same join");
          goto LABEL_13;
        }
        if ( v76 != nullptr )
          sub_34F2F8(*v24, *(v24 - 1));
        *(_DWORD *)(a2 + 44) = sub_355378(*v2, *(_DWORD **)(a2 + 44), (_DWORD *)*v24);
        *v24 = 0;
      }
      v25 = (_DWORD *)v24[1];
      v66 = 0;
      if ( v25 != nullptr )
      {
        while ( v66 < v25[1] )
        {
          v70 = *(unsigned __int8 **)(8 * v66 + *v25);
          v74 = sub_34F2C8(v63, v70);
          if ( v74 < 0 )
          {
LABEL_89:
            v5 = sub_360E94(v2, (int)"cannot join using column %s - column not present in both tables", v70);
            goto LABEL_13;
          }
          v30 = 0;
          while ( 1 )
          {
            v31 = sub_34F2C8(v58[18 * v30 + 6], v70);
            if ( v31 >= 0 )
              break;
            if ( ++v30 >= v60 )
              goto LABEL_89;
          }
          sub_3612CE(v2, (int)v58, v30, v31, v60, v74, (int)v76, (_DWORD **)(a2 + 44));
          ++v66;
        }
      }
    }
    v24 += 18;
    ++v60;
  }
  for ( n = 0; n < *v91; ++n )
  {
    v33 = *(unsigned __int8 **)(20 * n + v91[2]);
    v34 = *v33;
    if ( v34 == 116 || v34 == 122 && **((_BYTE **)v33 + 4) == 116 )
    {
      v38 = nullptr;
      v39 = (int *)v91[2];
      v90 = 0;
      v87 = (*(_DWORD *)(*v2 + 24) & 0x60) == 32;
LABEL_102:
      if ( v90 >= *v91 )
      {
        sub_3551E8((_DWORD *)v78, v91);
        *(_DWORD *)a2 = v38;
        break;
      }
      v35 = *v39;
      v36 = *(unsigned __int8 *)*v39;
      if ( v36 == 116 )
      {
        v61 = nullptr;
LABEL_127:
        v80 = 0;
        v68 = v92;
        for ( ii = 0; ii < *v88; ++ii )
        {
          v86 = v68[4];
          v64 = (_WORD *)v68[5];
          v71 = (unsigned __int8 *)v68[3];
          if ( v71 == nullptr )
            v71 = *(unsigned __int8 **)v68[4];
          if ( *(_BYTE *)(v78 + 64) != 0 )
            break;
          if ( v64 != nullptr && (v64[3] & 0x200) != 0 )
          {
            v84 = (unsigned __int8 *)*(unsigned __int8 *)(v78 + 64);
            goto LABEL_143;
          }
          if ( v61 == nullptr || sqlite3_stricmp(v61, v71) == 0 )
          {
            v48 = sub_34F2A0(v78, *(_DWORD *)(v86 + 68));
            v64 = nullptr;
            if ( v48 >= 0 )
              v84 = *(unsigned __int8 **)(16 * v48 + *(_DWORD *)(v78 + 16));
            else
              v84 = "*";
LABEL_143:
            v77 = 0;
            while ( 2 )
            {
              if ( v77 >= *(__int16 *)(v86 + 38) )
                goto LABEL_178;
              v59 = *(unsigned __int8 **)(*(_DWORD *)(v86 + 4) + 24 * v77);
              if ( v61 != nullptr
                && v64 != nullptr
                && !sub_34E81E(*(_BYTE **)(*(_DWORD *)(*(_DWORD *)v64 + 8) + 20 * v77 + 8), nullptr, v61, nullptr)
                || (*(_BYTE *)(*(_DWORD *)(v86 + 4) + 24 * v77 + 23) & 2) != 0 )
              {
                goto LABEL_177;
              }
              if ( ii > 0 && v61 == nullptr )
              {
                if ( (v68[9] & 4) != 0 )
                {
                  v50 = 0;
                  while ( sub_34F2C8(v88[18 * v50 + 6], v59) < 0 )
                  {
                    if ( ++v50 == ii )
                      goto LABEL_156;
                  }
                }
                else
                {
LABEL_156:
                  if ( sub_34EE88((_DWORD *)v68[12], v59) < 0 )
                    break;
                }
LABEL_176:
                v80 = 1;
LABEL_177:
                ++v77;
                continue;
              }
              break;
            }
            v49 = sub_351B26(v78, 27, v59);
            if ( v87 || *v88 > 1 )
            {
              v51 = sub_351B26(v78, 27, v71);
              v49 = sub_361286(v2, 122, v51, v49, nullptr);
              if ( v84 != nullptr )
              {
                v52 = sub_351B26(v78, 27, v84);
                v49 = sub_361286(v2, 122, v52, v49, nullptr);
              }
              v81 = nullptr;
              if ( v87 )
              {
                v53 = sub_36541C(v78, "%s.%s", (const char *)v71, (const char *)v59);
                v59 = (unsigned __int8 *)v53;
                goto LABEL_168;
              }
            }
            else
            {
              v53 = 0;
LABEL_168:
              v81 = (_DWORD *)v53;
            }
            v38 = sub_35B684((_DWORD *)*v2, v38, (int)v49);
            v93[0] = v59;
            v93[1] = sub_34CF50((unsigned int)v59);
            sub_354070(v2, v38, (int)v93, 0);
            if ( v38 != nullptr && (*(_WORD *)(a2 + 6) & 0x200) != 0 )
            {
              v54 = v38[2] + 20 * *v38 - 20;
              if ( v64 != nullptr )
                v55 = sub_351BC8(v78, *(void **)(*(_DWORD *)(*(_DWORD *)v64 + 8) + 20 * v77 + 8));
              else
                v55 = (void *)sub_36541C(v78, "%s.%s.%s", (const char *)v84, (const char *)v71, (const char *)v59);
              v56 = *(_BYTE *)(v54 + 13);
              *(_DWORD *)(v54 + 8) = v55;
              *(_BYTE *)(v54 + 13) = v56 | 2;
            }
            sub_354940((_DWORD *)v78, v81);
            goto LABEL_176;
          }
LABEL_178:
          v68 += 18;
        }
        if ( v80 == 0 )
        {
          if ( v61 != nullptr )
            sub_360E94(v2, (int)"no such table: %s", (const char *)v61);
          else
            sub_360E94(v2, (int)"no tables specified");
        }
      }
      else
      {
        if ( v36 == 122 && **(_BYTE **)(*v39 + 16) == 116 )
        {
          v61 = *(unsigned __int8 **)(*(_DWORD *)(v35 + 12) + 8);
          goto LABEL_127;
        }
        v37 = sub_35B684((_DWORD *)*v2, v38, v35);
        v38 = v37;
        if ( v37 != nullptr )
        {
          *(_DWORD *)(v37[2] + 20 * *v37 - 16) = v39[1];
          *(_DWORD *)(v37[2] + 20 * *v37 - 12) = v39[2];
          v39[1] = 0;
          v39[2] = 0;
        }
        *v39 = 0;
      }
      v39 += 5;
      ++v90;
      goto LABEL_102;
    }
  }
  v40 = a2;
  if ( *(_DWORD *)a2 != 0 && **(_DWORD **)a2 > *(_DWORD *)(v78 + 96) )
    v40 = sub_360E94(v2, (int)"too many columns in result set");
  return sub_384454(v40);
}


//======================================================================
// sub_384454
// address: 0x00384454   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_384454(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_384468
// address: 0x00384468   size: 0x3C (60 bytes)
//======================================================================
int **__fastcall sub_384468(int *a1, int a2)
{
  _DWORD *v2; // r7
  int **v5; // r0
  __int64 v6; // r0
  int **v7; // r4

  v2 = (_DWORD *)(a2 + 8);
  v5 = sub_383B90(a1, 0, a2 + 8);
  HIDWORD(v6) = *(_DWORD *)(a2 + 24);
  v7 = v5;
  LODWORD(v6) = *a1;
  sub_354F8A(v6);
  *(_DWORD *)(a2 + 24) = v7;
  if ( v7 != nullptr )
    ++*((_WORD *)v7 + 20);
  return sub_3610A0((int)a1, v2) == 0 ? v7 : nullptr;
}


//======================================================================
// sub_3844A4
// address: 0x003844A4   size: 0x2F8 (760 bytes)
//======================================================================
int __fastcall sub_3844A4(int a1, unsigned int *a2, int a3, int a4, int a5, int a6)
{
  int v6; // r7
  int result; // r0
  int v9; // r6
  int v10; // r4
  int v11; // r3
  int v12; // r4
  int v13; // r2
  int j; // r4
  int *v15; // r0
  int *v16; // r6
  int *v17; // r3
  int v18; // r3
  _DWORD *v19; // [sp+28h] [bp-3Ch]
  _DWORD *v20; // [sp+28h] [bp-3Ch]
  int v21; // [sp+2Ch] [bp-38h]
  int i; // [sp+2Ch] [bp-38h]
  _BOOL4 v24; // [sp+34h] [bp-30h]
  int v25; // [sp+38h] [bp-2Ch]
  _DWORD *v27; // [sp+40h] [bp-24h]
  int v29; // [sp+48h] [bp-1Ch]
  _BYTE *v30; // [sp+4Ch] [bp-18h]
  int v31; // [sp+54h] [bp-10h] BYREF
  _DWORD *v32; // [sp+58h] [bp-Ch] BYREF
  _DWORD *v33[2]; // [sp+5Ch] [bp-8h] BYREF

  v6 = *(_DWORD *)a1;
  result = *(unsigned __int8 *)(a1 + 442);
  v29 = result;
  if ( (*(_DWORD *)(v6 + 24) & 0x80000) != 0 )
  {
    v25 = sub_34F2A0(v6, a2[17]);
    v9 = a2[4];
    v30 = *(_BYTE **)(16 * v25 + *(_DWORD *)(v6 + 16));
    while ( v9 != 0 )
    {
      v10 = 0;
      v31 = 0;
      v32 = nullptr;
      if ( a5 != 0 && sqlite3_stricmp((_BYTE *)*a2, *(unsigned __int8 **)(v9 + 8)) != 0 )
      {
        while ( v10 < *(_DWORD *)(v9 + 20) )
        {
          v11 = *(_DWORD *)(v9 + 8 * v10 + 36);
          if ( *(int *)(4 * v11 + a5) >= 0 || v11 == *((__int16 *)a2 + 18) && a6 != 0 )
            goto LABEL_12;
          ++v10;
        }
      }
      else
      {
LABEL_12:
        if ( *(_BYTE *)(a1 + 442) != 0 )
          result = (int)sub_34EAFE(v6, *(unsigned __int8 **)(v9 + 8), v30);
        else
          result = (int)sub_383B28(a1, *(unsigned __int8 *)(a1 + 442), *(unsigned __int8 **)(v9 + 8), v30);
        v12 = result;
        if ( result == 0 || (result = sub_3619B4((int *)a1, result, v9, &v31, (int *)&v32)) != 0 )
        {
          if ( v29 == 0 || *(_BYTE *)(v6 + 64) != 0 )
            return result;
          if ( v12 == 0 )
          {
            v19 = sub_35A956(a1);
            v21 = v19[8] + *(_DWORD *)(v9 + 20) + 1;
            while ( v12 < *(_DWORD *)(v9 + 20) )
              sub_35AAF0(v19, 76, a3 + *(_DWORD *)(v9 + 8 * v12++ + 36) + 1, v21);
            sub_35AAF0(v19, 129, *(unsigned __int8 *)(v9 + 24), -1);
          }
        }
        else
        {
          v20 = v32;
          if ( v32 == nullptr )
          {
            v20 = v33;
            v33[0] = *(_DWORD **)(v9 + 36);
          }
          v24 = false;
          v27 = v20;
          for ( i = 0; i < *(_DWORD *)(v9 + 20); ++i )
          {
            if ( *v27 == *((__int16 *)a2 + 18) )
              *v27 = -1;
            if ( *(_DWORD *)(v6 + 276) != 0 )
            {
              if ( v31 != 0 )
                v13 = *(__int16 *)(2 * i + *(_DWORD *)(v31 + 4));
              else
                v13 = *(__int16 *)(v12 + 36);
              v24 = sub_3643C8((int *)a1, *(const char **)v12, *(const char **)(*(_DWORD *)(v12 + 4) + 24 * v13), v25) == 2;
            }
            ++v27;
          }
          sub_35A7C8(a1, v25, *(unsigned int *)(v12 + 32), *(_DWORD *)v12);
          ++*(_DWORD *)(a1 + 72);
          if ( a3 != 0 )
            sub_361F88(a1, v25, v12, v31, v9, v20, a3, -1, v24);
          if ( a4 != 0 )
            sub_361F88(a1, v25, v12, v31, v9, v20, a4, 1, v24);
          sub_354940((_DWORD *)v6, v32);
        }
      }
      v9 = *(_DWORD *)(v9 + 4);
    }
    result = (int)sub_34F1D0(a2);
    for ( j = result; j != 0; j = *(_DWORD *)(j + 12) )
    {
      v32 = nullptr;
      v33[0] = nullptr;
      if ( a5 != 0 )
      {
        result = sub_34F1EA((int)a2, j, a5, a6);
        if ( result == 0 )
          continue;
      }
      if ( *(_BYTE *)(j + 24) != 0
        || (*(_DWORD *)(v6 + 24) & 0x1000000) != 0
        || *(_DWORD *)(a1 + 412) != 0
        || *(_BYTE *)(a1 + 22) != 0 )
      {
        if ( sub_3619B4((int *)a1, (int)a2, j, &v32, (int *)v33) != 0 )
        {
          result = v29;
          if ( v29 == 0 || *(_BYTE *)(v6 + 64) != 0 )
            return result;
        }
        else
        {
          v15 = sub_35B348(v6, nullptr, 0, nullptr);
          v16 = v15;
          if ( v15 != nullptr )
          {
            v17 = *(int **)j;
            v15[6] = *(_DWORD *)j;
            v15[4] = **(_DWORD **)j;
            ++*((_WORD *)v17 + 20);
            v18 = *(_DWORD *)(a1 + 72);
            *(_DWORD *)(a1 + 72) = v18 + 1;
            v15[12] = v18;
            if ( a4 != 0 )
              sub_374B6C((int *)a1, v15, (int)a2, (int)v32, j, (int)v33[0], a4, -1);
            if ( a3 != 0 )
              sub_374B6C((int *)a1, v16, (int)a2, (int)v32, j, (int)v33[0], a3, 1);
            v16[4] = 0;
            sub_3550CC((_DWORD *)v6, v16);
          }
          result = (int)sub_354940((_DWORD *)v6, v33[0]);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_38479C
// address: 0x0038479C   size: 0xC36 (3126 bytes)
//======================================================================
int __fastcall sub_38479C(int *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v6; // r6
  _DWORD *v7; // r0
  int **v8; // r0
  int v9; // r7
  int v10; // r6
  int v11; // r5
  int v12; // r0
  int v13; // r3
  int v14; // r6
  int v15; // r6
  int v16; // r0
  int i; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r3
  int v22; // r2
  int j; // r1
  int v24; // r1
  int v25; // r5
  int *v26; // r0
  int *v27; // r5
  _WORD *v28; // r0
  _DWORD *v29; // r6
  _DWORD *v30; // r0
  int k; // r5
  int v32; // r3
  void *v33; // r0
  _BYTE *v34; // r0
  int v35; // r6
  char *m; // r2
  char *v37; // r5
  char v38; // r1
  _DWORD *v39; // r0
  _DWORD *v40; // r0
  int v41; // r6
  unsigned int **v43; // r6
  _DWORD *v44; // r1
  int v45; // r2
  int v46; // r3
  _DWORD *v47; // r0
  int n; // r3
  int v49; // r2
  int v50; // r6
  int ii; // r6
  int v52; // r6
  int *v53; // r0
  int v54; // r3
  __int64 v55; // r0
  int jj; // r6
  unsigned int v57; // r6
  int v58; // r0
  int *v59; // r0
  char v60; // r1
  int v61; // r2
  int v62; // r3
  int v63; // r6
  int v64; // r7
  int v65; // [sp+58h] [bp-CCh]
  char *v66; // [sp+58h] [bp-CCh]
  int v67; // [sp+58h] [bp-CCh]
  int v68; // [sp+5Ch] [bp-C8h]
  int *v69; // [sp+5Ch] [bp-C8h]
  _DWORD *v70; // [sp+60h] [bp-C4h]
  int v71; // [sp+60h] [bp-C4h]
  int v72; // [sp+60h] [bp-C4h]
  _DWORD *v73; // [sp+64h] [bp-C0h]
  _BOOL4 v74; // [sp+64h] [bp-C0h]
  int v75; // [sp+64h] [bp-C0h]
  unsigned int v76; // [sp+64h] [bp-C0h]
  char v77; // [sp+68h] [bp-BCh]
  _DWORD *v78; // [sp+68h] [bp-BCh]
  int v79; // [sp+68h] [bp-BCh]
  int v80; // [sp+6Ch] [bp-B8h]
  _DWORD *v81; // [sp+6Ch] [bp-B8h]
  int v82; // [sp+70h] [bp-B4h]
  _DWORD *v83; // [sp+70h] [bp-B4h]
  int v84; // [sp+74h] [bp-B0h]
  unsigned int v85; // [sp+74h] [bp-B0h]
  int v87; // [sp+7Ch] [bp-A8h]
  unsigned int **v88; // [sp+80h] [bp-A4h]
  int v89; // [sp+80h] [bp-A4h]
  int v90; // [sp+84h] [bp-A0h]
  int v91; // [sp+88h] [bp-9Ch]
  char *v92; // [sp+8Ch] [bp-98h]
  int v94; // [sp+94h] [bp-90h]
  int v95; // [sp+98h] [bp-8Ch]
  _DWORD *v96; // [sp+9Ch] [bp-88h]
  int v97; // [sp+9Ch] [bp-88h]
  int v98; // [sp+A0h] [bp-84h]
  int v99; // [sp+A4h] [bp-80h]
  int v101; // [sp+ACh] [bp-78h]
  int v102; // [sp+B0h] [bp-74h]
  unsigned int v103; // [sp+B0h] [bp-74h]
  char *v104; // [sp+B4h] [bp-70h]
  int v105; // [sp+B8h] [bp-6Ch]
  int v106; // [sp+BCh] [bp-68h]
  int v107; // [sp+C0h] [bp-64h]
  _BOOL4 v108; // [sp+C0h] [bp-64h]
  size_t v109; // [sp+C4h] [bp-60h]
  size_t v110; // [sp+C4h] [bp-60h]
  _DWORD *v111; // [sp+C8h] [bp-5Ch]
  int v112; // [sp+CCh] [bp-58h]
  _DWORD *v113; // [sp+D0h] [bp-54h]
  int v114; // [sp+D4h] [bp-50h]
  int v115; // [sp+DCh] [bp-48h] BYREF
  unsigned int v116; // [sp+E0h] [bp-44h] BYREF
  _DWORD *v117; // [sp+E4h] [bp-40h]
  int *v118; // [sp+E8h] [bp-3Ch]
  __int64 v119; // [sp+ECh] [bp-38h] BYREF
  int v120; // [sp+F4h] [bp-30h]
  int v121; // [sp+F8h] [bp-2Ch]
  _DWORD v122[9]; // [sp+100h] [bp-24h] BYREF

  v6 = *a1;
  v7 = (_DWORD *)a1[17];
  v117 = nullptr;
  v118 = nullptr;
  v91 = v6;
  if ( v7 == nullptr )
    goto LABEL_3;
  while ( 1 )
  {
    ((void (*)(void))sub_3853D2)();
LABEL_3:
    if ( *(_BYTE *)(v91 + 64) == 0 )
    {
      v8 = sub_384468(a1, (int)a2);
      v9 = (int)v8;
      if ( v8 != nullptr )
      {
        v77 = sub_34F2A0(*a1, (int)v8[17]);
        v106 = sub_34F560((unsigned __int8 *)a1, v9, 110, a3, &v115);
        v107 = *(_DWORD *)(v9 + 12);
        if ( sub_365850(a1, (_DWORD *)v9) == 0 && sub_361950((int)a1, (_DWORD *)v9, v115) == 0 )
        {
          v98 = a1[18];
          a1[18] = v98 + 1;
          v99 = v98 + 1;
          v80 = 0;
          a2[12] = v98;
          if ( (*(_BYTE *)(v9 + 44) & 0x20) != 0 )
            v80 = sub_35344C(*(_DWORD *)(v9 + 8));
          v10 = *(_DWORD *)(v9 + 8);
          v11 = 0;
          v68 = v98;
          while ( v10 != 0 )
          {
            if ( (*(_BYTE *)(v10 + 55) & 3) == 2 && v80 != 0 )
            {
              v68 = a1[18];
              a2[12] = v68;
            }
            ++v11;
            ++a1[18];
            v10 = *(_DWORD *)(v10 + 20);
          }
          v12 = sub_3516AC(v91, v11 + 2 + 4 * (*(__int16 *)(v9 + 38) + v11));
          v87 = v12;
          if ( v12 != 0 )
            break;
        }
      }
    }
  }
  v111 = (_DWORD *)(v12 + 4 * *(__int16 *)(v9 + 38));
  v92 = (char *)&v111[v11];
  v109 = v11 + 1;
  j_memset(v92, 1, v11 + 1);
  v92[v11 + 1] = 0;
  while ( v10 < *(__int16 *)(v9 + 38) )
  {
    v13 = 4 * v10++;
    *(_DWORD *)(v87 + v13) = -1;
  }
  j_memset(v122, 0, 0x20u);
  v122[0] = a1;
  v122[1] = a2;
  v14 = 0;
  v73 = nullptr;
  v101 = 0;
  v102 = 0;
  while ( 1 )
  {
    v65 = v14;
    if ( v14 >= *a3 )
      break;
    v15 = 20 * v14;
    v16 = sub_361108((int)v122, *(_DWORD **)(a3[2] + 20 * v65));
    if ( v16 != 0 )
      v16 = sub_3853D2(v16);
    for ( i = v16; i < *(__int16 *)(v9 + 38); ++i )
    {
      if ( sqlite3_stricmp(*(_BYTE **)(*(_DWORD *)(v9 + 4) + 24 * i), *(unsigned __int8 **)(a3[2] + v15 + 4)) == 0 )
      {
        if ( i == *(__int16 *)(v9 + 36) )
        {
          v101 = 1;
          v73 = *(_DWORD **)(a3[2] + v15);
        }
        else if ( v80 != 0 && (*(_BYTE *)(*(_DWORD *)(v9 + 4) + 24 * i + 23) & 1) != 0 )
        {
          v102 = 1;
        }
        *(_DWORD *)(4 * i + v87) = v65;
        break;
      }
    }
    if ( i >= *(__int16 *)(v9 + 38) )
    {
      if ( v80 != 0 || !sub_353270(*(_BYTE **)(a3[2] + v15 + 4)) )
      {
        v18 = sub_360E94(a1, (int)"no such column: %s", (const char *)*(_DWORD *)(a3[2] + v15 + 4));
        *((_BYTE *)a1 + 17) = 1;
        sub_3853D2(v18);
      }
      else
      {
        v73 = *(_DWORD **)(a3[2] + v15);
        v101 = 1;
        i = -1;
      }
    }
    v19 = sub_360F08((int)a1);
    if ( v19 == 1 )
      v19 = sub_3853D2(1);
    if ( v19 == 2 )
      *(_DWORD *)(4 * i + v87) = -1;
    v14 = v65 + 1;
  }
  v82 = v102 + v101;
  a2[16] = 0;
  a2[17] = 0;
  v20 = sub_357D14(*a1, v9, v87, v102 + v101);
  v21 = *(_DWORD *)(v9 + 8);
  v22 = 0;
  v84 = v20;
  while ( v21 != 0 )
  {
    if ( v82 != 0 || v20 != 0 || *(_DWORD *)(v21 + 36) != 0 || v21 == v80 )
    {
LABEL_50:
      v24 = a1[19] + 1;
      a1[19] = v24;
      if ( v24 != 0 )
        goto LABEL_56;
    }
    else
    {
      for ( j = 0; j < *(unsigned __int16 *)(v21 + 50); ++j )
      {
        if ( *(int *)(4 * *(__int16 *)(2 * j + *(_DWORD *)(v21 + 4)) + v87) >= 0 )
          goto LABEL_50;
      }
    }
    v92[v22 + 1] = 0;
    v24 = 0;
LABEL_56:
    v25 = v22++;
    v111[v25] = v24;
    v21 = *(_DWORD *)(v21 + 20);
  }
  v26 = sub_35A956((int)a1);
  v27 = v26;
  if ( v26 == nullptr )
    v26 = (int *)sub_3853D2(0);
  if ( *((_BYTE *)a1 + 18) == 0 )
    *((_BYTE *)v26 + 88) |= 0x10u;
  sub_36E620(a1, 1, v77);
  if ( (*(_BYTE *)(v9 + 44) & 0x10) != 0 )
  {
    v69 = (int *)a1[2];
    v81 = (_DWORD *)*a1;
    v70 = sub_353624(*a1, *(_DWORD **)(v9 + 60));
    v28 = sub_351B26((int)v81, 27, "_rowid_");
    v29 = sub_35B684((_DWORD *)*a1, nullptr, (int)v28);
    if ( v73 != nullptr )
    {
      v30 = sub_3568BC((int)v81, v73, 0);
      v29 = sub_35B684((_DWORD *)*a1, v29, (int)v30);
    }
    for ( k = 0; k < *(__int16 *)(v9 + 38); ++k )
    {
      v32 = *(_DWORD *)(v87 + 4 * k);
      if ( v32 < 0 )
        v33 = sub_351B26((int)v81, 27, *(unsigned __int8 **)(24 * k + *(_DWORD *)(v9 + 4)));
      else
        v33 = sub_3568BC((int)v81, *(_DWORD **)(20 * v32 + a3[2]), 0);
      v29 = sub_35B684((_DWORD *)*a1, v29, (int)v33);
    }
    v34 = sub_35B784(a1, v29, a2, (int)a4, 0, 0, 0, 0, 0, 0);
    v35 = a1[18];
    v83 = v34;
    a1[18] = v35 + 1;
    v74 = v73 != nullptr;
    sub_35AAF0(v69, 55, v35, *(__int16 *)(v9 + 38) + 1 + v74);
    sub_34E458((int)v69, 8);
    LOWORD(v119) = 10;
    HIDWORD(v119) = v35;
    v120 = 0;
    v121 = 0;
    sub_370488(a1, (int)v83, (unsigned __int8 *)&v119);
    v66 = (char *)a1[19];
    a1[19] = (int)(v66 + 1);
    a1[19] = (int)&v66[*(__int16 *)(v9 + 38) + 2];
    v85 = sub_35AAF0(v69, 105, v35, 0);
    sub_35A902(v69, 46, v35, 0, (int)(v66 + 1));
    sub_35A902(v69, 46, v35, v74, (int)(v66 + 2));
    for ( m = v66; ; m = v37 )
    {
      v37 = m + 1;
      if ( m - v66 >= *(__int16 *)(v9 + 38) )
        break;
      sub_35A902(v69, 46, v35, (int)&v37[v74 - (_DWORD)v66], (int)(m + 3));
    }
    sub_375E6C(a1, v9);
    sub_35A9FC(v69, 15, 0, *(__int16 *)(v9 + 38) + 2, (int)(v66 + 1), v70, -10);
    if ( a5 == 10 )
      v38 = 2;
    else
      v38 = a5;
    sub_34E458((int)v69, v38);
    sub_34EEF2((int)a1);
    sub_35AAF0(v69, 9, v35, v85 + 1);
    sub_34E46E((int)v69, v85);
    sub_35AAF0(v69, 58, v35, 0);
    v39 = sub_355184(v81, v83);
    return sub_3853D2(v39);
  }
  v78 = (_DWORD *)a1[19];
  v67 = (int)v78 + 2;
  a1[19] = (int)v78 + 2;
  if ( v102 != 0 || v106 != 0 || v84 != 0 )
  {
    v104 = (char *)v78 + 3;
    a1[19] = v67 + *(__int16 *)(v9 + 38);
    if ( v82 != 0 || v106 != 0 || (v95 = (int)v78 + 2, v84 != 0) )
    {
LABEL_88:
      v95 = a1[19] + 1;
      a1[19] = v95;
    }
  }
  else
  {
    if ( v82 != 0 )
    {
      v104 = nullptr;
      goto LABEL_88;
    }
    v95 = (int)v78 + 2;
    v104 = nullptr;
  }
  v108 = v107 != 0;
  v113 = (_DWORD *)a1[19];
  a1[19] = (int)v113 + *(__int16 *)(v9 + 38);
  if ( v108 )
  {
    v40 = (_DWORD *)a1[124];
    a1[124] = *(_DWORD *)v9;
    v117 = v40;
    v118 = a1;
    sub_374ADC(a1, v9, a4, v68);
  }
  v39 = (_DWORD *)sub_361108((int)v122, a4);
  v41 = (int)v39;
  if ( v39 == nullptr )
  {
    v112 = (int)v78 + 1;
    if ( (*(_BYTE *)(v9 + 44) & 0x20) != 0 )
    {
      v96 = (_DWORD *)a1[19];
      v79 = (int)v96 + 1;
      v90 = *(__int16 *)(v80 + 50);
      v44 = (_DWORD *)a1[18];
      v71 = (int)v96 + v90 + 1;
      a1[19] = v71;
      v105 = (int)v44;
      a1[18] = (int)v44 + 1;
      sub_35AAF0(v27, 28, 0, (int)v96 + 1);
      v114 = sub_35AAF0(v27, 55, v105, v90);
      sub_361E0C(a1, v80);
      v39 = (_DWORD *)sub_36EAB8(a1, a2, a4, 0, nullptr, 4);
      v88 = (unsigned int **)v39;
      if ( v39 == nullptr )
        return sub_3853D2(v39);
      v119 = *(_QWORD *)(v39 + 15);
      v94 = *((unsigned __int8 *)v39 + 37);
      while ( v41 < v90 )
      {
        v45 = (int)v96 + v41 + 1;
        v46 = 2 * v41++;
        sub_36607C(v27, v9, v68, *(__int16 *)(v46 + *(_DWORD *)(v80 + 4)), v45);
      }
      if ( v94 != 0 )
      {
        sub_355A84(v27, v114);
      }
      else
      {
        v47 = (_DWORD *)sub_3517DE(v27, v80);
        sub_35A9FC(v27, 48, v79, v90, v71, v47, v90);
        sub_35AAF0(v27, 107, v105, v71);
        v79 = (int)v96 + v90 + 1;
        v90 = 0;
      }
      sub_35AF20(v88);
    }
    else
    {
      sub_35A902(v27, 28, 0, v112, v67);
      v39 = (_DWORD *)sub_36EAB8(a1, a2, a4, 0, nullptr, 4);
      v43 = (unsigned int **)v39;
      if ( v39 == nullptr )
        return sub_3853D2(v39);
      v119 = *(_QWORD *)(v39 + 15);
      v94 = *((unsigned __int8 *)v39 + 37);
      sub_35AAF0(v27, 100, v68, v67);
      if ( v94 == 0 )
        sub_35AAF0(v27, 124, v112, v67);
      sub_35AF20(v43);
      v79 = 0;
      v90 = 0;
      v105 = 0;
    }
    v97 = 0;
    if ( (*(_DWORD *)(v91 + 24) & 0x80) != 0 && a1[104] == 0 )
    {
      v97 = a1[19] + 1;
      a1[19] = v97;
      sub_35AAF0(v27, 25, 0, v97);
    }
    v89 = sub_35A856(v27[6]);
    if ( !v108 )
    {
      if ( a5 == 5 )
      {
LABEL_112:
        j_memset(v92, 1, v109);
      }
      else
      {
        for ( n = *(_DWORD *)(v9 + 8); n != 0; n = *(_DWORD *)(n + 20) )
        {
          if ( *(_BYTE *)(n + 54) == 5 )
            goto LABEL_112;
        }
      }
      if ( v94 != 0 )
      {
        if ( (int)v119 >= 0 )
          v92[(_DWORD)v119 - v98] = 0;
        if ( v119 >= 0 )
          v92[HIDWORD(v119) - v98] = 0;
      }
      sub_361E90(a1, v9, 53, v98, v92, nullptr, nullptr);
    }
    if ( v94 != 0 )
    {
      if ( v92[v68 - v98] != 0 )
        sub_35A98A(v27, 65, v68, v89, v79, (_DWORD *)v90);
      if ( v80 != 0 )
        v49 = v79;
      else
        v49 = v67;
      sub_35AAF0(v27, 76, v49, v89);
      v72 = v89;
LABEL_132:
      v110 = 0;
    }
    else
    {
      if ( v80 == 0 )
      {
        v72 = sub_35A902(v27, 125, v112, v89, v67);
        sub_35A902(v27, 67, v68, v72, v67);
        goto LABEL_132;
      }
      v72 = sub_35A856(v27[6]);
      sub_35AAF0(v27, 105, v105, v89);
      v110 = sub_35AAF0(v27, 98, v105, v79);
      sub_35A98A(v27, 65, v68, v72, v79, nullptr);
    }
    if ( v101 != 0 )
    {
      sub_372DE4(__SPAIR64__((unsigned int)v73, (unsigned int)a1), v95);
      sub_35AACE(v27, 38, v95);
    }
    if ( v102 != 0 )
    {
      v50 = 0;
      if ( v84 != 0 )
        goto LABEL_140;
    }
    else
    {
      v50 = v84;
      if ( v84 == 0 )
      {
        if ( v106 == 0 )
          goto LABEL_154;
        goto LABEL_142;
      }
LABEL_140:
      v50 = 0;
      if ( (*(_DWORD *)(*a1 + 24) & 0x80000) != 0 )
        v50 = sub_361B1C(a1, (unsigned int *)v9);
    }
LABEL_142:
    v75 = sub_385710(a1, v106, a3, 0, 3, v9, a5) | v50;
    for ( ii = 0; ii < *(__int16 *)(v9 + 38); ++ii )
    {
      if ( v75 == -1 || ii <= 31 && (v75 & (1 << ii)) != 0 || (*(_BYTE *)(*(_DWORD *)(v9 + 4) + 24 * ii + 23) & 1) != 0 )
        sub_36607C(v27, v9, v68, ii, (int)&v104[ii]);
      else
        sub_35AAF0(v27, 28, 0, (int)&v104[ii]);
    }
    if ( v101 == 0 && v80 == 0 )
      sub_35AAF0(v27, 33, v67, v95);
LABEL_154:
    v103 = sub_385710(a1, v106, a3, 1, 1, v9, a5);
    v76 = (unsigned int)v113 + 1;
    v52 = 0;
    while ( 2 )
    {
      if ( v52 >= *(__int16 *)(v9 + 38) )
      {
        if ( (v115 & 1) != 0 )
        {
          sub_13A94A(v27, v9, (int)v113 + 1);
          sub_385BCC(a1, v106, 110, a3, 1, v9, v67, a5, v72);
          if ( v80 != 0 )
            sub_35A98A(v27, 65, v68, v72, v79, (_DWORD *)v90);
          else
            sub_35A902(v27, 67, v68, v72, v67);
          for ( jj = 0; jj < *(__int16 *)(v9 + 38); ++jj )
          {
            if ( *(int *)(v87 + 4 * jj) < 0 && jj != *(__int16 *)(v9 + 36) )
              sub_36607C(v27, v9, v68, jj, (int)v113 + jj + 1);
          }
        }
        if ( !v108 )
        {
          v116 = 0;
          sub_13B160(a1, v9, v111, v68, v99, v95, v67, v82, a5, v72, (int *)&v116);
          if ( v84 != 0 )
            sub_3844A4((int)a1, (unsigned int *)v9, v67, 0, v87, v82);
          v57 = v116;
          if ( v116 != 0 || v82 != 0 )
          {
            if ( v80 != 0 )
              v58 = sub_35A98A(v27, 65, v68, 0, v79, (_DWORD *)v90);
            else
              v58 = sub_35A902(v27, 67, v68, 0, v67);
            v57 = v58;
          }
          sub_373D30((int)a1, v9, v68, v99, v111);
          if ( v84 != 0 || v82 != 0 || v80 != 0 )
            sub_35AAF0(v27, 74, v68, 0);
          if ( v116 != 0 || v82 != 0 )
            sub_34E46E((int)v27, v57);
          if ( v84 != 0 )
            sub_3844A4((int)a1, (unsigned int *)v9, 0, v95, v87, v82);
          sub_13AC6A((int)a1, v9, v68, v99, v95, v111, 1, 0, 0);
          if ( v84 != 0 && (*(_DWORD *)(*a1 + 24) & 0x80000) != 0 )
            sub_3857D0(a1, v9, a3, v67, v87, v82);
        }
        if ( (*(_DWORD *)(v91 + 24) & 0x80) != 0 && a1[104] == 0 )
          sub_35AAF0(v27, 37, v97, 1);
        sub_385BCC(a1, v106, 110, a3, 2, v9, v67, a5, v72);
        if ( v94 == 0 )
        {
          v59 = v27;
          if ( v80 != 0 )
          {
            sub_34E412((int)v27, v72);
            v59 = v27;
            v60 = 9;
            v61 = v105;
            v62 = v110;
          }
          else
          {
            v61 = 0;
            v62 = v72;
            v60 = 16;
          }
          sub_35AAF0(v59, v60, v61, v62);
        }
        v39 = (_DWORD *)sub_34E412((int)v27, v89);
        v63 = *(_DWORD *)(v9 + 8);
        v64 = v98 + 1;
        while ( v63 != 0 )
        {
          v39 = v92;
          if ( v92[v64 - v98] != 0 )
            v39 = (_DWORD *)sub_35AAF0(v27, 58, v64, 0);
          v63 = *(_DWORD *)(v63 + 20);
          ++v64;
        }
        if ( v68 < v99 )
          v39 = (_DWORD *)sub_35AAF0(v27, 58, v68, 0);
        if ( *((_BYTE *)a1 + 18) == 0 && a1[104] == 0 )
          v39 = sub_13AD98(a1);
        if ( (*(_DWORD *)(v91 + 24) & 0x80) != 0 && a1[104] == 0 && *((_BYTE *)a1 + 18) == 0 )
        {
          sub_35AAF0(v27, 35, v97, 1);
          sub_3559A0((int)v27, 1);
          v39 = (_DWORD *)sub_35A2BC((int)v27, 0, 0, "rows updated", nullptr);
        }
        return sub_3853D2(v39);
      }
      if ( v52 == *(__int16 *)(v9 + 36) )
      {
        v53 = v27;
        goto LABEL_165;
      }
      v54 = *(_DWORD *)(v87 + 4 * v52);
      if ( v54 < 0 )
      {
        if ( (v115 & 1) != 0 && v52 <= 31 && ((v103 >> v52) & 1) == 0 )
        {
          v53 = v27;
LABEL_165:
          sub_35AAF0(v53, 28, 0, v76);
        }
        else
        {
          sub_36607C(v27, v9, v68, v52, v76);
        }
      }
      else
      {
        HIDWORD(v55) = *(_DWORD *)(20 * v54 + a3[2]);
        LODWORD(v55) = a1;
        sub_372DE4(v55, v76);
      }
      ++v52;
      ++v76;
      continue;
    }
  }
  return sub_3853D2(v39);
}


//======================================================================
// sub_3853D2
// address: 0x003853D2   size: 0x36 (54 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3853D2(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v9; // [sp-ACh] [bp-ACh]
  _DWORD *v10; // [sp-A8h] [bp-A8h]
  _DWORD *v11; // [sp-9Ch] [bp-9Ch]
  _DWORD *v12; // [sp-94h] [bp-94h]
  int v13; // [sp-7Ch] [bp-7Ch]
  int v14; // [sp-40h] [bp-40h]
  int v15; // [sp-3Ch] [bp-3Ch]

  if ( v15 != 0 )
    *(_DWORD *)(v15 + 496) = v14;
  sub_354940(v11, v10);
  sub_3550CC(v11, v12);
  sub_3551E8(v11, v9);
  sub_35519A(v11, v13);
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_385418
// address: 0x00385418   size: 0x2F2 (754 bytes)
//======================================================================
int *__fastcall sub_385418(int *a1, int a2, _DWORD *a3, int a4)
{
  int *v4; // r1
  int *v5; // r3
  _DWORD *i; // r6
  int *v7; // r0
  int *v8; // r7
  int *v9; // r0
  int **v10; // r3
  _DWORD **v11; // r4
  int *v12; // r6
  _DWORD *v13; // r0
  _DWORD *v14; // r1
  unsigned __int8 *v15; // r5
  unsigned __int8 *v16; // r5
  unsigned __int8 v17; // r3
  int v18; // r3
  int *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r1
  int v23; // r5
  _DWORD *v25; // [sp+24h] [bp-68h]
  int *v26; // [sp+28h] [bp-64h]
  int *v27; // [sp+2Ch] [bp-60h]
  int v28; // [sp+30h] [bp-5Ch]
  int v30; // [sp+34h] [bp-58h]
  int v32; // [sp+38h] [bp-54h]
  int v33; // [sp+3Ch] [bp-50h]
  int *v34; // [sp+3Ch] [bp-50h]
  int *v35; // [sp+40h] [bp-4Ch]
  int *v36; // [sp+40h] [bp-4Ch]
  int *v37; // [sp+40h] [bp-4Ch]
  _DWORD *v38; // [sp+40h] [bp-4Ch]
  _DWORD *v41; // [sp+4Ch] [bp-40h]
  unsigned __int8 v42[20]; // [sp+54h] [bp-38h] BYREF
  _DWORD v43[9]; // [sp+68h] [bp-24h] BYREF

  v4 = (int *)a1[103];
  v26 = v4;
  if ( v4 != nullptr )
    v5 = (int *)a1[103];
  else
    v5 = a1;
  for ( i = (_DWORD *)v5[133]; i != nullptr; i = (_DWORD *)i[1] )
  {
    if ( *i == a2 && i[3] == a4 )
      return i;
  }
  if ( v4 == nullptr )
    v26 = a1;
  v28 = *a1;
  v7 = (int *)sub_351894(*a1, 0x18u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    v7[1] = v26[133];
    v26[133] = (int)v7;
    v9 = (int *)sub_351894(v28, 0x1Cu);
    v27 = v9;
    v8[2] = (int)v9;
    if ( v9 != nullptr )
    {
      v10 = (int **)(v26[2] + 192);
      v9[6] = (int)*v10;
      *v10 = v9;
      v8[4] = -1;
      *v8 = a2;
      v8[3] = a4;
      v8[5] = -1;
      v11 = (_DWORD **)sub_351894(v28, 0x21Cu);
      if ( v11 != nullptr )
      {
        j_memset(v43, 0, 0x20u);
        v43[0] = v11;
        *v11 = (_DWORD *)v28;
        v11[104] = a3;
        v11[103] = v26;
        v11[124] = *(_DWORD **)a2;
        *((_BYTE *)v11 + 440) = *(_BYTE *)(a2 + 8);
        v11[107] = (_DWORD *)a1[107];
        v12 = sub_35A956((int)v11);
        if ( v12 != nullptr )
        {
          v13 = (_DWORD *)sub_36541C(v28, "-- TRIGGER %s", *(const char **)a2);
          sub_355AEA(v12, -1, v13, -1);
          v14 = *(_DWORD **)(a2 + 12);
          if ( v14 != nullptr )
          {
            v15 = (unsigned __int8 *)sub_3568BC(v28, v14, 0);
            v30 = 0;
            if ( sub_361108((int)v43, v15) == 0 && *(_BYTE *)(v28 + 64) == 0 )
            {
              v30 = sub_35A856(v12[6]);
              sub_37384A((int)v11, v15, v30, 8);
            }
            sub_35519A((_DWORD *)v28, (int)v15);
          }
          else
          {
            v30 = 0;
          }
          v16 = *(unsigned __int8 **)(a2 + 28);
          v41 = v11[2];
          v25 = *v11;
          while ( v16 != nullptr )
          {
            v17 = a4;
            if ( a4 == 10 )
              v17 = v16[1];
            *((_BYTE *)v11 + 441) = v17;
            v18 = *v16;
            switch ( v18 )
            {
              case 'm':
                v37 = sub_35B3BA((int *)v11, (int)v16);
                v21 = sub_3568BC((int)v25, *((_DWORD **)v16 + 5), 0);
                sub_385DD8(v11, v37, v21);
                break;
              case 'n':
                v36 = sub_35B3BA((int *)v11, (int)v16);
                v34 = sub_3568C6(v25, *((int **)v16 + 6), 0);
                v20 = sub_3568BC((int)v25, *((_DWORD **)v16 + 5), 0);
                sub_38479C((int *)v11, v36, v34, v20, *((unsigned __int8 *)v11 + 441));
                break;
              case 'l':
                v35 = sub_35B3BA((int *)v11, (int)v16);
                v33 = sub_356ABC(v25, *((_DWORD *)v16 + 2), 0);
                v19 = sub_355DF4(v25, *((_DWORD **)v16 + 7));
                sub_38638C(v11, v35, v33, v19, *((unsigned __int8 *)v11 + 441));
                break;
              default:
                v38 = (_DWORD *)sub_356ABC(v25, *((_DWORD *)v16 + 2), 0);
                *(_WORD *)v42 = 4;
                memset(&v42[4], 0, 12);
                sub_370488((int *)v11, (int)v38, v42);
                sub_355184(v25, v38);
                break;
            }
            if ( *v16 != 119 )
              sub_35A948(v41, 75);
            v16 = *((unsigned __int8 **)v16 + 8);
          }
          if ( v30 != 0 )
            sub_34E412((int)v12, v30);
          sub_35A948(v12, 24);
          v22 = v11[1];
          if ( a1[17] != 0 )
          {
            sub_354940(*v11, v22);
          }
          else
          {
            a1[1] = (int)v22;
            a1[17] = (int)v11[17];
          }
          v23 = *(unsigned __int8 *)(v28 + 64);
          if ( *(_BYTE *)(v28 + 64) == 0 )
          {
            v32 = v12[1];
            sub_354A30((int)v12, v26 + 99);
            v27[1] = v12[8];
            v12[1] = v23;
            *v27 = v32;
          }
          v27[2] = (int)v11[19];
          v27[3] = (int)v11[18];
          v27[4] = (int)v11[21];
          v27[5] = a2;
          v8[4] = (int)v11[108];
          v8[5] = (int)v11[109];
          sub_355C38((unsigned int *)v12);
        }
        sub_355228(v11);
        sub_354940((_DWORD *)v28, v11);
        return v8;
      }
    }
  }
  return i;
}


//======================================================================
// sub_385710
// address: 0x00385710   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_385710(int *a1, int a2, _DWORD *a3, int a4, unsigned __int8 a5, _DWORD *a6, int a7)
{
  int v10; // r5
  int *v11; // r0
  int v13; // [sp+0h] [bp-Ch]

  v13 = 110 - (a3 == nullptr);
  v10 = 0;
  while ( a2 != 0 )
  {
    if ( *(unsigned __int8 *)(a2 + 8) == v13
      && (*(_BYTE *)(a2 + 9) & a5) != 0
      && sub_34F52A(*(_DWORD **)(a2 + 16), a3) != 0 )
    {
      v11 = sub_385418(a1, a2, a6, a7);
      if ( v11 != nullptr )
        v10 |= v11[a4 + 4];
    }
    a2 = *(_DWORD *)(a2 + 32);
  }
  return v10;
}


//======================================================================
// sub_385768
// address: 0x00385768   size: 0x68 (104 bytes)
//======================================================================
int *__fastcall sub_385768(int *a1, int *a2, _DWORD *a3, int a4, int a5, int a6)
{
  int *v9; // r5
  int *result; // r0
  int *v11; // r6
  int v12; // r7
  int v13; // r3

  v9 = sub_35A956((int)a1);
  result = sub_385418(a1, (int)a2, a3, a5);
  v11 = result;
  if ( result != nullptr )
  {
    v12 = *a2;
    if ( v12 != 0 )
      LOBYTE(v12) = (*(_DWORD *)(*a1 + 24) & 0x40000) == 0;
    v13 = a1[19] + 1;
    a1[19] = v13;
    sub_35A902(v9, 127, a4, a6, v13);
    sub_355AEA(v9, -1, (_DWORD *)v11[2], -18);
    return (int *)sub_34E458((int)v9, v12);
  }
  return result;
}


//======================================================================
// sub_3857D0
// address: 0x003857D0   size: 0x3FC (1020 bytes)
//======================================================================
unsigned __int8 ***__fastcall sub_3857D0(int *a1, unsigned int *a2, int a3, int a4, int a5, int a6)
{
  unsigned __int8 ***result; // r0
  unsigned __int8 ***i; // r7
  int v9; // r6
  unsigned __int8 **v10; // r3
  int *v11; // r1
  unsigned __int8 **v12; // r3
  unsigned __int8 *v13; // r0
  unsigned __int8 *v14; // r5
  _WORD *v15; // r0
  _WORD *v16; // r0
  _WORD *v17; // r0
  _WORD *v18; // r0
  _WORD *v19; // r0
  _WORD *v20; // r0
  _WORD *v21; // r0
  _WORD *v22; // r5
  _WORD *v23; // r3
  void *v24; // r0
  _DWORD *v25; // r1
  unsigned int v26; // r0
  _WORD *v27; // r0
  int *v28; // r0
  _BYTE *v29; // r0
  char v30; // r0
  _DWORD *v31; // r0
  unsigned __int8 **v32; // r5
  char *v33; // r2
  unsigned __int8 *v34; // r0
  char v35; // r3
  int v36; // [sp+24h] [bp-68h]
  _DWORD *v37; // [sp+24h] [bp-68h]
  char *v38; // [sp+24h] [bp-68h]
  size_t v39; // [sp+28h] [bp-64h]
  _WORD *v40; // [sp+2Ch] [bp-60h]
  _WORD *v41; // [sp+30h] [bp-5Ch]
  _WORD *v42; // [sp+30h] [bp-5Ch]
  _DWORD *v43; // [sp+30h] [bp-5Ch]
  int v44; // [sp+34h] [bp-58h]
  _WORD *v46; // [sp+3Ch] [bp-50h]
  int v47; // [sp+40h] [bp-4Ch]
  unsigned __int8 *v48; // [sp+40h] [bp-4Ch]
  _WORD *v49; // [sp+44h] [bp-48h]
  char v50; // [sp+44h] [bp-48h]
  _BOOL4 v51; // [sp+48h] [bp-44h]
  int *v52; // [sp+4Ch] [bp-40h]
  _WORD *v53; // [sp+50h] [bp-3Ch]
  _WORD *v54; // [sp+50h] [bp-3Ch]
  unsigned __int8 ***v55; // [sp+54h] [bp-38h]
  int v58; // [sp+60h] [bp-2Ch] BYREF
  _DWORD *v59; // [sp+64h] [bp-28h] BYREF
  unsigned __int8 *v60[2]; // [sp+68h] [bp-24h] BYREF
  unsigned __int8 *v61[2]; // [sp+70h] [bp-1Ch] BYREF
  unsigned __int8 *v62[2]; // [sp+78h] [bp-14h] BYREF
  unsigned __int8 *v63; // [sp+80h] [bp-Ch] BYREF
  unsigned int v64; // [sp+84h] [bp-8h]

  result = (unsigned __int8 ***)sub_34F1D0(a2);
  for ( i = result; i != nullptr; i = (unsigned __int8 ***)i[3] )
  {
    result = (unsigned __int8 ***)a5;
    if ( a5 != 0 )
    {
      result = (unsigned __int8 ***)sub_34F1EA((int)a2, (int)i, a5, a6);
      if ( result == nullptr )
        continue;
    }
    v9 = *a1;
    v51 = a3 != 0;
    v44 = *((unsigned __int8 *)i + v51 + 25);
    v55 = &i[v51];
    v10 = v55[7];
    if ( *((_BYTE *)i + v51 + 25) == 0 )
    {
      if ( v10 != nullptr )
      {
        v11 = (int *)v55[7];
        goto LABEL_52;
      }
      continue;
    }
    v11 = (int *)v55[7];
    if ( v10 != nullptr )
      goto LABEL_52;
    v58 = 0;
    v59 = nullptr;
    result = (unsigned __int8 ***)sub_3619B4(a1, (int)a2, (int)i, &v58, (int *)&v59);
    if ( result != nullptr )
      continue;
    v40 = nullptr;
    v36 = 0;
    v52 = nullptr;
    v46 = nullptr;
    while ( v36 < (int)i[5] )
    {
      v60[0] = "old";
      v60[1] = (_BYTE *)(&dword_0 + 3);
      v61[0] = "new";
      v61[1] = (_BYTE *)(&dword_0 + 3);
      if ( v59 != nullptr )
        v12 = (unsigned __int8 **)v59[v36];
      else
        v12 = i[9];
      if ( v58 != 0 )
        v13 = *(unsigned __int8 **)(24 * *(__int16 *)(2 * v36 + *(_DWORD *)(v58 + 4)) + a2[1]);
      else
        v13 = "oid";
      v63 = v13;
      v47 = 24 * (_DWORD)v12;
      v62[0] = *(unsigned __int8 **)&(*i)[1][24 * (_DWORD)v12];
      v14 = v62[0];
      v64 = sub_34CF50((unsigned int)v13);
      v62[1] = (unsigned __int8 *)sub_34CF50((unsigned int)v14);
      v53 = sub_361286(a1, 27, nullptr, nullptr, v60);
      v15 = sub_361286(a1, 27, nullptr, nullptr, &v63);
      v54 = sub_361286(a1, 122, v53, v15, nullptr);
      v16 = sub_361286(a1, 27, nullptr, nullptr, v62);
      v17 = sub_361286(a1, 79, v54, v16, nullptr);
      v46 = sub_355378(v9, v46, v17);
      if ( a3 != 0 )
      {
        v41 = sub_361286(a1, 27, nullptr, nullptr, v60);
        v18 = sub_361286(a1, 27, nullptr, nullptr, &v63);
        v42 = sub_361286(a1, 122, v41, v18, nullptr);
        v49 = sub_361286(a1, 27, nullptr, nullptr, v61);
        v19 = sub_361286(a1, 27, nullptr, nullptr, &v63);
        v20 = sub_361286(a1, 122, v49, v19, nullptr);
        v21 = sub_361286(a1, 73, v42, v20, nullptr);
        v40 = sub_355378(v9, v40, v21);
      }
      if ( v44 != 6 )
      {
        if ( v44 == 9 )
        {
          if ( a3 == 0 )
            goto LABEL_30;
          v22 = sub_361286(a1, 27, nullptr, nullptr, v61);
          v23 = sub_361286(a1, 27, nullptr, nullptr, &v63);
          v24 = sub_361286(a1, 122, v22, v23, nullptr);
        }
        else if ( v44 == 8 && (v25 = *(_DWORD **)&(*i)[1][v47 + 4]) != nullptr )
        {
          v24 = sub_3568BC(v9, v25, 0);
        }
        else
        {
          v24 = sub_361286(a1, 101, nullptr, nullptr, nullptr);
        }
        v52 = sub_35B684((_DWORD *)*a1, v52, (int)v24);
        sub_354070(a1, v52, (int)v62, 0);
      }
LABEL_30:
      ++v36;
    }
    sub_354940((_DWORD *)v9, v59);
    v48 = **i;
    v26 = sub_34CF50((unsigned int)v48);
    v39 = v26;
    v43 = nullptr;
    if ( v44 == 6 )
    {
      v64 = v26;
      v63 = v48;
      v27 = sub_351B26(v9, 57, "FOREIGN KEY constraint failed");
      if ( v27 != nullptr )
        *((_BYTE *)v27 + 1) = 2;
      v37 = sub_35B684((_DWORD *)*a1, nullptr, (int)v27);
      v28 = sub_35B348(v9, nullptr, (int)&v63, nullptr);
      v29 = sub_35B784(a1, v37, v28, (int)v46, 0, 0, 0, 0, 0, 0);
      v46 = nullptr;
      v43 = v29;
    }
    v30 = *(_BYTE *)(v9 + 242);
    *(_BYTE *)(v9 + 242) = 0;
    v50 = v30;
    v31 = sub_351894(v9, v39 + 77);
    v32 = (unsigned __int8 **)v31;
    if ( v31 != nullptr )
    {
      v33 = (char *)(v31 + 9);
      v31[7] = v31 + 9;
      v34 = (unsigned __int8 *)(v31 + 19);
      v32[13] = (unsigned __int8 *)v39;
      v38 = v33;
      v32[12] = v34;
      j_memcpy(v34, v48, v39);
      v32[14] = (unsigned __int8 *)sub_3568BC(v9, v46, 1);
      v32[15] = (unsigned __int8 *)sub_3568C6((_DWORD *)v9, v52, 1);
      v32[11] = (unsigned __int8 *)sub_356ABC((_DWORD *)v9, (int)v43, 1);
      if ( v40 != nullptr )
      {
        v40 = sub_361286(a1, 19, v40, nullptr, nullptr);
        v32[3] = (unsigned __int8 *)sub_3568BC(v9, v40, 1);
      }
    }
    else
    {
      v38 = nullptr;
    }
    *(_BYTE *)(v9 + 242) = v50;
    sub_35519A((_DWORD *)v9, (int)v46);
    sub_35519A((_DWORD *)v9, (int)v40);
    sub_3551E8((_DWORD *)v9, v52);
    sub_355184((_DWORD *)v9, v43);
    if ( *(_BYTE *)(v9 + 64) == 1 )
    {
      result = (unsigned __int8 ***)sub_354F58((_DWORD *)v9, v32);
      continue;
    }
    if ( v44 == 6 )
    {
      v35 = 119;
    }
    else
    {
      if ( v44 == 9 && a3 == 0 )
      {
        *v38 = 109;
        goto LABEL_49;
      }
      v35 = 110;
    }
    *v38 = v35;
LABEL_49:
    *((_DWORD *)v38 + 1) = v32;
    v32[5] = (unsigned __int8 *)a2[17];
    v32[6] = (unsigned __int8 *)a2[17];
    v55[7] = v32;
    v11 = (int *)v32;
    *((_BYTE *)v32 + 8) = 110 - (a3 == 0);
LABEL_52:
    result = (unsigned __int8 ***)sub_385768(a1, v11, a2, a4, 2, 0);
  }
  return result;
}


//======================================================================
// sub_385BCC
// address: 0x00385BCC   size: 0x42 (66 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> sub_385BCC(
        int *a1,
        int a2,
        int a3,
        _DWORD *a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9)
{
  while ( a2 != 0 )
  {
    if ( *(unsigned __int8 *)(a2 + 8) == a3
      && *(unsigned __int8 *)(a2 + 9) == a5
      && sub_34F52A(*(_DWORD **)(a2 + 16), a4) != 0 )
    {
      sub_385768(a1, (int *)a2, a6, a7, a8, a9);
    }
    a2 = *(_DWORD *)(a2 + 32);
  }
}


//======================================================================
// sub_385C0E
// address: 0x00385C0E   size: 0x1C8 (456 bytes)
//======================================================================
int __fastcall sub_385C0E(
        int *a1,
        unsigned int *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int16 a7,
        char a8,
        unsigned __int8 a9,
        char a10)
{
  int *v11; // r7
  int v13; // r6
  int v14; // r0
  int i; // r6
  int v16; // r6
  int v18; // [sp+18h] [bp-2Ch]
  int v20; // [sp+20h] [bp-24h]
  int v22; // [sp+28h] [bp-1Ch]
  char v23; // [sp+30h] [bp-14h]
  int v24; // [sp+38h] [bp-Ch]

  v11 = (int *)a1[2];
  v20 = sub_35A856(v11[6]);
  v23 = 65;
  if ( (a2[11] & 0x20) == 0 )
    v23 = 67;
  if ( a10 == 0 )
    sub_35A98A(v11, v23, a4, v20, a6, (_DWORD *)a7);
  if ( sub_357D14(*a1, (int)a2, 0, 0) != 0 || a3 != 0 )
  {
    v13 = sub_385710(a1, a3, nullptr, 0, 3u, a2, a9);
    v14 = 0;
    if ( (*(_DWORD *)(*a1 + 24) & 0x80000) != 0 )
      v14 = sub_361B1C(a1, a2);
    v24 = v14 | v13;
    v22 = a1[19];
    v18 = v22 + 1;
    a1[19] = v22 + *((__int16 *)a2 + 19) + 1;
    sub_35AAF0(v11, 33, a6, v22 + 1);
    for ( i = 0; i < *((__int16 *)a2 + 19); ++i )
    {
      if ( v24 == -1 || i <= 31 && (v24 & (1 << i)) != 0 )
        sub_36607C(v11, (int)a2, a4, i, v22 + 2 + i);
    }
    v16 = v11[8];
    sub_385BCC(a1, a3, 109, nullptr, 1, a2, v18, a9, v20);
    if ( v16 < v11[8] )
      sub_35A98A(v11, v23, a4, v20, a6, (_DWORD *)a7);
    sub_3844A4((int)a1, a2, v18, 0, 0, 0);
  }
  else
  {
    v18 = 0;
  }
  if ( a2[3] == 0 )
  {
    sub_373D30((int)a1, (int)a2, a4, a5, nullptr);
    sub_35AAF0(v11, 74, a4, a8 != 0);
    if ( a8 != 0 )
      sub_355AEA(v11, -1, (_DWORD *)*a2, 0);
  }
  if ( (*(_DWORD *)(*a1 + 24) & 0x80000) != 0 )
    sub_3857D0(a1, a2, 0, v18, 0, 0);
  sub_385BCC(a1, a3, 109, nullptr, 2, a2, v18, a9, v20);
  return sub_34E412((int)v11, v20);
}


//======================================================================
// sub_385DD8
// address: 0x00385DD8   size: 0x5B0 (1456 bytes)
//======================================================================
_DWORD *__fastcall sub_385DD8(int a1, int *a2, _DWORD *a3)
{
  int v4; // r0
  int v5; // r1
  _BYTE *v6; // r7
  _DWORD *v7; // r5
  int **v8; // r0
  unsigned int *v9; // r6
  int v10; // r7
  _DWORD *v11; // r3
  unsigned int v12; // r2
  int v13; // r0
  int *v14; // r0
  int *v15; // r5
  int v16; // r3
  __int64 v17; // r2
  _DWORD *j; // r6
  int v19; // r0
  int v20; // r0
  __int16 v21; // r2
  int v22; // r1
  int i; // r7
  int v24; // r2
  int v25; // r3
  signed int v26; // r0
  int v27; // r0
  _BYTE *v29; // r0
  int v30; // r7
  _DWORD *v31; // r0
  int *v32; // r0
  char v33; // r1
  int v34; // r3
  int v35; // r2
  _DWORD *v36; // r6
  int v37; // [sp+2Ch] [bp-80h]
  int v38; // [sp+2Ch] [bp-80h]
  int v39; // [sp+30h] [bp-7Ch]
  int v40; // [sp+30h] [bp-7Ch]
  int v41; // [sp+34h] [bp-78h]
  unsigned int v42; // [sp+34h] [bp-78h]
  int v43; // [sp+38h] [bp-74h]
  int v44; // [sp+38h] [bp-74h]
  __int16 v45; // [sp+3Ch] [bp-70h]
  _DWORD *v46; // [sp+3Ch] [bp-70h]
  int v47; // [sp+40h] [bp-6Ch]
  int v48; // [sp+40h] [bp-6Ch]
  _DWORD *v49; // [sp+44h] [bp-68h]
  int v50; // [sp+48h] [bp-64h]
  unsigned int v51; // [sp+48h] [bp-64h]
  int v52; // [sp+50h] [bp-5Ch]
  int v53; // [sp+54h] [bp-58h]
  int v55; // [sp+5Ch] [bp-50h]
  _DWORD *v56; // [sp+60h] [bp-4Ch]
  _BOOL4 v57; // [sp+60h] [bp-4Ch]
  int v58; // [sp+64h] [bp-48h]
  int v60; // [sp+6Ch] [bp-40h]
  int v61; // [sp+70h] [bp-3Ch] BYREF
  int v62; // [sp+74h] [bp-38h] BYREF
  int v63; // [sp+78h] [bp-34h]
  int v64; // [sp+7Ch] [bp-30h]
  __int64 v65; // [sp+80h] [bp-2Ch]
  _DWORD v66[9]; // [sp+88h] [bp-24h] BYREF

  v4 = *(_DWORD *)a1;
  v5 = *(_DWORD *)(a1 + 68);
  v63 = 0;
  v64 = 0;
  v49 = (_DWORD *)v4;
  if ( v5 != 0 )
    goto LABEL_2;
  v7 = (_DWORD *)*(unsigned __int8 *)(v4 + 64);
  if ( *(_BYTE *)(v4 + 64) != 0 )
    goto LABEL_2;
  v8 = sub_384468((int *)a1, (int)a2);
  v9 = (unsigned int *)v8;
  if ( v8 == nullptr )
    goto LABEL_2;
  v60 = sub_34F560((unsigned __int8 *)a1, (int)v8, 109, v7, v7);
  v56 = (_DWORD *)v9[3];
  if ( sub_365850((int *)a1, v9) != 0 )
    goto LABEL_2;
  if ( sub_361950(a1, v9, v60 != 0) != 0 )
    goto LABEL_2;
  v10 = sub_34F2A0((int)v49, v9[17]);
  v39 = sub_360F08(a1);
  if ( v39 == 1 )
    goto LABEL_2;
  v50 = 0;
  v41 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = v41 + 1;
  a2[12] = v41;
  v11 = (_DWORD *)v9[2];
  while ( v11 != nullptr )
  {
    ++*(_DWORD *)(a1 + 72);
    v11 = (_DWORD *)v11[5];
    ++v50;
  }
  v57 = v56 != nullptr;
  if ( v57 )
  {
    v12 = *v9;
    v13 = *(_DWORD *)(a1 + 496);
    v64 = a1;
    *(_DWORD *)(a1 + 496) = v12;
    v63 = v13;
  }
  v14 = sub_35A956(a1);
  v15 = v14;
  if ( v14 == nullptr )
    goto LABEL_2;
  if ( *(_BYTE *)(a1 + 18) == 0 )
    *((_BYTE *)v14 + 88) |= 0x10u;
  sub_36E620((int *)a1, 1, v10);
  if ( v57 )
  {
    sub_374ADC((int *)a1, (int)v9, a3, v41);
    v62 = v41;
    v61 = v41;
  }
  j_memset(v66, 0, 0x20u);
  v66[0] = a1;
  v66[1] = a2;
  if ( sub_361108((int)v66, a3) != 0 )
    goto LABEL_2;
  if ( (v49[6] & 0x80) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 76) + 1;
    *(_DWORD *)(a1 + 76) = v16;
    v55 = v16;
    sub_35AAF0(v15, 25, 0, v16);
  }
  else
  {
    v55 = -1;
  }
  if ( v39 != 0 || a3 != nullptr || v60 != 0 || (v9[11] & 0x10) != 0 || sub_357D14(*(_DWORD *)a1, (int)v9, 0, 0) != 0 )
  {
    v19 = *(_DWORD *)(a1 + 76);
    v43 = v19;
    if ( (v9[11] & 0x20) != 0 )
    {
      v20 = sub_35344C(v9[2]);
      v21 = *(_WORD *)(v20 + 50);
      v40 = v20;
      v22 = *(_DWORD *)(a1 + 72);
      v37 = v43 + 1;
      v45 = v21;
      *(_DWORD *)(a1 + 76) = v43 + v21;
      v53 = v22;
      *(_DWORD *)(a1 + 72) = v22 + 1;
      v47 = sub_35AAF0(v15, 55, v22, v21);
      sub_361E0C((int *)a1, v40);
      v58 = 0;
    }
    else
    {
      v58 = v19 + 1;
      *(_DWORD *)(a1 + 76) = v19 + 1;
      sub_35AAF0(v15, 28, 0, v19 + 1);
      v47 = 0;
      v53 = 0;
      v45 = 1;
      v37 = 0;
      v40 = 0;
    }
    v52 = sub_36EAB8((int *)a1, a2, a3, 0, nullptr, 12);
    if ( v52 != 0 )
    {
      v65 = *(_QWORD *)(v52 + 60);
      v44 = *(unsigned __int8 *)(v52 + 37);
      if ( (v49[6] & 0x80) != 0 )
        sub_35AAF0(v15, 37, v55, 1);
      if ( v40 != 0 )
      {
        for ( i = 0; i < v45; ++i )
        {
          v24 = i + v37;
          v25 = 2 * i;
          sub_36607C(v15, (int)v9, v41, *(__int16 *)(v25 + *(_DWORD *)(v40 + 4)), v24);
        }
        if ( v44 != 0 )
        {
LABEL_76:
          v29 = (_BYTE *)sub_3516AC((int)v49, v50 + 2);
          v6 = v29;
          if ( v29 == nullptr )
          {
            sub_35AF20((unsigned int **)v52);
            goto LABEL_72;
          }
          j_memset(v29, 1, v50 + 1);
          v6[v50 + 1] = 0;
          if ( (int)v65 >= 0 )
            v6[(_DWORD)v65 - v41] = 0;
          if ( v65 >= 0 )
            v6[HIDWORD(v65) - v41] = 0;
          if ( v47 != 0 )
            sub_355A84(v15, v47);
          v51 = sub_35A948(v15, 16);
          goto LABEL_52;
        }
        v30 = *(_DWORD *)(a1 + 76) + 1;
        *(_DWORD *)(a1 + 76) = v30;
        v31 = (_DWORD *)sub_3517DE(v15, v40);
        sub_35A9FC(v15, 48, v37, v45, v30, v31, v45);
        sub_35AAF0(v15, 107, v53, v30);
        v37 = v30;
        v51 = 0;
        v45 = 0;
        v6 = nullptr;
      }
      else
      {
        v26 = sub_3660EC((unsigned int *)a1, (int)v9, -1, v41, *(_DWORD *)(a1 + 76) + 1, 0);
        v37 = v26;
        if ( v26 > *(_DWORD *)(a1 + 76) )
          *(_DWORD *)(a1 + 76) = v26;
        if ( v44 != 0 )
          goto LABEL_76;
        sub_35AAF0(v15, 124, v58, v26);
        v45 = 1;
        v51 = 0;
        v6 = nullptr;
      }
LABEL_52:
      sub_35AF20((unsigned int **)v52);
      v48 = 0;
      if ( v44 != 0 )
      {
        v48 = sub_35A856(v15[6]);
        sub_35AAF0(v15, 16, 0, v48);
        sub_34E46E((int)v15, v51);
      }
      if ( !v57 )
        sub_361E90((int *)a1, (int)v9, 53, v41, v6, &v61, &v62);
      if ( v44 != 0 )
      {
        v27 = v41;
        v42 = 0;
        if ( v6[v61 - v27] != 0 )
          sub_35A98A(v15, 65, v61, v48, v37, (_DWORD *)v45);
      }
      else if ( v40 != 0 )
      {
        v42 = sub_35AACE(v15, 105, v53);
        sub_35AAF0(v15, 98, v53, v37);
      }
      else
      {
        v42 = sub_35A902(v15, 125, v58, 0, v37);
      }
      if ( (v9[11] & 0x10) != 0 )
      {
        v46 = sub_353624((int)v49, (_DWORD *)v9[15]);
        sub_375E6C((_DWORD *)a1, (int)v9);
        sub_35A9FC(v15, 15, 0, 1, v37, v46, -10);
        sub_34E458((int)v15, 2);
        sub_34EEF2(a1);
      }
      else
      {
        sub_385C0E((int *)a1, v9, v60, v61, v62, v37, v45, *(_BYTE *)(a1 + 18) == 0, 0xAu, v44);
      }
      if ( v44 != 0 )
      {
        sub_34E412((int)v15, v48);
      }
      else
      {
        if ( v40 != 0 )
        {
          v32 = v15;
          v33 = 9;
          v34 = v42 + 1;
          v35 = v53;
        }
        else
        {
          v35 = 0;
          v34 = v42;
          v32 = v15;
          v33 = 16;
        }
        sub_35AAF0(v32, v33, v35, v34);
        sub_34E46E((int)v15, v42);
      }
      if ( !v57 && (v9[11] & 0x10) == 0 )
      {
        if ( v40 == 0 )
          sub_35AACE(v15, 58, v61);
        v36 = (_DWORD *)v9[2];
        v38 = 0;
        while ( v36 != nullptr )
        {
          sub_35AACE(v15, 58, v38 + v62);
          v36 = (_DWORD *)v36[5];
          ++v38;
        }
      }
      goto LABEL_65;
    }
LABEL_2:
    v6 = nullptr;
    goto LABEL_72;
  }
  LODWORD(v17) = v9[8];
  HIDWORD(v17) = 1;
  sub_35A7C8(a1, v10, v17, *v9);
  if ( (v9[11] & 0x20) == 0 )
    sub_35A9FC(v15, 115, v9[8], v10, v55, (_DWORD *)*v9, -2);
  for ( j = (_DWORD *)v9[2]; j != nullptr; j = (_DWORD *)j[5] )
    sub_35AAF0(v15, 115, j[11], v10);
  v6 = nullptr;
LABEL_65:
  if ( *(_BYTE *)(a1 + 18) == 0 && *(_DWORD *)(a1 + 416) == 0 )
    sub_13AD98((_DWORD *)a1);
  if ( (v49[6] & 0x80) != 0 && *(_BYTE *)(a1 + 18) == 0 && *(_DWORD *)(a1 + 416) == 0 )
  {
    sub_35AAF0(v15, 35, v55, 1);
    sub_3559A0((int)v15, 1);
    sub_35A2BC((int)v15, 0, 0, "rows deleted", nullptr);
  }
LABEL_72:
  if ( v64 != 0 )
  {
    *(_DWORD *)(v64 + 496) = v63;
    v64 = 0;
  }
  sub_3550CC(v49, a2);
  sub_35519A(v49, (int)a3);
  return sub_354940(v49, v6);
}


//======================================================================
// sub_38638C
// address: 0x0038638C   size: 0x2A4 (676 bytes)
//======================================================================
int __fastcall sub_38638C(int a1, int a2, int a3, int a4)
{
  int v4; // r5
  void *v6; // r0
  int v7; // r2
  int **v8; // r6
  int v9; // r0
  _DWORD *v10; // r4
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  char v14; // r1
  int v15; // r2
  int **v16; // r0
  int **v17; // r5
  int v18; // r4
  int v19; // r2
  int v20; // r3
  _BYTE *v21; // r0
  unsigned __int8 *v22; // r1
  _BOOL4 v23; // r3
  int v25; // [sp+88h] [bp-B4h]
  char v28; // [sp+B0h] [bp-8Ch]
  _DWORD *v29; // [sp+B8h] [bp-84h]
  int v30; // [sp+D8h] [bp-64h]
  int v32[15]; // [sp+100h] [bp-3Ch] BYREF

  v4 = *(_DWORD *)a1;
  v29 = *(_DWORD **)a1;
  v6 = j_memset(&v32[1], 0, 0x14u);
  if ( *(_DWORD *)(a1 + 68) != 0 )
    v6 = (void *)sub_387250(v6);
  if ( *(_BYTE *)(v4 + 64) != 0 )
    v6 = (void *)sub_387256(v6);
  if ( a3 != 0 )
  {
    v7 = *(unsigned __int16 *)(a3 + 6);
    v6 = (void *)(v7 << 24);
    if ( (v7 & 0x80) != 0 && *(_DWORD *)(a3 + 60) == 0 )
    {
      *(_DWORD *)a3 = 0;
      v6 = sub_355184(v29, (_DWORD *)a3);
      a3 = 0;
    }
  }
  if ( *(_DWORD *)(a2 + 16) == 0 )
    sub_38725C(v6);
  v8 = sub_384468((int *)a1, a2);
  if ( v8 == nullptr )
    sub_387260();
  v28 = sub_34F2A0((int)v29, (int)v8[17]);
  v9 = sub_360F08(a1);
  v10 = (_DWORD *)v9;
  if ( v9 != 0 )
    sub_387262(v9);
  v30 = sub_34F560((unsigned __int8 *)a1, (int)v8, 108, v10, v32);
  v11 = sub_365850((int *)a1, v8);
  if ( v11 != 0 )
    sub_387262(v11);
  v12 = sub_361950(a1, v8, v32[0]);
  if ( v12 != 0 )
    sub_387262(v12);
  v13 = sub_35A956(a1);
  if ( v13 == nullptr )
    v13 = (_DWORD *)sub_387262(0);
  if ( *(_BYTE *)(a1 + 18) == 0 )
    *((_BYTE *)v13 + 88) |= 0x10u;
  v14 = 1;
  if ( a3 == 0 )
    v14 = v30 != 0;
  sub_36E620((int *)a1, v14, v28);
  if ( a4 != 0
    || a3 == 0
    || *(_DWORD *)(a1 + 536) != 0
    || *(_DWORD *)(a3 + 76) != 0
    || sub_34F4D6((unsigned __int8 *)a1, (int)v8) != 0
    || ((_BYTE)v8[11] & 0x10) != 0
    || *(_DWORD *)(v15 = *(_DWORD *)(a3 + 40)) != 1
    || *(_DWORD *)(v15 + 28) != 0
    || *(_DWORD *)(a3 + 44) != 0
    || *(_DWORD *)(a3 + 56) != 0
    || *(_DWORD *)(a3 + 48) != 0
    || *(_DWORD *)(a3 + 68) != 0
    || *(_DWORD *)(a3 + 60) != 0
    || (*(_WORD *)(a3 + 6) & 1) != 0
    || **(_DWORD **)a3 != 1
    || ***(_BYTE ***)(*(_DWORD *)a3 + 8) != 116
    || (v16 = sub_383B90((int *)a1, 0, v15 + 8), v17 = v16, v16 == nullptr)
    || v16 == v8
    || ((*((_BYTE *)v8 + 44) ^ *((_BYTE *)v16 + 44)) & 0x20) != 0
    || ((_BYTE)v16[11] & 0x10) != 0
    || (v18 = (int)v16[3]) != 0
    || *((__int16 *)v8 + 19) != *((__int16 *)v16 + 19)
    || *((__int16 *)v8 + 18) != *((__int16 *)v16 + 18) )
  {
LABEL_59:
    JUMPOUT(0x386970);
  }
  while ( v18 < *((__int16 *)v8 + 19) )
  {
    v25 = 6 * v18;
    v19 = (int)&v8[1][6 * v18];
    v20 = (int)&v17[1][6 * v18];
    if ( *(unsigned __int8 *)(v19 + 21) != *(unsigned __int8 *)(v20 + 21) )
      goto LABEL_59;
    v21 = *(_BYTE **)(v19 + 16);
    v22 = *(unsigned __int8 **)(v20 + 16);
    if ( v21 != nullptr )
    {
      if ( v22 == nullptr )
        goto LABEL_59;
      v23 = sqlite3_stricmp(v21, v22) == 0;
    }
    else
    {
      v23 = v22 == nullptr;
    }
    if ( !v23 || LOBYTE(v8[1][v25 + 5]) != 0 && LOBYTE(v17[1][v25 + 5]) == 0 )
      goto LABEL_59;
    ++v18;
  }
  return sub_386630();
}


//======================================================================
// sub_386630
// address: 0x00386630   size: 0xBC8 (3016 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00386630  CMP     R4, #0
//   00386632  BEQ     loc_38667E
//   00386634  MOVS    R3, R4
//   00386636  ADDS    R3, #0x36 ; '6'
//   00386638  LDRB    R3, [R3]
//   0038663A  CMP     R3, #0
//   0038663C  BEQ     loc_386642
//   0038663E  MOVS    R3, #1
//   00386640  STR     R3, [SP,#arg_88]
//   00386642  LDR     R0, [R5,#8]
//   00386644  STR     R0, [SP,#arg_90]
//   00386646  LDR     R3, [SP,#arg_90]
//   00386648  CMP     R3, #0
//   0038664A  BNE     loc_38664E
//   0038664C  B       loc_386970
//   0038664E  LDR     R1, [SP,#arg_90]
//   00386650  LDRH    R2, [R4,#0x32]
//   00386652  LDRH    R3, [R1,#0x32]
//   00386654  CMP     R2, R3
//   00386656  BNE     loc_386676
//   00386658  MOVS    R3, R4
//   0038665A  ADDS    R3, #0x36 ; '6'
//   0038665C  LDRB    R2, [R3]
//   0038665E  MOVS    R3, R1
//   00386660  ADDS    R3, #0x36 ; '6'
//   00386662  LDRB    R3, [R3]
//   00386664  CMP     R2, R3
//   00386666  BNE     loc_386676
//   00386668  MOVS    R0, R4
//   0038666A  BL      sub_13A834
//   0038666E  CMP     R0, #0
//   00386670  BEQ     loc_386676
//   00386672  BL      sub_38728E
//   00386676  LDR     R2, [SP,#arg_90]
//   00386678  LDR     R2, [R2,#0x14]
//   0038667A  STR     R2, [SP,#arg_90]
//   0038667C  B       loc_386646
//   0038667E  LDR     R1, [R6,#0x18]
//   00386680  CMP     R1, #0
//   00386682  BEQ     loc_386694
//   00386684  MOVS    R2, #1
//   00386686  LDR     R0, [R5,#0x18]
//   00386688  NEGS    R2, R2
//   0038668A  BL      sub_13A7DE
//   0038668E  CMP     R0, #0
//   00386690  BEQ     loc_386694
//   00386692  B       loc_386970
//   00386694  LDR     R0, [R7]
//   00386696  LDR     R3, [R0,#0x18]
//   00386698  LSLS    R1, R3, #0xC
//   0038669A  BPL     loc_3866A4
//   0038669C  LDR     R2, [R6,#0x10]
//   0038669E  CMP     R2, #0
//   003866A0  BEQ     loc_3866A4
//   003866A2  B       loc_386970
//   003866A4  LSLS    R1, R3, #0x18
//   003866A6  BPL     loc_3866AA
//   003866A8  B       loc_386970
//   003866AA  LDR     R1, [R5,#0x44]
//   003866AC  BL      sub_34F2A0
//   003866B0  STR     R0, [SP,#arg_C8]
//   003866B2  MOVS    R0, R7
//   003866B4  BL      sub_35A956
//   003866B8  LDR     R1, [SP,#arg_C8]
//   003866BA  MOVS    R4, R0
//   003866BC  MOVS    R0, R7
//   003866BE  BL      sub_36E5E0
//   003866C2  LDR     R2, [R7,#0x48]
//   003866C4  LDR     R1, [SP,#arg_B0]
//   003866C6  MOVS    R0, R7
//   003866C8  STR     R2, [SP,#arg_90]
//   003866CA  LDR     R3, [SP,#arg_90]
//   003866CC  ADDS    R2, #1
//   003866CE  STR     R2, [SP,#arg_9C]
//   003866D0  ADDS    R3, #2
//   003866D2  STR     R3, [R7,#0x48]
//   003866D4  MOVS    R2, R6
//   003866D6  BL      sub_351838
//   003866DA  STR     R0, [SP,#arg_AC]
//   003866DC  MOVS    R0, R7
//   003866DE  BL      sub_34EA6E
//   003866E2  STR     R0, [SP,#arg_C4]
//   003866E4  MOVS    R0, R7
//   003866E6  BL      sub_34EA6E
//   003866EA  MOVS    R3, #0x35 ; '5'
//   003866EC  STR     R0, [SP,#arg_98]
//   003866EE  STR     R3, [SP,#arg_0]
//   003866F0  MOVS    R0, R7
//   003866F2  MOVS    R3, R6
//   003866F4  LDR     R1, [SP,#arg_9C]
//   003866F6  LDR     R2, [SP,#arg_B0]
//   003866F8  BL      sub_361E26
//   003866FC  MOVS    R0, #0x24 ; '$'
//   003866FE  LDRSH   R3, [R6,R0]
//   00386700  CMP     R3, #0
//   00386702  BGE     loc_38670A
//   00386704  LDR     R1, [R6,#8]
//   00386706  CMP     R1, #0
//   00386708  BNE     loc_386718
//   0038670A  LDR     R2, [SP,#arg_88]
//   0038670C  CMP     R2, #0
//   0038670E  BNE     loc_386718
//   00386710  LDR     R3, [SP,#arg_94]
//   00386712  SUBS    R3, #1
//   00386714  CMP     R3, #1
//   00386716  BLS     loc_38673C
//   00386718  MOVS    R1, #0x69 ; 'i'
//   0038671A  LDR     R2, [SP,#arg_9C]
//   0038671C  MOVS    R3, #0
//   0038671E  MOVS    R0, R4
//   00386720  BL      sub_35AAF0
//   00386724  MOVS    R2, #0
//   00386726  STR     R0, [SP,#arg_A0]
//   00386728  MOVS    R1, #0x10
//   0038672A  MOVS    R0, R4
//   0038672C  MOVS    R3, R2
//   0038672E  BL      sub_35AAF0
//   00386732  LDR     R1, [SP,#arg_A0]
//   00386734  STR     R0, [SP,#arg_88]
//   00386736  MOVS    R0, R4
//   00386738  BL      sub_34E46E
//   0038673C  MOVS    R3, R5
//   0038673E  ADDS    R3, #0x2C ; ','
//   00386740  LDRB    R2, [R3]
//   00386742  MOVS    R3, #0x20 ; ' '
//   00386744  ANDS    R2, R3
//   00386746  STR     R2, [SP,#arg_B4]
//   00386748  BNE     loc_386826
//   0038674A  MOVS    R3, #0x34 ; '4'
//   0038674C  STR     R3, [SP,#arg_0]
//   0038674E  MOVS    R0, R7
//   00386750  LDR     R1, [SP,#arg_90]
//   00386752  LDR     R2, [SP,#arg_C8]
//   00386754  MOVS    R3, R5
//   00386756  BL      sub_361E26
//   0038675A  LDR     R3, [SP,#arg_B4]
//   0038675C  MOVS    R0, R4
//   0038675E  MOVS    R1, #0x69 ; 'i'
//   00386760  LDR     R2, [SP,#arg_90]
//   00386762  BL      sub_35AAF0
//   00386766  STR     R0, [SP,#arg_CC]
//   00386768  MOVS    R0, #0x24 ; '$'
//   0038676A  LDRSH   R3, [R6,R0]
//   0038676C  CMP     R3, #0
//   0038676E  BLT     loc_3867B4
//   00386770  MOVS    R1, #0x64 ; 'd'
//   00386772  LDR     R2, [SP,#arg_90]
//   00386774  LDR     R3, [SP,#arg_98]
//   00386776  MOVS    R0, R4
//   00386778  BL      sub_35AAF0
//   0038677C  LDR     R1, [SP,#arg_98]
//   0038677E  LDR     R3, [SP,#arg_B4]
//   00386780  STR     R0, [SP,#arg_A0]
//   00386782  STR     R1, [SP,#arg_0]
//   00386784  LDR     R2, [SP,#arg_9C]
//   00386786  MOVS    R1, #0x43 ; 'C'
//   00386788  MOVS    R0, R4
//   0038678A  BL      sub_35A902
//   0038678E  MOVS    R2, R6
//   00386790  STR     R0, [SP,#arg_B4]
//   00386792  LDR     R1, [SP,#arg_94]
//   00386794  MOVS    R0, R7
//   00386796  BL      sub_13AF08
//   0038679A  MOVS    R0, R4
//   0038679C  LDR     R1, [SP,#arg_B4]
//   0038679E  BL      sub_34E46E
//   003867A2  LDR     R2, [SP,#arg_AC]
//   003867A4  CMP     R2, #0
//   003867A6  BLE     loc_3867CE
//   003867A8  LDR     R0, [R7,#8]
//   003867AA  MOVS    R1, #0x83
//   003867AC  LDR     R3, [SP,#arg_98]
//   003867AE  BL      sub_35AAF0
//   003867B2  B       loc_3867CE
//   003867B4  LDR     R3, [R6,#8]
//   003867B6  MOVS    R0, R4
//   003867B8  CMP     R3, #0
//   003867BA  BNE     loc_3867C2
//   003867BC  MOVS    R1, #0x45 ; 'E'
//   003867BE  LDR     R2, [SP,#arg_9C]
//   003867C0  B       loc_3867C6
//   003867C2  LDR     R2, [SP,#arg_90]
//   003867C4  MOVS    R1, #0x64 ; 'd'
//   003867C6  LDR     R3, [SP,#arg_98]
//   003867C8  BL      sub_35AAF0
//   003867CC  STR     R0, [SP,#arg_A0]
//   003867CE  LDR     R2, [SP,#arg_90]
//   003867D0  LDR     R3, [SP,#arg_C4]
//   003867D2  MOVS    R0, R4
//   003867D4  MOVS    R1, #0x63 ; 'c'
//   003867D6  BL      sub_35AAF0
//   003867DA  LDR     R0, [SP,#arg_98]
//   003867DC  LDR     R2, [SP,#arg_9C]
//   003867DE  LDR     R3, [SP,#arg_C4]
//   003867E0  STR     R0, [SP,#arg_0]
//   003867E2  MOVS    R1, #0x46 ; 'F'
//   003867E4  MOVS    R0, R4
//   003867E6  BL      sub_35A902
//   003867EA  MOVS    R0, R4
//   003867EC  MOVS    R1, #0xB

//======================================================================
// sub_3871F8
// address: 0x003871F8   size: 0x58 (88 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003871F8  LDR     R5, [SP,#arg_88]
//   003871FA  STR     R5, [SP,#arg_C8]
//   003871FC  LDRB    R3, [R7,#0x12]
//   003871FE  CMP     R3, #0
//   00387200  BNE     loc_387212
//   00387202  MOVS    R3, #0x1A0
//   00387206  LDR     R3, [R7,R3]
//   00387208  CMP     R3, #0
//   0038720A  BNE     loc_387212
//   0038720C  MOVS    R0, R7
//   0038720E  BL      sub_13AD98
//   00387212  LDR     R0, [SP,#arg_B8]
//   00387214  LDR     R0, [R0,#0x18]
//   00387216  LSLS    R0, R0, #0x18
//   00387218  BPL     sub_387262
//   0038721A  LDRB    R3, [R7,#0x12]
//   0038721C  CMP     R3, #0
//   0038721E  BNE     sub_387262
//   00387220  MOVS    R3, #0x1A0
//   00387224  LDR     R4, [R7,R3]
//   00387226  CMP     R4, #0
//   00387228  BNE     sub_387262
//   0038722A  LDR     R2, [SP,#arg_C8]
//   0038722C  MOVS    R3, #1
//   0038722E  LDR     R0, [SP,#arg_8C]
//   00387230  MOVS    R1, #0x23 ; '#'
//   00387232  BL      sub_35AAF0
//   00387236  LDR     R0, [SP,#arg_8C]
//   00387238  MOVS    R1, #1
//   0038723A  BL      sub_3559A0
//   0038723E  LDR     R3, =(aRowsInserted - 0x38724C); "rows inserted"
//   00387240  STR     R4, [SP,#arg_0]
//   00387242  LDR     R0, [SP,#arg_8C]
//   00387244  MOVS    R1, R4
//   00387246  MOVS    R2, R4
//   00387248  ADD     R3, PC; "rows inserted"
//   0038724A  BL      sub_35A2BC
//   0038724E  B       sub_387262

//======================================================================
// sub_387250
// address: 0x00387250   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_387250(int a1)
{
  return sub_387262(a1);
}


//======================================================================
// sub_387256
// address: 0x00387256   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_387256(int a1)
{
  return sub_387262(a1);
}


//======================================================================
// sub_38725C
// address: 0x0038725C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_38725C(int a1)
{
  return sub_387262(a1);
}


//======================================================================
// sub_387260
// address: 0x00387260   size: 0x2 (2 bytes)
//======================================================================
int __fastcall sub_387260(int a1)
{
  return sub_387262(a1);
}


//======================================================================
// sub_387262
// address: 0x00387262   size: 0x2C (44 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_387262(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v9; // [sp-B4h] [bp-B4h]
  _DWORD *v10; // [sp-98h] [bp-98h]
  _DWORD *v11; // [sp-94h] [bp-94h]
  _DWORD *v12; // [sp-84h] [bp-84h]
  _DWORD *v13; // [sp-7Ch] [bp-7Ch]
  _DWORD *v14; // [sp-60h] [bp-60h]

  sub_3550CC(v12, v14);
  sub_3551E8(v12, v13);
  sub_355184(v12, v10);
  sub_354DDC(v12, v11);
  sub_354940(v12, v9);
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_38728E
// address: 0x0038728E   size: 0x8A (138 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0038728E  LDR     R4, [R4,#0x14]
//   00387290  BL      sub_386630
//   00387294  LDR     R5, [R7,#0x48]
//   00387296  MOVS    R0, R7
//   00387298  MOVS    R3, R5
//   0038729A  ADDS    R3, #1
//   0038729C  STR     R3, [R7,#0x48]
//   0038729E  STR     R5, [SP,#arg_9C]
//   003872A0  BL      sub_34EA6E
//   003872A4  MOVS    R5, R0
//   003872A6  MOVS    R0, R7
//   003872A8  BL      sub_34EA6E
//   003872AC  LDR     R3, [SP,#arg_94]
//   003872AE  MOVS    R4, R0
//   003872B0  MOVS    R1, #0x37 ; '7'
//   003872B2  LDR     R2, [SP,#arg_9C]
//   003872B4  LDR     R0, [SP,#arg_8C]
//   003872B6  BL      sub_35AAF0
//   003872BA  MOVS    R1, #0x16
//   003872BC  LDR     R2, [SP,#arg_108]
//   003872BE  LDR     R0, [SP,#arg_8C]
//   003872C0  BL      sub_35AACE
//   003872C4  STR     R5, [SP,#arg_0]
//   003872C6  STR     R0, [SP,#arg_88]
//   003872C8  MOVS    R1, #0x30 ; '0'
//   003872CA  LDR     R2, [SP,#arg_C4]
//   003872CC  LDR     R3, [SP,#arg_94]
//   003872CE  LDR     R0, [SP,#arg_8C]
//   003872D0  BL      sub_35A902
//   003872D4  MOVS    R1, #0x45 ; 'E'
//   003872D6  LDR     R2, [SP,#arg_9C]
//   003872D8  MOVS    R3, R4
//   003872DA  LDR     R0, [SP,#arg_8C]
//   003872DC  BL      sub_35AAF0
//   003872E0  MOVS    R3, R5
//   003872E2  MOVS    R1, #0x46 ; 'F'
//   003872E4  LDR     R2, [SP,#arg_9C]
//   003872E6  STR     R4, [SP,#arg_0]
//   003872E8  LDR     R0, [SP,#arg_8C]
//   003872EA  BL      sub_35A902
//   003872EE  MOVS    R2, #0
//   003872F0  LDR     R3, [SP,#arg_88]
//   003872F2  MOVS    R1, #0x10
//   003872F4  LDR     R0, [SP,#arg_8C]
//   003872F6  BL      sub_35AAF0
//   003872FA  LDR     R0, [SP,#arg_8C]
//   003872FC  LDR     R1, [SP,#arg_88]
//   003872FE  BL      sub_34E46E
//   00387302  MOVS    R1, R5
//   00387304  MOVS    R0, R7
//   00387306  BL      sub_353416
//   0038730A  MOVS    R5, #1
//   0038730C  MOVS    R0, R7
//   0038730E  MOVS    R1, R4
//   00387310  BL      sub_353416
//   00387314  STR     R5, [SP,#arg_B0]
//   00387316  B       loc_386BC4

//======================================================================
// sub_387880
// address: 0x00387880   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_387880(int a1, char *a2, int *a3)
{
  int v4; // r4
  int *v6; // [sp+Ch] [bp-8h] BYREF

  v6 = nullptr;
  v4 = sqlite3_prepare_v2(a1, a2, -1, (int *)&v6, nullptr);
  if ( v4 == 0 )
  {
    if ( sqlite3_step((int)v6) == 100 )
      *a3 = sqlite3_column_int(v6, 0);
    return sqlite3_finalize((unsigned int *)v6);
  }
  return v4;
}


//======================================================================
// sub_3878BC
// address: 0x003878BC   size: 0x10A (266 bytes)
//======================================================================
int __fastcall sub_3878BC(_DWORD *a1, _BYTE *a2, int a3, char a4, int *a5, _DWORD *a6)
{
  _BYTE *i; // r3
  int v11; // r4
  char *v12; // r4
  int v13; // r0
  unsigned __int8 *v14; // r3
  int j; // r2
  int v16; // r4
  int v17; // [sp+10h] [bp-14h]
  int v19; // [sp+1Ch] [bp-8h] BYREF

  *a5 = 0;
  v19 = 0;
  if ( sub_36019C((int)a1) == 0 )
    return sub_35EB98(99981);
  if ( a3 < 0 )
  {
    v11 = a3;
  }
  else
  {
    for ( i = a2; ; i += 2 )
    {
      v11 = i - a2;
      if ( i - a2 >= a3 || *i == 0 && i[1] == 0 )
        break;
    }
  }
  sqlite3_mutex_enter(a1[3]);
  v12 = (char *)sub_35A2F0((int)a1, a2, v11, 2);
  if ( v12 != nullptr )
    v17 = sub_37BE58((int)a1, v12, -1, a4, 0, a5, &v19);
  else
    v17 = 0;
  if ( v19 != 0 && a6 != nullptr )
  {
    v13 = sub_34CEF0(v12, v19 - (_DWORD)v12);
    v14 = a2;
    for ( j = 0; j < v13; ++j )
    {
      if ( *v14 + (v14[1] << 8) - 55296 <= 0x7FFu )
        v14 += 4;
      else
        v14 += 2;
    }
    *a6 = v14;
  }
  sub_354940(a1, v12);
  v16 = sub_3602F4(__SPAIR64__(v17, (unsigned int)a1));
  sqlite3_mutex_leave(a1[3]);
  return v16;
}


//======================================================================
// sub_3879F8
// address: 0x003879F8   size: 0x98 (152 bytes)
//======================================================================
_DWORD *sub_3879F8(_DWORD *result, const char *a2, ...)
{
  int v2; // r4
  _DWORD *v3; // r6
  _DWORD *v4; // r7
  _DWORD *v5[25]; // [sp+18h] [bp-68h] BYREF
  va_list varg_r2; // [sp+98h] [bp+18h] BYREF

  va_start(varg_r2, a2);
  v2 = (int)result;
  v3 = (_DWORD *)*result;
  v5[0] = nullptr;
  if ( result[17] == 0 )
  {
    result = (_DWORD *)sub_3601F0((int)v3, (int)a2, (void **)varg_r2);
    v4 = result;
    if ( result != nullptr )
    {
      ++*(_BYTE *)(v2 + 18);
      j_memcpy(&v5[1], (const void *)(v2 + 444), 0x60u);
      j_memset((void *)(v2 + 444), 0, 0x60u);
      sub_37B8B0((int *)v2, (int)v4, v5);
      sub_354940(v3, v5[0]);
      sub_354940(v3, v4);
      result = j_memcpy((void *)(v2 + 444), &v5[1], 0x60u);
      --*(_BYTE *)(v2 + 18);
    }
  }
  return result;
}


//======================================================================
// sub_387A94
// address: 0x00387A94   size: 0x6C (108 bytes)
//======================================================================
void *__fastcall sub_387A94(int *a1, int a2, int a3, int a4)
{
  int v5; // r4
  void *result; // r0
  _BYTE *v7; // [sp+Ch] [bp-30h]
  unsigned __int8 v10[24]; // [sp+1Ch] [bp-20h] BYREF

  v5 = 1;
  v7 = *(_BYTE **)(16 * a2 + *(_DWORD *)(*a1 + 16));
  do
  {
    sqlite3_snprintf(24, (int)v10, (int)"sqlite_stat%d", v5);
    result = sub_34EAFE(*a1, v10, v7);
    if ( result != nullptr )
      result = sub_3879F8(a1, "DELETE FROM %Q.%s WHERE %s=%Q", v7, v10, a3, a4);
    ++v5;
  }
  while ( v5 != 5 );
  return result;
}


//======================================================================
// sub_387B0C
// address: 0x00387B0C   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_387B0C(_DWORD *a1, int a2, int a3)
{
  int v6; // r5
  const char *v7; // r3
  _DWORD *v9; // [sp+14h] [bp-8h]

  v9 = sub_35A956((int)a1);
  v6 = sub_34EA6E((int)a1);
  sub_35A902(v9, 114, a2, v6, a3);
  sub_34EEF2((int)a1);
  if ( a3 == 1 )
    v7 = "sqlite_temp_master";
  else
    v7 = "sqlite_master";
  sub_3879F8(
    a1,
    "UPDATE %Q.%s SET rootpage=%d WHERE #%d AND rootpage=#%d",
    *(_DWORD *)(16 * a3 + *(_DWORD *)(*a1 + 16)),
    v7,
    a2,
    v6,
    v6);
  return sub_353416((int)a1, v6);
}


//======================================================================
// sub_387B78
// address: 0x00387B78   size: 0x3DC (988 bytes)
//======================================================================
_DWORD *__fastcall sub_387B78(int a1, int a2, int a3, int a4)
{
  int **v6; // r0
  int *v7; // r4
  int v8; // r6
  int v9; // r3
  _DWORD *v10; // r6
  _DWORD *v11; // r7
  int i; // r3
  int *v13; // r0
  _DWORD *v14; // r7
  int j; // r6
  const char *v16; // r3
  int v17; // r3
  int k; // r6
  int m; // r7
  int v20; // r2
  int v21; // r0
  int v22; // r2
  _DWORD *n; // r4
  int v24; // r5
  _WORD *v25; // r3
  int v27; // [sp+0h] [bp-44h]
  int v28; // [sp+20h] [bp-24h]
  _DWORD *v29; // [sp+20h] [bp-24h]
  int v30; // [sp+24h] [bp-20h]
  int v32; // [sp+2Ch] [bp-18h]
  int *v33; // [sp+30h] [bp-14h]
  int v34; // [sp+34h] [bp-10h]
  int v35; // [sp+38h] [bp-Ch]

  v32 = *(_DWORD *)a1;
  if ( *(_BYTE *)(*(_DWORD *)a1 + 64) == 0 )
  {
    if ( a4 != 0 )
      ++*(_BYTE *)(*(_DWORD *)a1 + 67);
    v6 = sub_383B90((int *)a1, a3, a2 + 8);
    v7 = (int *)v6;
    if ( a4 != 0 )
    {
      --*(_BYTE *)(v32 + 67);
      if ( v6 == nullptr )
      {
        sub_36E744((int *)a1, *(_BYTE **)(a2 + 12));
        return sub_3550CC((_DWORD *)v32, (_DWORD *)a2);
      }
    }
    else if ( v6 == nullptr )
    {
      return sub_3550CC((_DWORD *)v32, (_DWORD *)a2);
    }
    v30 = sub_34F2A0(v32, (int)v6[17]);
    if ( (v7[11] & 0x10) == 0 || sub_365850((int *)a1, v7) == 0 )
    {
      v35 = 16 * v30;
      v8 = *(_DWORD *)(*(_DWORD *)(v32 + 16) + 16 * v30);
      if ( sub_360F08(a1) == 0 )
      {
        if ( a3 == 0 && (v7[11] & 0x10) != 0 )
          sub_353624(v32, (_DWORD *)v7[15]);
        if ( sub_360F08(a1) == 0 )
        {
          v27 = v8;
          if ( sub_360F08(a1) == 0 )
          {
            if ( sqlite3_strnicmp((_BYTE *)*v7, "sqlite_", 7) != 0
              || sqlite3_strnicmp((_BYTE *)*v7, "sqlite_stat", 11) == 0 )
            {
              v9 = v7[3];
              if ( a3 != 0 )
              {
                if ( v9 == 0 )
                {
                  sub_360E94((int *)a1, (int)"use DROP TABLE to delete table %s", *v7);
                  return sub_3550CC((_DWORD *)v32, (_DWORD *)a2);
                }
              }
              else if ( v9 != 0 )
              {
                sub_360E94((int *)a1, (int)"use DROP VIEW to delete view %s", *v7);
                return sub_3550CC((_DWORD *)v32, (_DWORD *)a2);
              }
              if ( sub_35A956(a1) != nullptr )
              {
                sub_36E620((int *)a1, 1, v30);
                sub_387A94((int *)a1, v30, (int)"tbl", *v7);
                v10 = *(_DWORD **)a1;
                if ( (*(_DWORD *)(*(_DWORD *)a1 + 24) & 0x80000) != 0 && (v7[11] & 0x10) == 0 )
                {
                  v28 = v7[3];
                  if ( v28 == 0 )
                  {
                    v11 = sub_35A956(a1);
                    if ( sub_34F1D0((unsigned int *)v7) != nullptr )
                    {
LABEL_37:
                      *(_BYTE *)(a1 + 442) = 1;
                      v13 = sub_35697A(v10, (int *)a2, 0);
                      sub_385DD8(a1, v13, nullptr);
                      *(_BYTE *)(a1 + 442) = 0;
                      if ( (v10[6] & 0x1000000) == 0 )
                      {
                        sub_35AAF0(v11, 130, 0, v11[8] + 2);
                        sub_35AA7C(a1, 787, 2, nullptr, -2, 4);
                      }
                      if ( v28 != 0 )
                        sub_34E412((int)v11, v28);
                    }
                    else
                    {
                      for ( i = v7[4]; i != 0; i = *(_DWORD *)(i + 4) )
                      {
                        if ( *(_BYTE *)(i + 24) != 0 || (v10[6] & 0x1000000) != 0 )
                        {
                          v28 = sub_35A856(v11[6]);
                          sub_35AAF0(v11, 130, 1, v28);
                          goto LABEL_37;
                        }
                      }
                    }
                  }
                }
                v29 = *(_DWORD **)a1;
                v14 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 16) + v35);
                v33 = sub_35A956(a1);
                sub_36E620((int *)a1, 1, v30);
                if ( (v7[11] & 0x10) != 0 )
                  sub_35A948(v33, 140);
                for ( j = sub_34F4D6((unsigned __int8 *)a1, (int)v7); j != 0; j = *(_DWORD *)(j + 32) )
                  sub_36E650((int *)a1, (_DWORD **)j);
                if ( (v7[11] & 8) != 0 )
                  sub_3879F8((_DWORD *)a1, "DELETE FROM %Q.sqlite_sequence WHERE name=%Q", *v14, *v7, v27);
                if ( v30 == 1 )
                  v16 = "sqlite_temp_master";
                else
                  v16 = "sqlite_master";
                sub_3879F8((_DWORD *)a1, "DELETE FROM %Q.%s WHERE tbl_name=%Q and type!='trigger'", *v14, v16, *v7);
                if ( a3 == 0 && (v7[11] & 0x10) == 0 )
                {
                  v17 = 0;
                  v34 = v7[8];
                  for ( k = v34; ; k = v22 )
                  {
                    for ( m = v7[2]; m != 0; m = *(_DWORD *)(m + 20) )
                    {
                      v20 = *(_DWORD *)(m + 44);
                      if ( (v17 == 0 || v20 < v17) && k < v20 )
                        k = *(_DWORD *)(m + 44);
                    }
                    if ( k == 0 )
                      break;
                    v21 = sub_34F2A0(*(_DWORD *)a1, v7[17]);
                    sub_387B0C((_DWORD *)a1, k, v21);
                    v22 = v34;
                    if ( v34 >= k )
                      v22 = 0;
                    v17 = k;
                  }
                }
                if ( (v7[11] & 0x10) != 0 )
                  sub_35A9FC(v33, 142, v30, 0, 0, (_DWORD *)*v7, 0);
                sub_35A9FC(v33, 120, v30, 0, 0, (_DWORD *)*v7, 0);
                sub_35AC42((_DWORD *)a1, v30);
                if ( (*(_WORD *)(*(_DWORD *)(v29[4] + v35 + 12) + 78) & 2) != 0 )
                {
                  for ( n = *(_DWORD **)(*(_DWORD *)(v29[4] + v35 + 12) + 16); n != nullptr; n = (_DWORD *)*n )
                  {
                    v24 = n[2];
                    if ( *(_DWORD *)(v24 + 12) != 0 )
                    {
                      sub_35528A(v29, n[2]);
                      *(_DWORD *)(v24 + 4) = 0;
                      *(_WORD *)(v24 + 38) = 0;
                    }
                  }
                  v25 = (_WORD *)(*(_DWORD *)(v29[4] + v35 + 12) + 78);
                  *v25 &= ~2u;
                }
              }
            }
            else
            {
              sub_360E94((int *)a1, (int)"table %s may not be dropped", *v7);
            }
          }
        }
      }
    }
  }
  return sub_3550CC((_DWORD *)v32, (_DWORD *)a2);
}


//======================================================================
// sub_387F54
// address: 0x00387F54   size: 0x7D8 (2008 bytes)
//======================================================================
int __fastcall sub_387F54(int *a1, int a2, int a3, _DWORD *a4, int *a5, int a6, int a7, _DWORD *a8, char a9, int a10)
{
  int v10; // r6
  int **v14; // r0
  int **v15; // r0
  const char **v16; // r5
  int v17; // r4
  const char *v18; // r2
  int v19; // r3
  int *v20; // r0
  int v21; // r4
  int v22; // r4
  int i; // r6
  int v24; // r3
  unsigned int v25; // r0
  unsigned int v26; // r6
  __int16 v27; // r1
  void **v28; // r0
  int v29; // r2
  _BYTE *v30; // r6
  const void *v31; // r6
  unsigned __int8 *v32; // r6
  int k; // r3
  int v34; // r2
  const char *m; // r6
  unsigned __int8 *v36; // r0
  unsigned __int8 *v37; // r1
  _BYTE *v38; // r6
  int v39; // r2
  int v40; // r3
  unsigned __int8 *v41; // r6
  unsigned int v42; // r0
  int *v43; // r6
  int v44; // r3
  int v45; // r3
  const char *v46; // r2
  const char *v47; // r3
  _DWORD *v48; // r0
  const char *v49; // r3
  const char *v50; // r2
  int v51; // r3
  unsigned __int8 *v53; // [sp+40h] [bp-54h]
  int j; // [sp+44h] [bp-50h]
  int n; // [sp+44h] [bp-50h]
  int v56; // [sp+44h] [bp-50h]
  size_t v57; // [sp+48h] [bp-4Ch]
  unsigned int v58; // [sp+48h] [bp-4Ch]
  __int16 v59; // [sp+48h] [bp-4Ch]
  int v60; // [sp+4Ch] [bp-48h]
  int v61; // [sp+4Ch] [bp-48h]
  int v62; // [sp+50h] [bp-44h]
  int v63; // [sp+54h] [bp-40h]
  int v64; // [sp+58h] [bp-3Ch]
  int v65; // [sp+5Ch] [bp-38h]
  int v66; // [sp+5Ch] [bp-38h]
  int v67; // [sp+5Ch] [bp-38h]
  _DWORD *v69; // [sp+64h] [bp-30h]
  int v70; // [sp+6Ch] [bp-28h]
  int *v71; // [sp+70h] [bp-24h] BYREF
  void *v72; // [sp+74h] [bp-20h] BYREF
  int *v73[7]; // [sp+78h] [bp-1Ch] BYREF

  v10 = *a1;
  v71 = nullptr;
  v72 = nullptr;
  v62 = v10;
  if ( *(_BYTE *)(v10 + 64) != 0 || *((_BYTE *)a1 + 455) != 0 || sub_38382A(a1) != 0 )
    goto LABEL_22;
  if ( a4 != nullptr )
  {
    v64 = sub_360FD8(a1, a2, a3, (int *)&v71);
    if ( v64 < 0 )
      goto LABEL_22;
    if ( *(_BYTE *)(v10 + 137) == 0 )
    {
      v14 = sub_384468(a1, (int)a4);
      if ( *(_DWORD *)(a3 + 4) == 0 && v14 != nullptr && v14[17] == *(int **)(*(_DWORD *)(v10 + 16) + 28) )
        v64 = 1;
    }
    sub_34EAB2(v73, a1, v64, (int *)"index", v71);
    sub_3616E8((_DWORD ***)v73, a4);
    v15 = sub_383B90(a1, 0, (int)(a4 + 2));
    v16 = (const char **)v15;
    if ( v15 == nullptr )
      goto LABEL_22;
    if ( v64 == 1 && *(int **)(*(_DWORD *)(v10 + 16) + 28) != v15[17] )
    {
      sub_360E94(a1, (int)"cannot create a TEMP index on non-TEMP table \"%s\"", (const char *)*v15);
LABEL_22:
      v53 = nullptr;
      v17 = 0;
      goto LABEL_144;
    }
    v63 = 0;
    if ( ((_BYTE)v15[11] & 0x20) != 0 )
      v63 = sub_35344C((int)v15[2]);
  }
  else
  {
    v16 = (const char **)a1[122];
    if ( v16 == nullptr )
      goto LABEL_22;
    v64 = sub_34F2A0(v10, (int)v16[17]);
    v63 = 0;
  }
  v60 = *(_DWORD *)(v10 + 16) + 16 * v64;
  if ( sqlite3_strnicmp(*v16, "sqlite_", 7) == 0 && sqlite3_strnicmp((_BYTE *)*v16 + 7, "altertab_", 9) != 0 )
  {
    sub_360E94(a1, (int)"table %s may not be indexed", *v16);
    goto LABEL_22;
  }
  if ( v16[3] != nullptr )
  {
    sub_360E94(a1, (int)"views may not be indexed");
    goto LABEL_22;
  }
  v17 = (_BYTE)v16[11] & 0x10;
  if ( v17 != 0 )
  {
    sub_360E94(a1, (int)"virtual tables may not be indexed");
    goto LABEL_22;
  }
  if ( v71 != nullptr )
  {
    v53 = sub_351C1C(v10, (int)v71);
    if ( v53 == nullptr )
      goto LABEL_22;
    if ( sub_36104C((unsigned __int8 *)a1, (char *)v53) != 0 )
      goto LABEL_144;
    v17 = *(unsigned __int8 *)(v10 + 137);
    if ( *(_BYTE *)(v10 + 137) == 0 && sub_34EAFE(v10, v53, (_BYTE *)*(unsigned __int8 *)(v10 + 137)) != nullptr )
    {
      sub_360E94(a1, (int)"there is already a table named %s", (const char *)v53);
      goto LABEL_144;
    }
    if ( sub_34EB58(v10, v53, *(_BYTE **)v60) != nullptr )
    {
      if ( a10 == 0 )
      {
        sub_360E94(a1, (int)"index %s already exists", (const char *)v53);
        v17 = 0;
        goto LABEL_144;
      }
      sub_36E5E0(a1, v64);
LABEL_143:
      v17 = 0;
      goto LABEL_144;
    }
  }
  else
  {
    v18 = v16[2];
    v19 = 1;
    while ( v18 != nullptr )
    {
      v18 = *((const char **)v18 + 5);
      ++v19;
    }
    v53 = (unsigned __int8 *)sub_36541C(v10, "sqlite_autoindex_%s_%d", *v16, v19);
    if ( v53 == nullptr )
      goto LABEL_22;
  }
  if ( sub_360F08((int)a1) != 0 || sub_360F08((int)a1) != 0 )
    goto LABEL_143;
  if ( a5 == nullptr )
  {
    v20 = sub_35B684((_DWORD *)*a1, nullptr, 0);
    a5 = v20;
    if ( v20 == nullptr )
    {
      v17 = 0;
      goto LABEL_144;
    }
    v21 = v20[2];
    *(_DWORD *)(v21 + 4) = sub_351BC8(*a1, *(void **)&v16[1][24 * *((__int16 *)v16 + 19) - 24]);
    *(_BYTE *)(a5[2] + 12) = a9;
  }
  v22 = 0;
  v65 = *a5;
  for ( i = 0; i < v65; ++i )
  {
    v24 = *(_DWORD *)(20 * i + a5[2]);
    if ( v24 != 0 )
      v22 += sub_34CF50(*(_DWORD *)(v24 + 8)) + 1;
  }
  v25 = sub_34CF50((unsigned int)v53);
  v26 = v25;
  if ( v63 != 0 )
    v27 = *(_WORD *)(v63 + 50);
  else
    v27 = 1;
  v28 = (void **)sub_35193A(v62, (__int16)(v27 + v65), v25 + v22 + 1, &v72);
  v17 = (int)v28;
  if ( *(_BYTE *)(v62 + 64) != 0 )
  {
    if ( v28 == nullptr )
      goto LABEL_144;
LABEL_140:
    sub_355244((_DWORD *)v62, v17);
    goto LABEL_143;
  }
  *v28 = v72;
  v72 = (char *)v72 + v26 + 1;
  j_memcpy(*v28, v53, v26 + 1);
  *(_DWORD *)(v17 + 12) = v16;
  *(_BYTE *)(v17 + 54) = a6;
  *(_BYTE *)(v17 + 55) = *(_BYTE *)(v17 + 55) & 0xF4 | (8 * (a6 != 0)) | (v71 == nullptr);
  *(_DWORD *)(v17 + 24) = *(_DWORD *)(*(_DWORD *)(v62 + 16) + 16 * v64 + 12);
  *(_WORD *)(v17 + 50) = *a5;
  if ( a8 != nullptr )
  {
    sub_3611B4((int)a1, (int *)v16, 16, a8, nullptr);
    *(_DWORD *)(v17 + 36) = a8;
  }
  v66 = a5[2];
  v70 = -(*(unsigned __int8 *)(*(_DWORD *)(v60 + 12) + 76) > 3u);
  for ( j = 0; j < *a5; ++j )
  {
    v29 = 0;
    v30 = *(_BYTE **)(v66 + 4);
    v57 = (size_t)v16[1];
    while ( 1 )
    {
      v61 = v29;
      if ( v29 >= *((__int16 *)v16 + 19) || sqlite3_stricmp(v30, *(unsigned __int8 **)(v57 + 24 * v29)) == 0 )
        break;
      v29 = v61 + 1;
    }
    if ( v61 >= *((__int16 *)v16 + 19) )
    {
      sub_360E94(a1, (int)"table %s has no column named %s", *v16, v30);
      *((_BYTE *)a1 + 17) = 1;
LABEL_141:
      a8 = nullptr;
      goto LABEL_140;
    }
    *(_WORD *)(2 * j + *(_DWORD *)(v17 + 4)) = v61;
    if ( *(_DWORD *)v66 != 0 )
    {
      v31 = *(const void **)(*(_DWORD *)v66 + 8);
      v58 = sub_34CF50((unsigned int)v31) + 1;
      j_memcpy(v72, v31, v58);
      v32 = (unsigned __int8 *)v72;
      v72 = (char *)v72 + v58;
    }
    else
    {
      v32 = *(unsigned __int8 **)&v16[1][24 * v61 + 16];
      if ( v32 == nullptr )
        v32 = "BINARY";
    }
    if ( *(_BYTE *)(v62 + 137) == 0 && sub_361D18(a1, v32) == nullptr )
      goto LABEL_141;
    *(_DWORD *)(4 * j + *(_DWORD *)(v17 + 32)) = v32;
    *(_BYTE *)(*(_DWORD *)(v17 + 28) + j) = *(_BYTE *)(v66 + 12) & v70;
    if ( v16[1][24 * v61 + 20] == 0 )
      *(_BYTE *)(v17 + 55) &= ~8u;
    v66 += 20;
  }
  if ( v63 != 0 )
  {
    for ( k = 0; k < *(unsigned __int16 *)(v63 + 50); ++k )
    {
      v67 = *(_DWORD *)(v17 + 4);
      v59 = *(_WORD *)(2 * k + *(_DWORD *)(v63 + 4));
      v34 = 0;
      do
      {
        if ( *(unsigned __int16 *)(v17 + 50) - v34 <= 0 )
        {
          *(_WORD *)(2 * j + v67) = v59;
          *(_DWORD *)(4 * j + *(_DWORD *)(v17 + 32)) = *(_DWORD *)(4 * k + *(_DWORD *)(v63 + 32));
          *(_BYTE *)(*(_DWORD *)(v17 + 28) + j++) = *(_BYTE *)(*(_DWORD *)(v63 + 28) + k);
          goto LABEL_84;
        }
        ++v34;
      }
      while ( *(__int16 *)(v67 + 2 * v34 - 2) != v59 );
      --*(_WORD *)(v17 + 52);
LABEL_84:
      ;
    }
  }
  else
  {
    *(_WORD *)(2 * j + *(_DWORD *)(v17 + 4)) = -1;
    *(_DWORD *)(4 * j + *(_DWORD *)(v17 + 32)) = "BINARY";
  }
  sub_34EE4A(v17);
  if ( a1[122] == 0 )
    sub_34EE10(v17);
  if ( v16 == (const char **)a1[122] )
  {
    for ( m = v16[2]; m != nullptr; m = *((const char **)m + 5) )
    {
      if ( *((unsigned __int16 *)m + 25) == *(unsigned __int16 *)(v17 + 50) )
      {
        for ( n = 0; n < *((unsigned __int16 *)m + 25); ++n )
        {
          if ( *(__int16 *)(*((_DWORD *)m + 1) + 2 * n) != *(__int16 *)(*(_DWORD *)(v17 + 4) + 2 * n) )
            break;
          v36 = *(unsigned __int8 **)(*((_DWORD *)m + 8) + 4 * n);
          v37 = *(unsigned __int8 **)(*(_DWORD *)(v17 + 32) + 4 * n);
          if ( v36 != v37 && sqlite3_stricmp(v36, v37) != 0 )
            break;
        }
        if ( n == *((unsigned __int16 *)m + 25) )
        {
          v38 = m + 54;
          v39 = (unsigned __int8)*v38;
          v40 = *(unsigned __int8 *)(v17 + 54);
          if ( v39 != v40 )
          {
            if ( v39 != 10 && v40 != 10 )
              sub_360E94(a1, (int)"conflicting ON CONFLICT clauses specified", 0);
            if ( *v38 == 10 )
              *v38 = *(_BYTE *)(v17 + 54);
          }
          goto LABEL_141;
        }
      }
    }
  }
  if ( *(_BYTE *)(v62 + 137) != 0 )
  {
    v41 = *(unsigned __int8 **)v17;
    v42 = sub_34CF50(*(_DWORD *)v17);
    if ( sub_35271C((unsigned int *)(*(_DWORD *)(v17 + 24) + 24), v41, v42, (int *)v17) != nullptr )
    {
      *(_BYTE *)(v62 + 64) = 1;
      goto LABEL_141;
    }
    *(_DWORD *)(v62 + 24) |= 2u;
    if ( a4 != nullptr )
      *(_DWORD *)(v17 + 44) = *(_DWORD *)(v62 + 132);
  }
  else if ( a1[17] == 0 && (((_BYTE)v16[11] & 0x20) == 0 || a4 != nullptr) )
  {
    v56 = a1[19] + 1;
    a1[19] = v56;
    v43 = sub_35A956((int)a1);
    if ( v43 == nullptr )
      goto LABEL_141;
    sub_36E620(a1, 1, v64);
    sub_35AAF0(v43, 116, v64, v56);
    if ( a7 != 0 )
    {
      v44 = a1[127] - *v71 + a1[128];
      v45 = v44 - (*(_BYTE *)(*v71 + v44 - 1) == 59);
      if ( a6 != 0 )
        v46 = " UNIQUE";
      else
        v46 = (const char *)&unk_3FB8EA;
      v69 = (_DWORD *)sub_36541C(v62, "CREATE%s INDEX %.*s", v46, v45, (const char *)*v71);
    }
    else
    {
      v69 = nullptr;
    }
    if ( v64 == 1 )
      v47 = "sqlite_temp_master";
    else
      v47 = "sqlite_master";
    sub_3879F8(
      a1,
      "INSERT INTO %Q.%s VALUES('index',%Q,%Q,#%d,%Q);",
      *(_DWORD *)(*(_DWORD *)(v62 + 16) + 16 * v64),
      v47,
      *(_DWORD *)v17,
      *v16,
      v56,
      v69);
    sub_354940((_DWORD *)v62, v69);
    if ( a4 != nullptr )
    {
      sub_373DC6(a1, v17, v56);
      sub_35AC42(a1, v64);
      v48 = (_DWORD *)sub_36541C(v62, "name='%q' AND type='index'", *(_DWORD *)v17);
      sub_35AC80(v43, v64, v48);
      sub_35AACE(v43, 138, 0);
    }
  }
  if ( *(_BYTE *)(v62 + 137) == 0 && a4 != nullptr )
    goto LABEL_141;
  v49 = v16[2];
  if ( a6 == 5 && (v50 = v16[2], v49 != nullptr) && v49[54] != 5 )
  {
    while ( 1 )
    {
      v51 = *((_DWORD *)v50 + 5);
      if ( v51 == 0 || *(_BYTE *)(v51 + 54) == 5 )
        break;
      v50 = *((const char **)v50 + 5);
    }
    *(_DWORD *)(v17 + 20) = v51;
    *((_DWORD *)v50 + 5) = v17;
  }
  else
  {
    *(_DWORD *)(v17 + 20) = v49;
    v16[2] = (const char *)v17;
  }
  a8 = nullptr;
LABEL_144:
  sub_35519A((_DWORD *)v62, (int)a8);
  sub_3551E8((_DWORD *)v62, a5);
  sub_3550CC((_DWORD *)v62, a4);
  sub_354940((_DWORD *)v62, v53);
  return v17;
}


//======================================================================
// sub_38872C
// address: 0x0038872C   size: 0x192 (402 bytes)
//======================================================================
_DWORD *__fastcall sub_38872C(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // r4
  int *v7; // r6
  int i; // r7
  int v9; // r4
  int v10; // r0
  int *v12; // [sp+0h] [bp-3Ch]
  int v13; // [sp+1Ch] [bp-20h]
  _BYTE *v14; // [sp+20h] [bp-1Ch]
  int v15; // [sp+24h] [bp-18h]
  int v16; // [sp+28h] [bp-14h]

  v5 = *(_DWORD *)(a1 + 488);
  v7 = a2;
  if ( v5 == 0 || *(_BYTE *)(a1 + 455) != 0 )
    return sub_3551E8(*(_DWORD **)a1, v7);
  if ( (*(_BYTE *)(v5 + 44) & 4) != 0 )
  {
    sub_360E94((int *)a1, (int)"table \"%s\" has more than one primary key", *(const char **)v5);
    return sub_3551E8(*(_DWORD **)a1, v7);
  }
  *(_BYTE *)(v5 + 44) |= 4u;
  if ( a2 != nullptr )
  {
    v13 = 0;
    v16 = *a2;
    LOWORD(i) = -1;
    v14 = nullptr;
    while ( v13 < v16 )
    {
      for ( i = 0; i < *(__int16 *)(v5 + 38); ++i )
      {
        v15 = 24 * i;
        if ( sqlite3_stricmp(*(_BYTE **)(v7[2] + 20 * v13 + 4), *(unsigned __int8 **)(*(_DWORD *)(v5 + 4) + 24 * i)) == 0 )
        {
          *(_BYTE *)(*(_DWORD *)(v5 + 4) + v15 + 23) |= 1u;
          v14 = *(_BYTE **)(*(_DWORD *)(v5 + 4) + v15 + 12);
          break;
        }
      }
      ++v13;
    }
    if ( v16 != 1 )
      goto LABEL_21;
  }
  else
  {
    i = *(__int16 *)(v5 + 38) - 1;
    *(_BYTE *)(*(_DWORD *)(v5 + 4) + 24 * i + 23) |= 1u;
    v14 = *(_BYTE **)(*(_DWORD *)(v5 + 4) + 24 * i + 12);
  }
  if ( v14 != nullptr && sqlite3_stricmp(v14, "INTEGER") == 0 && a5 == 0 )
  {
    *(_WORD *)(v5 + 36) = i;
    *(_BYTE *)(v5 + 45) = a3;
    *(_BYTE *)(v5 + 44) |= 8 * (_BYTE)a4;
    if ( v7 != nullptr )
      *(_BYTE *)(a1 + 452) = *(_BYTE *)(v7[2] + 12);
    return sub_3551E8(*(_DWORD **)a1, v7);
  }
LABEL_21:
  if ( a4 != 0 )
  {
    sub_360E94((int *)a1, (int)"AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 8);
    if ( v9 != 0 )
      *(_DWORD *)(a1 + 424) = sub_35A948(*(_DWORD **)(a1 + 8), 155);
    v12 = v7;
    v7 = nullptr;
    v10 = sub_387F54((int *)a1, 0, 0, nullptr, v12, a3, 0, nullptr, a5, 0);
    if ( v10 != 0 && (*(_BYTE *)(v10 + 55) = *(_BYTE *)(v10 + 55) & 0xFC | 2, v9 != 0) )
      sub_34E46E(v9, *(_DWORD *)(a1 + 424));
    else
      v7 = nullptr;
  }
  return sub_3551E8(*(_DWORD **)a1, v7);
}


//======================================================================
// sub_3888CC
// address: 0x003888CC   size: 0x63A (1594 bytes)
//======================================================================
int __fastcall sub_3888CC(__int64 a1, _DWORD *a2, int a3, int a4)
{
  int v4; // r7
  _DWORD *v5; // r4
  _DWORD *v6; // r5
  int v7; // r1
  int *v8; // r0
  int *v9; // r5
  int v10; // r6
  int v11; // r0
  int v12; // r5
  int v13; // r3
  int v14; // r0
  int i; // r6
  int v16; // r3
  int v17; // r0
  int v18; // r0
  int v19; // r3
  __int16 v20; // r3
  __int16 *v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // r3
  int v25; // r0
  _DWORD *v26; // r3
  int v27; // r3
  int v28; // r2
  int v29; // r0
  int v30; // r1
  int v31; // r5
  const char *v32; // r2
  int v33; // r2
  int v34; // r12
  int k; // r1
  _BYTE *v36; // r0
  int v37; // r3
  _BYTE *v38; // r1
  int v39; // r3
  int v40; // r2
  const char *v41; // r6
  int v42; // r0
  int v43; // r3
  _DWORD *v44; // r5
  int v45; // r3
  int v46; // r6
  size_t v47; // r6
  _DWORD *v48; // r1
  int v49; // r3
  const char *v50; // r3
  _DWORD *v51; // r5
  _DWORD *v52; // r0
  unsigned __int8 *v53; // r5
  unsigned int v54; // r0
  int v56; // [sp+30h] [bp-4Ch]
  int *v57; // [sp+30h] [bp-4Ch]
  int v58; // [sp+34h] [bp-48h]
  int v59; // [sp+34h] [bp-48h]
  int j; // [sp+38h] [bp-44h]
  int v61; // [sp+38h] [bp-44h]
  int v62; // [sp+38h] [bp-44h]
  int v63; // [sp+3Ch] [bp-40h]
  int v64; // [sp+40h] [bp-3Ch]
  int v65; // [sp+44h] [bp-38h]
  int v66; // [sp+44h] [bp-38h]
  char *v68; // [sp+48h] [bp-34h]
  int v69; // [sp+4Ch] [bp-30h]
  const char *v70; // [sp+4Ch] [bp-30h]
  _DWORD *v71; // [sp+50h] [bp-2Ch]
  const char *v73; // [sp+58h] [bp-24h]
  const char *v74; // [sp+5Ch] [bp-20h]
  int v75[6]; // [sp+64h] [bp-18h] BYREF

  v71 = (_DWORD *)HIDWORD(a1);
  v4 = a1;
  v63 = *(_DWORD *)a1;
  if ( a2 == nullptr && a4 == 0 )
    return a1;
  if ( *(_BYTE *)(v63 + 64) != 0 )
    return a1;
  v5 = *(_DWORD **)(a1 + 488);
  if ( v5 == nullptr )
    return a1;
  if ( *(_BYTE *)(v63 + 137) != 0 )
    v5[8] = *(_DWORD *)(v63 + 132);
  if ( (a3 & 0x20) != 0 )
  {
    if ( (v5[11] & 8) != 0 )
    {
      LODWORD(a1) = sub_360E94((int *)a1, (int)"AUTOINCREMENT not allowed on WITHOUT ROWID tables");
      return a1;
    }
    if ( (v5[11] & 4) != 0 )
    {
      *((_BYTE *)v5 + 44) |= 0x20u;
      HIDWORD(a1) = *(_DWORD *)(a1 + 420);
      v65 = *(_DWORD *)a1;
      v6 = *(_DWORD **)(a1 + 8);
      if ( HIDWORD(a1) != 0 )
        *(_BYTE *)sub_34E484(*(_DWORD **)(a1 + 8), SHIDWORD(a1)) = 116;
      v7 = *(_DWORD *)(v4 + 424);
      if ( v7 != 0 )
        *(_BYTE *)sub_34E484(v6, v7) = 16;
      if ( *((__int16 *)v5 + 18) < 0 )
      {
        v12 = sub_35344C(v5[2]);
      }
      else
      {
        v8 = sub_35B684(*(_DWORD **)v4, nullptr, 0);
        v9 = v8;
        if ( v8 == nullptr )
          goto LABEL_57;
        v10 = v8[2];
        *(_DWORD *)(v10 + 4) = sub_351BC8(*(_DWORD *)v4, *(void **)(24 * *((__int16 *)v5 + 18) + v5[1]));
        *(_BYTE *)(v9[2] + 12) = *(_BYTE *)(v4 + 452);
        v11 = sub_387F54((int *)v4, 0, 0, nullptr, v9, *((unsigned __int8 *)v5 + 45), 0, nullptr, 0, 0);
        v12 = v11;
        if ( v11 == 0 )
          goto LABEL_57;
        *(_BYTE *)(v11 + 55) = *(_BYTE *)(v11 + 55) & 0xFC | 2;
        *((_WORD *)v5 + 18) = -1;
      }
      *(_BYTE *)(v12 + 55) |= 0x20u;
      v13 = 0;
      v56 = *(unsigned __int16 *)(v12 + 50);
      while ( v13 < v56 )
      {
        v14 = 2 * v13++;
        *(_BYTE *)(v5[1] + 24 * *(__int16 *)(v14 + *(_DWORD *)(v12 + 4)) + 20) = 1;
      }
      *(_BYTE *)(v12 + 55) |= 8u;
      *(_DWORD *)(v12 + 44) = v5[8];
      for ( i = v5[2]; i != 0; i = *(_DWORD *)(i + 20) )
      {
        if ( (*(_BYTE *)(i + 55) & 3) != 2 )
        {
          v16 = 0;
          for ( j = 0; ; ++j )
          {
            v69 = *(unsigned __int16 *)(i + 50);
            if ( j >= v56 )
              break;
            v17 = 0;
            while ( v69 - v17 > 0 )
            {
              ++v17;
              if ( *(__int16 *)(*(_DWORD *)(i + 4) + 2 * v17 - 2) == *(__int16 *)(*(_DWORD *)(v12 + 4) + 2 * j) )
                goto LABEL_34;
            }
            ++v16;
LABEL_34:
            ;
          }
          if ( v16 != 0 )
          {
            v18 = sub_35409E(v65, i, v69 + v16);
            if ( v18 != 0 )
              goto LABEL_57;
            v61 = *(unsigned __int16 *)(i + 50);
            while ( v18 < v56 )
            {
              v58 = *(_DWORD *)(i + 4);
              v19 = 0;
              while ( *(unsigned __int16 *)(i + 50) - v19 > 0 )
              {
                ++v19;
                if ( *(__int16 *)(2 * v19 + v58 - 2) == *(__int16 *)(2 * v18 + *(_DWORD *)(v12 + 4)) )
                  goto LABEL_45;
              }
              *(_WORD *)(2 * v61 + v58) = *(_WORD *)(2 * v18 + *(_DWORD *)(v12 + 4));
              *(_DWORD *)(4 * v61++ + *(_DWORD *)(i + 32)) = *(_DWORD *)(4 * v18 + *(_DWORD *)(v12 + 32));
LABEL_45:
              ++v18;
            }
          }
          else
          {
            *(_WORD *)(i + 52) = *(_WORD *)(i + 50);
          }
        }
      }
      v20 = *((_WORD *)v5 + 19);
      if ( v56 >= v20 )
      {
        *(_WORD *)(v12 + 52) = v20;
      }
      else if ( sub_35409E(v65, v12, v20) == 0 )
      {
        while ( i < *((__int16 *)v5 + 19) )
        {
          v21 = *(__int16 **)(v12 + 4);
          v22 = v56;
          while ( v22 > 0 )
          {
            v23 = *v21;
            --v22;
            ++v21;
            if ( i == v23 )
              goto LABEL_55;
          }
          *(_WORD *)(2 * v56 + *(_DWORD *)(v12 + 4)) = i;
          v24 = 4 * v56++;
          *(_DWORD *)(v24 + *(_DWORD *)(v12 + 32)) = "BINARY";
LABEL_55:
          ++i;
        }
      }
      goto LABEL_57;
    }
    sub_360E94((int *)a1, (int)"PRIMARY KEY missing on table %s", (const char *)*v5);
  }
LABEL_57:
  v25 = sub_34F2A0(v63, v5[17]);
  v26 = (_DWORD *)v5[6];
  v66 = v25;
  if ( v26 != nullptr )
    sub_3611B4(v4, v5, 4, nullptr, v26);
  v27 = *((__int16 *)v5 + 19);
  v28 = v5[1];
  v29 = 0;
  while ( v27 > 0 )
  {
    v30 = *(unsigned __int8 *)(v28 + 22);
    --v27;
    v28 += 24;
    v29 += v30;
  }
  LODWORD(a1) = sub_34D98C(4 * (v29 + ((unsigned int)*((__int16 *)v5 + 18) >> 31)));
  v31 = v5[2];
  *((_WORD *)v5 + 21) = a1;
  while ( v31 != 0 )
  {
    LODWORD(a1) = sub_34EE10(v31);
    v31 = *(_DWORD *)(v31 + 20);
  }
  if ( *(_BYTE *)(v63 + 137) == 0 )
  {
    LODWORD(a1) = sub_35A956(v4);
    v57 = (int *)a1;
    if ( (_DWORD)a1 == 0 )
      return a1;
    sub_35AACE((_DWORD *)a1, 58, 0);
    if ( v5[3] != 0 )
    {
      v32 = "VIEW";
      v70 = "view";
    }
    else
    {
      v32 = "TABLE";
      v70 = "table";
    }
    if ( a4 != 0 )
    {
      sub_35A902(v57, 53, 1, *(_DWORD *)(v4 + 392), v66);
      sub_34E458((int)v57, 2);
      *(_DWORD *)(v4 + 72) = 2;
      LOWORD(v75[0]) = 10;
      v75[1] = 1;
      v75[2] = 0;
      v75[3] = 0;
      sub_370488((int *)v4, a4, (unsigned __int8 *)v75);
      sub_35AACE(v57, 58, 1);
      if ( *(_DWORD *)(v4 + 68) == 0 )
      {
        LODWORD(a1) = sub_3657C8((int *)v4, a4);
        HIDWORD(a1) = a1;
        if ( (_DWORD)a1 == 0 )
          return a1;
        *((_WORD *)v5 + 19) = *(_WORD *)(a1 + 38);
        v5[1] = *(_DWORD *)(a1 + 4);
        *(_WORD *)(a1 + 38) = 0;
        *(_DWORD *)(a1 + 4) = 0;
        LODWORD(a1) = v63;
        sub_354F8A(a1);
      }
      v33 = 0;
      v34 = *((__int16 *)v5 + 19);
      for ( k = 0; k < v34; ++k )
      {
        v36 = *(_BYTE **)(v5[1] + 24 * k);
        v37 = 0;
        while ( *v36 != 0 )
          v37 += (*v36++ == 34) + 1;
        v33 += v37 + 7;
      }
      v38 = (_BYTE *)*v5;
      v39 = 0;
      while ( *v38 != 0 )
        v39 += (*v38++ == 34) + 1;
      v40 = v33 + v39 + 2;
      if ( v40 > 49 )
      {
        v73 = "\n)";
        v74 = ",\n  ";
        v41 = "\n  ";
      }
      else
      {
        v73 = ")";
        v74 = ",";
        v41 = (const char *)&unk_3FB8EA;
      }
      v62 = v40 + 6 * v34 + 35;
      v42 = sub_3516AC(0, v62);
      v44 = (_DWORD *)v42;
      if ( v42 != 0 )
      {
        sqlite3_snprintf(v62, v42, (int)"CREATE TABLE ", v43);
        v75[0] = sub_34CF50((unsigned int)v44);
        sub_357F48((int)v44, v75, (unsigned __int8 *)*v5);
        v45 = v75[0]++;
        *((_BYTE *)v44 + v45) = 40;
        v64 = 0;
        v59 = v5[1];
        while ( v64 < *((__int16 *)v5 + 19) )
        {
          sqlite3_snprintf(v62 - v75[0], (int)v44 + v75[0], (int)v41, v62);
          v46 = v75[0];
          v75[0] = v46 + sub_34CF50((unsigned int)v44 + v75[0]);
          sub_357F48((int)v44, v75, *(unsigned __int8 **)v59);
          v68 = off_454DE8[*(unsigned __int8 *)(v59 + 21) - 72];
          v47 = sub_34CF50((unsigned int)v68);
          j_memcpy((char *)v44 + v75[0], v68, v47);
          v75[0] += v47;
          ++v64;
          v59 += 24;
          v41 = v74;
        }
        sqlite3_snprintf(v62 - v75[0], (int)v44 + v75[0], (int)"%s", (int)v73);
      }
      else
      {
        *(_BYTE *)(v63 + 64) = 1;
      }
    }
    else
    {
      v48 = (_DWORD *)(v4 + 508);
      if ( a3 == 0 )
        v48 = a2;
      v49 = *v48 - *(_DWORD *)(v4 + 500);
      if ( *(_BYTE *)*v48 != 59 )
        v49 += v48[1];
      v44 = (_DWORD *)sub_36541C(v63, "CREATE %s %.*s", v32, v49, *(const char **)(v4 + 500));
    }
    if ( v66 == 1 )
      v50 = "sqlite_temp_master";
    else
      v50 = "sqlite_master";
    sub_3879F8(
      (_DWORD *)v4,
      "UPDATE %Q.%s SET type='%s', name=%Q, tbl_name=%Q, rootpage=#%d, sql=%Q WHERE rowid=#%d",
      *(_DWORD *)(*(_DWORD *)(v63 + 16) + 16 * v66),
      v50,
      v70,
      *v5,
      *v5,
      *(_DWORD *)(v4 + 392),
      v44,
      *(_DWORD *)(v4 + 388));
    sub_354940((_DWORD *)v63, v44);
    sub_35AC42((_DWORD *)v4, v66);
    if ( (v5[11] & 8) != 0 )
    {
      v51 = (_DWORD *)(*(_DWORD *)(v63 + 16) + 16 * v66);
      if ( *(_DWORD *)(v51[3] + 72) == 0 )
        sub_3879F8((_DWORD *)v4, "CREATE TABLE %Q.sqlite_sequence(name,seq)", *v51);
    }
    v52 = (_DWORD *)sub_36541C(v63, "tbl_name='%q' AND type!='trigger'", *v5);
    LODWORD(a1) = sub_35AC80(v57, v66, v52);
  }
  if ( *(_BYTE *)(v63 + 137) != 0 )
  {
    v53 = (unsigned __int8 *)*v5;
    v54 = sub_34CF50(*v5);
    LODWORD(a1) = sub_35271C((unsigned int *)(v5[17] + 8), v53, v54, v5);
    if ( (_DWORD)a1 != 0 )
    {
      *(_BYTE *)(v63 + 64) = 1;
    }
    else
    {
      *(_DWORD *)(v4 + 488) = 0;
      *(_DWORD *)(v63 + 24) |= 2u;
      if ( v5[3] == 0 )
      {
        if ( *v71 == 0 )
          v71 = a2;
        LODWORD(a1) = sub_34CEF0(*(_BYTE **)(v4 + 500), *v71 - *(_DWORD *)(v4 + 500)) + 13;
        v5[12] = a1;
      }
    }
  }
  return a1;
}


//======================================================================
// sub_388F4C
// address: 0x00388F4C   size: 0xFC (252 bytes)
//======================================================================
int *__fastcall sub_388F4C(int *a1, int a2, int a3, int a4, int a5)
{
  int *result; // r0
  int v7; // r5
  _DWORD *v8; // r6
  int v9; // r7
  int i; // r4
  unsigned __int8 *v11; // [sp+Ch] [bp-30h]
  int *v12; // [sp+10h] [bp-2Ch]
  int v14; // [sp+18h] [bp-24h]
  _BYTE v17[20]; // [sp+28h] [bp-14h] BYREF

  v14 = *a1;
  result = sub_35A956((int)a1);
  v12 = result;
  if ( result != nullptr )
  {
    v7 = 0;
    v8 = (_DWORD *)(*(_DWORD *)(v14 + 16) + 16 * a2);
    do
    {
      v11 = (unsigned __int8 *)off_454E60[2 * v7];
      result = (int *)sub_34EAFE(v14, v11, (_BYTE *)*v8);
      if ( result != nullptr )
      {
        v9 = result[8];
        *(_DWORD *)&v17[4 * v7 + 4] = v9;
        v17[v7] = 0;
        sub_35A7C8((int)a1, a2, (unsigned int)v9 | 0x100000000LL, (int)v11);
        if ( a4 != 0 )
          result = sub_3879F8(a1, "DELETE FROM %Q.%s WHERE %s=%Q", *v8, v11, a5, a4);
        else
          result = (int *)sub_35AAF0(v12, 115, v9, a2);
      }
      else if ( off_454E60[2 * v7 + 1] != nullptr )
      {
        result = sub_3879F8(a1, "CREATE TABLE %Q.%s(%s)", *v8, v11, off_454E60[2 * v7 + 1]);
        *(_DWORD *)&v17[4 * v7 + 4] = a1[98];
        v17[v7] = 2;
      }
      ++v7;
    }
    while ( v7 != 3 );
    for ( i = 0; off_454E60[2 * i + 1] != nullptr; ++i )
    {
      sub_35A98A(v12, 53, i + a3, *(_DWORD *)&v17[4 * i + 4], a2, (int *)((char *)&dword_0 + 3));
      result = (int *)sub_34E458((int)v12, v17[i]);
    }
  }
  return result;
}


//======================================================================
// sub_389058
// address: 0x00389058   size: 0x6C (108 bytes)
//======================================================================
_DWORD *__fastcall sub_389058(int *a1, int a2)
{
  int v4; // r6
  int v5; // r7
  int **v6; // r6
  _DWORD *result; // r0
  int v8; // [sp+8h] [bp-Ch]
  int v9; // [sp+Ch] [bp-8h]

  v4 = *(_DWORD *)(*(_DWORD *)(*a1 + 16) + 16 * a2 + 12);
  sub_36E620(a1, 0, a2);
  v5 = a1[18];
  a1[18] = v5 + 3;
  sub_388F4C(a1, a2, v5, 0, 0);
  v6 = *(int ***)(v4 + 16);
  v8 = a1[19] + 1;
  v9 = a1[18];
  while ( v6 != nullptr )
  {
    sub_3621F4(a1, (_DWORD **)v6[2], 0, v5, v8, v9);
    v6 = (int **)*v6;
  }
  result = sub_35A956((int)a1);
  if ( result != nullptr )
    return (_DWORD *)sub_35AACE(result, 119, a2);
  return result;
}


//======================================================================
// sub_3890C4
// address: 0x003890C4   size: 0x78 (120 bytes)
//======================================================================
_DWORD *__fastcall sub_3890C4(int *a1, int *a2, int *a3)
{
  int v6; // r5
  _DWORD *result; // r0
  int v8; // [sp+Ch] [bp-8h]

  v6 = sub_34F2A0(*a1, a2[17]);
  sub_36E620(a1, 0, v6);
  v8 = a1[18];
  a1[18] = v8 + 3;
  if ( a3 != nullptr )
    sub_388F4C(a1, v6, v8, *a3, (int)"idx");
  else
    sub_388F4C(a1, v6, v8, *a2, (int)"tbl");
  sub_3621F4(a1, (_DWORD **)a2, (int)a3, v8, a1[19] + 1, a1[18]);
  result = sub_35A956((int)a1);
  if ( result != nullptr )
    return (_DWORD *)sub_35AACE(result, 119, v6);
  return result;
}


//======================================================================
// sub_389144
// address: 0x00389144   size: 0xFA (250 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_389144(int *a1, int a2, int a3)
{
  _DWORD *v6; // r4
  unsigned __int8 *result; // r0
  int v8; // r7
  unsigned __int8 *v9; // r6
  int *v10; // r7
  int *v11; // r0
  int *v12; // r1
  _DWORD *v13; // r0
  unsigned __int8 *v14; // r1
  unsigned __int8 *v15; // r7
  int *v16; // r6
  int *v17; // r0
  int *v18; // r1
  unsigned __int8 *v19; // [sp+0h] [bp-14h]
  _BYTE *v20; // [sp+0h] [bp-14h]
  int v21; // [sp+Ch] [bp-8h] BYREF

  v6 = (_DWORD *)*a1;
  result = (unsigned __int8 *)sub_38382A(a1);
  if ( result != nullptr )
    return result;
  if ( a2 == 0 )
  {
    while ( a2 < v6[5] )
    {
      if ( a2 != 1 )
        result = (unsigned __int8 *)sub_389058(a1, a2);
      ++a2;
    }
    return result;
  }
  if ( *(_DWORD *)(a3 + 4) != 0 )
  {
    result = (unsigned __int8 *)sub_360FD8(a1, a2, a3, &v21);
    if ( (int)result < 0 )
      return result;
    v20 = *(_BYTE **)(16 * (_DWORD)result + v6[4]);
    result = sub_351C1C((int)v6, v21);
    v15 = result;
    if ( result == nullptr )
      return result;
    v16 = (int *)sub_34EB58((int)v6, result, v20);
    v17 = a1;
    if ( v16 != nullptr )
    {
      v18 = (int *)v16[3];
    }
    else
    {
      v18 = (int *)sub_383B28((int)a1, 0, v15, v20);
      if ( v18 == nullptr )
      {
LABEL_24:
        v13 = v6;
        v14 = v15;
        return (unsigned __int8 *)sub_354940(v13, v14);
      }
      v17 = a1;
    }
    sub_3890C4(v17, v18, v16);
    goto LABEL_24;
  }
  v19 = sub_351C1C((int)v6, a2);
  v8 = sub_34EBAE((int)v6, v19);
  sub_354940(v6, v19);
  if ( v8 >= 0 )
    return (unsigned __int8 *)sub_389058(a1, v8);
  result = sub_351C1C((int)v6, a2);
  v9 = result;
  if ( result != nullptr )
  {
    v10 = (int *)sub_34EB58((int)v6, result, nullptr);
    v11 = a1;
    if ( v10 != nullptr )
    {
      v12 = (int *)v10[3];
    }
    else
    {
      v12 = (int *)sub_383B28((int)a1, 0, v9, nullptr);
      if ( v12 == nullptr )
      {
LABEL_16:
        v13 = v6;
        v14 = v9;
        return (unsigned __int8 *)sub_354940(v13, v14);
      }
      v11 = a1;
    }
    sub_3890C4(v11, v12, v10);
    goto LABEL_16;
  }
  return result;
}


//======================================================================
// sub_389240
// address: 0x00389240   size: 0x118 (280 bytes)
//======================================================================
int *__fastcall sub_389240(int *result, _DWORD *a2)
{
  unsigned __int8 **v3; // r5
  int *v4; // r4
  int v5; // r6
  _DWORD *v6; // r7
  const char *v7; // r3
  int *v8; // r7
  _DWORD *v9; // r0
  unsigned __int8 *v10; // r4
  unsigned int v11; // r0
  unsigned __int8 *v12; // r7
  unsigned int v13; // r0
  int v14; // [sp+14h] [bp-8h]

  v3 = (unsigned __int8 **)result[122];
  v4 = result;
  v5 = *result;
  if ( v3 != nullptr )
  {
    result = sub_35B898(result);
    v4[129] = 0;
    if ( (int)v3[13] > 0 )
    {
      if ( *(_BYTE *)(v5 + 137) != 0 )
      {
        v12 = *v3;
        v13 = sub_34CF50((unsigned int)*v3);
        result = sub_35271C((unsigned int *)v3[17] + 2, v12, v13, (int *)v3);
        if ( result != nullptr )
          *(_BYTE *)(v5 + 64) = 1;
        else
          v4[122] = 0;
      }
      else
      {
        if ( a2 != nullptr )
          v4[126] = *a2 - v4[125] + a2[1];
        v6 = (_DWORD *)sub_36541C(v5, "CREATE VIRTUAL TABLE %T", v4 + 125);
        v14 = sub_34F2A0(v5, (int)v3[17]);
        if ( v14 == 1 )
          v7 = "sqlite_temp_master";
        else
          v7 = "sqlite_master";
        sub_3879F8(
          v4,
          "UPDATE %Q.%s SET type='table', name=%Q, tbl_name=%Q, rootpage=0, sql=%Q WHERE rowid=#%d",
          *(_DWORD *)(16 * v14 + *(_DWORD *)(v5 + 16)),
          v7,
          *v3,
          *v3,
          v6,
          v4[97]);
        sub_354940((_DWORD *)v5, v6);
        v8 = sub_35A956((int)v4);
        sub_35AC42(v4, v14);
        sub_35AAF0(v8, 138, 0, 0);
        v9 = (_DWORD *)sub_36541C(v5, "name='%q' AND type='table'", *v3);
        sub_35AC80(v8, v14, v9);
        v10 = *v3;
        v11 = sub_34CF50((unsigned int)*v3);
        return (int *)sub_35A9FC(v8, 141, v14, 0, 0, v10, v11 + 1);
      }
    }
  }
  return result;
}


//======================================================================
// sub_389484
// address: 0x00389484   size: 0x36A (874 bytes)
//======================================================================
int __fastcall sub_389484(const char *a1, _BYTE *a2, unsigned int *a3, int *a4, unsigned int *a5, int *a6)
{
  unsigned int v7; // r6
  signed int v8; // r5
  int v9; // r0
  unsigned __int8 *v10; // r3
  unsigned __int8 *v11; // r5
  int v12; // r2
  int v14; // r5
  int v15; // r2
  int v16; // r1
  _BYTE *v17; // r3
  int v18; // r2
  int v19; // r0
  int v20; // r6
  int v21; // r3
  int v22; // r3
  int v23; // r0
  int v24; // r0
  const char *i; // r5
  unsigned int v26; // r0
  const char *v27; // r4
  unsigned int v28; // r7
  const char *v29; // r6
  unsigned int *j; // r5
  const void *v31; // r7
  unsigned int v32; // r3
  int v33; // r0
  int v34; // r4
  void *v35; // r0
  int v36; // r0
  unsigned int v37; // [sp+0h] [bp-24h]
  unsigned int v38; // [sp+4h] [bp-20h]
  unsigned int v39; // [sp+8h] [bp-1Ch]
  int v40; // [sp+Ch] [bp-18h]
  int v41; // [sp+Ch] [bp-18h]
  int v43; // [sp+14h] [bp-10h]

  v7 = *a3;
  v8 = sub_34CF50((unsigned int)a2);
  if ( (v7 & 0x40) == 0 && dword_471644 == 0 || v8 <= 4 || j_memcmp(a2, "file:", 5u) != 0 )
  {
    v35 = (void *)sqlite3_malloc(v8 + 2);
    v37 = (unsigned int)v35;
    if ( v35 != nullptr )
    {
      j_memcpy(v35, a2, v8);
      *(_BYTE *)(v37 + v8) = 0;
      *(_BYTE *)(v37 + v8 + 1) = 0;
      v38 = v7 & 0xFFFFFFBF;
      goto LABEL_86;
    }
    return 7;
  }
  v9 = v8 + 2;
  v10 = a2;
  v11 = &a2[v8];
  do
  {
    v12 = *v10++;
    v9 += v12 == 38;
  }
  while ( v10 != v11 );
  v37 = sqlite3_malloc(v9);
  if ( v37 == 0 )
    return 7;
  v38 = v7 | 0x40;
  if ( a2[5] == 47 )
  {
    v14 = 5;
    if ( a2[6] == 47 )
    {
      v17 = a2 + 7;
      do
      {
        v18 = (unsigned __int8)*v17;
        v14 = v17 - a2;
        if ( *v17 == 0 )
          break;
        ++v17;
      }
      while ( v18 != 47 );
      if ( v14 != 7 && (v14 != 16 || j_memcmp("localhost", a2 + 7, 9u) != 0) )
      {
        v19 = sqlite3_mprintf((int)"invalid uri authority: %.*s", v14 - 7, a2 + 7);
LABEL_76:
        *a6 = v19;
        goto LABEL_88;
      }
    }
  }
  else
  {
    v14 = 5;
  }
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v21 = (unsigned __int8)a2[v14];
    if ( a2[v14] == 0 || v21 == 35 )
      break;
    v20 = v14 + 1;
    if ( v21 == 37 )
    {
      v40 = (unsigned __int8)a2[v20];
      if ( (byte_44AA64[v40] & 8) == 0 || (byte_44AA64[(unsigned __int8)a2[v20 + 1]] & 8) == 0 )
      {
        if ( v16 == 1 )
          goto LABEL_61;
        if ( v16 != 0 )
        {
LABEL_56:
          if ( v21 != 38 )
            goto LABEL_61;
          goto LABEL_59;
        }
        goto LABEL_53;
      }
      v20 = v14 + 3;
      v21 = 16 * ((v40 + 9 * ((v40 >> 6) & 1)) & 0xF)
          + (((unsigned __int8)a2[v14 + 2] + 9 * (((int)(unsigned __int8)a2[v14 + 2] >> 6) & 1)) & 0xF);
      if ( v21 != 0 )
        goto LABEL_61;
      while ( 1 )
      {
        v22 = (unsigned __int8)a2[v20];
        if ( a2[v20] == 0 || v22 == 35 )
          break;
        if ( v16 != 0 )
        {
          if ( v16 == 1 && v22 == 61 || v22 == 38 )
            break;
        }
        else if ( v22 == 63 )
        {
          break;
        }
        ++v20;
      }
    }
    else
    {
      if ( v16 != 1 )
      {
        if ( v16 != 0 )
          goto LABEL_56;
        if ( v21 == 63 )
        {
LABEL_59:
          v16 = 1;
          goto LABEL_60;
        }
LABEL_53:
        v16 = 0;
        goto LABEL_61;
      }
      if ( v21 != 38 && v21 != 61 )
        goto LABEL_61;
      v24 = v15;
      if ( *(_BYTE *)(v37 + v15 - 1) != 0 )
      {
        if ( v21 == 38 )
        {
          ++v15;
          *(_BYTE *)(v37 + v24) = 0;
        }
        else
        {
          v16 = 2;
        }
LABEL_60:
        LOBYTE(v21) = 0;
LABEL_61:
        *(_BYTE *)(v37 + v15++) = v21;
        goto LABEL_28;
      }
      while ( a2[v20] != 0 && a2[v20] != 35 && a2[v20 - 1] != 38 )
        ++v20;
    }
LABEL_28:
    v14 = v20;
  }
  v23 = v15;
  if ( v16 == 1 )
  {
    ++v15;
    *(_BYTE *)(v37 + v23) = 0;
  }
  *(_BYTE *)(v37 + v15) = 0;
  *(_BYTE *)(v37 + v15 + 1) = 0;
  for ( i = (const char *)(v37 + sub_34CF50(v37) + 1); *i != 0; i = &v27[v39 + 1] )
  {
    v26 = sub_34CF50((unsigned int)i);
    v27 = &i[v26 + 1];
    v28 = v26;
    v39 = sub_34CF50((unsigned int)v27);
    if ( v28 == 3 )
    {
      if ( j_memcmp("vfs", i, 3u) == 0 )
        a1 = v27;
    }
    else if ( v28 == 5 )
    {
      v29 = "cache";
      if ( j_memcmp("cache", i, 5u) == 0 )
      {
        v41 = 393216;
        v43 = 393216;
        for ( j = (unsigned int *)&off_4722B0; ; j += 2 )
        {
LABEL_71:
          v31 = (const void *)*j;
          if ( *j == 0 )
            goto LABEL_75;
          if ( v39 == sub_34CF50(*j) && j_memcmp(v27, v31, v39) == 0 )
            break;
        }
        v32 = j[1];
        if ( v32 == 0 )
        {
LABEL_75:
          v19 = sqlite3_mprintf((int)"no such %s mode: %s", v29, v27);
          goto LABEL_76;
        }
        if ( (int)(v32 & 0xFFFFFF7F) <= v41 )
        {
          v38 = v38 & ~v43 | v32;
          continue;
        }
        v33 = sqlite3_mprintf((int)"%s mode not allowed: %s", v29, v27);
        v34 = 3;
        *a6 = v33;
        goto LABEL_89;
      }
    }
    else if ( v28 == 4 && j_memcmp("mode", i, 4u) == 0 )
    {
      v41 = v38 & 0x87;
      v43 = 135;
      v29 = "access";
      j = (unsigned int *)&off_472288;
      goto LABEL_71;
    }
  }
LABEL_86:
  v36 = sqlite3_vfs_find(a1);
  v34 = 0;
  *a4 = v36;
  if ( v36 == 0 )
  {
    *a6 = sqlite3_mprintf((int)"no such vfs: %s", a1);
LABEL_88:
    v34 = 1;
LABEL_89:
    sqlite3_free(v37);
    v37 = 0;
  }
  *a3 = v38;
  *a5 = v37;
  return v34;
}


//======================================================================
// sub_3897F4
// address: 0x003897F4   size: 0x296 (662 bytes)
//======================================================================
_BYTE *__fastcall sub_3897F4(int a1, int a2, int *a3)
{
  int v4; // r4
  int v5; // r0
  unsigned __int8 *v6; // r7
  int v7; // r2
  int (__fastcall *v8)(int, int); // r5
  _BYTE *result; // r0
  int i; // r6
  int v11; // r2
  unsigned int v12; // r1
  _BYTE *v13; // r5
  int v14; // r1
  int *v15; // r6
  int v16; // r0
  _DWORD *v17; // r0
  int v18; // r0
  void *v19; // r0
  int v20; // r7
  int v21; // r6
  int v22; // r0
  _DWORD *v23; // r1
  int v24; // [sp+Ch] [bp-30h]
  int v25; // [sp+Ch] [bp-30h]
  _BYTE *v26; // [sp+10h] [bp-2Ch]
  int v28; // [sp+18h] [bp-24h]
  _BYTE **v29; // [sp+1Ch] [bp-20h]
  char *v30; // [sp+24h] [bp-18h] BYREF
  _BYTE *v31; // [sp+28h] [bp-14h] BYREF
  unsigned int v32; // [sp+2Ch] [bp-10h] BYREF
  _BYTE *v33; // [sp+30h] [bp-Ch] BYREF
  int v34; // [sp+34h] [bp-8h] BYREF

  v4 = sqlite3_context_db_handle(a1);
  v5 = *a3;
  v30 = nullptr;
  v31 = nullptr;
  v33 = nullptr;
  v26 = (_BYTE *)sqlite3_value_text(v5);
  v6 = (unsigned __int8 *)sqlite3_value_text(a3[1]);
  if ( v26 == nullptr )
    v26 = &unk_3FB8EA;
  if ( v6 == nullptr )
    v6 = (unsigned __int8 *)&unk_3FB8EA;
  v7 = *(_DWORD *)(v4 + 116);
  if ( v7 + 1 < *(_DWORD *)(v4 + 20) )
  {
    v8 = nullptr;
    result = (_BYTE *)sub_36541C(v4, "too many attached databases - max %d", v7);
    v33 = result;
LABEL_42:
    if ( v33 != nullptr )
    {
      sqlite3_result_error(a1, v33, -1);
      result = sub_354940((_DWORD *)v4, v33);
    }
    if ( v8 != nullptr )
      return (_BYTE *)sqlite3_result_error_code(a1, (int)v8);
    return result;
  }
  v8 = (int (__fastcall *)(int, int))*(unsigned __int8 *)(v4 + 62);
  if ( *(_BYTE *)(v4 + 62) == 0 )
  {
    result = (_BYTE *)sub_36541C(v4, "cannot ATTACH database within transaction");
    goto LABEL_41;
  }
  for ( i = 0; ; ++i )
  {
    v11 = *(_DWORD *)(v4 + 20);
    v12 = *(_DWORD *)(v4 + 16);
    if ( i >= v11 )
      break;
    v8 = (int (__fastcall *)(int, int))sqlite3_stricmp(*(_BYTE **)(v12 + 16 * i), v6);
    if ( v8 == nullptr )
    {
      result = (_BYTE *)sub_36541C(v4, "database %s is already in use", v6);
      goto LABEL_41;
    }
  }
  if ( v12 == v4 + 448 )
  {
    result = (_BYTE *)sub_3516AC(v4, 48);
    v13 = result;
    if ( result == nullptr )
      return result;
    j_memcpy(result, *(const void **)(v4 + 16), 0x20u);
  }
  else
  {
    result = (_BYTE *)sub_3595BC(v4, v12, 16 * (v11 + 1));
    v13 = result;
    if ( result == nullptr )
      return result;
  }
  v14 = *(_DWORD *)(v4 + 20);
  *(_DWORD *)(v4 + 16) = v13;
  v15 = (int *)&v13[16 * v14];
  j_memset(v15, 0, 0x10u);
  v32 = *(_DWORD *)(v4 + 48);
  v16 = sub_389484(*(const char **)(*(_DWORD *)v4 + 16), v26, &v32, &v34, (unsigned int *)&v30, (int *)&v31);
  if ( v16 == 0 )
  {
    v32 |= 0x100u;
    v8 = sub_36DCB8(v34, v30, v4, v15 + 1, 0, v32);
    sqlite3_free(v30);
    ++*(_DWORD *)(v4 + 20);
    if ( v8 == (int (__fastcall *)(int, int))((char *)&word_12 + 1) )
    {
      v8 = (int (__fastcall *)(int, int))(&dword_0 + 1);
      v33 = (_BYTE *)sub_36541C(v4, "database is already attached");
    }
    else if ( v8 == nullptr )
    {
      v17 = sub_357D9C(v4, v15[1]);
      v15[3] = (int)v17;
      if ( v17 != nullptr )
      {
        if ( *((_BYTE *)v17 + 76) != 0
          && *((unsigned __int8 *)v17 + 77) != *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v4 + 16) + 12) + 77) )
        {
          v8 = (int (__fastcall *)(int, int))(&dword_0 + 1);
          v33 = (_BYTE *)sub_36541C(v4, "attached databases must use the same text encoding as main database");
        }
      }
      else
      {
        v8 = (int (__fastcall *)(int, int))&byte_7;
      }
      sub_34E200(**(_DWORD **)(v15[1] + 4), *(unsigned __int8 *)(v4 + 65));
      v24 = v15[1];
      v18 = sub_357856(*(_DWORD *)(*(_DWORD *)(v4 + 16) + 4), -1);
      sub_357856(v24, v18);
      v25 = v15[1];
      v28 = *(_DWORD *)(v4 + 24) & 0x1C | 3;
      v29 = *(_BYTE ***)(v25 + 4);
      sub_3574C2(v25);
      sub_34E02E(*v29, v28);
      sub_35655E(v25);
    }
    *((_BYTE *)v15 + 8) = 3;
    v19 = sub_351BC8(v4, v6);
    *v15 = (int)v19;
    if ( v8 == nullptr )
    {
      if ( v19 != nullptr )
      {
        sub_35752E(v4);
        v8 = (int (__fastcall *)(int, int))sub_38378C(v4, (int *)&v33);
        result = (_BYTE *)sub_35657E(v4);
        if ( v8 == nullptr )
          return result;
      }
      else
      {
        v8 = (int (__fastcall *)(int, int))&byte_7;
      }
    }
    v20 = *(_DWORD *)(v4 + 20) - 1;
    v21 = 16 * v20;
    v22 = *(_DWORD *)(*(_DWORD *)(v4 + 16) + 16 * v20 + 4);
    if ( v22 != 0 )
    {
      sub_374D70(v22);
      *(_DWORD *)(*(_DWORD *)(v4 + 16) + v21 + 4) = 0;
      *(_DWORD *)(*(_DWORD *)(v4 + 16) + v21 + 12) = 0;
    }
    result = (_BYTE *)sub_3577F4((_DWORD *)v4);
    *(_DWORD *)(v4 + 20) = v20;
    v23 = v33;
    if ( v8 == (int (__fastcall *)(int, int))&byte_7
      || v8 == (int (__fastcall *)(int, int))((char *)&stru_C08.st_name + 2) )
    {
      *(_BYTE *)(v4 + 64) = 1;
      sub_354940((_DWORD *)v4, v23);
      result = (_BYTE *)sub_36541C(v4, "out of memory");
    }
    else
    {
      if ( v33 != nullptr )
        goto LABEL_42;
      result = (_BYTE *)sub_36541C(v4, "unable to open database: %s", v26);
    }
LABEL_41:
    v33 = result;
    goto LABEL_42;
  }
  if ( v16 == 7 )
    *(_BYTE *)(v4 + 64) = 1;
  sqlite3_result_error(a1, v31, -1);
  return (_BYTE *)sqlite3_free(v31);
}


//======================================================================
// sub_389D40
// address: 0x00389D40   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_389D40(int a1, int a2, int *a3)
{
  const char *v5; // r5
  int result; // r0
  const char *v7; // r2
  _DWORD *v8; // r7
  _BYTE *v10; // [sp+Ch] [bp-8h] BYREF

  v5 = (const char *)sqlite3_value_text(*a3);
  result = sqlite3_context_db_handle(a1);
  v7 = nullptr;
  v8 = (_DWORD *)result;
  v10 = nullptr;
  if ( a2 == 2 )
  {
    result = sqlite3_value_text(a3[1]);
    v7 = (const char *)result;
  }
  if ( v5 != nullptr )
  {
    result = sqlite3_load_extension(v8, v5, v7, &v10);
    if ( result != 0 )
    {
      sqlite3_result_error(a1, v10, -1);
      return sqlite3_free(v10);
    }
  }
  return result;
}


//======================================================================
// sub_389E98
// address: 0x00389E98   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall sub_389E98(int *a1, int a2, unsigned int *a3, int a4)
{
  unsigned int *v6; // r6
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v11; // r7
  int v12; // r0
  int v13; // r3
  int v14; // r1
  void *v16; // r0
  void *v17; // r7
  int v18; // r3
  int v19; // r0
  int i; // [sp+0h] [bp-Ch]
  unsigned int v22; // [sp+4h] [bp-8h]

  v6 = a3;
  v7 = a2;
  if ( a1[3] == 0 )
  {
    if ( a3 != nullptr )
      v7 = 2 * a2;
    else
      v7 = a2;
  }
  v8 = a1[2];
  if ( v7 + a1[5] > v8 )
  {
    v9 = 2 * v8 + v7;
    a1[2] = v9;
    v10 = sqlite3_realloc(*a1, 4 * v9);
    if ( v10 == 0 )
    {
LABEL_24:
      a1[6] = 7;
      return 1;
    }
    *a1 = v10;
  }
  v11 = a1[3];
  if ( v11 != 0 )
  {
    if ( a1[4] != a2 )
    {
      sqlite3_free(a1[1]);
      a1[1] = sqlite3_mprintf((int)"sqlite3_get_table() called with two or more incompatible queries");
      a1[6] = 1;
      return 1;
    }
  }
  else
  {
    a1[4] = a2;
    while ( v11 < a2 )
    {
      v12 = sqlite3_mprintf((int)"%s", *(const char **)(a4 + 4 * v11));
      if ( v12 == 0 )
        goto LABEL_24;
      v13 = a1[5];
      v14 = *a1;
      ++v11;
      a1[5] = v13 + 1;
      *(_DWORD *)(4 * v13 + v14) = v12;
    }
  }
  if ( v6 == nullptr )
    return 0;
  for ( i = 0; i < a2; ++i )
  {
    if ( *v6 != 0 )
    {
      v22 = sub_34CF50(*v6) + 1;
      v16 = (void *)sqlite3_malloc(v22);
      v17 = v16;
      if ( v16 == nullptr )
        goto LABEL_24;
      j_memcpy(v16, (const void *)*v6, v22);
    }
    else
    {
      v17 = nullptr;
    }
    v18 = a1[5];
    v19 = *a1;
    a1[5] = v18 + 1;
    *(_DWORD *)(4 * v18 + v19) = v17;
    ++v6;
  }
  ++a1[3];
  return 0;
}


//======================================================================
// sub_389F80
// address: 0x00389F80   size: 0xFA (250 bytes)
//======================================================================
__int64 __fastcall sub_389F80(double a1, int *a2)
{
  int v2; // r6
  int v4; // r7
  __int64 v5; // r0
  int v6; // r2
  int v7; // r0
  double v8; // r0
  double v9; // r0
  double v10; // r4
  double v11; // r0
  unsigned int v12; // r0
  _BYTE *v13; // r4
  unsigned int v14; // r0
  double v16; // [sp+0h] [bp-Ch] BYREF
  int *v17; // [sp+8h] [bp-4h]

  v16 = a1;
  v17 = a2;
  v2 = LODWORD(a1);
  if ( HIDWORD(a1) != 2 )
    goto LABEL_2;
  if ( sqlite3_value_type(a2[1]) == 5 )
    return *(_QWORD *)&v16;
  LODWORD(v5) = a2[1];
  v7 = sqlite3_value_int(v5, v6);
  v4 = v7;
  if ( v7 > 30 )
  {
    v4 = 30;
  }
  else if ( v7 < 0 )
  {
LABEL_2:
    v4 = 0;
  }
  if ( sqlite3_value_type(*a2) != 5 )
  {
    LODWORD(v8) = *a2;
    v9 = COERCE_DOUBLE(sqlite3_value_double(v8));
    v10 = v9;
    v16 = v9;
    if ( v4 == 0 )
    {
      if ( v9 >= 0.0 && v9 < 9.22337204e18 )
      {
        v11 = (double)(__int64)(v9 + 0.5);
        v16 = (double)(__int64)(v10 + 0.5);
LABEL_19:
        sqlite3_result_double(v2, SHIDWORD(v11), SLODWORD(v16), SHIDWORD(v16));
        return *(_QWORD *)&v16;
      }
      if ( v9 < 0.0 && v9 > -9.22337204e18 )
      {
        v11 = (double)(__int64)(0.5 - v9);
        HIDWORD(v11) += 0x80000000;
        v16 = v11;
        goto LABEL_19;
      }
    }
    v12 = sqlite3_mprintf((int)"%.*f", v4, v9);
    v13 = (_BYTE *)v12;
    if ( v12 != 0 )
    {
      v14 = sub_34CF50(v12);
      sub_34D098(v13, &v16, v14, 1);
      sqlite3_free(v13);
      goto LABEL_19;
    }
    sqlite3_result_error_nomem(v2);
  }
  return *(_QWORD *)&v16;
}


//======================================================================
// sub_38A0A8
// address: 0x0038A0A8   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_38A0A8(int a1)
{
  _BYTE *v2; // r4

  v2 = (_BYTE *)sqlite3_mprintf(
                  (int)"unable to use function %s in the requested context",
                  *(const char **)(*(_DWORD *)a1 + 24));
  sqlite3_result_error(a1, v2, -1);
  return sqlite3_free(v2);
}


//======================================================================
// sub_38A0D4
// address: 0x0038A0D4   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_38A0D4(int a1)
{
  int v2; // r6
  char *v3; // r4

  v2 = 7;
  v3 = (char *)sqlite3_mprintf((int)"ALTER TABLE %Q.'%q_node'   RENAME TO \"%w_node\";ALTER TABLE %Q.'%q_parent' RENAME T"
                                    "O \"%w_parent\";ALTER TABLE %Q.'%q_rowid'  RENAME TO \"%w_rowid\";");
  if ( v3 != nullptr )
  {
    v2 = sqlite3_exec(*(_DWORD *)(a1 + 12), v3, nullptr, 0, nullptr);
    sqlite3_free(v3);
  }
  return v2;
}


//======================================================================
// sub_38A11C
// address: 0x0038A11C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_38A11C(int a1)
{
  int v2; // r5
  char *v3; // r6

  v2 = 7;
  v3 = (char *)sqlite3_mprintf(
                 (int)"DROP TABLE '%q'.'%q_node';DROP TABLE '%q'.'%q_rowid';DROP TABLE '%q'.'%q_parent';",
                 *(_DWORD *)(a1 + 32));
  if ( v3 != nullptr )
  {
    v2 = sqlite3_exec(*(_DWORD *)(a1 + 12), v3, nullptr, 0, nullptr);
    sqlite3_free(v3);
    if ( v2 == 0 )
      sub_3759F0(a1);
  }
  return v2;
}


//======================================================================
// sub_38A168
// address: 0x0038A168   size: 0x142 (322 bytes)
//======================================================================
int __fastcall sub_38A168(int a1, double *a2)
{
  int v4; // r4
  int i; // r3
  int v6; // r2
  int v7; // r5
  int v8; // r1
  int j; // r2
  int v10; // r1
  int v11; // r4
  unsigned int v12; // r1
  char v13; // r0
  int v14; // r5
  __int64 v15; // r4
  int v16; // r0
  char v18[44]; // [sp+8h] [bp-34h] BYREF

  j_memset(v18, 0, 0x29u);
  v4 = 0;
  for ( i = 0; i < *(_DWORD *)a2 && v4 <= 39; ++i )
  {
    v6 = *((_DWORD *)a2 + 1) + 12 * i;
    if ( *(_BYTE *)(v6 + 5) == 0 )
      continue;
    v7 = *(_DWORD *)v6;
    v8 = *(unsigned __int8 *)(v6 + 4);
    if ( *(_DWORD *)v6 == 0 )
    {
      if ( v8 == 2 )
      {
        for ( j = *(_DWORD *)v6; ; ++j )
        {
          v10 = *((_DWORD *)a2 + 4);
          if ( j >= i )
            break;
          v11 = 8 * j;
          *(_DWORD *)(v10 + v11) = 0;
          *(_BYTE *)(*((_DWORD *)a2 + 4) + v11 + 4) = 0;
        }
        *((_DWORD *)a2 + 5) = 1;
        *(_DWORD *)(v10 + 8 * i) = 1;
        *(_BYTE *)(*((_DWORD *)a2 + 4) + 8 * (i & (~i >> 31)) + 4) = 1;
        *((_DWORD *)a2 + 10) = 0;
        *((_DWORD *)a2 + 11) = 1077805056;
        if ( sqlite3_libversion_number() > 3008001 )
        {
          *((_DWORD *)a2 + 12) = 1;
          *((_DWORD *)a2 + 13) = 0;
          return v7;
        }
        return 0;
      }
LABEL_15:
      if ( v8 != 64 )
        continue;
      goto LABEL_16;
    }
    if ( v7 <= 0 )
      goto LABEL_15;
LABEL_16:
    v12 = (unsigned __int8)(v8 - 2);
    v13 = 70;
    if ( v12 <= 0x1E )
      v13 = byte_44D526[v12];
    v18[v4] = v13;
    v14 = v4 + 1;
    v4 += 2;
    v18[v14] = *(_DWORD *)v6 + 96;
    *(_DWORD *)(*((_DWORD *)a2 + 4) + 8 * i) = v4 >> 1;
    *(_BYTE *)(*((_DWORD *)a2 + 4) + 8 * i + 4) = 1;
  }
  *((_DWORD *)a2 + 5) = 2;
  *((_DWORD *)a2 + 7) = 1;
  if ( v4 != 0 )
  {
    v16 = sqlite3_mprintf((int)"%s", v18);
    *((_DWORD *)a2 + 6) = v16;
    if ( v16 == 0 )
      return 7;
  }
  v15 = *(_QWORD *)(a1 + 560) / (v4 + 1);
  a2[5] = (double)v15 * 6.0;
  if ( sqlite3_libversion_number() > 3008001 )
    *((_QWORD *)a2 + 6) = v15;
  return 0;
}


//======================================================================
// sub_38A2D0
// address: 0x0038A2D0   size: 0x3BA (954 bytes)
//======================================================================
int __fastcall sub_38A2D0(unsigned int a1, int a2, int a3, const char **a4, int *a5, int *a6, int a7)
{
  int v8; // r3
  int v9; // r3
  void *v10; // r0
  int v11; // r4
  int v12; // r3
  char *v13; // r6
  int v14; // r5
  int v15; // r2
  int v16; // r3
  const char *v17; // r0
  int v18; // r0
  char *v19; // r6
  unsigned int v20; // r6
  __int64 v21; // kr08_8
  int v22; // r2
  int v23; // r6
  const char *v24; // r0
  int v25; // r5
  const char *i; // r6
  const char *v27; // r5
  const char *v28; // r0
  int v30; // [sp+1Ch] [bp-58h]
  const char *v31; // [sp+1Ch] [bp-58h]
  int v32; // [sp+1Ch] [bp-58h]
  size_t v33; // [sp+20h] [bp-54h]
  size_t v34; // [sp+20h] [bp-54h]
  int v35; // [sp+24h] [bp-50h]
  char *v36; // [sp+24h] [bp-50h]
  size_t v40; // [sp+34h] [bp-40h]
  int *v41; // [sp+38h] [bp-3Ch] BYREF
  _DWORD v42[4]; // [sp+3Ch] [bp-38h]
  int v43[10]; // [sp+4Ch] [bp-28h] BYREF

  v42[0] = unk_471744;
  v42[1] = off_471748[0];
  v42[2] = off_47174C[0];
  v42[3] = off_471750;
  v8 = 2;
  if ( a3 > 5 )
  {
    v8 = 3;
    if ( a3 <= 14 )
      v8 = a3 & 1;
  }
  v9 = v8;
  if ( v42[v9] != 0 )
  {
    v30 = 1;
    *a6 = sqlite3_mprintf((int)"%s", (const char *)v42[v9]);
    return v30;
  }
  sqlite3_vtab_config(a1, 1, 1, v9 * 4);
  v33 = j_strlen(a4[1]);
  v40 = j_strlen(a4[2]);
  v10 = (void *)sqlite3_malloc(v33 + v40 + 618);
  v11 = (int)v10;
  v30 = 7;
  if ( v10 == nullptr )
    return v30;
  j_memset(v10, 0, v33 + v40 + 618);
  *(_DWORD *)(v11 + 552) = 1;
  *(_DWORD *)v11 = &unk_4722C8;
  *(_DWORD *)(v11 + 32) = v11 + 616;
  *(_DWORD *)(v11 + 36) = v11 + 616 + v33 + 1;
  v12 = (a3 - 4) / 2;
  *(_DWORD *)(v11 + 20) = v12;
  *(_DWORD *)(v11 + 24) = 8 * (v12 + 1);
  *(_DWORD *)(v11 + 612) = a2 != 0;
  j_memcpy((void *)(v11 + 616), a4[1], v33);
  j_memcpy(*(void **)(v11 + 36), a4[2], v40);
  if ( a7 == 0 )
  {
    v13 = (char *)sqlite3_mprintf(
                    (int)"SELECT length(data) FROM '%q'.'%q_node' WHERE nodeno = 1",
                    *(_DWORD *)(v11 + 32),
                    *(_DWORD *)(v11 + 36));
    if ( v13 != nullptr )
    {
      v14 = sub_387880(a1, v13, (int *)(v11 + 16));
      if ( v14 == 0 )
        goto LABEL_19;
    }
    else
    {
      v14 = 7;
    }
    goto LABEL_18;
  }
  v43[0] = 0;
  v13 = (char *)sqlite3_mprintf((int)"PRAGMA %Q.page_size", *(_DWORD *)(v11 + 32));
  if ( v13 == nullptr )
  {
    v14 = 7;
    goto LABEL_18;
  }
  v14 = sub_387880(a1, v13, v43);
  if ( v14 != 0 )
  {
LABEL_18:
    v17 = sqlite3_errmsg(a1);
    *a6 = sqlite3_mprintf((int)"%s", v17);
    goto LABEL_19;
  }
  v15 = v43[0] - 64;
  v16 = 51 * *(_DWORD *)(v11 + 24) + 4;
  *(_DWORD *)(v11 + 16) = v43[0] - 64;
  if ( v16 < v15 )
    *(_DWORD *)(v11 + 16) = v16;
LABEL_19:
  sqlite3_free(v13);
  if ( v14 != 0 )
    goto LABEL_60;
  v31 = a4[1];
  v34 = (size_t)a4[2];
  *(_DWORD *)(v11 + 12) = a1;
  if ( a7 == 0 )
  {
LABEL_21:
    v43[0] = v11 + 576;
    v43[1] = v11 + 580;
    v43[2] = v11 + 584;
    v43[3] = v11 + 588;
    v43[4] = v11 + 592;
    v43[5] = v11 + 596;
    v43[6] = v11 + 600;
    v43[7] = v11 + 604;
    v43[8] = v11 + 608;
    v18 = sqlite3_prepare_v2(a1, "SELECT stat FROM sqlite_stat1 WHERE tbl= ? || '_rowid'", -1, (int *)&v41, nullptr);
    v14 = v18;
    if ( v18 != 0 )
    {
      if ( v18 != 7 )
      {
LABEL_34:
        v14 = 0;
        *(_DWORD *)(v11 + 560) = 0x100000;
        *(_DWORD *)(v11 + 564) = 0;
      }
    }
    else
    {
      sqlite3_bind_text(v41, 1, *(_BYTE **)(v11 + 36), -1, nullptr);
      if ( sqlite3_step((int)v41) == 100 )
      {
        v21 = sqlite3_column_int64(v41, 0);
        v35 = HIDWORD(v21);
        v20 = v21;
      }
      else
      {
        v20 = 0;
        v35 = 0;
      }
      v14 = sqlite3_finalize((unsigned int *)v41);
      if ( v14 == 0 )
      {
        if ( (v35 | v20) == 0 )
          goto LABEL_34;
        v22 = v35;
        if ( v35 < 0 || v35 == 0 && v20 < 0x64 )
        {
          v20 = 100;
          v22 = 0;
        }
        *(_DWORD *)(v11 + 560) = v20;
        *(_DWORD *)(v11 + 564) = v22;
      }
    }
    v23 = 0;
    while ( v14 == 0 )
    {
      v36 = (char *)sqlite3_mprintf((int)off_454E78[v23], v31, v34);
      if ( v36 != nullptr )
        v14 = sqlite3_prepare_v2(a1, v36, -1, (int *)v43[v23], nullptr);
      else
        v14 = 7;
      ++v23;
      sqlite3_free(v36);
      if ( v23 == 9 )
      {
        if ( v14 != 0 )
          goto LABEL_49;
        v25 = 4;
        for ( i = (const char *)sqlite3_mprintf((int)"CREATE TABLE x(%s", a4[3]); ; i = (const char *)v32 )
        {
          if ( i == nullptr )
            goto LABEL_57;
          if ( v25 >= a3 )
            break;
          v32 = sqlite3_mprintf((int)"%s, %s", i, a4[v25]);
          sqlite3_free(i);
          ++v25;
        }
        v27 = i;
        i = (const char *)sqlite3_mprintf((int)"%s);", i);
        sqlite3_free(v27);
        if ( i == nullptr )
        {
LABEL_57:
          v14 = 7;
          goto LABEL_58;
        }
        v14 = sqlite3_declare_vtab(a1, (int)i);
        if ( v14 != 0 )
        {
          v28 = sqlite3_errmsg(a1);
          *a6 = sqlite3_mprintf((int)"%s", v28);
        }
LABEL_58:
        sqlite3_free(i);
        if ( v14 == 0 )
        {
          *a5 = v11;
          return v14;
        }
        goto LABEL_60;
      }
    }
    goto LABEL_49;
  }
  v19 = (char *)sqlite3_mprintf(
                  (int)"CREATE TABLE \"%w\".\"%w_node\"(nodeno INTEGER PRIMARY KEY, data BLOB);CREATE TABLE \"%w\".\"%w_r"
                       "owid\"(rowid INTEGER PRIMARY KEY, nodeno INTEGER);CREATE TABLE \"%w\".\"%w_parent\"(nodeno INTEGE"
                       "R PRIMARY KEY, parentnode INTEGER);INSERT INTO '%q'.'%q_node' VALUES(1, zeroblob(%d))",
                  v31);
  if ( v19 != nullptr )
  {
    v14 = sqlite3_exec(a1, v19, nullptr, 0, nullptr);
    sqlite3_free(v19);
    if ( v14 == 0 )
      goto LABEL_21;
  }
  else
  {
    v14 = 7;
  }
LABEL_49:
  v24 = sqlite3_errmsg(a1);
  *a6 = sqlite3_mprintf((int)"%s", v24);
LABEL_60:
  sub_3759F0(v11);
  return v14;
}


//======================================================================
// sub_38A698
// address: 0x0038A698   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_38A698(unsigned int a1, int a2, int a3, const char **a4, int *a5, int *a6)
{
  return sub_38A2D0(a1, a2, a3, a4, a5, a6, 0);
}


//======================================================================
// sub_38A6AE
// address: 0x0038A6AE   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_38A6AE(unsigned int a1, int a2, int a3, const char **a4, int *a5, int *a6)
{
  return sub_38A2D0(a1, a2, a3, a4, a5, a6, 1);
}


//======================================================================
// sub_38A6C4
// address: 0x0038A6C4   size: 0x11A (282 bytes)
//======================================================================
int __fastcall sub_38A6C4(int a1, int a2, _DWORD *a3)
{
  __int64 v4; // r0
  int v5; // r2
  int v6; // r6
  char *v7; // r4
  size_t v8; // r0
  int i; // r7
  int v10; // r5
  _DWORD v13[8]; // [sp+18h] [bp-4C4h] BYREF
  __int64 v14[6]; // [sp+38h] [bp-4A4h] BYREF
  _DWORD v15[155]; // [sp+68h] [bp-474h] BYREF
  char v16[296]; // [sp+2D4h] [bp-208h] BYREF

  j_memset(v13, 0, sizeof(v13));
  j_memset(v15, 0, 0x268u);
  LODWORD(v4) = *a3;
  v15[5] = sqlite3_value_int(v4, v5);
  v15[6] = 8 * (v15[5] + 1);
  v13[6] = sqlite3_value_blob(a3[1]);
  v6 = 0;
  v7 = nullptr;
  while ( v6 < (*(unsigned __int8 *)(v13[6] + 2) << 8) + *(unsigned __int8 *)(v13[6] + 3) )
  {
    sub_3571F0((int)v15, (int)v13, v6, v14);
    sqlite3_snprintf(512, (int)v16, (int)"%lld", SHIDWORD(v14[0]));
    v8 = j_strlen(v16);
    for ( i = 0; i < 2 * v15[5]; ++i )
    {
      sqlite3_snprintf(512 - v8, (int)&v16[v8], (int)" %f", (int)v14 + 4 * i);
      v8 = j_strlen(v16);
    }
    if ( v7 != nullptr )
    {
      v10 = sqlite3_mprintf((int)"%s {%s}", v7, v16);
      sqlite3_free(v7);
      v7 = (char *)v10;
    }
    else
    {
      v7 = (char *)sqlite3_mprintf((int)"{%s}", v16);
    }
    ++v6;
  }
  return sqlite3_result_text(a1, v7, -1, sqlite3_free);
}


//======================================================================
// sub_38A9B4
// address: 0x0038A9B4   size: 0x41E (1054 bytes)
//======================================================================
int __fastcall sub_38A9B4(_BYTE *a1, _DWORD *a2, unsigned int a3, const char *a4)
{
  int result; // r0
  int v5; // r4
  unsigned int v6; // r3
  _DWORD *v7; // r5
  int v8; // r4
  __int64 v9; // r0
  const char *v10; // r2
  int (__fastcall *v11)(int, int); // r0
  int v12; // r4
  int v13; // r6
  int v14; // r6
  __int64 v15; // r0
  int function; // r3
  int v17; // r4
  int i; // r2
  int v19; // r7
  int (__fastcall *v20)(_DWORD *, const char **, _UNKNOWN **); // r6
  __int64 v21; // r0
  int v22; // r0
  unsigned __int8 v23; // r4
  _BYTE *v24; // [sp+14h] [bp-28h]
  int v25; // [sp+14h] [bp-28h]
  unsigned int v29; // [sp+24h] [bp-18h] BYREF
  char *v30; // [sp+2Ch] [bp-10h] BYREF
  int v31; // [sp+30h] [bp-Ch] BYREF
  const char *v32; // [sp+34h] [bp-8h] BYREF

  *a2 = 0;
  v29 = a3;
  v30 = nullptr;
  v31 = 0;
  result = sqlite3_initialize(a1, a2, a3);
  v5 = result;
  if ( result != 0 )
    return result;
  if ( ((70 >> (v29 & 7)) & 1) == 0 )
    return sub_35EB98(122475);
  if ( dword_47163C != 0 && (v29 & 0x8000) == 0 )
  {
    v5 = 1;
    if ( (v29 & 0x10000) == 0 )
      v5 = dword_471640;
  }
  if ( (v29 & 0x40000) != 0 )
  {
    v6 = v29 & 0xFFFDFFFF;
  }
  else
  {
    if ( dword_471714 == 0 )
      goto LABEL_13;
    v6 = v29 | 0x20000;
  }
  v29 = v6;
LABEL_13:
  v29 &= 0xFFF600E7;
  v7 = sub_351CC4(0x208u);
  if ( v7 != nullptr )
  {
    if ( v5 != 0 )
    {
      v8 = sub_34CB60(1);
      v7[3] = v8;
      if ( v8 == 0 )
      {
        sqlite3_free(v7);
        v7 = nullptr;
        goto LABEL_55;
      }
    }
    sqlite3_mutex_enter(v7[3]);
    v7[5] = 2;
    v7[19] = -264537850;
    v7[14] = 255;
    v7[4] = v7 + 112;
    j_memcpy(v7 + 22, &unk_44ABE8, 0x2Cu);
    *((_BYTE *)v7 + 66) = -1;
    *((_BYTE *)v7 + 62) = 1;
    *((_QWORD *)v7 + 5) = qword_4716E8;
    v7[6] |= 0x900050u;
    v7[18] = 0;
    v7[107] = 0;
    v7[106] = 0;
    v7[105] = 0;
    v7[108] = 0;
    v7[77] = 0;
    v7[76] = 0;
    v7[75] = 0;
    v7[78] = 0;
    sub_360BD8(v7, "BINARY", 1, nullptr, (int *)sub_357E98, nullptr);
    sub_360BD8(v7, "BINARY", 3, nullptr, (int *)sub_357E98, nullptr);
    sub_360BD8(v7, "BINARY", 2, nullptr, (int *)sub_357E98, nullptr);
    sub_360BD8(v7, "RTRIM", 1, (int *)((char *)&dword_0 + 1), (int *)sub_357E98, nullptr);
    v24 = v7 + 16;
    if ( *((_BYTE *)v7 + 64) != 0 )
      goto LABEL_55;
    v7[2] = sub_355EDA((int)v7, 1, "BINARY", 0);
    sub_360BD8(v7, "NOCASE", 1, nullptr, (int *)sub_34FA6C, nullptr);
    v7[12] = v29;
    LODWORD(v9) = sub_389484(a4, a1, &v29, v7, (unsigned int *)&v30, &v31);
    HIDWORD(v9) = v9;
    if ( (_DWORD)v9 != 0 )
    {
      if ( (_DWORD)v9 == 7 )
        *v24 = 1;
      if ( v31 != 0 )
        v10 = "%s";
      else
        v10 = nullptr;
      LODWORD(v9) = v7;
      sub_36024C(v9, (int)v10);
      sqlite3_free(v31);
      goto LABEL_55;
    }
    v11 = sub_36DCB8(*v7, v30, (int)v7, (int *)(v7[4] + 4), 0, v29 | 0x100);
    v12 = (int)v11;
    if ( v11 != nullptr )
    {
      if ( v11 == (int (__fastcall *)(int, int))((char *)&stru_C08.st_name + 2) )
        v12 = 7;
      sub_36024C(__SPAIR64__(v12, (unsigned int)v7), 0);
      goto LABEL_55;
    }
    v13 = v7[4];
    *(_DWORD *)(v13 + 12) = sub_357D9C((int)v7, *(_DWORD *)(v13 + 4));
    v14 = v7[4];
    *(_DWORD *)(v14 + 28) = sub_357D9C((int)v7, 0);
    *(_DWORD *)v7[4] = "main";
    *(_BYTE *)(v7[4] + 8) = 3;
    *(_DWORD *)(v7[4] + 16) = "temp";
    *(_BYTE *)(v7[4] + 24) = 1;
    v7[19] = -1607883113;
    if ( *v24 != 0 )
      goto LABEL_55;
    HIDWORD(v15) = (unsigned __int8)*v24;
    LODWORD(v15) = v7;
    sub_36024C(v15, SHIDWORD(v15));
    if ( sqlite3_overload_function(v7, "MATCH", 2) == 7 )
      *v24 = 1;
    function = sqlite3_errcode((int)v7);
    if ( function == 0 )
    {
      v17 = 0;
      for ( i = dword_559354; i != 0; i = v25 )
      {
        v19 = sub_34CB60(2);
        sqlite3_mutex_enter(v19);
        if ( v17 >= dword_559354 )
        {
          v20 = nullptr;
          v25 = 0;
        }
        else
        {
          v20 = *(int (__fastcall **)(_DWORD *, const char **, _UNKNOWN **))(4 * v17 + dword_559358);
          v25 = 1;
        }
        sqlite3_mutex_leave(v19);
        v32 = nullptr;
        if ( v20 != nullptr )
        {
          HIDWORD(v21) = v20(v7, &v32, &off_463DE8);
          if ( HIDWORD(v21) != 0 )
          {
            LODWORD(v21) = v7;
            sub_36024C(v21, (int)"automatic extension loading failed: %s", v32);
            v25 = 0;
          }
        }
        sqlite3_free(v32);
        ++v17;
      }
      function = sqlite3_errcode((int)v7);
      if ( function != 0 )
        goto LABEL_55;
    }
    if ( *((_BYTE *)v7 + 64) == 0 )
    {
      if ( function != 0 )
        goto LABEL_51;
      function = sqlite3_create_function(v7, "rtreenode", 2, 1, 0, (int)sub_38A6C4, 0, 0);
      if ( function != 0 )
        goto LABEL_51;
      function = sqlite3_create_function(v7, "rtreedepth", 1, 1, 0, (int)sub_35C8F0, 0, 0);
      if ( function != 0 )
        goto LABEL_51;
      function = sqlite3_create_module_v2((int)v7, "rtree", (int)&unk_4722C8, 0, nullptr);
      if ( function != 0 )
        goto LABEL_51;
      function = sqlite3_create_module_v2((int)v7, "rtree_i32", (int)&unk_4722C8, 1, nullptr);
    }
    if ( function == 0 )
    {
LABEL_52:
      if ( v7[61] == 0 )
        sub_353C5C((int)v7, nullptr, dword_471654, dword_471658);
      sqlite3_wal_autocheckpoint(v7, 1000);
      goto LABEL_55;
    }
LABEL_51:
    sub_36024C(__SPAIR64__(function, (unsigned int)v7), 0);
    goto LABEL_52;
  }
LABEL_55:
  sqlite3_free(v30);
  if ( v7 != nullptr )
    sqlite3_mutex_leave(v7[3]);
  v22 = sqlite3_errcode((int)v7);
  v23 = v22;
  if ( v22 == 7 )
  {
    sqlite3_close((int)v7);
    v7 = nullptr;
  }
  else if ( v22 != 0 )
  {
    v7[19] = 1266094736;
  }
  *a2 = v7;
  return v23;
}


//======================================================================
// sub_38BAD0
// address: 0x0038BAD0   size: 0x3E (62 bytes)
//======================================================================
_DWORD *__fastcall sub_38BAD0(_DWORD *a1, char *a2, _DWORD *a3)
{
  size_t v6; // r6

  v6 = j_strlen(a2);
  *a1 = &byte_55FB88;
  sub_3BE700(a1, v6 + *(_DWORD *)(*a3 - 12));
  sub_3BE898(a1, a2, v6);
  sub_3BE774(a1, a3);
  return a1;
}


//======================================================================
// sub_38BDC8
// address: 0x0038BDC8   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_38BDC8(int a1, int a2, int a3)
{
  sub_3B7F58();
  sub_3B7BB0(a1, a3);
  return a1;
}


//======================================================================
// sub_38C60C
// address: 0x0038C60C   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_38C60C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_38EF14
// address: 0x0038EF14   size: 0x6 (6 bytes)
//======================================================================
const char *sub_38EF14()
{
  return "__gnu_cxx::__concurrence_lock_error";
}


//======================================================================
// sub_38EF20
// address: 0x0038EF20   size: 0x6 (6 bytes)
//======================================================================
const char *sub_38EF20()
{
  return "__gnu_cxx::__concurrence_unlock_error";
}


//======================================================================
// sub_38EF2C
// address: 0x0038EF2C   size: 0x6 (6 bytes)
//======================================================================
const char *sub_38EF2C()
{
  return "__gnu_cxx::__concurrence_broadcast_error";
}


//======================================================================
// sub_38EF38
// address: 0x0038EF38   size: 0x6 (6 bytes)
//======================================================================
const char *sub_38EF38()
{
  return "__gnu_cxx::__concurrence_wait_error";
}


//======================================================================
// sub_38EF44
// address: 0x0038EF44   size: 0x12 (18 bytes)
//======================================================================
void sub_38EF44()
{
  dword_559584 = 0x4000;
  dword_55958C = (int)&dword_559584;
}


//======================================================================
// sub_38EF60
// address: 0x0038EF60   size: 0x10 (16 bytes)
//======================================================================
void sub_38EF60()
{
  dword_55957C = 0;
  dword_559590 = (int)&dword_55957C;
}


//======================================================================
// sub_38EF78
// address: 0x0038EF78   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_38EF78(std::exception *a1)
{
  *(_DWORD *)a1 = &off_464198;
  std::exception::~exception(a1);
  return a1;
}


//======================================================================
// sub_38EF90
// address: 0x0038EF90   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_38EF90(std::exception *a1)
{
  *(_DWORD *)a1 = &off_464180;
  std::exception::~exception(a1);
  return a1;
}


//======================================================================
// sub_38EFA8
// address: 0x0038EFA8   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_38EFA8(std::exception *a1)
{
  *(_DWORD *)a1 = &off_464168;
  std::exception::~exception(a1);
  return a1;
}


//======================================================================
// sub_38EFC0
// address: 0x0038EFC0   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_38EFC0(std::exception *a1)
{
  *(_DWORD *)a1 = &off_464150;
  std::exception::~exception(a1);
  return a1;
}


//======================================================================
// sub_38EFD8
// address: 0x0038EFD8   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_38EFD8(std::exception *a1)
{
  *(_DWORD *)a1 = &off_464198;
  std::exception::~exception(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_38EFF8
// address: 0x0038EFF8   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_38EFF8(std::exception *a1)
{
  *(_DWORD *)a1 = &off_464180;
  std::exception::~exception(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_38F018
// address: 0x0038F018   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_38F018(std::exception *a1)
{
  *(_DWORD *)a1 = &off_464168;
  std::exception::~exception(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_38F038
// address: 0x0038F038   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_38F038(std::exception *a1)
{
  *(_DWORD *)a1 = &off_464150;
  std::exception::~exception(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_38F058
// address: 0x0038F058   size: 0x1C (28 bytes)
//======================================================================
void __noreturn sub_38F058()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = &off_464150;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'__gnu_cxx::__concurrence_lock_error,
    (void (*)(void *))sub_38EFC0);
}


//======================================================================
// sub_38F080
// address: 0x0038F080   size: 0x1C (28 bytes)
//======================================================================
void __noreturn sub_38F080()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = &off_464168;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'__gnu_cxx::__concurrence_unlock_error,
    (void (*)(void *))sub_38EFA8);
}


//======================================================================
// sub_38F0A8
// address: 0x0038F0A8   size: 0x1C (28 bytes)
//======================================================================
void __noreturn sub_38F0A8()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = &off_464180;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'__gnu_cxx::__concurrence_broadcast_error,
    (void (*)(void *))sub_38EF90);
}


//======================================================================
// sub_38F0D0
// address: 0x0038F0D0   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_38F0D0(pthread_mutex_t *a1)
{
  int result; // r0

  result = j_pthread_mutex_unlock(a1);
  if ( result != 0 )
    sub_38F080();
  return result;
}


//======================================================================
// sub_38F918
// address: 0x0038F918   size: 0x30 (48 bytes)
//======================================================================
_BYTE *__fastcall sub_38F918(_BYTE *result, _DWORD *a2)
{
  unsigned int v2; // r3
  int v3; // r4

  v2 = 0;
  v3 = 0;
  do
  {
    v3 |= (*result++ & 0x7F) << v2;
    v2 += 7;
  }
  while ( (*(result - 1) & 0x80) != 0 );
  if ( v2 <= 0x1F && (*(result - 1) & 0x40) != 0 )
    v3 |= -(1 << v2);
  *a2 = v3;
  return result;
}


//======================================================================
// sub_38F948
// address: 0x0038F948   size: 0xE0 (224 bytes)
//======================================================================
_BYTE *__fastcall sub_38F948(int a1, unsigned __int8 *a2, unsigned __int8 *a3, int *a4)
{
  char v5; // r7
  int v8; // r0
  _BYTE *v9; // r5
  int v10; // r4
  unsigned __int8 *v11; // r3
  _BYTE *v13; // r0
  int v14; // r2
  _DWORD *v15; // r5
  int v16; // [sp+4h] [bp-8h] BYREF

  v5 = a1;
  if ( a1 != 80 )
  {
    v8 = a1 & 0xF;
    if ( (v5 & 0xFu) > 0xC )
LABEL_3:
      j_abort();
    switch ( v8 )
    {
      case 0:
      case 3:
      case 11:
        v9 = a3 + 4;
        v10 = (a3[1] << 8) | *a3 | (a3[2] << 16) | (a3[3] << 24);
        goto LABEL_6;
      case 1:
        v9 = a3;
        v10 = 0;
        v14 = 0;
        do
        {
          v10 |= (*v9++ & 0x7F) << v14;
          v14 += 7;
        }
        while ( (*(v9 - 1) & 0x80) != 0 );
        goto LABEL_6;
      case 2:
        v10 = (a3[1] << 8) | *a3;
        v9 = a3 + 2;
        goto LABEL_6;
      case 4:
      case 12:
        v9 = a3 + 8;
        v10 = (a3[1] << 8) | *a3 | (a3[2] << 16) | (a3[3] << 24);
        goto LABEL_6;
      case 9:
        v13 = sub_38F918(a3, &v16);
        v10 = v16;
        v9 = v13;
        goto LABEL_6;
      case 10:
        v10 = (__int16)((a3[1] << 8) | *a3);
        v9 = a3 + 2;
LABEL_6:
        if ( v10 != 0 )
        {
          v11 = a2;
          if ( (v5 & 0x70) == 0x10 )
            v11 = a3;
          v10 += (int)v11;
          if ( v5 < 0 )
            v10 = *(_DWORD *)v10;
        }
        goto LABEL_11;
      default:
        goto LABEL_3;
    }
  }
  v15 = (_DWORD *)((unsigned int)(a3 + 3) & 0xFFFFFFFC);
  v10 = *v15;
  v9 = v15 + 1;
LABEL_11:
  *a4 = v10;
  return v9;
}


//======================================================================
// sub_38FA28
// address: 0x0038FA28   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_38FA28(int a1, int a2)
{
  int v2; // r3

  if ( a1 == 255 )
    return 0;
  v2 = a1 & 0x70;
  if ( v2 == 32 )
    Unwind_GetTextRelBase(a2);
  if ( (a1 & 0x70u) <= 0x20 )
  {
    if ( (a1 & 0x70) != 0 && v2 != 16 )
LABEL_11:
      j_abort();
    return 0;
  }
  if ( v2 != 64 )
  {
    if ( v2 != 80 )
    {
      if ( v2 == 48 )
        Unwind_GetDataRelBase(a2);
      goto LABEL_11;
    }
    return 0;
  }
  return Unwind_GetRegionStart(a2);
}


//======================================================================
// sub_38FA6C
// address: 0x0038FA6C   size: 0x98 (152 bytes)
//======================================================================
_BYTE *__fastcall sub_38FA6C(int a1, unsigned __int8 *a2, int a3)
{
  int RegionStart; // r0
  unsigned __int8 *v7; // r4
  int v8; // r7
  unsigned __int8 *v9; // r0
  _BYTE *v10; // r0
  int v11; // r2
  _BYTE *v12; // r3
  int v13; // r1
  int v14; // r2
  _BYTE *result; // r0
  int v16; // r4
  int v17; // r3
  int v18; // r2

  if ( a1 != 0 )
    RegionStart = Unwind_GetRegionStart(a1);
  else
    RegionStart = 0;
  *(_DWORD *)a3 = RegionStart;
  v7 = a2 + 1;
  v8 = *a2;
  if ( v8 != 255 )
  {
    v9 = (unsigned __int8 *)sub_38FA28(v8, a1);
    v10 = sub_38F948(v8, v9, v7, (int *)(a3 + 4));
    v11 = (unsigned __int8)*v10;
    v12 = v10 + 1;
    *(_BYTE *)(a3 + 20) = v11;
    if ( v11 != 255 )
      goto LABEL_5;
LABEL_12:
    *(_DWORD *)(a3 + 12) = 0;
    goto LABEL_8;
  }
  *(_DWORD *)(a3 + 4) = RegionStart;
  v18 = *v7;
  v12 = v7 + 1;
  *(_BYTE *)(a3 + 20) = v18;
  if ( v18 == 255 )
    goto LABEL_12;
LABEL_5:
  *(_BYTE *)(a3 + 20) = -112;
  v13 = 0;
  v14 = 0;
  do
  {
    v14 |= (*v12++ & 0x7F) << v13;
    v13 += 7;
  }
  while ( (*(v12 - 1) & 0x80) != 0 );
  *(_DWORD *)(a3 + 12) = &v12[v14];
LABEL_8:
  result = v12 + 1;
  *(_BYTE *)(a3 + 21) = *v12;
  v16 = 0;
  v17 = 0;
  do
  {
    v16 |= (*result++ & 0x7F) << v17;
    v17 += 7;
  }
  while ( (*(result - 1) & 0x80) != 0 );
  *(_DWORD *)(a3 + 16) = &result[v16];
  return result;
}


//======================================================================
// sub_38FB04
// address: 0x0038FB04   size: 0x422 (1058 bytes)
//======================================================================
int __fastcall sub_38FB04(char a1, int a2, int a3)
{
  char v5; // r4
  char v6; // r5
  unsigned __int8 *v7; // r4
  int *v8; // r9
  unsigned int v9; // r7
  int v10; // r11
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r0
  int v13; // r4
  unsigned __int8 *v14; // r11
  unsigned __int8 *v15; // r0
  unsigned __int8 *v16; // r0
  int v17; // r4
  unsigned __int8 *v18; // r11
  unsigned __int8 *v19; // r0
  unsigned __int8 *v20; // r0
  int v21; // r1
  int v22; // r3
  int v23; // r7
  int v24; // r5
  int v25; // r4
  int v26; // r5
  int v27; // r0
  int v28; // r4
  int v30; // r5
  unsigned __int8 *v31; // r0
  _DWORD *v32; // r6
  _DWORD *v33; // r3
  _BYTE *v34; // r0
  _BYTE *v35; // r4
  int v36; // r3
  _BOOL4 v37; // r3
  int *v38; // r5
  int v39; // r3
  int *v40; // r2
  _BYTE *v41; // r9
  int *v42; // r4
  int *v43; // r3
  int *v44; // r3
  int v45; // r2
  int v46; // [sp+Ch] [bp-50h]
  unsigned __int8 *LanguageSpecificData; // [sp+1Ch] [bp-40h]
  char v48; // [sp+20h] [bp-3Ch]
  int v49; // [sp+28h] [bp-34h] BYREF
  int v50; // [sp+2Ch] [bp-30h] BYREF
  int v51; // [sp+30h] [bp-2Ch] BYREF
  int v52; // [sp+34h] [bp-28h] BYREF
  int v53; // [sp+38h] [bp-24h] BYREF
  int v54; // [sp+3Ch] [bp-20h] BYREF
  _DWORD v55[2]; // [sp+40h] [bp-1Ch] BYREF
  unsigned __int8 *v56; // [sp+48h] [bp-14h]
  int v57; // [sp+4Ch] [bp-10h]
  unsigned int v58; // [sp+50h] [bp-Ch]
  unsigned __int8 v59; // [sp+54h] [bp-8h]
  unsigned __int8 v60; // [sp+55h] [bp-7h]

  v49 = 0;
  switch ( a1 & 3 )
  {
    case 1:
      v5 = a1 & 8;
      if ( (a1 & 8) == 0 )
      {
        v30 = *(_DWORD *)(a2 + 32);
        Unwind_VRS_Get(a3, 0, 13, 0, v55);
        if ( v30 == v55[0] )
        {
          v50 = a2;
          Unwind_VRS_Set(a3, 0, 12, 0, &v50);
          v23 = *(_DWORD *)(a2 + 48);
          v25 = *(_DWORD *)(a2 + 40);
          if ( v23 != 0 )
          {
            LanguageSpecificData = *(unsigned __int8 **)(a2 + 44);
            v24 = 3;
            goto LABEL_39;
          }
LABEL_80:
          sub_390104(a2);
        }
      }
      v6 = 2;
      break;
    case 2:
      goto LABEL_24;
    case 0:
LABEL_5:
      v5 = a1 & 8;
      v6 = 1;
      break;
    default:
LABEL_4:
      j_abort();
      goto LABEL_5;
  }
  v50 = a2;
  Unwind_VRS_Set(a3, 0, 12, 0, &v50);
  LanguageSpecificData = (unsigned __int8 *)Unwind_GetLanguageSpecificData(a3);
  if ( LanguageSpecificData == nullptr )
    goto LABEL_24;
  v48 = v5 | v6;
  v7 = sub_38FA6C(a3, LanguageSpecificData, (int)v55);
  v56 = (unsigned __int8 *)sub_38FA28(v59, a3);
  v8 = &v54;
  Unwind_VRS_Get(a3, 0, 15, 0, &v54);
  v9 = (v54 & 0xFFFFFFFE) - 1;
  if ( (unsigned int)v7 >= v58 )
  {
LABEL_11:
    v23 = 0;
    v24 = 1;
LABEL_12:
    v25 = 0;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v10 = v60;
    v11 = (unsigned __int8 *)sub_38FA28(v60, 0);
    v12 = sub_38F948(v10, v11, v7, &v52);
    v13 = v60;
    v14 = v12;
    v15 = (unsigned __int8 *)sub_38FA28(v60, 0);
    v16 = sub_38F948(v13, v15, v14, &v53);
    v17 = v60;
    v18 = v16;
    v19 = (unsigned __int8 *)sub_38FA28(v60, 0);
    v20 = sub_38F948(v17, v19, v18, &v54);
    v21 = 0;
    v22 = 0;
    v7 = v20;
    do
    {
      v21 |= (*v7++ & 0x7F) << v22;
      v22 += 7;
    }
    while ( (*(v7 - 1) & 0x80) != 0 );
    if ( v9 < v52 + v55[0] )
      goto LABEL_11;
    if ( v9 < v52 + v55[0] + v53 )
      break;
    if ( (unsigned int)v7 >= v58 )
      goto LABEL_11;
  }
  v23 = 0;
  if ( v54 != 0 )
    v23 = v54 + v55[1];
  if ( v21 == 0 )
  {
    if ( v23 == 0 )
      goto LABEL_24;
LABEL_81:
    v24 = 2;
    goto LABEL_12;
  }
  v34 = (_BYTE *)(v58 + v21 - 1);
  if ( v23 == 0 )
  {
LABEL_24:
    v28 = 9;
    if ( _gnu_unwind_frame(a2, a3) == 0 )
      return 8;
    return v28;
  }
  if ( v34 == nullptr )
    goto LABEL_81;
  if ( (v48 & 8) != 0 )
  {
    *(_BYTE *)a2 = 71;
    *(_BYTE *)(a2 + 1) = 78;
    *(_BYTE *)(a2 + 2) = 85;
    *(_BYTE *)(a2 + 3) = 67;
    *(_BYTE *)(a2 + 4) = 70;
    *(_BYTE *)(a2 + 5) = 79;
    *(_BYTE *)(a2 + 6) = 82;
    *(_BYTE *)(a2 + 7) = 0;
  }
  else if ( *(_BYTE *)(a2 + 7) == 1 )
  {
    v49 = *(_DWORD *)(a2 - 32);
  }
  else
  {
    v49 = a2 + 88;
  }
  v46 = 0;
  while ( 1 )
  {
    v35 = sub_38F918(v34, &v51);
    sub_38F918(v35, &v52);
    if ( v51 != 0 )
    {
      if ( v51 <= 0 )
      {
        if ( a2 != 0 && (v48 & 8) == 0 )
        {
          v38 = (int *)(v57 - 4 * (v51 + 1));
          v39 = *v38;
          v54 = v49;
          if ( v39 != 0 )
          {
            v40 = v8;
            v41 = v35;
            v42 = v40;
            do
            {
              if ( _cxa_type_match(a2, *(int *)((char *)v38 + v39), 0, v42) != 0 )
              {
                v43 = v42;
                v35 = v41;
                v8 = v43;
                v37 = false;
                goto LABEL_65;
              }
              v39 = *++v38;
            }
            while ( *v38 != 0 );
            v44 = v42;
            v35 = v41;
            v8 = v44;
          }
          v37 = true;
        }
        else
        {
          v37 = *(_DWORD *)(-4 * (v51 + 1) + v57) == 0;
        }
LABEL_65:
        if ( v37 )
        {
LABEL_66:
          v25 = v51;
          v24 = 3;
          goto LABEL_13;
        }
      }
      else
      {
        if ( v59 != 255 )
        {
          switch ( v59 & 7 )
          {
            case 0:
            case 3:
              v36 = -4 * v51;
              goto LABEL_55;
            case 2:
              v36 = -2 * v51;
              goto LABEL_55;
            case 4:
              v36 = -8 * v51;
              goto LABEL_55;
            default:
              goto LABEL_4;
          }
        }
        v36 = 0;
LABEL_55:
        sub_38F948(v59, v56, (unsigned __int8 *)(v57 + v36), &v53);
        if ( v53 == 0 || a2 != 0 && _cxa_type_match(a2, v53, 0, &v49) != 0 )
          goto LABEL_66;
      }
    }
    else
    {
      v46 = 1;
    }
    if ( v52 == 0 )
      break;
    v34 = &v35[v52];
  }
  if ( v46 == 0 )
    goto LABEL_24;
  v25 = 0;
  v24 = 2;
LABEL_13:
  if ( (v48 & 1) != 0 )
  {
    if ( v24 != 2 )
    {
      v26 = v49;
      Unwind_VRS_Get(a3, 0, 13, 0, &v53);
      v27 = v53;
      *(_DWORD *)(a2 + 40) = v25;
      v28 = 6;
      *(_DWORD *)(a2 + 32) = v27;
      *(_DWORD *)(a2 + 36) = v26;
      *(_DWORD *)(a2 + 44) = LanguageSpecificData;
      *(_DWORD *)(a2 + 48) = v23;
      return v28;
    }
    goto LABEL_24;
  }
  if ( (v48 & 8) == 0 )
  {
    if ( v24 != 1 )
    {
LABEL_39:
      if ( v25 < 0 )
      {
        sub_38FA6C(a3, LanguageSpecificData, (int)v55);
        v31 = (unsigned __int8 *)sub_38FA28(v59, a3);
        v56 = v31;
        v32 = (_DWORD *)(v57 - 4 * (v25 + 1));
        if ( *v32 != 0 )
        {
          v33 = v32 + 1;
          v45 = 0;
          do
          {
            ++v33;
            ++v45;
          }
          while ( *(v33 - 1) != 0 );
        }
        else
        {
          v45 = 0;
        }
        *(_DWORD *)(a2 + 44) = v31;
        *(_DWORD *)(a2 + 40) = v45;
        *(_DWORD *)(a2 + 48) = 4;
        *(_DWORD *)(a2 + 52) = v32;
      }
      goto LABEL_36;
    }
    goto LABEL_80;
  }
  if ( v24 == 1 )
    std::terminate();
  if ( v25 < 0 )
    std::unexpected();
LABEL_36:
  v51 = a2;
  Unwind_VRS_Set(a3, 0, 0, 0, &v51);
  v52 = v25;
  Unwind_VRS_Set(a3, 0, 1, 0, &v52);
  Unwind_VRS_Get(a3, 0, 15, 0, &v53);
  v53 = v23 | v53 & 1;
  v28 = 7;
  Unwind_VRS_Set(a3, 0, 15, 0, &v53);
  if ( v24 == 2 )
    _cxa_begin_cleanup(a2);
  return v28;
}

