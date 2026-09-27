// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::AmbientInfo

//======================================================================
// Ogre::AmbientInfo::operator=(Ogre::AmbientInfo const&)
// address: 0x0017EE68   size: 0x122 (290 bytes)
//======================================================================
int __fastcall Ogre::AmbientInfo::operator=(int a1, int a2)
{
  int v2; // r2
  _DWORD *v5; // r3
  int v6; // r0
  int v7; // r1
  int v8; // r6
  int v9; // r1
  int v10; // r6
  int v11; // r1
  int v12; // r6
  int v13; // r1
  int v14; // r6
  int v15; // r1
  int v16; // r6
  int v17; // r1
  int v18; // r6

  v2 = a2 + 4;
  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2);
  v5 = (_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)(a2 + 8);
  v8 = *(_DWORD *)(v2 + 8);
  *v5 = v6;
  v5[1] = v7;
  v5[2] = v8;
  v5 += 3;
  *v5++ = *(_DWORD *)(v2 + 12);
  v9 = *(_DWORD *)(a2 + 24);
  v10 = *(_DWORD *)(a2 + 28);
  *v5 = *(_DWORD *)(a2 + 20);
  v5[1] = v9;
  v5[2] = v10;
  v5[3] = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 44) = *(_BYTE *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  v11 = *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 56) = v11;
  *(_DWORD *)(a1 + 60) = v12;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  v13 = *(_DWORD *)(a2 + 80);
  v14 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(a1 + 80) = v13;
  *(_DWORD *)(a1 + 84) = v14;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  v15 = *(_DWORD *)(a2 + 96);
  v16 = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 96) = v15;
  *(_DWORD *)(a1 + 100) = v16;
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
  v17 = *(_DWORD *)(a2 + 120);
  v18 = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(a1 + 120) = v17;
  *(_DWORD *)(a1 + 124) = v18;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 140);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 156);
  j_memcpy((void *)(a1 + 160), (const void *)(a2 + 160), 0x80u);
  j_memcpy((void *)(a1 + 288), (const void *)(a2 + 288), 0x80u);
  j_memcpy((void *)(a1 + 416), (const void *)(a2 + 416), 0x80u);
  j_memcpy((void *)(a1 + 544), (const void *)(a2 + 544), 0x80u);
  return a1;
}

