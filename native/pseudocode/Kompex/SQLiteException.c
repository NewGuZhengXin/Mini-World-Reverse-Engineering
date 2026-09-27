// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Kompex::SQLiteException

//======================================================================
// Kompex::SQLiteException::GetString(void)const
// address: 0x002B90D4   size: 0x6E (110 bytes)
//======================================================================
Kompex::SQLiteException *__fastcall Kompex::SQLiteException::GetString(Kompex::SQLiteException *this, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v10; // [sp+4h] [bp-C8h]
  _BYTE v11[4]; // [sp+8h] [bp-C4h] BYREF
  _BYTE v12[8]; // [sp+Ch] [bp-C0h] BYREF
  _BYTE v13[4]; // [sp+14h] [bp-B8h] BYREF
  _BYTE v14[180]; // [sp+18h] [bp-B4h] BYREF

  sub_3A3350(v12, 24);
  v4 = sub_3B452C((int)v13, "file: ");
  v5 = sub_3A81B0(v4, a2 + 4);
  v6 = sub_3B452C(v5, "\nline number: ");
  v7 = sub_3B4760(v6, *(_DWORD *)(a2 + 8));
  v10 = sub_3B452C(v7, "\nerror: ");
  sub_3BEB1C(v11, a2);
  v8 = sub_3A81B0(v10, v11);
  sub_3B452C(v8, "\n");
  sub_3BDF80(v11);
  sub_3A2244(this, v14);
  sub_3A1ECC(v12);
  return this;
}


//======================================================================
// Kompex::SQLiteException::~SQLiteException()
// address: 0x0038AED4   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN6Kompex15SQLiteExceptionD1Ev'
void __fastcall Kompex::SQLiteException::~SQLiteException(Kompex::SQLiteException *this)
{
  sub_3BDF80((char *)this + 4);
  sub_3BDF80(this);
}


//======================================================================
// Kompex::SQLiteException::SQLiteException(std::string const&,unsigned int,std::string,int)
// address: 0x0038AEE8   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN6Kompex15SQLiteExceptionC1ERKSsjSsi'
int __fastcall Kompex::SQLiteException::SQLiteException(int a1, int a2, int a3, int a4, int a5)
{
  sub_3BEB1C(a1, a4);
  sub_3BEB1C(a1 + 4, a2);
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a5;
  return a1;
}


//======================================================================
// Kompex::SQLiteException::SQLiteException(std::string const&,unsigned int,char const*,int)
// address: 0x0038AF12   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN6Kompex15SQLiteExceptionC1ERKSsjPKci'
int __fastcall Kompex::SQLiteException::SQLiteException(int a1, int a2, int a3, char *a4, int a5)
{
  sub_3BF0BC(a1, a4);
  sub_3BEB1C(a1 + 4, a2);
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a5;
  return a1;
}


//======================================================================
// Kompex::SQLiteException::Show(void)const
// address: 0x0038C620   size: 0x3A (58 bytes)
//======================================================================
int __fastcall Kompex::SQLiteException::Show(Kompex::SQLiteException *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v2 = sub_3B452C((int)&dword_55E4E4, "file: ");
  v3 = sub_3A81B0(v2, (char *)this + 4);
  v4 = sub_3B452C(v3, "\nline number: ");
  v5 = sub_3B4760(v4, *((_DWORD *)this + 2));
  v6 = sub_3B452C(v5, "\nerror: ");
  v7 = sub_3A81B0(v6, this);
  return sub_3B4108(v7);
}

