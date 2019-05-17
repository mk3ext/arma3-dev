if (isObjectHidden player) then {
	player hideObjectGlobal false;
    hintSilent "Shown";
	} else {
		player hideObjectGlobal true;
		hintSilent "Hidden";
	};