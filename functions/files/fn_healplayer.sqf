params["_index"];

if (_index == -1) exitWith {hintSilent "Select a player";};
_unit = (switchableUnits select _index);
	
if ( lifeState _unit in ["INCAPACITATED","DEAD-RESPAWN","DEAD"] ) then {
	hintSilent "Player is dead or incapacitated"
} else {
	_unit setDamage 0;
};