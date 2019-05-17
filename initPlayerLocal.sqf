waitUntil {!(isNil "adminuids")};
_isAdmin = player call xat_fnc_isadmin;

if (_isAdmin) then {
	onMapSingleClick "if(_alt) then {vehicle player setPos _pos};";
	waitUntil {!(isNull (findDisplay 46))};
	(findDisplay 46) displayAddEventHandler ["KeyDown", {
		switch (_this select 1) do {
			case 210: {
				[player] spawn xat_fnc_openMenu;
			};
			case 43: {
				player call xat_fnc_repairnear;
			};
			case 68: {
				player call xat_fnc_healnear;
			};
			case 67: {
				player call xat_fnc_god;
			};
		};
		false;

	}];
};