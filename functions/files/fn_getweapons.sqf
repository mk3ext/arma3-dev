//thought might aswell add weapons
closeDialog(1234);
createDialog("Weapons");
waitUntil {!(isNull (findDisplay 46))};
_weapons = "getNumber (_x >> 'type') == 1 && getNumber (_x >> 'scope') == 2 && getText (_x >> 'author') == 'Bohemia Interactive'" configClasses (configFile >> "cfgWeapons");
_pistols = [];

_sortWeapons = {
	_array = (_this select 0);
	{
		_array deleteAt (_array find _x);
	} forEach _array;
	_array;
};

{
	_weapconf = configName _x;
	_weaponclass = getText (configFile >> "cfgWeapons" >> _weapconf >> "baseWeapon");
	if (_weaponclass != "") then {
		_pistols pushBack _weaponclass;
	};
} forEach _weapons;

_pistols = [_pistols] call _sortWeapons;
{
	_weapname = getText (configFile >> "cfgWeapons" >> _x >> "displayname");
	lbAdd [1300, _weapname];
	lbSetData [1300, _forEachIndex, _x];
} forEach _pistols;