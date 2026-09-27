// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_3C0000

//======================================================================
// sub_3C0014
// address: 0x003C0014   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0014(_DWORD *a1)
{
  *a1 = &off_466018;
  sub_3A7C48((int)a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3C0034
// address: 0x003C0034   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0034(_DWORD *a1, char *a2, int a3)
{
  sub_3A9498((int)a1, 0, 0, a3);
  *a1 = &off_466018;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5428(a1 + 2);
    sub_3A5400(a1 + 2, a2);
  }
  return a1;
}


//======================================================================
// sub_3C0098
// address: 0x003C0098   size: 0xA6 (166 bytes)
//======================================================================
wctype_t __fastcall sub_3C0098(int a1, unsigned int a2)
{
  if ( a2 == 8 )
    return j_wctype("space");
  if ( a2 > 8 )
  {
    if ( a2 == 32 )
    {
      return j_wctype("cntrl");
    }
    else
    {
      if ( a2 > 0x20 )
      {
        if ( a2 == 68 )
          return j_wctype("xdigit");
        if ( a2 == 151 )
          return j_wctype("print");
        return 0;
      }
      if ( a2 != 16 )
      {
        if ( a2 == 23 )
          return j_wctype("graph");
        return 0;
      }
      return j_wctype("punct");
    }
  }
  else
  {
    if ( a2 == 3 )
      return j_wctype("alpha");
    if ( a2 > 3 )
    {
      if ( a2 != 4 )
      {
        if ( a2 == 7 )
          return j_wctype("alnum");
        return 0;
      }
      return j_wctype("digit");
    }
    else
    {
      if ( a2 != 1 )
      {
        if ( a2 == 2 )
          return j_wctype("lower");
        return 0;
      }
      return j_wctype("upper");
    }
  }
}


//======================================================================
// sub_3C016C
// address: 0x003C016C   size: 0xA (10 bytes)
//======================================================================
wint_t __fastcall sub_3C016C(int a1, wint_t wc)
{
  return j_towupper(wc);
}


//======================================================================
// sub_3C0178
// address: 0x003C0178   size: 0x2E (46 bytes)
//======================================================================
unsigned int __fastcall sub_3C0178(int a1, wint_t *a2, unsigned int a3)
{
  wint_t *v3; // r5
  wint_t *v5; // r4
  wint_t *v6; // r6

  v3 = a2;
  if ( (unsigned int)a2 < a3 )
  {
    v5 = a2 + 1;
    v6 = &a2[((a3 + 3 - (unsigned int)(a2 + 1)) >> 2) + 1];
    while ( 1 )
    {
      *v3 = j_towupper(*v3);
      v3 = v5;
      if ( v5 == v6 )
        break;
      ++v5;
    }
  }
  return a3;
}


//======================================================================
// sub_3C01A8
// address: 0x003C01A8   size: 0xA (10 bytes)
//======================================================================
wint_t __fastcall sub_3C01A8(int a1, wint_t wc)
{
  return j_towlower(wc);
}


//======================================================================
// sub_3C01B4
// address: 0x003C01B4   size: 0x2E (46 bytes)
//======================================================================
unsigned int __fastcall sub_3C01B4(int a1, wint_t *a2, unsigned int a3)
{
  wint_t *v3; // r5
  wint_t *v5; // r4
  wint_t *v6; // r6

  v3 = a2;
  if ( (unsigned int)a2 < a3 )
  {
    v5 = a2 + 1;
    v6 = &a2[((a3 + 3 - (unsigned int)(a2 + 1)) >> 2) + 1];
    while ( 1 )
    {
      *v3 = j_towlower(*v3);
      v3 = v5;
      if ( v5 == v6 )
        break;
      ++v5;
    }
  }
  return a3;
}


//======================================================================
// sub_3C01E4
// address: 0x003C01E4   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_3C01E4(int a1, unsigned __int8 a2, wint_t wc)
{
  wctype_t *v6; // r5
  int i; // r4

  v6 = (wctype_t *)(a1 + 1184);
  for ( i = 0; i != 16; ++i )
  {
    if ( (*(_BYTE *)(a1 + i + 1168) & a2) != 0 && j_iswctype(wc, *v6) != 0 )
      return 1;
    ++v6;
  }
  return 0;
}


//======================================================================
// sub_3C0228
// address: 0x003C0228   size: 0x80 (128 bytes)
//======================================================================
unsigned int __fastcall sub_3C0228(int a1, wint_t *a2, unsigned int a3, _BYTE *a4)
{
  wint_t *v5; // r7
  _BYTE *v6; // r9
  _BYTE *v7; // r11
  wint_t *v8; // r10
  wctype_t *v9; // r5
  int v10; // r4
  char v11; // r6
  _BYTE *v12; // r3
  wctype_t *v14; // [sp+0h] [bp-Ch]

  v5 = a2;
  v6 = a4;
  if ( (unsigned int)a2 < a3 )
  {
    v7 = &a4[((a3 + 3 - (unsigned int)(a2 + 1)) >> 2) + 1];
    v8 = a2 + 1;
    v14 = (wctype_t *)(a1 + 1184);
    while ( 1 )
    {
      v9 = v14;
      v10 = 0;
      v11 = 0;
      do
      {
        if ( j_iswctype(*v5, *v9) != 0 )
          v11 |= *(_BYTE *)(a1 + v10 + 1168);
        ++v10;
        ++v9;
      }
      while ( v10 != 16 );
      v12 = v6++;
      *v12 = v11;
      v5 = v8;
      if ( v6 == v7 )
        break;
      ++v8;
    }
  }
  return a3;
}


//======================================================================
// sub_3C02A8
// address: 0x003C02A8   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3C02A8(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *i; // r4

  for ( i = a3; a4 > (unsigned int)i; ++i )
  {
    if ( (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, a2, *i) != 0 )
      break;
  }
  return i;
}


//======================================================================
// sub_3C02DC
// address: 0x003C02DC   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3C02DC(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *i; // r4

  for ( i = a3; a4 > (unsigned int)i; ++i )
  {
    if ( (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, a2, *i) == 0 )
      break;
  }
  return i;
}


//======================================================================
// sub_3C0310
// address: 0x003C0310   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3C0310(int a1, int a2)
{
  return *(_DWORD *)(4 * (a2 + 36) + a1);
}


//======================================================================
// sub_3C0318
// address: 0x003C0318   size: 0x1A (26 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_3C0318(int a1, unsigned __int8 *a2, unsigned __int8 *a3, _DWORD *a4)
{
  int v4; // r4

  if ( a2 < a3 )
  {
    do
    {
      v4 = *a2++;
      *a4++ = *(_DWORD *)(4 * (v4 + 36) + a1);
    }
    while ( a2 != a3 );
  }
  return a3;
}


//======================================================================
// sub_3C0334
// address: 0x003C0334   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3C0334(int a1, wint_t c, int a3)
{
  int result; // r0

  if ( c <= 0x7F && *(_BYTE *)(a1 + 12) != 0 )
    return *(unsigned __int8 *)(a1 + c + 13);
  result = j_wctob(c);
  if ( result == -1 )
    return a3;
  else
    return (unsigned __int8)result;
}


//======================================================================
// sub_3C035C
// address: 0x003C035C   size: 0x9C (156 bytes)
//======================================================================
unsigned int __fastcall sub_3C035C(int a1, wint_t *a2, unsigned int a3, char a4, _BYTE *a5)
{
  _BYTE *v8; // r4
  wint_t *v9; // r5
  _BYTE *v10; // r8
  int v11; // r0
  wint_t *v13; // r5
  _BYTE *v14; // r9
  wint_t v15; // r0
  int v16; // r0

  v8 = a5;
  if ( *(_BYTE *)(a1 + 12) != 0 )
  {
    if ( (unsigned int)a2 < a3 )
    {
      v13 = a2 + 1;
      v14 = &a5[((a3 + 3 - (unsigned int)(a2 + 1)) >> 2) + 1];
      while ( 1 )
      {
        v15 = *a2;
        if ( *a2 <= 0x7F )
        {
          *v8 = *(_BYTE *)(a1 + v15 + 13);
        }
        else
        {
          v16 = j_wctob(v15);
          *v8 = v16 == -1 ? a4 : v16;
        }
        ++v8;
        a2 = v13;
        if ( v8 == v14 )
          break;
        ++v13;
      }
    }
  }
  else if ( (unsigned int)a2 < a3 )
  {
    v9 = a2 + 1;
    v10 = &a5[((a3 + 3 - (unsigned int)(a2 + 1)) >> 2) + 1];
    while ( 1 )
    {
      v11 = j_wctob(*a2);
      if ( v11 == -1 )
      {
        *v8++ = a4;
        a2 = v9;
        if ( v8 == v10 )
          return a3;
      }
      else
      {
        *v8++ = v11;
        a2 = v9;
        if ( v8 == v10 )
          return a3;
      }
      ++v9;
    }
  }
  return a3;
}


//======================================================================
// sub_3C03F8
// address: 0x003C03F8   size: 0x6A (106 bytes)
//======================================================================
wctype_t __fastcall sub_3C03F8(int a1)
{
  wint_t i; // r4
  wint_t v3; // r3
  int v4; // r0
  wint_t *v5; // r5
  int j; // r4
  wint_t v7; // r0
  wctype_t *v8; // r5
  int k; // r4
  unsigned int v10; // r1
  wctype_t result; // r0

  for ( i = 0; i != 128; ++i )
  {
    v4 = j_wctob(i);
    if ( v4 == -1 )
    {
      *(_BYTE *)(a1 + 12) = 0;
      goto LABEL_5;
    }
    v3 = a1 + i;
    *(_BYTE *)(v3 + 13) = v4;
  }
  *(_BYTE *)(a1 + 12) = 1;
LABEL_5:
  v5 = (wint_t *)(a1 + 144);
  for ( j = 0; j != 256; ++j )
  {
    v7 = j_btowc(j);
    *v5++ = v7;
  }
  v8 = (wctype_t *)(a1 + 1184);
  for ( k = 0; k != 16; ++k )
  {
    v10 = (unsigned __int8)(1 << k);
    *(_BYTE *)(a1 + k + 1168) = v10;
    result = sub_3C0098(a1, v10);
    *v8++ = result;
  }
  return result;
}


//======================================================================
// sub_3C0464
// address: 0x003C0464   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3C0464(int a1)
{
  return *(_DWORD *)(a1 + 4);
}


//======================================================================
// sub_3C0468
// address: 0x003C0468   size: 0x42 (66 bytes)
//======================================================================
std::exception *__fastcall sub_3C0468(std::exception *this)
{
  int v2; // r0
  void *v3; // r5

  *(_DWORD *)this = &off_466048;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_55FB7C && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3BDF60(v3);
  std::exception::~exception(this);
  return this;
}


//======================================================================
// sub_3C04B4
// address: 0x003C04B4   size: 0x12 (18 bytes)
//======================================================================
std::exception *__fastcall sub_3C04B4(std::exception *a1)
{
  sub_3C0468(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3C04C8
// address: 0x003C04C8   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_3C04C8(int a1, int **a2)
{
  *(_DWORD *)a1 = &off_466048;
  sub_3BEB1C((int **)(a1 + 4), a2);
  return a1;
}


//======================================================================
// sub_3C04F8
// address: 0x003C04F8   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_3C04F8(std::exception *a1)
{
  *(_DWORD *)a1 = &off_466078;
  sub_3BF68C(a1);
  return a1;
}


//======================================================================
// sub_3C0510
// address: 0x003C0510   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_3C0510(std::exception *a1)
{
  *(_DWORD *)a1 = &off_466078;
  sub_3BF68C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3C0530
// address: 0x003C0530   size: 0x56 (86 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0530(_DWORD *a1, int a2)
{
  int *v4; // r5
  int *v6; // [sp+Ch] [bp-4h] BYREF

  sub_3BF0BC((char **)&v6, "regex_error");
  sub_3BF818((int)a1, &v6);
  v4 = v6 - 3;
  if ( v6 - 3 != &dword_55FB7C && sub_3C82FC(v6 - 1, -1) <= 0 )
    sub_3BDF60(v4);
  *a1 = &off_466078;
  a1[2] = a2;
  return a1;
}


//======================================================================
// sub_3C05A0
// address: 0x003C05A0   size: 0x6 (6 bytes)
//======================================================================
const char *sub_3C05A0()
{
  return "generic";
}


//======================================================================
// sub_3C05AC
// address: 0x003C05AC   size: 0x6 (6 bytes)
//======================================================================
const char *sub_3C05AC()
{
  return "system";
}


//======================================================================
// sub_3C05B8
// address: 0x003C05B8   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall sub_3C05B8(_DWORD *result)
{
  *result = &off_4660B8;
  return result;
}


//======================================================================
// sub_3C05C8
// address: 0x003C05C8   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall sub_3C05C8(_DWORD *result, int a2, int a3)
{
  *result = a3;
  result[1] = a2;
  return result;
}


//======================================================================
// sub_3C05D0
// address: 0x003C05D0   size: 0x30 (48 bytes)
//======================================================================
bool __fastcall sub_3C05D0(int a1, int a2, _DWORD *a3)
{
  _BOOL4 result; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  (*(void (__fastcall **)(_DWORD *, int, int))(*(_DWORD *)a1 + 16))(v5, a1, a2);
  result = false;
  if ( v5[1] == a3[1] )
    return v5[0] == *a3;
  return result;
}


//======================================================================
// sub_3C0600
// address: 0x003C0600   size: 0x18 (24 bytes)
//======================================================================
bool __fastcall sub_3C0600(int a1, _DWORD *a2, int a3)
{
  int v3; // r3

  v3 = 0;
  if ( a2[1] == a1 )
    return *a2 == a3;
  return v3;
}


//======================================================================
// sub_3C0618
// address: 0x003C0618   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0618(_DWORD *result)
{
  *result = &off_4660B8;
  return result;
}


//======================================================================
// sub_3C0628
// address: 0x003C0628   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0628(_DWORD *result)
{
  *result = &off_4660B8;
  return result;
}


//======================================================================
// sub_3C0638
// address: 0x003C0638   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0638(_DWORD *a1)
{
  *a1 = &off_4660B8;
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3C0650
// address: 0x003C0650   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0650(_DWORD *a1)
{
  *a1 = &off_4660B8;
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3C0668
// address: 0x003C0668   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0668(_DWORD *a1)
{
  *a1 = &off_4660B8;
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3C0680
// address: 0x003C0680   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_3C0680(std::exception *a1)
{
  *(_DWORD *)a1 = &off_4660A0;
  sub_3BF68C(a1);
  return a1;
}


//======================================================================
// sub_3C0698
// address: 0x003C0698   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_3C0698(std::exception *a1)
{
  *(_DWORD *)a1 = &off_4660A0;
  sub_3BF68C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3C06B8
// address: 0x003C06B8   size: 0x1C (28 bytes)
//======================================================================
char **__fastcall sub_3C06B8(char **a1, int a2, int a3)
{
  char *v4; // r0

  v4 = j_strerror(a3);
  sub_3BF0BC(a1, v4);
  return a1;
}


//======================================================================
// sub_3C06D4
// address: 0x003C06D4   size: 0x1C (28 bytes)
//======================================================================
char **__fastcall sub_3C06D4(char **a1, int a2, int a3)
{
  char *v4; // r0

  v4 = j_strerror(a3);
  sub_3BF0BC(a1, v4);
  return a1;
}


//======================================================================
// sub_3C06F0
// address: 0x003C06F0   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall sub_3C06F0(_DWORD *result)
{
  *result = &off_4660B8;
  return result;
}


//======================================================================
// sub_3C0700
// address: 0x003C0700   size: 0x6 (6 bytes)
//======================================================================
int *sub_3C0700()
{
  return &dword_55FB8C;
}


//======================================================================
// sub_3C070C
// address: 0x003C070C   size: 0x6 (6 bytes)
//======================================================================
int *sub_3C070C()
{
  return &dword_55FB90;
}


//======================================================================
// sub_3C0718
// address: 0x003C0718   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3C0718(int a1, int a2)
{
  (*(void (__fastcall **)(int, _DWORD, _DWORD))(**(_DWORD **)(a2 + 4) + 16))(a1, *(_DWORD *)(a2 + 4), *(_DWORD *)a2);
  return a1;
}


//======================================================================
// sub_3C085C
// address: 0x003C085C   size: 0x9C (156 bytes)
//======================================================================
_DWORD *__fastcall sub_3C085C(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0
  int v6; // r6
  int v7; // r4
  _DWORD *v8; // r4
  int v9; // r4

  switch ( a2 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 11:
    case 33:
    case 43:
    case 45:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 59:
    case 60:
    case 62:
    case 74:
    case 75:
      if ( a3 == 0 )
        goto LABEL_2;
      goto LABEL_10;
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 40:
    case 51:
    case 52:
    case 58:
    case 61:
    case 65:
    case 66:
    case 67:
    case 71:
    case 72:
    case 73:
      if ( a3 != 0 )
        goto LABEL_6;
      goto LABEL_2;
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 41:
    case 46:
    case 47:
LABEL_6:
      v6 = a1[5];
      v7 = a1[6];
      result = nullptr;
      if ( v6 < v7 )
        goto LABEL_7;
      return result;
    case 42:
    case 48:
LABEL_10:
      if ( a4 == 0 )
        goto LABEL_2;
      v6 = a1[5];
      v9 = a1[6];
      result = nullptr;
      if ( v6 < v9 )
      {
LABEL_7:
        v8 = (_DWORD *)(a1[4] + 12 * v6);
        a1[5] = v6 + 1;
        if ( v8 != nullptr )
        {
          *v8 = a2;
          v8[1] = a3;
          v8[2] = a4;
          result = v8;
        }
      }
      break;
    default:
LABEL_2:
      result = nullptr;
      break;
  }
  return result;
}


//======================================================================
// sub_3C08F8
// address: 0x003C08F8   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall sub_3C08F8(_DWORD *a1, int a2, int a3)
{
  int v3; // r3
  _DWORD *v4; // r4

  v3 = a1[5];
  if ( v3 >= a1[6] )
    return nullptr;
  v4 = (_DWORD *)(a1[4] + 12 * v3);
  a1[5] = v3 + 1;
  if ( v4 == nullptr || a2 == 0 || a3 == 0 )
    return nullptr;
  *v4 = a2 == 0;
  v4[1] = a2;
  v4[2] = a3;
  return v4;
}


//======================================================================
// sub_3C0930
// address: 0x003C0930   size: 0xD6 (214 bytes)
//======================================================================
int **__fastcall sub_3C0930(_DWORD *a1, int **a2, int a3)
{
  unsigned __int8 *v3; // r5
  int **v5; // r8
  int v7; // r3
  int **v8; // r6
  int v9; // r1
  _DWORD *v10; // r0
  int v11; // r1
  int *v13; // r3
  int v14; // r2

  v3 = (unsigned __int8 *)a1[3];
  v5 = a2;
  v7 = *v3;
  v8 = a2;
  while ( v7 == 86 || v7 == 114 )
  {
    a1[3] = v3 + 1;
    if ( v7 == 114 )
    {
      v11 = 25;
      if ( a3 != 0 )
        v11 = 28;
    }
    else
    {
      v11 = 26;
      if ( a3 != 0 )
        v11 = 29;
    }
    a1[12] += 9;
    v10 = sub_3C085C(a1, v11, 0, 0);
    *v8 = v10;
    if ( v10 == nullptr )
      return nullptr;
LABEL_7:
    v3 = (unsigned __int8 *)a1[3];
    v8 = (int **)(v10 + 1);
    v7 = *v3;
  }
  if ( v7 == 75 )
  {
    a1[3] = v3 + 1;
    v9 = 27;
    if ( a3 != 0 )
      v9 = 30;
    a1[12] += 6;
    v10 = sub_3C085C(a1, v9, 0, 0);
    *v8 = v10;
    if ( v10 == nullptr )
      return nullptr;
    goto LABEL_7;
  }
  if ( a3 == 0 && v7 == 70 && v8 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v13 = *v5;
        v14 = **v5;
        if ( v14 != 26 )
          break;
        *v13 = 29;
        v5 = (int **)(v13 + 1);
        if ( v8 == (int **)(v13 + 1) )
          return v8;
      }
      if ( v14 == 27 )
      {
        *v13 = 30;
      }
      else if ( v14 == 25 )
      {
        *v13 = 28;
      }
      v5 = (int **)(v13 + 1);
    }
    while ( v8 != (int **)(v13 + 1) );
  }
  return v8;
}


//======================================================================
// sub_3C0A08
// address: 0x003C0A08   size: 0x42 (66 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0A08(_DWORD *a1, int a2)
{
  _BYTE *v3; // r0
  int v5; // r1

  v3 = (_BYTE *)a1[3];
  if ( *v3 != 79 )
  {
    if ( *v3 != 82 )
      return (_DWORD *)a2;
  }
  else if ( *v3 != 82 )
  {
    a1[12] += 3;
    v5 = 32;
LABEL_4:
    a1[3] = v3 + 1;
    return sub_3C085C(a1, v5, a2, 0);
  }
  a1[12] += 2;
  v5 = 31;
  goto LABEL_4;
}


//======================================================================
// sub_3C0A4C
// address: 0x003C0A4C   size: 0xA8 (168 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0A4C(_DWORD *a1, int a2)
{
  unsigned __int8 *v3; // r1
  int v5; // r4
  _BYTE *v6; // r3
  _DWORD *v7; // r0

  v3 = (unsigned __int8 *)a1[3];
  v5 = *v3;
  v6 = v3;
  if ( v5 == 46 )
  {
    if ( (unsigned __int8)(v3[1] - 97) <= 0x19u || v3[1] == 95 )
    {
      v5 = v3[2];
      v6 = v3 + 2;
      if ( (unsigned __int8)(v3[2] - 97) <= 0x19u || v5 == 95 )
      {
        do
        {
          do
            v5 = (unsigned __int8)*++v6;
          while ( (unsigned __int8)(*v6 - 97) <= 0x19u );
        }
        while ( v5 == 95 );
      }
    }
    else
    {
      v6 = (_BYTE *)a1[3];
      v5 = 46;
    }
  }
LABEL_2:
  if ( v5 == 46 )
  {
    while ( (unsigned __int8)(v6[1] - 48) <= 9u )
    {
      v5 = (unsigned __int8)v6[2];
      if ( (unsigned __int8)(v6[2] - 48) > 9u )
      {
        v6 += 2;
        goto LABEL_2;
      }
      v6 += 2;
      do
        ++v6;
      while ( (unsigned __int8)(*v6 - 48) <= 9u );
      if ( *v6 != 46 )
        break;
    }
  }
  a1[3] = v6;
  v7 = sub_3C08F8(a1, (int)v3, v6 - v3);
  return sub_3C085C(a1, 75, a2, (int)v7);
}


//======================================================================
// sub_3C0AF4
// address: 0x003C0AF4   size: 0x17A (378 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0AF4(_DWORD *a1, int a2)
{
  _BYTE *v2; // r3
  _DWORD *result; // r0
  int v4; // r3
  _BOOL4 v5; // r5
  char **v6; // r2
  unsigned __int8 v7; // r4
  unsigned int v8; // r2
  unsigned int v9; // r1
  _BYTE *v10; // r3
  unsigned int v11; // r1
  char *v12; // r6
  int v13; // r3
  int v14; // r4
  char *v15; // r12
  _DWORD *v16; // r8
  int v17; // r9
  _DWORD *v18; // r1
  char *v19; // r5
  char *v20; // r1
  _DWORD *v21; // r2

  v2 = (_BYTE *)a1[3];
  if ( *v2 != 83 )
    return nullptr;
  a1[3] = v2 + 1;
  if ( v2[1] == 0 )
  {
    v4 = 0;
LABEL_6:
    if ( a2 != 0 && ((a1[2] & 8) == 0) << 24 != 0 )
      v5 = (unsigned __int8)(*(_BYTE *)a1[3] - 67) <= 1u;
    else
      v5 = (a1[2] & 8) != 0;
    v6 = (char **)&unk_454EC4;
    while ( *(unsigned __int8 *)v6 != v4 )
    {
      v6 += 7;
      if ( v6 == &off_454F88 )
        return nullptr;
    }
    v12 = v6[5];
    if ( v12 != nullptr )
    {
      v13 = a1[5];
      v14 = a1[6];
      v15 = v6[6];
      v16 = nullptr;
      if ( v13 < v14 )
      {
        v17 = 12 * v13++;
        v18 = (_DWORD *)(a1[4] + v17);
        a1[5] = v13;
        if ( v18 != nullptr )
        {
          v18[1] = v12;
          v16 = v18;
          *v18 = 24;
          v18[2] = v15;
        }
      }
      a1[11] = v16;
    }
    else
    {
      v14 = a1[6];
      v13 = a1[5];
    }
    if ( v5 )
    {
      v19 = v6[3];
      v20 = v6[4];
    }
    else
    {
      v19 = v6[1];
      v20 = v6[2];
    }
    a1[12] += v20;
    if ( v14 <= v13 )
      return nullptr;
    v21 = (_DWORD *)(a1[4] + 12 * v13);
    a1[5] = v13 + 1;
    result = nullptr;
    if ( v21 != nullptr )
    {
      *v21 = 24;
      v21[1] = v19;
      v21[2] = v20;
      return v21;
    }
    return result;
  }
  a1[3] = v2 + 2;
  v4 = (unsigned __int8)v2[1];
  v7 = v4 - 48;
  if ( (unsigned __int8)(v4 - 48) <= 9u || v4 == 95 )
  {
    if ( v4 == 95 )
    {
      v11 = 0;
      goto LABEL_26;
    }
  }
  else if ( (unsigned int)(v4 - 65) > 0x19 )
  {
    goto LABEL_6;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( v7 <= 9u )
    {
      v9 = 36 * v8 + v4 - 48;
    }
    else
    {
      if ( (unsigned __int8)(v4 - 65) > 0x19u )
        return nullptr;
      v9 = 36 * v8 + v4 - 55;
    }
    if ( v8 > v9 )
      return nullptr;
    v10 = (_BYTE *)a1[3];
    if ( *v10 != 0 )
      break;
    v4 = 0;
LABEL_20:
    v8 = v9;
    v7 = v4 - 48;
  }
  a1[3] = v10 + 1;
  v4 = (unsigned __int8)*v10;
  if ( v4 != 95 )
    goto LABEL_20;
  v11 = v9 + 1;
LABEL_26:
  if ( v11 < a1[8] )
  {
    ++a1[10];
    return *(_DWORD **)(4 * v11 + a1[7]);
  }
  return nullptr;
}


//======================================================================
// sub_3C0C78
// address: 0x003C0C78   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_3C0C78(int result, char a2)
{
  int v2; // r3
  int v3; // r4
  int v5; // r1

  v2 = *(_DWORD *)(result + 256);
  v3 = result;
  if ( v2 == 255 )
  {
    *(_BYTE *)(result + 255) = 0;
    result = (*(int (__fastcall **)(int, int, _DWORD))(result + 264))(result, 255, *(_DWORD *)(result + 268));
    v5 = 1;
    ++*(_DWORD *)(v3 + 288);
    v2 = 0;
  }
  else
  {
    v5 = v2 + 1;
  }
  *(_DWORD *)(v3 + 256) = v5;
  *(_BYTE *)(v3 + v2) = a2;
  *(_BYTE *)(v3 + 260) = a2;
  return result;
}


//======================================================================
// sub_3C0CC0
// address: 0x003C0CC0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_3C0CC0(unsigned __int8 **a1)
{
  int v1; // r3
  int v2; // r2
  int v4; // r5
  int result; // r0
  unsigned __int8 *v6; // r3
  int v7; // r0

  v1 = (int)*a1;
  v2 = **a1;
  v4 = 0;
  if ( v2 == 110 )
  {
    *a1 = (unsigned __int8 *)(v1 + 1);
    v4 = 1;
    v2 = *(unsigned __int8 *)(v1 + 1);
  }
  if ( (unsigned __int8)(v2 - 48) > 9u )
  {
    result = 0;
  }
  else
  {
    result = 0;
    v6 = *a1 + 1;
    do
    {
      v7 = 10 * result + v2;
      *a1 = v6;
      v2 = *v6;
      result = v7 - 48;
      ++v6;
    }
    while ( (unsigned __int8)(v2 - 48) <= 9u );
  }
  if ( v4 != 0 )
    return -result;
  return result;
}


//======================================================================
// sub_3C0D14
// address: 0x003C0D14   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0D14(int a1)
{
  int v1; // r3
  _DWORD *v2; // r4

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 >= *(_DWORD *)(a1 + 24) )
    return nullptr;
  v2 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 12 * v1);
  *(_DWORD *)(a1 + 20) = v1 + 1;
  if ( v2 == nullptr )
    return nullptr;
  *v2 = 64;
  v2[1] = sub_3C0CC0((unsigned __int8 **)(a1 + 12));
  return v2;
}


//======================================================================
// sub_3C0D44
// address: 0x003C0D44   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_3C0D44(int a1)
{
  _BYTE *v1; // r3
  int v2; // r2
  int v4; // r0
  int result; // r0

  v1 = *(_BYTE **)(a1 + 12);
  v2 = (unsigned __int8)*v1;
  if ( v2 == 95 )
  {
    result = 0;
  }
  else
  {
    if ( v2 == 110 )
      return -1;
    v4 = sub_3C0CC0((unsigned __int8 **)(a1 + 12));
    v1 = *(_BYTE **)(a1 + 12);
    result = v4 + 1;
    if ( *v1 != 95 )
      return -1;
  }
  *(_DWORD *)(a1 + 12) = v1 + 1;
  return result;
}


//======================================================================
// sub_3C0D74
// address: 0x003C0D74   size: 0x48 (72 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0D74(_DWORD *a1)
{
  _BYTE *v1; // r3
  _DWORD *result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r0
  _DWORD *v7; // r3

  v1 = (_BYTE *)a1[3];
  if ( *v1 != 84 )
    return nullptr;
  a1[3] = v1 + 1;
  v4 = sub_3C0D44((int)a1);
  if ( v4 < 0 )
    return nullptr;
  v5 = a1[5];
  v6 = a1[6];
  ++a1[10];
  if ( v5 >= v6 )
    return nullptr;
  v7 = (_DWORD *)(a1[4] + 12 * v5);
  a1[5] = v5 + 1;
  result = nullptr;
  if ( v7 != nullptr )
  {
    *v7 = 5;
    v7[1] = v4;
    return v7;
  }
  return result;
}


//======================================================================
// sub_3C0DBC
// address: 0x003C0DBC   size: 0x20 (32 bytes)
//======================================================================
bool __fastcall sub_3C0DBC(int a1)
{
  _BYTE *v1; // r2
  int v2; // r3

  v1 = *(_BYTE **)(a1 + 12);
  v2 = 1;
  if ( *v1 == 95 )
  {
    *(_DWORD *)(a1 + 12) = v1 + 1;
    return sub_3C0CC0((unsigned __int8 **)(a1 + 12)) >= 0;
  }
  return v2;
}


//======================================================================
// sub_3C0DDC
// address: 0x003C0DDC   size: 0x82 (130 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0DDC(int a1)
{
  int v2; // r0
  int v3; // r5
  unsigned __int8 *v4; // r6
  int v5; // r2
  unsigned __int8 *v6; // r3
  int v7; // r3
  _DWORD *result; // r0

  v2 = sub_3C0CC0((unsigned __int8 **)(a1 + 12));
  v3 = v2;
  if ( v2 <= 0 )
    return nullptr;
  v4 = *(unsigned __int8 **)(a1 + 12);
  if ( v2 > *(_DWORD *)(a1 + 4) - (int)v4 )
  {
    result = nullptr;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 8);
    v6 = &v4[v2];
    *(_DWORD *)(a1 + 12) = &v4[v2];
    if ( (v5 & 4) != 0 && *v6 == 36 )
      *(_DWORD *)(a1 + 12) = v6 + 1;
    if ( v2 > 9 && j_memcmp(v4, "_GLOBAL_", 8u) == 0 && ((v7 = v4[8]) == 46 || v7 == 95 || v7 == 36) && v4[9] == 78 )
    {
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 48) + 22 - v3;
      result = sub_3C08F8((_DWORD *)a1, (int)"(anonymous namespace)", 21);
    }
    else
    {
      result = sub_3C08F8((_DWORD *)a1, (int)v4, v3);
    }
  }
  *(_DWORD *)(a1 + 44) = result;
  return result;
}


//======================================================================
// sub_3C0E68
// address: 0x003C0E68   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_3C0E68(int a1, int a2)
{
  _BYTE *v3; // r3
  int result; // r0
  _BYTE *v5; // r3
  _BYTE *v6; // r3

  if ( a2 == 0 )
  {
    v3 = *(_BYTE **)(a1 + 12);
    if ( *v3 == 0 )
      return 0;
    *(_DWORD *)(a1 + 12) = v3 + 1;
    a2 = (unsigned __int8)*v3;
  }
  if ( a2 == 104 )
  {
    sub_3C0CC0((unsigned __int8 **)(a1 + 12));
  }
  else
  {
    if ( a2 != 118 )
      return 0;
    sub_3C0CC0((unsigned __int8 **)(a1 + 12));
    v5 = *(_BYTE **)(a1 + 12);
    if ( *v5 != 95 )
      return 0;
    *(_DWORD *)(a1 + 12) = v5 + 1;
    sub_3C0CC0((unsigned __int8 **)(a1 + 12));
  }
  v6 = *(_BYTE **)(a1 + 12);
  result = 0;
  if ( *v6 == 95 )
  {
    *(_DWORD *)(a1 + 12) = v6 + 1;
    return 1;
  }
  return result;
}


//======================================================================
// sub_3C0EC4
// address: 0x003C0EC4   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_3C0EC4(int a1, int *a2)
{
  int v2; // r3
  int v3; // r2
  _DWORD *v4; // r3
  int result; // r0

  v2 = *(_DWORD *)(a1 + 272);
  if ( v2 == 0 )
  {
    *(_DWORD *)(a1 + 280) = 1;
    return 0;
  }
  v3 = *a2;
  v4 = *(_DWORD **)(*(_DWORD *)(v2 + 4) + 8);
  if ( v4 == nullptr || *v4 != 47 )
    return 0;
  if ( v3 > 0 )
  {
    while ( 1 )
    {
      v4 = (_DWORD *)v4[2];
      --v3;
      if ( v4 == nullptr || *v4 != 47 )
        break;
      if ( v3 == 0 )
        return v4[1];
    }
    return 0;
  }
  result = 0;
  if ( v3 == 0 )
    return v4[1];
  return result;
}


//======================================================================
// sub_3C0F14
// address: 0x003C0F14   size: 0x88 (136 bytes)
//======================================================================
_DWORD *__fastcall sub_3C0F14(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  _DWORD *result; // r0

  v3 = a2;
  if ( a2 != nullptr )
  {
    while ( 2 )
    {
      switch ( *v3 )
      {
        case 0:
        case 6:
        case 0x18:
        case 0x27:
        case 0x31:
        case 0x3F:
        case 0x44:
        case 0x46:
        case 0x49:
        case 0x4A:
          return nullptr;
        case 5:
          result = (_DWORD *)sub_3C0EC4(a1, v3 + 1);
          if ( result == nullptr || *result != 47 )
            return nullptr;
          return result;
        case 7:
        case 8:
        case 0x32:
          goto LABEL_4;
        default:
          result = (_DWORD *)sub_3C0F14(a1, v3[1]);
          if ( result != nullptr )
            return result;
LABEL_4:
          v3 = (_DWORD *)v3[2];
          if ( v3 == nullptr )
            return nullptr;
          continue;
      }
    }
  }
  return nullptr;
}


//======================================================================
// sub_3C0F9C
// address: 0x003C0F9C   size: 0x82 (130 bytes)
//======================================================================
void __fastcall sub_3C0F9C(void *a1, size_t a2, int a3)
{
  size_t v3; // r4
  unsigned int v4; // r3
  void *v8; // r0

  v3 = *(_DWORD *)(a3 + 8);
  v4 = *(_DWORD *)(a3 + 4) + 1 + a2;
  if ( v4 > v3 )
  {
    if ( *(_DWORD *)(a3 + 12) != 0 )
      return;
    if ( v3 != 0 || (v3 = 2, v4 > 2) )
    {
      do
        v3 *= 2;
      while ( v4 > v3 );
    }
    v8 = j_realloc(*(void **)a3, v3);
    if ( v8 == nullptr )
    {
      j_free(*(void **)a3);
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 12) = 1;
      return;
    }
    *(_DWORD *)a3 = v8;
    *(_DWORD *)(a3 + 8) = v3;
  }
  if ( *(_DWORD *)(a3 + 12) == 0 )
  {
    j_memcpy((void *)(*(_DWORD *)a3 + *(_DWORD *)(a3 + 4)), a1, a2);
    *(_BYTE *)(*(_DWORD *)a3 + a2 + *(_DWORD *)(a3 + 4)) = 0;
    *(_DWORD *)(a3 + 4) += a2;
  }
}


//======================================================================
// sub_3C1020
// address: 0x003C1020   size: 0xC8 (200 bytes)
//======================================================================
_DWORD *__fastcall sub_3C1020(_DWORD *a1)
{
  _BYTE *v1; // r3
  _DWORD *result; // r0
  unsigned __int8 *v4; // r1
  int v5; // r2
  _DWORD *v6; // r0
  int v7; // r6
  unsigned __int8 *v8; // r1
  int v9; // r7
  int v10; // r3
  unsigned __int8 *i; // r3
  int v12; // r4
  int v13; // r2
  _DWORD *v14; // r0
  int v15; // r3

  v1 = (_BYTE *)a1[3];
  if ( *v1 != 76 )
    return nullptr;
  v4 = v1 + 1;
  a1[3] = v1 + 1;
  if ( v1[1] == 90 )
  {
    if ( v1[1] != 95 )
    {
LABEL_10:
      a1[3] = v4 + 1;
      result = (_DWORD *)sub_3C1CB4(a1, 0);
      v4 = (unsigned __int8 *)a1[3];
      v5 = *v4;
      goto LABEL_6;
    }
LABEL_9:
    v4 = v1 + 2;
    a1[3] = v1 + 2;
    v5 = (unsigned __int8)v1[2];
    result = nullptr;
    if ( v5 != 90 )
      goto LABEL_6;
    goto LABEL_10;
  }
  if ( v1[1] == 95 )
    goto LABEL_9;
  v6 = (_DWORD *)sub_3C14AC(a1);
  v7 = (int)v6;
  if ( v6 == nullptr )
    return nullptr;
  if ( *v6 == 39 )
  {
    v15 = v6[1];
    if ( *(_DWORD *)(v15 + 16) != 0 )
      a1[12] -= *(_DWORD *)(v15 + 4);
  }
  v8 = (unsigned __int8 *)a1[3];
  v9 = 59;
  v10 = *v8;
  if ( v10 == 110 )
  {
    a1[3] = v8 + 1;
    v9 = 60;
    v10 = *++v8;
  }
  if ( v10 == 69 )
  {
    v13 = 0;
  }
  else
  {
    if ( v10 == 0 )
      return nullptr;
    for ( i = v8 + 1; ; ++i )
    {
      a1[3] = i;
      v12 = *i;
      if ( v12 == 69 )
        break;
      if ( v12 == 0 )
        return nullptr;
    }
    v13 = i - v8;
  }
  v14 = sub_3C08F8(a1, (int)v8, v13);
  result = sub_3C085C(a1, v9, v7, (int)v14);
  v4 = (unsigned __int8 *)a1[3];
  v5 = *v4;
LABEL_6:
  if ( v5 != 69 )
    return nullptr;
  a1[3] = v4 + 1;
  return result;
}


//======================================================================
// sub_3C10E8
// address: 0x003C10E8   size: 0xBA (186 bytes)
//======================================================================
_DWORD *__fastcall sub_3C10E8(_DWORD *a1)
{
  _BYTE *v1; // r2
  int v3; // r6
  unsigned __int8 *v4; // r3
  int v5; // r0
  int *v6; // r5
  _DWORD *v7; // r2
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  int v10; // r0
  _BYTE *v11; // r3
  int v13; // [sp+4h] [bp-4h] BYREF

  v1 = (_BYTE *)a1[3];
  v3 = a1[11];
  if ( (unsigned __int8)(*v1 - 73) <= 1u )
  {
    v4 = v1 + 1;
    a1[3] = v1 + 1;
    v5 = (unsigned __int8)v1[1];
    if ( v5 == 69 )
    {
      a1[3] = v1 + 2;
      return sub_3C085C(a1, 47, 0, 0);
    }
    v13 = 0;
    v6 = &v13;
    while ( 1 )
    {
      switch ( v5 )
      {
        case 'I':
        case 'J':
          v7 = (_DWORD *)sub_3C10E8(a1);
          break;
        case 'L':
          v7 = sub_3C1020(a1);
          break;
        case 'X':
          a1[3] = v4 + 1;
          v10 = sub_3C2528(a1);
          v11 = (_BYTE *)a1[3];
          if ( *v11 != 69 )
            return nullptr;
          a1[3] = v11 + 1;
          v7 = (_DWORD *)v10;
          break;
        default:
          v7 = (_DWORD *)sub_3C14AC(a1);
          break;
      }
      if ( v7 == nullptr )
        break;
      v8 = sub_3C085C(a1, 47, (int)v7, 0);
      *v6 = (int)v8;
      if ( v8 == nullptr )
        break;
      v4 = (unsigned __int8 *)a1[3];
      v9 = v8;
      v5 = *v4;
      v6 = v9 + 2;
      if ( v5 == 69 )
      {
        a1[3] = v4 + 1;
        a1[11] = v3;
        return (_DWORD *)v13;
      }
    }
  }
  return nullptr;
}


//======================================================================
// sub_3C11A4
// address: 0x003C11A4   size: 0x2FE (766 bytes)
//======================================================================
int *__fastcall sub_3C11A4(_DWORD *a1)
{
  _BYTE *v1; // r3
  int v3; // r0
  int v4; // r4
  int v6; // r0
  _BYTE *v7; // r3
  int v8; // r7
  _DWORD *v9; // r6
  _DWORD *v10; // r0
  int **v11; // r8
  int *v12; // r0
  unsigned __int8 *v13; // r3
  int *i; // r6
  int v15; // r4
  int *v16; // r9
  _DWORD *v17; // r4
  int v18; // r0
  _DWORD *v19; // r0
  _BYTE *v20; // r1
  int v21; // r3
  int v22; // r3
  _DWORD *v23; // r0
  int v24; // r1
  int v25; // r3
  int *v26; // r0
  int *v27; // r3
  int v28; // r2
  int v29; // r6
  _DWORD *v30; // r0
  _DWORD *v31; // r4
  int v32; // r2
  _DWORD *v33; // r3
  _BYTE *v34; // r3
  int *v35; // [sp+4h] [bp-8h] BYREF

  v1 = (_BYTE *)a1[3];
  switch ( *v1 )
  {
    case 'L':
    case 'U':
      return (int *)sub_3C22B0(a1);
    case 'N':
      a1[3] = v1 + 1;
      v11 = sub_3C0930(a1, &v35, 1);
      if ( v11 == nullptr )
        return nullptr;
      v12 = sub_3C0A08(a1, 0);
      v13 = (unsigned __int8 *)a1[3];
      i = nullptr;
      v15 = *v13;
      v16 = v12;
LABEL_12:
      if ( v15 == 0 )
        goto LABEL_28;
LABEL_13:
      if ( v15 != 68 )
        goto LABEL_14;
      if ( (v13[1] & 0xDF) != 0x54 )
        goto LABEL_37;
      v27 = (int *)sub_3C14AC(a1);
      if ( i == nullptr )
        goto LABEL_49;
      break;
    case 'S':
      if ( v1[1] == 116 )
      {
        a1[3] = v1 + 2;
        v17 = sub_3C08F8(a1, (int)"std", 3);
        v18 = sub_3C22B0(a1);
        v19 = sub_3C085C(a1, 1, (int)v17, v18);
        v20 = (_BYTE *)a1[3];
        a1[12] += 3;
        v9 = v19;
        v4 = (int)v19;
        if ( *v20 != 73 )
          return (int *)v4;
        if ( v19 == nullptr )
          return nullptr;
        v21 = a1[8];
        if ( v21 >= a1[9] )
          return nullptr;
        *(_DWORD *)(4 * v21 + a1[7]) = v19;
        a1[8] = v21 + 1;
      }
      else
      {
        v9 = sub_3C0AF4(a1, 0);
        v4 = (int)v9;
        if ( *(_BYTE *)a1[3] != 73 )
          return (int *)v4;
      }
      v10 = sub_3C10E8(a1);
      return sub_3C085C(a1, 4, (int)v9, (int)v10);
    case 'Z':
      a1[3] = v1 + 1;
      v6 = sub_3C1CB4(a1, 0);
      v7 = (_BYTE *)a1[3];
      v8 = v6;
      if ( *v7 != 69 )
        return nullptr;
      a1[3] = v7 + 1;
      v28 = (unsigned __int8)v7[1];
      if ( v28 == 115 )
      {
        a1[3] = v7 + 2;
        if ( !sub_3C0DBC((int)a1) )
          return nullptr;
        v33 = sub_3C08F8(a1, (int)"string literal", 14);
      }
      else
      {
        if ( v28 == 100 )
        {
          a1[3] = v7 + 2;
          v29 = sub_3C0D44((int)a1);
          if ( v29 < 0 )
            return nullptr;
        }
        else
        {
          v29 = -1;
        }
        v30 = (_DWORD *)sub_3C11A4(a1);
        v31 = v30;
        if ( v30 != nullptr && *v30 != 68 && *v30 != 70 && !sub_3C0DBC((int)a1) )
          return nullptr;
        if ( v29 == -1 )
        {
          v33 = v31;
        }
        else
        {
          v32 = a1[5];
          v33 = nullptr;
          if ( v32 < a1[6] )
          {
            v33 = (_DWORD *)(a1[4] + 12 * v32);
            a1[5] = v32 + 1;
            if ( v33 != nullptr )
            {
              *v33 = 69;
              v33[2] = v29;
              v33[1] = v31;
            }
          }
        }
      }
      return sub_3C085C(a1, 2, v8, (int)v33);
    default:
      v3 = sub_3C22B0(a1);
      v4 = v3;
      if ( *(_BYTE *)a1[3] == 73 )
      {
        if ( v3 != 0 && (v22 = a1[8]) < a1[9] )
        {
          *(_DWORD *)(4 * v22 + a1[7]) = v3;
          a1[8] = v22 + 1;
          v23 = sub_3C10E8(a1);
          return sub_3C085C(a1, 4, v4, (int)v23);
        }
        else
        {
          return nullptr;
        }
      }
      return (int *)v4;
  }
LABEL_39:
  v24 = 1;
  while ( 2 )
  {
    for ( i = sub_3C085C(a1, v24, (int)i, (int)v27); ; i = v27 )
    {
      if ( v15 == 83 )
        goto LABEL_46;
      v13 = (unsigned __int8 *)a1[3];
      if ( *v13 != 69 )
      {
        if ( i == nullptr )
          goto LABEL_28;
        v25 = a1[8];
        if ( v25 >= a1[9] )
          goto LABEL_28;
        *(_DWORD *)(4 * v25 + a1[7]) = i;
        a1[8] = v25 + 1;
LABEL_46:
        v13 = (unsigned __int8 *)a1[3];
        v15 = *v13;
        goto LABEL_12;
      }
      v15 = 69;
LABEL_14:
      if ( (unsigned __int8)(v15 - 48) > 9u
        && (unsigned __int8)(v15 - 97) > 0x19u
        && v15 != 67
        && v15 != 85
        && v15 != 76 )
      {
        break;
      }
LABEL_37:
      v27 = (int *)sub_3C22B0(a1);
LABEL_38:
      if ( i != nullptr )
        goto LABEL_39;
LABEL_49:
      ;
    }
    switch ( v15 )
    {
      case 'S':
        v27 = sub_3C0AF4(a1, 1);
        goto LABEL_38;
      case 'I':
        if ( i == nullptr )
          goto LABEL_28;
        v26 = sub_3C10E8(a1);
        v24 = 4;
        v27 = v26;
        continue;
      case 'T':
        v27 = sub_3C0D74(a1);
        goto LABEL_38;
      default:
        break;
    }
    break;
  }
  if ( v15 != 69 )
  {
    if ( v15 != 77 || i == nullptr || (a1[3] = v13 + 1, v15 = v13[1], ++v13, v15 == 0) )
    {
LABEL_28:
      *v11 = nullptr;
      return nullptr;
    }
    goto LABEL_13;
  }
  *v11 = i;
  if ( i == nullptr )
    return nullptr;
  if ( v16 != nullptr )
  {
    v16[1] = (int)v35;
    v35 = v16;
  }
  v34 = (_BYTE *)a1[3];
  if ( *v34 != 69 )
    return nullptr;
  a1[3] = v34 + 1;
  return v35;
}


//======================================================================
// sub_3C14AC
// address: 0x003C14AC   size: 0x716 (1814 bytes)
//======================================================================
int *__fastcall sub_3C14AC(int a1)
{
  unsigned __int8 *v1; // r2
  int v2; // r3
  int *v4; // r5
  int **v6; // r5
  int *v7; // r0
  int v8; // r3
  int *v9; // r2
  _DWORD *v10; // r0
  int *v11; // r0
  int v12; // r3
  _BYTE *v13; // r1
  int v14; // r3
  _BYTE *v15; // r2
  int v16; // r0
  int v17; // r0
  int *v18; // r0
  _BYTE *v19; // r3
  int *v20; // r1
  int v21; // r0
  int v22; // r7
  int **v23; // r5
  int *v24; // r0
  int v25; // r1
  int v26; // r3
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r3
  int *v31; // r0
  _BYTE *v32; // r2
  _DWORD *v33; // r0
  _BYTE *v34; // r1
  int v35; // r3
  int v36; // r0
  char **v37; // r1
  int v38; // r3
  int v39; // r3
  char **v40; // r3
  int v41; // r3
  char **v42; // r3
  _BYTE *v43; // r3
  int v44; // r0
  int v45; // r3
  char **v46; // r3
  int v47; // r3
  int v48; // r3
  int v49; // r3
  int v50; // r0
  _BYTE *v51; // r3
  int v52; // r3
  int *v53; // r5
  unsigned int v54; // r2
  _BYTE *v55; // r3
  _BOOL2 v56; // r2
  int v57; // r0
  int v58; // r3
  _DWORD *v59; // r5
  int v60; // r0
  int v61; // r0
  int *v62; // r2
  _DWORD *v63; // r5
  int *v64[2]; // [sp+4h] [bp-8h] BYREF

  v1 = *(unsigned __int8 **)(a1 + 12);
  v2 = *v1;
  if ( v2 != 114 && v2 != 86 && v2 != 75 )
  {
    if ( (unsigned int)(v2 - 48) > 0x4A )
      return nullptr;
    switch ( *v1 )
    {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case 'N':
      case 'Z':
        v11 = sub_3C11A4((_DWORD *)a1);
        v64[0] = v11;
        goto LABEL_16;
      case 'A':
        v13 = v1 + 1;
        *(_DWORD *)(a1 + 12) = v1 + 1;
        v14 = v1[1];
        if ( v14 == 95 )
        {
          v59 = nullptr;
LABEL_111:
          *(_DWORD *)(a1 + 12) = v13 + 1;
          v60 = sub_3C14AC(a1);
          v11 = sub_3C085C((_DWORD *)a1, 42, (int)v59, v60);
          v64[0] = v11;
LABEL_16:
          if ( v11 != nullptr )
          {
LABEL_17:
            v12 = *(_DWORD *)(a1 + 32);
            if ( v12 < *(_DWORD *)(a1 + 36) )
            {
              *(_DWORD *)(4 * v12 + *(_DWORD *)(a1 + 28)) = v11;
              *(_DWORD *)(a1 + 32) = v12 + 1;
              return v64[0];
            }
          }
          return nullptr;
        }
        if ( (unsigned __int8)(v14 - 48) <= 9u )
        {
          v15 = v1 + 1;
          do
            *(_DWORD *)(a1 + 12) = ++v15;
          while ( (unsigned __int8)(*v15 - 48) <= 9u );
          v59 = sub_3C08F8((_DWORD *)a1, (int)v13, v15 - v13);
          if ( v59 == nullptr )
          {
LABEL_28:
            v11 = nullptr;
LABEL_29:
            v64[0] = nullptr;
            goto LABEL_16;
          }
        }
        else
        {
          v61 = sub_3C2528(a1);
          v59 = (_DWORD *)v61;
          if ( v61 == 0 )
          {
            v11 = nullptr;
            goto LABEL_29;
          }
        }
        v13 = *(_BYTE **)(a1 + 12);
        if ( *v13 == 95 )
          goto LABEL_111;
        goto LABEL_28;
      case 'C':
        *(_DWORD *)(a1 + 12) = v1 + 1;
        v16 = sub_3C14AC(a1);
        v11 = sub_3C085C((_DWORD *)a1, 37, v16, 0);
        v64[0] = v11;
        goto LABEL_16;
      case 'D':
        *(_DWORD *)(a1 + 12) = v1 + 1;
        if ( v1[1] != 0 )
        {
          *(_DWORD *)(a1 + 12) = v1 + 2;
          switch ( v1[1] )
          {
            case 'F':
              v52 = *(_DWORD *)(a1 + 20);
              v53 = nullptr;
              if ( v52 < *(_DWORD *)(a1 + 24) )
              {
                v53 = (int *)(*(_DWORD *)(a1 + 16) + 12 * v52);
                *(_DWORD *)(a1 + 20) = v52 + 1;
              }
              v64[0] = v53;
              *v53 = 44;
              v54 = (unsigned __int8)(v1[2] - 48);
              *((_WORD *)v53 + 4) = v54 <= 9;
              if ( v54 <= 9 )
              {
                sub_3C0CC0((unsigned __int8 **)(a1 + 12));
                v53 = v64[0];
              }
              v53[1] = sub_3C14AC(a1);
              if ( v64[0][1] == 0 )
                return nullptr;
              sub_3C0CC0((unsigned __int8 **)(a1 + 12));
              v55 = *(_BYTE **)(a1 + 12);
              v56 = false;
              if ( *v55 != 0 )
              {
                *(_DWORD *)(a1 + 12) = v55 + 1;
                v56 = *v55 == 115;
              }
              v4 = v64[0];
              *((_WORD *)v64[0] + 5) = v56;
              return v4;
            case 'T':
            case 't':
              v50 = sub_3C2528(a1);
              v11 = sub_3C085C((_DWORD *)a1, 65, v50, 0);
              v64[0] = v11;
              if ( v11 != nullptr )
              {
                v51 = *(_BYTE **)(a1 + 12);
                if ( *v51 != 0 )
                {
                  *(_DWORD *)(a1 + 12) = v51 + 1;
                  if ( *v51 == 69 )
                    goto LABEL_17;
                }
              }
              return nullptr;
            case 'a':
              return sub_3C08F8((_DWORD *)a1, (int)"auto", 4);
            case 'd':
              v49 = *(_DWORD *)(a1 + 20);
              if ( v49 >= *(_DWORD *)(a1 + 24) )
                goto LABEL_118;
              v4 = (int *)(*(_DWORD *)(a1 + 16) + 12 * v49);
              *(_DWORD *)(a1 + 20) = v49 + 1;
              if ( v4 == nullptr )
                goto LABEL_122;
              *v4 = 39;
              v46 = &off_4551A4;
              v4[1] = (int)&off_4551A4;
              goto LABEL_82;
            case 'e':
              v48 = *(_DWORD *)(a1 + 20);
              if ( v48 >= *(_DWORD *)(a1 + 24) )
                goto LABEL_117;
              v4 = (int *)(*(_DWORD *)(a1 + 16) + 12 * v48);
              *(_DWORD *)(a1 + 20) = v48 + 1;
              if ( v4 == nullptr )
                goto LABEL_120;
              *v4 = 39;
              v40 = &off_4551B8;
              v4[1] = (int)&off_4551B8;
              goto LABEL_68;
            case 'f':
              v47 = *(_DWORD *)(a1 + 20);
              if ( v47 >= *(_DWORD *)(a1 + 24) )
                goto LABEL_119;
              v4 = (int *)(*(_DWORD *)(a1 + 16) + 12 * v47);
              *(_DWORD *)(a1 + 20) = v47 + 1;
              if ( v4 == nullptr )
                goto LABEL_123;
              *v4 = 39;
              v42 = &off_455190;
              v4[1] = (int)&off_455190;
              goto LABEL_72;
            case 'h':
              v41 = *(_DWORD *)(a1 + 20);
              if ( v41 >= *(_DWORD *)(a1 + 24) )
              {
LABEL_119:
                v42 = (char **)(&stru_100F8 + 9);
                v4 = nullptr;
              }
              else
              {
                v4 = (int *)(*(_DWORD *)(a1 + 16) + 12 * v41);
                *(_DWORD *)(a1 + 20) = v41 + 1;
                if ( v4 != nullptr )
                {
                  *v4 = 39;
                  v42 = &off_4551CC;
                  v4[1] = (int)&off_4551CC;
                }
                else
                {
LABEL_123:
                  v42 = (char **)v4[1];
                }
              }
LABEL_72:
              *(_DWORD *)(a1 + 48) += v42[1];
              return v4;
            case 'i':
              v39 = *(_DWORD *)(a1 + 20);
              if ( v39 >= *(_DWORD *)(a1 + 24) )
                goto LABEL_117;
              v4 = (int *)(*(_DWORD *)(a1 + 16) + 12 * v39);
              *(_DWORD *)(a1 + 20) = v39 + 1;
              if ( v4 == nullptr )
                goto LABEL_120;
              *v4 = 39;
              v40 = &off_4551F4;
              v4[1] = (int)&off_4551F4;
              goto LABEL_68;
            case 'n':
              v58 = *(_DWORD *)(a1 + 20);
              if ( v58 >= *(_DWORD *)(a1 + 24) )
              {
LABEL_117:
                v40 = (char **)(&stru_100F8 + 9);
                v4 = nullptr;
              }
              else
              {
                v4 = (int *)(*(_DWORD *)(a1 + 16) + 12 * v58);
                *(_DWORD *)(a1 + 20) = v58 + 1;
                if ( v4 != nullptr )
                {
                  *v4 = 39;
                  v40 = &off_455208;
                  v4[1] = (int)&off_455208;
                }
                else
                {
LABEL_120:
                  v40 = (char **)v4[1];
                }
              }
LABEL_68:
              *(_DWORD *)(a1 + 48) += v40[1];
              return v4;
            case 'p':
              v57 = sub_3C14AC(a1);
              v11 = sub_3C085C((_DWORD *)a1, 73, v57, 0);
              v64[0] = v11;
              goto LABEL_16;
            case 's':
              v45 = *(_DWORD *)(a1 + 20);
              if ( v45 >= *(_DWORD *)(a1 + 24) )
              {
LABEL_118:
                v46 = (char **)(&stru_100F8 + 9);
                v4 = nullptr;
              }
              else
              {
                v4 = (int *)(*(_DWORD *)(a1 + 16) + 12 * v45);
                *(_DWORD *)(a1 + 20) = v45 + 1;
                if ( v4 != nullptr )
                {
                  *v4 = 39;
                  v46 = &off_4551E0;
                  v4[1] = (int)&off_4551E0;
                }
                else
                {
LABEL_122:
                  v46 = (char **)v4[1];
                }
              }
LABEL_82:
              *(_DWORD *)(a1 + 48) += v46[1];
              return v4;
            case 'v':
              if ( v1[2] == 95 )
              {
                *(_DWORD *)(a1 + 12) = v1 + 3;
                v63 = (_DWORD *)sub_3C2528(a1);
              }
              else
              {
                v63 = sub_3C0D14(a1);
              }
              if ( v63 == nullptr )
                goto LABEL_28;
              v43 = *(_BYTE **)(a1 + 12);
              v11 = nullptr;
              if ( *v43 != 95 )
                goto LABEL_29;
              *(_DWORD *)(a1 + 12) = v43 + 1;
              v44 = sub_3C14AC(a1);
              v11 = sub_3C085C((_DWORD *)a1, 45, (int)v63, v44);
              v64[0] = v11;
              goto LABEL_16;
            default:
              return nullptr;
          }
        }
        return nullptr;
      case 'F':
        *(_DWORD *)(a1 + 12) = v1 + 1;
        if ( v1[1] == 89 )
          *(_DWORD *)(a1 + 12) = v1 + 2;
        v17 = sub_3C1C78(a1, 1);
        v18 = sub_3C0A08((_DWORD *)a1, v17);
        v19 = *(_BYTE **)(a1 + 12);
        v20 = v18;
        v11 = nullptr;
        if ( *v19 != 69 )
          goto LABEL_29;
        v11 = v20;
        *(_DWORD *)(a1 + 12) = v19 + 1;
        v64[0] = v20;
        goto LABEL_16;
      case 'G':
        *(_DWORD *)(a1 + 12) = v1 + 1;
        v21 = sub_3C14AC(a1);
        v11 = sub_3C085C((_DWORD *)a1, 38, v21, 0);
        v64[0] = v11;
        goto LABEL_16;
      case 'M':
        *(_DWORD *)(a1 + 12) = v1 + 1;
        v22 = sub_3C14AC(a1);
        v23 = sub_3C0930((_DWORD *)a1, v64, 1);
        if ( v23 == nullptr )
          goto LABEL_28;
        v24 = (int *)sub_3C14AC(a1);
        *v23 = v24;
        if ( v24 == nullptr )
          goto LABEL_28;
        if ( v23 == v64 )
          goto LABEL_47;
        v25 = *v24;
        if ( (unsigned int)(*v24 - 31) <= 1 )
        {
          v62 = (int *)v24[1];
          v24[1] = (int)v64[0];
          v64[0] = *v23;
          v25 = *v62;
          *v23 = v62;
        }
        if ( v25 != 41 )
        {
          if ( v64[0] == nullptr )
            goto LABEL_28;
          v26 = *(_DWORD *)(a1 + 32);
          if ( v26 >= *(_DWORD *)(a1 + 36) )
            goto LABEL_28;
          *(int **)(4 * v26 + *(_DWORD *)(a1 + 28)) = v64[0];
          *(_DWORD *)(a1 + 32) = v26 + 1;
        }
LABEL_47:
        v11 = sub_3C085C((_DWORD *)a1, 43, v22, (int)v64[0]);
        v64[0] = v11;
        goto LABEL_16;
      case 'O':
        *(_DWORD *)(a1 + 12) = v1 + 1;
        v27 = sub_3C14AC(a1);
        v11 = sub_3C085C((_DWORD *)a1, 36, v27, 0);
        v64[0] = v11;
        goto LABEL_16;
      case 'P':
        *(_DWORD *)(a1 + 12) = v1 + 1;
        v28 = sub_3C14AC(a1);
        v11 = sub_3C085C((_DWORD *)a1, 34, v28, 0);
        v64[0] = v11;
        goto LABEL_16;
      case 'R':
        *(_DWORD *)(a1 + 12) = v1 + 1;
        v29 = sub_3C14AC(a1);
        v11 = sub_3C085C((_DWORD *)a1, 35, v29, 0);
        v64[0] = v11;
        goto LABEL_16;
      case 'S':
        v30 = v1[1];
        if ( (unsigned __int8)(v1[1] - 48) <= 9u || v30 == 95 || (unsigned __int8)(v30 - 65) <= 0x19u )
        {
          v31 = sub_3C0AF4((_DWORD *)a1, 0);
          v32 = *(_BYTE **)(a1 + 12);
          v64[0] = v31;
          v4 = v31;
          if ( *v32 != 73 )
            return v4;
LABEL_56:
          v33 = sub_3C10E8((_DWORD *)a1);
          v11 = sub_3C085C((_DWORD *)a1, 4, (int)v4, (int)v33);
          v64[0] = v11;
          goto LABEL_16;
        }
        v11 = sub_3C11A4((_DWORD *)a1);
        v4 = v11;
        v64[0] = v11;
        if ( v11 == nullptr )
          return nullptr;
        if ( *v11 != 24 )
          goto LABEL_17;
        return v4;
      case 'T':
        v11 = sub_3C0D74((_DWORD *)a1);
        v34 = *(_BYTE **)(a1 + 12);
        v64[0] = v11;
        if ( *v34 != 73 )
          goto LABEL_16;
        if ( v11 == nullptr )
          return nullptr;
        v35 = *(_DWORD *)(a1 + 32);
        if ( v35 >= *(_DWORD *)(a1 + 36) )
          return nullptr;
        *(_DWORD *)(4 * v35 + *(_DWORD *)(a1 + 28)) = v11;
        *(_DWORD *)(a1 + 32) = v35 + 1;
        v4 = v64[0];
        goto LABEL_56;
      case 'U':
        *(_DWORD *)(a1 + 12) = v1 + 1;
        v64[0] = sub_3C0DDC(a1);
        v36 = sub_3C14AC(a1);
        v11 = sub_3C085C((_DWORD *)a1, 33, v36, (int)v64[0]);
        v64[0] = v11;
        goto LABEL_16;
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 's':
      case 't':
      case 'v':
      case 'w':
      case 'x':
      case 'y':
      case 'z':
        v37 = &(&off_454F88)[5 * v2 - 485];
        v38 = *(_DWORD *)(a1 + 20);
        if ( v38 < *(_DWORD *)(a1 + 24) )
        {
          v4 = (int *)(*(_DWORD *)(a1 + 16) + 12 * v38);
          *(_DWORD *)(a1 + 20) = v38 + 1;
          if ( v4 != nullptr )
          {
            *v4 = 39;
            v4[1] = (int)v37;
          }
          else
          {
            v37 = (char **)(&stru_100F8 + 9);
          }
        }
        else
        {
          v37 = (char **)(&stru_100F8 + 9);
          v4 = nullptr;
        }
        *(_DWORD *)(a1 + 48) += v37[1];
        *(_DWORD *)(a1 + 12) = v1 + 1;
        return v4;
      case 'u':
        *(_DWORD *)(a1 + 12) = v1 + 1;
        v10 = sub_3C0DDC(a1);
        v11 = sub_3C085C((_DWORD *)a1, 40, (int)v10, 0);
        v64[0] = v11;
        goto LABEL_16;
      default:
        return nullptr;
    }
  }
  v6 = sub_3C0930((_DWORD *)a1, v64, 0);
  if ( v6 != nullptr )
  {
    v7 = (int *)sub_3C14AC(a1);
    *v6 = v7;
    if ( v7 != nullptr )
    {
      if ( (unsigned int)(*v7 - 31) <= 1 )
      {
        v9 = (int *)v7[1];
        v7[1] = (int)v64[0];
        v64[0] = *v6;
        *v6 = v9;
      }
      if ( v64[0] != nullptr )
      {
        v8 = *(_DWORD *)(a1 + 32);
        if ( v8 < *(_DWORD *)(a1 + 36) )
        {
          *(int **)(4 * v8 + *(_DWORD *)(a1 + 28)) = v64[0];
          *(_DWORD *)(a1 + 32) = v8 + 1;
          return v64[0];
        }
      }
    }
  }
  return nullptr;
}


//======================================================================
// sub_3C1BE8
// address: 0x003C1BE8   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_3C1BE8(_DWORD *a1)
{
  unsigned __int8 *v1; // r2
  int v2; // r3
  int *v4; // r5
  int *v5; // r2
  _DWORD *v6; // r0
  int result; // r0
  _DWORD *v8; // r2
  int v9; // r2
  int v10; // [sp+4h] [bp-8h] BYREF

  v1 = (unsigned __int8 *)a1[3];
  v10 = 0;
  v2 = *v1;
  if ( *v1 == 0 || v2 == 69 || v2 == 46 )
    return 0;
  v4 = &v10;
  do
  {
    if ( v2 == 79 )
    {
      if ( v1[1] == 69 )
        break;
    }
    else if ( v2 == 82 && v1[1] == 69 )
    {
      break;
    }
    v5 = sub_3C14AC((int)a1);
    if ( v5 == nullptr )
      return 0;
    v6 = sub_3C085C(a1, 46, (int)v5, 0);
    *v4 = (int)v6;
    if ( v6 == nullptr )
      return 0;
    v1 = (unsigned __int8 *)a1[3];
    v2 = *v1;
    v4 = v6 + 2;
  }
  while ( *v1 != 0 && v2 != 69 && v2 != 46 );
  result = v10;
  if ( v10 == 0 )
    return 0;
  if ( *(_DWORD *)(v10 + 8) == 0 )
  {
    v8 = *(_DWORD **)(v10 + 4);
    if ( *v8 == 39 )
    {
      v9 = v8[1];
      if ( *(_DWORD *)(v9 + 16) == 9 )
      {
        a1[12] -= *(_DWORD *)(v9 + 4);
        *(_DWORD *)(result + 4) = 0;
      }
    }
  }
  return result;
}


//======================================================================
// sub_3C1C78
// address: 0x003C1C78   size: 0x3A (58 bytes)
//======================================================================
_DWORD *__fastcall sub_3C1C78(_DWORD *a1, int a2)
{
  _BYTE *v2; // r3
  int *v4; // r5
  int v5; // r3

  v2 = (_BYTE *)a1[3];
  if ( *v2 == 74 )
  {
    a1[3] = v2 + 1;
LABEL_6:
    v4 = sub_3C14AC((int)a1);
    if ( v4 == nullptr )
      return nullptr;
    goto LABEL_3;
  }
  v4 = nullptr;
  if ( a2 != 0 )
    goto LABEL_6;
LABEL_3:
  v5 = sub_3C1BE8(a1);
  if ( v5 != 0 )
    return sub_3C085C(a1, 41, (int)v4, v5);
  return nullptr;
}


//======================================================================
// sub_3C1CB4
// address: 0x003C1CB4   size: 0x504 (1284 bytes)
//======================================================================
_DWORD *__fastcall sub_3C1CB4(int a1, int a2)
{
  unsigned __int8 *v2; // r3
  int v3; // r2
  _DWORD *result; // r0
  _DWORD *v7; // r4
  _DWORD *v8; // r2
  int v9; // r1
  _DWORD *v10; // r0
  int v11; // r3
  _DWORD *i; // r3
  int v13; // r1
  int v14; // r2
  _DWORD *v15; // r3
  int v16; // r0
  _BYTE *v17; // r3
  _BYTE *v18; // r6
  int v19; // r7
  _DWORD *v20; // r8
  int v21; // r4
  _DWORD *v22; // r3
  int *v23; // r0
  int *v24; // r4
  _DWORD *v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int *v30; // r0
  int v31; // r0
  int *v32; // r0
  int *v33; // r0
  int *v34; // r0
  int *v35; // r0
  int *v36; // r0
  int *v37; // r0
  int *v38; // r0
  int *v39; // r4
  _BYTE *v40; // r2
  int *v41; // r0
  int v42; // r3
  int v43; // r1
  int v44; // r2
  int v45; // r0

  v2 = *(unsigned __int8 **)(a1 + 12);
  v3 = *v2;
  if ( v3 == 84 || v3 == 71 )
  {
    v13 = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 48) = v13 + 20;
    v14 = *v2;
    if ( v14 == 84 )
    {
      *(_DWORD *)(a1 + 12) = v2 + 1;
      if ( v2[1] != 0 )
      {
        *(_DWORD *)(a1 + 12) = v2 + 2;
        switch ( v2[1] )
        {
          case 'C':
            v39 = sub_3C14AC(a1);
            if ( sub_3C0CC0((unsigned __int8 **)(a1 + 12)) < 0 )
              return nullptr;
            v40 = *(_BYTE **)(a1 + 12);
            if ( *v40 != 95 )
              return nullptr;
            *(_DWORD *)(a1 + 12) = v40 + 1;
            v41 = sub_3C14AC(a1);
            *(_DWORD *)(a1 + 48) += 5;
            result = sub_3C085C((_DWORD *)a1, 11, (int)v41, (int)v39);
            break;
          case 'F':
            v38 = sub_3C14AC(a1);
            result = sub_3C085C((_DWORD *)a1, 14, (int)v38, 0);
            break;
          case 'H':
            v37 = sub_3C11A4((_DWORD *)a1);
            result = sub_3C085C((_DWORD *)a1, 20, (int)v37, 0);
            break;
          case 'I':
            v36 = sub_3C14AC(a1);
            result = sub_3C085C((_DWORD *)a1, 12, (int)v36, 0);
            break;
          case 'J':
            v35 = sub_3C14AC(a1);
            result = sub_3C085C((_DWORD *)a1, 18, (int)v35, 0);
            break;
          case 'S':
            v34 = sub_3C14AC(a1);
            result = sub_3C085C((_DWORD *)a1, 13, (int)v34, 0);
            break;
          case 'T':
            *(_DWORD *)(a1 + 48) = v13 + 10;
            v33 = sub_3C14AC(a1);
            result = sub_3C085C((_DWORD *)a1, 10, (int)v33, 0);
            break;
          case 'V':
            *(_DWORD *)(a1 + 48) = v13 + 15;
            v32 = sub_3C14AC(a1);
            result = sub_3C085C((_DWORD *)a1, 9, (int)v32, 0);
            break;
          case 'W':
            v30 = sub_3C11A4((_DWORD *)a1);
            result = sub_3C085C((_DWORD *)a1, 21, (int)v30, 0);
            break;
          case 'c':
            if ( sub_3C0E68(a1, 0) == 0 || sub_3C0E68(a1, 0) == 0 )
              return nullptr;
            v29 = sub_3C1CB4(a1, 0);
            result = sub_3C085C((_DWORD *)a1, 17, v29, 0);
            break;
          case 'h':
            if ( sub_3C0E68(a1, 104) == 0 )
              return nullptr;
            v31 = sub_3C1CB4(a1, 0);
            result = sub_3C085C((_DWORD *)a1, 15, v31, 0);
            break;
          case 'v':
            if ( sub_3C0E68(a1, 118) == 0 )
              return nullptr;
            v28 = sub_3C1CB4(a1, 0);
            result = sub_3C085C((_DWORD *)a1, 16, v28, 0);
            break;
          default:
            return nullptr;
        }
        return result;
      }
    }
    else if ( v14 == 71 )
    {
      *(_DWORD *)(a1 + 12) = v2 + 1;
      if ( v2[1] != 0 )
      {
        *(_DWORD *)(a1 + 12) = v2 + 2;
        switch ( v2[1] )
        {
          case 'A':
            v26 = sub_3C1CB4(a1, 0);
            return sub_3C085C((_DWORD *)a1, 23, v26, 0);
          case 'R':
            v24 = sub_3C11A4((_DWORD *)a1);
            v25 = sub_3C0D14(a1);
            return sub_3C085C((_DWORD *)a1, 22, (int)v24, (int)v25);
          case 'T':
            if ( v2[2] != 0 && (*(_DWORD *)(a1 + 12) = v2 + 3, v2[2] == 110) )
            {
              v27 = sub_3C1CB4(a1, 0);
              return sub_3C085C((_DWORD *)a1, 72, v27, 0);
            }
            else
            {
              v45 = sub_3C1CB4(a1, 0);
              return sub_3C085C((_DWORD *)a1, 71, v45, 0);
            }
          case 'V':
            v23 = sub_3C11A4((_DWORD *)a1);
            return sub_3C085C((_DWORD *)a1, 19, (int)v23, 0);
          case 'r':
            v16 = sub_3C0CC0((unsigned __int8 **)(a1 + 12));
            if ( v16 <= 1 )
              return nullptr;
            v17 = *(_BYTE **)(a1 + 12);
            if ( *v17 == 0 )
              return nullptr;
            v18 = v17 + 1;
            *(_DWORD *)(a1 + 12) = v17 + 1;
            if ( *v17 != 95 )
              return nullptr;
            v19 = v16 - 1;
            v20 = nullptr;
            break;
          default:
            return nullptr;
        }
        while ( *v18 != 0 )
        {
          if ( *v18 == 36 )
          {
            v42 = (unsigned __int8)v18[1];
            switch ( v42 )
            {
              case 'S':
                v43 = 47;
                break;
              case '_':
                v43 = 46;
                break;
              case '$':
                v43 = 36;
                break;
              default:
                return nullptr;
            }
            v44 = *(_DWORD *)(a1 + 20);
            if ( v44 >= *(_DWORD *)(a1 + 24)
              || (v22 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 12 * v44), *(_DWORD *)(a1 + 20) = v44 + 1, v22 == nullptr) )
            {
              *(_DWORD *)(a1 + 12) += 2;
              return nullptr;
            }
            v22[1] = v43;
            v18 = (_BYTE *)(*(_DWORD *)(a1 + 12) + 2);
            *v22 = 63;
            v19 -= 2;
            *(_DWORD *)(a1 + 12) = v18;
          }
          else
          {
            v21 = 0;
            do
            {
              if ( v18[v21] == 0 )
                break;
              if ( v18[v21] == 36 )
                break;
              ++v21;
            }
            while ( v21 < v19 );
            v19 -= v21;
            v22 = sub_3C08F8((_DWORD *)a1, (int)v18, v21);
            v18 = (_BYTE *)(*(_DWORD *)(a1 + 12) + v21);
            *(_DWORD *)(a1 + 12) = v18;
            if ( v22 == nullptr )
              return nullptr;
          }
          if ( v20 != nullptr )
          {
            v20 = sub_3C085C((_DWORD *)a1, 62, (int)v20, (int)v22);
            if ( v20 == nullptr )
              return nullptr;
          }
          else
          {
            v20 = v22;
          }
          if ( v19 <= 0 )
            return sub_3C085C((_DWORD *)a1, 61, (int)v20, 0);
        }
      }
    }
    return nullptr;
  }
  result = sub_3C11A4((_DWORD *)a1);
  v7 = result;
  if ( result != nullptr && a2 != 0 && (*(_DWORD *)(a1 + 8) & 1) == 0 )
  {
    v11 = *result;
    if ( (unsigned int)(*result - 28) <= 4 )
    {
      do
      {
        v7 = (_DWORD *)v7[1];
        v11 = *v7;
      }
      while ( (unsigned int)(*v7 - 28) <= 4 );
    }
    result = v7;
    if ( v11 == 2 )
    {
      for ( i = (_DWORD *)v7[2]; (unsigned int)(*i - 28) <= 4; i = (_DWORD *)i[1] )
        ;
      v7[2] = i;
      return v7;
    }
  }
  else if ( result != nullptr && **(_BYTE **)(a1 + 12) != 0 && **(_BYTE **)(a1 + 12) != 69 )
  {
    v8 = result;
    while ( *v8 != 4 )
    {
      if ( *v8 >= 4u && (unsigned int)(*v8 - 28) <= 4 )
      {
        v8 = (_DWORD *)v8[1];
        if ( v8 != nullptr )
          continue;
      }
LABEL_12:
      v9 = 0;
      goto LABEL_13;
    }
    v15 = (_DWORD *)v8[1];
    if ( v15 != nullptr )
    {
      while ( 2 )
      {
        switch ( *v15 )
        {
          case 1:
          case 2:
            v15 = (_DWORD *)v15[2];
            if ( v15 != nullptr )
              continue;
            v9 = 1;
            break;
          case 7:
          case 8:
          case 0x33:
            goto LABEL_12;
          default:
            goto LABEL_32;
        }
        break;
      }
    }
    else
    {
LABEL_32:
      v9 = 1;
    }
LABEL_13:
    v10 = sub_3C1C78((_DWORD *)a1, v9);
    return sub_3C085C((_DWORD *)a1, 3, (int)v7, (int)v10);
  }
  return result;
}


//======================================================================
// sub_3C21B8
// address: 0x003C21B8   size: 0xF2 (242 bytes)
//======================================================================
_DWORD *__fastcall sub_3C21B8(_DWORD *a1)
{
  unsigned __int8 *v1; // r3
  unsigned int v3; // r0
  unsigned int v4; // r8
  _DWORD *v5; // r0
  int v6; // r3
  _DWORD *v7; // r2
  _DWORD *result; // r0
  int v9; // r4
  int v10; // r3
  int v11; // r2
  char **v12; // r6
  unsigned int v13; // r1
  unsigned int v14; // r1
  int *v15; // r0
  int v16; // r2
  _DWORD *v17; // r3

  v1 = (unsigned __int8 *)a1[3];
  if ( *v1 == 0 )
  {
    v3 = 0;
    v4 = 0;
    goto LABEL_11;
  }
  a1[3] = v1 + 1;
  v3 = *v1;
  v4 = 0;
  if ( v1[1] != 0 )
  {
    a1[3] = v1 + 2;
    v4 = v1[1];
  }
  if ( v3 != 118 )
  {
    if ( v4 == 118 && v3 == 99 )
    {
      v15 = sub_3C14AC((int)a1);
      return sub_3C085C(a1, 51, (int)v15, 0);
    }
    goto LABEL_11;
  }
  if ( (unsigned __int8)(v4 - 48) > 9u )
  {
LABEL_11:
    v9 = 61;
    v10 = 0;
    while ( 1 )
    {
      v11 = (v9 - v10) / 2 + v10;
      v12 = &off_45521C[4 * v11];
      v13 = (unsigned __int8)**v12;
      if ( v3 == v13 )
      {
        v14 = (unsigned __int8)(*v12)[1];
        if ( v4 == v14 )
        {
          v16 = a1[5];
          result = nullptr;
          if ( v16 < a1[6] )
          {
            v17 = (_DWORD *)(a1[4] + 12 * v16);
            a1[5] = v16 + 1;
            if ( v17 != nullptr )
            {
              *v17 = 49;
              v17[1] = v12;
              return v17;
            }
          }
          return result;
        }
        if ( v14 <= v4 )
        {
LABEL_20:
          v10 = v11 + 1;
          goto LABEL_15;
        }
      }
      else if ( v13 <= v3 )
      {
        goto LABEL_20;
      }
      v9 = (v9 - v10) / 2 + v10;
LABEL_15:
      if ( v10 == v9 )
        return nullptr;
    }
  }
  v5 = sub_3C0DDC((int)a1);
  v6 = a1[5];
  if ( v6 >= a1[6] )
    return nullptr;
  v7 = (_DWORD *)(a1[4] + 12 * v6);
  a1[5] = v6 + 1;
  if ( v7 == nullptr || v5 == nullptr )
    return nullptr;
  v7[2] = v5;
  *v7 = 50;
  v7[1] = v4 - 48;
  return v7;
}


//======================================================================
// sub_3C22B0
// address: 0x003C22B0   size: 0x272 (626 bytes)
//======================================================================
_DWORD *__fastcall sub_3C22B0(_DWORD *a1)
{
  unsigned __int8 *v1; // r2
  int v2; // r3
  int v4; // r3
  _BYTE *v5; // r3
  int v6; // r1
  _DWORD *v7; // r5
  _DWORD *v9; // r0
  int v10; // r1
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  int v14; // r0
  int v15; // r6
  int v16; // r0
  int v17; // r3
  int v18; // r3
  _DWORD *v19; // r6
  _DWORD *v20; // r0
  int v21; // r3
  const char *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  int v25; // r0
  int v26; // r3
  int v27; // r0
  int v28; // r1
  int v29; // r5
  int v30; // r0
  int v31; // r1
  int v32; // r5

  v1 = (unsigned __int8 *)a1[3];
  v2 = *v1;
  if ( (unsigned __int8)(*v1 - 48) <= 9u )
  {
    v9 = sub_3C0DDC((int)a1);
    v5 = (_BYTE *)a1[3];
    v10 = (unsigned __int8)*v5;
    v7 = v9;
    goto LABEL_14;
  }
  if ( (unsigned __int8)(v2 - 97) <= 0x19u )
  {
    v13 = sub_3C21B8(a1);
    v7 = v13;
    if ( v13 != nullptr && *v13 == 49 )
    {
      v21 = v13[1];
      v22 = *(const char **)v21;
      a1[12] += *(_DWORD *)(v21 + 8) + 7;
      if ( j_strcmp(v22, "li") == 0 )
      {
        v23 = sub_3C0DDC((int)a1);
        v24 = sub_3C085C(a1, 53, (int)v7, (int)v23);
        v5 = (_BYTE *)a1[3];
        v10 = (unsigned __int8)*v5;
        v7 = v24;
        goto LABEL_14;
      }
    }
LABEL_19:
    v5 = (_BYTE *)a1[3];
    v10 = (unsigned __int8)*v5;
    goto LABEL_14;
  }
  if ( (unsigned __int8)(v2 - 67) <= 1u )
  {
    v19 = (_DWORD *)a1[11];
    if ( v19 != nullptr )
    {
      if ( *v19 != 0 )
      {
        v10 = *v1;
        if ( *v19 == 24 )
        {
          a1[12] += v19[2];
          v10 = *v1;
        }
      }
      else
      {
        a1[12] += v19[2];
        v10 = *v1;
      }
    }
    else
    {
      v10 = *v1;
    }
    if ( v10 == 67 )
    {
      switch ( v1[1] )
      {
        case '1':
          v30 = 1;
          goto LABEL_60;
        case '2':
          v30 = 2;
          goto LABEL_60;
        case '3':
          v30 = 3;
          goto LABEL_60;
        case '5':
          v30 = 4;
LABEL_60:
          v31 = a1[5];
          v32 = a1[6];
          v5 = v1 + 2;
          a1[3] = v1 + 2;
          if ( v31 >= v32 )
            goto LABEL_67;
          v7 = (_DWORD *)(a1[4] + 12 * v31);
          a1[5] = v31 + 1;
          if ( v7 == nullptr || v19 == nullptr )
            goto LABEL_67;
          *v7 = 7;
          v7[1] = v30;
          v7[2] = v19;
          v10 = v1[2];
          break;
        default:
          return nullptr;
      }
    }
    else if ( v10 == 68 )
    {
      switch ( v1[1] )
      {
        case '0':
          v27 = 1;
          break;
        case '1':
          v27 = 2;
          break;
        case '2':
          v27 = 3;
          break;
        case '5':
          v27 = 4;
          break;
        default:
          return nullptr;
      }
      v28 = a1[5];
      v29 = a1[6];
      v5 = v1 + 2;
      a1[3] = v1 + 2;
      if ( v28 < v29 && (v7 = (_DWORD *)(a1[4] + 12 * v28), a1[5] = v28 + 1, v7 != nullptr) && v19 != nullptr )
      {
        *v7 = 8;
        v7[1] = v27;
        v7[2] = v19;
        v10 = v1[2];
      }
      else
      {
LABEL_67:
        v7 = nullptr;
        v10 = v1[2];
      }
    }
    else
    {
      v5 = v1;
      v7 = nullptr;
    }
LABEL_14:
    if ( v10 == 66 )
    {
      do
      {
LABEL_15:
        a1[3] = v5 + 1;
        v11 = sub_3C0DDC((int)a1);
        v12 = sub_3C085C(a1, 74, (int)v7, (int)v11);
        v5 = (_BYTE *)a1[3];
        v7 = v12;
      }
      while ( *v5 == 66 );
    }
    return v7;
  }
  if ( v2 == 76 )
  {
    a1[3] = v1 + 1;
    v20 = sub_3C0DDC((int)a1);
    v7 = v20;
    if ( v20 == nullptr || !sub_3C0DBC((int)a1) )
      return nullptr;
    goto LABEL_19;
  }
  if ( v2 == 85 )
  {
    v4 = v1[1];
    if ( v4 == 108 )
    {
      v5 = v1 + 1;
      a1[3] = v1 + 1;
      v6 = v1[1];
      if ( v6 == 108 )
      {
        a1[3] = v1 + 2;
        v14 = sub_3C1BE8(a1);
        v5 = (_BYTE *)a1[3];
        v6 = (unsigned __int8)*v5;
        v15 = v14;
        if ( v14 != 0 && v6 == 69 )
        {
          a1[3] = v5 + 1;
          v16 = sub_3C0D44((int)a1);
          if ( v16 < 0 )
            goto LABEL_47;
          v17 = a1[5];
          if ( v17 >= a1[6] )
            goto LABEL_47;
          v7 = (_DWORD *)(a1[4] + 12 * v17);
          a1[5] = v17 + 1;
          if ( v7 == nullptr )
            goto LABEL_47;
          v7[1] = v15;
          v7[2] = v16;
          *v7 = 68;
          v18 = a1[8];
          if ( v18 >= a1[9] )
            goto LABEL_47;
LABEL_27:
          *(_DWORD *)(4 * v18 + a1[7]) = v7;
          a1[8] = v18 + 1;
          goto LABEL_19;
        }
      }
LABEL_11:
      v7 = nullptr;
      if ( v6 == 66 )
        goto LABEL_15;
      return v7;
    }
    if ( v4 == 116 )
    {
      v5 = v1 + 1;
      a1[3] = v1 + 1;
      v6 = v1[1];
      if ( v6 == 116 )
      {
        a1[3] = v1 + 2;
        v25 = sub_3C0D44((int)a1);
        if ( v25 < 0
          || (v26 = a1[5]) >= a1[6]
          || (v7 = (_DWORD *)(a1[4] + 12 * v26), a1[5] = v26 + 1, v7 == nullptr)
          || (v7[1] = v25, *v7 = 70, (v18 = a1[8]) >= a1[9]) )
        {
LABEL_47:
          v5 = (_BYTE *)a1[3];
          v7 = nullptr;
          v10 = (unsigned __int8)*v5;
          goto LABEL_14;
        }
        goto LABEL_27;
      }
      goto LABEL_11;
    }
  }
  return nullptr;
}


//======================================================================
// sub_3C2528
// address: 0x003C2528   size: 0x3F2 (1010 bytes)
//======================================================================
_DWORD *__fastcall sub_3C2528(_DWORD *a1)
{
  unsigned __int8 *v1; // r1
  int v2; // r3
  _DWORD *v4; // r0
  int *v6; // r0
  int v7; // r6
  int v8; // r7
  int v9; // r5
  _BYTE *v10; // r3
  _DWORD *v11; // r0
  int *v12; // r0
  int v13; // r2
  _DWORD *v14; // r3
  int v15; // r3
  int v16; // r0
  const char **v17; // r5
  const char *v18; // r0
  int v19; // r5
  int v20; // r0
  int v21; // r5
  unsigned __int8 *v22; // r0
  const char *v23; // r8
  _DWORD *v24; // r0
  int *v25; // r5
  _DWORD *v26; // r6
  int v27; // r0
  char *v28; // r3
  int *v29; // r7
  _DWORD *v30; // r0
  int v31; // r3
  int v32; // r5
  int *v33; // r0
  unsigned __int8 *v34; // r1
  int v35; // r3
  int v36; // r7
  int v37; // r3
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  int v40; // r3
  int *v41; // r0
  char v42; // r3
  _DWORD *v43; // r0
  _DWORD *v44; // r0
  _DWORD *v45; // r5
  _DWORD *v46; // r0
  int v47; // r3
  _BYTE *v48; // r3

  v1 = (unsigned __int8 *)a1[3];
  v2 = *v1;
  switch ( v2 )
  {
    case 'L':
      return sub_3C1020(a1);
    case 'T':
      return sub_3C0D74(a1);
    case 's':
      v15 = v1[1];
      if ( v15 == 114 )
      {
        a1[3] = v1 + 2;
        v25 = sub_3C14AC((int)a1);
        v26 = sub_3C22B0(a1);
        if ( *(_BYTE *)a1[3] != 73 )
          return sub_3C085C(a1, 1, (int)v25, (int)v26);
        v43 = sub_3C10E8(a1);
        v44 = sub_3C085C(a1, 4, (int)v26, (int)v43);
        return sub_3C085C(a1, 1, (int)v25, (int)v44);
      }
      if ( v15 == 112 )
      {
        a1[3] = v1 + 2;
        v16 = sub_3C2528(a1);
        return sub_3C085C(a1, 73, v16, 0);
      }
      goto LABEL_15;
    case 'f':
      if ( v1[1] != 112 )
        goto LABEL_15;
      a1[3] = v1 + 2;
      if ( v1[2] == 84 )
      {
        a1[3] = v1 + 3;
        v27 = 0;
      }
      else
      {
        v27 = sub_3C0D44((int)a1) + 1;
        if ( v27 == 0 )
          return nullptr;
      }
      v13 = a1[5];
      if ( v13 >= a1[6] )
        return nullptr;
      v14 = (_DWORD *)(a1[4] + 12 * v13);
      a1[5] = v13 + 1;
      v21 = 0;
      if ( v14 != nullptr )
      {
        *v14 = 6;
        v14[1] = v27;
        return v14;
      }
      return (_DWORD *)v21;
    default:
      break;
  }
  if ( (unsigned __int8)(v2 - 48) <= 9u )
    goto LABEL_8;
  if ( v2 == 111 )
  {
    if ( v1[1] == 110 )
    {
      a1[3] = v1 + 2;
LABEL_8:
      v4 = sub_3C22B0(a1);
      if ( v4 != nullptr )
      {
        v21 = (int)v4;
        if ( *(_BYTE *)a1[3] == 73 )
        {
          v24 = sub_3C10E8(a1);
          return sub_3C085C(a1, 4, v21, (int)v24);
        }
        return (_DWORD *)v21;
      }
      return nullptr;
    }
LABEL_15:
    v6 = sub_3C21B8(a1);
    v7 = (int)v6;
    if ( v6 == nullptr )
      return nullptr;
    v8 = *v6;
    if ( *v6 == 49 )
    {
      v17 = (const char **)v6[1];
      v23 = *v17;
      v18 = *v17;
      a1[12] += v17[2] - 2;
      if ( j_strcmp(v18, "st") != 0 )
      {
        v22 = (unsigned __int8 *)v17[3];
        goto LABEL_40;
      }
      v12 = sub_3C14AC((int)a1);
    }
    else
    {
      if ( v8 == 50 )
      {
        v22 = (unsigned __int8 *)v6[1];
        v23 = nullptr;
LABEL_40:
        v21 = 0;
        switch ( (unsigned int)v22 )
        {
          case 0u:
            return sub_3C085C(a1, 52, v7, 0);
          case 1u:
            v9 = 0;
            if ( v23 != nullptr )
            {
              v47 = *(unsigned __int8 *)v23;
              if ( v47 == 109 || v47 == 112 )
              {
                v9 = 0;
                if ( *((unsigned __int8 *)v23 + 1) == v47 )
                {
                  v48 = (_BYTE *)a1[3];
                  v9 = 1;
                  if ( *v48 == 95 )
                  {
                    a1[3] = v48 + 1;
                    v9 = 0;
                  }
                }
              }
            }
            goto LABEL_22;
          case 2u:
            v28 = **(char ***)(v7 + 4);
            if ( v28[1] == 99 && ((unsigned __int8)((v42 = *v28) - 99) <= 1u || (unsigned __int8)(v42 - 114) <= 1u) )
              v29 = sub_3C14AC((int)a1);
            else
              v29 = (int *)sub_3C2528(a1);
            if ( j_strcmp(v23, "cl") == 0 )
            {
              v45 = (_DWORD *)sub_3C2930(a1, 69);
            }
            else if ( j_strcmp(v23, "dt") == 0 || j_strcmp(v23, "pt") == 0 )
            {
              v45 = sub_3C22B0(a1);
              if ( *(_BYTE *)a1[3] == 73 )
              {
                v46 = sub_3C10E8(a1);
                v45 = sub_3C085C(a1, 4, (int)v45, (int)v46);
              }
            }
            else
            {
              v45 = (_DWORD *)sub_3C2528(a1);
            }
            v30 = sub_3C085C(a1, 55, (int)v29, (int)v45);
            return sub_3C085C(a1, 54, v7, (int)v30);
          case 3u:
            if ( j_strcmp(v23, "qu") == 0 )
            {
              v32 = sub_3C2528(a1);
              v36 = sub_3C2528(a1);
              v37 = sub_3C2528(a1);
            }
            else
            {
              if ( *v23 != 110 )
                return nullptr;
              v31 = *((unsigned __int8 *)v23 + 1);
              if ( v31 != 97 && v31 != 119 )
                return nullptr;
              v32 = sub_3C2930(a1, 95);
              v33 = sub_3C14AC((int)a1);
              v34 = (unsigned __int8 *)a1[3];
              v35 = *v34;
              v36 = (int)v33;
              if ( v35 == 69 )
              {
                a1[3] = v34 + 1;
                v37 = 0;
              }
              else if ( v35 == 112 )
              {
                if ( v34[1] != 105 )
                  return nullptr;
                a1[3] = v34 + 2;
                v37 = sub_3C2930(a1, 69);
              }
              else
              {
                if ( v35 != 105 || v34[1] != 108 )
                  return nullptr;
                v37 = sub_3C2528(a1);
              }
            }
            v38 = sub_3C085C(a1, 58, v36, v37);
            v39 = sub_3C085C(a1, 57, v32, (int)v38);
            return sub_3C085C(a1, 56, v7, (int)v39);
          default:
            return (_DWORD *)v21;
        }
      }
      if ( v8 != 51 )
        return nullptr;
      v9 = 0;
      v10 = (_BYTE *)a1[3];
      if ( *v10 == 95 )
      {
        a1[3] = v10 + 1;
        v40 = sub_3C2930(a1, 69);
      }
      else
      {
LABEL_22:
        v40 = sub_3C2528(a1);
      }
      v11 = a1;
      if ( v9 == 0 )
        return sub_3C085C(v11, 53, v7, v40);
      v12 = sub_3C085C(a1, 55, v40, v40);
    }
    v40 = (int)v12;
    v11 = a1;
    return sub_3C085C(v11, 53, v7, v40);
  }
  if ( v2 != 116 && v2 != 105 || v1[1] != 108 )
    goto LABEL_15;
  v19 = 0;
  if ( v2 == 116 )
  {
    v41 = sub_3C14AC((int)a1);
    v1 = (unsigned __int8 *)a1[3];
    v19 = (int)v41;
  }
  a1[3] = v1 + 2;
  v20 = sub_3C2930(a1, 69);
  return sub_3C085C(a1, 48, v19, v20);
}


//======================================================================
// sub_3C2930
// address: 0x003C2930   size: 0x5C (92 bytes)
//======================================================================
_DWORD *__fastcall sub_3C2930(_DWORD *a1, int a2)
{
  unsigned __int8 *v2; // r3
  int *v5; // r5
  _DWORD *v6; // r0
  unsigned __int8 *v7; // r3
  _DWORD *v8; // r2
  int v10; // [sp+4h] [bp-4h] BYREF

  v10 = 0;
  v2 = (unsigned __int8 *)a1[3];
  v5 = &v10;
  if ( *v2 == a2 )
  {
    a1[3] = v2 + 1;
    return sub_3C085C(a1, 46, 0, 0);
  }
  else
  {
    do
    {
      v8 = sub_3C2528(a1);
      if ( v8 == nullptr )
        return nullptr;
      v6 = sub_3C085C(a1, 46, (int)v8, 0);
      *v5 = (int)v6;
      if ( v6 == nullptr )
        return nullptr;
      v7 = (unsigned __int8 *)a1[3];
      v5 = v6 + 2;
    }
    while ( *v7 != a2 );
    a1[3] = v7 + 1;
    return (_DWORD *)v10;
  }
}


//======================================================================
// sub_3C298C
// address: 0x003C298C   size: 0x88 (136 bytes)
//======================================================================
size_t __fastcall sub_3C298C(int a1, char *a2)
{
  char *v3; // r5
  size_t result; // r0
  int v5; // r3
  char *v6; // r7
  int v7; // r2
  char v8; // r6

  v3 = a2;
  result = j_strlen(a2);
  if ( result != 0 )
  {
    v5 = *(_DWORD *)(a1 + 256);
    v6 = &v3[result];
    while ( 1 )
    {
      v8 = *v3;
      if ( v5 == 255 )
      {
        *(_BYTE *)(a1 + 255) = 0;
        result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
        ++*(_DWORD *)(a1 + 288);
        v7 = 1;
        v5 = 0;
      }
      else
      {
        v7 = v5 + 1;
      }
      *(_DWORD *)(a1 + 256) = v7;
      *(_BYTE *)(a1 + v5) = v8;
      ++v3;
      *(_BYTE *)(a1 + 260) = v8;
      if ( v3 == v6 )
        break;
      v5 = v7;
    }
  }
  return result;
}


//======================================================================
// sub_3C2A14
// address: 0x003C2A14   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_3C2A14(int a1, int a2, int a3)
{
  unsigned int v3; // r3
  unsigned int v6; // r0
  int **v9; // r2
  int v11; // r5
  int v12; // r3
  int v13; // r7
  int v14; // r8
  int v15; // r2
  char v16; // r6
  const char *v17; // r6
  int i5; // r3
  int v19; // r2
  char v20; // r7
  const char *v21; // r6
  int i4; // r3
  int v23; // r2
  char v24; // r7
  const char *v25; // r6
  int i3; // r3
  int v27; // r2
  char v28; // r7
  const char *v29; // r6
  int i2; // r3
  int v31; // r2
  char v32; // r7
  const char *v33; // r6
  int i1; // r3
  int v35; // r2
  char v36; // r7
  const char *v37; // r6
  int nn; // r3
  int v39; // r2
  char v40; // r7
  const char *v41; // r6
  int mm; // r3
  int v43; // r2
  char v44; // r7
  const char *v45; // r6
  int kk; // r3
  int v47; // r2
  char v48; // r7
  const char *v49; // r6
  int jj; // r3
  int v51; // r2
  char v52; // r7
  const char *v53; // r6
  int ii; // r3
  int v55; // r2
  char v56; // r7
  const char *v57; // r6
  int n; // r3
  int v59; // r2
  char v60; // r7
  const char *v61; // r6
  int m; // r3
  int v63; // r2
  char v64; // r7
  const char *v65; // r6
  int k; // r3
  int v67; // r2
  char v68; // r7
  const char *v69; // r6
  int j; // r3
  int v71; // r2
  char v72; // r7
  const char *v73; // r6
  int i; // r3
  int v75; // r2
  char v76; // r7
  int v77; // r3
  int v78; // r0
  int v79; // r3
  const char *v80; // r6
  int v81; // r2
  char v82; // r7
  int v83; // r8
  int v84; // r7
  int v85; // r5
  int v86; // r2
  int v87; // r3
  int v88; // r7
  int v89; // r8
  int v90; // r2
  char v91; // r6
  const char *v92; // r6
  int i14; // r3
  int v94; // r2
  char v95; // r7
  _DWORD *v96; // r0
  const char *v97; // r6
  int i13; // r3
  int v99; // r2
  char v100; // r7
  _DWORD *v101; // r0
  int i12; // r3
  const char *v103; // r6
  int i11; // r3
  int v105; // r2
  char v106; // r7
  int *v107; // r6
  int v108; // r3
  int v109; // r0
  const char *v110; // r6
  int i8; // r3
  int v112; // r2
  char v113; // r7
  const char *v114; // r5
  int i6; // r3
  int v116; // r2
  char v117; // r6
  const char *v118; // r6
  int i7; // r3
  int v120; // r2
  char v121; // r7
  int v122; // r2
  const char *v123; // r6
  int i9; // r3
  int v125; // r2
  char v126; // r7
  size_t v127; // r0
  int v128; // r5
  int v129; // r3
  size_t v130; // r6
  int v131; // r2
  char v132; // r7
  int v133; // r3
  _DWORD *v134; // r2
  unsigned int v135; // r6
  _DWORD *v136; // r2
  const char *v137; // r6
  int v138; // r3
  int v139; // r8
  int v140; // r2
  char v141; // r7
  const char *v142; // r6
  int v143; // r3
  int v144; // r2
  char v145; // r7
  const char *v146; // r6
  int v147; // r3
  int v148; // r2
  char v149; // r7
  const char *v150; // r6
  int i10; // r3
  int v152; // r2
  char v153; // r7
  int v154; // r0
  int v155; // r0
  int v156; // r0
  void (__fastcall *v157)(int, int, int); // [sp+8h] [bp-204h]
  int v158; // [sp+Ch] [bp-200h]
  void (__fastcall *v159)(int, int, int); // [sp+30h] [bp-1DCh]
  int v160; // [sp+34h] [bp-1D8h]
  void (__fastcall *v161)(int, int, int); // [sp+68h] [bp-1A4h]
  int v162; // [sp+6Ch] [bp-1A0h]
  int (__fastcall *v163)(int, int, int); // [sp+D0h] [bp-13Ch]
  int v164; // [sp+D4h] [bp-138h]
  void (__fastcall *v165)(int, int, int); // [sp+F8h] [bp-114h]
  int v166; // [sp+FCh] [bp-110h]
  void (__fastcall *v167)(int, int, int); // [sp+158h] [bp-B4h]
  int v168; // [sp+15Ch] [bp-B0h]
  void (__fastcall *v169)(int, int, int); // [sp+190h] [bp-7Ch]
  int v170; // [sp+194h] [bp-78h]
  int (__fastcall *v171)(int, int, int); // [sp+198h] [bp-74h]
  int v172; // [sp+19Ch] [bp-70h]
  char s[68]; // [sp+1C8h] [bp-44h] BYREF

  v3 = *(_DWORD *)a3;
  v6 = *(_DWORD *)a3;
  switch ( v3 )
  {
    case 0u:
      if ( (a2 & 4) != 0 )
        v6 = sub_3C4EE0(v3);
      v83 = *(_DWORD *)(a3 + 4);
      v84 = *(_DWORD *)(a3 + 8);
      if ( v84 == 0 )
        v6 = sub_3C2A38(v6);
      v85 = 0;
      v86 = v84;
      v87 = *(_DWORD *)(a1 + 256);
      v88 = v83;
      v89 = v86;
      while ( 1 )
      {
        v91 = *(_BYTE *)(v88 + v85);
        if ( v87 == 255 )
        {
          v172 = *(_DWORD *)(a1 + 268);
          v171 = *(int (__fastcall **)(int, int, int))(a1 + 264);
          *(_BYTE *)(a1 + 255) = 0;
          v6 = v171(a1, 255, v172);
          ++*(_DWORD *)(a1 + 288);
          v90 = 1;
          v87 = 0;
        }
        else
        {
          v90 = v87 + 1;
        }
        *(_DWORD *)(a1 + 256) = v90;
        *(_BYTE *)(a1 + v87) = v91;
        ++v85;
        *(_BYTE *)(a1 + 260) = v91;
        if ( v89 == v85 )
          v6 = sub_3C2A38(v6);
        v87 = v90;
      }
    case 1u:
    case 2u:
      v78 = sub_3C5938(a1, a2, *(_DWORD *)(a3 + 4));
      v79 = *(_DWORD *)(a1 + 256);
      if ( (a2 & 4) != 0 )
        sub_3C495C(v78);
      v80 = "::";
      while ( 1 )
      {
        v82 = *v80;
        if ( v79 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v81 = 1;
          v79 = 0;
        }
        else
        {
          v81 = v79 + 1;
        }
        *(_DWORD *)(a1 + 256) = v81;
        *(_BYTE *)(a1 + v79) = v82;
        ++v80;
        *(_BYTE *)(a1 + 260) = v82;
        if ( v80 == "" )
          sub_3C4990();
        v79 = v81;
      }
    case 3u:
      JUMPOUT(0x3C333C);
    case 4u:
      JUMPOUT(0x3C3654);
    case 5u:
      v96 = (_DWORD *)sub_3C0EC4(a1, (int *)(a3 + 4));
      if ( v96 == nullptr )
        v96 = (_DWORD *)sub_3C4C3C();
      if ( *v96 == 47 )
        sub_3C4C1E();
      sub_3C363C();
    case 6u:
      JUMPOUT(0x3C36EC);
    case 7u:
      JUMPOUT(0x3C332E);
    case 8u:
      v77 = *(_DWORD *)(a1 + 256);
      if ( v77 == 255 )
        v6 = sub_3C5016(v6);
      return sub_3C3310(v6, v77 + 1);
    case 9u:
      v73 = "vtable for ";
      for ( i = *(_DWORD *)(a1 + 256); ; i = v75 )
      {
        v76 = *v73;
        if ( i == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          ++*(_DWORD *)(a1 + 288);
          v75 = 1;
          i = 0;
        }
        else
        {
          v75 = i + 1;
        }
        *(_DWORD *)(a1 + 256) = v75;
        *(_BYTE *)(a1 + i) = v76;
        ++v73;
        *(_BYTE *)(a1 + 260) = v76;
        if ( v73 == "" )
          sub_3C47B0();
      }
    case 0xAu:
      v69 = "VTT for ";
      for ( j = *(_DWORD *)(a1 + 256); ; j = v71 )
      {
        v72 = *v69;
        if ( j == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v71 = 1;
          j = 0;
        }
        else
        {
          v71 = j + 1;
        }
        *(_DWORD *)(a1 + 256) = v71;
        *(_BYTE *)(a1 + j) = v72;
        ++v69;
        *(_BYTE *)(a1 + 260) = v72;
        if ( v69 == "" )
          sub_3C48BC();
      }
    case 0xBu:
      v65 = "construction vtable for ";
      for ( k = *(_DWORD *)(a1 + 256); ; k = v67 )
      {
        v68 = *v65;
        if ( k == 255 )
        {
          v168 = *(_DWORD *)(a1 + 268);
          v167 = *(void (__fastcall **)(int, int, int))(a1 + 264);
          *(_BYTE *)(a1 + 255) = 0;
          v167(a1, 255, v168);
          ++*(_DWORD *)(a1 + 288);
          v67 = 1;
          k = 0;
        }
        else
        {
          v67 = k + 1;
        }
        *(_DWORD *)(a1 + 256) = v67;
        *(_BYTE *)(a1 + k) = v68;
        ++v65;
        *(_BYTE *)(a1 + 260) = v68;
        if ( v65 == "" )
          sub_3C482C();
      }
    case 0xCu:
      v61 = "typeinfo for ";
      for ( m = *(_DWORD *)(a1 + 256); ; m = v63 )
      {
        v64 = *v61;
        if ( m == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v63 = 1;
          m = 0;
        }
        else
        {
          v63 = m + 1;
        }
        *(_DWORD *)(a1 + 256) = v63;
        *(_BYTE *)(a1 + m) = v64;
        ++v61;
        *(_BYTE *)(a1 + 260) = v64;
        if ( v61 == "" )
          sub_3C489C();
      }
    case 0xDu:
      v57 = "typeinfo name for ";
      for ( n = *(_DWORD *)(a1 + 256); ; n = v59 )
      {
        v60 = *v57;
        if ( n == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v59 = 1;
          n = 0;
        }
        else
        {
          v59 = n + 1;
        }
        *(_DWORD *)(a1 + 256) = v59;
        *(_BYTE *)(a1 + n) = v60;
        ++v57;
        *(_BYTE *)(a1 + 260) = v60;
        if ( v57 == "" )
          sub_3C481C();
      }
    case 0xEu:
      v53 = "typeinfo fn for ";
      for ( ii = *(_DWORD *)(a1 + 256); ; ii = v55 )
      {
        v56 = *v53;
        if ( ii == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v55 = 1;
          ii = 0;
        }
        else
        {
          v55 = ii + 1;
        }
        *(_DWORD *)(a1 + 256) = v55;
        *(_BYTE *)(a1 + ii) = v56;
        ++v53;
        *(_BYTE *)(a1 + 260) = v56;
        if ( v53 == "" )
          sub_3C48EC();
      }
    case 0xFu:
      v49 = "non-virtual thunk to ";
      for ( jj = *(_DWORD *)(a1 + 256); ; jj = v51 )
      {
        v52 = *v49;
        if ( jj == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v51 = 1;
          jj = 0;
        }
        else
        {
          v51 = jj + 1;
        }
        *(_DWORD *)(a1 + 256) = v51;
        *(_BYTE *)(a1 + jj) = v52;
        ++v49;
        *(_BYTE *)(a1 + 260) = v52;
        if ( v49 == "" )
          sub_3C48CC();
      }
    case 0x10u:
      v45 = "virtual thunk to ";
      for ( kk = *(_DWORD *)(a1 + 256); ; kk = v47 )
      {
        v48 = *v45;
        if ( kk == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v47 = 1;
          kk = 0;
        }
        else
        {
          v47 = kk + 1;
        }
        *(_DWORD *)(a1 + 256) = v47;
        *(_BYTE *)(a1 + kk) = v48;
        ++v45;
        *(_BYTE *)(a1 + 260) = v48;
        if ( v45 == "" )
          sub_3C48DC();
      }
    case 0x11u:
      v41 = "covariant return thunk to ";
      for ( mm = *(_DWORD *)(a1 + 256); ; mm = v43 )
      {
        v44 = *v41;
        if ( mm == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v43 = 1;
          mm = 0;
        }
        else
        {
          v43 = mm + 1;
        }
        *(_DWORD *)(a1 + 256) = v43;
        *(_BYTE *)(a1 + mm) = v44;
        ++v41;
        *(_BYTE *)(a1 + 260) = v44;
        if ( v41 == "" )
          sub_3C43E0();
      }
    case 0x12u:
      v37 = "java Class for ";
      for ( nn = *(_DWORD *)(a1 + 256); ; nn = v39 )
      {
        v40 = *v37;
        if ( nn == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v39 = 1;
          nn = 0;
        }
        else
        {
          v39 = nn + 1;
        }
        *(_DWORD *)(a1 + 256) = v39;
        *(_BYTE *)(a1 + nn) = v40;
        ++v37;
        *(_BYTE *)(a1 + 260) = v40;
        if ( v37 == "" )
          sub_3C44B0();
      }
    case 0x13u:
      v33 = "guard variable for ";
      for ( i1 = *(_DWORD *)(a1 + 256); ; i1 = v35 )
      {
        v36 = *v33;
        if ( i1 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v35 = 1;
          i1 = 0;
        }
        else
        {
          v35 = i1 + 1;
        }
        *(_DWORD *)(a1 + 256) = v35;
        *(_BYTE *)(a1 + i1) = v36;
        ++v33;
        *(_BYTE *)(a1 + 260) = v36;
        if ( v33 == "" )
          sub_3C4490();
      }
    case 0x14u:
      v29 = "TLS init function for ";
      for ( i2 = *(_DWORD *)(a1 + 256); ; i2 = v31 )
      {
        v32 = *v29;
        if ( i2 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v31 = 1;
          i2 = 0;
        }
        else
        {
          v31 = i2 + 1;
        }
        *(_DWORD *)(a1 + 256) = v31;
        *(_BYTE *)(a1 + i2) = v32;
        ++v29;
        *(_BYTE *)(a1 + 260) = v32;
        if ( v29 == "" )
          sub_3C44A0();
      }
    case 0x15u:
      v25 = "TLS wrapper function for ";
      for ( i3 = *(_DWORD *)(a1 + 256); ; i3 = v27 )
      {
        v28 = *v25;
        if ( i3 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v27 = 1;
          i3 = 0;
        }
        else
        {
          v27 = i3 + 1;
        }
        *(_DWORD *)(a1 + 256) = v27;
        *(_BYTE *)(a1 + i3) = v28;
        ++v25;
        *(_BYTE *)(a1 + 260) = v28;
        if ( v25 == "" )
          sub_3C43F0();
      }
    case 0x16u:
      v21 = "reference temporary #";
      for ( i4 = *(_DWORD *)(a1 + 256); ; i4 = v23 )
      {
        v24 = *v21;
        if ( i4 == 255 )
        {
          v166 = *(_DWORD *)(a1 + 268);
          v165 = *(void (__fastcall **)(int, int, int))(a1 + 264);
          *(_BYTE *)(a1 + 255) = 0;
          v165(a1, 255, v166);
          ++*(_DWORD *)(a1 + 288);
          v23 = 1;
          i4 = 0;
        }
        else
        {
          v23 = i4 + 1;
        }
        *(_DWORD *)(a1 + 256) = v23;
        *(_BYTE *)(a1 + i4) = v24;
        ++v21;
        *(_BYTE *)(a1 + 260) = v24;
        if ( v21 == "" )
          sub_3C4400();
      }
    case 0x17u:
      v17 = "hidden alias for ";
      for ( i5 = *(_DWORD *)(a1 + 256); ; i5 = v19 )
      {
        v20 = *v17;
        if ( i5 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v19 = 1;
          i5 = 0;
        }
        else
        {
          v19 = i5 + 1;
        }
        *(_DWORD *)(a1 + 256) = v19;
        *(_BYTE *)(a1 + i5) = v20;
        ++v17;
        *(_BYTE *)(a1 + 260) = v20;
        if ( v17 == "" )
          sub_3C4480();
      }
    case 0x18u:
      if ( *(_DWORD *)(a3 + 8) != 0 )
      {
        v11 = 0;
        v12 = *(_DWORD *)(a1 + 256);
        v13 = *(_DWORD *)(a3 + 4);
        v14 = *(_DWORD *)(a3 + 8);
        while ( 1 )
        {
          v16 = *(_BYTE *)(v13 + v11);
          if ( v12 == 255 )
          {
            v164 = *(_DWORD *)(a1 + 268);
            v163 = *(int (__fastcall **)(int, int, int))(a1 + 264);
            *(_BYTE *)(a1 + 255) = 0;
            v6 = v163(a1, 255, v164);
            ++*(_DWORD *)(a1 + 288);
            v15 = 1;
            v12 = 0;
          }
          else
          {
            v15 = v12 + 1;
          }
          *(_DWORD *)(a1 + 256) = v15;
          *(_BYTE *)(a1 + v12) = v16;
          ++v11;
          *(_BYTE *)(a1 + 260) = v16;
          if ( v14 == v11 )
            break;
          v12 = v15;
        }
      }
      return sub_3C2A38(v6);
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
      if ( *(_DWORD *)(a1 + 276) == 0 )
        sub_3C5788(v3);
      v9 = *(int ***)(a1 + 276);
      break;
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
    case 0x20u:
    case 0x21u:
    case 0x22u:
    case 0x25u:
    case 0x26u:
      return sub_3C2B86(v6);
    case 0x23u:
    case 0x24u:
      if ( **(_DWORD **)(a3 + 4) == 5 )
        sub_3C5366();
      return sub_3C4012();
    case 0x27u:
      JUMPOUT(0x3C3F82);
    case 0x28u:
      JUMPOUT(0x3C3F74);
    case 0x29u:
      JUMPOUT(0x3C3F3E);
    case 0x2Au:
      JUMPOUT(0x3C4094);
    case 0x2Bu:
    case 0x2Du:
      JUMPOUT(0x3C4054);
    case 0x2Cu:
      if ( *(_WORD *)(a3 + 10) == 0 )
        sub_3C3BC4(v3);
      sub_3C4C48(v3);
    case 0x2Eu:
    case 0x2Fu:
      JUMPOUT(0x3C3B2A);
    case 0x30u:
      v122 = *(_DWORD *)(a3 + 4);
      if ( v122 != 0 )
        v6 = sub_3C5938(a1, a2, v122);
      if ( *(_DWORD *)(a1 + 256) == 255 )
        sub_3C4FC6(v6);
      sub_3C3AF0(v6);
    case 0x31u:
      v114 = "operator";
      for ( i6 = *(_DWORD *)(a1 + 256); ; i6 = v116 )
      {
        v117 = *v114;
        if ( i6 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v116 = 1;
          i6 = 0;
        }
        else
        {
          v116 = i6 + 1;
        }
        *(_DWORD *)(a1 + 256) = v116;
        *(_BYTE *)(a1 + i6) = v117;
        ++v114;
        *(_BYTE *)(a1 + 260) = v117;
        if ( v114 == "" )
          sub_3C465C();
      }
    case 0x32u:
      v118 = "operator ";
      for ( i7 = *(_DWORD *)(a1 + 256); ; i7 = v120 )
      {
        v121 = *v118;
        if ( i7 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v120 = 1;
          i7 = 0;
        }
        else
        {
          v120 = i7 + 1;
        }
        *(_DWORD *)(a1 + 256) = v120;
        *(_BYTE *)(a1 + i7) = v121;
        ++v118;
        *(_BYTE *)(a1 + 260) = v121;
        if ( v118 == "" )
          sub_3C47D0();
      }
    case 0x33u:
      goto LABEL_197;
    case 0x34u:
      v109 = sub_3C6894(a1, STACK[0x3D8], *(_DWORD *)(a3 + 4));
      sub_3C2A38(v109);
LABEL_197:
      v110 = "operator ";
      for ( i8 = *(_DWORD *)(a1 + 256); ; i8 = v112 )
      {
        v113 = *v110;
        if ( i8 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v112 = 1;
          i8 = 0;
        }
        else
        {
          v112 = i8 + 1;
        }
        *(_DWORD *)(a1 + 256) = v112;
        *(_BYTE *)(a1 + i8) = v113;
        ++v110;
        *(_BYTE *)(a1 + 260) = v113;
        if ( v110 == "" )
          sub_3C47C0();
      }
    case 0x35u:
      goto LABEL_190;
    case 0x36u:
      goto LABEL_187;
    case 0x37u:
      *(_DWORD *)(a1 + 280) = 1;
      v6 = sub_3C2A38(v3);
LABEL_187:
      if ( **(_DWORD **)(a3 + 8) == 55 )
        v6 = sub_3C4B70(v6);
      *(_DWORD *)(a1 + 280) = 1;
      v6 = sub_3C2A38(v6);
LABEL_190:
      v107 = *(int **)(a3 + 4);
      v108 = *v107;
      if ( *v107 == 49 )
        v6 = sub_3C4D24(v6);
      if ( v108 == 51 )
        sub_3C4DC6(v6);
      sub_3C6894(a1, a2, v107);
      JUMPOUT(0x3C395A);
    case 0x38u:
      JUMPOUT(0x3C3EC8);
    case 0x39u:
    case 0x3Au:
      JUMPOUT(0x3C3EBC);
    case 0x3Bu:
    case 0x3Cu:
      v134 = *(_DWORD **)(a3 + 4);
      if ( *v134 == 39 )
      {
        v135 = *(_DWORD *)(v134[1] + 16);
        if ( v135 != 0 )
        {
          if ( v135 <= 6 )
            v6 = sub_3C52E2(v3);
          if ( v135 == 7 )
          {
            v136 = *(_DWORD **)(a3 + 8);
            if ( *v136 == 0 && v136[2] == 1 )
              v6 = sub_3C5868(v6);
          }
        }
      }
      return sub_3C3E5A(v6);
    case 0x3Du:
      JUMPOUT(0x3C3DBE);
    case 0x3Eu:
      JUMPOUT(0x3C3DA6);
    case 0x3Fu:
      v133 = *(_DWORD *)(a1 + 256);
      if ( v133 == 255 )
        sub_3C4E44(v6);
      sub_3C3D94(v6, v133 + 1);
    case 0x40u:
      j_sprintf(s, "%ld", *(_DWORD *)(a3 + 4));
      v127 = j_strlen(s);
      if ( v127 == 0 )
        v127 = sub_3C2A38(0);
      v128 = 0;
      v129 = *(_DWORD *)(a1 + 256);
      v130 = v127;
      while ( 1 )
      {
        v132 = s[v128];
        if ( v129 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          v127 = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          ++*(_DWORD *)(a1 + 288);
          v131 = 1;
          v129 = 0;
        }
        else
        {
          v131 = v129 + 1;
        }
        *(_DWORD *)(a1 + 256) = v131;
        *(_BYTE *)(a1 + v129) = v132;
        ++v128;
        *(_BYTE *)(a1 + 260) = v132;
        if ( v128 == v130 )
          v127 = sub_3C2A38(v127);
        v129 = v131;
      }
    case 0x41u:
      v123 = "decltype (";
      for ( i9 = *(_DWORD *)(a1 + 256); ; i9 = v125 )
      {
        v126 = *v123;
        if ( i9 == 255 )
        {
          v162 = *(_DWORD *)(a1 + 268);
          v161 = *(void (__fastcall **)(int, int, int))(a1 + 264);
          *(_BYTE *)(a1 + 255) = 0;
          v161(a1, 255, v162);
          ++*(_DWORD *)(a1 + 288);
          v125 = 1;
          i9 = 0;
        }
        else
        {
          v125 = i9 + 1;
        }
        *(_DWORD *)(a1 + 256) = v125;
        *(_BYTE *)(a1 + i9) = v126;
        ++v123;
        *(_BYTE *)(a1 + 260) = v126;
        if ( v123 == "" )
          sub_3C47F0();
      }
    case 0x42u:
      v146 = "global constructors keyed to ";
      v147 = *(_DWORD *)(a1 + 256);
      v139 = a3;
      while ( 1 )
      {
        v149 = *v146;
        if ( v147 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v148 = 1;
          v147 = 0;
        }
        else
        {
          v148 = v147 + 1;
        }
        *(_DWORD *)(a1 + 256) = v148;
        *(_BYTE *)(a1 + v147) = v149;
        ++v146;
        *(_BYTE *)(a1 + 260) = v149;
        if ( v146 == "" )
          break;
        v147 = v148;
      }
      goto LABEL_283;
    case 0x43u:
      v142 = "global destructors keyed to ";
      v143 = *(_DWORD *)(a1 + 256);
      v139 = a3;
      while ( 1 )
      {
        v145 = *v142;
        if ( v143 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v144 = 1;
          v143 = 0;
        }
        else
        {
          v144 = v143 + 1;
        }
        *(_DWORD *)(a1 + 256) = v144;
        *(_BYTE *)(a1 + v143) = v145;
        ++v142;
        *(_BYTE *)(a1 + 260) = v145;
        if ( v142 == "" )
          break;
        v143 = v144;
      }
      v154 = sub_3C5938(a1, a2, *(_DWORD *)(v139 + 4));
      sub_3C2A38(v154);
      goto LABEL_282;
    case 0x44u:
      v150 = "{lambda(";
      for ( i10 = *(_DWORD *)(a1 + 256); ; i10 = v152 )
      {
        v153 = *v150;
        if ( i10 == 255 )
        {
          v160 = *(_DWORD *)(a1 + 268);
          v159 = *(void (__fastcall **)(int, int, int))(a1 + 264);
          *(_BYTE *)(a1 + 255) = 0;
          v159(a1, 255, v160);
          ++*(_DWORD *)(a1 + 288);
          v152 = 1;
          i10 = 0;
        }
        else
        {
          v152 = i10 + 1;
        }
        *(_DWORD *)(a1 + 256) = v152;
        *(_BYTE *)(a1 + i10) = v153;
        ++v150;
        *(_BYTE *)(a1 + 260) = v153;
        if ( v150 == "" )
          break;
      }
      JUMPOUT(0x3C451C);
    case 0x45u:
      v6 = a1;
      goto LABEL_2;
    case 0x46u:
      JUMPOUT(0x3C419C);
    case 0x47u:
      v137 = "transaction clone for ";
      v138 = *(_DWORD *)(a1 + 256);
      v139 = a3;
      while ( 1 )
      {
        v141 = *v137;
        if ( v138 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v140 = 1;
          v138 = 0;
        }
        else
        {
          v140 = v138 + 1;
        }
        *(_DWORD *)(a1 + 256) = v140;
        *(_BYTE *)(a1 + v138) = v141;
        ++v137;
        *(_BYTE *)(a1 + 260) = v141;
        if ( v137 == "" )
          break;
        v138 = v140;
      }
LABEL_282:
      v155 = sub_3C5938(a1, a2, *(_DWORD *)(v139 + 4));
      sub_3C2A38(v155);
LABEL_283:
      v156 = sub_3C5938(a1, a2, *(_DWORD *)(v139 + 4));
      sub_3C2A38(v156);
      JUMPOUT(0x3C4714);
    case 0x48u:
      v103 = "non-transaction clone for ";
      for ( i11 = *(_DWORD *)(a1 + 256); ; i11 = v105 )
      {
        v106 = *v103;
        if ( i11 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int))(a1 + 264))(a1, 255);
          ++*(_DWORD *)(a1 + 288);
          v105 = 1;
          i11 = 0;
        }
        else
        {
          v105 = i11 + 1;
        }
        *(_DWORD *)(a1 + 256) = v105;
        *(_BYTE *)(a1 + i11) = v106;
        ++v103;
        *(_BYTE *)(a1 + 260) = v106;
        if ( v103 == "" )
          sub_3C47E0();
      }
    case 0x49u:
      v101 = sub_3C0F14(a1, *(_DWORD **)(a3 + 4));
      if ( v101 == nullptr )
        v101 = (_DWORD *)sub_3C5756();
      for ( i12 = 0; ; ++i12 )
      {
        if ( *v101 != 47 )
          v101 = (_DWORD *)((int (*)(void))loc_3C493E)();
        if ( v101[1] == 0 )
          v101 = (_DWORD *)((int (*)(void))loc_3C493E)();
        v101 = (_DWORD *)v101[2];
        if ( v101 == nullptr )
          sub_3C3812();
      }
    case 0x4Au:
      v97 = "[abi:";
      sub_3C5938(a1, a2, *(_DWORD *)(a3 + 4));
      for ( i13 = *(_DWORD *)(a1 + 256); ; i13 = v99 )
      {
        v100 = *v97;
        if ( i13 == 255 )
        {
          v170 = *(_DWORD *)(a1 + 268);
          v169 = *(void (__fastcall **)(int, int, int))(a1 + 264);
          *(_BYTE *)(a1 + 255) = 0;
          v169(a1, 255, v170);
          ++*(_DWORD *)(a1 + 288);
          v99 = 1;
          i13 = 0;
        }
        else
        {
          v99 = i13 + 1;
        }
        *(_DWORD *)(a1 + 256) = v99;
        *(_BYTE *)(a1 + i13) = v100;
        ++v97;
        *(_BYTE *)(a1 + 260) = v100;
        if ( v97 == "" )
          sub_3C44EE();
      }
    case 0x4Bu:
      sub_3C5938(a1, a2, *(_DWORD *)(a3 + 4));
      v92 = " [clone ";
      for ( i14 = *(_DWORD *)(a1 + 256); ; i14 = v94 )
      {
        v95 = *v92;
        if ( i14 == 255 )
        {
          v158 = *(_DWORD *)(a1 + 268);
          v157 = *(void (__fastcall **)(int, int, int))(a1 + 264);
          *(_BYTE *)(a1 + 255) = 0;
          v157(a1, 255, v158);
          ++*(_DWORD *)(a1 + 288);
          v94 = 1;
          i14 = 0;
        }
        else
        {
          v94 = i14 + 1;
        }
        *(_DWORD *)(a1 + 256) = v94;
        *(_BYTE *)(a1 + i14) = v95;
        ++v92;
        *(_BYTE *)(a1 + 260) = v95;
        if ( v92 == "" )
          sub_3C44C0();
      }
    default:
      v6 = a1;
LABEL_2:
      *(_DWORD *)(a1 + 280) = 1;
      return sub_3C2A38(v6);
  }
  do
  {
    if ( v9[2] == nullptr )
    {
      v6 = *v9[1] - 25;
      if ( v6 > 2 )
        return sub_3C2B86(v6);
      if ( v3 == *v9[1] )
        v6 = sub_3C4E36();
    }
    v9 = (int **)*v9;
  }
  while ( v9 != nullptr );
  return sub_3C2B86(v6);
}


//======================================================================
// sub_3C2A38
// address: 0x003C2A38   size: 0x12 (18 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3C2A38(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_3C2B86
// address: 0x003C2B86   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_3C2B86(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r4
  unsigned int v5; // r5
  unsigned int v6; // r3

  STACK[0x1C8] = a4;
  *(_DWORD *)(v4 + 276) = &STACK[0x1C8];
  STACK[0x1D0] = 0;
  v6 = *(_DWORD *)(v4 + 272);
  STACK[0x1CC] = v5;
  STACK[0x1D4] = v6;
  return sub_3C2B9E();
}


//======================================================================
// sub_3C2B9E
// address: 0x003C2B9E   size: 0x2 (2 bytes)
//======================================================================
int __fastcall sub_3C2B9E(int a1, int a2)
{
  int v2; // r5

  return sub_3C2BA0(a1, a2, *(_DWORD *)(v2 + 4));
}


//======================================================================
// sub_3C2BA0
// address: 0x003C2BA0   size: 0x22 (34 bytes)
//======================================================================
void __fastcall sub_3C2BA0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r1
  int v13; // r2
  int v14; // r0

  sub_3C5938(v9, STACK[0x1A8], a3);
  if ( *(_DWORD *)(v11 + 8) == 0 )
    sub_3C5958(v9, STACK[0x1A8], v10);
  v14 = STACK[0x1C8];
  *(_DWORD *)(v9 + 276) = STACK[0x1C8];
  sub_3C2A38(v14, v12, v13, 276, a5, a6, a7, a8, a9);
}


//======================================================================
// sub_3C3310
// address: 0x003C3310   size: 0x58 (88 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C3310  MOVS    R2, #0x100
//   003C3314  STR     R1, [R4,R2]
//   003C3316  MOVS    R2, #0x7E ; '~'
//   003C3318  STRB    R2, [R4,R3]
//   003C331A  MOVS    R3, #0x104
//   003C331E  STRB    R2, [R4,R3]
//   003C3320  MOVS    R0, R4
//   003C3322  LDR     R2, [R5,#8]
//   003C3324  LDR     R1, [SP,#arg_1A8]
//   003C3326  BL      sub_3C5938
//   003C332A  BL      sub_3C2A38
//   003C332E  LDR     R2, [R2,#8]; jumptable 003C2A4C case 7
//   003C3330  MOVS    R0, R4
//   003C3332  LDR     R1, [SP,#arg_1A8]
//   003C3334  BL      sub_3C5938
//   003C3338  BL      sub_3C2A38
//   003C333C  MOVS    R1, #0x114; jumptable 003C2A4C case 3
//   003C3340  MOVS    R3, #0
//   003C3342  LDR     R6, [R4,R1]
//   003C3344  STR     R3, [R4,R1]
//   003C3346  LDR     R7, [R2,#4]
//   003C3348  MOV     R11, R6
//   003C334A  CMP     R7, #0
//   003C334C  BNE     loc_3C3352
//   003C334E  BL      sub_3C5472
//   003C3352  MOVS    R3, #0x110
//   003C3356  LDR     R3, [R4,R3]
//   003C3358  MOVS    R2, #0
//   003C335A  ADD     R6, SP, #arg_1C8
//   003C335C  MOV     R12, R3
//   003C335E  MOV     R10, R1
//   003C3360  MOVS    R3, R6
//   003C3362  MOV     R9, R2
//   003C3364  MOVS    R1, R2
//   003C3366  MOV     R8, R5

//======================================================================
// sub_3C3368
// address: 0x003C3368   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_3C3368(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r4
  int *v5; // r7
  int v6; // r9
  int v7; // r10
  int v8; // r12
  int v9; // r2
  int v10; // r0

  *a4 = a3;
  a4[2] = v6;
  v9 = *v5;
  *(_DWORD *)(v4 + v7) = a4;
  a4[3] = v8;
  v10 = v9 - 28;
  a4[1] = v5;
  if ( (unsigned int)(v9 - 28) <= 4 )
    v10 = sub_3C43C8();
  if ( v9 == 4 )
    v10 = sub_3C5726(v10);
  if ( v9 != 2 )
    return sub_3C3424(v10);
  if ( *(_DWORD *)v5[2] == 69 )
    v10 = sub_3C5842(v10);
  return sub_3C33A6(v10);
}


//======================================================================
// sub_3C33A6
// address: 0x003C33A6   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_3C33A6(unsigned int a1, _DWORD *a2, int a3, int a4)
{
  unsigned int v4; // r4
  int v5; // r6
  unsigned int v6; // r8
  unsigned int v7; // r12
  _DWORD *v9; // r2
  _DWORD *v10; // r3
  int v11; // r5
  int v12; // r6
  unsigned int v13; // r0
  unsigned int v14; // r6
  unsigned int v15; // r4

  if ( (unsigned int)(a4 - 28) <= 4 )
  {
    if ( v6 == 4 )
      sub_3C5770();
    v9 = (_DWORD *)(v5 + 16 * (v6 - 1));
    v10 = (_DWORD *)(v5 + 16 * v6);
    STACK[0x1AC] = v6;
    STACK[0x1B0] = v7;
    STACK[0x1B4] = v4;
    while ( 1 )
    {
      v11 = v9[1];
      v12 = v9[2];
      *v10 = *v9;
      v10[1] = v11;
      v10[2] = v12;
      v10[3] = v9[3];
      v13 = STACK[0x1B4];
      *v10 = v10 - 4;
      v14 = STACK[0x1B0];
      *(_DWORD *)(v13 + 276) = v10;
      v9[1] = a2;
      v9[2] = 0;
      v9[3] = v14;
      a2 = (_DWORD *)a2[1];
      a1 = STACK[0x1AC] + 1;
      v15 = *a2 - 28;
      STACK[0x1AC] = a1;
      if ( v15 > 4 )
        break;
      v9 += 4;
      v10 += 4;
      if ( STACK[0x1AC] == 4 )
        sub_3C576E();
    }
  }
  return sub_3C3424(a1);
}


//======================================================================
// sub_3C3424
// address: 0x003C3424   size: 0x14 (20 bytes)
//======================================================================
int sub_3C3424()
{
  int v0; // r4
  int v1; // r5
  _DWORD *v2; // r7
  int v3; // r0

  v3 = sub_3C5938(v0, STACK[0x1A8], *(_DWORD *)(v1 + 8));
  if ( *v2 == 4 )
    v3 = sub_3C577C(v3);
  return sub_3C3438(v3);
}


//======================================================================
// sub_3C3438
// address: 0x003C3438   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_3C3438(int a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r8
  int v4; // r5
  _DWORD *i; // r6

  if ( v3 == 0 )
    a1 = ((int (*)(void))sub_3C54FC)();
  v4 = v3 - 1;
  for ( i = (_DWORD *)(v2 + 16 * (v3 - 1) + 8); *i != 0; --v4 )
  {
    i -= 4;
    if ( v4 == 0 )
      a1 = sub_3C54FC(a1);
  }
  if ( *(_DWORD *)(v1 + 256) == 255 )
    sub_3C57B2();
  return sub_3C347E();
}


//======================================================================
// sub_3C347E
// address: 0x003C347E   size: 0x1A (26 bytes)
//======================================================================
void __fastcall sub_3C347E(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r6
  char v5; // r7
  int v6; // r8
  int v7; // r9

  *(_DWORD *)(v3 + v6) = a3 + 1;
  *(_BYTE *)(v3 + a3) = v5;
  *(_BYTE *)(v3 + v7) = v5;
  sub_3C5958(v3, STACK[0x1A8], *(_DWORD *)(v4 - 4));
  JUMPOUT(0x3C3460);
}


//======================================================================
// sub_3C363C
// address: 0x003C363C   size: 0x3A (58 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C363C  MOVS    R5, #dword_110
//   003C3640  LDR     R6, [R4,R5]
//   003C3642  MOVS    R0, R4
//   003C3644  LDR     R7, [R6]
//   003C3646  STR     R7, [R4,R5]
//   003C3648  LDR     R1, [SP,#arg_1A8]
//   003C364A  BL      sub_3C5938
//   003C364E  STR     R6, [R4,R5]
//   003C3650  BL      sub_3C2A38
//   003C3654  MOVS    R3, #0x114; jumptable 003C2A4C case 4
//   003C3658  MOVS    R2, #0
//   003C365A  LDR     R7, [R4,R3]
//   003C365C  STR     R2, [R4,R3]
//   003C365E  LDR     R3, [SP,#arg_1A8]
//   003C3660  LDR     R6, [R5,#(dword_114 - 0x110)]
//   003C3662  LSLS    R3, R3, #0x1D
//   003C3664  BPL     sub_3C3676
//   003C3666  LDR     R0, [R6]
//   003C3668  CMP     R0, #0
//   003C366A  BNE     sub_3C3676
//   003C366C  LDR     R1, [R6,#8]
//   003C366E  CMP     R1, #6
//   003C3670  BNE     sub_3C3676
//   003C3672  BL      sub_3C5552

//======================================================================
// sub_3C3676
// address: 0x003C3676   size: 0x1E (30 bytes)
//======================================================================
void __noreturn sub_3C3676()
{
  int v0; // r4
  int v1; // r6
  int v2; // r0

  v2 = sub_3C5938(v0, STACK[0x1A8], v1);
  if ( *(_BYTE *)(v0 + 260) == 60 )
    v2 = sub_3C53F6(v2);
  sub_3C3694(v2);
}


//======================================================================
// sub_3C3694
// address: 0x003C3694   size: 0xA (10 bytes)
//======================================================================
void __fastcall __noreturn sub_3C3694(int a1, int a2, int a3, int a4)
{
  if ( a4 == 255 )
    sub_3C51E8();
  sub_3C369E(a1, a4 + 1);
}


//======================================================================
// sub_3C369E
// address: 0x003C369E   size: 0x2A (42 bytes)
//======================================================================
void __fastcall __noreturn sub_3C369E(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r5
  __int64 v6; // r0

  *(_DWORD *)(v4 + 256) = a2;
  *(_BYTE *)(v4 + a4) = 60;
  *(_BYTE *)(v4 + 260) = 60;
  LODWORD(v6) = sub_3C5938(v4, STACK[0x1A8], *(_DWORD *)(v5 + 8));
  if ( *(_BYTE *)(v4 + 260) == 62 )
    v6 = sub_3C53D6(v6);
  sub_3C36C8(v6, HIDWORD(v6), 256, *(_DWORD *)(v4 + 256));
}


//======================================================================
// sub_3C36C8
// address: 0x003C36C8   size: 0xA (10 bytes)
//======================================================================
void __fastcall __noreturn sub_3C36C8(int a1, int a2, int a3, int a4)
{
  if ( a4 == 255 )
    sub_3C51C0();
  sub_3C36D2(a1, a4 + 1);
}


//======================================================================
// sub_3C36D2
// address: 0x003C36D2   size: 0x10 (16 bytes)
//======================================================================
void __fastcall __noreturn sub_3C36D2(int a1, int a2, int a3, int a4)
{
  int v4; // r4

  *(_DWORD *)(v4 + 256) = a2;
  *(_BYTE *)(v4 + a4) = 62;
  *(_BYTE *)(v4 + 260) = 62;
  sub_3C36E2();
}


//======================================================================
// sub_3C36E2
// address: 0x003C36E2   size: 0x80 (128 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C36E2  MOVS    R3, #0x114
//   003C36E6  STR     R7, [R4,R3]
//   003C36E8  BL      sub_3C2A38
//   003C36EC  LDR     R5, [R2,#4]; jumptable 003C2A4C case 6
//   003C36EE  MOVS    R3, #0x100
//   003C36F2  MOV     R9, R5
//   003C36F4  LDR     R3, [R4,R3]; int
//   003C36F6  CMP     R5, #0
//   003C36F8  BEQ     loc_3C36FE
//   003C36FA  BL      sub_3C49F8
//   003C36FE  MOVS    R2, #0x108
//   003C3702  LDR     R5, =(aThis_0 - 0x3C370C); "this"
//   003C3704  MOV     R9, R2
//   003C3706  MOVS    R2, #0x86
//   003C3708  ADD     R5, PC; "this"
//   003C370A  MOVS    R6, #0
//   003C370C  LSLS    R2, R2, #1
//   003C370E  ADDS    R7, R5, #(aThis_0+4 - 0x44E75C); ""
//   003C3710  MOV     R10, R6
//   003C3712  MOV     R8, R2
//   003C3714  B       loc_3C3732
//   003C3716  ADDS    R2, R3, #1
//   003C3718  MOVS    R1, #0x100
//   003C371C  STR     R2, [R4,R1]
//   003C371E  STRB    R6, [R4,R3]
//   003C3720  MOVS    R3, #0x104
//   003C3724  ADDS    R5, #1
//   003C3726  STRB    R6, [R4,R3]
//   003C3728  CMP     R5, R7
//   003C372A  BNE     loc_3C3730
//   003C372C  BL      sub_3C2A38
//   003C3730  MOVS    R3, R2
//   003C3732  LDRB    R6, [R5]
//   003C3734  CMP     R3, #0xFF
//   003C3736  BNE     loc_3C3716
//   003C3738  MOV     R1, R8
//   003C373A  MOV     R2, R9
//   003C373C  LDR     R1, [R4,R1]
//   003C373E  LDR     R2, [R4,R2]
//   003C3740  STR     R1, [SP,#arg_5C]
//   003C3742  STR     R2, [SP,#arg_58]
//   003C3744  MOV     R0, R10
//   003C3746  STRB    R0, [R4,R3]
//   003C3748  LDR     R2, [SP,#arg_5C]
//   003C374A  LDR     R3, [SP,#arg_58]
//   003C374C  MOVS    R0, R4
//   003C374E  MOVS    R1, #0xFF
//   003C3750  BLX     R3
//   003C3752  MOVS    R3, #0x120
//   003C3756  LDR     R2, [R4,R3]
//   003C3758  ADDS    R2, #1
//   003C375A  STR     R2, [R4,R3]
//   003C375C  MOVS    R2, #1
//   003C375E  MOVS    R3, #0
//   003C3760  B       loc_3C3718

//======================================================================
// sub_3C3812
// address: 0x003C3812   size: 0x16 (22 bytes)
//======================================================================
void __noreturn sub_3C3812()
{
  unsigned int v0; // r10

  STACK[0x1B8] = v0 - 1;
  STACK[0x1B0] = (unsigned int)", ";
  STACK[0x1BC] = v0;
  sub_3C3828();
}


//======================================================================
// sub_3C3828
// address: 0x003C3828   size: 0x82 (130 bytes)
//======================================================================
void __noreturn sub_3C3828()
{
  int v0; // r4
  char *v1; // r7
  signed int v2; // r11
  int v3; // r0
  int v4; // r3
  char *v5; // r5
  int v6; // r2
  char v7; // r6
  int (__fastcall *v8)(int, int, int); // [sp+60h] [bp+60h]
  int v9; // [sp+64h] [bp+64h]

  *(_DWORD *)(v0 + 284) = v2;
  v3 = sub_3C5938(v0, STACK[0x1A8], STACK[0x1B4]);
  if ( v2 >= (int)STACK[0x1B8] )
    v3 = sub_3C43B6(v3);
  v4 = *(_DWORD *)(v0 + 256);
  v5 = (char *)STACK[0x1B0];
  while ( 1 )
  {
    v7 = *v5;
    if ( v4 == 255 )
    {
      v9 = *(_DWORD *)(v0 + 268);
      v8 = *(int (__fastcall **)(int, int, int))(v0 + 264);
      *(_BYTE *)(v0 + 255) = 0;
      v3 = v8(v0, 255, v9);
      ++*(_DWORD *)(v0 + 288);
      v6 = 1;
      v4 = 0;
    }
    else
    {
      v6 = v4 + 1;
    }
    *(_DWORD *)(v0 + 256) = v6;
    *(_BYTE *)(v0 + v4) = v7;
    ++v5;
    *(_BYTE *)(v0 + 260) = v7;
    if ( v5 == v1 )
      v3 = sub_3C43B6(v3);
    v4 = v6;
  }
}


//======================================================================
// sub_3C3AF0
// address: 0x003C3AF0   size: 0x26 (38 bytes)
//======================================================================
void __fastcall __noreturn sub_3C3AF0(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r6
  int v6; // r0
  int v7; // r3

  *(_DWORD *)(v4 + 256) = a3;
  *(_BYTE *)(v4 + a4) = 123;
  *(_BYTE *)(v4 + 260) = 123;
  v6 = sub_3C5938(v4, STACK[0x1A8], v5);
  v7 = *(_DWORD *)(v4 + 256);
  if ( v7 == 255 )
    sub_3C4F9E(v6);
  sub_3C3B16(v6, v7 + 1);
}


//======================================================================
// sub_3C3B16
// address: 0x003C3B16   size: 0x3A (58 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C3B16  MOVS    R2, #0x100
//   003C3B1A  STR     R1, [R4,R2]
//   003C3B1C  MOVS    R2, #0x7D ; '}'
//   003C3B1E  STRB    R2, [R4,R3]
//   003C3B20  MOVS    R3, #0x104
//   003C3B24  STRB    R2, [R4,R3]
//   003C3B26  BL      sub_3C2A38
//   003C3B2A  LDR     R2, [R2,#4]; jumptable 003C2A4C cases 46,47
//   003C3B2C  CMP     R2, #0
//   003C3B2E  BEQ     loc_3C3B38
//   003C3B30  MOVS    R0, R4
//   003C3B32  LDR     R1, [SP,#arg_1A8]
//   003C3B34  BL      sub_3C5938
//   003C3B38  LDR     R6, [R5,#8]
//   003C3B3A  CMP     R6, #0
//   003C3B3C  BNE     loc_3C3B42
//   003C3B3E  BL      sub_3C2A38
//   003C3B42  MOVS    R6, #0x100
//   003C3B46  LDR     R1, [R4,R6]
//   003C3B48  CMP     R1, #0xFD
//   003C3B4A  BLS     sub_3C3B50
//   003C3B4C  BL      sub_3C4E10

//======================================================================
// sub_3C3B50
// address: 0x003C3B50   size: 0x68 (104 bytes)
//======================================================================
void __fastcall __noreturn sub_3C3B50(int a1, int a2)
{
  int v2; // r4
  const char *v3; // r6
  int v4; // r3
  char v5; // r7

  v3 = ", ";
  while ( 1 )
  {
    v5 = *v3;
    if ( a2 == 255 )
    {
      *(_BYTE *)(v2 + 255) = 0;
      (*(void (__fastcall **)(int, int, _DWORD))(v2 + 264))(v2, 255, *(_DWORD *)(v2 + 268));
      a2 = 0;
      ++*(_DWORD *)(v2 + 288);
      v4 = 1;
    }
    else
    {
      v4 = a2 + 1;
    }
    *(_DWORD *)(v2 + 256) = v4;
    ++v3;
    *(_BYTE *)(v2 + a2) = v5;
    *(_BYTE *)(v2 + 260) = v5;
    if ( v3 == "" )
      sub_3C48FC();
    a2 = v4;
  }
}


//======================================================================
// sub_3C3BC4
// address: 0x003C3BC4   size: 0x2A (42 bytes)
//======================================================================
void __noreturn sub_3C3BC4()
{
  int v0; // r4
  int v1; // r5
  int v2; // r2
  int v3; // r0
  int v4; // r1
  int v5; // r2

  v2 = *(_DWORD *)(v1 + 4);
  if ( *(char ***)(v2 + 4) == &off_455028 )
    sub_3C4C14();
  v3 = sub_3C5938(v0, STACK[0x1A8], v2);
  v5 = *(_DWORD *)(v0 + 256);
  if ( v5 == 255 )
    sub_3C53AE(v3);
  sub_3C3BEE(v3, v4, v5, v5 + 1);
}


//======================================================================
// sub_3C3BEE
// address: 0x003C3BEE   size: 0x10 (16 bytes)
//======================================================================
void __fastcall __noreturn sub_3C3BEE(int a1, int a2, int a3, int a4)
{
  int v4; // r4

  *(_DWORD *)(v4 + 256) = a4;
  *(_BYTE *)(v4 + a3) = 32;
  *(_BYTE *)(v4 + 260) = 32;
  sub_3C3BFE();
}


//======================================================================
// sub_3C3BFE
// address: 0x003C3BFE   size: 0x6A (106 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C3BFE  MOVS    R6, #8
//   003C3C00  LDRSH   R2, [R5,R6]
//   003C3C02  CMP     R2, #0
//   003C3C04  BNE     loc_3C3C0A
//   003C3C06  BL      sub_3C4994
//   003C3C0A  MOVS    R2, #0x108
//   003C3C0E  LDR     R5, =(aAccum - 0x3C3C18); "_Accum"
//   003C3C10  MOV     R9, R2
//   003C3C12  MOVS    R2, #0x86
//   003C3C14  ADD     R5, PC; "_Accum"
//   003C3C16  MOVS    R0, #0
//   003C3C18  LSLS    R2, R2, #1
//   003C3C1A  ADDS    R7, R5, #(aAccum+6 - 0x44E6EC); ""
//   003C3C1C  MOV     R10, R0
//   003C3C1E  MOV     R8, R2
//   003C3C20  B       loc_3C3C3E
//   003C3C22  ADDS    R2, R3, #1
//   003C3C24  MOVS    R1, #0x100
//   003C3C28  STR     R2, [R4,R1]
//   003C3C2A  STRB    R6, [R4,R3]
//   003C3C2C  MOVS    R3, #0x104
//   003C3C30  ADDS    R5, #1
//   003C3C32  STRB    R6, [R4,R3]
//   003C3C34  CMP     R5, R7
//   003C3C36  BNE     loc_3C3C3C
//   003C3C38  BL      sub_3C2A38
//   003C3C3C  MOVS    R3, R2
//   003C3C3E  LDRB    R6, [R5]
//   003C3C40  CMP     R3, #0xFF
//   003C3C42  BNE     loc_3C3C22
//   003C3C44  MOV     R1, R10
//   003C3C46  STRB    R1, [R4,R3]
//   003C3C48  MOV     R2, R8
//   003C3C4A  MOV     R3, R9
//   003C3C4C  LDR     R2, [R4,R2]
//   003C3C4E  LDR     R3, [R4,R3]
//   003C3C50  MOVS    R0, R4
//   003C3C52  MOVS    R1, #0xFF
//   003C3C54  STR     R2, [SP,#arg_B4]
//   003C3C56  BLX     R3
//   003C3C58  MOVS    R3, #0x120
//   003C3C5C  LDR     R2, [R4,R3]
//   003C3C5E  ADDS    R2, #1
//   003C3C60  STR     R2, [R4,R3]
//   003C3C62  MOVS    R2, #1
//   003C3C64  MOVS    R3, #0
//   003C3C66  B       loc_3C3C24

//======================================================================
// sub_3C3D94
// address: 0x003C3D94   size: 0x96 (150 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C3D94  MOVS    R2, #0x100
//   003C3D98  STR     R1, [R4,R2]
//   003C3D9A  STRB    R5, [R4,R3]
//   003C3D9C  MOVS    R3, #0x104
//   003C3DA0  STRB    R5, [R4,R3]
//   003C3DA2  BL      sub_3C2A38
//   003C3DA6  MOVS    R0, R4; jumptable 003C2A4C case 62
//   003C3DA8  LDR     R1, [SP,#arg_1A8]
//   003C3DAA  LDR     R2, [R2,#4]
//   003C3DAC  BL      sub_3C5938
//   003C3DB0  LDR     R2, [R5,#8]
//   003C3DB2  MOVS    R0, R4
//   003C3DB4  LDR     R1, [SP,#arg_1A8]
//   003C3DB6  BL      sub_3C5938
//   003C3DBA  BL      sub_3C2A38
//   003C3DBE  MOVS    R2, #0x108; jumptable 003C2A4C case 61
//   003C3DC2  LDR     R6, =(aJavaResource - 0x3C3DD0); "java resource "
//   003C3DC4  MOV     R10, R2
//   003C3DC6  MOVS    R2, #0x10C
//   003C3DCA  MOVS    R3, #0x80
//   003C3DCC  ADD     R6, PC; "java resource "
//   003C3DCE  MOVS    R7, #(aJavaResource+0xE - 0x44E73C); ""
//   003C3DD0  LSLS    R3, R3, #1
//   003C3DD2  ADDS    R7, R7, R6; ""
//   003C3DD4  MOVS    R0, #0
//   003C3DD6  MOV     R9, R2
//   003C3DD8  MOVS    R2, R5
//   003C3DDA  LDR     R3, [R4,R3]
//   003C3DDC  MOV     R11, R0
//   003C3DDE  MOVS    R5, R7
//   003C3DE0  MOV     R8, R2
//   003C3DE2  B       loc_3C3E00
//   003C3DE4  ADDS    R2, R3, #1
//   003C3DE6  MOVS    R1, #0x100
//   003C3DEA  STR     R2, [R4,R1]
//   003C3DEC  STRB    R7, [R4,R3]
//   003C3DEE  MOVS    R3, #0x104
//   003C3DF2  ADDS    R6, #1
//   003C3DF4  STRB    R7, [R4,R3]
//   003C3DF6  CMP     R6, R5
//   003C3DF8  BNE     loc_3C3DFE
//   003C3DFA  BL      sub_3C464C
//   003C3DFE  MOVS    R3, R2
//   003C3E00  LDRB    R7, [R6]
//   003C3E02  CMP     R3, #0xFF
//   003C3E04  BNE     loc_3C3DE4
//   003C3E06  MOV     R1, R11
//   003C3E08  STRB    R1, [R4,R3]
//   003C3E0A  MOV     R2, R9
//   003C3E0C  MOV     R3, R10
//   003C3E0E  LDR     R2, [R4,R2]
//   003C3E10  LDR     R3, [R4,R3]
//   003C3E12  MOVS    R0, R4
//   003C3E14  MOVS    R1, #0xFF
//   003C3E16  STR     R2, [SP,#arg_74]
//   003C3E18  BLX     R3
//   003C3E1A  MOVS    R3, #0x120
//   003C3E1E  LDR     R2, [R4,R3]
//   003C3E20  ADDS    R2, #1
//   003C3E22  STR     R2, [R4,R3]
//   003C3E24  MOVS    R2, #1
//   003C3E26  MOVS    R3, #0
//   003C3E28  B       loc_3C3DE6

//======================================================================
// sub_3C3E5A
// address: 0x003C3E5A   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3C3E5A(__int64 a1)
{
  int v1; // r4
  int v2; // r3

  v2 = *(_DWORD *)(v1 + 256);
  if ( v2 == 255 )
    a1 = sub_3C52AC();
  return sub_3C3E6A(a1, HIDWORD(a1), v2 + 1);
}


//======================================================================
// sub_3C3E6A
// address: 0x003C3E6A   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_3C3E6A(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  _DWORD *v5; // r5
  int v6; // r0
  int v7; // r3

  *(_DWORD *)(v4 + 256) = a3;
  *(_BYTE *)(v4 + a4) = 40;
  *(_BYTE *)(v4 + 260) = 40;
  v6 = sub_3C5938(v4, STACK[0x1A8], v5[1]);
  v7 = *(_DWORD *)(v4 + 256);
  if ( v7 == 255 )
    sub_3C525E(v6);
  *(_DWORD *)(v4 + 256) = v7 + 1;
  *(_BYTE *)(v4 + v7) = 41;
  *(_BYTE *)(v4 + 260) = 41;
  if ( *v5 == 60 )
    sub_3C547E();
  return sub_3C3EA6();
}


//======================================================================
// sub_3C3EA6
// address: 0x003C3EA6   size: 0xB4 (180 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C3EA6  CMP     R6, #8
//   003C3EA8  BNE     loc_3C3EAE
//   003C3EAA  BL      sub_3C542C
//   003C3EAE  LDR     R2, [R5,#8]
//   003C3EB0  MOVS    R0, R4
//   003C3EB2  LDR     R1, [SP,#arg_1A8]
//   003C3EB4  BL      sub_3C5938
//   003C3EB8  BL      sub_3C2A38
//   003C3EBC  MOVS    R3, #0x8C; jumptable 003C2A4C cases 57,58
//   003C3EBE  MOVS    R2, #1
//   003C3EC0  LSLS    R3, R3, #1
//   003C3EC2  STR     R2, [R4,R3]
//   003C3EC4  BL      sub_3C2A38
//   003C3EC8  LDR     R3, [R2,#8]; jumptable 003C2A4C case 56
//   003C3ECA  LDR     R2, [R3]
//   003C3ECC  CMP     R2, #0x39 ; '9'
//   003C3ECE  BEQ     loc_3C3ED2
//   003C3ED0  B       loc_3C392E
//   003C3ED2  LDR     R1, [R3,#8]
//   003C3ED4  LDR     R6, [R1]
//   003C3ED6  CMP     R6, #0x3A ; ':'
//   003C3ED8  BEQ     loc_3C3EDC
//   003C3EDA  B       loc_3C392E
//   003C3EDC  LDR     R5, [R5,#4]
//   003C3EDE  LDR     R6, [R3,#4]
//   003C3EE0  MOV     R8, R5
//   003C3EE2  MOV     R0, R8
//   003C3EE4  LDR     R7, [R1,#4]
//   003C3EE6  LDR     R5, [R1,#8]
//   003C3EE8  LDR     R3, [R0,#4]
//   003C3EEA  LDR     R1, =(aQu - 0x3C3EF2); "qu"
//   003C3EEC  LDR     R0, [R3]; char *
//   003C3EEE  ADD     R1, PC; "qu"
//   003C3EF0  BL      j_strcmp
//   003C3EF4  CMP     R0, #0
//   003C3EF6  BNE     loc_3C3EFC
//   003C3EF8  BL      sub_3C5656
//   003C3EFC  LDR     R1, =(aNew_0 - 0x3C3F04); "new "
//   003C3EFE  MOVS    R0, R4; int
//   003C3F00  ADD     R1, PC; "new "
//   003C3F02  BL      sub_3C298C
//   003C3F06  LDR     R1, [R6,#4]
//   003C3F08  CMP     R1, #0
//   003C3F0A  BEQ     loc_3C3F1E
//   003C3F0C  MOVS    R0, R4
//   003C3F0E  LDR     R1, [SP,#arg_1A8]
//   003C3F10  MOVS    R2, R6
//   003C3F12  BL      sub_3C6938
//   003C3F16  MOVS    R0, R4
//   003C3F18  MOVS    R1, #0x20 ; ' '
//   003C3F1A  BL      sub_3C0C78
//   003C3F1E  MOVS    R0, R4
//   003C3F20  LDR     R1, [SP,#arg_1A8]
//   003C3F22  MOVS    R2, R7
//   003C3F24  BL      sub_3C5938
//   003C3F28  CMP     R5, #0
//   003C3F2A  BNE     loc_3C3F30
//   003C3F2C  BL      sub_3C2A38
//   003C3F30  MOVS    R0, R4
//   003C3F32  LDR     R1, [SP,#arg_1A8]
//   003C3F34  MOVS    R2, R5
//   003C3F36  BL      sub_3C6938
//   003C3F3A  BL      sub_3C2A38
//   003C3F3E  LDR     R6, [SP,#arg_1A8]; jumptable 003C2A4C case 41
//   003C3F40  LSLS    R6, R6, #0x1A
//   003C3F42  BPL     loc_3C3F48
//   003C3F44  BL      sub_3C4CBA
//   003C3F48  LDR     R7, [R2,#4]
//   003C3F4A  CMP     R7, #0
//   003C3F4C  BEQ     sub_3C3F5A
//   003C3F4E  LDR     R6, [SP,#arg_1A8]
//   003C3F50  MOVS    R3, #0x40 ; '@'
//   003C3F52  ANDS    R3, R6
//   003C3F54  BNE     sub_3C3F5A
//   003C3F56  BL      sub_3C521E

//======================================================================
// sub_3C3F5A
// address: 0x003C3F5A   size: 0xAC (172 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C3F5A  LDR     R1, [SP,#arg_1A8]
//   003C3F5C  MOVS    R3, #0x60 ; '`'
//   003C3F5E  BICS    R1, R3
//   003C3F60  MOVS    R3, #0x8A
//   003C3F62  MOVS    R2, R5
//   003C3F64  LSLS    R3, R3, #1
//   003C3F66  ADDS    R2, #8
//   003C3F68  LDR     R3, [R4,R3]
//   003C3F6A  MOVS    R0, R4
//   003C3F6C  BL      sub_3C64AC
//   003C3F70  BL      sub_3C2A38
//   003C3F74  LDR     R2, [R2,#4]; jumptable 003C2A4C case 40
//   003C3F76  MOVS    R0, R4
//   003C3F78  LDR     R1, [SP,#arg_1A8]
//   003C3F7A  BL      sub_3C5938
//   003C3F7E  BL      sub_3C2A38
//   003C3F82  LDR     R6, [SP,#arg_1A8]; jumptable 003C2A4C case 39
//   003C3F84  LDR     R3, [R2,#4]
//   003C3F86  LSLS    R6, R6, #0x1D
//   003C3F88  BPL     loc_3C3F8E
//   003C3F8A  BL      sub_3C4AEC
//   003C3F8E  LDR     R7, [R3]
//   003C3F90  MOV     R8, R7
//   003C3F92  LDR     R7, [R3,#4]
//   003C3F94  CMP     R7, #0
//   003C3F96  BNE     loc_3C3F9C
//   003C3F98  BL      sub_3C2A38
//   003C3F9C  MOVS    R2, #0x108
//   003C3FA0  MOV     R10, R2
//   003C3FA2  MOVS    R2, #0x10C
//   003C3FA6  MOVS    R3, #0x100
//   003C3FAA  MOVS    R5, #0
//   003C3FAC  MOV     R9, R2
//   003C3FAE  MOVS    R2, R7
//   003C3FB0  LDR     R3, [R4,R3]
//   003C3FB2  MOV     R7, R8
//   003C3FB4  MOV     R11, R5
//   003C3FB6  MOV     R8, R2
//   003C3FB8  B       loc_3C3FD6
//   003C3FBA  ADDS    R2, R3, #1
//   003C3FBC  MOVS    R1, #0x100
//   003C3FC0  STR     R2, [R4,R1]
//   003C3FC2  STRB    R6, [R4,R3]
//   003C3FC4  MOVS    R3, #0x104
//   003C3FC8  ADDS    R5, #1
//   003C3FCA  STRB    R6, [R4,R3]
//   003C3FCC  CMP     R8, R5
//   003C3FCE  BNE     loc_3C3FD4
//   003C3FD0  BL      sub_3C2A38
//   003C3FD4  MOVS    R3, R2
//   003C3FD6  LDRB    R6, [R7,R5]
//   003C3FD8  CMP     R3, #0xFF
//   003C3FDA  BNE     loc_3C3FBA
//   003C3FDC  MOV     R1, R9
//   003C3FDE  MOV     R2, R10
//   003C3FE0  LDR     R1, [R4,R1]
//   003C3FE2  LDR     R2, [R4,R2]
//   003C3FE4  STR     R1, [SP,#arg_CC]
//   003C3FE6  STR     R2, [SP,#arg_C8]
//   003C3FE8  MOV     R0, R11
//   003C3FEA  STRB    R0, [R4,R3]
//   003C3FEC  LDR     R2, [SP,#arg_CC]
//   003C3FEE  LDR     R3, [SP,#arg_C8]
//   003C3FF0  MOVS    R0, R4
//   003C3FF2  MOVS    R1, #0xFF
//   003C3FF4  BLX     R3
//   003C3FF6  MOVS    R3, #0x120
//   003C3FFA  LDR     R2, [R4,R3]
//   003C3FFC  ADDS    R2, #1
//   003C3FFE  STR     R2, [R4,R3]
//   003C4000  MOVS    R2, #1
//   003C4002  MOVS    R3, #0
//   003C4004  B       loc_3C3FBC

//======================================================================
// sub_3C4012
// address: 0x003C4012   size: 0x17C (380 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4012  CMP     R3, #0x23 ; '#'
//   003C4014  BNE     loc_3C401A
//   003C4016  BL      sub_3C4B64
//   003C401A  LDR     R2, [R5]
//   003C401C  CMP     R2, R3
//   003C401E  BNE     loc_3C4024
//   003C4020  BL      sub_3C4B64
//   003C4024  CMP     R3, #0x24 ; '$'
//   003C4026  BEQ     loc_3C402C
//   003C4028  BL      loc_3C2B80; jumptable 003C2A4C cases 28-34,37,38
//   003C402C  MOVS    R3, #0x8A
//   003C402E  ADD     R6, SP, #arg_1C8
//   003C4030  LSLS    R3, R3, #1
//   003C4032  LDR     R2, [R0,#4]
//   003C4034  LDR     R7, [R4,R3]
//   003C4036  STR     R6, [R4,R3]
//   003C4038  MOVS    R3, #0
//   003C403A  STR     R3, [R6,#8]
//   003C403C  MOVS    R3, #0x110
//   003C4040  LDR     R3, [R4,R3]
//   003C4042  STR     R7, [SP,#arg_1C8]
//   003C4044  STR     R5, [R6,#4]
//   003C4046  STR     R3, [R6,#0xC]
//   003C4048  CMP     R2, #0
//   003C404A  BEQ     loc_3C4050
//   003C404C  BL      sub_3C2BA0
//   003C4050  BL      sub_3C2B9E
//   003C4054  MOVS    R3, #0x114; jumptable 003C2A4C cases 43,45
//   003C4058  ADD     R6, SP, #arg_1C8
//   003C405A  LDR     R2, [R4,R3]
//   003C405C  STR     R6, [R4,R3]
//   003C405E  MOVS    R3, #0
//   003C4060  STR     R3, [SP,#arg_1D0]
//   003C4062  MOVS    R3, #0x110
//   003C4066  LDR     R3, [R4,R3]
//   003C4068  STR     R2, [SP,#arg_1C8]
//   003C406A  MOVS    R0, R4
//   003C406C  LDR     R1, [SP,#arg_1A8]
//   003C406E  LDR     R2, [R5,#8]
//   003C4070  STR     R3, [SP,#arg_1D4]
//   003C4072  STR     R5, [SP,#arg_1CC]
//   003C4074  BL      sub_3C5938
//   003C4078  LDR     R3, [R6,#8]
//   003C407A  CMP     R3, #0
//   003C407C  BNE     loc_3C4088
//   003C407E  MOVS    R0, R4
//   003C4080  LDR     R1, [SP,#arg_1A8]
//   003C4082  MOVS    R2, R5
//   003C4084  BL      sub_3C5958
//   003C4088  MOVS    R3, #0x114
//   003C408C  LDR     R5, [SP,#arg_1C8]
//   003C408E  STR     R5, [R4,R3]
//   003C4090  BL      sub_3C2A38
//   003C4094  MOVS    R0, #0x114; jumptable 003C2A4C case 42
//   003C4098  ADD     R6, SP, #arg_1C8
//   003C409A  LDR     R2, [R4,R0]
//   003C409C  MOVS    R3, #0
//   003C409E  STR     R2, [SP,#arg_1C8]
//   003C40A0  STR     R3, [R6,#8]
//   003C40A2  MOVS    R3, #0x110
//   003C40A6  LDR     R3, [R4,R3]
//   003C40A8  MOV     R8, R2
//   003C40AA  STR     R6, [R4,R0]
//   003C40AC  STR     R5, [R6,#4]
//   003C40AE  STR     R3, [R6,#0xC]
//   003C40B0  CMP     R2, #0
//   003C40B2  BNE     loc_3C40B8
//   003C40B4  BL      sub_3C5508
//   003C40B8  LDR     R3, [R2,#4]
//   003C40BA  LDR     R3, [R3]
//   003C40BC  SUBS    R3, #0x19
//   003C40BE  CMP     R3, #2
//   003C40C0  BLS     loc_3C40C6
//   003C40C2  BL      sub_3C5508
//   003C40C6  MOVS    R7, #1
//   003C40C8  MOVS    R3, R2
//   003C40CA  MOV     R12, R7
//   003C40CC  MOV     R11, R4
//   003C40CE  MOV     R9, R5
//   003C40D0  MOV     R10, R6
//   003C40D2  B       loc_3C40EA
//   003C40D4  DCD aJavaResource - 0x3C3DD0
//   003C40D8  DCD aQu - 0x3C3EF2
//   003C40DC  DCD aNew_0 - 0x3C3F04
//   003C40E0  LDR     R2, [R3,#4]
//   003C40E2  LDR     R2, [R2]
//   003C40E4  SUBS    R2, #0x19
//   003C40E6  CMP     R2, #2
//   003C40E8  BHI     loc_3C412A
//   003C40EA  LDR     R4, [R3,#8]
//   003C40EC  CMP     R4, #0
//   003C40EE  BNE     loc_3C4124
//   003C40F0  CMP     R7, #3
//   003C40F2  BLS     loc_3C40F8
//   003C40F4  BL      sub_3C5210
//   003C40F8  LSLS    R1, R7, #4
//   003C40FA  MOV     R5, R10
//   003C40FC  ADDS    R2, R5, R1
//   003C40FE  MOVS    R5, R3
//   003C4100  LDM     R5!, {R0,R4,R6}
//   003C4102  STM     R2!, {R0,R4,R6}
//   003C4104  MOVS    R6, #0x8A
//   003C4106  LDR     R5, [R5]
//   003C4108  STR     R5, [R2]
//   003C410A  LSLS    R6, R6, #1
//   003C410C  MOV     R5, R11
//   003C410E  LDR     R5, [R5,R6]
//   003C4110  MOVS    R2, #0x8A
//   003C4112  MOV     R6, R10
//   003C4114  STR     R5, [R6,R1]
//   003C4116  MOV     R0, R11
//   003C4118  ADD     R1, R10
//   003C411A  LSLS    R2, R2, #1
//   003C411C  MOV     R4, R12
//   003C411E  ADDS    R7, #1
//   003C4120  STR     R1, [R0,R2]
//   003C4122  STR     R4, [R3,#8]
//   003C4124  LDR     R3, [R3]
//   003C4126  CMP     R3, #0
//   003C4128  BNE     loc_3C40E0
//   003C412A  MOV     R5, R9
//   003C412C  MOV     R0, R11
//   003C412E  LDR     R1, [SP,#arg_1A8]
//   003C4130  MOV     R6, R10
//   003C4132  LDR     R2, [R5,#8]
//   003C4134  BL      sub_3C5938
//   003C4138  MOVS    R3, #0x8A
//   003C413A  LDR     R1, [R6,#8]
//   003C413C  MOV     R4, R11
//   003C413E  LSLS    R3, R3, #1
//   003C4140  MOV     R0, R8
//   003C4142  STR     R0, [R4,R3]
//   003C4144  CMP     R1, #0
//   003C4146  BEQ     loc_3C414C
//   003C4148  BL      sub_3C2A38
//   003C414C  CMP     R7, #1
//   003C414E  BNE     loc_3C4154
//   003C4150  BL      sub_3C5524
//   003C4154  SUBS    R7, #1
//   003C4156  LSLS    R3, R7, #4
//   003C4158  ADDS    R6, R6, R3
//   003C415A  LDR     R4, [SP,#arg_1A8]
//   003C415C  ADDS    R6, #4
//   003C415E  MOV     R5, R11
//   003C4160  LDR     R2, [R6]
//   003C4162  MOVS    R0, R5
//   003C4164  MOVS    R1, R4
//   003C4166  MOV     R8, R9
//   003C4168  BL      sub_3C5958
//   003C416C  SUBS    R6, #0x10
//   003C416E  CMP     R7, #1
//   003C4170  BEQ     loc_3C4184
//   003C4172  LDR     R2, [R6]
//   003C4174  MOVS    R0, R5
//   003C4176  MOVS    R1, R4
//   003C4178  SUBS    R7, #1
//   003C417A  BL      sub_3C5958
//   003C417E  SUBS    R6, #0x10
//   003C4180  CMP     R7, #1
//   003C4182  BNE     loc_3C4172
//   003C4184  MOVS    R3, #0x8A
//   003C4186  MOVS    R4, R5
//   003C4188  LSLS    R3, R3, #1
//   003C418A  LDR     R3, [R4,R3]
//   003C418C  MOV     R5, R8

//======================================================================
// sub_3C418E
// address: 0x003C418E   size: 0x7C (124 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C418E  ADDS    R2, R5, #4
//   003C4190  MOVS    R0, R4
//   003C4192  LDR     R1, [SP,#arg_1A8]
//   003C4194  BL      sub_3C62D4
//   003C4198  BL      sub_3C2A38
//   003C419C  MOVS    R2, #0x108; jumptable 003C2A4C case 70
//   003C41A0  LDR     R6, =(aUnnamedType - 0x3C41AE); "{unnamed type#"
//   003C41A2  MOV     R11, R2
//   003C41A4  MOVS    R2, #0x10C
//   003C41A8  MOVS    R3, #0x80
//   003C41AA  ADD     R6, PC; "{unnamed type#"
//   003C41AC  MOVS    R7, #(aUnnamedType+0xE - 0x44E7BC); ""
//   003C41AE  LSLS    R3, R3, #1
//   003C41B0  ADDS    R7, R7, R6; ""
//   003C41B2  MOV     R10, R2
//   003C41B4  MOVS    R2, R5
//   003C41B6  LDR     R3, [R4,R3]
//   003C41B8  MOVS    R5, R7
//   003C41BA  MOV     R9, R2
//   003C41BC  B       loc_3C41DA
//   003C41BE  ADDS    R2, R3, #1
//   003C41C0  MOVS    R1, #0x100
//   003C41C4  STR     R2, [R4,R1]
//   003C41C6  STRB    R7, [R4,R3]
//   003C41C8  MOVS    R3, #0x104
//   003C41CC  ADDS    R6, #1
//   003C41CE  MOV     R8, R1
//   003C41D0  STRB    R7, [R4,R3]
//   003C41D2  CMP     R6, R5
//   003C41D4  BNE     loc_3C41D8
//   003C41D6  B       loc_3C4714
//   003C41D8  MOVS    R3, R2
//   003C41DA  LDRB    R7, [R6]
//   003C41DC  CMP     R3, #0xFF
//   003C41DE  BNE     loc_3C41BE
//   003C41E0  MOV     R1, R10
//   003C41E2  MOV     R2, R11
//   003C41E4  LDR     R1, [R4,R1]
//   003C41E6  LDR     R2, [R4,R2]
//   003C41E8  STR     R1, [SP,#arg_1C]
//   003C41EA  STR     R2, [SP,#arg_18]
//   003C41EC  MOVS    R0, #0
//   003C41EE  STRB    R0, [R4,R3]
//   003C41F0  LDR     R2, [SP,#arg_1C]
//   003C41F2  LDR     R3, [SP,#arg_18]
//   003C41F4  MOVS    R0, R4
//   003C41F6  MOVS    R1, #0xFF
//   003C41F8  BLX     R3
//   003C41FA  MOVS    R3, #0x120
//   003C41FE  LDR     R2, [R4,R3]
//   003C4200  ADDS    R2, #1
//   003C4202  STR     R2, [R4,R3]
//   003C4204  MOVS    R2, #1
//   003C4206  MOVS    R3, #0
//   003C4208  B       loc_3C41C0

//======================================================================
// sub_3C43B6
// address: 0x003C43B6   size: 0x12 (18 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C43B6  MOVS    R6, #1
//   003C43B8  LDR     R5, [SP,#arg_1BC]
//   003C43BA  ADD     R11, R6
//   003C43BC  CMP     R11, R5
//   003C43BE  BEQ     loc_3C43C4
//   003C43C0  BL      sub_3C3828
//   003C43C4  BL      sub_3C2A38

//======================================================================
// sub_3C43C8
// address: 0x003C43C8   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_3C43C8(int a1, int a2, int a3, int a4)
{
  int v4; // r5
  int v5; // r7
  _DWORD *v6; // r3
  int v7; // r0

  if ( *(_DWORD *)(v5 + 4) == 0 )
    a1 = sub_3C5472();
  v6 = (_DWORD *)(a4 + 16);
  if ( a2 == 4 )
    JUMPOUT(0x3C4932);
  v7 = sub_3C3368(a1, a2, v4, v6);
  return sub_3C43E0(v7);
}


//======================================================================
// sub_3C43E0
// address: 0x003C43E0   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C43E0  MOV     R5, R8
//   003C43E2  LDR     R2, [R5,#4]
//   003C43E4  MOVS    R0, R4
//   003C43E6  LDR     R1, [SP,#arg_1A8]
//   003C43E8  BL      sub_3C5938
//   003C43EC  BL      sub_3C2A38

//======================================================================
// sub_3C43F0
// address: 0x003C43F0   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C43F0  MOV     R5, R8
//   003C43F2  LDR     R2, [R5,#4]
//   003C43F4  MOVS    R0, R4
//   003C43F6  LDR     R1, [SP,#arg_1A8]
//   003C43F8  BL      sub_3C5938
//   003C43FC  BL      sub_3C2A38

//======================================================================
// sub_3C4400
// address: 0x003C4400   size: 0x80 (128 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4400  MOV     R5, R9
//   003C4402  LDR     R2, [R5,#8]
//   003C4404  MOVS    R0, R4
//   003C4406  LDR     R1, [SP,#arg_1A8]
//   003C4408  BL      sub_3C5938
//   003C440C  MOV     R6, R8
//   003C440E  MOVS    R2, #0x108
//   003C4412  LDR     R3, [R4,R6]
//   003C4414  LDR     R6, =(aFor - 0x3C4420); " for "
//   003C4416  MOV     R10, R2
//   003C4418  MOVS    R2, #0x10C
//   003C441C  ADD     R6, PC; " for "
//   003C441E  ADDS    R7, R6, #(aFor+5 - 0x44E694); ""
//   003C4420  MOVS    R0, #0
//   003C4422  MOV     R9, R2
//   003C4424  MOVS    R2, R5
//   003C4426  MOV     R11, R0
//   003C4428  MOVS    R5, R7
//   003C442A  MOV     R8, R2
//   003C442C  B       loc_3C4446
//   003C442E  ADDS    R2, R3, #1
//   003C4430  MOVS    R1, #0x100
//   003C4434  STR     R2, [R4,R1]
//   003C4436  STRB    R7, [R4,R3]
//   003C4438  MOVS    R3, #0x104
//   003C443C  ADDS    R6, #1
//   003C443E  STRB    R7, [R4,R3]
//   003C4440  CMP     R6, R5
//   003C4442  BEQ     loc_3C4470
//   003C4444  MOVS    R3, R2
//   003C4446  LDRB    R7, [R6]
//   003C4448  CMP     R3, #0xFF
//   003C444A  BNE     loc_3C442E
//   003C444C  MOV     R1, R11
//   003C444E  STRB    R1, [R4,R3]
//   003C4450  MOV     R2, R9
//   003C4452  MOV     R3, R10
//   003C4454  LDR     R2, [R4,R2]
//   003C4456  LDR     R3, [R4,R3]
//   003C4458  MOVS    R0, R4
//   003C445A  MOVS    R1, #0xFF
//   003C445C  STR     R2, [SP,#arg_F4]
//   003C445E  BLX     R3
//   003C4460  MOVS    R3, #0x120
//   003C4464  LDR     R2, [R4,R3]
//   003C4466  ADDS    R2, #1
//   003C4468  STR     R2, [R4,R3]
//   003C446A  MOVS    R2, #1
//   003C446C  MOVS    R3, #0
//   003C446E  B       loc_3C4430
//   003C4470  MOV     R5, R8
//   003C4472  LDR     R2, [R5,#4]
//   003C4474  MOVS    R0, R4
//   003C4476  LDR     R1, [SP,#arg_1A8]
//   003C4478  BL      sub_3C5938
//   003C447C  BL      sub_3C2A38

//======================================================================
// sub_3C4480
// address: 0x003C4480   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4480  MOV     R5, R8
//   003C4482  LDR     R2, [R5,#4]
//   003C4484  MOVS    R0, R4
//   003C4486  LDR     R1, [SP,#arg_1A8]
//   003C4488  BL      sub_3C5938
//   003C448C  BL      sub_3C2A38

//======================================================================
// sub_3C4490
// address: 0x003C4490   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4490  MOV     R5, R8
//   003C4492  LDR     R2, [R5,#4]
//   003C4494  MOVS    R0, R4
//   003C4496  LDR     R1, [SP,#arg_1A8]
//   003C4498  BL      sub_3C5938
//   003C449C  BL      sub_3C2A38

//======================================================================
// sub_3C44A0
// address: 0x003C44A0   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C44A0  MOV     R5, R8
//   003C44A2  LDR     R2, [R5,#4]
//   003C44A4  MOVS    R0, R4
//   003C44A6  LDR     R1, [SP,#arg_1A8]
//   003C44A8  BL      sub_3C5938
//   003C44AC  BL      sub_3C2A38

//======================================================================
// sub_3C44B0
// address: 0x003C44B0   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C44B0  MOV     R5, R8
//   003C44B2  LDR     R2, [R5,#4]
//   003C44B4  MOVS    R0, R4
//   003C44B6  LDR     R1, [SP,#arg_1A8]
//   003C44B8  BL      sub_3C5938
//   003C44BC  BL      sub_3C2A38

//======================================================================
// sub_3C44C0
// address: 0x003C44C0   size: 0x1A (26 bytes)
//======================================================================
int sub_3C44C0()
{
  int v0; // r4
  int v1; // r8
  int v2; // r9
  int v3; // r0
  int v4; // r3

  v3 = sub_3C5938(v0, STACK[0x1A8], *(_DWORD *)(v2 + 8));
  v4 = *(_DWORD *)(v0 + v1);
  if ( v4 == 255 )
    v3 = sub_3C4FEE(v3);
  return sub_3C44DA(v3, v4 + 1);
}


//======================================================================
// sub_3C44DA
// address: 0x003C44DA   size: 0x14 (20 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C44DA  MOVS    R2, #0x100
//   003C44DE  STR     R1, [R4,R2]
//   003C44E0  MOVS    R2, #0x5D ; ']'
//   003C44E2  STRB    R2, [R4,R3]
//   003C44E4  MOVS    R3, #0x104
//   003C44E8  STRB    R2, [R4,R3]
//   003C44EA  BL      sub_3C2A38

//======================================================================
// sub_3C44EE
// address: 0x003C44EE   size: 0x1A (26 bytes)
//======================================================================
int sub_3C44EE()
{
  int v0; // r4
  int v1; // r8
  int v2; // r9
  int v3; // r0
  int v4; // r3

  v3 = sub_3C5938(v0, STACK[0x1A8], *(_DWORD *)(v2 + 8));
  v4 = *(_DWORD *)(v0 + v1);
  if ( v4 == 255 )
    v3 = sub_3C5198(v3);
  return sub_3C4508(v3, v4 + 1);
}


//======================================================================
// sub_3C4508
// address: 0x003C4508   size: 0x130 (304 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4508  MOVS    R2, #0x100
//   003C450C  STR     R1, [R4,R2]
//   003C450E  MOVS    R2, #0x5D ; ']'
//   003C4510  STRB    R2, [R4,R3]
//   003C4512  MOVS    R3, #0x104
//   003C4516  STRB    R2, [R4,R3]
//   003C4518  BL      sub_3C2A38
//   003C451C  MOV     R5, R9
//   003C451E  LDR     R2, [R5,#4]
//   003C4520  MOVS    R0, R4
//   003C4522  LDR     R1, [SP,#arg_1A8]
//   003C4524  BL      sub_3C5938
//   003C4528  MOV     R6, R8
//   003C452A  MOVS    R2, #0x108
//   003C452E  LDR     R3, [R4,R6]
//   003C4530  LDR     R6, =(asc_44E7B8 - 0x3C453C); ")#"
//   003C4532  MOV     R11, R2
//   003C4534  MOVS    R2, #0x10C
//   003C4538  ADD     R6, PC; ")#"
//   003C453A  ADDS    R7, R6, #(asc_44E7B8+2 - 0x44E7B8); ""
//   003C453C  MOV     R10, R2
//   003C453E  MOVS    R2, R5
//   003C4540  MOV     R9, R2
//   003C4542  MOVS    R5, R7
//   003C4544  B       loc_3C457E
//   003C4546  ALIGN 4
//   003C4548  DCD aUnnamedType - 0x3C41AE
//   003C454C  DCD aTransactionClo - 0x3C421C
//   003C4550  DCD aGlobalDestruct - 0x3C4286
//   003C4554  DCD aGlobalConstruc - 0x3C42F0
//   003C4558  DCD aLambda - 0x3C435A
//   003C455C  DCD aFor - 0x3C4420
//   003C4560  DCD asc_44E7B8 - 0x3C453C
//   003C4564  ADDS    R2, R3, #1
//   003C4566  MOVS    R1, #0x100
//   003C456A  STR     R2, [R4,R1]
//   003C456C  STRB    R7, [R4,R3]
//   003C456E  MOVS    R3, #0x104
//   003C4572  ADDS    R6, #1
//   003C4574  MOV     R8, R1
//   003C4576  STRB    R7, [R4,R3]
//   003C4578  CMP     R6, R5
//   003C457A  BEQ     loc_3C45AE
//   003C457C  MOVS    R3, R2
//   003C457E  LDRB    R7, [R6]
//   003C4580  CMP     R3, #0xFF
//   003C4582  BNE     loc_3C4564
//   003C4584  MOV     R1, R10
//   003C4586  MOV     R2, R11
//   003C4588  LDR     R1, [R4,R1]
//   003C458A  LDR     R2, [R4,R2]
//   003C458C  STR     R1, [SP,#arg_2C]
//   003C458E  STR     R2, [SP,#arg_28]
//   003C4590  MOVS    R0, #0
//   003C4592  STRB    R0, [R4,R3]
//   003C4594  LDR     R2, [SP,#arg_2C]
//   003C4596  LDR     R3, [SP,#arg_28]
//   003C4598  MOVS    R0, R4
//   003C459A  MOVS    R1, #0xFF
//   003C459C  BLX     R3
//   003C459E  MOVS    R3, #0x120
//   003C45A2  LDR     R2, [R4,R3]
//   003C45A4  ADDS    R2, #1
//   003C45A6  STR     R2, [R4,R3]
//   003C45A8  MOVS    R2, #1
//   003C45AA  MOVS    R3, #0
//   003C45AC  B       loc_3C4566
//   003C45AE  MOV     R5, R9
//   003C45B0  LDR     R2, [R5,#8]
//   003C45B2  LDR     R1, =(aLd_3 - 0x3C45BE); "%ld"
//   003C45B4  ADD     R6, SP, #s
//   003C45B6  ADDS    R2, #1
//   003C45B8  MOVS    R0, R6; s
//   003C45BA  ADD     R1, PC; "%ld"
//   003C45BC  BL      j_sprintf
//   003C45C0  MOVS    R0, R6; char *
//   003C45C2  BL      j_strlen
//   003C45C6  CMP     R0, #0
//   003C45C8  BEQ     loc_3C462A
//   003C45CA  MOVS    R2, #0x108
//   003C45CE  MOV     R10, R2
//   003C45D0  MOVS    R2, #0x10C
//   003C45D4  MOV     R7, R8
//   003C45D6  MOVS    R5, #0
//   003C45D8  MOV     R8, R2
//   003C45DA  MOVS    R2, R6
//   003C45DC  LDR     R3, [R4,R7]
//   003C45DE  MOV     R11, R5
//   003C45E0  MOVS    R6, R0
//   003C45E2  MOV     R9, R2
//   003C45E4  B       loc_3C45FE
//   003C45E6  ADDS    R2, R3, #1
//   003C45E8  MOVS    R1, #0x100
//   003C45EC  STR     R2, [R4,R1]
//   003C45EE  STRB    R7, [R4,R3]
//   003C45F0  MOVS    R3, #0x104
//   003C45F4  ADDS    R5, #1
//   003C45F6  STRB    R7, [R4,R3]
//   003C45F8  CMP     R5, R6
//   003C45FA  BEQ     loc_3C462E
//   003C45FC  MOVS    R3, R2
//   003C45FE  MOV     R0, R9
//   003C4600  LDRB    R7, [R0,R5]
//   003C4602  CMP     R3, #0xFF
//   003C4604  BNE     loc_3C45E6
//   003C4606  MOV     R1, R11
//   003C4608  STRB    R1, [R4,R3]
//   003C460A  MOV     R2, R8
//   003C460C  MOV     R3, R10
//   003C460E  LDR     R2, [R4,R2]
//   003C4610  LDR     R3, [R4,R3]
//   003C4612  MOVS    R0, R4
//   003C4614  MOVS    R1, #0xFF
//   003C4616  STR     R2, [SP,#arg_24]
//   003C4618  BLX     R3
//   003C461A  MOVS    R3, #0x120
//   003C461E  LDR     R2, [R4,R3]
//   003C4620  ADDS    R2, #1
//   003C4622  STR     R2, [R4,R3]
//   003C4624  MOVS    R2, #1
//   003C4626  MOVS    R3, #0
//   003C4628  B       loc_3C45E8
//   003C462A  MOV     R5, R8
//   003C462C  LDR     R2, [R4,R5]
//   003C462E  CMP     R2, #0xFF
//   003C4630  BNE     loc_3C4636
//   003C4632  BL      sub_3C4E6C
//   003C4636  ADDS    R1, R2, #1

//======================================================================
// sub_3C4638
// address: 0x003C4638   size: 0x14 (20 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4638  MOVS    R3, #0x100
//   003C463C  STR     R1, [R4,R3]
//   003C463E  MOVS    R3, #0x7D ; '}'
//   003C4640  STRB    R3, [R4,R2]
//   003C4642  MOVS    R2, #0x104
//   003C4646  STRB    R3, [R4,R2]
//   003C4648  BL      sub_3C2A38

//======================================================================
// sub_3C464C
// address: 0x003C464C   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C464C  MOV     R5, R8
//   003C464E  LDR     R2, [R5,#4]
//   003C4650  MOVS    R0, R4
//   003C4652  LDR     R1, [SP,#arg_1A8]
//   003C4654  BL      sub_3C5938
//   003C4658  BL      sub_3C2A38

//======================================================================
// sub_3C465C
// address: 0x003C465C   size: 0x88 (136 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C465C  MOV     R6, R8
//   003C465E  LDR     R5, [R6,#4]
//   003C4660  LDRB    R3, [R5]
//   003C4662  SUBS    R3, #0x61 ; 'a'
//   003C4664  LSLS    R3, R3, #0x18
//   003C4666  LSRS    R3, R3, #0x18
//   003C4668  CMP     R3, #0x19
//   003C466A  BHI     loc_3C466E
//   003C466C  B       loc_3C4CE6
//   003C466E  LDR     R6, [SP,#arg_1AC]
//   003C4670  ADDS    R3, R5, R6
//   003C4672  SUBS    R3, #1
//   003C4674  LDRB    R7, [R3]
//   003C4676  SUBS    R7, #0x20 ; ' '
//   003C4678  NEGS    R3, R7
//   003C467A  ADCS    R7, R3
//   003C467C  SUBS    R7, R6, R7
//   003C467E  BNE     loc_3C4684
//   003C4680  BL      sub_3C2A38
//   003C4684  MOVS    R2, #0x108
//   003C4688  MOVS    R3, #0x80
//   003C468A  MOV     R9, R2
//   003C468C  MOVS    R2, #0x86
//   003C468E  LSLS    R3, R3, #1
//   003C4690  MOVS    R0, #0
//   003C4692  LSLS    R2, R2, #1
//   003C4694  LDR     R3, [R4,R3]
//   003C4696  ADDS    R7, R5, R7
//   003C4698  MOV     R10, R0
//   003C469A  MOV     R8, R2
//   003C469C  B       loc_3C46BA
//   003C469E  ADDS    R2, R3, #1
//   003C46A0  MOVS    R1, #0x100
//   003C46A4  STR     R2, [R4,R1]
//   003C46A6  STRB    R6, [R4,R3]
//   003C46A8  MOVS    R3, #0x104
//   003C46AC  ADDS    R5, #1
//   003C46AE  STRB    R6, [R4,R3]
//   003C46B0  CMP     R5, R7
//   003C46B2  BNE     loc_3C46B8
//   003C46B4  BL      sub_3C2A38
//   003C46B8  MOVS    R3, R2
//   003C46BA  LDRB    R6, [R5]
//   003C46BC  CMP     R3, #0xFF
//   003C46BE  BNE     loc_3C469E
//   003C46C0  MOV     R1, R10
//   003C46C2  STRB    R1, [R4,R3]
//   003C46C4  MOV     R2, R8
//   003C46C6  MOV     R3, R9
//   003C46C8  LDR     R2, [R4,R2]
//   003C46CA  LDR     R3, [R4,R3]
//   003C46CC  MOVS    R0, R4
//   003C46CE  MOVS    R1, #0xFF
//   003C46D0  STR     R2, [SP,#arg_94]
//   003C46D2  BLX     R3
//   003C46D4  MOVS    R3, #0x120
//   003C46D8  LDR     R2, [R4,R3]
//   003C46DA  ADDS    R2, #1
//   003C46DC  STR     R2, [R4,R3]
//   003C46DE  MOVS    R2, #1
//   003C46E0  MOVS    R3, #0
//   003C46E2  B       loc_3C46A0

//======================================================================
// sub_3C47B0
// address: 0x003C47B0   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C47B0  MOV     R5, R8
//   003C47B2  LDR     R2, [R5,#4]
//   003C47B4  MOVS    R0, R4
//   003C47B6  LDR     R1, [SP,#arg_1A8]
//   003C47B8  BL      sub_3C5938
//   003C47BC  BL      sub_3C2A38

//======================================================================
// sub_3C47C0
// address: 0x003C47C0   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C47C0  MOV     R5, R8
//   003C47C2  ADDS    R2, R5, #4
//   003C47C4  MOVS    R0, R4
//   003C47C6  LDR     R1, [SP,#arg_1A8]
//   003C47C8  BL      sub_3C66D4
//   003C47CC  BL      sub_3C2A38

//======================================================================
// sub_3C47D0
// address: 0x003C47D0   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C47D0  MOV     R5, R8
//   003C47D2  LDR     R2, [R5,#8]
//   003C47D4  MOVS    R0, R4
//   003C47D6  LDR     R1, [SP,#arg_1A8]
//   003C47D8  BL      sub_3C5938
//   003C47DC  BL      sub_3C2A38

//======================================================================
// sub_3C47E0
// address: 0x003C47E0   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C47E0  MOV     R5, R8
//   003C47E2  LDR     R2, [R5,#4]
//   003C47E4  MOVS    R0, R4
//   003C47E6  LDR     R1, [SP,#arg_1A8]
//   003C47E8  BL      sub_3C5938
//   003C47EC  BL      sub_3C2A38

//======================================================================
// sub_3C47F0
// address: 0x003C47F0   size: 0x2C (44 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C47F0  MOV     R5, R9
//   003C47F2  LDR     R2, [R5,#4]
//   003C47F4  MOVS    R0, R4
//   003C47F6  LDR     R1, [SP,#arg_1A8]
//   003C47F8  MOV     R5, R8
//   003C47FA  BL      sub_3C5938
//   003C47FE  LDR     R3, [R4,R5]
//   003C4800  CMP     R3, #0xFF
//   003C4802  BNE     loc_3C4806
//   003C4804  B       loc_3C4EBA
//   003C4806  ADDS    R1, R3, #1
//   003C4808  MOVS    R2, #0x100
//   003C480C  STR     R1, [R4,R2]
//   003C480E  MOVS    R2, #0x29 ; ')'
//   003C4810  STRB    R2, [R4,R3]
//   003C4812  MOVS    R3, #0x104
//   003C4816  STRB    R2, [R4,R3]
//   003C4818  BL      sub_3C2A38

//======================================================================
// sub_3C481C
// address: 0x003C481C   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C481C  MOV     R5, R8
//   003C481E  LDR     R2, [R5,#4]
//   003C4820  MOVS    R0, R4
//   003C4822  LDR     R1, [SP,#arg_1A8]
//   003C4824  BL      sub_3C5938
//   003C4828  BL      sub_3C2A38

//======================================================================
// sub_3C482C
// address: 0x003C482C   size: 0x70 (112 bytes)
//======================================================================
void sub_3C482C()
{
  int v0; // r4
  int v1; // r8
  int v2; // r9
  int v3; // r3
  const char *v4; // r6
  int v5; // r2
  char v6; // r7
  void (__fastcall *v7)(int, int); // r3

  sub_3C5938(v0, STACK[0x1A8], *(_DWORD *)(v2 + 4));
  v3 = *(_DWORD *)(v0 + v1);
  v4 = "-in-";
  while ( 1 )
  {
    v6 = *v4;
    if ( v3 == 255 )
    {
      *(_BYTE *)(v0 + 255) = 0;
      v7 = *(void (__fastcall **)(int, int))(v0 + 264);
      STACK[0x154] = *(_DWORD *)(v0 + 268);
      v7(v0, 255);
      ++*(_DWORD *)(v0 + 288);
      v5 = 1;
      v3 = 0;
    }
    else
    {
      v5 = v3 + 1;
    }
    *(_DWORD *)(v0 + 256) = v5;
    *(_BYTE *)(v0 + v3) = v6;
    ++v4;
    *(_BYTE *)(v0 + 260) = v6;
    if ( v4 == "" )
      JUMPOUT(0x3C48AC);
    v3 = v5;
  }
}


//======================================================================
// sub_3C489C
// address: 0x003C489C   size: 0x20 (32 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C489C  MOV     R5, R8
//   003C489E  LDR     R2, [R5,#4]
//   003C48A0  MOVS    R0, R4
//   003C48A2  LDR     R1, [SP,#arg_1A8]
//   003C48A4  BL      sub_3C5938
//   003C48A8  BL      sub_3C2A38
//   003C48AC  MOV     R5, R8
//   003C48AE  LDR     R2, [R5,#8]
//   003C48B0  MOVS    R0, R4
//   003C48B2  LDR     R1, [SP,#arg_1A8]
//   003C48B4  BL      sub_3C5938
//   003C48B8  BL      sub_3C2A38

//======================================================================
// sub_3C48BC
// address: 0x003C48BC   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C48BC  MOV     R5, R8
//   003C48BE  LDR     R2, [R5,#4]
//   003C48C0  MOVS    R0, R4
//   003C48C2  LDR     R1, [SP,#arg_1A8]
//   003C48C4  BL      sub_3C5938
//   003C48C8  BL      sub_3C2A38

//======================================================================
// sub_3C48CC
// address: 0x003C48CC   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C48CC  MOV     R5, R8
//   003C48CE  LDR     R2, [R5,#4]
//   003C48D0  MOVS    R0, R4
//   003C48D2  LDR     R1, [SP,#arg_1A8]
//   003C48D4  BL      sub_3C5938
//   003C48D8  BL      sub_3C2A38

//======================================================================
// sub_3C48DC
// address: 0x003C48DC   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C48DC  MOV     R5, R8
//   003C48DE  LDR     R2, [R5,#4]
//   003C48E0  MOVS    R0, R4
//   003C48E2  LDR     R1, [SP,#arg_1A8]
//   003C48E4  BL      sub_3C5938
//   003C48E8  BL      sub_3C2A38

//======================================================================
// sub_3C48EC
// address: 0x003C48EC   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C48EC  MOV     R5, R8
//   003C48EE  LDR     R2, [R5,#4]
//   003C48F0  MOVS    R0, R4
//   003C48F2  LDR     R1, [SP,#arg_1A8]
//   003C48F4  BL      sub_3C5938
//   003C48F8  BL      sub_3C2A38

//======================================================================
// sub_3C48FC
// address: 0x003C48FC   size: 0x42 (66 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C48FC  MOV     R5, R10
//   003C48FE  MOVS    R6, #0x120
//   003C4902  LDR     R2, [R5,#8]
//   003C4904  MOVS    R0, R4
//   003C4906  LDR     R1, [SP,#arg_1A8]
//   003C4908  MOV     R8, R3
//   003C490A  LDR     R7, [R4,R6]
//   003C490C  BL      sub_3C5938
//   003C4910  LDR     R3, [R4,R6]
//   003C4912  CMP     R7, R3
//   003C4914  BEQ     loc_3C491A
//   003C4916  BL      sub_3C2A38
//   003C491A  MOV     R5, R9
//   003C491C  LDR     R5, [R4,R5]
//   003C491E  CMP     R5, R8
//   003C4920  BEQ     loc_3C4926
//   003C4922  BL      sub_3C2A38
//   003C4926  MOV     R3, R8
//   003C4928  SUBS    R3, #2
//   003C492A  MOV     R6, R9
//   003C492C  STR     R3, [R4,R6]
//   003C492E  BL      sub_3C2A38
//   003C4932  MOVS    R3, #0x8C
//   003C4934  MOVS    R2, #1
//   003C4936  LSLS    R3, R3, #1
//   003C4938  STR     R2, [R4,R3]
//   003C493A  BL      sub_3C2A38

//======================================================================
// sub_3C495C
// address: 0x003C495C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3C495C(int a1, int a2, int a3, int a4)
{
  if ( a4 == 255 )
    a1 = sub_3C557E();
  return sub_3C4966(a1, a4 + 1);
}


//======================================================================
// sub_3C4966
// address: 0x003C4966   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3C4966(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r5

  *(_DWORD *)(v4 + 256) = a2;
  *(_BYTE *)(v4 + a4) = 46;
  *(_BYTE *)(v4 + 260) = 46;
  if ( **(_DWORD **)(v5 + 8) == 69 )
    JUMPOUT(0x3C503E);
  return sub_3C4982();
}


//======================================================================
// sub_3C4982
// address: 0x003C4982   size: 0xE (14 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4982  MOVS    R0, R4
//   003C4984  LDR     R1, [SP,#arg_1A8]
//   003C4986  MOV     R2, R8
//   003C4988  BL      sub_3C5938
//   003C498C  BL      sub_3C2A38

//======================================================================
// sub_3C4990
// address: 0x003C4990   size: 0x4 (4 bytes)
//======================================================================
void sub_3C4990()
{
  JUMPOUT(0x3C4976);
}


//======================================================================
// sub_3C4994
// address: 0x003C4994   size: 0x64 (100 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4994  MOVS    R2, #0x108
//   003C4998  LDR     R5, =(aFract - 0x3C49A2); "_Fract"
//   003C499A  MOV     R9, R2
//   003C499C  MOVS    R2, #0x86
//   003C499E  ADD     R5, PC; "_Fract"
//   003C49A0  MOVS    R6, #0
//   003C49A2  LSLS    R2, R2, #1
//   003C49A4  ADDS    R7, R5, #(aFract+6 - 0x44E6F4); ""
//   003C49A6  MOV     R10, R6
//   003C49A8  MOV     R8, R2
//   003C49AA  B       loc_3C49C8
//   003C49AC  ADDS    R2, R3, #1
//   003C49AE  MOVS    R1, #0x100
//   003C49B2  STR     R2, [R4,R1]
//   003C49B4  STRB    R6, [R4,R3]
//   003C49B6  MOVS    R3, #0x104
//   003C49BA  ADDS    R5, #1
//   003C49BC  STRB    R6, [R4,R3]
//   003C49BE  CMP     R5, R7
//   003C49C0  BNE     loc_3C49C6
//   003C49C2  BL      sub_3C2A38
//   003C49C6  MOVS    R3, R2
//   003C49C8  LDRB    R6, [R5]
//   003C49CA  CMP     R3, #0xFF
//   003C49CC  BNE     loc_3C49AC
//   003C49CE  MOV     R1, R8
//   003C49D0  MOV     R2, R9
//   003C49D2  LDR     R1, [R4,R1]
//   003C49D4  LDR     R2, [R4,R2]
//   003C49D6  STR     R1, [SP,#arg_AC]
//   003C49D8  STR     R2, [SP,#arg_A8]
//   003C49DA  MOV     R0, R10
//   003C49DC  STRB    R0, [R4,R3]
//   003C49DE  LDR     R2, [SP,#arg_AC]
//   003C49E0  LDR     R3, [SP,#arg_A8]
//   003C49E2  MOVS    R0, R4
//   003C49E4  MOVS    R1, #0xFF
//   003C49E6  BLX     R3
//   003C49E8  MOVS    R3, #0x120
//   003C49EC  LDR     R2, [R4,R3]
//   003C49EE  ADDS    R2, #1
//   003C49F0  STR     R2, [R4,R3]
//   003C49F2  MOVS    R2, #1
//   003C49F4  MOVS    R3, #0
//   003C49F6  B       loc_3C49AE

//======================================================================
// sub_3C49F8
// address: 0x003C49F8   size: 0xE0 (224 bytes)
//======================================================================
void __fastcall __noreturn sub_3C49F8(
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
        int a22)
{
  int v22; // r4
  int v23; // r9
  const char *v24; // r5
  int v25; // r2
  char v26; // r6
  unsigned int *v27; // r0
  int v28; // r3
  unsigned int *v29; // r5
  int v30; // r3
  unsigned int *v31; // r6
  int v32; // r2
  char v33; // r7
  void (__fastcall *v34)(int, int, int); // [sp+50h] [bp+50h]
  int v35; // [sp+54h] [bp+54h]

  v24 = "{parm#";
  while ( 1 )
  {
    v26 = *v24;
    if ( a4 == 255 )
    {
      v35 = *(_DWORD *)(v22 + 268);
      v34 = *(void (__fastcall **)(int, int, int))(v22 + 264);
      *(_BYTE *)(v22 + 255) = 0;
      v34(v22, 255, v35);
      ++*(_DWORD *)(v22 + 288);
      v25 = 1;
      a4 = 0;
    }
    else
    {
      v25 = a4 + 1;
    }
    *(_DWORD *)(v22 + 256) = v25;
    *(_BYTE *)(v22 + a4) = v26;
    ++v24;
    *(_BYTE *)(v22 + 260) = v26;
    if ( v24 == "" )
      break;
    a4 = v25;
  }
  j_sprintf((char *)&STACK[0x1C8], "%ld", v23);
  v27 = (unsigned int *)j_strlen((const char *)&STACK[0x1C8]);
  if ( v27 != nullptr )
  {
    v29 = nullptr;
    v30 = *(_DWORD *)(v22 + 256);
    v31 = v27;
    while ( 1 )
    {
      v27 = &STACK[0x1C8];
      v33 = *((_BYTE *)&STACK[0x1C8] + (_DWORD)v29);
      if ( v30 == 255 )
      {
        *(_BYTE *)(v22 + 255) = 0;
        v27 = (unsigned int *)(*(int (__fastcall **)(int, int))(v22 + 264))(v22, 255);
        ++*(_DWORD *)(v22 + 288);
        v32 = 1;
        v30 = 0;
      }
      else
      {
        v32 = v30 + 1;
      }
      *(_DWORD *)(v22 + 256) = v32;
      *(_BYTE *)(v22 + v30) = v33;
      v28 = 260;
      v29 = (unsigned int *)((char *)v29 + 1);
      *(_BYTE *)(v22 + 260) = v33;
      if ( v29 == v31 )
        break;
      v30 = v32;
    }
  }
  else
  {
    v32 = *(_DWORD *)(v22 + 256);
  }
  if ( v32 == 255 )
    sub_3C552A();
  sub_3C4AD8(
    v27,
    v32 + 1,
    v32,
    v28,
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
    a22);
}


//======================================================================
// sub_3C4AD8
// address: 0x003C4AD8   size: 0x14 (20 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4AD8  MOVS    R3, #0x100
//   003C4ADC  STR     R1, [R4,R3]
//   003C4ADE  MOVS    R3, #0x7D ; '}'
//   003C4AE0  STRB    R3, [R4,R2]
//   003C4AE2  MOVS    R2, #0x104
//   003C4AE6  STRB    R3, [R4,R2]
//   003C4AE8  BL      sub_3C2A38

//======================================================================
// sub_3C4AEC
// address: 0x003C4AEC   size: 0x78 (120 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4AEC  LDR     R5, [R3,#8]
//   003C4AEE  LDR     R7, [R3,#0xC]
//   003C4AF0  MOV     R8, R5
//   003C4AF2  CMP     R7, #0
//   003C4AF4  BNE     loc_3C4AFA
//   003C4AF6  BL      sub_3C2A38
//   003C4AFA  MOVS    R2, #0x108
//   003C4AFE  MOV     R10, R2
//   003C4B00  MOVS    R2, #0x10C
//   003C4B04  MOVS    R3, #0x100
//   003C4B08  MOVS    R5, #0
//   003C4B0A  MOV     R9, R2
//   003C4B0C  MOVS    R2, R7
//   003C4B0E  LDR     R3, [R4,R3]
//   003C4B10  MOV     R7, R8
//   003C4B12  MOV     R11, R5
//   003C4B14  MOV     R8, R2
//   003C4B16  B       loc_3C4B34
//   003C4B18  ADDS    R2, R3, #1
//   003C4B1A  MOVS    R1, #0x100
//   003C4B1E  STR     R2, [R4,R1]
//   003C4B20  STRB    R6, [R4,R3]
//   003C4B22  MOVS    R3, #0x104
//   003C4B26  ADDS    R5, #1
//   003C4B28  STRB    R6, [R4,R3]
//   003C4B2A  CMP     R8, R5
//   003C4B2C  BNE     loc_3C4B32
//   003C4B2E  BL      sub_3C2A38
//   003C4B32  MOVS    R3, R2
//   003C4B34  LDRB    R6, [R7,R5]
//   003C4B36  CMP     R3, #0xFF
//   003C4B38  BNE     loc_3C4B18
//   003C4B3A  MOV     R1, R9
//   003C4B3C  MOV     R2, R10
//   003C4B3E  LDR     R1, [R4,R1]
//   003C4B40  LDR     R2, [R4,R2]
//   003C4B42  STR     R1, [SP,#arg_C4]
//   003C4B44  STR     R2, [SP,#arg_C0]
//   003C4B46  MOV     R0, R11
//   003C4B48  STRB    R0, [R4,R3]
//   003C4B4A  LDR     R2, [SP,#arg_C4]
//   003C4B4C  LDR     R3, [SP,#arg_C0]
//   003C4B4E  MOVS    R0, R4
//   003C4B50  MOVS    R1, #0xFF
//   003C4B52  BLX     R3
//   003C4B54  MOVS    R3, #0x120
//   003C4B58  LDR     R2, [R4,R3]
//   003C4B5A  ADDS    R2, #1
//   003C4B5C  STR     R2, [R4,R3]
//   003C4B5E  MOVS    R2, #1
//   003C4B60  MOVS    R3, #0
//   003C4B62  B       loc_3C4B1A

//======================================================================
// sub_3C4B64
// address: 0x003C4B64   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_3C4B64(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r0

  v4 = sub_3C2B86(a1, a2, a3, *(_DWORD *)(v3 + 276));
  return sub_3C4B70(v4);
}


//======================================================================
// sub_3C4B70
// address: 0x003C4B70   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3C4B70(int a1, int a2, int a3)
{
  if ( *(_BYTE *)(**(_DWORD **)(*(_DWORD *)(a3 + 4) + 4) + 1) == 99 )
    sub_3C54A6();
  return sub_3C4B80();
}


//======================================================================
// sub_3C4B80
// address: 0x003C4B80   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3C4B80(int a1, int a2, _DWORD *a3)
{
  if ( *a3 == 49 )
    sub_3C55A6();
  return sub_3C4B8A();
}


//======================================================================
// sub_3C4B8A
// address: 0x003C4B8A   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_3C4B8A(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r7
  int v5; // r0
  _DWORD *v6; // r2
  int v7; // r0

  v5 = j_strcmp(**(const char ***)(a3 + 4), "cl");
  v6 = *(_DWORD **)(v4 + 4);
  if ( v5 == 0 && *v6 == 3 )
    sub_3C5602();
  v7 = sub_3C6938(v3, STACK[0x1A8], v6);
  return sub_3C4BAE(v7);
}


//======================================================================
// sub_3C4BAE
// address: 0x003C4BAE   size: 0x2A (42 bytes)
//======================================================================
int sub_3C4BAE()
{
  int v0; // r5
  const char *v1; // r6

  v1 = **(const char ***)(*(_DWORD *)(v0 + 4) + 4);
  if ( j_strcmp(v1, "ix") == 0 )
    sub_3C55CC();
  if ( j_strcmp(v1, "cl") != 0 )
    sub_3C5620();
  return sub_3C4BD8();
}


//======================================================================
// sub_3C4BD8
// address: 0x003C4BD8   size: 0xC (12 bytes)
//======================================================================
int sub_3C4BD8()
{
  int v0; // r4
  int v1; // r5
  int v2; // r0

  v2 = sub_3C6938(v0, STACK[0x1A8], *(_DWORD *)(*(_DWORD *)(v1 + 8) + 8));
  return sub_3C4BE4(v2);
}


//======================================================================
// sub_3C4BE4
// address: 0x003C4BE4   size: 0x30 (48 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4BE4  LDR     R3, [R5,#4]
//   003C4BE6  LDR     R0, [R3]
//   003C4BE8  CMP     R0, #0x31 ; '1'
//   003C4BEA  BEQ     loc_3C4BF0
//   003C4BEC  BL      sub_3C2A38
//   003C4BF0  LDR     R3, [R3,#4]
//   003C4BF2  LDR     R1, [R3,#8]
//   003C4BF4  CMP     R1, #1
//   003C4BF6  BEQ     loc_3C4BFC
//   003C4BF8  BL      sub_3C2A38
//   003C4BFC  LDR     R3, [R3,#4]
//   003C4BFE  LDRB    R3, [R3]
//   003C4C00  CMP     R3, #0x3E ; '>'
//   003C4C02  BEQ     loc_3C4C08
//   003C4C04  BL      sub_3C2A38
//   003C4C08  MOVS    R0, R4
//   003C4C0A  MOVS    R1, #0x29 ; ')'
//   003C4C0C  BL      sub_3C0C78
//   003C4C10  BL      sub_3C2A38

//======================================================================
// sub_3C4C14
// address: 0x003C4C14   size: 0xA (10 bytes)
//======================================================================
void __fastcall __noreturn sub_3C4C14(int a1, int a2, int a3)
{
  int v3; // r4

  sub_3C3BFE(a1, a2, a3, *(_DWORD *)(v3 + 256));
}


//======================================================================
// sub_3C4C1E
// address: 0x003C4C1E   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_3C4C1E(int a1, int a2, _DWORD *a3)
{
  int v3; // r4
  int v4; // r3

  v4 = *(_DWORD *)(v3 + 284);
  do
  {
    if ( v4 <= 0 )
      sub_3C55EC();
    a3 = (_DWORD *)a3[2];
    --v4;
  }
  while ( a3 != nullptr && *a3 == 47 );
  return sub_3C4C3C();
}


//======================================================================
// sub_3C4C3C
// address: 0x003C4C3C   size: 0xC (12 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4C3C  MOVS    R3, #0x8C
//   003C4C3E  MOVS    R2, #1
//   003C4C40  LSLS    R3, R3, #1
//   003C4C42  STR     R2, [R4,R3]
//   003C4C44  BL      sub_3C2A38

//======================================================================
// sub_3C4C48
// address: 0x003C4C48   size: 0x72 (114 bytes)
//======================================================================
void __noreturn sub_3C4C48()
{
  int v0; // r4
  const char *v1; // r6
  int i; // r3
  int v3; // r2
  char v4; // r7

  v1 = "_Sat ";
  for ( i = *(_DWORD *)(v0 + 256); ; i = v3 )
  {
    v4 = *v1;
    if ( i == 255 )
    {
      *(_BYTE *)(v0 + 255) = 0;
      (*(void (__fastcall **)(int, int, _DWORD))(v0 + 264))(v0, 255, *(_DWORD *)(v0 + 268));
      ++*(_DWORD *)(v0 + 288);
      v3 = 1;
      i = 0;
    }
    else
    {
      v3 = i + 1;
    }
    *(_DWORD *)(v0 + 256) = v3;
    *(_BYTE *)(v0 + i) = v4;
    ++v1;
    *(_BYTE *)(v0 + 260) = v4;
    if ( v1 == "" )
      sub_3C3BC4();
  }
}


//======================================================================
// sub_3C4CBA
// address: 0x003C4CBA   size: 0x36 (54 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4CBA  LDR     R6, [SP,#arg_1A8]
//   003C4CBC  MOVS    R3, #0x60 ; '`'
//   003C4CBE  BICS    R6, R3
//   003C4CC0  MOVS    R3, #0x114
//   003C4CC4  ADDS    R2, #8
//   003C4CC6  LDR     R3, [R4,R3]
//   003C4CC8  MOVS    R0, R4
//   003C4CCA  MOVS    R1, R6
//   003C4CCC  BL      sub_3C64AC
//   003C4CD0  LDR     R2, [R5,#4]
//   003C4CD2  CMP     R2, #0
//   003C4CD4  BNE     loc_3C4CDA
//   003C4CD6  BL      sub_3C2A38
//   003C4CDA  MOVS    R0, R4
//   003C4CDC  MOVS    R1, R6
//   003C4CDE  BL      sub_3C5938
//   003C4CE2  BL      sub_3C2A38
//   003C4CE6  CMP     R2, #0xFF
//   003C4CE8  BNE     loc_3C4CEE
//   003C4CEA  BL      sub_3C562E
//   003C4CEE  ADDS    R3, R2, #1

//======================================================================
// sub_3C4CF0
// address: 0x003C4CF0   size: 0x16 (22 bytes)
//======================================================================
void __fastcall sub_3C4CF0(int a1, int a2, int a3, int a4)
{
  int v4; // r4

  *(_DWORD *)(v4 + 256) = a4;
  *(_BYTE *)(v4 + a3) = 32;
  *(_BYTE *)(v4 + 260) = 32;
  JUMPOUT(0x3C466E);
}


//======================================================================
// sub_3C4D24
// address: 0x003C4D24   size: 0x24 (36 bytes)
//======================================================================
int sub_3C4D24()
{
  int *v0; // r5
  int v1; // r6
  int v2; // r0
  int v3; // r3

  v2 = j_strcmp(**(const char ***)(v1 + 4), "ad");
  v3 = *v0;
  if ( v2 == 0 && v3 == 3 )
    v2 = sub_3C5738();
  if ( v3 == 55 )
    v2 = sub_3C5850(v2);
  return sub_3C4D48(v2);
}


//======================================================================
// sub_3C4D48
// address: 0x003C4D48   size: 0x42 (66 bytes)
//======================================================================
int sub_3C4D48()
{
  int v0; // r4
  int v1; // r6
  const char *v2; // r7
  int v3; // r0
  int v4; // r0

  v3 = sub_3C6894(v0, STACK[0x1A8], v1);
  if ( v2 == nullptr )
    ((void (__fastcall *)(int))loc_3C395A)(v3);
  if ( j_strcmp(v2, "gs") == 0 )
    JUMPOUT(0x3C52D4);
  v4 = j_strcmp(v2, "st");
  if ( v4 != 0 )
    v4 = ((int (*)(void))loc_3C395A)();
  if ( *(_DWORD *)(v0 + 256) == 255 )
    v4 = sub_3C5702(v4);
  return sub_3C4D8A(v4);
}


//======================================================================
// sub_3C4D8A
// address: 0x003C4D8A   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3C4D8A(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r5
  int v6; // r0

  *(_DWORD *)(v4 + 256) = a4 + 1;
  *(_BYTE *)(v4 + a4) = 40;
  *(_BYTE *)(v4 + 260) = 40;
  v6 = sub_3C5938(v4, STACK[0x1A8], v5);
  if ( *(_DWORD *)(v4 + 256) == 255 )
    v6 = sub_3C56DC(v6);
  return sub_3C4DB0(v6);
}


//======================================================================
// sub_3C4DB0
// address: 0x003C4DB0   size: 0x16 (22 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4DB0  MOVS    R2, #0x80
//   003C4DB2  ADDS    R1, R3, #1
//   003C4DB4  LSLS    R2, R2, #1
//   003C4DB6  STR     R1, [R4,R2]
//   003C4DB8  MOVS    R2, #0x29 ; ')'
//   003C4DBA  STRB    R2, [R4,R3]
//   003C4DBC  MOVS    R3, #0x104
//   003C4DC0  STRB    R2, [R4,R3]
//   003C4DC2  BL      sub_3C2A38

//======================================================================
// sub_3C4DC6
// address: 0x003C4DC6   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3C4DC6(__int64 a1)
{
  int v1; // r4
  int v2; // r3

  v2 = *(_DWORD *)(v1 + 256);
  if ( v2 == 255 )
    a1 = sub_3C56B4();
  return sub_3C4DD6(a1, HIDWORD(a1), v2 + 1);
}


//======================================================================
// sub_3C4DD6
// address: 0x003C4DD6   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3C4DD6(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r6
  __int64 v6; // r0
  int v7; // r3

  *(_DWORD *)(v4 + 256) = a3;
  *(_BYTE *)(v4 + a4) = 40;
  *(_BYTE *)(v4 + 260) = 40;
  LODWORD(v6) = sub_3C66D4(v4, STACK[0x1A8], v5 + 4);
  v7 = *(_DWORD *)(v4 + 256);
  if ( v7 == 255 )
    v6 = sub_3C568C(v6);
  return sub_3C4DFC(v6, HIDWORD(v6), v7 + 1);
}


//======================================================================
// sub_3C4DFC
// address: 0x003C4DFC   size: 0x14 (20 bytes)
//======================================================================
void __fastcall __noreturn sub_3C4DFC(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r0

  *(_DWORD *)(v4 + 256) = a3;
  *(_BYTE *)(v4 + a4) = 41;
  *(_BYTE *)(v4 + 260) = 41;
  v5 = ((int (*)(void))loc_3C395A)();
  sub_3C4E10(v5);
}


//======================================================================
// sub_3C4E10
// address: 0x003C4E10   size: 0x26 (38 bytes)
//======================================================================
void __fastcall __noreturn sub_3C4E10(int a1, int a2)
{
  int v2; // r4
  int v3; // r6
  int v4; // r0
  int v5; // r2

  *(_BYTE *)(v2 + a2) = 0;
  v4 = (*(int (__fastcall **)(int))(v2 + 264))(v2);
  v5 = *(_DWORD *)(v2 + 288);
  *(_DWORD *)(v2 + v3) = 0;
  *(_DWORD *)(v2 + 288) = v5 + 1;
  sub_3C3B50(v4, 0);
}


//======================================================================
// sub_3C4E36
// address: 0x003C4E36   size: 0xE (14 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4E36  LDR     R2, [R5,#4]
//   003C4E38  MOVS    R0, R4
//   003C4E3A  LDR     R1, [SP,#arg_1A8]
//   003C4E3C  BL      sub_3C5938
//   003C4E40  BL      sub_3C2A38

//======================================================================
// sub_3C4E44
// address: 0x003C4E44   size: 0x28 (40 bytes)
//======================================================================
void __fastcall __noreturn sub_3C4E44(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r0

  *(_BYTE *)(v4 + a4) = 0;
  v5 = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  ++*(_DWORD *)(v4 + 288);
  sub_3C3D94(v5, 1);
}


//======================================================================
// sub_3C4E6C
// address: 0x003C4E6C   size: 0x4E (78 bytes)
//======================================================================
void __fastcall sub_3C4E6C(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r0
  int v5; // r2

  *(_BYTE *)(v3 + a3) = 0;
  v4 = (*(int (__fastcall **)(int, int, _DWORD))(v3 + 264))(v3, 255, *(_DWORD *)(v3 + 268));
  ++*(_DWORD *)(v3 + 288);
  sub_3C4638(v4, 1, 0);
  *(_BYTE *)(v3 + v5) = 0;
  (*(void (__fastcall **)(int, int, _DWORD))(v3 + 264))(v3, 255, *(_DWORD *)(v3 + 268));
  ++*(_DWORD *)(v3 + 288);
  JUMPOUT(0x3C479C);
}


//======================================================================
// sub_3C4EE0
// address: 0x003C4EE0   size: 0x20 (32 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4EE0  LDR     R6, [R2,#4]
//   003C4EE2  LDR     R7, [R2,#8]
//   003C4EE4  ADDS    R7, R6, R7
//   003C4EE6  CMP     R6, R7
//   003C4EE8  BCC     loc_3C4EEE
//   003C4EEA  BL      sub_3C2A38
//   003C4EEE  MOVS    R3, #0x100
//   003C4EF2  MOV     R8, R3
//   003C4EF4  MOVS    R3, #0x104
//   003C4EF8  MOVS    R5, #0
//   003C4EFA  MOV     R9, R3
//   003C4EFC  MOV     R10, R5
//   003C4EFE  B       loc_3C4F1E

//======================================================================
// sub_3C4F00
// address: 0x003C4F00   size: 0x14 (20 bytes)
//======================================================================
int sub_3C4F00()
{
  int v0; // r4
  char v1; // r5
  int v2; // r8
  int v3; // r9
  char v4; // r10
  int v5; // r3
  int v6; // r2

  v5 = *(_DWORD *)(v0 + v2);
  if ( v5 == 255 )
  {
    *(_BYTE *)(v0 + 255) = v4;
    (*(void (__fastcall **)(int, int, _DWORD))(v0 + 264))(v0, 255, *(_DWORD *)(v0 + 268));
    ++*(_DWORD *)(v0 + 288);
    v6 = 1;
    v5 = 0;
  }
  else
  {
    v6 = v5 + 1;
  }
  *(_DWORD *)(v0 + v2) = v6;
  *(_BYTE *)(v0 + v5) = v1;
  *(_BYTE *)(v0 + v3) = v1;
  return sub_3C4F14();
}


//======================================================================
// sub_3C4F14
// address: 0x003C4F14   size: 0x64 (100 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C4F14  ADDS    R6, #1
//   003C4F16  CMP     R7, R6
//   003C4F18  BHI     loc_3C4F1E
//   003C4F1A  BL      sub_3C2A38
//   003C4F1E  SUBS    R3, R7, R6
//   003C4F20  LDRB    R5, [R6]
//   003C4F22  CMP     R3, #3
//   003C4F24  BLE     sub_3C4F00
//   003C4F26  CMP     R5, #0x5F ; '_'
//   003C4F28  BNE     sub_3C4F00
//   003C4F2A  LDRB    R3, [R6,#1]
//   003C4F2C  CMP     R3, #0x5F ; '_'
//   003C4F2E  BNE     sub_3C4F00
//   003C4F30  LDRB    R2, [R6,#2]
//   003C4F32  MOVS    R5, R3
//   003C4F34  CMP     R2, #0x55 ; 'U'
//   003C4F36  BNE     sub_3C4F00
//   003C4F38  ADDS    R0, R6, #3
//   003C4F3A  MOV     R11, R0
//   003C4F3C  CMP     R7, R0
//   003C4F3E  BLS     sub_3C4F00
//   003C4F40  MOVS    R2, #0
//   003C4F42  B       loc_3C4F56
//   003C4F44  MOVS    R3, R1
//   003C4F46  LSLS    R2, R2, #4
//   003C4F48  ADDS    R2, R3, R2
//   003C4F4A  MOVS    R3, #1
//   003C4F4C  ADD     R11, R3
//   003C4F4E  CMP     R11, R7
//   003C4F50  BNE     loc_3C4F56
//   003C4F52  BL      sub_3C584A
//   003C4F56  MOV     R1, R11
//   003C4F58  LDRB    R3, [R1]
//   003C4F5A  MOVS    R1, R3
//   003C4F5C  SUBS    R1, #0x30 ; '0'
//   003C4F5E  LSLS    R0, R1, #0x18
//   003C4F60  LSRS    R0, R0, #0x18
//   003C4F62  CMP     R0, #9
//   003C4F64  BLS     loc_3C4F44
//   003C4F66  MOVS    R1, R3
//   003C4F68  SUBS    R1, #0x41 ; 'A'
//   003C4F6A  LSLS    R1, R1, #0x18
//   003C4F6C  LSRS    R1, R1, #0x18
//   003C4F6E  CMP     R1, #5
//   003C4F70  BLS     loc_3C4F74
//   003C4F72  B       loc_3C5354
//   003C4F74  SUBS    R3, #0x37 ; '7'
//   003C4F76  B       loc_3C4F46

//======================================================================
// sub_3C4F9E
// address: 0x003C4F9E   size: 0x28 (40 bytes)
//======================================================================
void __fastcall __noreturn sub_3C4F9E(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r0

  *(_BYTE *)(v4 + a4) = 0;
  v5 = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  ++*(_DWORD *)(v4 + 288);
  sub_3C3B16(v5, 1);
}


//======================================================================
// sub_3C4FC6
// address: 0x003C4FC6   size: 0x28 (40 bytes)
//======================================================================
void __fastcall __noreturn sub_3C4FC6(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  __int64 v5; // r0

  *((_BYTE *)v4 + a4) = 0;
  v5 = ((__int64 (__fastcall *)(_DWORD *, int, _DWORD))v4[66])(v4, 255, v4[67]);
  ++v4[72];
  sub_3C3AF0(v5, SHIDWORD(v5), 1, 0);
}


//======================================================================
// sub_3C4FEE
// address: 0x003C4FEE   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3C4FEE(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r0
  int v6; // r0

  *(_BYTE *)(v4 + a4) = 0;
  v5 = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  ++*(_DWORD *)(v4 + 288);
  v6 = sub_3C44DA(v5, 1);
  return sub_3C5016(v6);
}


//======================================================================
// sub_3C5016
// address: 0x003C5016   size: 0x182 (386 bytes)
//======================================================================
int __fastcall sub_3C5016(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r8
  int v6; // r0
  const char *v7; // r5
  int i; // r3
  int v9; // r2
  char v10; // r6
  unsigned int v11; // r1
  size_t v12; // r0
  int v13; // r2
  int v14; // r5
  size_t v15; // r6
  int v16; // r3
  char v17; // r7
  void (__fastcall *v18)(int, int); // r3
  const char *v19; // r5
  int v20; // r2
  char v21; // r6
  unsigned int v22; // r2
  int v23; // r0

  *(_BYTE *)(v4 + a4) = 0;
  v6 = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  ++*(_DWORD *)(v4 + 288);
  sub_3C3310(v6, 1);
  v7 = "{default arg#";
  for ( i = *(_DWORD *)(v4 + 256); ; i = v9 )
  {
    v10 = *v7;
    if ( i == 255 )
    {
      v11 = *(_DWORD *)(v4 + 264);
      STACK[0x184] = *(_DWORD *)(v4 + 268);
      STACK[0x180] = v11;
      *(_BYTE *)(v4 + 255) = 0;
      ((void (__fastcall *)(int, int, unsigned int))STACK[0x180])(v4, 255, STACK[0x184]);
      ++*(_DWORD *)(v4 + 288);
      v9 = 1;
      i = 0;
    }
    else
    {
      v9 = i + 1;
    }
    *(_DWORD *)(v4 + 256) = v9;
    *(_BYTE *)(v4 + i) = v10;
    ++v7;
    *(_BYTE *)(v4 + 260) = v10;
    if ( v7 == "" )
      break;
  }
  j_sprintf((char *)&STACK[0x1C8], "%ld", *(_DWORD *)(v5 + 8) + 1);
  v12 = j_strlen((const char *)&STACK[0x1C8]);
  if ( v12 != 0 )
  {
    v13 = *(_DWORD *)(v4 + 256);
    v14 = 0;
    v15 = v12;
    while ( 1 )
    {
      v17 = *((_BYTE *)&STACK[0x1C8] + v14);
      if ( v13 == 255 )
      {
        *(_BYTE *)(v4 + 255) = 0;
        v18 = *(void (__fastcall **)(int, int))(v4 + 264);
        STACK[0x17C] = *(_DWORD *)(v4 + 268);
        v18(v4, 255);
        ++*(_DWORD *)(v4 + 288);
        v16 = 1;
        v13 = 0;
      }
      else
      {
        v16 = v13 + 1;
      }
      *(_DWORD *)(v4 + 256) = v16;
      *(_BYTE *)(v4 + v13) = v17;
      ++v14;
      *(_BYTE *)(v4 + 260) = v17;
      if ( v14 == v15 )
        break;
      v13 = v16;
    }
  }
  else
  {
    v16 = *(_DWORD *)(v4 + 256);
  }
  v19 = "}::";
  while ( 1 )
  {
    v21 = *v19;
    if ( v16 == 255 )
    {
      v22 = *(_DWORD *)(v4 + 264);
      STACK[0x174] = *(_DWORD *)(v4 + 268);
      STACK[0x170] = v22;
      *(_BYTE *)(v4 + 255) = 0;
      ((void (__fastcall *)(int, int, unsigned int))STACK[0x170])(v4, 255, STACK[0x174]);
      ++*(_DWORD *)(v4 + 288);
      v20 = 1;
      v16 = 0;
    }
    else
    {
      v20 = v16 + 1;
    }
    *(_DWORD *)(v4 + 256) = v20;
    *(_BYTE *)(v4 + v16) = v21;
    ++v19;
    *(_BYTE *)(v4 + 260) = v21;
    if ( v19 == "" )
      break;
    v16 = v20;
  }
  v23 = sub_3C4982();
  return sub_3C5198(v23);
}


//======================================================================
// sub_3C5198
// address: 0x003C5198   size: 0x28 (40 bytes)
//======================================================================
void __fastcall __noreturn sub_3C5198(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r0
  int v6; // r0

  *(_BYTE *)(v4 + a4) = 0;
  v5 = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  ++*(_DWORD *)(v4 + 288);
  v6 = sub_3C4508(v5, 1);
  sub_3C51C0(v6);
}


//======================================================================
// sub_3C51C0
// address: 0x003C51C0   size: 0x28 (40 bytes)
//======================================================================
void __fastcall __noreturn sub_3C51C0(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r0
  int v6; // r2

  *(_BYTE *)(v4 + a4) = 0;
  v5 = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  v6 = *(_DWORD *)(v4 + 288) + 1;
  *(_DWORD *)(v4 + 288) = v6;
  sub_3C36D2(v5, 1, v6, 0);
}


//======================================================================
// sub_3C51E8
// address: 0x003C51E8   size: 0x28 (40 bytes)
//======================================================================
void __fastcall __noreturn sub_3C51E8(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r0
  int v6; // r2

  *(_BYTE *)(v4 + a4) = 0;
  v5 = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  v6 = *(_DWORD *)(v4 + 288) + 1;
  *(_DWORD *)(v4 + 288) = v6;
  sub_3C369E(v5, 1, v6, 0);
}


//======================================================================
// sub_3C5210
// address: 0x003C5210   size: 0xE (14 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C5210  MOVS    R3, #0x8C
//   003C5212  MOV     R4, R11
//   003C5214  MOVS    R2, #1
//   003C5216  LSLS    R3, R3, #1
//   003C5218  STR     R2, [R4,R3]
//   003C521A  BL      sub_3C2A38

//======================================================================
// sub_3C521E
// address: 0x003C521E   size: 0x40 (64 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C521E  STR     R3, [SP,#arg_1D0]
//   003C5220  MOVS    R3, #0x88
//   003C5222  MOVS    R7, #0x8A
//   003C5224  LSLS    R3, R3, #1
//   003C5226  LSLS    R7, R7, #1
//   003C5228  LDR     R3, [R4,R3]
//   003C522A  LDR     R1, [SP,#arg_1A8]
//   003C522C  LDR     R0, [R4,R7]
//   003C522E  ADD     R6, SP, #arg_1C8
//   003C5230  STR     R3, [SP,#arg_1D4]
//   003C5232  MOVS    R3, #0x60 ; '`'
//   003C5234  BICS    R1, R3
//   003C5236  STR     R0, [SP,#arg_1C8]
//   003C5238  STR     R6, [R4,R7]
//   003C523A  MOVS    R0, R4
//   003C523C  LDR     R2, [R5,#4]
//   003C523E  STR     R5, [SP,#arg_1CC]
//   003C5240  BL      sub_3C5938
//   003C5244  LDR     R3, [R6,#8]
//   003C5246  LDR     R1, [SP,#arg_1C8]
//   003C5248  STR     R1, [R4,R7]
//   003C524A  CMP     R3, #0
//   003C524C  BEQ     loc_3C5252
//   003C524E  BL      sub_3C2A38
//   003C5252  MOVS    R0, R4
//   003C5254  MOVS    R1, #0x20 ; ' '
//   003C5256  BL      sub_3C0C78
//   003C525A  BL      sub_3C3F5A

//======================================================================
// sub_3C525E
// address: 0x003C525E   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_3C525E(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int *v5; // r5
  int v6; // r7
  int v7; // r8
  int v8; // r0
  int v9; // r0

  *(_BYTE *)(v4 + a4) = 0;
  (*(void (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  ++*(_DWORD *)(v4 + 288);
  *(_DWORD *)(v4 + v6) = 1;
  *(_BYTE *)v4 = 41;
  *(_BYTE *)(v4 + v7) = 41;
  v8 = *v5;
  if ( *v5 != 60 )
    v8 = ((int (*)(void))sub_3C3EA6)();
  *(_DWORD *)(v4 + 256) = 2;
  *(_BYTE *)(v4 + 1) = 45;
  *(_BYTE *)(v4 + 260) = 45;
  v9 = sub_3C3EA6(v8);
  return sub_3C52AC(v9);
}


//======================================================================
// sub_3C52AC
// address: 0x003C52AC   size: 0x36 (54 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C52AC  MOVS    R2, #0
//   003C52AE  STRB    R2, [R4,R3]
//   003C52B0  MOVS    R3, #0x10C
//   003C52B4  LDR     R2, [R4,R3]
//   003C52B6  MOVS    R3, #0x108
//   003C52BA  LDR     R3, [R4,R3]
//   003C52BC  MOVS    R0, R4
//   003C52BE  MOVS    R1, #0xFF
//   003C52C0  BLX     R3
//   003C52C2  MOVS    R3, #0x120
//   003C52C6  LDR     R2, [R4,R3]
//   003C52C8  ADDS    R2, #1
//   003C52CA  STR     R2, [R4,R3]
//   003C52CC  MOVS    R2, #1
//   003C52CE  MOVS    R3, #0
//   003C52D0  BL      sub_3C3E6A
//   003C52D4  MOVS    R0, R4
//   003C52D6  LDR     R1, [SP,#arg_1A8]
//   003C52D8  MOVS    R2, R5
//   003C52DA  BL      sub_3C5938
//   003C52DE  BL      sub_3C2A38

//======================================================================
// sub_3C52E2
// address: 0x003C52E2   size: 0x84 (132 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C52E2  LDR     R7, [R5,#8]
//   003C52E4  LDR     R0, [R7]
//   003C52E6  CMP     R0, #0
//   003C52E8  BEQ     loc_3C52EE
//   003C52EA  BL      sub_3C3E5A
//   003C52EE  CMP     R3, #0x3C ; '<'
//   003C52F0  BNE     loc_3C52F4
//   003C52F2  B       loc_3C589E
//   003C52F4  MOVS    R0, R4
//   003C52F6  LDR     R1, [SP,#arg_1A8]
//   003C52F8  MOVS    R2, R7
//   003C52FA  BL      sub_3C5938
//   003C52FE  SUBS    R0, R6, #2
//   003C5300  CMP     R0, #4
//   003C5302  BLS     loc_3C5308
//   003C5304  BL      sub_3C2A38
//   003C5308  BL      __gnu_thumb1_case_uqi; switch 5 cases
//   003C530C  DCB 0x17; jump table for switch statement
//   003C530D  DCB 0x11
//   003C530E  DCB 0xA
//   003C530F  DCB 3
//   003C5310  DCB 0x1D
//   003C5311  ALIGN 2
//   003C5312  LDR     R1, =(aLl - 0x3C531A); jumptable 003C5308 case 3
//   003C5314  MOVS    R0, R4; int
//   003C5316  ADD     R1, PC; "ll"
//   003C5318  BL      sub_3C298C
//   003C531C  BL      sub_3C2A38
//   003C5320  LDR     R1, =(aUl - 0x3C5328); jumptable 003C5308 case 2
//   003C5322  MOVS    R0, R4; int
//   003C5324  ADD     R1, PC; "ul"
//   003C5326  BL      sub_3C298C
//   003C532A  BL      sub_3C2A38
//   003C532E  MOVS    R0, R4; jumptable 003C5308 case 1
//   003C5330  MOVS    R1, #0x6C ; 'l'
//   003C5332  BL      sub_3C0C78
//   003C5336  BL      sub_3C2A38
//   003C533A  MOVS    R0, R4; jumptable 003C5308 case 0
//   003C533C  MOVS    R1, #0x75 ; 'u'
//   003C533E  BL      sub_3C0C78
//   003C5342  BL      sub_3C2A38
//   003C5346  LDR     R1, =(aUll - 0x3C534E); jumptable 003C5308 case 4
//   003C5348  MOVS    R0, R4; int
//   003C534A  ADD     R1, PC; "ull"
//   003C534C  BL      sub_3C298C
//   003C5350  BL      sub_3C2A38
//   003C5354  MOVS    R1, R3
//   003C5356  SUBS    R1, #0x61 ; 'a'
//   003C5358  LSLS    R1, R1, #0x18
//   003C535A  LSRS    R1, R1, #0x18
//   003C535C  CMP     R1, #5
//   003C535E  BLS     loc_3C5362
//   003C5360  B       loc_3C58C4
//   003C5362  SUBS    R3, #0x57 ; 'W'
//   003C5364  B       loc_3C4F46

//======================================================================
// sub_3C5366
// address: 0x003C5366   size: 0x48 (72 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C5366  ADDS    R1, R0, #4
//   003C5368  MOVS    R0, R4
//   003C536A  BL      sub_3C0EC4
//   003C536E  CMP     R0, #0
//   003C5370  BNE     loc_3C5374
//   003C5372  B       loc_3C5892
//   003C5374  LDR     R3, [R0]
//   003C5376  CMP     R3, #0x2F ; '/'
//   003C5378  BEQ     loc_3C537E
//   003C537A  BL      sub_3C4012
//   003C537E  MOVS    R3, #0x11C
//   003C5382  LDR     R3, [R4,R3]
//   003C5384  B       loc_3C5398
//   003C5386  LDR     R0, [R0,#8]
//   003C5388  SUBS    R3, #1
//   003C538A  CMP     R0, #0
//   003C538C  BNE     loc_3C5390
//   003C538E  B       loc_3C5892
//   003C5390  LDR     R1, [R0]
//   003C5392  CMP     R1, #0x2F ; '/'
//   003C5394  BEQ     loc_3C5398
//   003C5396  B       loc_3C5892
//   003C5398  CMP     R3, #0
//   003C539A  BGT     loc_3C5386
//   003C539C  BEQ     loc_3C53A0
//   003C539E  B       loc_3C5892
//   003C53A0  LDR     R0, [R0,#4]
//   003C53A2  CMP     R0, #0
//   003C53A4  BNE     loc_3C53A8
//   003C53A6  B       loc_3C5892
//   003C53A8  LDR     R3, [R0]
//   003C53AA  BL      sub_3C4012

//======================================================================
// sub_3C53AE
// address: 0x003C53AE   size: 0x28 (40 bytes)
//======================================================================
void __fastcall __noreturn sub_3C53AE(int a1, int a2, int a3)
{
  _DWORD *v3; // r4
  __int64 v4; // r0

  *((_BYTE *)v3 + a3) = 0;
  v4 = ((__int64 (__fastcall *)(_DWORD *, int, _DWORD))v3[66])(v3, 255, v3[67]);
  ++v3[72];
  sub_3C3BEE(v4, SHIDWORD(v4), 0, 1);
}


//======================================================================
// sub_3C53D6
// address: 0x003C53D6   size: 0x20 (32 bytes)
//======================================================================
void __fastcall sub_3C53D6(int a1)
{
  int v1; // r4
  int v2; // r8
  int v3; // r2

  v3 = *(_DWORD *)(v1 + v2);
  if ( v3 != 255 )
  {
    *(_DWORD *)(v1 + 256) = v3 + 1;
    *(_BYTE *)(v1 + v3) = 32;
    *(_BYTE *)(v1 + 260) = 32;
    sub_3C36C8(a1, 32, 260, v3 + 1);
  }
  JUMPOUT(0x3C57D6);
}


//======================================================================
// sub_3C53F6
// address: 0x003C53F6   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_3C53F6(int a1)
{
  int v1; // r4
  int v2; // r2

  v2 = *(_DWORD *)(v1 + 256);
  if ( v2 != 255 )
  {
    *(_DWORD *)(v1 + 256) = v2 + 1;
    *(_BYTE *)(v1 + v2) = 32;
    *(_BYTE *)(v1 + 260) = 32;
    sub_3C3694(a1, 32, 260, v2 + 1);
  }
  JUMPOUT(0x3C578E);
}


//======================================================================
// sub_3C542C
// address: 0x003C542C   size: 0x46 (70 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C542C  MOVS    R3, #0x100
//   003C5430  LDR     R3, [R4,R3]
//   003C5432  CMP     R3, #0xFF
//   003C5434  BNE     loc_3C5438
//   003C5436  B       loc_3C581E
//   003C5438  MOVS    R6, #0x80
//   003C543A  ADDS    R2, R3, #1
//   003C543C  LSLS    R6, R6, #1
//   003C543E  STR     R2, [R4,R6]
//   003C5440  MOVS    R2, #0x5B ; '['
//   003C5442  STRB    R2, [R4,R3]
//   003C5444  MOVS    R3, #0x104
//   003C5448  STRB    R2, [R4,R3]
//   003C544A  MOVS    R0, R4
//   003C544C  LDR     R2, [R5,#8]
//   003C544E  LDR     R1, [SP,#arg_1A8]
//   003C5450  BL      sub_3C5938
//   003C5454  LDR     R3, [R4,R6]
//   003C5456  CMP     R3, #0xFF
//   003C5458  BNE     loc_3C545C
//   003C545A  B       loc_3C57FA
//   003C545C  MOVS    R2, #0x80
//   003C545E  ADDS    R1, R3, #1
//   003C5460  LSLS    R2, R2, #1
//   003C5462  STR     R1, [R4,R2]
//   003C5464  MOVS    R2, #0x5D ; ']'
//   003C5466  STRB    R2, [R4,R3]
//   003C5468  MOVS    R3, #0x104
//   003C546C  STRB    R2, [R4,R3]
//   003C546E  BL      sub_3C2A38

//======================================================================
// sub_3C5472
// address: 0x003C5472   size: 0xC (12 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C5472  MOVS    R3, #0x8C
//   003C5474  MOVS    R2, #1
//   003C5476  LSLS    R3, R3, #1
//   003C5478  STR     R2, [R4,R3]
//   003C547A  BL      sub_3C2A38

//======================================================================
// sub_3C547E
// address: 0x003C547E   size: 0x28 (40 bytes)
//======================================================================
void __fastcall sub_3C547E(int a1, int a2)
{
  int v2; // r4
  int v3; // r2

  if ( a2 == 255 )
  {
    v3 = *(_DWORD *)(v2 + 268);
    *(_BYTE *)(v2 + 255) = 0;
    (*(void (__fastcall **)(int, int, int))(v2 + 264))(v2, 255, v3);
    ++*(_DWORD *)(v2 + 288);
  }
  JUMPOUT(0x3C5296);
}


//======================================================================
// sub_3C54A6
// address: 0x003C54A6   size: 0x56 (86 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C54A6  LDRB    R1, [R1]
//   003C54A8  MOVS    R0, R1
//   003C54AA  SUBS    R0, #0x63 ; 'c'
//   003C54AC  LSLS    R0, R0, #0x18
//   003C54AE  LSRS    R0, R0, #0x18
//   003C54B0  CMP     R0, #1
//   003C54B2  BLS     loc_3C54BE
//   003C54B4  SUBS    R1, #0x72 ; 'r'
//   003C54B6  CMP     R1, #1
//   003C54B8  BLS     loc_3C54BE
//   003C54BA  BL      sub_3C4B80
//   003C54BE  MOVS    R0, R4
//   003C54C0  LDR     R1, [SP,#arg_1A8]
//   003C54C2  BL      sub_3C6894
//   003C54C6  MOVS    R0, R4
//   003C54C8  MOVS    R1, #0x3C ; '<'
//   003C54CA  BL      sub_3C0C78
//   003C54CE  LDR     R3, [R5,#8]
//   003C54D0  MOVS    R0, R4
//   003C54D2  LDR     R2, [R3,#4]
//   003C54D4  LDR     R1, [SP,#arg_1A8]
//   003C54D6  BL      sub_3C5938
//   003C54DA  LDR     R1, =(asc_44E7D8 - 0x3C54E2); ">("
//   003C54DC  MOVS    R0, R4; int
//   003C54DE  ADD     R1, PC; ">("
//   003C54E0  BL      sub_3C298C
//   003C54E4  LDR     R3, [R5,#8]
//   003C54E6  MOVS    R0, R4
//   003C54E8  LDR     R1, [SP,#arg_1A8]
//   003C54EA  LDR     R2, [R3,#8]
//   003C54EC  BL      sub_3C5938
//   003C54F0  MOVS    R0, R4
//   003C54F2  MOVS    R1, #0x29 ; ')'
//   003C54F4  BL      sub_3C0C78
//   003C54F8  BL      sub_3C2A38

//======================================================================
// sub_3C54FC
// address: 0x003C54FC   size: 0xC (12 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C54FC  MOVS    R3, #0x114
//   003C5500  MOV     R5, R11
//   003C5502  STR     R5, [R4,R3]
//   003C5504  BL      sub_3C2A38

//======================================================================
// sub_3C5508
// address: 0x003C5508   size: 0x1C (28 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C5508  MOVS    R0, R4
//   003C550A  LDR     R1, [SP,#arg_1A8]
//   003C550C  LDR     R2, [R5,#8]
//   003C550E  BL      sub_3C5938
//   003C5512  MOVS    R3, #0x114
//   003C5516  MOV     R0, R8
//   003C5518  STR     R0, [R4,R3]
//   003C551A  LDR     R3, [R6,#8]
//   003C551C  CMP     R3, #0
//   003C551E  BEQ     sub_3C5524
//   003C5520  BL      sub_3C2A38

//======================================================================
// sub_3C5524
// address: 0x003C5524   size: 0x6 (6 bytes)
//======================================================================
void __fastcall __noreturn sub_3C5524(int a1, int a2, int a3)
{
  int v3; // r8
  int v4; // r0

  v4 = sub_3C418E(a1, a2, a3, v3);
  sub_3C552A(v4);
}


//======================================================================
// sub_3C552A
// address: 0x003C552A   size: 0x28 (40 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C552A  MOVS    R3, #0
//   003C552C  STRB    R3, [R4,R2]
//   003C552E  MOVS    R3, #0x10C
//   003C5532  LDR     R2, [R4,R3]
//   003C5534  MOVS    R3, #0x108
//   003C5538  LDR     R3, [R4,R3]
//   003C553A  MOVS    R1, #0xFF
//   003C553C  MOVS    R0, R4
//   003C553E  BLX     R3
//   003C5540  MOVS    R3, #0x120
//   003C5544  LDR     R2, [R4,R3]
//   003C5546  MOVS    R1, #1
//   003C5548  ADDS    R2, #1
//   003C554A  STR     R2, [R4,R3]
//   003C554C  MOVS    R2, #0
//   003C554E  BL      sub_3C4AD8

//======================================================================
// sub_3C5552
// address: 0x003C5552   size: 0x2C (44 bytes)
//======================================================================
void __noreturn sub_3C5552()
{
  int v0; // r4
  int v1; // r5
  int v2; // r6
  size_t v3; // r0

  if ( j_strncmp(*(const char **)(v2 + 4), "JArray", 6u) != 0 )
    sub_3C3676();
  sub_3C5938(v0, STACK[0x1A8], *(_DWORD *)(v1 + 8));
  v3 = sub_3C298C(v0, "[]");
  sub_3C36E2(v3);
}


//======================================================================
// sub_3C557E
// address: 0x003C557E   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3C557E(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r0
  int v6; // r2
  int v7; // r0

  *(_BYTE *)(v4 + a4) = 0;
  v5 = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  v6 = *(_DWORD *)(v4 + 288) + 1;
  *(_DWORD *)(v4 + 288) = v6;
  v7 = sub_3C4966(v5, 1, v6, 0);
  return sub_3C55A6(v7);
}


//======================================================================
// sub_3C55A6
// address: 0x003C55A6   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3C55A6(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r0

  if ( *(_DWORD *)(a4 + 8) != 1 )
    a1 = sub_3C4B8A(a1, a2, a3);
  if ( **(_BYTE **)(a4 + 4) != 62 )
    sub_3C4B8A(a1, a2, a3);
  v6 = sub_3C0C78(v4, 40);
  v8 = sub_3C4B8A(v6, v7, *(_DWORD *)(v5 + 4));
  return sub_3C55CC(v8);
}


//======================================================================
// sub_3C55CC
// address: 0x003C55CC   size: 0x20 (32 bytes)
//======================================================================
int sub_3C55CC()
{
  int v0; // r4
  int v1; // r5
  int v2; // r0
  int v3; // r0

  sub_3C0C78(v0, 91);
  sub_3C5938(v0, STACK[0x1A8], *(_DWORD *)(*(_DWORD *)(v1 + 8) + 8));
  v2 = sub_3C0C78(v0, 93);
  v3 = sub_3C4BE4(v2);
  return sub_3C55EC(v3);
}


//======================================================================
// sub_3C55EC
// address: 0x003C55EC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3C55EC(int a1, int a2, int a3, int a4)
{
  int v4; // r0

  if ( a4 != 0 )
    a1 = ((int (*)(void))sub_3C4C3C)();
  if ( *(_DWORD *)(a3 + 4) != 0 )
    sub_3C363C(a1);
  v4 = sub_3C4C3C(a1);
  return sub_3C5602(v4);
}


//======================================================================
// sub_3C5602
// address: 0x003C5602   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_3C5602(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r0

  if ( **(_DWORD **)(a3 + 8) != 41 )
    *(_DWORD *)(v3 + 280) = 1;
  sub_3C6938(v3, STACK[0x1A8], *(_DWORD *)(a3 + 4));
  v4 = sub_3C4BAE();
  return sub_3C5620(v4);
}


//======================================================================
// sub_3C5620
// address: 0x003C5620   size: 0xE (14 bytes)
//======================================================================
int sub_3C5620()
{
  int v0; // r4
  int v1; // r7
  int v2; // r0

  sub_3C6894(v0, STACK[0x1A8], v1);
  v2 = sub_3C4BD8();
  return sub_3C562E(v2);
}


//======================================================================
// sub_3C562E
// address: 0x003C562E   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3C562E(int a1, int a2, int a3)
{
  _DWORD *v3; // r4
  __int64 v4; // r0

  *((_BYTE *)v3 + a3) = 0;
  v4 = ((__int64 (__fastcall *)(_DWORD *, int, _DWORD))v3[66])(v3, 255, v3[67]);
  ++v3[72];
  sub_3C4CF0(v4, SHIDWORD(v4), 0, 1);
  return sub_3C5656();
}


//======================================================================
// sub_3C5656
// address: 0x003C5656   size: 0x36 (54 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C5656  MOVS    R0, R4
//   003C5658  LDR     R1, [SP,#arg_1A8]
//   003C565A  MOVS    R2, R6
//   003C565C  BL      sub_3C6938
//   003C5660  MOVS    R0, R4
//   003C5662  LDR     R1, [SP,#arg_1A8]
//   003C5664  MOV     R2, R8
//   003C5666  BL      sub_3C6894
//   003C566A  MOVS    R2, R7
//   003C566C  MOVS    R0, R4
//   003C566E  LDR     R1, [SP,#arg_1A8]
//   003C5670  BL      sub_3C6938
//   003C5674  LDR     R1, =(asc_44E724 - 0x3C567C); " : "
//   003C5676  MOVS    R0, R4; int
//   003C5678  ADD     R1, PC; " : "
//   003C567A  BL      sub_3C298C
//   003C567E  MOVS    R0, R4
//   003C5680  LDR     R1, [SP,#arg_1A8]
//   003C5682  MOVS    R2, R5
//   003C5684  BL      sub_3C6938
//   003C5688  BL      sub_3C2A38

//======================================================================
// sub_3C568C
// address: 0x003C568C   size: 0x28 (40 bytes)
//======================================================================
void __fastcall __noreturn sub_3C568C(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  __int64 v5; // r0

  *((_BYTE *)v4 + a4) = 0;
  v5 = ((__int64 (__fastcall *)(_DWORD *, int, _DWORD))v4[66])(v4, 255, v4[67]);
  ++v4[72];
  sub_3C4DFC(v5, SHIDWORD(v5), 1, 0);
}


//======================================================================
// sub_3C56B4
// address: 0x003C56B4   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3C56B4(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  __int64 v5; // r0
  int v6; // r0

  *((_BYTE *)v4 + a4) = 0;
  v5 = ((__int64 (__fastcall *)(_DWORD *, int, _DWORD))v4[66])(v4, 255, v4[67]);
  ++v4[72];
  v6 = sub_3C4DD6(v5, SHIDWORD(v5), 1, 0);
  return sub_3C56DC(v6);
}


//======================================================================
// sub_3C56DC
// address: 0x003C56DC   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3C56DC(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r0
  int v6; // r0

  *(_BYTE *)(v4 + a4) = 0;
  v5 = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
  ++*(_DWORD *)(v4 + 288);
  v6 = sub_3C4DB0(v5);
  return sub_3C5702(v6);
}


//======================================================================
// sub_3C5702
// address: 0x003C5702   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_3C5702(char a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  __int64 v5; // r0
  int v6; // r2
  int v7; // r0

  *((_BYTE *)v4 + a4) = a1;
  v5 = ((__int64 (__fastcall *)(_DWORD *, int, _DWORD))v4[66])(v4, 255, v4[67]);
  v6 = v4[72] + 1;
  v4[72] = v6;
  v7 = sub_3C4D8A(v5, SHIDWORD(v5), v6, 0);
  return sub_3C5726(v7);
}


//======================================================================
// sub_3C5726
// address: 0x003C5726   size: 0x12 (18 bytes)
//======================================================================
int sub_3C5726()
{
  int v0; // r4
  unsigned int v1; // r7
  unsigned int v2; // r12
  int v3; // r0

  STACK[0x1C0] = v2;
  *(_DWORD *)(v0 + 272) = &STACK[0x1C0];
  STACK[0x1C4] = v1;
  v3 = sub_3C3424();
  return sub_3C5738(v3);
}


//======================================================================
// sub_3C5738
// address: 0x003C5738   size: 0x1E (30 bytes)
//======================================================================
int sub_3C5738()
{
  int v0; // r5
  int v1; // r0

  if ( **(_DWORD **)(v0 + 4) != 1 )
    sub_3C4D48();
  if ( **(_DWORD **)(v0 + 8) != 41 )
    sub_3C4D48();
  v1 = sub_3C4D48();
  return sub_3C5756(v1);
}


//======================================================================
// sub_3C5756
// address: 0x003C5756   size: 0x18 (24 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C5756  MOVS    R0, R4
//   003C5758  LDR     R1, [SP,#arg_1A8]
//   003C575A  LDR     R2, [R5,#4]
//   003C575C  BL      sub_3C6938
//   003C5760  LDR     R1, =(asc_44E758 - 0x3C5768); "..."
//   003C5762  MOVS    R0, R4; int
//   003C5764  ADD     R1, PC; "..."
//   003C5766  BL      sub_3C298C
//   003C576A  BL      sub_3C2A38

//======================================================================
// sub_3C576E
// address: 0x003C576E   size: 0x2 (2 bytes)
//======================================================================
int sub_3C576E()
{
  return sub_3C5770();
}


//======================================================================
// sub_3C5770
// address: 0x003C5770   size: 0xC (12 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C5770  MOVS    R2, #1
//   003C5772  MOVS    R3, #0x8C
//   003C5774  LSLS    R3, R2
//   003C5776  STR     R2, [R4,R3]
//   003C5778  BL      sub_3C2A38

//======================================================================
// sub_3C577C
// address: 0x003C577C   size: 0xC (12 bytes)
//======================================================================
void __fastcall __noreturn sub_3C577C(int a1)
{
  int v1; // r4
  int v2; // r0

  *(_DWORD *)(v1 + 272) = STACK[0x1C0];
  v2 = sub_3C3438(a1);
  sub_3C5788(v2);
}


//======================================================================
// sub_3C5788
// address: 0x003C5788   size: 0x2A (42 bytes)
//======================================================================
void __fastcall __noreturn sub_3C5788(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r2
  int v5; // r0

  sub_3C2B86(a1, a2, a3, 0);
  *(_BYTE *)(v3 + v4) = 0;
  v5 = (*(int (__fastcall **)(int, int, _DWORD))(v3 + 264))(v3, 255, *(_DWORD *)(v3 + 268));
  ++*(_DWORD *)(v3 + 288);
  *(_DWORD *)(v3 + 256) = 1;
  *(_BYTE *)v3 = 32;
  *(_BYTE *)(v3 + 260) = 32;
  sub_3C3694(v5, 32, 260, 1);
}


//======================================================================
// sub_3C57B2
// address: 0x003C57B2   size: 0x48 (72 bytes)
//======================================================================
void __fastcall sub_3C57B2(int a1, int a2, int a3, char a4)
{
  _DWORD *v4; // r4
  __int64 v5; // r0
  int v6; // r2

  *((_BYTE *)v4 + a3) = a4;
  v5 = ((__int64 (__fastcall *)(_DWORD *, int, _DWORD))v4[66])(v4, 255, v4[67]);
  ++v4[72];
  sub_3C347E(v5, SHIDWORD(v5), 0);
  *((_BYTE *)v4 + v6) = 0;
  ((void (__fastcall *)(_DWORD *, int, _DWORD))v4[66])(v4, 255, v4[67]);
  ++v4[72];
  JUMPOUT(0x3C53E0);
}


//======================================================================
// sub_3C5842
// address: 0x003C5842   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3C5842(unsigned int a1, int a2, int a3)
{
  int v3; // r0

  v3 = sub_3C33A6(a1, *(_DWORD **)(a2 + 4), a3, **(_DWORD **)(a2 + 4));
  return sub_3C584A(v3);
}


//======================================================================
// sub_3C584A
// address: 0x003C584A   size: 0x6 (6 bytes)
//======================================================================
int sub_3C584A()
{
  int v0; // r0

  v0 = sub_3C4F00();
  return sub_3C5850(v0);
}


//======================================================================
// sub_3C5850
// address: 0x003C5850   size: 0x18 (24 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C5850  LDR     R2, [R5,#4]
//   003C5852  MOVS    R0, R4
//   003C5854  LDR     R1, [SP,#arg_1A8]
//   003C5856  BL      sub_3C6938
//   003C585A  MOVS    R0, R4
//   003C585C  LDR     R1, [SP,#arg_1A8]
//   003C585E  MOVS    R2, R6
//   003C5860  BL      sub_3C6894
//   003C5864  BL      sub_3C2A38

//======================================================================
// sub_3C5868
// address: 0x003C5868   size: 0x2A (42 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003C5868  CMP     R3, #0x3B ; ';'
//   003C586A  BEQ     loc_3C5870
//   003C586C  BL      sub_3C3E5A
//   003C5870  LDR     R3, [R2,#4]
//   003C5872  LDRB    R3, [R3]
//   003C5874  LSLS    R2, R3, #0x18
//   003C5876  CMP     R3, #0x30 ; '0'
//   003C5878  BEQ     loc_3C5924
//   003C587A  LSRS    R3, R2, #0x18
//   003C587C  CMP     R3, #0x31 ; '1'
//   003C587E  BEQ     loc_3C5884
//   003C5880  BL      sub_3C3E5A
//   003C5884  LDR     R1, =(aTrue_1 - 0x3C588C); "true"
//   003C5886  MOVS    R0, R4; int
//   003C5888  ADD     R1, PC; "true"
//   003C588A  BL      sub_3C298C
//   003C588E  BL      sub_3C2A38

//======================================================================
// sub_3C5938
// address: 0x003C5938   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_3C5938(int result, int a2, int a3)
{
  if ( a3 != 0 )
  {
    if ( *(_DWORD *)(result + 280) == 0 )
      return sub_3C2A14(result, a2, a3);
  }
  else
  {
    *(_DWORD *)(result + 280) = 1;
  }
  return result;
}


//======================================================================
// sub_3C5958
// address: 0x003C5958   size: 0x66E (1646 bytes)
//======================================================================
int __fastcall sub_3C5958(int a1, int a2, _DWORD *a3)
{
  int result; // r0
  const char *v7; // r5
  int jj; // r3
  int v9; // r1
  char v10; // r7
  int v11; // r2
  const char *v12; // r5
  int i; // r3
  int v14; // r2
  char v15; // r6
  const char *v16; // r5
  int j; // r3
  int v18; // r2
  char v19; // r6
  const char *v20; // r5
  int k; // r3
  int v22; // r2
  char v23; // r6
  int v24; // r2
  int v25; // r2
  const char *v26; // r5
  int v27; // r2
  char v28; // r6
  int v29; // r3
  int v30; // r2
  const char *v31; // r5
  int m; // r3
  int v33; // r2
  char v34; // r6
  const char *v35; // r5
  int n; // r3
  int v37; // r2
  char v38; // r6
  int v39; // r3
  int v40; // r2
  const char *v41; // r5
  int ii; // r3
  int v43; // r2
  char v44; // r6
  int v45; // r2
  int v46; // r2
  int v47; // r1
  int v48; // r3
  int v49; // r1
  int v50; // r3
  int v51; // r1
  int v52; // r1

  result = *a3 - 3;
  switch ( *a3 )
  {
    case 3:
      v11 = a3[1];
      if ( v11 == 0 )
        goto LABEL_55;
      goto LABEL_13;
    case 0x19:
    case 0x1C:
      v12 = " restrict";
      for ( i = *(_DWORD *)(a1 + 256); ; i = v14 )
      {
        v15 = *v12;
        if ( i == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          ++*(_DWORD *)(a1 + 288);
          v14 = 1;
          i = 0;
        }
        else
        {
          v14 = i + 1;
        }
        *(_DWORD *)(a1 + 256) = v14;
        *(_BYTE *)(a1 + i) = v15;
        ++v12;
        *(_BYTE *)(a1 + 260) = v15;
        if ( v12 == "" )
          break;
      }
      return result;
    case 0x1A:
    case 0x1D:
      v16 = " volatile";
      for ( j = *(_DWORD *)(a1 + 256); ; j = v18 )
      {
        v19 = *v16;
        if ( j == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          ++*(_DWORD *)(a1 + 288);
          v18 = 1;
          j = 0;
        }
        else
        {
          v18 = j + 1;
        }
        *(_DWORD *)(a1 + 256) = v18;
        *(_BYTE *)(a1 + j) = v19;
        ++v16;
        *(_BYTE *)(a1 + 260) = v19;
        if ( v16 == "" )
          break;
      }
      return result;
    case 0x1B:
    case 0x1E:
      v20 = " const";
      for ( k = *(_DWORD *)(a1 + 256); ; k = v22 )
      {
        v23 = *v20;
        if ( k == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          ++*(_DWORD *)(a1 + 288);
          v22 = 1;
          k = 0;
        }
        else
        {
          v22 = k + 1;
        }
        *(_DWORD *)(a1 + 256) = v22;
        *(_BYTE *)(a1 + k) = v23;
        ++v20;
        *(_BYTE *)(a1 + 260) = v23;
        if ( v20 == "" )
          break;
      }
      return result;
    case 0x1F:
      v24 = *(_DWORD *)(a1 + 256);
      if ( v24 == 255 )
      {
        *(_BYTE *)(a1 + 255) = 0;
        result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
        ++*(_DWORD *)(a1 + 288);
        v48 = 1;
        v24 = 0;
      }
      else
      {
        v48 = v24 + 1;
      }
      *(_DWORD *)(a1 + 256) = v48;
      *(_BYTE *)(a1 + v24) = 32;
      *(_BYTE *)(a1 + 260) = 32;
      goto LABEL_37;
    case 0x20:
      v25 = *(_DWORD *)(a1 + 256);
      if ( v25 == 255 )
      {
        *(_BYTE *)(a1 + 255) = 0;
        result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
        ++*(_DWORD *)(a1 + 288);
        v50 = 1;
        v25 = 0;
      }
      else
      {
        v50 = v25 + 1;
      }
      *(_DWORD *)(a1 + 256) = v50;
      *(_BYTE *)(a1 + v25) = 32;
      *(_BYTE *)(a1 + 260) = 32;
      goto LABEL_45;
    case 0x21:
      v29 = *(_DWORD *)(a1 + 256);
      if ( v29 == 255 )
      {
        *(_BYTE *)(a1 + 255) = 0;
        result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
        v49 = 1;
        ++*(_DWORD *)(a1 + 288);
        v29 = 0;
      }
      else
      {
        v49 = v29 + 1;
      }
      *(_DWORD *)(a1 + 256) = v49;
      *(_BYTE *)(a1 + v29) = 32;
      *(_BYTE *)(a1 + 260) = 32;
      v11 = a3[2];
      if ( v11 != 0 )
      {
LABEL_13:
        if ( *(_DWORD *)(a1 + 280) == 0 )
          return sub_3C2A14(a1, a2, v11);
      }
      else
      {
LABEL_55:
        *(_DWORD *)(a1 + 280) = 1;
      }
      return result;
    case 0x22:
      if ( (a2 & 4) == 0 )
      {
        v30 = *(_DWORD *)(a1 + 256);
        if ( v30 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          v52 = 1;
          ++*(_DWORD *)(a1 + 288);
          v30 = 0;
        }
        else
        {
          v52 = v30 + 1;
        }
        *(_DWORD *)(a1 + 256) = v52;
        *(_BYTE *)(a1 + v30) = 42;
        *(_BYTE *)(a1 + 260) = 42;
      }
      return result;
    case 0x23:
      v48 = *(_DWORD *)(a1 + 256);
LABEL_37:
      if ( v48 == 255 )
      {
        *(_BYTE *)(a1 + 255) = 0;
        result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
        v47 = 1;
        ++*(_DWORD *)(a1 + 288);
        v48 = 0;
      }
      else
      {
        v47 = v48 + 1;
      }
      *(_DWORD *)(a1 + 256) = v47;
      *(_BYTE *)(a1 + v48) = 38;
      *(_BYTE *)(a1 + 260) = 38;
      break;
    case 0x24:
      v50 = *(_DWORD *)(a1 + 256);
LABEL_45:
      v26 = "&&";
      while ( 1 )
      {
        v28 = *v26;
        if ( v50 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          ++*(_DWORD *)(a1 + 288);
          v27 = 1;
          v50 = 0;
        }
        else
        {
          v27 = v50 + 1;
        }
        *(_DWORD *)(a1 + 256) = v27;
        *(_BYTE *)(a1 + v50) = v28;
        ++v26;
        *(_BYTE *)(a1 + 260) = v28;
        if ( v26 == "" )
          break;
        v50 = v27;
      }
      break;
    case 0x25:
      v31 = "complex ";
      for ( m = *(_DWORD *)(a1 + 256); ; m = v33 )
      {
        v34 = *v31;
        if ( m == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          ++*(_DWORD *)(a1 + 288);
          v33 = 1;
          m = 0;
        }
        else
        {
          v33 = m + 1;
        }
        *(_DWORD *)(a1 + 256) = v33;
        *(_BYTE *)(a1 + m) = v34;
        ++v31;
        *(_BYTE *)(a1 + 260) = v34;
        if ( v31 == "" )
          break;
      }
      break;
    case 0x26:
      v35 = "imaginary ";
      for ( n = *(_DWORD *)(a1 + 256); ; n = v37 )
      {
        v38 = *v35;
        if ( n == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          ++*(_DWORD *)(a1 + 288);
          v37 = 1;
          n = 0;
        }
        else
        {
          v37 = n + 1;
        }
        *(_DWORD *)(a1 + 256) = v37;
        *(_BYTE *)(a1 + n) = v38;
        ++v35;
        *(_BYTE *)(a1 + 260) = v38;
        if ( v35 == "" )
          break;
      }
      break;
    case 0x2B:
      if ( *(_BYTE *)(a1 + 260) != 40 )
      {
        v39 = *(_DWORD *)(a1 + 256);
        if ( v39 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          v51 = 1;
          ++*(_DWORD *)(a1 + 288);
          v39 = 0;
        }
        else
        {
          v51 = v39 + 1;
        }
        *(_DWORD *)(a1 + 256) = v51;
        *(_BYTE *)(a1 + v39) = 32;
        *(_BYTE *)(a1 + 260) = 32;
      }
      v40 = a3[1];
      if ( v40 != 0 )
      {
        if ( *(_DWORD *)(a1 + 280) == 0 )
          result = sub_3C2A14(a1, a2, v40);
      }
      else
      {
        *(_DWORD *)(a1 + 280) = 1;
      }
      v41 = "::*";
      for ( ii = *(_DWORD *)(a1 + 256); ; ii = v43 )
      {
        v44 = *v41;
        if ( ii == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          ++*(_DWORD *)(a1 + 288);
          v43 = 1;
          ii = 0;
        }
        else
        {
          v43 = ii + 1;
        }
        *(_DWORD *)(a1 + 256) = v43;
        *(_BYTE *)(a1 + ii) = v44;
        ++v41;
        *(_BYTE *)(a1 + 260) = v44;
        if ( v41 == "" )
          break;
      }
      break;
    case 0x2D:
      v7 = " __vector(";
      for ( jj = *(_DWORD *)(a1 + 256); ; jj = v9 )
      {
        v10 = *v7;
        if ( jj == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          result = (*(int (__fastcall **)(int, int, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 264))(
                     a1,
                     255,
                     *(_DWORD *)(a1 + 268),
                     *(_DWORD *)(a1 + 264),
                     *(_DWORD *)(a1 + 264),
                     *(_DWORD *)(a1 + 268));
          v9 = 1;
          ++*(_DWORD *)(a1 + 288);
          jj = 0;
        }
        else
        {
          v9 = jj + 1;
        }
        *(_DWORD *)(a1 + 256) = v9;
        *(_BYTE *)(a1 + jj) = v10;
        ++v7;
        *(_BYTE *)(a1 + 260) = v10;
        if ( v7 == "" )
          break;
      }
      v45 = a3[1];
      if ( v45 != 0 )
      {
        if ( *(_DWORD *)(a1 + 280) == 0 )
        {
          result = sub_3C2A14(a1, a2, v45);
          v9 = *(_DWORD *)(a1 + 256);
        }
      }
      else
      {
        *(_DWORD *)(a1 + 280) = 1;
      }
      if ( v9 == 255 )
      {
        *(_BYTE *)(a1 + 255) = 0;
        result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
        v9 = 0;
        ++*(_DWORD *)(a1 + 288);
        v46 = 1;
      }
      else
      {
        v46 = v9 + 1;
      }
      *(_DWORD *)(a1 + 256) = v46;
      *(_BYTE *)(a1 + v9) = 41;
      *(_BYTE *)(a1 + 260) = 41;
      break;
    default:
      if ( *(_DWORD *)(a1 + 280) == 0 )
        result = sub_3C2A14(a1, a2, (int)a3);
      break;
  }
  return result;
}


//======================================================================
// sub_3C5FCC
// address: 0x003C5FCC   size: 0x2F6 (758 bytes)
//======================================================================
int __fastcall sub_3C5FCC(int result, int a2, _DWORD *a3, int a4)
{
  int v5; // r5
  _DWORD *v6; // r4
  int *v8; // r2
  int v9; // r3
  int v10; // r8
  int v11; // r3
  int v12; // r9
  int v13; // r3
  const char *v14; // r6
  int v15; // r2
  char v16; // r7
  int v17; // r1
  _DWORD *v18; // r4
  int v19; // r3
  const char *v20; // r6
  _DWORD *v21; // r10
  int i; // r3
  int v23; // r2
  char v24; // r7
  size_t v25; // r0
  int v26; // r2
  int v27; // r6
  size_t v28; // r4
  int v29; // r3
  char v30; // r7
  const char *v31; // r6
  int v32; // r2
  char v33; // r7
  char s[32]; // [sp+2Ch] [bp-20h] BYREF

  v5 = result;
  v6 = a3;
  if ( a3 == nullptr || *(_DWORD *)(result + 280) != 0 )
    return result;
  while ( v6[2] != 0 )
  {
LABEL_9:
    v6 = (_DWORD *)*v6;
    if ( v6 == nullptr || *(_DWORD *)(v5 + 280) != 0 )
      return result;
  }
  if ( a4 != 0 )
  {
    v8 = (int *)v6[1];
    v9 = *v8;
    v6[2] = 1;
    v10 = *(_DWORD *)(v5 + 272);
    *(_DWORD *)(v5 + 272) = v6[3];
    if ( v9 == 41 )
    {
LABEL_14:
      result = sub_3C64AC(v5, a2, v8 + 2, *v6);
      *(_DWORD *)(v5 + 272) = v10;
      return result;
    }
  }
  else
  {
    v8 = (int *)v6[1];
    v9 = *v8;
    if ( (unsigned int)(*v8 - 28) <= 4 )
      goto LABEL_9;
    v6[2] = 1;
    v10 = *(_DWORD *)(v5 + 272);
    *(_DWORD *)(v5 + 272) = v6[3];
    if ( v9 == 41 )
      goto LABEL_14;
  }
  if ( v9 == 42 )
  {
    result = sub_3C62D4(v5, a2, v8 + 1);
    *(_DWORD *)(v5 + 272) = v10;
    return result;
  }
  if ( v9 != 2 )
  {
    result = sub_3C5958(v5, a2, v8);
    *(_DWORD *)(v5 + 272) = v10;
    goto LABEL_9;
  }
  v11 = *(_DWORD *)(v5 + 276);
  *(_DWORD *)(v5 + 276) = 0;
  v12 = v11;
  sub_3C5938(v5, a2, v8[1]);
  *(_DWORD *)(v5 + 276) = v12;
  v13 = *(_DWORD *)(v5 + 256);
  if ( (a2 & 4) != 0 )
  {
    if ( v13 == 255 )
    {
      *(_BYTE *)(v5 + 255) = 0;
      (*(void (__fastcall **)(int, int, _DWORD))(v5 + 264))(v5, 255, *(_DWORD *)(v5 + 268));
      v17 = 1;
      ++*(_DWORD *)(v5 + 288);
      v13 = 0;
    }
    else
    {
      v17 = v13 + 1;
    }
    *(_DWORD *)(v5 + 256) = v17;
    *(_BYTE *)(v5 + v13) = 46;
    *(_BYTE *)(v5 + 260) = 46;
  }
  else
  {
    v14 = "::";
    while ( 1 )
    {
      v16 = *v14;
      if ( v13 == 255 )
      {
        *(_BYTE *)(v5 + 255) = 0;
        (*(void (__fastcall **)(int, int, _DWORD))(v5 + 264))(v5, 255, *(_DWORD *)(v5 + 268));
        ++*(_DWORD *)(v5 + 288);
        v15 = 1;
        v13 = 0;
      }
      else
      {
        v15 = v13 + 1;
      }
      *(_DWORD *)(v5 + 256) = v15;
      *(_BYTE *)(v5 + v13) = v16;
      ++v14;
      *(_BYTE *)(v5 + 260) = v16;
      if ( v14 == "" )
        break;
      v13 = v15;
    }
  }
  v18 = *(_DWORD **)(v6[1] + 8);
  v19 = *v18;
  if ( *v18 != 69 )
    goto LABEL_30;
  v20 = "{default arg#";
  v21 = v18;
  for ( i = *(_DWORD *)(v5 + 256); ; i = v23 )
  {
    v24 = *v20;
    if ( i == 255 )
    {
      *(_BYTE *)(v5 + 255) = 0;
      (*(void (__fastcall **)(int, int, _DWORD))(v5 + 264))(v5, 255, *(_DWORD *)(v5 + 268));
      ++*(_DWORD *)(v5 + 288);
      v23 = 1;
      i = 0;
    }
    else
    {
      v23 = i + 1;
    }
    *(_DWORD *)(v5 + 256) = v23;
    *(_BYTE *)(v5 + i) = v24;
    ++v20;
    *(_BYTE *)(v5 + 260) = v24;
    if ( v20 == "" )
      break;
  }
  j_sprintf(s, "%ld", v18[2] + 1);
  v25 = j_strlen(s);
  if ( v25 != 0 )
  {
    v26 = *(_DWORD *)(v5 + 256);
    v27 = 0;
    v28 = v25;
    while ( 1 )
    {
      v30 = s[v27];
      if ( v26 == 255 )
      {
        *(_BYTE *)(v5 + 255) = 0;
        (*(void (__fastcall **)(int, int, _DWORD))(v5 + 264))(v5, 255, *(_DWORD *)(v5 + 268));
        ++*(_DWORD *)(v5 + 288);
        v29 = 1;
        v26 = 0;
      }
      else
      {
        v29 = v26 + 1;
      }
      *(_DWORD *)(v5 + 256) = v29;
      *(_BYTE *)(v5 + v26) = v30;
      ++v27;
      *(_BYTE *)(v5 + 260) = v30;
      if ( v27 == v28 )
        break;
      v26 = v29;
    }
    v18 = v21;
  }
  else
  {
    v29 = *(_DWORD *)(v5 + 256);
  }
  v31 = "}::";
  while ( 1 )
  {
    v33 = *v31;
    if ( v29 == 255 )
    {
      *(_BYTE *)(v5 + 255) = 0;
      (*(void (__fastcall **)(int, int, _DWORD))(v5 + 264))(v5, 255, *(_DWORD *)(v5 + 268));
      ++*(_DWORD *)(v5 + 288);
      v32 = 1;
      v29 = 0;
    }
    else
    {
      v32 = v29 + 1;
    }
    *(_DWORD *)(v5 + 256) = v32;
    *(_BYTE *)(v5 + v29) = v33;
    ++v31;
    *(_BYTE *)(v5 + 260) = v33;
    if ( v31 == "" )
      break;
    v29 = v32;
  }
  do
  {
    v18 = (_DWORD *)v18[1];
    v19 = *v18;
LABEL_30:
    ;
  }
  while ( (unsigned int)(v19 - 28) <= 4 );
  result = sub_3C5938(v5, a2, (int)v18);
  *(_DWORD *)(v5 + 272) = v10;
  return result;
}


//======================================================================
// sub_3C62D4
// address: 0x003C62D4   size: 0x1D2 (466 bytes)
//======================================================================
int __fastcall sub_3C62D4(int result, int a2, int *a3, int *a4)
{
  int v5; // r4
  _DWORD *v7; // r8
  int v8; // r3
  const char *v9; // r5
  int i; // r3
  int v11; // r2
  char v12; // r6
  int v13; // r2
  int v14; // r2
  int v15; // r1
  int v16; // r3

  v5 = result;
  v7 = a4;
  if ( a4 != nullptr )
  {
    while ( a4[2] != 0 )
    {
      a4 = (int *)*a4;
      if ( a4 == nullptr )
      {
        result = sub_3C5FCC(result, a2, v7, 0);
        goto LABEL_5;
      }
    }
    if ( *(_DWORD *)a4[1] == 42 )
    {
      result = sub_3C5FCC(result, a2, v7, 0);
      v14 = *(_DWORD *)(v5 + 256);
      goto LABEL_10;
    }
    v9 = " (";
    for ( i = *(_DWORD *)(result + 256); ; i = v11 )
    {
      v12 = *v9;
      if ( i == 255 )
      {
        *(_BYTE *)(v5 + 255) = 0;
        (*(void (__fastcall **)(int, int))(v5 + 264))(v5, 255);
        ++*(_DWORD *)(v5 + 288);
        v11 = 1;
        i = 0;
      }
      else
      {
        v11 = i + 1;
      }
      *(_DWORD *)(v5 + 256) = v11;
      *(_BYTE *)(v5 + i) = v12;
      ++v9;
      *(_BYTE *)(v5 + 260) = v12;
      if ( v9 == "" )
        break;
    }
    result = sub_3C5FCC(v5, a2, v7, 0);
    v13 = *(_DWORD *)(v5 + 256);
    if ( v13 == 255 )
    {
      *(_BYTE *)(v5 + 255) = 0;
      result = (*(int (__fastcall **)(int, int, _DWORD))(v5 + 264))(v5, 255, *(_DWORD *)(v5 + 268));
      ++*(_DWORD *)(v5 + 288);
      v8 = 1;
      v13 = 0;
    }
    else
    {
      v8 = v13 + 1;
    }
    *(_DWORD *)(v5 + 256) = v8;
    *(_BYTE *)(v5 + v13) = 41;
    *(_BYTE *)(v5 + 260) = 41;
  }
  else
  {
LABEL_5:
    v8 = *(_DWORD *)(v5 + 256);
  }
  if ( v8 == 255 )
  {
    *(_BYTE *)(v5 + 255) = 0;
    result = (*(int (__fastcall **)(int, int, _DWORD))(v5 + 264))(v5, 255, *(_DWORD *)(v5 + 268));
    ++*(_DWORD *)(v5 + 288);
    v14 = 1;
    v8 = 0;
  }
  else
  {
    v14 = v8 + 1;
  }
  *(_DWORD *)(v5 + 256) = v14;
  *(_BYTE *)(v5 + v8) = 32;
  *(_BYTE *)(v5 + 260) = 32;
LABEL_10:
  if ( v14 == 255 )
  {
    *(_BYTE *)(v5 + 255) = 0;
    result = (*(int (__fastcall **)(int, int, _DWORD))(v5 + 264))(v5, 255, *(_DWORD *)(v5 + 268));
    ++*(_DWORD *)(v5 + 288);
    v16 = 1;
    v14 = 0;
  }
  else
  {
    v16 = v14 + 1;
  }
  *(_DWORD *)(v5 + 256) = v16;
  *(_BYTE *)(v5 + v14) = 91;
  *(_BYTE *)(v5 + 260) = 91;
  if ( *a3 != 0 )
  {
    result = sub_3C5938(v5, a2, *a3);
    v16 = *(_DWORD *)(v5 + 256);
  }
  if ( v16 == 255 )
  {
    *(_BYTE *)(v5 + 255) = 0;
    result = (*(int (__fastcall **)(int, int, _DWORD))(v5 + 264))(v5, 255, *(_DWORD *)(v5 + 268));
    v15 = 1;
    ++*(_DWORD *)(v5 + 288);
    v16 = 0;
  }
  else
  {
    v15 = v16 + 1;
  }
  *(_DWORD *)(v5 + 256) = v15;
  *(_BYTE *)(v5 + v16) = 93;
  *(_BYTE *)(v5 + 260) = 93;
  return result;
}


//======================================================================
// sub_3C64AC
// address: 0x003C64AC   size: 0x224 (548 bytes)
//======================================================================
int __fastcall sub_3C64AC(int a1, int a2, int *a3, _DWORD *a4)
{
  _DWORD *v8; // r4
  unsigned int v9; // r5
  int v10; // r3
  int v11; // r2
  int v12; // r2
  int v13; // r4
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int result; // r0
  int v18; // r3
  int v19; // r3

  if ( a4 != nullptr && a4[2] == 0 )
  {
    v8 = a4;
    while ( 1 )
    {
      v9 = *(_DWORD *)v8[1] - 25;
      if ( v9 <= 0x12 )
      {
        if ( ((1 << v9) & 0x43107) != 0 )
        {
          v10 = *(unsigned __int8 *)(a1 + 260);
          goto LABEL_10;
        }
        if ( ((1 << v9) & 0xE00) != 0 )
          break;
      }
      v8 = (_DWORD *)*v8;
      if ( v8 == nullptr || v8[2] != 0 )
        goto LABEL_16;
    }
    v10 = *(unsigned __int8 *)(a1 + 260);
    if ( (v10 & 0xFD) != 0x28 )
    {
LABEL_10:
      if ( v10 != 32 )
      {
        v11 = *(_DWORD *)(a1 + 256);
        if ( v11 == 255 )
        {
          *(_BYTE *)(a1 + 255) = 0;
          (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
          ++*(_DWORD *)(a1 + 288);
          v19 = 1;
          v11 = 0;
        }
        else
        {
          v19 = v11 + 1;
        }
        *(_DWORD *)(a1 + 256) = v19;
        *(_BYTE *)(a1 + v11) = 32;
        *(_BYTE *)(a1 + 260) = 32;
        if ( v19 != 255 )
          goto LABEL_27;
        goto LABEL_15;
      }
    }
    v19 = *(_DWORD *)(a1 + 256);
    if ( v19 != 255 )
    {
LABEL_27:
      v12 = v19 + 1;
LABEL_28:
      *(_DWORD *)(a1 + 256) = v12;
      *(_BYTE *)(a1 + v19) = 40;
      *(_BYTE *)(a1 + 260) = 40;
      v13 = *(_DWORD *)(a1 + 276);
      *(_DWORD *)(a1 + 276) = 0;
      sub_3C5FCC(a1, a2, a4, 0);
      v18 = *(_DWORD *)(a1 + 256);
      if ( v18 == 255 )
      {
        *(_BYTE *)(a1 + 255) = 0;
        (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
        ++*(_DWORD *)(a1 + 288);
        v14 = 1;
        v18 = 0;
      }
      else
      {
        v14 = v18 + 1;
      }
      *(_DWORD *)(a1 + 256) = v14;
      *(_BYTE *)(a1 + v18) = 41;
      *(_BYTE *)(a1 + 260) = 41;
      if ( v14 == 255 )
        goto LABEL_31;
      goto LABEL_17;
    }
LABEL_15:
    *(_BYTE *)(a1 + v19) = 0;
    (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
    ++*(_DWORD *)(a1 + 288);
    v12 = 1;
    v19 = 0;
    goto LABEL_28;
  }
LABEL_16:
  v13 = *(_DWORD *)(a1 + 276);
  *(_DWORD *)(a1 + 276) = 0;
  sub_3C5FCC(a1, a2, a4, 0);
  v14 = *(_DWORD *)(a1 + 256);
  if ( v14 == 255 )
  {
LABEL_31:
    *(_BYTE *)(a1 + v14) = 0;
    (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
    ++*(_DWORD *)(a1 + 288);
    v15 = 1;
    v14 = 0;
    goto LABEL_18;
  }
LABEL_17:
  v15 = v14 + 1;
LABEL_18:
  *(_DWORD *)(a1 + 256) = v15;
  *(_BYTE *)(a1 + v14) = 40;
  *(_BYTE *)(a1 + 260) = 40;
  if ( *a3 != 0 && *(_DWORD *)(a1 + 280) == 0 )
  {
    sub_3C2A14(a1, a2, *a3);
    v15 = *(_DWORD *)(a1 + 256);
    if ( v15 != 255 )
      goto LABEL_21;
LABEL_24:
    *(_BYTE *)(a1 + v15) = 0;
    (*(void (__fastcall **)(int, int, _DWORD))(a1 + 264))(a1, 255, *(_DWORD *)(a1 + 268));
    v16 = 1;
    ++*(_DWORD *)(a1 + 288);
    v15 = 0;
    goto LABEL_22;
  }
  if ( v15 == 255 )
    goto LABEL_24;
LABEL_21:
  v16 = v15 + 1;
LABEL_22:
  *(_DWORD *)(a1 + 256) = v16;
  *(_BYTE *)(a1 + v15) = 41;
  *(_BYTE *)(a1 + 260) = 41;
  result = sub_3C5FCC(a1, a2, a4, 1);
  *(_DWORD *)(a1 + 276) = v13;
  return result;
}


//======================================================================
// sub_3C66D4
// address: 0x003C66D4   size: 0x1BE (446 bytes)
//======================================================================
_DWORD *__fastcall sub_3C66D4(_DWORD *result, int a2, int a3)
{
  _DWORD *v4; // r2
  int v6; // r4
  int v7; // r8
  int v8; // r3
  int v9; // r2
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r1
  int v14; // r1
  int v15; // r3
  int v16; // [sp+0h] [bp-Ch] BYREF
  _DWORD *v17; // [sp+4h] [bp-8h]

  v4 = *(_DWORD **)a3;
  v6 = (int)result;
  if ( *v4 == 4 )
  {
    v7 = result[69];
    result[69] = 0;
    v8 = result[68];
    result[68] = &v16;
    v17 = *(_DWORD **)a3;
    v9 = v17[1];
    v16 = v8;
    if ( v9 != 0 )
    {
      if ( result[70] == 0 )
      {
        result = (_DWORD *)sub_3C2A14((int)result, a2, v9);
        v8 = v16;
      }
    }
    else
    {
      result[70] = 1;
    }
    *(_DWORD *)(v6 + 272) = v8;
    if ( *(_BYTE *)(v6 + 260) == 60 )
    {
      v15 = *(_DWORD *)(v6 + 256);
      if ( v15 == 255 )
      {
        *(_BYTE *)(v6 + 255) = 0;
        result = (_DWORD *)(*(int (__fastcall **)(int, int, _DWORD))(v6 + 264))(v6, 255, *(_DWORD *)(v6 + 268));
        ++*(_DWORD *)(v6 + 288);
        v10 = 1;
        v15 = 0;
      }
      else
      {
        v10 = v15 + 1;
      }
      *(_DWORD *)(v6 + 256) = v10;
      *(_BYTE *)(v6 + v15) = 32;
      *(_BYTE *)(v6 + 260) = 32;
    }
    else
    {
      v10 = *(_DWORD *)(v6 + 256);
    }
    if ( v10 == 255 )
    {
      *(_BYTE *)(v6 + 255) = 0;
      result = (_DWORD *)(*(int (__fastcall **)(int, int, _DWORD))(v6 + 264))(v6, 255, *(_DWORD *)(v6 + 268));
      ++*(_DWORD *)(v6 + 288);
      v11 = 1;
      v10 = 0;
    }
    else
    {
      v11 = v10 + 1;
    }
    *(_DWORD *)(v6 + 256) = v11;
    *(_BYTE *)(v6 + v10) = 60;
    *(_BYTE *)(v6 + 260) = 60;
    v12 = *(_DWORD *)(*(_DWORD *)a3 + 8);
    if ( v12 != 0 )
    {
      if ( *(_DWORD *)(v6 + 280) == 0 )
      {
        result = (_DWORD *)sub_3C2A14(v6, a2, v12);
        v11 = *(_DWORD *)(v6 + 256);
        if ( *(_BYTE *)(v6 + 260) == 62 )
        {
          if ( v11 == 255 )
          {
            *(_BYTE *)(v6 + 255) = 0;
            result = (_DWORD *)(*(int (__fastcall **)(int, int, _DWORD))(v6 + 264))(v6, 255, *(_DWORD *)(v6 + 268));
            v14 = 1;
            ++*(_DWORD *)(v6 + 288);
            v11 = 0;
          }
          else
          {
            v14 = v11 + 1;
          }
          *(_DWORD *)(v6 + 256) = v14;
          *(_BYTE *)(v6 + v11) = 32;
          *(_BYTE *)(v6 + 260) = 32;
          v11 = v14;
        }
      }
    }
    else
    {
      *(_DWORD *)(v6 + 280) = 1;
    }
    if ( v11 == 255 )
    {
      *(_BYTE *)(v6 + 255) = 0;
      result = (_DWORD *)(*(int (__fastcall **)(int, int, _DWORD))(v6 + 264))(v6, 255, *(_DWORD *)(v6 + 268));
      v13 = 1;
      ++*(_DWORD *)(v6 + 288);
      v11 = 0;
    }
    else
    {
      v13 = v11 + 1;
    }
    *(_DWORD *)(v6 + 256) = v13;
    *(_BYTE *)(v6 + v11) = 62;
    *(_BYTE *)(v6 + 260) = 62;
    *(_DWORD *)(v6 + 276) = v7;
  }
  else if ( result[70] == 0 )
  {
    return (_DWORD *)sub_3C2A14((int)result, a2, (int)v4);
  }
  return result;
}


//======================================================================
// sub_3C6894
// address: 0x003C6894   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall sub_3C6894(int result, int a2, _DWORD *a3)
{
  int v3; // r4
  int v4; // r3
  int v5; // r7
  int v6; // r8
  int v7; // r5
  int i; // r3
  int v9; // r2
  char v10; // r6

  v3 = result;
  if ( *a3 == 49 )
  {
    v4 = a3[1];
    v5 = *(_DWORD *)(v4 + 8);
    v6 = *(_DWORD *)(v4 + 4);
    if ( v5 != 0 )
    {
      v7 = 0;
      for ( i = *(_DWORD *)(result + 256); ; i = v9 )
      {
        v10 = *(_BYTE *)(v6 + v7);
        if ( i == 255 )
        {
          *(_BYTE *)(v3 + 255) = 0;
          result = (*(int (__fastcall **)(int, int, _DWORD))(v3 + 264))(v3, 255, *(_DWORD *)(v3 + 268));
          ++*(_DWORD *)(v3 + 288);
          v9 = 1;
          i = 0;
        }
        else
        {
          v9 = i + 1;
        }
        *(_DWORD *)(v3 + 256) = v9;
        *(_BYTE *)(v3 + i) = v10;
        ++v7;
        *(_BYTE *)(v3 + 260) = v10;
        if ( v5 == v7 )
          break;
      }
    }
  }
  else if ( *(_DWORD *)(result + 280) == 0 )
  {
    return sub_3C2A14(result, a2, (int)a3);
  }
  return result;
}


//======================================================================
// sub_3C6938
// address: 0x003C6938   size: 0xCC (204 bytes)
//======================================================================
int __fastcall sub_3C6938(int result, int a2, int *a3)
{
  int v3; // r3
  int v4; // r4
  bool v7; // r2
  int v8; // r6
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r1

  v3 = *a3;
  v4 = result;
  if ( (unsigned int)*a3 <= 1 || (v7 = v3 == 48) || v3 == 6 )
  {
    v8 = 1;
    if ( *(_DWORD *)(result + 280) == 0 )
      goto LABEL_10;
  }
  else
  {
    v9 = *(_DWORD *)(result + 256);
    if ( v9 == 255 )
    {
      *(_BYTE *)(result + 255) = v7;
      result = (*(int (__fastcall **)(int, int, _DWORD))(result + 264))(result, 255, *(_DWORD *)(result + 268));
      ++*(_DWORD *)(v4 + 288);
      v10 = 1;
      v9 = 0;
    }
    else
    {
      v10 = v9 + 1;
    }
    *(_DWORD *)(v4 + 256) = v10;
    *(_BYTE *)(v4 + v9) = 40;
    *(_BYTE *)(v4 + 260) = 40;
    v8 = 0;
    if ( *(_DWORD *)(v4 + 280) == 0 )
    {
LABEL_10:
      result = sub_3C2A14(v4, a2, (int)a3);
      if ( v8 != 0 )
        return result;
      goto LABEL_11;
    }
  }
  if ( v8 != 0 )
    return result;
LABEL_11:
  v11 = *(_DWORD *)(v4 + 256);
  if ( v11 == 255 )
  {
    *(_BYTE *)(v4 + 255) = v8;
    result = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 264))(v4, 255, *(_DWORD *)(v4 + 268));
    v12 = 1;
    ++*(_DWORD *)(v4 + 288);
    v11 = 0;
  }
  else
  {
    v12 = v11 + 1;
  }
  *(_DWORD *)(v4 + 256) = v12;
  *(_BYTE *)(v4 + v11) = 41;
  *(_BYTE *)(v4 + 260) = 41;
  return result;
}


//======================================================================
// sub_3C6A04
// address: 0x003C6A04   size: 0x234 (564 bytes)
//======================================================================
bool __fastcall sub_3C6A04(char *a1, void (__fastcall *a2)(_BYTE *), int a3)
{
  int v4; // r0
  int v6; // r10
  unsigned int v7; // r6
  int v8; // r3
  size_t v9; // r0
  _DWORD *v10; // r11
  int v11; // r3
  int v12; // r5
  char *v14; // r3
  int v15; // r2
  int v16; // r3
  _DWORD *v17; // r0
  _DWORD *v18; // r2
  int v19; // [sp+0h] [bp+0h] BYREF
  int v20; // [sp+4h] [bp+4h]
  _DWORD v21[2]; // [sp+8h] [bp+8h] BYREF
  int v22; // [sp+10h] [bp+10h]
  char *v23; // [sp+14h] [bp+14h]
  int *v24; // [sp+18h] [bp+18h]
  int v25; // [sp+1Ch] [bp+1Ch]
  int v26; // [sp+20h] [bp+20h]
  int *v27; // [sp+24h] [bp+24h]
  int v28; // [sp+28h] [bp+28h]
  size_t v29; // [sp+2Ch] [bp+2Ch]
  int v30; // [sp+30h] [bp+30h]
  int v31; // [sp+34h] [bp+34h]
  int v32; // [sp+38h] [bp+38h]
  _BYTE v33[256]; // [sp+3Ch] [bp+3Ch] BYREF
  int v34; // [sp+13Ch] [bp+13Ch]
  char v35; // [sp+140h] [bp+140h]
  void (__fastcall *v36)(_BYTE *); // [sp+144h] [bp+144h]
  int v37; // [sp+148h] [bp+148h]
  int v38; // [sp+14Ch] [bp+14Ch]
  int v39; // [sp+150h] [bp+150h]
  int v40; // [sp+154h] [bp+154h]
  int v41; // [sp+158h] [bp+158h]
  int v42; // [sp+15Ch] [bp+15Ch]

  v4 = (unsigned __int8)*a1;
  v20 = a3;
  v6 = v4;
  if ( v4 == 95 && a1[1] == 90 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( j_strncmp(a1, "_GLOBAL_", 8u) == 0 )
    {
      v8 = (unsigned __int8)a1[8];
      if ( v8 == 46 || v8 == 95 || v8 == 36 )
      {
        if ( a1[9] == 73 || (v7 = 0, a1[9] == 68) )
        {
          v7 = 0;
          if ( a1[10] == 95 )
            v7 = (a1[9] != 73) + 2;
        }
      }
    }
  }
  v21[0] = a1;
  v23 = a1;
  v29 = j_strlen(a1);
  v21[1] = &a1[v29];
  v26 = 2 * v29;
  v22 = 17;
  v25 = 0;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v24 = &v19;
  v27 = &v19 - 2 * ((4 * v29 + 10) >> 3);
  if ( v7 == 1 )
  {
    if ( v6 != 95 )
    {
      v11 = v6;
      v10 = nullptr;
      goto LABEL_23;
    }
    v23 = a1 + 1;
    v11 = (unsigned __int8)a1[1];
    if ( v11 != 90 )
    {
      v10 = nullptr;
      goto LABEL_23;
    }
    v23 = a1 + 2;
    v10 = sub_3C1CB4((int)v21, 1);
    if ( (v22 & 1) != 0 )
    {
      v14 = v23;
      v15 = (unsigned __int8)*v23;
      if ( v15 != 46 )
      {
LABEL_38:
        v11 = v15;
        goto LABEL_23;
      }
      while ( 1 )
      {
        v16 = (unsigned __int8)v14[1];
        if ( (unsigned __int8)(v16 - 97) > 0x19u && v16 != 95 && (unsigned __int8)(v16 - 48) > 9u )
          break;
        v17 = sub_3C0A4C(v21, (int)v10);
        v14 = v23;
        v15 = (unsigned __int8)*v23;
        v10 = v17;
        if ( v15 != 46 )
          goto LABEL_38;
      }
    }
    v11 = (unsigned __int8)*v23;
    goto LABEL_23;
  }
  if ( v7 != 0 && v7 <= 3 )
  {
    v23 = a1 + 11;
    if ( a1[11] == 95 && a1[12] == 90 )
    {
      v23 = a1 + 13;
      v18 = sub_3C1CB4((int)v21, 0);
    }
    else
    {
      v9 = j_strlen(a1 + 11);
      v18 = sub_3C08F8(v21, (int)(a1 + 11), v9);
    }
    v10 = sub_3C085C(v21, (v7 != 2) + 66, (int)v18, 0);
    v23 += j_strlen(v23);
    v11 = (unsigned __int8)*v23;
  }
  else
  {
    v10 = sub_3C14AC((int)v21);
    v11 = (unsigned __int8)*v23;
  }
LABEL_23:
  v12 = 0;
  if ( v11 == 0 )
  {
    if ( v10 != nullptr )
    {
      v34 = 0;
      v35 = 0;
      v38 = 0;
      v39 = 0;
      v41 = 0;
      v42 = 0;
      v36 = a2;
      v37 = v20;
      v40 = 0;
      sub_3C2A14((int)v33, 17, (int)v10);
      v33[v34] = 0;
      v36(v33);
      return v40 == 0;
    }
    else
    {
      return false;
    }
  }
  return v12;
}


//======================================================================
// sub_3C6DB4
// address: 0x003C6DB4   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_3C6DB4(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r3
  int v3; // r2

  v2 = 1;
  v3 = 0;
  if ( a1 >= a2 )
  {
    while ( a2 < 0x10000000 && a2 < a1 )
    {
      a2 *= 16;
      v2 *= 16;
    }
    while ( a2 < 0x80000000 && a2 < a1 )
    {
      a2 *= 2;
      v2 *= 2;
    }
    while ( 1 )
    {
      if ( a1 >= a2 )
      {
        a1 -= a2;
        v3 |= v2;
      }
      if ( a1 >= a2 >> 1 )
      {
        a1 -= a2 >> 1;
        v3 |= v2 >> 1;
      }
      if ( a1 >= a2 >> 2 )
      {
        a1 -= a2 >> 2;
        v3 |= v2 >> 2;
      }
      if ( a1 >= a2 >> 3 )
      {
        a1 -= a2 >> 3;
        v3 |= v2 >> 3;
      }
      if ( a1 == 0 )
        break;
      v2 >>= 4;
      if ( v2 == 0 )
        break;
      a2 >>= 4;
    }
  }
  return v3;
}


//======================================================================
// sub_3C6E48
// address: 0x003C6E48   size: 0x84 (132 bytes)
//======================================================================
int __fastcall sub_3C6E48(unsigned int a1, unsigned int a2)
{
  int v2; // r12
  unsigned int v3; // r3
  int v4; // r2
  int result; // r0

  v2 = a1 ^ a2;
  v3 = 1;
  v4 = 0;
  if ( (a2 & 0x80000000) != 0 )
    a2 = -a2;
  if ( (a1 & 0x80000000) != 0 )
    a1 = -a1;
  if ( a1 >= a2 )
  {
    while ( a2 < 0x10000000 && a2 < a1 )
    {
      a2 *= 16;
      v3 *= 16;
    }
    while ( a2 < 0x80000000 && a2 < a1 )
    {
      a2 *= 2;
      v3 *= 2;
    }
    while ( 1 )
    {
      if ( a1 >= a2 )
      {
        a1 -= a2;
        v4 |= v3;
      }
      if ( a1 >= a2 >> 1 )
      {
        a1 -= a2 >> 1;
        v4 |= v3 >> 1;
      }
      if ( a1 >= a2 >> 2 )
      {
        a1 -= a2 >> 2;
        v4 |= v3 >> 2;
      }
      if ( a1 >= a2 >> 3 )
      {
        a1 -= a2 >> 3;
        v4 |= v3 >> 3;
      }
      if ( a1 == 0 )
        break;
      v3 >>= 4;
      if ( v3 == 0 )
        break;
      a2 >>= 4;
    }
  }
  result = v4;
  if ( v2 < 0 )
    return -v4;
  return result;
}


//======================================================================
// sub_3C6ECC
// address: 0x003C6ECC   size: 0x4 (4 bytes)
//======================================================================
// attributes: thunk
int sub_3C6ECC(void)
{
  return sub_3C6ED0();
}


//======================================================================
// sub_3C6ED0
// address: 0x003C6ED0   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3C6ED0(int a1)
{
  bool v1; // nf

  v1 = a1 < 0;
  if ( a1 > 0 )
    a1 = 0x7FFFFFFF;
  if ( v1 )
    a1 = 0x80000000;
  return _aeabi_idiv0(a1);
}


//======================================================================
// sub_3C74BC
// address: 0x003C74BC   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_3C74BC(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
  bool v8; // cf
  int v9; // r4
  int v10; // r12
  bool v11; // zf
  int v12; // r5
  bool v13; // zf
  bool v14; // zf

  v11 = v9 == v10;
  v12 = v10 & (a4 >> 20);
  if ( v9 != v10 )
    v11 = v12 == v10;
  if ( v11 )
  {
    v14 = (result | (2 * a2)) == 0;
    if ( (result | (2 * a2)) != 0 )
    {
      v14 = (a3 | (2 * a4)) == 0;
    }
    else
    {
      result = a3;
      a2 = a4;
    }
    if ( !v14 && (v9 != v10 || (result | (a2 << 12)) == 0) && (v12 != v10 || (a3 | (a4 << 12)) == 0) )
      __asm { POP     {R4-R6,PC} }
    __asm { POP     {R4-R6,PC} }
  }
  v13 = (result | (2 * a2)) == 0;
  if ( (result | (2 * a2)) != 0 )
    v13 = (a3 | (2 * a4)) == 0;
  if ( v13 )
    __asm { POP     {R4-R6,PC} }
  if ( v9 != 0 )
    goto LABEL_24;
  while ( 1 )
  {
    v8 = __CFSHL__(result, 1);
    result *= 2;
    a2 += v8 + a2;
    if ( (a2 & 0x100000) != 0 )
      break;
    --v9;
  }
  if ( v12 == 0 )
  {
LABEL_24:
    while ( 1 )
    {
      v8 = __CFSHL__(a3, 1);
      a3 *= 2;
      a4 += v8 + a4;
      if ( (a4 & 0x100000) != 0 )
        break;
      --v12;
    }
  }
  return result;
}


//======================================================================
// sub_3C76D4
// address: 0x003C76D4   size: 0x8 (8 bytes)
//======================================================================
void sub_3C76D4()
{
  JUMPOUT(0x3C73C0);
}


//======================================================================
// sub_3C76DC
// address: 0x003C76DC   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_3C76DC(int result, int a2, int a3, unsigned int a4)
{
  bool v4; // cf
  int v5; // r4
  int v6; // r12
  int v7; // r5
  bool v8; // zf
  bool v9; // zf

  v7 = v6 & (a4 >> 20);
  v8 = v5 == v6;
  if ( v5 == v6 )
    v8 = v7 == v6;
  if ( v8 )
LABEL_25:
    JUMPOUT(0x3C753C);
  if ( v5 == v6 )
  {
    if ( (result | (a2 << 12)) != 0 || v7 == v6 )
      goto LABEL_25;
LABEL_26:
    JUMPOUT(0x3C7524);
  }
  if ( v7 == v6 )
  {
    if ( (a3 | (a4 << 12)) != 0 )
      goto LABEL_25;
    goto LABEL_27;
  }
  v9 = (result | (2 * a2)) == 0;
  if ( (result | (2 * a2)) != 0 )
    v9 = (a3 | (2 * a4)) == 0;
  if ( v9 )
  {
    if ( (result | (2 * a2)) != 0 )
      goto LABEL_26;
    if ( (a3 | (2 * a4)) == 0 )
      goto LABEL_25;
LABEL_27:
    JUMPOUT(0x3C74D8);
  }
  if ( v5 != 0 )
    goto LABEL_23;
  while ( 1 )
  {
    v4 = __CFSHL__(result, 1);
    result *= 2;
    a2 += v4 + a2;
    if ( (a2 & 0x100000) != 0 )
      break;
    --v5;
  }
  if ( v7 == 0 )
  {
LABEL_23:
    while ( 1 )
    {
      v4 = __CFSHL__(a3, 1);
      a3 *= 2;
      a4 += v4 + a4;
      if ( (a4 & 0x100000) != 0 )
        break;
      --v7;
    }
  }
  return result;
}


//======================================================================
// sub_3C82FC
// address: 0x003C82FC   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3C82FC(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) != 0 );
  return v4;
}


//======================================================================
// sub_3C831C
// address: 0x003C831C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3C831C(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) != 0 );
  return v4;
}


//======================================================================
// sub_3C833C
// address: 0x003C833C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3C833C(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) != 0 );
  return v4;
}


//======================================================================
// sub_3C835C
// address: 0x003C835C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3C835C(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2 & *a1, a1) != 0 );
  return v4;
}


//======================================================================
// sub_3C837C
// address: 0x003C837C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3C837C(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) != 0 );
  return v4;
}


//======================================================================
// sub_3C839C
// address: 0x003C839C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_3C839C(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, ~(a2 & *a1), a1) != 0 );
  return v4;
}


//======================================================================
// sub_3C83C0
// address: 0x003C83C0   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3C83C0(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(0xFFFF << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)v3;
}


//======================================================================
// sub_3C8404
// address: 0x003C8404   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3C8404(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(0xFFFF << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)v3;
}


//======================================================================
// sub_3C8448
// address: 0x003C8448   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3C8448(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(0xFFFF << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)v3;
}


//======================================================================
// sub_3C848C
// address: 0x003C848C   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3C848C(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(0xFFFF << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)v3;
}


//======================================================================
// sub_3C84D0
// address: 0x003C84D0   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3C84D0(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(0xFFFF << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)v3;
}


//======================================================================
// sub_3C8514
// address: 0x003C8514   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_3C8514(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(0xFFFF << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)v3;
}


//======================================================================
// sub_3C8558
// address: 0x003C8558   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3C8558(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(255 << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)v3;
}


//======================================================================
// sub_3C8598
// address: 0x003C8598   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3C8598(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(255 << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)v3;
}


//======================================================================
// sub_3C85D8
// address: 0x003C85D8   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3C85D8(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(255 << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)v3;
}


//======================================================================
// sub_3C8618
// address: 0x003C8618   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3C8618(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(255 << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)v3;
}


//======================================================================
// sub_3C8658
// address: 0x003C8658   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3C8658(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(255 << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)v3;
}


//======================================================================
// sub_3C8698
// address: 0x003C8698   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_3C8698(int a1)
{
  _DWORD *v1; // r6
  char v2; // r5
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(255 << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)v3;
}


//======================================================================
// sub_3C86D8
// address: 0x003C86D8   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3C86D8(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1 + a2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return v4;
}


//======================================================================
// sub_3C86F8
// address: 0x003C86F8   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3C86F8(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1 - a2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return v4;
}


//======================================================================
// sub_3C8718
// address: 0x003C8718   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3C8718(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1 | a2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return v4;
}


//======================================================================
// sub_3C8738
// address: 0x003C8738   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3C8738(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = a2 & *a1;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return v4;
}


//======================================================================
// sub_3C8758
// address: 0x003C8758   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3C8758(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1 ^ a2;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return v4;
}


//======================================================================
// sub_3C8778
// address: 0x003C8778   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_3C8778(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = ~(a2 & *a1);
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return v4;
}


//======================================================================
// sub_3C879C
// address: 0x003C879C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_3C879C(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 0xFFFF << v3;
  do
    v5 = (((((unsigned int)v4 & *v2) >> v3) + a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C87E4
// address: 0x003C87E4   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_3C87E4(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 0xFFFF << v3;
  do
    v5 = (((((unsigned int)v4 & *v2) >> v3) - a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C882C
// address: 0x003C882C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_3C882C(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 0xFFFF << v3;
  do
    v5 = (((((unsigned int)v4 & *v2) >> v3) | a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C8874
// address: 0x003C8874   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_3C8874(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 0xFFFF << v3;
  do
    v5 = (((((unsigned int)v4 & *v2) >> v3) & a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C88BC
// address: 0x003C88BC   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_3C88BC(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 0xFFFF << v3;
  do
    v5 = (((((unsigned int)v4 & *v2) >> v3) ^ a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C8904
// address: 0x003C8904   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_3C8904(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 0xFFFF << v3;
  do
    v5 = (~((((unsigned int)v4 & *v2) >> v3) & a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (__int16)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C8950
// address: 0x003C8950   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_3C8950(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 255 << v3;
  do
    v5 = (((((unsigned int)v4 & *v2) >> v3) + a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C8998
// address: 0x003C8998   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_3C8998(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 255 << v3;
  do
    v5 = (((((unsigned int)v4 & *v2) >> v3) - a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C89E0
// address: 0x003C89E0   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_3C89E0(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 255 << v3;
  do
    v5 = (((((unsigned int)v4 & *v2) >> v3) | a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C8A28
// address: 0x003C8A28   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_3C8A28(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 255 << v3;
  do
    v5 = (((((unsigned int)v4 & *v2) >> v3) & a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C8A70
// address: 0x003C8A70   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_3C8A70(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 255 << v3;
  do
    v5 = (((((unsigned int)v4 & *v2) >> v3) ^ a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C8AB8
// address: 0x003C8AB8   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_3C8AB8(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 255 << v3;
  do
    v5 = (~((((unsigned int)v4 & *v2) >> v3) & a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0]() != 0 );
  return (char)((v4 & v5) >> v3);
}


//======================================================================
// sub_3C8B00
// address: 0x003C8B00   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_3C8B00(int *a1, int a2, int a3)
{
  int result; // r0

  while ( 1 )
  {
    result = *a1;
    if ( a2 != *a1 )
      break;
    if ( MEMORY[0xFFFF0FC0](a2, a3, a1) == 0 )
      return a2;
  }
  return result;
}


//======================================================================
// sub_3C8B24
// address: 0x003C8B24   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_3C8B24(int a1, unsigned __int16 a2, int a3)
{
  _DWORD *v3; // r7
  char v4; // r5
  int v5; // r4
  int v6; // r6
  int result; // r0
  int v9; // [sp+4h] [bp-8h]

  v3 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v4 = 8 * (a1 & 3);
  v5 = 0xFFFF << v4;
  v6 = a2;
  v9 = (a3 << v4) & (0xFFFF << v4);
  do
  {
    if ( ((unsigned int)v5 & *v3) >> v4 != v6 )
    {
      LOWORD(result) = ((unsigned int)v5 & *v3) >> v4;
      return (__int16)result;
    }
  }
  while ( MEMORY[0xFFFF0FC0](*v3, *v3 & ~v5 | v9, v3) != 0 );
  LOWORD(result) = a2;
  return (__int16)result;
}


//======================================================================
// sub_3C8B74
// address: 0x003C8B74   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_3C8B74(int a1, unsigned __int8 a2, int a3)
{
  _DWORD *v3; // r7
  char v4; // r5
  int v5; // r4
  unsigned __int8 v6; // r6
  int v8; // [sp+0h] [bp-Ch]
  int v9; // [sp+4h] [bp-8h]

  v3 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v4 = 8 * (a1 & 3);
  v5 = 255 << v4;
  v6 = a2;
  v8 = (a3 << v4) & (255 << v4);
  v9 = a2;
  while ( ((unsigned int)v5 & *v3) >> v4 == v9 )
  {
    if ( MEMORY[0xFFFF0FC0](*v3, *v3 & ~v5 | v8, v3) == 0 )
      return (char)v6;
  }
  return (char)(((unsigned int)v5 & *v3) >> v4);
}


//======================================================================
// sub_3C8BC4
// address: 0x003C8BC4   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall sub_3C8BC4(int a1, int a2, int a3)
{
  return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


//======================================================================
// sub_3C8BDC
// address: 0x003C8BDC   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall sub_3C8BDC(int a1, int a2, int a3)
{
  return a2 == (__int16)sub_3C8B24(a1, a2, a3);
}


//======================================================================
// sub_3C8BF0
// address: 0x003C8BF0   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall sub_3C8BF0(int a1, int a2, int a3)
{
  return a2 == (char)sub_3C8B74(a1, a2, a3);
}


//======================================================================
// sub_3C8C04
// address: 0x003C8C04   size: 0x8 (8 bytes)
//======================================================================
int sub_3C8C04()
{
  return MEMORY[0xFFFF0FA0]();
}


//======================================================================
// sub_3C8C10
// address: 0x003C8C10   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3C8C10(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) != 0 );
  return v4;
}


//======================================================================
// sub_3C8C30
// address: 0x003C8C30   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_3C8C30(int a1, int a2)
{
  _DWORD *v2; // r7
  char v3; // r4
  int v4; // r6
  int v5; // r5
  int v7; // [sp+4h] [bp-8h]

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 0xFFFF << v3;
  v7 = (a2 << v3) & (0xFFFF << v3);
  do
    v5 = *v2;
  while ( MEMORY[0xFFFF0FC0](*v2, *v2 & ~v4 | v7, v2) != 0 );
  return (__int16)((v5 & (unsigned int)v4) >> v3);
}


//======================================================================
// sub_3C8C70
// address: 0x003C8C70   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_3C8C70(int a1, int a2)
{
  _DWORD *v2; // r7
  char v3; // r4
  int v4; // r6
  int v5; // r5
  int v7; // [sp+4h] [bp-8h]

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 255 << v3;
  v7 = (a2 << v3) & (255 << v3);
  do
    v5 = *v2;
  while ( MEMORY[0xFFFF0FC0](*v2, *v2 & ~v4 | v7, v2) != 0 );
  return (char)((v5 & (unsigned int)v4) >> v3);
}


//======================================================================
// sub_3C8CAC
// address: 0x003C8CAC   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_3C8CAC(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  a1[1] = 0;
  return result;
}


//======================================================================
// sub_3C8CC4
// address: 0x003C8CC4   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3C8CC4(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


//======================================================================
// sub_3C8CD8
// address: 0x003C8CD8   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3C8CD8(_WORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


//======================================================================
// sub_3C8CEC
// address: 0x003C8CEC   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3C8CEC(_BYTE *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


//======================================================================
// sub_3C8D00
// address: 0x003C8D00   size: 0x18 (24 bytes)
//======================================================================
char *__fastcall sub_3C8D00(int *a1)
{
  int v1; // r3
  unsigned int v2; // r3

  v1 = *a1;
  if ( (*a1 & 0x40000000) != 0 )
    v2 = v1 | 0x80000000;
  else
    v2 = (unsigned int)(2 * v1) >> 1;
  return (char *)a1 + v2;
}


//======================================================================
// sub_3C8D18
// address: 0x003C8D18   size: 0x72 (114 bytes)
//======================================================================
int *__fastcall sub_3C8D18(int a1, int a2, unsigned int a3)
{
  int v4; // r4
  int *v5; // r5
  char *v6; // r0
  char *v7; // r0
  int v9; // [sp+4h] [bp-18h]
  int v10; // [sp+8h] [bp-14h]
  int v11; // [sp+Ch] [bp-10h]
  char *v12; // [sp+10h] [bp-Ch]

  if ( a2 != 0 )
  {
    v11 = a2 - 1;
    v10 = a2 - 1;
    v9 = 0;
    while ( 1 )
    {
      v4 = (v9 + v10) / 2;
      v5 = (int *)(a1 + 8 * v4);
      v6 = sub_3C8D00(v5);
      v12 = v6;
      if ( v4 == v11 )
      {
        if ( a3 >= (unsigned int)v6 )
          return v5;
LABEL_5:
        if ( v4 == v9 )
          return nullptr;
        v10 = v4 - 1;
      }
      else
      {
        v7 = sub_3C8D00((int *)(a1 + 8 * v4 + 8));
        if ( a3 < (unsigned int)v12 )
          goto LABEL_5;
        if ( a3 <= (unsigned int)(v7 - 1) )
          return v5;
        v9 = v4 + 1;
      }
    }
  }
  return nullptr;
}


//======================================================================
// sub_3C8D8A
// address: 0x003C8D8A   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3C8D8A(int a1)
{
  _UNKNOWN **v1; // r0

  switch ( a1 )
  {
    case 1:
      v1 = &_aeabi_unwind_cpp_pr1_ptr;
      return (int)*v1;
    case 2:
      v1 = &_aeabi_unwind_cpp_pr2_ptr;
      return (int)*v1;
    case 0:
      v1 = &_aeabi_unwind_cpp_pr0_ptr;
      return (int)*v1;
    default:
      break;
  }
  return 0;
}


//======================================================================
// sub_3C8DBC
// address: 0x003C8DBC   size: 0x94 (148 bytes)
//======================================================================
int __fastcall sub_3C8DBC(_DWORD *a1, int a2)
{
  unsigned int v3; // r6
  void *exidx; // r0
  int *v5; // r0
  int *v6; // r5
  char *v7; // r0
  int v8; // r3
  int *v10; // r0
  int v11; // r3
  char *v12; // r0
  int *v13; // r0
  int v14; // r0
  int v15; // [sp+4h] [bp-4h]

  v15 = a2;
  v3 = a2 - 2;
  if ( &__gnu_Unwind_Find_exidx != nullptr )
  {
    exidx = (void *)j___gnu_Unwind_Find_exidx();
    if ( exidx == nullptr )
    {
      a1[4] = 0;
      return 9;
    }
  }
  else
  {
    exidx = &unk_3DCBBC;
    v15 = ((char *)&dword_3FB734 - (char *)&unk_3DCBBC) >> 3;
  }
  v5 = sub_3C8D18((int)exidx, v15, v3);
  v6 = v5;
  if ( v5 == nullptr )
  {
    a1[4] = 0;
    return 9;
  }
  v7 = sub_3C8D00(v5);
  v8 = v6[1];
  a1[18] = v7;
  if ( v8 == 1 )
  {
    a1[4] = 0;
    return 5;
  }
  v10 = v6 + 1;
  if ( v8 >= 0 )
  {
    v12 = sub_3C8D00(v10);
    v11 = 0;
    a1[19] = v12;
  }
  else
  {
    a1[19] = v10;
    v11 = 1;
  }
  v13 = (int *)a1[19];
  a1[20] = v11;
  if ( *v13 >= 0 )
  {
    a1[4] = sub_3C8D00(v13);
  }
  else
  {
    v14 = sub_3C8D8A((unsigned int)(16 * *v13) >> 28);
    a1[4] = v14;
    if ( v14 == 0 )
      return 9;
  }
  return 0;
}


//======================================================================
// sub_3C8E5C
// address: 0x003C8E5C   size: 0x4A (74 bytes)
//======================================================================
_DWORD *__fastcall sub_3C8E5C(_DWORD *result, int a2)
{
  int v2; // r3
  _DWORD *v3; // r4
  int v4; // r2
  _DWORD *v5; // r0
  int v6; // r2

  v2 = *result;
  v3 = result;
  v4 = *result << 31;
  if ( (*result & 1) == 0 )
  {
    v5 = result + 18;
    v6 = v2 << 30;
    if ( (v2 & 2) != 0 )
      result = (_DWORD *)j___gnu_Unwind_Restore_VFP_D(v5, a2, v6);
    else
      result = (_DWORD *)j___gnu_Unwind_Restore_VFP(v5, a2, v6);
  }
  if ( (*v3 & 4) == 0 )
    result = (_DWORD *)j___gnu_Unwind_Restore_VFP_D_16_to_31(v3 + 52, a2, v4, *v3 << 29);
  if ( (*v3 & 8) == 0 )
    result = (_DWORD *)j___gnu_Unwind_Restore_WMMXD(v3 + 84);
  if ( (*v3 & 0x10) == 0 )
    return (_DWORD *)j___gnu_Unwind_Restore_WMMXC(v3 + 116);
  return result;
}


//======================================================================
// sub_3C8EA6
// address: 0x003C8EA6   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3C8EA6(_DWORD *a1)
{
  int v1; // r3

  v1 = 0;
  if ( *a1 != 0 )
    return *(_DWORD *)((char *)a1 + *a1);
  return v1;
}


//======================================================================
// sub_3C8EB6
// address: 0x003C8EB6   size: 0x4 (4 bytes)
//======================================================================
int sub_3C8EB6()
{
  return 9;
}


//======================================================================
// sub_3C8EBC
// address: 0x003C8EBC   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3C8EBC(int a1, int a2)
{
  int v4; // r0
  int v5; // r0

  do
  {
    if ( sub_3C8DBC((_DWORD *)a1, *(_DWORD *)(a2 + 64)) != 0 )
      goto LABEL_2;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 64);
    v4 = (*(int (__fastcall **)(int, int, int))(a1 + 16))(1, a1, a2);
  }
  while ( v4 == 8 );
  if ( v4 != 7 )
LABEL_2:
    j_abort();
  nullsub_1();
  v5 = j_restore_core_regs(a2 + 4);
  return sub_3C8EF6(v5);
}


//======================================================================
// sub_3C8EF6
// address: 0x003C8EF6   size: 0xBC (188 bytes)
//======================================================================
int __fastcall sub_3C8EF6(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r0
  int v8; // [sp+8h] [bp-3D4h]
  int v9; // [sp+Ch] [bp-3D0h]
  int (__fastcall *v10)(int, int, int, int, int *, int); // [sp+10h] [bp-3CCh]
  int v11; // [sp+14h] [bp-3C8h]
  int v12[120]; // [sp+18h] [bp-3C4h] BYREF
  _DWORD v13[121]; // [sp+1F8h] [bp-1E4h] BYREF

  v10 = *(int (__fastcall **)(int, int, int, int, int *, int))(a1 + 12);
  v11 = *(_DWORD *)(a1 + 24);
  j_memcpy(&v12[1], (const void *)(a2 + 4), 0x40u);
  v12[0] = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = (a3 != 0) + 9;
    v5 = sub_3C8DBC((_DWORD *)a1, v12[16]);
    if ( v5 != 0 )
    {
      v9 |= 0x10u;
      v12[17] = v12[14];
    }
    else
    {
      *(_DWORD *)(a1 + 20) = v12[16];
      j_memcpy(v13, v12, 0x1E0u);
      v6 = (*(int (__fastcall **)(int, int, _DWORD *))(a1 + 16))(v9, a1, v13);
      v12[17] = v13[14];
      v8 = v6;
    }
    if ( v10(1, v9, a1, a1, v12, v11) != 0 )
      return 9;
    if ( v5 != 0 )
      break;
    j_memcpy(v12, v13, sizeof(v12));
    if ( v8 != 8 )
    {
      if ( v8 == 7 )
      {
        nullsub_1();
        j_restore_core_regs(&v12[1]);
      }
      return 9;
    }
    a3 = 0;
  }
  return v5;
}


//======================================================================
// sub_3C90C2
// address: 0x003C90C2   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3C90C2(int a1, unsigned int a2, int a3, int a4)
{
  int v5; // [sp+Ch] [bp-4h] BYREF

  v5 = a4;
  Unwind_VRS_Get(a1, 0, a2, &v5);
  return v5;
}


//======================================================================
// sub_3C910C
// address: 0x003C910C   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_3C910C(int a1, unsigned int a2, int a3)
{
  int v4; // [sp+Ch] [bp-4h] BYREF

  v4 = a3;
  return Unwind_VRS_Set(a1, 0, a2, &v4);
}


//======================================================================
// sub_3C9194
// address: 0x003C9194   size: 0x27A (634 bytes)
//======================================================================
int __fastcall sub_3C9194(int a1, int a2, int a3, int a4)
{
  int *v5; // r3
  int *v6; // r7
  int v8; // r2
  int v9; // r2
  int *v10; // r5
  unsigned int v11; // r0
  int v12; // r3
  char *v13; // r0
  char *v14; // r5
  int v15; // r0
  unsigned int v16; // r1
  void (__noreturn *v17)(void *); // r2
  int v18; // r3
  int v19; // r7
  int v20; // r3
  int v21; // r0
  int v22; // r7
  int v23; // r0
  int v24; // r3
  int v25; // r7
  char *v26; // r0
  int v28; // r2
  int v29; // r7
  int v30; // r0
  int v31; // r0
  int v32; // r7
  char *v33; // r0
  int v34; // r0
  int v35; // r3
  int v36; // r0
  int v37; // [sp+4h] [bp-30h]
  unsigned int v38; // [sp+4h] [bp-30h]
  int v39; // [sp+8h] [bp-2Ch]
  int v41; // [sp+10h] [bp-24h]
  unsigned int v42; // [sp+14h] [bp-20h]
  int v43; // [sp+18h] [bp-1Ch]
  int v45; // [sp+20h] [bp-14h] BYREF
  _DWORD v46[2]; // [sp+24h] [bp-10h] BYREF
  __int16 v47; // [sp+2Ch] [bp-8h]

  v5 = *(int **)(a2 + 76);
  v41 = a1 & 3;
  v6 = v5 + 1;
  v8 = *v5;
  v46[0] = *v5;
  v46[1] = v5 + 1;
  if ( a4 != 0 )
  {
    if ( a4 <= 2 )
    {
      v46[0] = v8 << 16;
      HIBYTE(v47) = BYTE2(v8);
      LOBYTE(v47) = 2;
      v6 += HIBYTE(v47);
    }
  }
  else
  {
    v46[0] = v8 << 8;
    v47 = 3;
  }
  v9 = a1 & 3;
  if ( v41 == 2 )
    v6 = *(int **)(a2 + 56);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    v43 = 0;
LABEL_58:
    if ( a4 <= 2 )
      v34 = _gnu_unwind_execute(a3, v46);
    else
      v34 = sub_3C8EB6();
    if ( v34 != 0 )
      return 9;
    if ( v43 == 0 )
      return 8;
    v36 = sub_3C90C2(a3, 0xFu, v43, v35);
    sub_3C910C(a3, 0xEu, v36);
    v15 = a3;
    v17 = _cxa_call_unexpected;
    v16 = 15;
LABEL_38:
    sub_3C910C(v15, v16, (int)v17);
    return 7;
  }
  v43 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v37 = *v6;
      if ( *v6 == 0 )
        goto LABEL_58;
      if ( a4 == 2 )
      {
        v9 = v6[1];
        v39 = v9;
        v10 = v6 + 2;
      }
      else
      {
        v10 = v6 + 1;
        v37 = *(unsigned __int16 *)v6;
        v39 = *((unsigned __int16 *)v6 + 1);
      }
      v42 = (v39 & 0xFFFFFFFE) + *(_DWORD *)(a2 + 72);
      v11 = sub_3C90C2(a3, 0xFu, v9, v42);
      v12 = 0;
      if ( v42 <= v11 )
        v12 = v11 < v42 + (v37 & 0xFFFFFFFE);
      v9 = (2 * (v39 & 1)) | v37 & 1;
      if ( v9 == 1 )
        break;
      if ( v9 != 0 )
      {
        if ( v9 != 2 )
          return 9;
        v38 = (unsigned int)(2 * *v10) >> 1;
        if ( v41 != 0 )
        {
          v32 = *(_DWORD *)(a2 + 32);
          if ( v32 != sub_3C90C2(a3, 0xDu, (unsigned int)(2 * *v10) >> 1, v12) || v10 != *(int **)(a2 + 40) )
            goto LABEL_55;
          *(_DWORD *)(a2 + 40) = v38;
          *(_DWORD *)(a2 + 48) = 4;
          *(_DWORD *)(a2 + 44) = 0;
          *(_DWORD *)(a2 + 52) = v10 + 1;
          if ( *v10 >= 0 )
          {
            v43 = 1;
            goto LABEL_55;
          }
          v33 = sub_3C8D00(&v10[v38 + 1]);
          sub_3C910C(a3, 0xFu, (int)v33);
          v15 = a3;
          v16 = 0;
LABEL_37:
          v17 = (void (__noreturn *)(void *))a2;
          goto LABEL_38;
        }
        if ( v12 != 0 )
        {
          v28 = a1 << 28;
          if ( (a1 & 8) == 0 || (v12 = (unsigned int)(2 * *v10) >> 1, v38 == 0) )
          {
            v29 = 0;
            while ( v29 != v38 )
            {
              ++v29;
              v45 = a2 + 88;
              v30 = sub_3C8EA6(&v10[v29]);
              if ( _cxa_type_match((_BYTE *)a2, v30, 0, &v45) != 0 )
                goto LABEL_55;
            }
            v31 = sub_3C90C2(a3, 0xDu, v28, v12);
            *(_DWORD *)(a2 + 36) = v45;
            *(_DWORD *)(a2 + 32) = v31;
            goto LABEL_49;
          }
        }
LABEL_55:
        v9 = *v10;
        if ( *v10 < 0 )
          ++v10;
        v6 = &v10[v38 + 1];
      }
      else
      {
        v6 = v10 + 1;
        if ( v41 != 0 && v12 != 0 )
        {
          v13 = sub_3C8D00(v10);
          *(_DWORD *)(a2 + 56) = v6;
          v14 = v13;
          if ( _cxa_begin_cleanup((_BYTE *)a2) == 0 )
            return 9;
          v15 = a3;
          v16 = 15;
          v17 = (void (__noreturn *)(void *))v14;
          goto LABEL_38;
        }
      }
    }
    if ( v41 == 0 )
      break;
    v25 = *(_DWORD *)(a2 + 32);
    if ( v25 == sub_3C90C2(a3, 0xDu, 1, v12) && v10 == *(int **)(a2 + 40) )
    {
      v26 = sub_3C8D00(v10);
      sub_3C910C(a3, 0xFu, (int)v26);
      v15 = a3;
      v16 = 0;
      goto LABEL_37;
    }
LABEL_39:
    v6 = v10 + 2;
  }
  if ( v12 == 0 )
    goto LABEL_39;
  v18 = v10[1];
  v19 = (unsigned int)*v10 >> 31;
  if ( v18 == -2 )
    return 9;
  v45 = a2 + 88;
  v20 = v18 + 1;
  if ( v20 != 0 )
  {
    v21 = sub_3C8EA6(v10 + 1);
    v22 = _cxa_type_match((_BYTE *)a2, v21, v19, &v45);
    if ( v22 != 0 )
      goto LABEL_31;
    goto LABEL_39;
  }
  v22 = 1;
LABEL_31:
  v23 = sub_3C90C2(a3, 0xDu, v9, v20);
  v24 = v45;
  *(_DWORD *)(a2 + 32) = v23;
  if ( v22 == 2 )
  {
    *(_DWORD *)(a2 + 44) = v24;
    v24 = a2 + 44;
  }
  *(_DWORD *)(a2 + 36) = v24;
LABEL_49:
  *(_DWORD *)(a2 + 40) = v10;
  return 6;
}


//======================================================================
// sub_3C9850
// address: 0x003C9850   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_3C9850(int *a1)
{
  int v2; // r2
  int result; // r0
  int *v4; // r2
  char v5; // r2
  unsigned int v6; // r0
  int v7; // r2

  if ( *((_BYTE *)a1 + 8) != 0 )
  {
    v5 = *((_BYTE *)a1 + 8) - 1;
  }
  else
  {
    v2 = *((unsigned __int8 *)a1 + 9);
    result = 176;
    if ( v2 == 0 )
      return result;
    *((_BYTE *)a1 + 9) = v2 - 1;
    v4 = (int *)a1[1];
    *a1 = *v4;
    a1[1] = (int)(v4 + 1);
    v5 = 3;
  }
  v6 = *a1;
  *((_BYTE *)a1 + 8) = v5;
  v7 = v6 << 8;
  *a1 = v7;
  return HIBYTE(v6);
}


//======================================================================
// sub_3C9882
// address: 0x003C9882   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3C9882(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+Ch] [bp-4h] BYREF

  v5 = a4;
  Unwind_VRS_Get(a1, 0, 0xCu, &v5);
  return v5;
}


//======================================================================
// sub_3C9898
// address: 0x003C9898   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3C9898(int a1, int a2, int a3, int a4)
{
  return sub_3C9882(a1, a2, a3, a4);
}

