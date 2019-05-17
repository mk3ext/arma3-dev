params["_index"];

if (_index == -1) exitWith {hintSilent "Select a player";};
_unit = (switchableUnits select _index);

_unit setDamage 1;