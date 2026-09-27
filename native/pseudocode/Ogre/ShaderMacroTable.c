// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ShaderMacroTable

//======================================================================
// Ogre::ShaderMacroTable::ShaderMacroTable(void)
// address: 0x00154300   size: 0xA (10 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16ShaderMacroTableC1Ev'
_DWORD *__fastcall Ogre::ShaderMacroTable::ShaderMacroTable(_DWORD *this)
{
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// Ogre::ShaderMacroTable::~ShaderMacroTable()
// address: 0x0015430A   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16ShaderMacroTableD1Ev'
void __fastcall Ogre::ShaderMacroTable::~ShaderMacroTable(void ***this)
{
  unsigned int i; // r5
  void **v3; // r0
  int v4; // r6

  for ( i = 0; ; ++i )
  {
    v3 = *this;
    if ( i >= ((char *)*(this + 1) - (char *)*this) >> 3 )
      break;
    v4 = 2 * i;
    j_free(v3[2 * i]);
    j_free((*this)[v4 + 1]);
  }
  if ( v3 != nullptr )
    operator delete(v3);
}


//======================================================================
// Ogre::ShaderMacroTable::addMacro(char const*,int)
// address: 0x00154624   size: 0x66 (102 bytes)
//======================================================================
int __fastcall Ogre::ShaderMacroTable::addMacro(Ogre::ShaderMacroTable *this, const char *a2, int a3)
{
  __int64 v4; // r0
  int v5; // r3
  __int64 v8; // [sp+Ch] [bp-8h] BYREF
  char v9[256]; // [sp+14h] [bp+0h] BYREF

  LODWORD(v8) = j_strdup(a2);
  j_sprintf(v9, "%d", a3);
  LODWORD(v4) = j_strdup(v9);
  HIDWORD(v4) = *((_DWORD *)this + 1);
  v5 = *((_DWORD *)this + 2);
  HIDWORD(v8) = v4;
  if ( HIDWORD(v4) == v5 )
  {
    LODWORD(v4) = this;
    LODWORD(v4) = std::vector<Ogre::ShaderMacro>::_M_insert_aux(v4, &v8);
  }
  else
  {
    if ( HIDWORD(v4) != 0 )
      *(_QWORD *)HIDWORD(v4) = v8;
    *((_DWORD *)this + 1) += 8;
  }
  return v4;
}


//======================================================================
// Ogre::ShaderMacroTable::createFromShaderEnv(Ogre::ShaderEnvFlags const&)
// address: 0x00154694   size: 0x1D6 (470 bytes)
//======================================================================
int __fastcall Ogre::ShaderMacroTable::createFromShaderEnv(Ogre::ShaderMacroTable *a1, unsigned __int8 *a2)
{
  int v4; // r6
  int result; // r0
  unsigned int v6; // r2
  int v7; // r2
  unsigned int v8; // r2
  int v9; // r2
  int v10; // r2
  unsigned int v11; // r2
  int v12; // r2
  int v13; // r2
  unsigned int v14; // r2
  int v15; // r2
  int v16; // r2
  int v17; // r2
  char s[256]; // [sp+Ch] [bp-108h] BYREF

  v4 = 0;
  result = Ogre::ShaderMacroTable::addMacro(a1, "NUM_LIGHTS", *a2 & 7);
  while ( v4 < (*a2 & 7) )
  {
    j_sprintf(s, "LIGHT%d_TYPE", v4);
    if ( v4 != 0 )
    {
      if ( v4 == 1 )
      {
        v6 = *a2 << 25;
      }
      else
      {
        v7 = a2[1];
        if ( v4 == 2 )
          v6 = v7 << 30;
        else
          v6 = v7 << 27;
      }
    }
    else
    {
      v6 = *a2 << 28;
    }
    Ogre::ShaderMacroTable::addMacro(a1, s, v6 >> 31);
    j_sprintf(s, "LIGHT%d_SHADOW", v4);
    if ( v4 != 0 )
    {
      if ( v4 == 1 )
      {
        v9 = *a2 >> 7;
        goto LABEL_18;
      }
      v10 = a2[1];
      if ( v4 == 2 )
        v8 = v10 << 29;
      else
        v8 = v10 << 26;
    }
    else
    {
      v8 = *a2 << 27;
    }
    v9 = v8 >> 31;
LABEL_18:
    Ogre::ShaderMacroTable::addMacro(a1, s, v9);
    j_sprintf(s, "LIGHT%d_SPECULAR", v4);
    if ( v4 != 0 )
    {
      v12 = a2[1];
      if ( v4 == 1 )
      {
        v13 = v12 & 1;
        goto LABEL_26;
      }
      if ( v4 == 2 )
        v11 = v12 << 28;
      else
        v11 = v12 << 25;
    }
    else
    {
      v11 = *a2 << 26;
    }
    v13 = v11 >> 31;
LABEL_26:
    result = Ogre::ShaderMacroTable::addMacro(a1, s, v13);
    ++v4;
  }
  v14 = (unsigned int)(a2[2] << 27) >> 29;
  if ( v14 != 0 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "SKIN_MAXINFL", v14);
  if ( (unsigned int)(a2[2] << 26) >> 31 == 1 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "MORPH_POS", 1);
  if ( (unsigned int)(a2[2] << 25) >> 31 == 1 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "MORPH_UV0", 1);
  if ( a2[1] >> 7 == 1 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "FOG_DISTANCE", 1);
  if ( (a2[2] & 1) == 1 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "FOG_HEIGHT", 1);
  if ( (unsigned int)(a2[2] << 30) >> 31 == 1 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "LOG_SHADOWMAP", 1);
  if ( (a2[3] & 0xF) != 0 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "LIGHT_MAPPING", a2[3] & 0xF);
  v15 = a2[3] >> 4;
  if ( v15 != 0 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "ATI_NV", v15);
  if ( (a2[4] & 0xF) != 0 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "TRANSPARENT", a2[4] & 0xF);
  v16 = a2[4] >> 4;
  if ( v16 != 0 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "MRTENABLE", v16);
  if ( (a2[5] & 0xF) != 0 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "SHADERLEVEL", a2[5] & 0xF);
  v17 = a2[5] >> 4;
  if ( v17 != 0 )
    result = Ogre::ShaderMacroTable::addMacro(a1, "DECALBLENDMODE", v17);
  if ( a2[2] >> 7 == 1 )
    return Ogre::ShaderMacroTable::addMacro(a1, "MODEL_TRANSPARENT", 1);
  return result;
}

