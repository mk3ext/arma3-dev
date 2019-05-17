
_isGod = isDamageAllowed player;
if (_isGod) then {
	player allowDamage false;
	hintSilent "God mode on";
} else {
	player allowDamage true;
	hintSilent "God mode off";
};