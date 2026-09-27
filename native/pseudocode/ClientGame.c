// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientGame

//======================================================================
// ClientGame::renderUI(bool)
// address: 0x002A54BC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientGame::renderUI(ClientGame *this, bool a2)
{
  ;
}


//======================================================================
// ClientGame::beginGame(void)
// address: 0x002A54BE   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientGame::beginGame(ClientGame *this)
{
  ;
}


//======================================================================
// ClientGame::endGame(void)
// address: 0x002A54C0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientGame::endGame(ClientGame *this)
{
  ;
}


//======================================================================
// ClientGame::pauseGame(void)
// address: 0x002A54C2   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientGame::pauseGame(ClientGame *this)
{
  ;
}


//======================================================================
// ClientGame::~ClientGame()
// address: 0x002DFAA0   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN10ClientGameD1Ev'
void __fastcall ClientGame::~ClientGame(ClientGame *this)
{
  *(_DWORD *)this = &off_461270;
  *((_DWORD *)this + 1) = &off_4612B8;
}


//======================================================================
// ClientGame::applayGameSetData(void)
// address: 0x002DFAB8   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientGame::applayGameSetData(ClientGame *this)
{
  ;
}


//======================================================================
// ClientGame::getDebugInfo(char *,int)
// address: 0x002DFABA   size: 0x6 (6 bytes)
//======================================================================
void __fastcall ClientGame::getDebugInfo(ClientGame *this, char *a2, int a3)
{
  *a2 = 0;
}


//======================================================================
// ClientGame::onGameEvent(GameEvent *)
// address: 0x002DFAC0   size: 0x2 (2 bytes)
//======================================================================
void ClientGame::onGameEvent()
{
  ;
}


//======================================================================
// ClientGame::onInputEvent(Ogre::InputEvent const&)
// address: 0x002DFAC4   size: 0x18 (24 bytes)
//======================================================================
bool __fastcall ClientGame::onInputEvent(ClientGame *this, const InputEvent *a2)
{
  return (***(int (__fastcall ****)(_DWORD, const InputEvent *))(Ogre::Singleton<ClientManager>::ms_Singleton + 28))(
           *(_DWORD *)(Ogre::Singleton<ClientManager>::ms_Singleton + 28),
           a2) != 0;
}


//======================================================================
// ClientGame::~ClientGame()
// address: 0x002DFAE0   size: 0x1C (28 bytes)
//======================================================================
void __fastcall ClientGame::~ClientGame(ClientGame *this)
{
  *(_DWORD *)this = &off_461270;
  *((_DWORD *)this + 1) = &off_4612B8;
  operator delete(this);
}

