//clears current gear and replaces with vr set
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
player forceAddUniform "U_B_Protagonist_VR";
player addHeadgear "H_Beret_blk";
player addBackpackGlobal "B_ViperHarness_blk_F";
player addItemToUniform "NVGoggles";
{player linkItem _x;} foreach ["ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"];
player addweapon "Rangefinder";
hintSilent "Admin Gear loaded";