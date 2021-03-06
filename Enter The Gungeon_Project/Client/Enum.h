#pragma once
namespace BULLET
{
	enum COUNT { COUNT_NOW, COUNT_MAX, COUNT_ALL_NOW, COUNT_ALL_MAX, END };
	enum TYPE { NORMAL, RAZER, CHARGE };
}
namespace OBJ
{
	enum ID { BOOM, WALL, SHOP, TELEPORT, DESK, GROUND, DOOR, MONSTER, PLAYER, RAZER, P_BULLET, M_BULLET, DREADSHOT, GUN, EFFECT, MOUSE, END };
	enum TYPE { NORMAL, RIFLE, WIZARD, BIRD, BOSS, BOXOBJ, ME };
}
namespace PLAYER
{
	enum TIME { ROLL, DAMAGED, END };
}
namespace GUN
{
	enum TIME { RELOAD, RATEOFFIRE, END };
	enum TYPE { NORMAL, AK, UMP, SHOTGUN, RAZER, CHARGE };
}
namespace MONSTER
{
	enum DIR { UP, DOWN, LEFT, RIGHT };
}
namespace DESK
{
	enum DIR { LEFT, RIGHT, TOP, BOTTOM, END };
}
namespace DOOR
{
	enum TYPE { LEFT, RIGHT, TOP, BOTTOM };
}