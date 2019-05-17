params["_index"];
if (_index == -1) exitWith {hintSilent "Select a player";};
_unit = (switchableUnits select _index);
_pos = getPosATL _unit;
player setPosATL [_pos select 0, _pos select 1, _pos select 2];
