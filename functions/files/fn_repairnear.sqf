_nearvehicles = (position player) nearEntities [["Landvehicle", "Air", "Ship"], 100];
{
	_x setDamage 0;
} forEach _nearvehicles;
