#include "Enemy2.h"

Enemy2::Enemy2(const std::string& name) : name(name), hp(100)
{
	std::cout << name << "‚ªoŒ»‚µ‚½\n";
}

Enemy2::~Enemy2()
{
	std::cout << name << "‚Í”jŠü‚³‚ê‚Ü‚µ‚½B\n";
}

void Enemy2::Draw() const
{
	std::cout << "–¼‘O:" << name << "\n";
	std::cout << "HP:" << hp << "\n";
}