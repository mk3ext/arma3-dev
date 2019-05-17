_nearplayers = (position player) nearEntities [["Man"], 20];
{
	_x setDamage 0;
} forEach _nearplayers;