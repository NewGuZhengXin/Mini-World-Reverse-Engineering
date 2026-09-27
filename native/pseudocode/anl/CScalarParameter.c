// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::CScalarParameter

//======================================================================
// anl::CScalarParameter::get(double,double)
// address: 0x0031B34A   size: 0x22 (34 bytes)
//======================================================================
int __fastcall anl::CScalarParameter::get(anl::CScalarParameter *this, double a2, double a3)
{
  int v4; // r1

  v4 = *((_DWORD *)this + 2);
  if ( v4 != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  else
    return *(_DWORD *)this;
}


//======================================================================
// anl::CScalarParameter::get(double,double,double)
// address: 0x0031B3D4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall anl::CScalarParameter::get(anl::CScalarParameter *this, double a2, double a3, double a4)
{
  int v5; // r1

  v5 = *((_DWORD *)this + 2);
  if ( v5 != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 16))(v5);
  else
    return *(_DWORD *)this;
}


//======================================================================
// anl::CScalarParameter::get(double,double,double,double)
// address: 0x0031B480   size: 0x34 (52 bytes)
//======================================================================
int __fastcall anl::CScalarParameter::get(anl::CScalarParameter *this, double a2, double a3, double a4, double a5)
{
  int v6; // r1

  v6 = *((_DWORD *)this + 2);
  if ( v6 != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6);
  else
    return *(_DWORD *)this;
}


//======================================================================
// anl::CScalarParameter::get(double,double,double,double,double,double)
// address: 0x0031B54C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall anl::CScalarParameter::get(
        anl::CScalarParameter *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v8; // r1

  v8 = *((_DWORD *)this + 2);
  if ( v8 != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 24))(v8);
  else
    return *(_DWORD *)this;
}

