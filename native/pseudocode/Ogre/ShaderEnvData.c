// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ShaderEnvData

//======================================================================
// Ogre::ShaderEnvData::ShaderEnvData(void)
// address: 0x0015C8C8   size: 0xA0 (160 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13ShaderEnvDataC2Ev'
Ogre::ShaderEnvData *__fastcall Ogre::ShaderEnvData::ShaderEnvData(Ogre::ShaderEnvData *this)
{
  char *v1; // r2
  char *v3; // r0
  Ogre::ShaderEnvData *v4; // r5
  Ogre::Matrix4 *v5; // r0

  v1 = (char *)this + 12;
  v3 = (char *)this + 76;
  do
  {
    *(_DWORD *)v1 = 1065353216;
    *((_DWORD *)v1 + 1) = 1065353216;
    *((_DWORD *)v1 + 2) = 1065353216;
    *((_DWORD *)v1 + 3) = 1065353216;
    v1 += 16;
  }
  while ( v1 != v3 );
  *((_DWORD *)this + 35) = 1065353216;
  *((_DWORD *)this + 36) = 1065353216;
  *((_DWORD *)this + 37) = 1065353216;
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 39) = 1065353216;
  *((_DWORD *)this + 40) = 1065353216;
  *((_DWORD *)this + 41) = 1065353216;
  *((_DWORD *)this + 42) = 1065353216;
  *((_DWORD *)this + 47) = 1065353216;
  *((_DWORD *)this + 48) = 1065353216;
  *((_DWORD *)this + 49) = 1065353216;
  *((_DWORD *)this + 50) = 1065353216;
  *((_DWORD *)this + 51) = 1065353216;
  *((_DWORD *)this + 52) = 1065353216;
  *((_DWORD *)this + 53) = 1065353216;
  *((_DWORD *)this + 54) = 1065353216;
  Ogre::Matrix4::Matrix4((Ogre::ShaderEnvData *)((char *)this + 248));
  Ogre::Matrix4::Matrix4((Ogre::ShaderEnvData *)((char *)this + 312));
  Ogre::Matrix4::Matrix4((Ogre::ShaderEnvData *)((char *)this + 376));
  v4 = (Ogre::ShaderEnvData *)((char *)this + 444);
  do
  {
    v5 = v4;
    v4 = (Ogre::ShaderEnvData *)((char *)v4 + 64);
    Ogre::Matrix4::Matrix4(v5);
  }
  while ( v4 != (Ogre::ShaderEnvData *)((char *)this + 956) );
  Ogre::Matrix4::Matrix4(v4);
  Ogre::Matrix4::Matrix4((Ogre::ShaderEnvData *)((char *)this + 1020));
  Ogre::Matrix4::Matrix4((Ogre::ShaderEnvData *)((char *)this + 1084));
  j_memset(this, 0, 0x510u);
  return this;
}


//======================================================================
// Ogre::ShaderEnvData::clearFlags(void)
// address: 0x0015C96C   size: 0xC (12 bytes)
//======================================================================
void *__fastcall Ogre::ShaderEnvData::clearFlags(Ogre::ShaderEnvData *this)
{
  return j_memset(this, 0, 8u);
}


//======================================================================
// Ogre::ShaderEnvData::ShaderEnvData(Ogre::ShaderEnvData const&)
// address: 0x00174364   size: 0x1D8 (472 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13ShaderEnvDataC1ERKS0_'
Ogre::ShaderEnvData *__fastcall Ogre::ShaderEnvData::ShaderEnvData(
        Ogre::ShaderEnvData *this,
        const Ogre::ShaderEnvData *a2)
{
  char *v4; // r12
  int i; // r1
  char *v6; // r3
  char *v7; // r2
  int v8; // r6
  int v9; // r7
  char *v10; // r3
  char *v11; // r12
  int j; // r1
  char *v13; // r3
  char *v14; // r2
  int v15; // r6
  int v16; // r7
  char *v17; // r3
  int v18; // r6
  int v19; // r7
  int v20; // r6
  int v21; // r7
  int v22; // r6
  int v23; // r7
  int v24; // r6
  int v25; // r7
  int v26; // r6
  int v27; // r7
  int k; // r6
  int v29; // r6
  int v30; // r7
  int v31; // r6
  int v32; // r7
  _DWORD *v33; // r5
  int v34; // r6
  int v35; // r7
  char *v37; // [sp+4h] [bp-8h]
  char *v38; // [sp+4h] [bp-8h]

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  v4 = (char *)this + 12;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v37 = (char *)a2 + 12;
  for ( i = 0; i != 64; i += 16 )
  {
    v6 = &v4[i];
    v8 = *(_DWORD *)&v37[i + 4];
    v9 = *(_DWORD *)&v37[i + 8];
    v7 = &v37[i + 12];
    *(_DWORD *)v6 = *(_DWORD *)&v37[i];
    *((_DWORD *)v6 + 1) = v8;
    *((_DWORD *)v6 + 2) = v9;
    v10 = &v4[i + 12];
    *(_DWORD *)v10 = *(_DWORD *)v7;
  }
  v11 = (char *)this + 76;
  v38 = (char *)a2 + 76;
  for ( j = 0; j != 64; j += 16 )
  {
    v13 = &v11[j];
    v15 = *(_DWORD *)&v38[j + 4];
    v16 = *(_DWORD *)&v38[j + 8];
    v14 = &v38[j + 12];
    *(_DWORD *)v13 = *(_DWORD *)&v38[j];
    *((_DWORD *)v13 + 1) = v15;
    *((_DWORD *)v13 + 2) = v16;
    v17 = &v11[j + 12];
    *(_DWORD *)v17 = *(_DWORD *)v14;
  }
  v18 = *((_DWORD *)a2 + 36);
  v19 = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((_DWORD *)this + 36) = v18;
  *((_DWORD *)this + 37) = v19;
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  v20 = *((_DWORD *)a2 + 40);
  v21 = *((_DWORD *)a2 + 41);
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  *((_DWORD *)this + 40) = v20;
  *((_DWORD *)this + 41) = v21;
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  v22 = *((_DWORD *)a2 + 44);
  v23 = *((_DWORD *)a2 + 45);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 43);
  *((_DWORD *)this + 44) = v22;
  *((_DWORD *)this + 45) = v23;
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
  v24 = *((_DWORD *)a2 + 48);
  v25 = *((_DWORD *)a2 + 49);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  *((_DWORD *)this + 48) = v24;
  *((_DWORD *)this + 49) = v25;
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  v26 = *((_DWORD *)a2 + 52);
  v27 = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 52) = v26;
  *((_DWORD *)this + 53) = v27;
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 58);
  *((_DWORD *)this + 59) = *((_DWORD *)a2 + 59);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 60);
  *((_DWORD *)this + 61) = *((_DWORD *)a2 + 61);
  Ogre::Matrix4::Matrix4((Ogre::ShaderEnvData *)((char *)this + 248), (const Ogre::ShaderEnvData *)((char *)a2 + 248));
  Ogre::Matrix4::Matrix4((Ogre::ShaderEnvData *)((char *)this + 312), (const Ogre::ShaderEnvData *)((char *)a2 + 312));
  Ogre::Matrix4::Matrix4((Ogre::ShaderEnvData *)((char *)this + 376), (const Ogre::ShaderEnvData *)((char *)a2 + 376));
  *((_DWORD *)this + 110) = *((_DWORD *)a2 + 110);
  for ( k = 0; k != 512; k += 64 )
    Ogre::Matrix4::Matrix4(
      (Ogre::ShaderEnvData *)((char *)this + k + 444),
      (const Ogre::ShaderEnvData *)((char *)a2 + k + 444));
  Ogre::Matrix4::Matrix4((Ogre::ShaderEnvData *)((char *)this + 956), (const Ogre::ShaderEnvData *)((char *)a2 + 956));
  Ogre::Matrix4::Matrix4((Ogre::ShaderEnvData *)((char *)this + 1020), (const Ogre::ShaderEnvData *)((char *)a2 + 1020));
  Ogre::Matrix4::Matrix4((Ogre::ShaderEnvData *)((char *)this + 1084), (const Ogre::ShaderEnvData *)((char *)a2 + 1084));
  *((_DWORD *)this + 287) = *((_DWORD *)a2 + 287);
  *((_DWORD *)this + 288) = *((_DWORD *)a2 + 288);
  *((_DWORD *)this + 289) = *((_DWORD *)a2 + 289);
  v29 = *((_DWORD *)a2 + 291);
  v30 = *((_DWORD *)a2 + 292);
  *((_DWORD *)this + 290) = *((_DWORD *)a2 + 290);
  *((_DWORD *)this + 291) = v29;
  *((_DWORD *)this + 292) = v30;
  *((_DWORD *)this + 293) = *((_DWORD *)a2 + 293);
  j_memcpy((char *)this + 1176, (char *)a2 + 1176, 0x58u);
  v31 = *((_DWORD *)a2 + 317);
  v32 = *((_DWORD *)a2 + 318);
  *((_DWORD *)this + 316) = *((_DWORD *)a2 + 316);
  *((_DWORD *)this + 317) = v31;
  *((_DWORD *)this + 318) = v32;
  *((_DWORD *)this + 319) = *((_DWORD *)a2 + 319);
  v33 = (_DWORD *)((char *)a2 + 1280);
  v34 = v33[1];
  v35 = v33[2];
  *((_DWORD *)this + 320) = *v33;
  *((_DWORD *)this + 321) = v34;
  *((_DWORD *)this + 322) = v35;
  *((_DWORD *)this + 323) = v33[3];
  return this;
}

