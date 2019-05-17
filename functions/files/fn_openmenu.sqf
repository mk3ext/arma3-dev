params["_player"];

if (!(isNull (findDisplay 1234))) exitWith { closeDialog 2;};

createDialog "AdminMenu";
waitUntil {!(isNull(findDisplay 1234))};
[] spawn xat_fnc_autorefreshpl;

