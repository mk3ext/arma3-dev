
while {!(isNull(findDisplay(1234)))} do {
	{
		lbAdd[1500, name _x];
		_side = side _x;
		switch (_side) do {
			//because i like colours
			case west: {lbSetColor [1500, _forEachIndex, [0.118,0.565,1,1]];};
			case east: {lbSetColor [1500, _forEachIndex, [0.98,0.502,0.447,1]];};
			case civilian: {lbSetColor [1500, _forEachIndex, [0.8,0.8,0,1]];};
		};
	} forEach switchableUnits;

	sleep .1; // doesnt spam
	lbClear 1500 // no repeats
};