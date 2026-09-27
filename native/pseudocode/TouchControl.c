// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TouchControl

//======================================================================
// TouchControl::TouchControl(Ogre::UIRenderer *)
// address: 0x002E4758   size: 0x7C (124 bytes)
//======================================================================
// Alternative name is '_ZN12TouchControlC2EPN4Ogre10UIRendererE'
void __fastcall TouchControl::TouchControl(TouchControl *this, Ogre::UIRenderer *a2)
{
  char *v4; // r0

  Ogre::Singleton<TouchControl>::ms_Singleton = (int)this;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 8) = -1;
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 17) = -1;
  *((_DWORD *)this + 21) = -1;
  *((_DWORD *)this + 22) = -1;
  *((_DWORD *)this + 28) = 1;
  *((_DWORD *)this + 29) = 1077936128;
  v4 = (char *)this + 120;
  *v4 = 0;
  v4[1] = 0;
  *((_DWORD *)this + 1) = (*(int (__fastcall **)(Ogre::UIRenderer *, const char *, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 72))(
                            a2,
                            "ui/mobile/ui.png",
                            2,
                            0,
                            0,
                            1);
  *((_DWORD *)this + 2) = (*(int (__fastcall **)(Ogre::UIRenderer *, const char *, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 72))(
                            a2,
                            "ui/mobile/ui2.png",
                            2,
                            0,
                            0,
                            1);
  *((_DWORD *)this + 3) = (*(int (__fastcall **)(Ogre::UIRenderer *, const char *, int))(*(_DWORD *)a2 + 72))(
                            a2,
                            "ui/mobile/effect/ui_button_2.png",
                            2);
}


//======================================================================
// TouchControl::~TouchControl()
// address: 0x002E47F0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12TouchControlD2Ev'
void __fastcall TouchControl::~TouchControl(TouchControl *this)
{
  Ogre::Singleton<TouchControl>::ms_Singleton = 0;
}


//======================================================================
// TouchControl::onInputEvent(PlayerControl *,Ogre::InputEvent const&)
// address: 0x002E4800   size: 0x722 (1826 bytes)
//======================================================================
bool __fastcall TouchControl::onInputEvent(TouchControl *this, GameCamera **a2, const InputEvent *a3)
{
  XtInputCallbackProc ie_proc; // r3
  int v6; // r1
  struct _InputEvent *ie_oq; // r3
  XtPointer ie_closure; // r7
  _DWORD *v9; // r5
  int v10; // r4
  int v11; // r1
  int v12; // r7
  int v13; // r0
  int v14; // r4
  XtPointer v15; // r3
  int v16; // r3
  char *v17; // r4
  int v18; // r6
  int *v19; // r4
  int v20; // r3
  int v21; // r3
  int v22; // r4
  int v23; // r0
  int v24; // r5
  int v25; // r3
  int v26; // r2
  int v27; // r0
  int v28; // r5
  int isMobile; // r5
  int v30; // r3
  int v31; // r4
  int v32; // r5
  int v33; // r0
  int v34; // r1
  int v35; // r0
  int v36; // r5
  int v37; // r2
  int v38; // r3
  int v39; // r0
  int v40; // r5
  int v41; // r0
  int v42; // r5
  int v43; // r3
  int v44; // r4
  int v45; // r5
  int v46; // r0
  int v47; // r3
  XtPointer v48; // r7
  char *v49; // r4
  float v50; // r1
  XtPointer v51; // r7
  int v52; // r0
  struct _InputEvent *v53; // r2
  int v54; // r3
  int v55; // r0
  XtPointer v56; // r7
  char *v57; // r4
  float v58; // r1
  float v59; // r4
  XtPointer v60; // r7
  XtPointer v61; // r7
  int v62; // r3
  XtPointer v63; // r7
  int v64; // r3
  int v65; // r4
  int v66; // r3
  int v67; // r4
  struct _InputEvent *v69; // [sp+0h] [bp-34h]
  struct _InputEvent *ie_next; // [sp+4h] [bp-30h]
  float v71; // [sp+8h] [bp-2Ch]
  float v72; // [sp+8h] [bp-2Ch]
  int v74; // [sp+14h] [bp-20h]
  int v75; // [sp+18h] [bp-1Ch]
  float v76; // [sp+1Ch] [bp-18h]
  int v77; // [sp+28h] [bp-Ch] BYREF
  int v78; // [sp+2Ch] [bp-8h] BYREF

  v74 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88);
  v75 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92);
  ie_proc = a3->ie_proc;
  v6 = *(unsigned __int8 *)(Ogre::Singleton<ClientManager>::ms_Singleton + 49);
  if ( *(_BYTE *)(Ogre::Singleton<ClientManager>::ms_Singleton + 49) != 0 )
  {
    if ( ie_proc == (XtInputCallbackProc)&word_10 )
    {
      ie_oq = a3->ie_oq;
      ie_closure = a3->ie_closure;
      *((_DWORD *)this + 24) = a3->ie_next;
      *((_DWORD *)this + 25) = ie_oq;
      *((_DWORD *)this + 22) = ie_closure;
      return true;
    }
    if ( ((unsigned int)ie_proc & 0xFFFFFFFD) == 0x11 )
    {
      *((_DWORD *)this + 22) = -1;
      return true;
    }
    if ( ie_proc == (XtInputCallbackProc)&word_12 )
    {
      v9 = a3->ie_closure;
      if ( *v9 != *((_DWORD *)this + 22) )
        return true;
      v10 = v9[6];
      v11 = *((_DWORD *)this + 24);
      v12 = v9[7] - *((_DWORD *)this + 25);
      if ( v10 == v11 && v12 == 0 )
        return true;
      GameCamera::rotate(a2[65], (float)((float)(v10 - v11) * 3.0) / (float)v74, (float)((float)v12 * 3.0) / (float)v75);
      v47 = v9[6];
      *((_DWORD *)this + 25) = v9[7];
      goto LABEL_95;
    }
    goto LABEL_63;
  }
  if ( ie_proc == (XtInputCallbackProc)&word_10 )
  {
    ie_next = a3->ie_next;
    v69 = a3->ie_oq;
    v13 = sub_2E4684();
    v14 = sub_2E46C8(&v77, &v78, *(float *)&v13);
    if ( (int)Ogre::Sqrt(
                COERCE_OGRE_((float)(((int)ie_next - v77) * ((int)ie_next - v77) + ((int)v69 - v78) * ((int)v69 - v78))),
                COERCE_FLOAT((struct _InputEvent *)((char *)ie_next - v77))) < v14 / 2
      && *((_BYTE *)this + 121) == 0 )
    {
      v48 = a3->ie_closure;
      *((_DWORD *)this + 5) = *((unsigned __int8 *)this + 121);
      *((_DWORD *)this + 6) = ie_next;
      *((_DWORD *)this + 4) = v48;
      *((_DWORD *)this + 7) = v69;
      return true;
    }
    v76 = (float)(int)ie_next;
    v71 = COERCE_FLOAT(sub_2E4684());
    if ( (float)(int)ie_next < (float)(v71 * 380.0) && (float)(int)v69 > (float)(v71 * 320.0) )
    {
      v52 = (int)(float)(v71 * 226.0) / 2;
      v53 = (struct _InputEvent *)v52;
      if ( v52 < (int)ie_next )
        v53 = ie_next;
      v54 = (int)(float)(v71 * 226.0) / 2;
      if ( v52 < (int)v69 )
        v54 = (int)v69;
      v55 = v75 - v52;
      if ( v54 > v55 )
        v54 = v55;
      v56 = a3->ie_closure;
      *((_DWORD *)this + 9) = v53;
      *((_DWORD *)this + 10) = v54;
      *((_DWORD *)this + 8) = v56;
      *((_DWORD *)this + 11) = v53;
      *((_DWORD *)this + 12) = v54;
      return true;
    }
    LODWORD(v50) = (char *)v69
                 - (int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92) - (float)(v71 * 100.0));
    v49 = (char *)ie_next
        - (int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88) - (float)(v71 * 90.0));
    if ( (float)(int)Ogre::Sqrt(COERCE_OGRE_((float)((int)v49 * (int)v49 + LODWORD(v50) * LODWORD(v50))), v50) < (float)(v71 * 75.0)
      && *((int *)this + 13) < 0 )
    {
      v51 = a3->ie_closure;
      *((_DWORD *)this + 16) = 0;
      *((_DWORD *)this + 13) = v51;
      PlayerControl::setJumping(g_pPlayerCtrl, 1);
      ClientManager::playSound2D(
        (ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton,
        "sounds/ui/button/jump.ogg",
        500.0);
      return true;
    }
    v72 = COERCE_FLOAT(sub_2E4684());
    LODWORD(v58) = (char *)v69
                 - (int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92) - (float)(v72 * 250.0));
    v57 = (char *)ie_next
        - (int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88) - (float)(v72 * 90.0));
    if ( (float)(int)Ogre::Sqrt(COERCE_OGRE_((float)((int)v57 * (int)v57 + LODWORD(v58) * LODWORD(v58))), v58) < (float)(v72 * 75.0)
      && *((int *)this + 17) < 0 )
    {
      v60 = a3->ie_closure;
      *((_DWORD *)this + 21) = 0;
      *((_DWORD *)this + 17) = v60;
      PlayerControl::setUseItem((PlayerControl *)g_pPlayerCtrl, 1);
      *((_DWORD *)this + 19) = ie_next;
      *((_DWORD *)this + 20) = v69;
      return true;
    }
    v59 = COERCE_FLOAT(sub_2E4684());
    if ( v76 > (float)(v59 * 935.0) && (float)(int)v69 > (float)(v59 * 421.0)
      || v76 > (float)(v59 * 1110.0) && (float)(int)v69 > (float)(v59 * 370.0)
      || *((int *)this + 22) >= 0 )
    {
      return true;
    }
    isMobile = *((unsigned __int8 *)this + 121);
    if ( *((_BYTE *)this + 121) == 0 )
    {
      v62 = 1;
      if ( (int)ie_next < (int)(float)((float)v74 * 0.5) )
        v62 = 2;
      *((_DWORD *)this + 28) = v62;
      v63 = a3->ie_closure;
      *((_DWORD *)this + 24) = ie_next;
      *((_DWORD *)this + 22) = v63;
      *((_DWORD *)this + 23) = 0;
      *((_DWORD *)this + 25) = v69;
      return true;
    }
    v61 = a3->ie_closure;
    *((_DWORD *)this + 6) = ie_next;
    *((_DWORD *)this + 4) = v61;
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 7) = v69;
    BlockOperateMgr::beginOperate(a2[66], 1);
    return isMobile;
  }
  if ( ((unsigned int)ie_proc & 0xFFFFFFFD) == 0x11 )
  {
    v15 = a3->ie_closure;
    if ( v15 == *((XtPointer *)this + 8) )
    {
      *((_DWORD *)this + 8) = -1;
      a2[71] = nullptr;
      a2[72] = nullptr;
      return true;
    }
    if ( v15 == *((XtPointer *)this + 4) )
    {
      *((_DWORD *)this + 4) = -1;
      v16 = *((_DWORD *)this + 5);
      if ( v16 == 0 )
      {
        v17 = (char *)(a2 + 63);
LABEL_28:
        BlockOperateMgr::beginOperate(*((_DWORD *)v17 + 3), 1);
        BlockOperateMgr::tick(*((BlockOperateMgr **)v17 + 3));
        goto LABEL_31;
      }
    }
    else
    {
      if ( v15 == *((XtPointer *)this + 13) )
      {
        *((_DWORD *)this + 13) = -1;
        PlayerControl::setJumping(g_pPlayerCtrl, v6);
        return true;
      }
      if ( v15 == *((XtPointer *)this + 17) )
      {
        *((_DWORD *)this + 17) = -1;
        PlayerControl::setUseItem((PlayerControl *)a2, v6);
        return true;
      }
      if ( v15 != *((XtPointer *)this + 22) )
        return true;
      v16 = *((_DWORD *)this + 23);
      *((_DWORD *)this + 22) = -1;
      if ( v16 == 0 )
      {
        *((_DWORD *)this + 4) = -1;
        v17 = (char *)(a2 + 63);
        BlockOperateMgr::endOperate(a2[66]);
        v18 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92);
        *((float *)a2[66] + 1) = (float)(int)a3->ie_next
                               / (float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88);
        *((float *)a2[66] + 2) = (float)(int)a3->ie_oq / (float)v18;
        goto LABEL_28;
      }
    }
    if ( v16 != 2 )
      return true;
    v17 = (char *)(a2 + 63);
LABEL_31:
    BlockOperateMgr::endOperate(*((BlockOperateMgr **)v17 + 3));
    return true;
  }
  if ( ie_proc != (XtInputCallbackProc)&word_12 )
  {
LABEL_63:
    isMobile = ClientManager::isMobile((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton);
    if ( isMobile != 0 )
      return (unsigned int)a3->ie_proc - 1 > 1;
    return isMobile;
  }
  v19 = (int *)a3->ie_closure;
  v20 = *v19;
  if ( *v19 == *((_DWORD *)this + 8) )
  {
    v21 = v19[6];
    v22 = v19[7];
    *((_DWORD *)this + 11) = v21;
    *((_DWORD *)this + 12) = v22;
    return true;
  }
  if ( v20 == *((_DWORD *)this + 4) )
  {
    v23 = v19[6];
    v24 = v19[7];
    v25 = *((_DWORD *)this + 7);
    v26 = *((_DWORD *)this + 6);
    if ( *((_DWORD *)this + 5) != 0 )
    {
      v32 = v24 - v25;
      v33 = v23 - v26;
      if ( *((_BYTE *)this + 120) != 0 )
        v32 = -v32;
      if ( v33 != 0 || v32 != 0 )
      {
        GameCamera::rotate(
          a2[65],
          (float)((float)v33 * *((float *)this + 29)) / (float)v74,
          (float)((float)v32 * *((float *)this + 29)) / (float)v75);
        v64 = v19[6];
        v65 = v19[7];
        *((_DWORD *)this + 6) = v64;
        *((_DWORD *)this + 7) = v65;
      }
      return true;
    }
    v27 = (v23 - v26 + ((v23 - v26) >> 31)) ^ ((v23 - v26) >> 31);
    v28 = (v24 - v25 + ((v24 - v25) >> 31)) ^ ((v24 - v25) >> 31);
    if ( v28 < v27 )
      v28 = v27;
    if ( v28 > 10 )
    {
      isMobile = 1;
      *((_DWORD *)this + 5) = 1;
      v30 = v19[6];
      v31 = v19[7];
      *((_DWORD *)this + 6) = v30;
      *((_DWORD *)this + 7) = v31;
      return isMobile;
    }
    return true;
  }
  if ( v20 == *((_DWORD *)this + 17) )
  {
    v34 = v19[7];
    v35 = v19[6] - *((_DWORD *)this + 19);
    v36 = v34 - *((_DWORD *)this + 20);
    if ( *((_BYTE *)this + 120) != 0 )
      v36 = *((_DWORD *)this + 20) - v34;
    if ( v35 != 0 || v36 != 0 )
    {
      GameCamera::rotate(
        a2[65],
        (float)((float)v35 * *((float *)this + 29)) / (float)v74,
        (float)((float)v36 * *((float *)this + 29)) / (float)v75);
      v66 = v19[6];
      v67 = v19[7];
      *((_DWORD *)this + 19) = v66;
      *((_DWORD *)this + 20) = v67;
    }
    return true;
  }
  if ( v20 != *((_DWORD *)this + 22) )
    return true;
  v37 = *((_DWORD *)this + 24);
  v38 = *((_DWORD *)this + 25);
  v39 = v19[6];
  v40 = v19[7];
  if ( *((_DWORD *)this + 23) != 0 )
  {
    v45 = v40 - v38;
    v46 = v39 - v37;
    if ( *((_BYTE *)this + 120) != 0 )
      v45 = -v45;
    if ( v46 == 0 && v45 == 0 )
      return true;
    GameCamera::rotate(
      a2[65],
      (float)((float)v46 * *((float *)this + 29)) / (float)v74,
      (float)((float)v45 * *((float *)this + 29)) / (float)v75);
    v47 = v19[6];
    *((_DWORD *)this + 25) = v19[7];
LABEL_95:
    *((_DWORD *)this + 24) = v47;
    return true;
  }
  v41 = (v39 - v37 + ((v39 - v37) >> 31)) ^ ((v39 - v37) >> 31);
  v42 = (v40 - v38 + ((v40 - v38) >> 31)) ^ ((v40 - v38) >> 31);
  if ( v42 < v41 )
    v42 = v41;
  if ( v42 <= 10 )
    return true;
  isMobile = 1;
  *((_DWORD *)this + 23) = 1;
  v43 = v19[6];
  v44 = v19[7];
  *((_DWORD *)this + 24) = v43;
  *((_DWORD *)this + 25) = v44;
  return isMobile;
}


//======================================================================
// TouchControl::update(PlayerControl *)
// address: 0x002E4F24   size: 0x214 (532 bytes)
//======================================================================
float __fastcall TouchControl::update(float this, PlayerControl *a2)
{
  _DWORD *v2; // r1
  int v3; // r7
  int v4; // r1
  int *v5; // r4
  __suseconds_t v6; // r1
  float v7; // r6
  int v8; // r1
  __suseconds_t v9; // r1
  float v10; // r5
  float v11; // r4
  float v12; // r1
  float v13; // r0
  float v14; // r4
  int v15; // r3
  int v16; // r2
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch]

  v2 = (_DWORD *)((char *)a2 + 252);
  v3 = v2[3];
  v2[8] = 0;
  v2[9] = 0;
  *(_DWORD *)(v3 + 4) = 1056964608;
  *(_DWORD *)(v3 + 8) = 1056964608;
  v17 = v2;
  v4 = *(_DWORD *)(LODWORD(this) + 88);
  v5 = (int *)LODWORD(this);
  if ( v4 >= 0 && *(_BYTE *)(Ogre::Singleton<ClientManager>::ms_Singleton + 49) == 0 )
  {
    this = COERCE_FLOAT(
             Ogre::InputManager::findTouchObjById(
               (Ogre::InputManager *)Ogre::Singleton<Ogre::InputManager>::ms_Singleton,
               v4));
    v7 = this;
    if ( v5[23] == 0 && this != 0.0 )
    {
      LODWORD(this) = Ogre::Timer::getSystemTick((Ogre::Timer *)LODWORD(this), v6) - *(_DWORD *)(LODWORD(this) + 32);
      if ( LODWORD(this) > 0x12C && v5[4] < 0 && v5[17] < 0 )
      {
        v5[23] = 2;
        this = COERCE_FLOAT(BlockOperateMgr::beginOperate(v3, 1));
      }
    }
    if ( v5[23] == 2 )
    {
      v18 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92);
      *(float *)(v3 + 4) = (float)*(int *)(LODWORD(v7) + 24)
                         / (float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88);
      this = (float)*(int *)(LODWORD(v7) + 28) / (float)v18;
      *(float *)(v3 + 8) = this;
    }
  }
  v8 = v5[4];
  if ( v8 >= 0 && *(_BYTE *)(Ogre::Singleton<ClientManager>::ms_Singleton + 49) == 0 )
  {
    this = COERCE_FLOAT(
             Ogre::InputManager::findTouchObjById(
               (Ogre::InputManager *)Ogre::Singleton<Ogre::InputManager>::ms_Singleton,
               v8));
    if ( v5[5] == 0 && this != 0.0 )
    {
      LODWORD(this) = Ogre::Timer::getSystemTick((Ogre::Timer *)LODWORD(this), v9) - *(_DWORD *)(LODWORD(this) + 32);
      if ( LODWORD(this) > 0x12C && v5[22] < 0 && v5[17] < 0 )
      {
        v5[5] = 2;
        this = COERCE_FLOAT(BlockOperateMgr::beginOperate(v3, 1));
      }
    }
  }
  if ( v5[8] >= 0 )
  {
    v10 = (float)(v5[11] - v5[9]);
    v11 = (float)(v5[12] - v5[10]);
    LODWORD(this) = Ogre::Sqrt(COERCE_OGRE_((float)(v10 * v10) + (float)(v11 * v11)), v12) <= 25.0;
    if ( this == 0.0 )
    {
      v13 = j_atan2(v11, v10);
      v14 = v13 * 57.296;
      if ( (float)(v13 * 57.296) < 0.0 )
        v14 = v14 + 360.0;
      LODWORD(this) = (int)(float)(v14 / 30.0);
      if ( this == 0.0 || LODWORD(this) == 11 )
      {
        v15 = 0;
      }
      else
      {
        if ( LODWORD(this) != 1 )
        {
          if ( (unsigned int)(LODWORD(this) - 2) <= 1 )
          {
            v15 = -1082130432;
LABEL_34:
            v16 = 0;
            goto LABEL_37;
          }
          if ( LODWORD(this) == 4 )
          {
            v15 = -1082130432;
LABEL_36:
            v16 = v15;
            goto LABEL_37;
          }
          if ( (unsigned int)(LODWORD(this) - 5) <= 1 )
          {
            v15 = 0;
          }
          else
          {
            if ( LODWORD(this) != 7 )
            {
              if ( (unsigned int)(LODWORD(this) - 8) > 1 )
              {
                if ( LODWORD(this) == 10 )
                  v15 = 1065353216;
                else
                  v15 = 0;
                goto LABEL_36;
              }
              v15 = 1065353216;
              goto LABEL_34;
            }
            v15 = 1065353216;
          }
          v16 = -1082130432;
LABEL_37:
          v17[8] = v15;
          v17[9] = v16;
          return this;
        }
        v15 = -1082130432;
      }
      v16 = 1065353216;
      goto LABEL_37;
    }
  }
  return this;
}


//======================================================================
// TouchControl::setSensitivity(int)
// address: 0x002E515C   size: 0x1C (28 bytes)
//======================================================================
float __fastcall TouchControl::setSensitivity(TouchControl *this, int a2)
{
  float result; // r0

  result = (float)((float)a2 / 50.0) + 2.0;
  *((float *)this + 29) = result;
  return result;
}


//======================================================================
// TouchControl::setReversalY(int)
// address: 0x002E517C   size: 0xA (10 bytes)
//======================================================================
bool *__fastcall TouchControl::setReversalY(TouchControl *this, int a2)
{
  bool *result; // r0

  result = (bool *)this + 120;
  *result = a2 != 0;
  return result;
}


//======================================================================
// TouchControl::setSightModel(int)
// address: 0x002E5186   size: 0xA (10 bytes)
//======================================================================
bool *__fastcall TouchControl::setSightModel(TouchControl *this, int a2)
{
  bool *result; // r0

  result = (bool *)this + 121;
  *result = a2 != 0;
  return result;
}


//======================================================================
// TouchControl::renderUI(void)
// address: 0x002E5190   size: 0xC68 (3176 bytes)
//======================================================================
int __fastcall TouchControl::renderUI(TouchControl *this)
{
  float v2; // r5
  float v3; // r7
  float v4; // r1
  float v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r6
  int v9; // r5
  int v10; // r5
  int v11; // r7
  float v12; // r2
  void (__fastcall *v13)(int, float, _DWORD, _DWORD, _DWORD, int, int, int, int, int, _DWORD, _DWORD); // r5
  float v14; // r0
  int result; // r0
  int v16; // r5
  int v17; // r7
  int v18; // r0
  int v19; // r1
  int v20; // r5
  int v21; // r7
  int v22; // r0
  int v23; // r1
  float v24; // r0
  int v25; // r7
  int v26; // r2
  int v27; // r5
  int v28; // r0
  int v29; // r1
  void (__fastcall *v30)(int, int); // r5
  float v31; // [sp+0h] [bp-124h]
  int v32; // [sp+8h] [bp-11Ch]
  int v33; // [sp+20h] [bp-104h]
  int v34; // [sp+20h] [bp-104h]
  float v35; // [sp+20h] [bp-104h]
  float v36; // [sp+24h] [bp-100h]
  int v37; // [sp+28h] [bp-FCh]
  int v38; // [sp+28h] [bp-FCh]
  int v39; // [sp+28h] [bp-FCh]
  float v40; // [sp+28h] [bp-FCh]
  float v41; // [sp+2Ch] [bp-F8h]
  int v42; // [sp+2Ch] [bp-F8h]
  int UIFontByIndex; // [sp+2Ch] [bp-F8h]
  int v44; // [sp+30h] [bp-F4h]
  float v45; // [sp+30h] [bp-F4h]
  float v46; // [sp+34h] [bp-F0h]
  int v47; // [sp+38h] [bp-ECh]
  int v48; // [sp+38h] [bp-ECh]
  float v49; // [sp+38h] [bp-ECh]
  int v50; // [sp+3Ch] [bp-E8h]
  int v51; // [sp+40h] [bp-E4h]
  char *v52; // [sp+48h] [bp-DCh] BYREF
  int v53; // [sp+4Ch] [bp-D8h] BYREF
  char v54; // [sp+50h] [bp-D4h]
  char v55; // [sp+51h] [bp-D3h]
  char v56; // [sp+52h] [bp-D2h]
  char v57; // [sp+53h] [bp-D1h]
  float v58; // [sp+54h] [bp-D0h] BYREF
  float v59; // [sp+58h] [bp-CCh]
  float v60; // [sp+5Ch] [bp-C8h]
  float v61; // [sp+60h] [bp-C4h]
  _DWORD v62[2]; // [sp+64h] [bp-C0h] BYREF
  _BYTE v63[184]; // [sp+6Ch] [bp-B8h] BYREF

  v36 = COERCE_FLOAT(sub_2E4684());
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)this + 96))(*(_DWORD *)this, *((_DWORD *)this + 1));
  if ( *(_BYTE *)(Ogre::Singleton<ClientManager>::ms_Singleton + 49) == 0 )
  {
    v33 = (int)(float)(v36 * 226.0);
    v37 = (int)(float)(v36 * 86.0);
    if ( *((int *)this + 8) < 0 )
    {
      v44 = (int)(float)(v36 * 220.0);
      v47 = (int)(float)(v36 * 538.0);
      v51 = v47;
      v50 = v44;
      v42 = 0xFFFFFF;
    }
    else
    {
      v50 = *((_DWORD *)this + 9);
      v51 = *((_DWORD *)this + 10);
      v2 = (float)(*((_DWORD *)this + 11) - v50);
      v3 = (float)(*((_DWORD *)this + 12) - v51);
      v5 = Ogre::Sqrt(COERCE_OGRE_((float)(v2 * v2) + (float)(v3 * v3)), v4);
      v41 = (float)((v33 - v37) / 2);
      if ( v5 > v41 )
      {
        v2 = (float)(v41 * v2) / v5;
        v3 = (float)(v41 * v3) / v5;
      }
      v44 = (int)(float)((float)*((int *)this + 9) + v2);
      v47 = (int)(float)((float)*((int *)this + 10) + v3);
      v42 = -1;
    }
    (*(void (__fastcall **)(_DWORD, float, float, float, float, int, int, int, int, int, _DWORD, _DWORD))(**(_DWORD **)this + 112))(
      *(_DWORD *)this,
      (float)(v50 + v33 / -2),
      (float)(v51 + v33 / -2),
      (float)v33,
      (float)v33,
      v42,
      2,
      81,
      185,
      185,
      0,
      0);
    (*(void (__fastcall **)(_DWORD, float, float, float, float, int, int, int, int, int, _DWORD, _DWORD))(**(_DWORD **)this + 112))(
      *(_DWORD *)this,
      (float)(v44 + v37 / -2),
      (float)(v47 + v37 / -2),
      (float)v37,
      (float)v37,
      v42,
      653,
      102,
      60,
      60,
      0,
      0);
    if ( *((_BYTE *)this + 121) == 0 )
    {
      v6 = sub_2E46C8(&v58, v62, v36);
      (*(void (__fastcall **)(_DWORD, float, float, float, float, int, int, int, int, int, _DWORD, _DWORD))(**(_DWORD **)this + 112))(
        *(_DWORD *)this,
        (float)(v6 / -2 + LODWORD(v58)),
        (float)(v6 / -2 + v62[0]),
        (float)v6,
        (float)v6,
        -1,
        192,
        80,
        125,
        125,
        0,
        0);
      v7 = *(_DWORD *)this;
      if ( *((int *)this + 4) < 0 )
        (*(void (__fastcall **)(int, float, float, float, float, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v7 + 112))(
          v7,
          (float)((int)(float)(v36 * 55.0) / -2 + LODWORD(v58)),
          (float)((int)(float)(v36 * 55.0) / -2 + v62[0]),
          (float)(int)(float)(v36 * 55.0),
          (float)(int)(float)(v36 * 55.0),
          -1,
          725,
          104,
          55,
          55,
          0,
          0);
      else
        (*(void (__fastcall **)(int, float, float, float, float, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v7 + 112))(
          v7,
          (float)((int)(float)(v36 * 100.0) / -2 + LODWORD(v58)),
          (float)((int)(float)(v36 * 100.0) / -2 + v62[0]),
          (float)(int)(float)(v36 * 100.0),
          (float)(int)(float)(v36 * 100.0),
          -1,
          785,
          90,
          83,
          83,
          0,
          0);
    }
    v8 = (int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88) - (float)(v36 * 150.0));
    v9 = (int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92) - (float)(v36 * 160.0));
    v34 = *(_DWORD *)this;
    if ( *((int *)this + 13) < 0 )
      (*(void (__fastcall **)(int, float, float, _DWORD, _DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v34 + 112))(
        v34,
        (float)v8,
        (float)v9,
        v36 * 120.0,
        v36 * 120.0,
        -1,
        323,
        93,
        78,
        78,
        0,
        0);
    else
      (*(void (__fastcall **)(int, float, float, _DWORD, _DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v34 + 112))(
        v34,
        (float)v8,
        (float)v9,
        v36 * 120.0,
        v36 * 120.0,
        -1,
        405,
        93,
        78,
        78,
        0,
        0);
    v10 = (int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92) - (float)(v36 * 310.0));
    v11 = *(_DWORD *)this;
    if ( *((int *)this + 17) < 0 )
    {
      v14 = (float)v10;
      v31 = v36 * 120.0;
      v32 = 486;
      v13 = *(void (__fastcall **)(int, float, _DWORD, _DWORD, _DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v11 + 112);
      v12 = v14;
    }
    else
    {
      v12 = (float)v10;
      v32 = 569;
      v31 = v36 * 120.0;
      v13 = *(void (__fastcall **)(int, float, _DWORD, _DWORD, _DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v11 + 112);
    }
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v13)(
      v11,
      (float)(int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88) - (float)(v36 * 150.0)),
      LODWORD(v12),
      v36 * 120.0,
      LODWORD(v31),
      -1,
      v32,
      93,
      78,
      78,
      0,
      0);
  }
  result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)this + 100))(*(_DWORD *)this);
  if ( *((int *)this + 13) >= 0 )
  {
    v16 = *((_DWORD *)this + 16) / 5;
    v17 = (int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88) - (float)(v36 * 261.0));
    v38 = (int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92) - (float)(v36 * 272.0));
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)this + 96))(*(_DWORD *)this, *((_DWORD *)this + 3));
    (*(void (__fastcall **)(_DWORD, float, float, _DWORD, _DWORD, int, int, int, int, int, _DWORD, _DWORD))(**(_DWORD **)this + 112))(
      *(_DWORD *)this,
      (float)v17,
      (float)v38,
      v36 * 340.0,
      v36 * 340.0,
      -1,
      (v16 % 4) << 7,
      (v16 / 4) << 7,
      128,
      128,
      0,
      0);
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)this + 100))(*(_DWORD *)this);
    v18 = *((_DWORD *)this + 16) + 1;
    v19 = v18 % 80;
    result = v18 / 80;
    *((_DWORD *)this + 16) = v19;
  }
  if ( *((int *)this + 17) >= 0 )
  {
    v20 = *((_DWORD *)this + 21) / 5;
    v21 = (int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88) - (float)(v36 * 260.0));
    v39 = (int)(float)((float)*(int *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92) - (float)(v36 * 422.0));
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)this + 96))(*(_DWORD *)this, *((_DWORD *)this + 3));
    (*(void (__fastcall **)(_DWORD, float, float, _DWORD, _DWORD, int, int, int, int, int, _DWORD, _DWORD))(**(_DWORD **)this + 112))(
      *(_DWORD *)this,
      (float)v21,
      (float)v39,
      v36 * 340.0,
      v36 * 340.0,
      -1,
      (v20 % 4) << 7,
      (v20 / 4) << 7,
      128,
      128,
      0,
      0);
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)this + 100))(*(_DWORD *)this);
    v22 = *((_DWORD *)this + 21) + 1;
    v23 = v22 % 80;
    result = v22 / 80;
    *((_DWORD *)this + 21) = v23;
  }
  if ( *((int *)this + 22) >= 0
    && *(_BYTE *)(Ogre::Singleton<ClientManager>::ms_Singleton + 49) == 0
    && (*((_DWORD *)this + 23) & 0xFFFFFFFD) == 0 )
  {
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)this + 96))(*(_DWORD *)this, *((_DWORD *)this + 1));
    (*(void (__fastcall **)(_DWORD, float, float, float, float, int, int, int, int, int, _DWORD, _DWORD))(**(_DWORD **)this + 112))(
      *(_DWORD *)this,
      (float)((int)(float)(v36 * 83.0) / -2 + *((_DWORD *)this + 24)),
      (float)((int)(float)(v36 * 83.0) / -2 + *((_DWORD *)this + 25)),
      (float)(int)(float)(v36 * 83.0),
      (float)(int)(float)(v36 * 83.0),
      -1,
      785,
      90,
      83,
      83,
      0,
      0);
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)this + 100))(*(_DWORD *)this);
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)this + 96))(*(_DWORD *)this, *((_DWORD *)this + 2));
    (*(void (__fastcall **)(_DWORD, float, float, float, float, int, int, int, int, int, _DWORD, _DWORD))(**(_DWORD **)this + 112))(
      *(_DWORD *)this,
      (float)((int)(float)(v36 * 96.0) / -2 + *((_DWORD *)this + 24)),
      (float)((int)(float)(v36 * 96.0) / -2 + *((_DWORD *)this + 25)),
      (float)(int)(float)(v36 * 96.0),
      (float)(int)(float)(v36 * 96.0),
      -1,
      386,
      730,
      96,
      96,
      0,
      0);
    v24 = COERCE_FLOAT(BlockOperateMgr::getDigProgress(*(BlockOperateMgr **)(g_pPlayerCtrl + 264)));
    v40 = v24;
    if ( *((_DWORD *)this + 23) == 2 && v24 >= 0.0 )
    {
      UIFontByIndex = FrameManager::getUIFontByIndex((FrameManager *)g_pFrameMgr, 5);
      v48 = *((_DWORD *)this + 25);
      v25 = *(_DWORD *)this;
      if ( *((_DWORD *)this + 28) == 1 )
      {
        v45 = (float)(int)(float)(v36 * 81.0);
        (*(void (__fastcall **)(int, _DWORD, _DWORD, float, _DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v25 + 112))(
          v25,
          (float)(*((_DWORD *)this + 24) - (int)(float)(v36 * 75.0)) - (float)(v36 * 30.0),
          (float)(v48 - (int)(float)(v36 * 81.0)) - (float)(v36 * 30.0),
          (float)(int)(float)(v36 * 75.0),
          LODWORD(v45),
          -1,
          487,
          731,
          75,
          81,
          0,
          0);
        v49 = (float)*((int *)this + 25);
        v26 = *((_DWORD *)this + 24);
        v59 = (float)(v49 - v45) - (float)(v36 * 30.0);
        v58 = (float)v26 - (float)(v36 * 25.0);
        v61 = v59 + (float)(v36 * 24.0);
        v60 = v58 + (float)(v36 * 60.0);
        (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, float, _DWORD, int, int, int, int, int, _DWORD, _DWORD))(**(_DWORD **)this + 112))(
          *(_DWORD *)this,
          (float)(v26 - (int)(float)(v36 * 71.0)) - (float)(v36 * 32.0),
          (float)(v49 - (float)((float)(int)(float)(v36 * 77.0) * v40)) - (float)(v36 * 32.0),
          (float)(int)(float)(v36 * 71.0),
          (float)(int)(float)(v36 * 77.0) * v40,
          -1,
          570,
          (int)(float)((float)((float)(1.0 - v40) * 77.0) + 733.0),
          71,
          (int)(float)(v40 * 77.0),
          0,
          0);
      }
      else
      {
        v27 = (int)(float)(v36 * 81.0);
        (*(void (__fastcall **)(int, _DWORD, _DWORD, float, float, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v25 + 112))(
          v25,
          (float)*((int *)this + 24) + (float)(v36 * 30.0),
          (float)(v48 - v27) - (float)(v36 * 30.0),
          (float)(int)(float)(v36 * 75.0),
          (float)v27,
          -1,
          487,
          731,
          75,
          81,
          4,
          0);
        v46 = (float)*((int *)this + 25);
        v59 = (float)(v46 - (float)v27) - (float)(v36 * 30.0);
        v35 = (float)*((int *)this + 24);
        v58 = v35 - (float)(v36 * 30.0);
        v61 = v59 + (float)(v36 * 24.0);
        v60 = v58 + (float)(v36 * 60.0);
        (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, float, _DWORD, int, int, int, int, int, int, _DWORD))(**(_DWORD **)this + 112))(
          *(_DWORD *)this,
          v35 + (float)(v36 * 32.0),
          (float)(v46 - (float)((float)(int)(float)(v36 * 77.0) * v40)) - (float)(v36 * 32.0),
          (float)(int)(float)(v36 * 71.0),
          (float)(int)(float)(v36 * 77.0) * v40,
          -1,
          570,
          (int)(float)((float)((float)(1.0 - v40) * 77.0) + 733.0),
          71,
          (int)(float)(v40 * 77.0),
          4,
          0);
      }
      sub_3A3350(v62, 24);
      v52 = &byte_55FB88;
      sub_3B4758(v63, (int)(float)(v40 * 100.0));
      sub_3A7174(v62, &v52);
      std::operator+<char>((int)&v53, (int)&v52, "%");
      v28 = *(_DWORD *)this;
      v29 = *(_DWORD *)(UIFontByIndex + 20);
      v30 = *(void (__fastcall **)(int, int))(**(_DWORD **)this + 40);
      v54 = -1;
      v55 = -1;
      v56 = -1;
      v57 = -1;
      v30(v28, v29);
      sub_3BDF80(&v53);
      sub_3BDF80(&v52);
      sub_3A1ECC(v62);
    }
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)this + 100))(*(_DWORD *)this);
  }
  return result;
}

