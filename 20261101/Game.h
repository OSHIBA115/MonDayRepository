#pragma once

namespace player
{
	int HP = 100;

	void Attack();
	void Guard();
	void Recovery();
}

namespace enemy
{
	int HP = 100;

	void Guard();
	void Attack();
}

