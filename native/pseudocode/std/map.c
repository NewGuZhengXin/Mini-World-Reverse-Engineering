// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::map

//======================================================================
// std::map<unsigned int,Ogre::RFontBitmapImpl::BitmapFontGlyph,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::operator[](unsigned int const&)
// address: 0x0014DFD2   size: 0x148 (328 bytes)
//======================================================================
int __fastcall std::map<unsigned int,Ogre::RFontBitmapImpl::BitmapFontGlyph>::operator[](_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // r7
  int v3; // r4
  _DWORD *v6; // r3
  unsigned int v7; // r3
  int v9; // r5
  int v10; // r0
  int v11; // r0
  _BOOL4 v12; // r7
  int v13; // r1
  int v14; // r4
  int v15; // r1
  int v16; // r4
  int v17; // r1
  int v18; // r4
  _DWORD *v19; // [sp+0h] [bp-6Ch]
  unsigned int v20; // [sp+4h] [bp-68h]
  _DWORD *v21; // [sp+Ch] [bp-60h]
  _DWORD *v22; // [sp+14h] [bp-58h] BYREF
  int v23; // [sp+18h] [bp-54h]
  _BYTE v24[36]; // [sp+1Ch] [bp-50h] BYREF
  unsigned int v25; // [sp+40h] [bp-2Ch] BYREF
  _DWORD v26[10]; // [sp+44h] [bp-28h]

  v2 = (_DWORD *)a1[2];
  v3 = (int)(a1 + 1);
  v21 = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( v2[4] < *a2 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = (_DWORD *)v3;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    v3 = (int)v2;
    v2 = v6;
  }
  if ( (_DWORD *)v3 != v21 && *a2 >= *(_DWORD *)(v3 + 16) )
    return v3 + 20;
  j_memset(v24, 0, sizeof(v24));
  v20 = *a2;
  v25 = *a2;
  qmemcpy(v26, v24, 36);
  if ( (_DWORD *)v3 != v21 )
  {
    v7 = *(_DWORD *)(v3 + 16);
    if ( v20 >= v7 )
    {
      if ( v7 >= v20 )
        return v3 + 20;
      if ( v3 != a1[4] )
      {
        v11 = sub_391DDC(v3);
        if ( v20 >= *(_DWORD *)(v11 + 16) )
        {
          std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::_M_get_insert_unique_pos(
            (int *)&v22,
            (int)a1,
            &v25);
          v2 = v22;
          v3 = v23;
        }
        else if ( *(_DWORD *)(v3 + 12) != 0 )
        {
          v3 = v11;
          v2 = (_DWORD *)v11;
        }
      }
      v9 = v3;
      v3 = (int)v2;
LABEL_27:
      if ( v9 == 0 )
        return v3 + 20;
      v12 = true;
      if ( v3 != 0 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( v3 == a1[3] )
    {
      v9 = v3;
      goto LABEL_27;
    }
    v10 = sub_391E44(v3);
    v9 = v10;
    if ( *(_DWORD *)(v10 + 16) < v20 )
    {
      if ( *(_DWORD *)(v10 + 12) != 0 )
        v9 = v3;
      else
        v3 = 0;
      goto LABEL_27;
    }
LABEL_35:
    std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>,std::_Select1st<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::RFontBitmapImpl::BitmapFontGlyph>>>::_M_get_insert_unique_pos(
      (int *)&v22,
      (int)a1,
      &v25);
    v3 = (int)v22;
    v9 = v23;
    goto LABEL_27;
  }
  if ( a1[5] == 0 )
    goto LABEL_35;
  v9 = a1[4];
  if ( *(_DWORD *)(v9 + 16) >= v20 )
    goto LABEL_35;
LABEL_29:
  v12 = (_DWORD *)v9 == v21 || v20 < *(_DWORD *)(v9 + 16);
LABEL_32:
  v19 = (_DWORD *)operator new(0x38u);
  if ( v19 != (_DWORD *)-16 )
  {
    v13 = v26[0];
    v14 = v26[1];
    v19[4] = v25;
    v19[5] = v13;
    v19[6] = v14;
    v15 = v26[3];
    v16 = v26[4];
    v19[7] = v26[2];
    v19[8] = v15;
    v19[9] = v16;
    v17 = v26[6];
    v18 = v26[7];
    v19[10] = v26[5];
    v19[11] = v17;
    v19[12] = v18;
    v19[13] = v26[8];
  }
  sub_391E64(v12, v19, v9, v21);
  v3 = (int)v19;
  ++a1[5];
  return v3 + 20;
}


//======================================================================
// std::map<unsigned int,int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::operator[](unsigned int const&)
// address: 0x0014ECFC   size: 0x120 (288 bytes)
//======================================================================
int __fastcall std::map<unsigned int,int>::operator[](_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // r7
  int v4; // r4
  _DWORD *v5; // r3
  unsigned int v6; // r3
  int v8; // r5
  int v9; // r0
  int v10; // r0
  _BOOL4 v11; // r7
  int v12; // r0
  int v13; // r2
  unsigned int v14; // [sp+4h] [bp-20h]
  _DWORD *v15; // [sp+Ch] [bp-18h]
  unsigned int v16; // [sp+10h] [bp-14h] BYREF
  int v17; // [sp+14h] [bp-10h]
  _DWORD *v18; // [sp+18h] [bp-Ch] BYREF
  int v19; // [sp+1Ch] [bp-8h]

  v2 = (_DWORD *)a1[2];
  v15 = a1 + 1;
  v4 = (int)(a1 + 1);
  while ( 1 )
  {
    v14 = *a2;
    if ( v2 == nullptr )
      break;
    if ( v2[4] < v14 )
    {
      v5 = (_DWORD *)v2[3];
      v2 = (_DWORD *)v4;
    }
    else
    {
      v5 = (_DWORD *)v2[2];
    }
    v4 = (int)v2;
    v2 = v5;
  }
  if ( (_DWORD *)v4 != v15 && *a2 >= *(_DWORD *)(v4 + 16) )
    return v4 + 20;
  v17 = 0;
  v16 = v14;
  if ( (_DWORD *)v4 != v15 )
  {
    v6 = *(_DWORD *)(v4 + 16);
    if ( v14 >= v6 )
    {
      if ( v6 >= v14 )
        return v4 + 20;
      if ( v4 != a1[4] )
      {
        v10 = sub_391DDC(v4);
        if ( v14 >= *(_DWORD *)(v10 + 16) )
        {
          std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_get_insert_unique_pos(
            (int *)&v18,
            (int)a1,
            &v16);
          v2 = v18;
          v4 = v19;
        }
        else if ( *(_DWORD *)(v4 + 12) != 0 )
        {
          v4 = v10;
          v2 = (_DWORD *)v10;
        }
      }
      v8 = v4;
      v4 = (int)v2;
LABEL_27:
      if ( v8 == 0 )
        return v4 + 20;
      v11 = true;
      if ( v4 != 0 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( v4 == a1[3] )
    {
      v8 = v4;
      goto LABEL_27;
    }
    v9 = sub_391E44(v4);
    v8 = v9;
    if ( *(_DWORD *)(v9 + 16) < v14 )
    {
      if ( *(_DWORD *)(v9 + 12) != 0 )
        v8 = v4;
      else
        v4 = 0;
      goto LABEL_27;
    }
LABEL_35:
    std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_get_insert_unique_pos(
      (int *)&v18,
      (int)a1,
      &v16);
    v4 = (int)v18;
    v8 = v19;
    goto LABEL_27;
  }
  if ( a1[5] == 0 )
    goto LABEL_35;
  v8 = a1[4];
  if ( *(_DWORD *)(v8 + 16) >= v14 )
    goto LABEL_35;
LABEL_29:
  v11 = (_DWORD *)v8 == v15 || v14 < *(_DWORD *)(v8 + 16);
LABEL_32:
  v12 = operator new(0x18u);
  v4 = v12;
  if ( v12 != -16 )
  {
    v13 = v17;
    *(_DWORD *)(v12 + 16) = v16;
    *(_DWORD *)(v12 + 20) = v13;
  }
  sub_391E64(v11, v12, v8, v15);
  ++a1[5];
  return v4 + 20;
}


//======================================================================
// std::map<Ogre::FixedString,int,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::operator[](Ogre::FixedString const&)
// address: 0x00154418   size: 0x130 (304 bytes)
//======================================================================
_DWORD *__fastcall std::map<Ogre::FixedString,int>::operator[](_DWORD *a1, Ogre::FixedString **a2)
{
  _DWORD *v2; // r7
  _DWORD *v4; // r4
  _DWORD *v5; // r3
  void *v6; // r1
  unsigned int v7; // r3
  _DWORD *v9; // r5
  int v10; // r0
  int v11; // r0
  _BOOL4 v12; // r7
  void *v13; // r1
  Ogre::FixedString *v14; // r0
  _DWORD *v15; // [sp+Ch] [bp-18h]
  Ogre::FixedString *v16; // [sp+10h] [bp-14h] BYREF
  int v17; // [sp+14h] [bp-10h]
  _DWORD *v18; // [sp+18h] [bp-Ch] BYREF
  _DWORD *v19; // [sp+1Ch] [bp-8h]

  v2 = (_DWORD *)a1[2];
  v15 = a1 + 1;
  v4 = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( v2[4] < (unsigned int)*a2 )
    {
      v5 = (_DWORD *)v2[3];
      v2 = v4;
    }
    else
    {
      v5 = (_DWORD *)v2[2];
    }
    v4 = v2;
    v2 = v5;
  }
  if ( v4 == v15 || (unsigned int)*a2 < v4[4] )
  {
    v16 = *a2;
    Ogre::FixedString::addRef(v16, a2);
    v17 = 0;
    if ( v4 == v15 )
    {
      if ( a1[5] != 0 )
      {
        v9 = (_DWORD *)a1[4];
        if ( v9[4] < (unsigned int)v16 )
          goto LABEL_30;
      }
    }
    else
    {
      v7 = v4[4];
      if ( (unsigned int)v16 >= v7 )
      {
        if ( v7 >= (unsigned int)v16 )
        {
LABEL_12:
          Ogre::FixedString::release(v16, v6);
          return v4 + 5;
        }
        if ( v4 != (_DWORD *)a1[4] )
        {
          v11 = sub_391DDC(v4);
          if ( (unsigned int)v16 >= *(_DWORD *)(v11 + 16) )
          {
            std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_get_insert_unique_pos(
              (int *)&v18,
              (int)a1,
              &v16);
            v2 = v18;
            v4 = v19;
          }
          else if ( v4[3] != 0 )
          {
            v4 = (_DWORD *)v11;
            v2 = (_DWORD *)v11;
          }
        }
        v9 = v4;
        v4 = v2;
LABEL_28:
        if ( v9 == nullptr )
          goto LABEL_12;
        v12 = true;
        if ( v4 != nullptr )
        {
LABEL_33:
          v4 = (_DWORD *)operator new(0x18u);
          if ( v4 != (_DWORD *)-16 )
          {
            v14 = v16;
            v4[4] = v16;
            Ogre::FixedString::addRef(v14, v13);
            v4[5] = v17;
          }
          sub_391E64(v12, v4, v9, v15);
          ++a1[5];
          goto LABEL_12;
        }
LABEL_30:
        v12 = v9 == v15 || (unsigned int)v16 < v9[4];
        goto LABEL_33;
      }
      if ( v4 == (_DWORD *)a1[3] )
      {
        v9 = v4;
        goto LABEL_28;
      }
      v10 = sub_391E44(v4);
      v9 = (_DWORD *)v10;
      if ( *(_DWORD *)(v10 + 16) < (unsigned int)v16 )
      {
        if ( *(_DWORD *)(v10 + 12) != 0 )
          v9 = v4;
        else
          v4 = nullptr;
        goto LABEL_28;
      }
    }
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_get_insert_unique_pos(
      (int *)&v18,
      (int)a1,
      &v16);
    v4 = v18;
    v9 = v19;
    goto LABEL_28;
  }
  return v4 + 5;
}


//======================================================================
// std::map<Ogre::CompiledShaderKey,Ogre::CompiledShader *,std::less<Ogre::CompiledShaderKey>,std::allocator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>>::operator[](Ogre::CompiledShaderKey const&)
// address: 0x001598F0   size: 0x6E (110 bytes)
//======================================================================
_DWORD *__fastcall std::map<Ogre::CompiledShaderKey,Ogre::CompiledShader *>::operator[](_DWORD *a1, int a2)
{
  _DWORD *v2; // r5
  _DWORD *inserted; // r4
  _DWORD *v6; // r3
  void *v8; // r1
  _DWORD *v9; // [sp+4h] [bp-28h]
  _BYTE v10[16]; // [sp+8h] [bp-24h] BYREF
  Ogre::FixedString *v11[5]; // [sp+18h] [bp-14h] BYREF

  v2 = (_DWORD *)a1[2];
  v9 = a1 + 1;
  inserted = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( Ogre::operator<((int)(v2 + 4), a2) )
    {
      v6 = (_DWORD *)v2[3];
      v2 = inserted;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    inserted = v2;
    v2 = v6;
  }
  if ( inserted == v9 || Ogre::operator<(a2, (int)(inserted + 4)) )
  {
    Ogre::CompiledShaderKey::CompiledShaderKey((int)v10, a2);
    v11[2] = nullptr;
    inserted = (_DWORD *)std::_Rb_tree<Ogre::CompiledShaderKey,std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>,std::_Select1st<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>,std::less<Ogre::CompiledShaderKey>,std::allocator<std::pair<Ogre::CompiledShaderKey const,Ogre::CompiledShader *>>>::_M_insert_unique_(
                           a1,
                           inserted,
                           (int)v10);
    Ogre::FixedString::~FixedString(v11, v8);
  }
  return inserted + 10;
}


//======================================================================
// std::map<unsigned int,Ogre::CompiledShader *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::CompiledShader *>>>::operator[](unsigned int const&)
// address: 0x001599B8   size: 0x120 (288 bytes)
//======================================================================
int __fastcall std::map<unsigned int,Ogre::CompiledShader *>::operator[](_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // r7
  int v4; // r4
  _DWORD *v5; // r3
  unsigned int v6; // r3
  int v8; // r5
  int v9; // r0
  int v10; // r0
  _BOOL4 v11; // r7
  int v12; // r0
  int v13; // r2
  unsigned int v14; // [sp+4h] [bp-20h]
  _DWORD *v15; // [sp+Ch] [bp-18h]
  unsigned int v16; // [sp+10h] [bp-14h] BYREF
  int v17; // [sp+14h] [bp-10h]
  _DWORD *v18; // [sp+18h] [bp-Ch] BYREF
  int v19; // [sp+1Ch] [bp-8h]

  v2 = (_DWORD *)a1[2];
  v15 = a1 + 1;
  v4 = (int)(a1 + 1);
  while ( 1 )
  {
    v14 = *a2;
    if ( v2 == nullptr )
      break;
    if ( v2[4] < v14 )
    {
      v5 = (_DWORD *)v2[3];
      v2 = (_DWORD *)v4;
    }
    else
    {
      v5 = (_DWORD *)v2[2];
    }
    v4 = (int)v2;
    v2 = v5;
  }
  if ( (_DWORD *)v4 != v15 && *a2 >= *(_DWORD *)(v4 + 16) )
    return v4 + 20;
  v17 = 0;
  v16 = v14;
  if ( (_DWORD *)v4 != v15 )
  {
    v6 = *(_DWORD *)(v4 + 16);
    if ( v14 >= v6 )
    {
      if ( v6 >= v14 )
        return v4 + 20;
      if ( v4 != a1[4] )
      {
        v10 = sub_391DDC(v4);
        if ( v14 >= *(_DWORD *)(v10 + 16) )
        {
          std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::CompiledShader *>,std::_Select1st<std::pair<unsigned int const,Ogre::CompiledShader *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::CompiledShader *>>>::_M_get_insert_unique_pos(
            (int *)&v18,
            (int)a1,
            &v16);
          v2 = v18;
          v4 = v19;
        }
        else if ( *(_DWORD *)(v4 + 12) != 0 )
        {
          v4 = v10;
          v2 = (_DWORD *)v10;
        }
      }
      v8 = v4;
      v4 = (int)v2;
LABEL_27:
      if ( v8 == 0 )
        return v4 + 20;
      v11 = true;
      if ( v4 != 0 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( v4 == a1[3] )
    {
      v8 = v4;
      goto LABEL_27;
    }
    v9 = sub_391E44(v4);
    v8 = v9;
    if ( *(_DWORD *)(v9 + 16) < v14 )
    {
      if ( *(_DWORD *)(v9 + 12) != 0 )
        v8 = v4;
      else
        v4 = 0;
      goto LABEL_27;
    }
LABEL_35:
    std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::CompiledShader *>,std::_Select1st<std::pair<unsigned int const,Ogre::CompiledShader *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::CompiledShader *>>>::_M_get_insert_unique_pos(
      (int *)&v18,
      (int)a1,
      &v16);
    v4 = (int)v18;
    v8 = v19;
    goto LABEL_27;
  }
  if ( a1[5] == 0 )
    goto LABEL_35;
  v8 = a1[4];
  if ( *(_DWORD *)(v8 + 16) >= v14 )
    goto LABEL_35;
LABEL_29:
  v11 = (_DWORD *)v8 == v15 || v14 < *(_DWORD *)(v8 + 16);
LABEL_32:
  v12 = operator new(0x18u);
  v4 = v12;
  if ( v12 != -16 )
  {
    v13 = v17;
    *(_DWORD *)(v12 + 16) = v16;
    *(_DWORD *)(v12 + 20) = v13;
  }
  sub_391E64(v11, v12, v8, v15);
  ++a1[5];
  return v4 + 20;
}


//======================================================================
// std::map<Ogre::ShaderEnvKey,Ogre::ShaderTechImpl *,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::operator[](Ogre::ShaderEnvKey const&)
// address: 0x00165C2C   size: 0x6A (106 bytes)
//======================================================================
int __fastcall std::map<Ogre::ShaderEnvKey,Ogre::ShaderTechImpl *>::operator[](_DWORD *a1, _QWORD *a2)
{
  int v2; // r5
  int inserted; // r4
  int v6; // r3
  _DWORD *v8; // [sp+4h] [bp-20h]
  _DWORD v9[7]; // [sp+8h] [bp-1Ch] BYREF

  v2 = a1[2];
  v8 = a1 + 1;
  inserted = (int)(a1 + 1);
  while ( v2 != 0 )
  {
    if ( Ogre::operator<((_QWORD *)(v2 + 16), a2) )
    {
      v6 = *(_DWORD *)(v2 + 12);
      v2 = inserted;
    }
    else
    {
      v6 = *(_DWORD *)(v2 + 8);
    }
    inserted = v2;
    v2 = v6;
  }
  if ( (_DWORD *)inserted == v8 || Ogre::operator<(a2, (_QWORD *)(inserted + 16)) )
  {
    *(_OWORD *)v9 = *(_OWORD *)a2;
    v9[4] = 0;
    inserted = std::_Rb_tree<Ogre::ShaderEnvKey,std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>,std::_Select1st<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>,std::less<Ogre::ShaderEnvKey>,std::allocator<std::pair<Ogre::ShaderEnvKey const,Ogre::ShaderTechImpl *>>>::_M_insert_unique_(
                 a1,
                 inserted,
                 v9);
  }
  return inserted + 32;
}


//======================================================================
// std::map<std::string,Ogre::FmodSoundResource *,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::operator[](std::string const&)
// address: 0x0016BCD4   size: 0x6E (110 bytes)
//======================================================================
_DWORD *__fastcall std::map<std::string,Ogre::FmodSoundResource *>::operator[](_DWORD *a1, int a2)
{
  _DWORD *v2; // r5
  _DWORD *inserted; // r4
  _DWORD *v6; // r3
  _DWORD *v8; // [sp+4h] [bp-10h]
  _DWORD v9[3]; // [sp+8h] [bp-Ch] BYREF

  v2 = (_DWORD *)a1[2];
  v8 = a1 + 1;
  inserted = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = inserted;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    inserted = v2;
    v2 = v6;
  }
  if ( inserted == v8 || std::operator<<char>() != 0 )
  {
    sub_3BEB1C(v9, a2);
    v9[1] = 0;
    inserted = (_DWORD *)std::_Rb_tree<std::string,std::pair<std::string const,Ogre::FmodSoundResource *>,std::_Select1st<std::pair<std::string const,Ogre::FmodSoundResource *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::FmodSoundResource *>>>::_M_insert_unique_(
                           a1,
                           inserted,
                           (int)v9);
    sub_3BDF80(v9);
  }
  return inserted + 5;
}


//======================================================================
// std::map<Ogre::MovableObject *,Ogre::LooseOctreeNode *,std::less<Ogre::MovableObject *>,std::allocator<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>>::operator[](Ogre::MovableObject * const&)
// address: 0x001826E4   size: 0x120 (288 bytes)
//======================================================================
int __fastcall std::map<Ogre::MovableObject *,Ogre::LooseOctreeNode *>::operator[](_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // r7
  int v4; // r4
  _DWORD *v5; // r3
  unsigned int v6; // r3
  int v8; // r5
  int v9; // r0
  int v10; // r0
  _BOOL4 v11; // r7
  int v12; // r0
  int v13; // r2
  unsigned int v14; // [sp+4h] [bp-20h]
  _DWORD *v15; // [sp+Ch] [bp-18h]
  unsigned int v16; // [sp+10h] [bp-14h] BYREF
  int v17; // [sp+14h] [bp-10h]
  _DWORD *v18; // [sp+18h] [bp-Ch] BYREF
  int v19; // [sp+1Ch] [bp-8h]

  v2 = (_DWORD *)a1[2];
  v15 = a1 + 1;
  v4 = (int)(a1 + 1);
  while ( 1 )
  {
    v14 = *a2;
    if ( v2 == nullptr )
      break;
    if ( v2[4] < v14 )
    {
      v5 = (_DWORD *)v2[3];
      v2 = (_DWORD *)v4;
    }
    else
    {
      v5 = (_DWORD *)v2[2];
    }
    v4 = (int)v2;
    v2 = v5;
  }
  if ( (_DWORD *)v4 != v15 && *a2 >= *(_DWORD *)(v4 + 16) )
    return v4 + 20;
  v17 = 0;
  v16 = v14;
  if ( (_DWORD *)v4 != v15 )
  {
    v6 = *(_DWORD *)(v4 + 16);
    if ( v14 >= v6 )
    {
      if ( v6 >= v14 )
        return v4 + 20;
      if ( v4 != a1[4] )
      {
        v10 = sub_391DDC(v4);
        if ( v14 >= *(_DWORD *)(v10 + 16) )
        {
          std::_Rb_tree<Ogre::MovableObject *,std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>,std::_Select1st<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>,std::less<Ogre::MovableObject *>,std::allocator<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>>::_M_get_insert_unique_pos(
            (int *)&v18,
            (int)a1,
            &v16);
          v2 = v18;
          v4 = v19;
        }
        else if ( *(_DWORD *)(v4 + 12) != 0 )
        {
          v4 = v10;
          v2 = (_DWORD *)v10;
        }
      }
      v8 = v4;
      v4 = (int)v2;
LABEL_27:
      if ( v8 == 0 )
        return v4 + 20;
      v11 = true;
      if ( v4 != 0 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( v4 == a1[3] )
    {
      v8 = v4;
      goto LABEL_27;
    }
    v9 = sub_391E44(v4);
    v8 = v9;
    if ( *(_DWORD *)(v9 + 16) < v14 )
    {
      if ( *(_DWORD *)(v9 + 12) != 0 )
        v8 = v4;
      else
        v4 = 0;
      goto LABEL_27;
    }
LABEL_35:
    std::_Rb_tree<Ogre::MovableObject *,std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>,std::_Select1st<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>,std::less<Ogre::MovableObject *>,std::allocator<std::pair<Ogre::MovableObject * const,Ogre::LooseOctreeNode *>>>::_M_get_insert_unique_pos(
      (int *)&v18,
      (int)a1,
      &v16);
    v4 = (int)v18;
    v8 = v19;
    goto LABEL_27;
  }
  if ( a1[5] == 0 )
    goto LABEL_35;
  v8 = a1[4];
  if ( *(_DWORD *)(v8 + 16) >= v14 )
    goto LABEL_35;
LABEL_29:
  v11 = (_DWORD *)v8 == v15 || v14 < *(_DWORD *)(v8 + 16);
LABEL_32:
  v12 = operator new(0x18u);
  v4 = v12;
  if ( v12 != -16 )
  {
    v13 = v17;
    *(_DWORD *)(v12 + 16) = v16;
    *(_DWORD *)(v12 + 20) = v13;
  }
  sub_391E64(v11, v12, v8, v15);
  ++a1[5];
  return v4 + 20;
}


//======================================================================
// std::map<Ogre::FixedString,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *,std::allocator<Ogre::MotionEventHandler *>>>>>::operator[](Ogre::FixedString const&)
// address: 0x0018CF44   size: 0x154 (340 bytes)
//======================================================================
_DWORD *__fastcall std::map<Ogre::FixedString,std::vector<Ogre::MotionEventHandler *>>::operator[](
        _DWORD *a1,
        Ogre::FixedString **a2)
{
  _DWORD *v2; // r7
  _DWORD *v4; // r4
  _DWORD *v5; // r3
  Ogre::FixedString *v6; // r0
  unsigned int v7; // r3
  void *v8; // r1
  _DWORD *v10; // r5
  int v11; // r0
  int v12; // r0
  _BOOL4 v13; // r7
  void *v14; // r1
  Ogre::FixedString *v15; // r0
  Ogre::FixedString *v16; // [sp+0h] [bp-3Ch]
  _DWORD *v17; // [sp+8h] [bp-34h]
  _DWORD *v18; // [sp+14h] [bp-28h] BYREF
  _DWORD *v19; // [sp+18h] [bp-24h]
  void *v20[3]; // [sp+1Ch] [bp-20h] BYREF
  Ogre::FixedString *v21; // [sp+28h] [bp-14h] BYREF
  void *v22[4]; // [sp+2Ch] [bp-10h] BYREF

  v2 = (_DWORD *)a1[2];
  v17 = a1 + 1;
  v4 = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( v2[4] < (unsigned int)*a2 )
    {
      v5 = (_DWORD *)v2[3];
      v2 = v4;
    }
    else
    {
      v5 = (_DWORD *)v2[2];
    }
    v4 = v2;
    v2 = v5;
  }
  if ( v4 == v17 || (unsigned int)*a2 < v4[4] )
  {
    v6 = *a2;
    memset(v20, 0, sizeof(v20));
    v21 = v6;
    Ogre::FixedString::addRef((int)v6, a2);
    std::vector<Ogre::MotionEventHandler *>::vector(v22, (int)v20);
    if ( v4 == v17 )
    {
      if ( a1[5] != 0 )
      {
        v10 = (_DWORD *)a1[4];
        if ( v10[4] < (unsigned int)v21 )
          goto LABEL_30;
      }
    }
    else
    {
      v16 = v21;
      v7 = v4[4];
      if ( (unsigned int)v21 >= v7 )
      {
        if ( v7 >= (unsigned int)v21 )
        {
LABEL_12:
          sub_18B51C(v22[0]);
          Ogre::FixedString::~FixedString(&v21, v8);
          sub_18B51C(v20[0]);
          return v4 + 5;
        }
        if ( v4 != (_DWORD *)a1[4] )
        {
          v12 = sub_391DDC(v4);
          if ( (unsigned int)v16 >= *(_DWORD *)(v12 + 16) )
          {
            std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>>::_M_get_insert_unique_pos(
              (int *)&v18,
              (int)a1,
              &v21);
            v2 = v18;
            v4 = v19;
          }
          else if ( v4[3] != 0 )
          {
            v4 = (_DWORD *)v12;
            v2 = (_DWORD *)v12;
          }
        }
        v10 = v4;
        v4 = v2;
LABEL_28:
        if ( v10 == nullptr )
          goto LABEL_12;
        v13 = true;
        if ( v4 != nullptr )
        {
LABEL_33:
          v4 = (_DWORD *)operator new(0x20u);
          if ( v4 != (_DWORD *)-16 )
          {
            v15 = v21;
            v4[4] = v21;
            Ogre::FixedString::addRef((int)v15, v14);
            std::vector<Ogre::MotionEventHandler *>::vector(v4 + 5, (int)v22);
          }
          sub_391E64(v13, v4, v10, v17);
          ++a1[5];
          goto LABEL_12;
        }
LABEL_30:
        v13 = v10 == v17 || (unsigned int)v21 < v10[4];
        goto LABEL_33;
      }
      if ( v4 == (_DWORD *)a1[3] )
      {
        v10 = v4;
        goto LABEL_28;
      }
      v11 = sub_391E44(v4);
      v10 = (_DWORD *)v11;
      if ( *(_DWORD *)(v11 + 16) < (unsigned int)v16 )
      {
        if ( *(_DWORD *)(v11 + 12) != 0 )
          v10 = v4;
        else
          v4 = nullptr;
        goto LABEL_28;
      }
    }
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>,std::_Select1st<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,std::vector<Ogre::MotionEventHandler *>>>>::_M_get_insert_unique_pos(
      (int *)&v18,
      (int)a1,
      &v21);
    v4 = v18;
    v10 = v19;
    goto LABEL_28;
  }
  return v4 + 5;
}


//======================================================================
// std::map<int,Ogre::SequenceMap::SeqDesc,std::less<int>,std::allocator<std::pair<int const,Ogre::SequenceMap::SeqDesc>>>::operator[](int const&)
// address: 0x001924CA   size: 0x142 (322 bytes)
//======================================================================
int __fastcall std::map<int,Ogre::SequenceMap::SeqDesc>::operator[](_DWORD *a1, int *a2)
{
  _DWORD *v2; // r7
  int v3; // r4
  _DWORD *v6; // r3
  int v7; // r3
  int v9; // r5
  int v10; // r0
  int v11; // r0
  _BOOL4 v12; // r7
  int v13; // r1
  int v14; // r4
  int v15; // r1
  int v16; // r4
  _DWORD *v17; // [sp+0h] [bp-4Ch]
  int v18; // [sp+4h] [bp-48h]
  _DWORD *v19; // [sp+Ch] [bp-40h]
  _DWORD *v20; // [sp+14h] [bp-38h] BYREF
  int v21; // [sp+18h] [bp-34h]
  _BYTE v22[20]; // [sp+1Ch] [bp-30h] BYREF
  int v23; // [sp+30h] [bp-1Ch] BYREF
  _DWORD v24[6]; // [sp+34h] [bp-18h]

  v2 = (_DWORD *)a1[2];
  v3 = (int)(a1 + 1);
  v19 = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( v2[4] < *a2 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = (_DWORD *)v3;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    v3 = (int)v2;
    v2 = v6;
  }
  if ( (_DWORD *)v3 != v19 && *a2 >= *(_DWORD *)(v3 + 16) )
    return v3 + 20;
  j_memset(v22, 0, sizeof(v22));
  v18 = *a2;
  v23 = *a2;
  qmemcpy(v24, v22, 20);
  if ( (_DWORD *)v3 != v19 )
  {
    v7 = *(_DWORD *)(v3 + 16);
    if ( v18 >= v7 )
    {
      if ( v7 >= v18 )
        return v3 + 20;
      if ( v3 != a1[4] )
      {
        v11 = sub_391DDC(v3);
        if ( v18 >= *(_DWORD *)(v11 + 16) )
        {
          std::_Rb_tree<int,std::pair<int const,Ogre::SequenceMap::SeqDesc>,std::_Select1st<std::pair<int const,Ogre::SequenceMap::SeqDesc>>,std::less<int>,std::allocator<std::pair<int const,Ogre::SequenceMap::SeqDesc>>>::_M_get_insert_unique_pos(
            (int *)&v20,
            (int)a1,
            &v23);
          v2 = v20;
          v3 = v21;
        }
        else if ( *(_DWORD *)(v3 + 12) != 0 )
        {
          v3 = v11;
          v2 = (_DWORD *)v11;
        }
      }
      v9 = v3;
      v3 = (int)v2;
LABEL_27:
      if ( v9 == 0 )
        return v3 + 20;
      v12 = true;
      if ( v3 != 0 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( v3 == a1[3] )
    {
      v9 = v3;
      goto LABEL_27;
    }
    v10 = sub_391E44(v3);
    v9 = v10;
    if ( *(_DWORD *)(v10 + 16) < v18 )
    {
      if ( *(_DWORD *)(v10 + 12) != 0 )
        v9 = v3;
      else
        v3 = 0;
      goto LABEL_27;
    }
LABEL_35:
    std::_Rb_tree<int,std::pair<int const,Ogre::SequenceMap::SeqDesc>,std::_Select1st<std::pair<int const,Ogre::SequenceMap::SeqDesc>>,std::less<int>,std::allocator<std::pair<int const,Ogre::SequenceMap::SeqDesc>>>::_M_get_insert_unique_pos(
      (int *)&v20,
      (int)a1,
      &v23);
    v3 = (int)v20;
    v9 = v21;
    goto LABEL_27;
  }
  if ( a1[5] == 0 )
    goto LABEL_35;
  v9 = a1[4];
  if ( *(_DWORD *)(v9 + 16) >= v18 )
    goto LABEL_35;
LABEL_29:
  v12 = (_DWORD *)v9 == v19 || v18 < *(_DWORD *)(v9 + 16);
LABEL_32:
  v17 = (_DWORD *)operator new(0x28u);
  if ( v17 != (_DWORD *)-16 )
  {
    v13 = v24[0];
    v14 = v24[1];
    v17[4] = v23;
    v17[5] = v13;
    v17[6] = v14;
    v15 = v24[3];
    v16 = v24[4];
    v17[7] = v24[2];
    v17[8] = v15;
    v17[9] = v16;
  }
  sub_391E64(v12, v17, v9, v19);
  v3 = (int)v17;
  ++a1[5];
  return v3 + 20;
}


//======================================================================
// std::map<Ogre::FixedString,Ogre::PlantVecInfo_T,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>>::operator[](Ogre::FixedString const&)
// address: 0x00194514   size: 0x15A (346 bytes)
//======================================================================
_DWORD *__fastcall std::map<Ogre::FixedString,Ogre::PlantVecInfo_T>::operator[](_DWORD *a1, Ogre::FixedString **a2)
{
  _DWORD *v2; // r7
  _DWORD *v5; // r4
  _DWORD *v6; // r3
  void *v7; // r1
  unsigned int v8; // r3
  void *v9; // r1
  _DWORD *v11; // r5
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r7
  void *v15; // r1
  Ogre::FixedString *v16; // r0
  Ogre::FixedString *v17; // [sp+4h] [bp-78h]
  _DWORD *v18; // [sp+Ch] [bp-70h]
  _DWORD *v19; // [sp+1Ch] [bp-60h] BYREF
  _DWORD *v20; // [sp+20h] [bp-5Ch]
  _BYTE v21[40]; // [sp+24h] [bp-58h] BYREF
  Ogre::FixedString *v22; // [sp+4Ch] [bp-30h] BYREF
  _BYTE v23[44]; // [sp+50h] [bp-2Ch] BYREF

  v2 = (_DWORD *)a1[2];
  v18 = a1 + 1;
  v5 = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( v2[4] < (unsigned int)*a2 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = v5;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    v5 = v2;
    v2 = v6;
  }
  if ( v5 == v18 || (unsigned int)*a2 < v5[4] )
  {
    j_memset(v21, 0, sizeof(v21));
    v22 = *a2;
    Ogre::FixedString::addRef((int)v22, v7);
    Ogre::PlantVecInfo_T::PlantVecInfo_T((Ogre::PlantVecInfo_T *)v23, (const Ogre::PlantVecInfo_T *)v21);
    if ( v5 == v18 )
    {
      if ( a1[5] != 0 )
      {
        v11 = (_DWORD *)a1[4];
        if ( v11[4] < (unsigned int)v22 )
          goto LABEL_30;
      }
    }
    else
    {
      v17 = v22;
      v8 = v5[4];
      if ( (unsigned int)v22 >= v8 )
      {
        if ( v8 >= (unsigned int)v22 )
        {
LABEL_12:
          Ogre::PlantVecInfo_T::~PlantVecInfo_T((Ogre::PlantVecInfo_T *)v23);
          Ogre::FixedString::release((int)v22, v9);
          Ogre::PlantVecInfo_T::~PlantVecInfo_T((Ogre::PlantVecInfo_T *)v21);
          return v5 + 5;
        }
        if ( v5 != (_DWORD *)a1[4] )
        {
          v13 = sub_391DDC(v5);
          if ( (unsigned int)v17 >= *(_DWORD *)(v13 + 16) )
          {
            std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>>::_M_get_insert_unique_pos(
              (int *)&v19,
              (int)a1,
              &v22);
            v2 = v19;
            v5 = v20;
          }
          else if ( v5[3] != 0 )
          {
            v5 = (_DWORD *)v13;
            v2 = (_DWORD *)v13;
          }
        }
        v11 = v5;
        v5 = v2;
LABEL_28:
        if ( v11 == nullptr )
          goto LABEL_12;
        v14 = true;
        if ( v5 != nullptr )
        {
LABEL_33:
          v5 = (_DWORD *)operator new(0x3Cu);
          if ( v5 != (_DWORD *)-16 )
          {
            v16 = v22;
            v5[4] = v22;
            Ogre::FixedString::addRef((int)v16, v15);
            Ogre::PlantVecInfo_T::PlantVecInfo_T((Ogre::PlantVecInfo_T *)(v5 + 5), (const Ogre::PlantVecInfo_T *)v23);
          }
          sub_391E64(v14, v5, v11, v18);
          ++a1[5];
          goto LABEL_12;
        }
LABEL_30:
        v14 = v11 == v18 || (unsigned int)v22 < v11[4];
        goto LABEL_33;
      }
      if ( v5 == (_DWORD *)a1[3] )
      {
        v11 = v5;
        goto LABEL_28;
      }
      v12 = sub_391E44(v5);
      v11 = (_DWORD *)v12;
      if ( *(_DWORD *)(v12 + 16) < (unsigned int)v17 )
      {
        if ( *(_DWORD *)(v12 + 12) != 0 )
          v11 = v5;
        else
          v5 = nullptr;
        goto LABEL_28;
      }
    }
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>,std::_Select1st<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,Ogre::PlantVecInfo_T>>>::_M_get_insert_unique_pos(
      (int *)&v19,
      (int)a1,
      &v22);
    v5 = v19;
    v11 = v20;
    goto LABEL_28;
  }
  return v5 + 5;
}


//======================================================================
// std::map<std::string,Ogre::Codec *,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::~map()
// address: 0x00199DB0   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZNSt3mapISsPN4Ogre5CodecESt4lessISsESaISt4pairIKSsS2_EEED1Ev'
int __fastcall std::map<std::string,Ogre::Codec *>::~map(int a1)
{
  std::_Rb_tree<std::string,std::pair<std::string const,Ogre::Codec *>,std::_Select1st<std::pair<std::string const,Ogre::Codec *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::Codec *>>>::_M_erase(
    a1,
    *(_DWORD **)(a1 + 8));
  return a1;
}


//======================================================================
// std::map<std::string,stEventFrameArray,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::~map()
// address: 0x001A239A   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZNSt3mapISs17stEventFrameArraySt4lessISsESaISt4pairIKSsS0_EEED1Ev'
int __fastcall std::map<std::string,stEventFrameArray>::~map(int a1)
{
  std::_Rb_tree<std::string,std::pair<std::string const,stEventFrameArray>,std::_Select1st<std::pair<std::string const,stEventFrameArray>>,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::_M_erase(
    a1,
    *(_DWORD *)(a1 + 8));
  return a1;
}


//======================================================================
// std::map<int,PictureData,std::less<int>,std::allocator<std::pair<int const,PictureData>>>::operator[](int const&)
// address: 0x001A3062   size: 0x14A (330 bytes)
//======================================================================
int __fastcall std::map<int,PictureData>::operator[](_DWORD *a1, int *a2)
{
  _DWORD *v2; // r7
  int v3; // r4
  _DWORD *v6; // r3
  int v7; // r3
  int v9; // r5
  int v10; // r0
  int v11; // r0
  _BOOL4 v12; // r7
  int v13; // r1
  int v14; // r4
  int v15; // r1
  int v16; // r4
  int v17; // r1
  int v18; // r4
  _DWORD *v19; // [sp+0h] [bp-64h]
  int v20; // [sp+4h] [bp-60h]
  _DWORD *v21; // [sp+Ch] [bp-58h]
  _DWORD *v22; // [sp+14h] [bp-50h] BYREF
  int v23; // [sp+18h] [bp-4Ch]
  _BYTE v24[32]; // [sp+1Ch] [bp-48h] BYREF
  int v25; // [sp+3Ch] [bp-28h] BYREF
  _DWORD v26[9]; // [sp+40h] [bp-24h]

  v2 = (_DWORD *)a1[2];
  v3 = (int)(a1 + 1);
  v21 = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( v2[4] < *a2 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = (_DWORD *)v3;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    v3 = (int)v2;
    v2 = v6;
  }
  if ( (_DWORD *)v3 != v21 && *a2 >= *(_DWORD *)(v3 + 16) )
    return v3 + 20;
  j_memset(v24, 0, sizeof(v24));
  v20 = *a2;
  v25 = *a2;
  qmemcpy(v26, v24, 32);
  if ( (_DWORD *)v3 != v21 )
  {
    v7 = *(_DWORD *)(v3 + 16);
    if ( v20 >= v7 )
    {
      if ( v7 >= v20 )
        return v3 + 20;
      if ( v3 != a1[4] )
      {
        v11 = sub_391DDC(v3);
        if ( v20 >= *(_DWORD *)(v11 + 16) )
        {
          std::_Rb_tree<int,std::pair<int const,PictureData>,std::_Select1st<std::pair<int const,PictureData>>,std::less<int>,std::allocator<std::pair<int const,PictureData>>>::_M_get_insert_unique_pos(
            (int *)&v22,
            (int)a1,
            &v25);
          v2 = v22;
          v3 = v23;
        }
        else if ( *(_DWORD *)(v3 + 12) != 0 )
        {
          v3 = v11;
          v2 = (_DWORD *)v11;
        }
      }
      v9 = v3;
      v3 = (int)v2;
LABEL_27:
      if ( v9 == 0 )
        return v3 + 20;
      v12 = true;
      if ( v3 != 0 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( v3 == a1[3] )
    {
      v9 = v3;
      goto LABEL_27;
    }
    v10 = sub_391E44(v3);
    v9 = v10;
    if ( *(_DWORD *)(v10 + 16) < v20 )
    {
      if ( *(_DWORD *)(v10 + 12) != 0 )
        v9 = v3;
      else
        v3 = 0;
      goto LABEL_27;
    }
LABEL_35:
    std::_Rb_tree<int,std::pair<int const,PictureData>,std::_Select1st<std::pair<int const,PictureData>>,std::less<int>,std::allocator<std::pair<int const,PictureData>>>::_M_get_insert_unique_pos(
      (int *)&v22,
      (int)a1,
      &v25);
    v3 = (int)v22;
    v9 = v23;
    goto LABEL_27;
  }
  if ( a1[5] == 0 )
    goto LABEL_35;
  v9 = a1[4];
  if ( *(_DWORD *)(v9 + 16) >= v20 )
    goto LABEL_35;
LABEL_29:
  v12 = (_DWORD *)v9 == v21 || v20 < *(_DWORD *)(v9 + 16);
LABEL_32:
  v19 = (_DWORD *)operator new(0x34u);
  if ( v19 != (_DWORD *)-16 )
  {
    v13 = v26[0];
    v14 = v26[1];
    v19[4] = v25;
    v19[5] = v13;
    v19[6] = v14;
    v15 = v26[3];
    v16 = v26[4];
    v19[7] = v26[2];
    v19[8] = v15;
    v19[9] = v16;
    v17 = v26[6];
    v18 = v26[7];
    v19[10] = v26[5];
    v19[11] = v17;
    v19[12] = v18;
  }
  sub_391E64(v12, v19, v9, v21);
  v3 = (int)v19;
  ++a1[5];
  return v3 + 20;
}


//======================================================================
// std::map<int,std::string,std::less<int>,std::allocator<std::pair<int const,std::string>>>::operator[](int const&)
// address: 0x001A33A8   size: 0x14A (330 bytes)
//======================================================================
int __fastcall std::map<int,std::string>::operator[](_DWORD *a1, int *a2)
{
  _DWORD *v2; // r7
  int v4; // r4
  int v5; // r2
  _DWORD *v6; // r3
  int v7; // r3
  int v9; // r5
  int v10; // r0
  int v11; // r0
  _BOOL4 v12; // r7
  int v13; // r0
  int v14; // [sp+4h] [bp-30h]
  _DWORD *v15; // [sp+8h] [bp-2Ch]
  char *v16; // [sp+1Ch] [bp-18h] BYREF
  int v17; // [sp+20h] [bp-14h] BYREF
  _BYTE v18[4]; // [sp+24h] [bp-10h] BYREF
  _DWORD *v19; // [sp+28h] [bp-Ch] BYREF
  int v20; // [sp+2Ch] [bp-8h]

  v2 = (_DWORD *)a1[2];
  v15 = a1 + 1;
  v4 = (int)(a1 + 1);
  while ( 1 )
  {
    v5 = *a2;
    if ( v2 == nullptr )
      break;
    if ( v2[4] < v5 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = (_DWORD *)v4;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    v4 = (int)v2;
    v2 = v6;
  }
  if ( (_DWORD *)v4 == v15 || v5 < *(_DWORD *)(v4 + 16) )
  {
    v17 = *a2;
    v16 = &byte_55FB88;
    sub_3BEB1C(v18, &v16);
    if ( (_DWORD *)v4 == v15 )
    {
      if ( a1[5] != 0 )
      {
        v9 = a1[4];
        if ( *(_DWORD *)(v9 + 16) < v17 )
          goto LABEL_30;
      }
    }
    else
    {
      v14 = v17;
      v7 = *(_DWORD *)(v4 + 16);
      if ( v17 >= v7 )
      {
        if ( v7 >= v17 )
        {
LABEL_12:
          sub_3BDF80(v18);
          sub_3BDF80(&v16);
          return v4 + 20;
        }
        if ( v4 != a1[4] )
        {
          v11 = sub_391DDC(v4);
          if ( v14 >= *(_DWORD *)(v11 + 16) )
          {
            std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_get_insert_unique_pos(
              (int *)&v19,
              (int)a1,
              &v17);
            v2 = v19;
            v4 = v20;
          }
          else if ( *(_DWORD *)(v4 + 12) != 0 )
          {
            v4 = v11;
            v2 = (_DWORD *)v11;
          }
        }
        v9 = v4;
        v4 = (int)v2;
LABEL_28:
        if ( v9 == 0 )
          goto LABEL_12;
        v12 = true;
        if ( v4 != 0 )
        {
LABEL_33:
          v13 = operator new(0x18u);
          v4 = v13;
          if ( v13 != -16 )
          {
            *(_DWORD *)(v13 + 16) = v17;
            sub_3BEB1C(v13 + 20, v18);
          }
          sub_391E64(v12, v4, v9, v15);
          ++a1[5];
          goto LABEL_12;
        }
LABEL_30:
        v12 = (_DWORD *)v9 == v15 || v17 < *(_DWORD *)(v9 + 16);
        goto LABEL_33;
      }
      if ( v4 == a1[3] )
      {
        v9 = v4;
        goto LABEL_28;
      }
      v10 = sub_391E44(v4);
      v9 = v10;
      if ( *(_DWORD *)(v10 + 16) < v14 )
      {
        if ( *(_DWORD *)(v10 + 12) != 0 )
          v9 = v4;
        else
          v4 = 0;
        goto LABEL_28;
      }
    }
    std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_get_insert_unique_pos(
      (int *)&v19,
      (int)a1,
      &v17);
    v4 = (int)v19;
    v9 = v20;
    goto LABEL_28;
  }
  return v4 + 20;
}


//======================================================================
// std::map<std::string,tagPopWin,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::operator[](std::string const&)
// address: 0x001A3678   size: 0xAE (174 bytes)
//======================================================================
_DWORD *__fastcall std::map<std::string,tagPopWin>::operator[](_DWORD *a1, int a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r6
  _DWORD *inserted; // r5
  _DWORD *v6; // r3
  _DWORD v9[7]; // [sp+Ch] [bp-40h] BYREF
  _DWORD v10[7]; // [sp+28h] [bp-24h] BYREF
  _BYTE v11[8]; // [sp+44h] [bp-8h] BYREF

  v2 = (_DWORD *)a1[2];
  v3 = a1 + 1;
  inserted = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = inserted;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    inserted = v2;
    v2 = v6;
  }
  if ( inserted == v3 || std::operator<<char>() != 0 )
  {
    j_memset(v9, 0, sizeof(v9));
    v9[6] = &byte_55FB88;
    sub_3BEB1C(v10, a2);
    v10[1] = v9[0];
    v10[2] = v9[1];
    v10[3] = v9[2];
    v10[4] = v9[3];
    v10[5] = v9[4];
    LOBYTE(v10[6]) = v9[5];
    sub_3BEB1C(v11, &v9[6]);
    inserted = (_DWORD *)std::_Rb_tree<std::string,std::pair<std::string const,tagPopWin>,std::_Select1st<std::pair<std::string const,tagPopWin>>,std::less<std::string>,std::allocator<std::pair<std::string const,tagPopWin>>>::_M_insert_unique_(
                           a1,
                           inserted,
                           (int)v10);
    sub_3BDF80(v11);
    sub_3BDF80(v10);
    sub_3BDF80(&v9[6]);
  }
  return inserted + 5;
}


//======================================================================
// std::map<int,unsigned int,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::operator[](int const&)
// address: 0x001A372C   size: 0x126 (294 bytes)
//======================================================================
int __fastcall std::map<int,unsigned int>::operator[](_DWORD *a1, int *a2)
{
  _DWORD *v2; // r7
  int v4; // r4
  _DWORD *v5; // r3
  int v6; // r3
  int v8; // r5
  int v9; // r0
  int v10; // r0
  _BOOL4 v11; // r7
  int v12; // r0
  int v13; // r2
  int v14; // [sp+4h] [bp-20h]
  _DWORD *v15; // [sp+Ch] [bp-18h]
  int v16; // [sp+10h] [bp-14h] BYREF
  int v17; // [sp+14h] [bp-10h]
  _DWORD *v18; // [sp+18h] [bp-Ch] BYREF
  int v19; // [sp+1Ch] [bp-8h]

  v2 = (_DWORD *)a1[2];
  v15 = a1 + 1;
  v4 = (int)(a1 + 1);
  while ( 1 )
  {
    v14 = *a2;
    if ( v2 == nullptr )
      break;
    if ( v2[4] < v14 )
    {
      v5 = (_DWORD *)v2[3];
      v2 = (_DWORD *)v4;
    }
    else
    {
      v5 = (_DWORD *)v2[2];
    }
    v4 = (int)v2;
    v2 = v5;
  }
  if ( (_DWORD *)v4 != v15 && *a2 >= *(_DWORD *)(v4 + 16) )
    return v4 + 20;
  v17 = 0;
  v16 = v14;
  if ( (_DWORD *)v4 != v15 )
  {
    v6 = *(_DWORD *)(v4 + 16);
    if ( v14 >= v6 )
    {
      if ( v6 >= v14 )
        return v4 + 20;
      if ( v4 != a1[4] )
      {
        v10 = sub_391DDC(v4);
        if ( v14 >= *(_DWORD *)(v10 + 16) )
        {
          std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_M_get_insert_unique_pos(
            (int *)&v18,
            (int)a1,
            &v16);
          v2 = v18;
          v4 = v19;
        }
        else if ( *(_DWORD *)(v4 + 12) != 0 )
        {
          v4 = v10;
          v2 = (_DWORD *)v10;
        }
      }
      v8 = v4;
      v4 = (int)v2;
LABEL_27:
      if ( v8 == 0 )
        return v4 + 20;
      v11 = true;
      if ( v4 != 0 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( v4 == a1[3] )
    {
      v8 = v4;
      goto LABEL_27;
    }
    v9 = sub_391E44(v4);
    v8 = v9;
    if ( *(_DWORD *)(v9 + 16) < v14 )
    {
      if ( *(_DWORD *)(v9 + 12) != 0 )
        v8 = v4;
      else
        v4 = 0;
      goto LABEL_27;
    }
LABEL_35:
    std::_Rb_tree<int,std::pair<int const,unsigned int>,std::_Select1st<std::pair<int const,unsigned int>>,std::less<int>,std::allocator<std::pair<int const,unsigned int>>>::_M_get_insert_unique_pos(
      (int *)&v18,
      (int)a1,
      &v16);
    v4 = (int)v18;
    v8 = v19;
    goto LABEL_27;
  }
  if ( a1[5] == 0 )
    goto LABEL_35;
  v8 = a1[4];
  if ( *(_DWORD *)(v8 + 16) >= v14 )
    goto LABEL_35;
LABEL_29:
  v11 = (_DWORD *)v8 == v15 || v14 < *(_DWORD *)(v8 + 16);
LABEL_32:
  v12 = operator new(0x18u);
  v4 = v12;
  if ( v12 != -16 )
  {
    v13 = v17;
    *(_DWORD *)(v12 + 16) = v16;
    *(_DWORD *)(v12 + 20) = v13;
  }
  sub_391E64(v11, v12, v8, v15);
  ++a1[5];
  return v4 + 20;
}


//======================================================================
// std::map<int,std::vector<Frame *,std::allocator<Frame *>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *,std::allocator<Frame *>>>>>::operator[](int const&)
// address: 0x001A3E50   size: 0x146 (326 bytes)
//======================================================================
int __fastcall std::map<int,std::vector<Frame *>>::operator[](_DWORD *a1, int *a2)
{
  _DWORD *v2; // r7
  int v4; // r4
  int v5; // r3
  _DWORD *v6; // r3
  int v7; // r3
  int v9; // r5
  int v10; // r0
  int v11; // r0
  _BOOL4 v12; // r7
  int v13; // r0
  int v14; // [sp+4h] [bp-40h]
  _DWORD *v15; // [sp+8h] [bp-3Ch]
  _DWORD *v16; // [sp+1Ch] [bp-28h] BYREF
  int v17; // [sp+20h] [bp-24h]
  void *v18[3]; // [sp+24h] [bp-20h] BYREF
  int v19; // [sp+30h] [bp-14h] BYREF
  void *v20[4]; // [sp+34h] [bp-10h] BYREF

  v2 = (_DWORD *)a1[2];
  v15 = a1 + 1;
  v4 = (int)(a1 + 1);
  while ( 1 )
  {
    v5 = *a2;
    if ( v2 == nullptr )
      break;
    if ( v2[4] < v5 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = (_DWORD *)v4;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    v4 = (int)v2;
    v2 = v6;
  }
  if ( (_DWORD *)v4 == v15 || v5 < *(_DWORD *)(v4 + 16) )
  {
    v19 = *a2;
    memset(v18, 0, sizeof(v18));
    std::vector<Frame *>::vector(v20, (int)v18);
    if ( (_DWORD *)v4 == v15 )
    {
      if ( a1[5] != 0 )
      {
        v9 = a1[4];
        if ( *(_DWORD *)(v9 + 16) < v19 )
          goto LABEL_30;
      }
    }
    else
    {
      v7 = *(_DWORD *)(v4 + 16);
      v14 = v19;
      if ( v19 >= v7 )
      {
        if ( v7 >= v19 )
        {
LABEL_12:
          std::_Vector_base<Frame *>::~_Vector_base(v20);
          std::_Vector_base<Frame *>::~_Vector_base(v18);
          return v4 + 20;
        }
        if ( v4 != a1[4] )
        {
          v11 = sub_391DDC(v4);
          if ( v14 >= *(_DWORD *)(v11 + 16) )
          {
            std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::_M_get_insert_unique_pos(
              (int *)&v16,
              (int)a1,
              &v19);
            v2 = v16;
            v4 = v17;
          }
          else if ( *(_DWORD *)(v4 + 12) != 0 )
          {
            v4 = v11;
            v2 = (_DWORD *)v11;
          }
        }
        v9 = v4;
        v4 = (int)v2;
LABEL_28:
        if ( v9 == 0 )
          goto LABEL_12;
        v12 = true;
        if ( v4 != 0 )
        {
LABEL_33:
          v13 = operator new(0x20u);
          v4 = v13;
          if ( v13 != -16 )
          {
            *(_DWORD *)(v13 + 16) = v19;
            std::vector<Frame *>::vector((_DWORD *)(v13 + 20), (int)v20);
          }
          sub_391E64(v12, v4, v9, v15);
          ++a1[5];
          goto LABEL_12;
        }
LABEL_30:
        v12 = (_DWORD *)v9 == v15 || v19 < *(_DWORD *)(v9 + 16);
        goto LABEL_33;
      }
      if ( v4 == a1[3] )
      {
        v9 = v4;
        goto LABEL_28;
      }
      v10 = sub_391E44(v4);
      v9 = v10;
      if ( *(_DWORD *)(v10 + 16) < v14 )
      {
        if ( *(_DWORD *)(v10 + 12) != 0 )
          v9 = v4;
        else
          v4 = 0;
        goto LABEL_28;
      }
    }
    std::_Rb_tree<int,std::pair<int const,std::vector<Frame *>>,std::_Select1st<std::pair<int const,std::vector<Frame *>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<Frame *>>>>::_M_get_insert_unique_pos(
      (int *)&v16,
      (int)a1,
      &v19);
    v4 = (int)v16;
    v9 = v17;
    goto LABEL_28;
  }
  return v4 + 20;
}


//======================================================================
// std::map<std::string,UIObject *,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::operator[](std::string const&)
// address: 0x001A410E   size: 0x6E (110 bytes)
//======================================================================
_DWORD *__fastcall std::map<std::string,UIObject *>::operator[](_DWORD *a1, int a2)
{
  _DWORD *v2; // r5
  _DWORD *inserted; // r4
  _DWORD *v6; // r3
  _DWORD *v8; // [sp+4h] [bp-10h]
  _DWORD v9[3]; // [sp+8h] [bp-Ch] BYREF

  v2 = (_DWORD *)a1[2];
  v8 = a1 + 1;
  inserted = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = inserted;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    inserted = v2;
    v2 = v6;
  }
  if ( inserted == v8 || std::operator<<char>() != 0 )
  {
    sub_3BEB1C(v9, a2);
    v9[1] = 0;
    inserted = (_DWORD *)std::_Rb_tree<std::string,std::pair<std::string const,UIObject *>,std::_Select1st<std::pair<std::string const,UIObject *>>,std::less<std::string>,std::allocator<std::pair<std::string const,UIObject *>>>::_M_insert_unique_(
                           a1,
                           inserted,
                           (int)v9);
    sub_3BDF80(v9);
  }
  return inserted + 5;
}


//======================================================================
// std::map<std::string,stEventFrameArray,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::operator[](std::string const&)
// address: 0x001BBB6C   size: 0x84 (132 bytes)
//======================================================================
_DWORD *__fastcall std::map<std::string,stEventFrameArray>::operator[](_DWORD *a1, int a2)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r7
  _DWORD *inserted; // r4
  _DWORD *v6; // r3
  void *v9[3]; // [sp+Ch] [bp-20h] BYREF
  char v10[4]; // [sp+18h] [bp-14h] BYREF
  void *v11; // [sp+1Ch] [bp-10h] BYREF

  v2 = (_DWORD *)a1[2];
  v3 = a1 + 1;
  inserted = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = inserted;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    inserted = v2;
    v2 = v6;
  }
  if ( inserted == v3 || std::operator<<char>() != 0 )
  {
    memset(v9, 0, sizeof(v9));
    sub_3BEB1C(v10, a2);
    std::vector<Frame *>::vector(&v11, (int)v9);
    inserted = (_DWORD *)std::_Rb_tree<std::string,std::pair<std::string const,stEventFrameArray>,std::_Select1st<std::pair<std::string const,stEventFrameArray>>,std::less<std::string>,std::allocator<std::pair<std::string const,stEventFrameArray>>>::_M_insert_unique_(
                           a1,
                           inserted,
                           (int)v10);
    sub_1BA238(v11);
    sub_3BDF80(v10);
    sub_1BA238(v9[0]);
  }
  return inserted + 5;
}


//======================================================================
// std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string &&)
// address: 0x002B669C   size: 0x64 (100 bytes)
//======================================================================
_DWORD *__fastcall std::map<std::string,int>::operator[](_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  _DWORD *v5; // r4
  _DWORD *v6; // r3
  _DWORD *v8; // [sp+Ch] [bp-10h]
  _DWORD *v9; // [sp+14h] [bp-8h] BYREF

  v2 = (_DWORD *)a1[2];
  v8 = a1 + 1;
  v5 = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = v5;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    v5 = v2;
    v2 = v6;
  }
  if ( v5 == v8 || std::operator<<char>() != 0 )
  {
    v9 = a2;
    v5 = std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_44633B,
           &v9);
  }
  return v5 + 5;
}


//======================================================================
// std::map<std::string,BlockMaterial * (*)(void),std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::~map()
// address: 0x002C2754   size: 0xE (14 bytes)
//======================================================================
// Alternative name is '_ZNSt3mapISsPFP13BlockMaterialvESt4lessISsESaISt4pairIKSsS3_EEED1Ev'
int __fastcall std::map<std::string,BlockMaterial * (*)(void)>::~map(int a1)
{
  std::_Rb_tree<std::string,std::pair<std::string const,BlockMaterial * (*)(void)>,std::_Select1st<std::pair<std::string const,BlockMaterial * (*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::_M_erase(
    a1,
    *(_DWORD **)(a1 + 8));
  return a1;
}


//======================================================================
// std::map<std::string,ParticleTemplate *,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::operator[](std::string &&)
// address: 0x002E95D0   size: 0x64 (100 bytes)
//======================================================================
_DWORD *__fastcall std::map<std::string,ParticleTemplate *>::operator[](_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  _DWORD *v5; // r4
  _DWORD *v6; // r3
  _DWORD *v8; // [sp+Ch] [bp-10h]
  _DWORD *v9; // [sp+14h] [bp-8h] BYREF

  v2 = (_DWORD *)a1[2];
  v8 = a1 + 1;
  v5 = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v6 = (_DWORD *)v2[3];
      v2 = v5;
    }
    else
    {
      v6 = (_DWORD *)v2[2];
    }
    v5 = v2;
    v2 = v6;
  }
  if ( v5 == v8 || std::operator<<char>() != 0 )
  {
    v9 = a2;
    v5 = std::_Rb_tree<std::string,std::pair<std::string const,ParticleTemplate *>,std::_Select1st<std::pair<std::string const,ParticleTemplate *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_446CEB,
           &v9);
  }
  return v5 + 5;
}


//======================================================================
// std::map<ChunkIndex,int,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::operator[](ChunkIndex const&)
// address: 0x002EF488   size: 0x64 (100 bytes)
//======================================================================
int *__fastcall std::map<ChunkIndex,int>::operator[](_DWORD *a1, int *a2)
{
  int *v2; // r5
  int *v5; // r4
  int *v6; // r3
  int *v8; // [sp+Ch] [bp-10h]
  int *v9; // [sp+14h] [bp-8h] BYREF

  v2 = (int *)a1[2];
  v8 = a1 + 1;
  v5 = a1 + 1;
  while ( v2 != nullptr )
  {
    if ( sub_2EECB0(v2 + 4, a2) )
    {
      v6 = (int *)v2[3];
      v2 = v5;
    }
    else
    {
      v6 = (int *)v2[2];
    }
    v5 = v2;
    v2 = v6;
  }
  if ( v5 == v8 || sub_2EECB0(a2, v5 + 4) )
  {
    v9 = a2;
    v5 = std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,int>,std::_Select1st<std::pair<ChunkIndex const,int>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<ChunkIndex const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_446DFB,
           &v9);
  }
  return v5 + 6;
}


//======================================================================
// std::map<unsigned short,std::pair<char const*,bool>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<char const*,bool>>>>::operator[](unsigned short const&)
// address: 0x0038E6AE   size: 0x12C (300 bytes)
//======================================================================
int __fastcall std::map<unsigned short,std::pair<char const*,bool>>::operator[](_DWORD *a1, _WORD *a2)
{
  int v2; // r7
  int v4; // r4
  int v5; // r3
  unsigned int v6; // r3
  int v8; // r5
  int v9; // r0
  int v10; // r0
  _BOOL4 v11; // r7
  _DWORD *v12; // r0
  int v13; // r2
  int v14; // r3
  unsigned int v15; // [sp+4h] [bp-28h]
  _DWORD *v16; // [sp+Ch] [bp-20h]
  int v17; // [sp+14h] [bp-18h] BYREF
  int v18; // [sp+18h] [bp-14h]
  int v19; // [sp+1Ch] [bp-10h] BYREF
  int v20; // [sp+20h] [bp-Ch]
  int v21; // [sp+24h] [bp-8h]

  v2 = a1[2];
  v16 = a1 + 1;
  v4 = (int)(a1 + 1);
  while ( 1 )
  {
    v15 = (unsigned __int16)*a2;
    if ( v2 == 0 )
      break;
    if ( *(unsigned __int16 *)(v2 + 16) < v15 )
    {
      v5 = *(_DWORD *)(v2 + 12);
      v2 = v4;
    }
    else
    {
      v5 = *(_DWORD *)(v2 + 8);
    }
    v4 = v2;
    v2 = v5;
  }
  if ( (_DWORD *)v4 != v16 && v15 >= *(unsigned __int16 *)(v4 + 16) )
    return v4 + 20;
  LOWORD(v19) = *a2;
  v20 = 0;
  LOBYTE(v21) = 0;
  if ( (_DWORD *)v4 != v16 )
  {
    v6 = *(unsigned __int16 *)(v4 + 16);
    if ( v15 >= v6 )
    {
      if ( v6 >= v15 )
        return v4 + 20;
      if ( v4 != a1[4] )
      {
        v10 = sub_391DDC(v4);
        if ( *(unsigned __int16 *)(v10 + 16) <= v15 )
        {
          std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<char const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<char const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<char const*,bool>>>>::_M_get_insert_unique_pos(
            &v17,
            (int)a1,
            (unsigned __int16 *)&v19);
          v2 = v17;
          v4 = v18;
        }
        else if ( *(_DWORD *)(v4 + 12) != 0 )
        {
          v4 = v10;
          v2 = v10;
        }
      }
      v8 = v4;
      v4 = v2;
LABEL_27:
      if ( v8 == 0 )
        return v4 + 20;
      v11 = true;
      if ( v4 != 0 )
        goto LABEL_32;
      goto LABEL_29;
    }
    if ( v4 == a1[3] )
    {
      v8 = v4;
      goto LABEL_27;
    }
    v9 = sub_391E44(v4);
    v8 = v9;
    if ( *(unsigned __int16 *)(v9 + 16) < v15 )
    {
      if ( *(_DWORD *)(v9 + 12) != 0 )
        v8 = v4;
      else
        v4 = 0;
      goto LABEL_27;
    }
LABEL_35:
    std::_Rb_tree<unsigned short,std::pair<unsigned short const,std::pair<char const*,bool>>,std::_Select1st<std::pair<unsigned short const,std::pair<char const*,bool>>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,std::pair<char const*,bool>>>>::_M_get_insert_unique_pos(
      &v17,
      (int)a1,
      (unsigned __int16 *)&v19);
    v4 = v17;
    v8 = v18;
    goto LABEL_27;
  }
  if ( a1[5] == 0 )
    goto LABEL_35;
  v8 = a1[4];
  if ( *(unsigned __int16 *)(v8 + 16) >= v15 )
    goto LABEL_35;
LABEL_29:
  v11 = (_DWORD *)v8 == v16 || v15 < *(unsigned __int16 *)(v8 + 16);
LABEL_32:
  v12 = (_DWORD *)operator new(0x1Cu);
  v4 = (int)v12;
  if ( v12 != (_DWORD *)-16 )
  {
    v13 = v20;
    v12[4] = v19;
    v14 = v21;
    v12[5] = v13;
    v12[6] = v14;
  }
  sub_391E64(v11, v12, v8, v16);
  ++a1[5];
  return v4 + 20;
}


//======================================================================
// std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string const&)
// address: 0x0038EA28   size: 0x1A2 (418 bytes)
//======================================================================
int __fastcall std::map<std::string,int>::operator[](_DWORD *a1, int a2)
{
  int v4; // r4
  int v5; // r3
  int v7; // r7
  int v8; // r7
  int v9; // r7
  int v10; // [sp+4h] [bp-20h]
  unsigned int v11; // [sp+8h] [bp-1Ch]
  _DWORD *v12; // [sp+Ch] [bp-18h]
  _BYTE v13[4]; // [sp+10h] [bp-14h] BYREF
  int v14; // [sp+14h] [bp-10h]
  int v15; // [sp+18h] [bp-Ch] BYREF
  int v16; // [sp+1Ch] [bp-8h]

  v10 = a1[2];
  v12 = a1 + 1;
  v4 = (int)(a1 + 1);
  while ( v10 != 0 )
  {
    if ( std::operator<<char>() != 0 )
    {
      v5 = *(_DWORD *)(v10 + 12);
      v10 = v4;
    }
    else
    {
      v5 = *(_DWORD *)(v10 + 8);
    }
    v4 = v10;
    v10 = v5;
  }
  if ( (_DWORD *)v4 == v12 || std::operator<<char>() != 0 )
  {
    sub_3BEB1C(v13, a2);
    v14 = 0;
    if ( (_DWORD *)v4 == v12 )
    {
      if ( a1[5] != 0 )
      {
        v4 = a1[4];
        if ( std::operator<<char>() != 0 )
        {
          if ( v4 == 0 )
            goto LABEL_12;
          goto LABEL_31;
        }
      }
      goto LABEL_28;
    }
    if ( std::operator<<char>() == 0 )
    {
      if ( std::operator<<char>() == 0 )
      {
LABEL_12:
        sub_3BDF80(v13);
        return v4 + 20;
      }
      if ( v4 == a1[4] )
      {
LABEL_29:
        if ( v4 == 0 )
        {
          v4 = v10;
          goto LABEL_12;
        }
        v11 = 1;
        if ( v10 != 0 )
        {
LABEL_34:
          v9 = operator new(0x18u);
          if ( v9 != -16 )
          {
            sub_3BEB1C(v9 + 16, v13);
            *(_DWORD *)(v9 + 20) = v14;
          }
          sub_391E64(v11, v9, v4, v12);
          v4 = v9;
          ++a1[5];
          goto LABEL_12;
        }
LABEL_31:
        if ( (_DWORD *)v4 == v12 )
          v11 = 1;
        else
          v11 = std::operator<<char>();
        goto LABEL_34;
      }
      v8 = sub_391DDC(v4);
      if ( std::operator<<char>() != 0 )
      {
        if ( *(_DWORD *)(v4 + 12) != 0 )
        {
          v4 = v8;
          v10 = v8;
        }
        goto LABEL_29;
      }
LABEL_28:
      std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_unique_pos(
        &v15,
        (int)a1);
      v10 = v15;
      v4 = v16;
      goto LABEL_29;
    }
    if ( v4 != a1[3] )
    {
      v7 = sub_391E44(v4);
      if ( std::operator<<char>() == 0 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_unique_pos(
          &v15,
          (int)a1);
        v4 = v15;
        v7 = v16;
        goto LABEL_23;
      }
      if ( *(_DWORD *)(v7 + 12) == 0 )
      {
        v4 = *(_DWORD *)(v7 + 12);
LABEL_23:
        v10 = v4;
        v4 = v7;
        goto LABEL_29;
      }
    }
    v7 = v4;
    goto LABEL_23;
  }
  return v4 + 20;
}

