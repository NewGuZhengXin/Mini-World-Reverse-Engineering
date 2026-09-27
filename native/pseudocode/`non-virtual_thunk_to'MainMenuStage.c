// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: `non-virtual_thunk_to'MainMenuStage

//======================================================================
// `non-virtual thunk to'MainMenuStage::onLoadWorldProp(int,tagOWGlobal *,tagRoleData *,tagAchievementList *)
// address: 0x002A5624   size: 0x10 (16 bytes)
//======================================================================
int __fastcall `non-virtual thunk to'MainMenuStage::onLoadWorldProp(int a1, int a2, int *a3)
{
  return MainMenuStage::onLoadWorldProp(a1 - 4, a2, a3);
}

