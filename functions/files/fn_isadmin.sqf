params["_player"];

_id = getPlayerUID player;

if (_id in AdminList) exitWith { true };

false; //if isnt admin returns false