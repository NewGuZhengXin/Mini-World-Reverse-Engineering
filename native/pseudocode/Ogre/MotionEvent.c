// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MotionEvent

//======================================================================
// Ogre::MotionEvent::TriggerMe(Ogre::Entity *)
// address: 0x00190EC2   size: 0x82 (130 bytes)
//======================================================================
void __fastcall Ogre::MotionEvent::TriggerMe(int **this, Ogre::Entity *a2)
{
  int *i; // r7
  _DWORD *EventHandler; // r6
  void *v5; // r1
  void (__fastcall ***v6)(_DWORD, Ogre::FixedString **); // r3
  void *v7; // r1
  _DWORD *v8; // [sp+0h] [bp-24h]
  void (__fastcall ***v9)(_DWORD, Ogre::FixedString **); // [sp+4h] [bp-20h]
  Ogre::FixedString *v11; // [sp+10h] [bp-14h] BYREF
  Ogre::FixedString *v12; // [sp+14h] [bp-10h] BYREF
  int v13; // [sp+18h] [bp-Ch]
  int v14; // [sp+1Ch] [bp-8h]

  for ( i = *this; i != *(this + 1); ++i )
  {
    v11 = (Ogre::FixedString *)*i;
    Ogre::FixedString::addRef((int)v11, a2);
    EventHandler = Ogre::Entity::getEventHandler((int)a2, &v11);
    Ogre::FixedString::~FixedString(&v11, v5);
    if ( EventHandler != nullptr )
    {
      v8 = (_DWORD *)*EventHandler;
      while ( v8 != (_DWORD *)EventHandler[1] )
      {
        v6 = (void (__fastcall ***)(_DWORD, Ogre::FixedString **))*v8++;
        v9 = v6;
        v12 = nullptr;
        v13 = 0;
        v14 = 0;
        v11 = a2;
        Ogre::FixedString::operator=((int *)&v12, i);
        v13 = 0;
        v14 = 0;
        (**v9)(v9, &v11);
        Ogre::FixedString::~FixedString(&v12, v7);
      }
    }
  }
  *((_BYTE *)this + 16) = 1;
}


//======================================================================
// Ogre::MotionEvent::Reset(void)
// address: 0x00190F7C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::MotionEvent::Reset(int this)
{
  *(_BYTE *)(this + 16) = 0;
  return this;
}

